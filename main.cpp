#include <fmt/chrono.h>
#include <fmt/color.h>
#include <vector>
#include <fmt/ranges.h>

int main() {
  auto now = std::chrono::system_clock::now();
  fmt::print("Date and time: {}\n", now);
  fmt::print("Time: {:%H:%M}\n", now);

   fmt::print(fg(fmt::color::crimson) | fmt::emphasis::bold,
             "Hello, {}!\n", "world");
  fmt::print(fg(fmt::color::floral_white) | bg(fmt::color::slate_gray) |
             fmt::emphasis::underline, "hOlá, {}!\n", "Mundo");
  fmt::print(fg(fmt::color::steel_blue) | fmt::emphasis::italic,
             "你好{}！\n", "世界");
}