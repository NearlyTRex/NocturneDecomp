#include "engine/console/console.h"

#include "platform/filesystem.h"

#include <algorithm>
#include <cstddef>

namespace nocturne::engine {
namespace {

constexpr std::string_view kLogFilename = "console.txt";
constexpr std::size_t kGridSize =
    static_cast<std::size_t>(CConsole::kMaxRows) * CConsole::kMaxColumns;

// The 2D font's cell at 1x: render's column advance and the glyphs' row count.
constexpr int kCellWidth = 7;
constexpr int kCellHeight = 11;
constexpr int kMaxScale = 8;
// The smallest grid worth scaling up for: a terminal's width, and enough rows to read.
constexpr int kMinColumns = 72;
constexpr int kMinRows = 40;

// One pixel spare on the right and two below, where render draws past the grid.
int fittingColumns(int screen_width, int screen_x, int scale) {
    return std::clamp((screen_width - screen_x - 1) / (kCellWidth * scale), 1,
                      CConsole::kMaxColumns);
}

int fittingRows(int screen_height, int screen_y, int scale) {
    return std::clamp((screen_height - screen_y - 2) / (kCellHeight * scale), 1,
                      CConsole::kMaxRows);
}

} // namespace

// nocedit 0x00441810
CConsole::CConsole(platform::IFileSystem &file_system, int width, int height, int screen_x,
                   int screen_y)
    : file_system_(file_system), console_width_(width), console_height_(height),
      screen_x_(std::max(screen_x, 1)), screen_y_(std::max(screen_y, 1)), grid_(kGridSize) {
    reset();
}

void CConsole::fitToScreen(int screen_width, int screen_height) {
    scale_ = 1;
    while (scale_ < kMaxScale &&
           fittingColumns(screen_width, screen_x_, scale_ + 1) >= kMinColumns &&
           fittingRows(screen_height, screen_y_, scale_ + 1) >= kMinRows) {
        ++scale_;
    }
    console_width_ = fittingColumns(screen_width, screen_x_, scale_);
    console_height_ = fittingRows(screen_height, screen_y_, scale_);
}

// nocedit 0x00441890
void CConsole::printf(std::string_view text) {
    for (const char character : text) {
        writeChar(character);
    }
    writeChar('\0');
    if (file_logging_enabled != 0) {
        file_system_.appendFile(kLogFilename, text);
    }
}

// A NUL ends the row's text at the cursor without moving it.
// nocedit 0x00441970
void CConsole::writeChar(char character) {
    if (character == '\n') {
        newLine();
        return;
    }
    char &target = cell(current_row_, current_column_);
    target = character;
    if (character == '\0') {
        return;
    }
    if (++current_column_ > console_width_ - 1) {
        newLine();
    }
}

// The cursor is bounded by the grid, not the rows on screen, so a full screen scrolls into
// history rather than losing its top line.
void CConsole::newLine() {
    current_column_ = 0;
    if (++current_row_ > kMaxRows - 1) {
        current_row_ = kMaxRows - 1;
        scrollUp();
    }
}

// nocedit 0x00441a80
void CConsole::scrollUp() {
    std::ranges::shift_left(grid_, kMaxColumns);
    std::fill(grid_.end() - kMaxColumns, grid_.end(), '\0');
}

// nocedit 0x00441a40
void CConsole::reset() {
    std::ranges::fill(grid_, '\0');
    current_column_ = 0;
    current_row_ = 0;
    file_system_.removeFile(kLogFilename);
}

int CConsole::getConsoleWidth() const {
    return console_width_;
}

int CConsole::getConsoleHeight() const {
    return console_height_;
}

int CConsole::getScale() const {
    return scale_;
}

int CConsole::getCurrentRow() const {
    return current_row_;
}

int CConsole::getCurrentColumn() const {
    return current_column_;
}

std::string_view CConsole::getRow(int row) const {
    const std::string_view cells(&grid_[static_cast<std::size_t>(row) * kMaxColumns], kMaxColumns);
    return cells.substr(0, cells.find('\0'));
}

char &CConsole::cell(int row, int column) {
    return grid_[(static_cast<std::size_t>(row) * kMaxColumns) + static_cast<std::size_t>(column)];
}

} // namespace nocturne::engine
