# CMAKE PROJECT :

cmakelists for imgui
FetchContent_Populate(imgui
  URL https://github.com/ocornut/imgui/archive/docking.zip
  SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/imgui
)

set(OpenGL_GL_PREFERENCE "LEGACY")
find_package(OpenGL 2 REQUIRED)
find_package(glfw3 REQUIRED)

add_library(imgui_glfw STATIC
  imgui/imgui.cpp
  imgui/imgui_draw.cpp
  imgui/imgui_demo.cpp
  imgui/imgui_tables.cpp
  imgui/imgui_widgets.cpp

  imgui/backends/imgui_impl_glfw.cpp
  imgui/backends/imgui_impl_opengl2.cpp
)

target_link_libraries(imgui_glfw PUBLIC glfw ${OPENGL_LIBRARIES})

target_include_directories(imgui_glfw
PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}/imgui
  ${CMAKE_CURRENT_LIST_DIR}/imgui/backends
)
