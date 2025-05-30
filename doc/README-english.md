# MouseClicker

**[中文说明](README.md)**

This project is a mouse auto-clicker developed in C++ for the Windows platform. It can automatically simulate mouse clicks, making it useful for automation testing, gaming assistance, and similar scenarios. The project uses CMake for building, and the codebase is clean, maintainable, and easy to extend. Detailed usage instructions and UI screenshots will be provided later to help users get started quickly.

## Screenshots (To be added)

<!-- Screenshots or UI illustrations will be added here in the future -->

## Usage Guide (To be added)

<!-- Detailed usage instructions will be added here in the future -->

## Project Development

### Quick Start

1. Install [CMake](https://cmake.org/download/) and [MinGW-w64](https://www.mingw-w64.org/) (or use the MSVC compiler provided by Visual Studio).
2. Open this project folder.
3. Use the CMake Tools extension in VS Code to configure and build the project.
4. Run the generated executable file.

### Directory Structure

- `CMakeLists.txt`: CMake build configuration file
- `src/`: Source code directory
- `include/`: Header file directory

### Main Commands

- Configure project: `cmake -S . -B build`
- Build project: `cmake --build build`
- Run program: `./build/MouseClicker.exe`

### Requirements

- CMake
- C++17 or later
- Recommended VS Code extensions: CMake Tools, C/C++, CodeLLDB or Microsoft C++ Debugger

### Building

To build the project, follow these steps:

1. Clone the repository
2. Create a build directory: `mkdir build && cd build`
3. Configure the project with CMake: `cmake ..`
4. Build the project: `cmake --build .`

### Usage

Once built, you can run the MouseClicker executable. A system tray icon will appear, allowing you to access the settings and start/stop the auto-clicker.

### Contributing

Contributions are welcome! Please open an issue or submit a pull request for any improvements or bug fixes.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.