#pragma once

#include "engine/fwd.h"
#include "platform/fwd.h"

#include <string_view>
#include <vector>

namespace nocturne::engine {

// The on-screen debug console. Its grid is wider and deeper than the screen, so lines that scroll
// off stay as scrollback; the shipped console's buffer capped it at 80 x 50 and dropped them. The
// screen shows a window into the grid that follows the newest line until it is scrolled back,
// then holds still while new lines arrive.
class CConsole {
public:
    static constexpr int kMaxColumns = 256;
    static constexpr int kMaxRows = 200;
    // Rows a wheel notch scrolls.
    static constexpr int kWheelLines = 3;

    CConsole(platform::IFileSystem &file_system, int width, int height, int screen_x, int screen_y);

    // Sizes the console to fill a screen_width x screen_height framebuffer, scaling the glyphs up
    // while the grid that fits stays at least 72 x 40.
    void fitToScreen(int screen_width, int screen_height);
    void printf(std::string_view text);
    void writeChar(char character);
    void scrollUp();
    void reset();
    // PageUp and PageDown move the window a screen of rows, End goes back to following the newest,
    // and each wheel notch away from the user scrolls kWheelLines rows back.
    void processInput(CKeys &keys, int wheel_notches);
    // Sized to the screen, the rows in the window in the built-in font at the console's scale.
    void render(C2d &two_d, int screen_width, int screen_height);
    // The first grid row the window shows.
    [[nodiscard]] int getViewTop() const;

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
    // The highest the window can start without passing the newest line.
    [[nodiscard]] int getMaxViewTop() const;
    void scrollView(int rows);

    platform::IFileSystem &file_system_;
    int console_width_;
    int console_height_;
    int scale_ = 1;
    int screen_x_;
    int screen_y_;
    int current_row_ = 0;
    int current_column_ = 0;
    // Where a held window starts; a following window ignores it.
    int view_top_ = 0;
    bool following_ = true;
    std::vector<char> grid_;
};

} // namespace nocturne::engine
