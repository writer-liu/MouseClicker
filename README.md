# MouseClicker C++ 项目

本项目为C++基础项目，适用于Windows平台，使用CMake进行构建，推荐在VS Code中开发和调试。

## 快速开始

1. 安装 [CMake](https://cmake.org/download/) 和 [MinGW-w64](https://www.mingw-w64.org/)（或使用Visual Studio自带的MSVC编译器）。
2. 打开本项目文件夹。
3. 使用 VS Code 的 CMake Tools 插件进行配置和编译。
4. 运行生成的可执行文件。

## 目录结构
- `CMakeLists.txt`：CMake 构建配置文件
- `src/`：源代码目录
- `include/`：头文件目录

## 主要命令
- 配置项目：`cmake -S . -B build`
- 编译项目：`cmake --build build`
- 运行程序：`./build/MouseClicker.exe`

## 依赖
- CMake
- C++17 或更高
- 推荐 VS Code 插件：CMake Tools、C/C++、CodeLLDB 或 Microsoft C++ 调试器
