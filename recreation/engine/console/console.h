#pragma once

#include "engine/fwd.h"
#include "platform/fwd.h"

#include <string_view>
#include <vector>

namespace nocturne::engine {

// The on-screen debug console. Its grid is wider and deeper than the screen, so lines that scroll
// off stay as scrollback; the shipped console's buffer capped it at 80 x 50 and dropped them.
class CConsole {
public:
    static constexpr int kMaxColumns = 256;
    static constexpr int kMaxRows = 200;

    CConsole(platform::IFileSystem &file_system, int width, int height, int screen_x, int screen_y);

    // Sizes the console to fill a screen_width x screen_height framebuffer, scaling the glyphs up
    // while the grid that fits stays at least 72 x 40.
    void fitToScreen(int screen_width, int screen_height);
    void printf(std::string_view text);
    void writeChar(char character);
    void scrollUp();
    void reset();
    void render();

    [[nodiscard]] int getConsoleWidth() const;
    [[nodiscard]] int getConsoleHeight() const;
    [[nodiscard]] int getScale() const;
    [[nodiscard]] int getCurrentRow() const;
    [[nodiscard]] int getCurrentColumn() const;
    // The row's text, up to its first empty cell.
    [[nodiscard]] std::string_view getRow(int row) const;

    // Read from and written to the INI's logConsoleFlag; non-zero appends every line to the log.
    int file_logging_enabled = 0;

private:
    void newLine();
    [[nodiscard]] char &cell(int row, int column);

    platform::IFileSystem &file_system_;
    int console_width_;
    int console_height_;
    int scale_ = 1;
    int screen_x_;
    int screen_y_;
    int current_row_ = 0;
    int current_column_ = 0;
    std::vector<char> grid_;
};

} // namespace nocturne::engine
