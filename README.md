# dmremote_development


# 环境设置

## 第一步：环境准备

### 安装docker插件
![Mobile Preview](/images/docker.png)

### 安装Remote Development插件，主要用到Dev Containers、Remote-SSH插件。

### 如果是自己新建的工程 copy .devcontainer目录文件 到你的新工程目录
### 例子是C++项目， 有其他需求 到模板工程查看 https://github.com/devcontainers/templates
![Mobile Preview](/images/remote-development.png)

## 第二步：vscode打开目录， 提示从容器中重新打开
![Mobile Preview](/images/open-with-docker.png)

## 第三步: 安装C++插件
![Mobile Preview](/images/c++.png)

## 第四步: 安装CMake插件
![Mobile Preview](/images/cmake.png)

## 第五步：编译项目
./build.sh
![Mobile Preview](/images/build.png)

## 第六步：调试项目
在test\dmremote_developmenttest\dmremote_developmenttest.cpp中设置断点，点击调试按钮，即可调试。

![Mobile Preview](/images/debug.png)


# 注意事项

## 需要分清楚 本地插件， 与容器插件， 比如docker, Remote Development都是本地要用的插件， 而C++/CMake插件是容器内用的