# MouseClicker 鼠标连点器  **未完工！！！**

**[English](doc/README-english.md)**

本项目是一款基于 C++ 开发的鼠标连点器，适用于 Windows 平台。它能够自动模拟鼠标点击，适用于自动化测试、游戏辅助等场景。项目采用 CMake 进行构建，代码结构清晰，易于维护和扩展。后续将配以详细的使用说明和操作界面截图，方便用户快速上手。

## 配图（后续补充）

<!-- 此处将来会补充操作界面截图或相关配图 -->

## 使用说明（后续补充）

<!-- 此处将来会补充详细的使用方法说明 -->

## 项目开发

### 快速开始

1. 安装 [CMake](https://cmake.org/download/) 和 [MinGW-w64](https://www.mingw-w64.org/)（或使用Visual Studio自带的MSVC编译器）。
2. 打开本项目文件夹。
3. 使用 VS Code 的 CMake Tools 插件进行配置和编译。
4. 运行生成的可执行文件。

### 目录结构

- `CMakeLists.txt`：CMake 构建配置文件
- `src/`：源代码目录
- `include/`：头文件目录

### 主要命令

- 配置项目：`cmake -S . -B build`
- 编译项目：`cmake --build build`
- 运行程序：`./build/MouseClicker.exe`

### 依赖

- CMake
- C++17 或更高
- 推荐 VS Code 插件：CMake Tools、C/C++、CodeLLDB 或 Microsoft C++ 调试器

### 构建

构建项目请按照以下步骤：

1. 克隆本仓库
2. 创建构建目录：`mkdir build && cd build`
3. 使用 CMake 配置项目：`cmake ..`
4. 编译项目：`cmake --build .`

### 使用

编译完成后，运行 MouseClicker 可执行文件。系统托盘会出现图标，可通过该图标访问设置并启动/停止自动点击。

### 贡献

欢迎贡献代码！如有改进建议或发现 bug，请提交 issue 或 pull request。
