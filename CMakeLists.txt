cmake_minimum_required(VERSION 3.8)

PROJECT(dmremote_development)

LIST(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
INCLUDE(cmake/ModuleImport.cmake)
INCLUDE(cmake/ModuleCompileOptions.cmake)
ModuleSetCompileOptions()
ModuleSetWinCompilerFlags()

ModuleImportAll("thirdparty")
LibImport("dmremote_development_module" "src/dmremote_development_module")
ExeImport("test" "dmremote_development_module")

#ADD_CUSTOM_COMMAND(
#TARGET dmremote_developmenttest
#PRE_BUILD
#COMMAND ${CMAKE_COMMAND} -E copy_if_different
#${CMAKE_CURRENT_SOURCE_DIR}/config/test.csv
#$<TARGET_FILE_DIR:dmremote_developmenttest>
#)

#INSTALL(DIRECTORY include/ DESTINATION include)
#INSTALL(TARGETS dmremote_development
#        RUNTIME DESTINATION bin
#        LIBRARY DESTINATION lib
#        ARCHIVE DESTINATION lib)

#SET(DMREMOTE_DEVELOPMENT_LIBS "dmremote_development")
#MARK_AS_ADVANCED(${DMREMOTE_DEVELOPMENT_LIBS})