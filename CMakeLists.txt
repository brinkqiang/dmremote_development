cmake_minimum_required(VERSION 3.2)

PROJECT(dmremote_development)

LIST(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
INCLUDE(cmake/ModuleImport.cmake)
INCLUDE(cmake/ModuleCompileOptions.cmake)
ModuleSetCompileOptions()
ModuleSetWinCompilerFlags()

SET(DMREMOTE_DEVELOPMENT_VERSION_MAJOR "1")
SET(DMREMOTE_DEVELOPMENT_VERSION_MINOR "0")
SET(DMREMOTE_DEVELOPMENT_VERSION_PATCH "1")
SET(DMREMOTE_DEVELOPMENT_VERSION "${DMREMOTE_DEVELOPMENT_VERSION_MAJOR}.${DMREMOTE_DEVELOPMENT_VERSION_MINOR}.${DMREMOTE_DEVELOPMENT_VERSION_PATCH}")

MESSAGE(STATUS "VERSION: ${DMREMOTE_DEVELOPMENT_VERSION}")

OPTION(USE_DMREMOTE_DEVELOPMENT "use dmremote_development" OFF)
CONFIGURE_FILE(${CMAKE_CURRENT_SOURCE_DIR}/include/dmremote_development_config.h.in ${CMAKE_CURRENT_SOURCE_DIR}/include/dmremote_development_config.h)

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