cmake_minimum_required(VERSION 3.25.0)
project(CmakeTutorial VERSION 0.1.0 LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# fetch the dependencies needed
include(FetchContent)
FetchContent_Declare(
	fmt
	GIT_REPOSITORY https://github.com/fmtlib/fmt.git
	GIT_TAG 10.1.1
)

FetchContent_MakeAvailable(fmt)

add_executable(CmakeTutorial main.cpp)
target_link_libraries(CmakeTutorial PRIVATE fmt::fmt)