# dmremote_development

Copyright (c) 2013-2018 brinkqiang (brink.qiang@gmail.com)

[![dmremote_development](https://img.shields.io/badge/brinkqiang-dmremote_development-blue.svg?style=flat-square)](https://github.com/brinkqiang/dmremote_development)
[![License](https://img.shields.io/badge/license-MIT-brightgreen.svg)](https://github.com/brinkqiang/dmremote_development/blob/master/LICENSE)
[![blog](https://img.shields.io/badge/Author-Blog-7AD6FD.svg)](https://brinkqiang.github.io/)
[![Open Source Love](https://badges.frapsoft.com/os/v3/open-source.png)](https://github.com/brinkqiang)
[![GitHub stars](https://img.shields.io/github/stars/brinkqiang/dmremote_development.svg?label=Stars)](https://github.com/brinkqiang/dmremote_development) 
[![GitHub forks](https://img.shields.io/github/forks/brinkqiang/dmremote_development.svg?label=Fork)](https://github.com/brinkqiang/dmremote_development)

## Build status
| [Linux][lin-link] | [Mac][mac-link] | [Windows][win-link] |
| :---------------: | :----------------: | :-----------------: |
| ![lin-badge]      | ![mac-badge]       | ![win-badge]        |

[lin-badge]: https://github.com/brinkqiang/dmremote_development/workflows/linux/badge.svg "linux build status"
[lin-link]:  https://github.com/brinkqiang/dmremote_development/actions/workflows/linux.yml "linux build status"
[mac-badge]: https://github.com/brinkqiang/dmremote_development/workflows/mac/badge.svg "mac build status"
[mac-link]:  https://github.com/brinkqiang/dmremote_development/actions/workflows/mac.yml "mac build status"
[win-badge]: https://github.com/brinkqiang/dmremote_development/workflows/win/badge.svg "win build status"
[win-link]:  https://github.com/brinkqiang/dmremote_development/actions/workflows/win.yml "win build status"

# 环境设置

## 第一步：环境准备

### 安装docker插件
![Mobile Preview](/images/docker.png)

### 安装docker-desktop
![Mobile Preview](/images/docker-desktop.png)

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