#include "engine/console/console.h"

#include "engine/2d/2d.h"
#include "engine/keys/inputcodetype.h"
#include "engine/keys/keys.h"
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
// The text's palette index, and the built-in font's first character; it skips those before it.
constexpr int kInk = 0xf8;
constexpr unsigned char kFirstPrintable = 0x20;
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
// bw1 0x004453a0
// bw2 0x00436680
// bw3 0x00441f60
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
// bw1 0x00445430
// bw2 0x00436710
// bw3 0x00441ff0
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
// bw1 0x00445610
// bw2 0x004368f0
// bw3 0x004421d0
void CConsole::scrollUp() {
    std::ranges::shift_left(grid_, kMaxColumns);
    std::fill(grid_.end() - kMaxColumns, grid_.end(), '\0');
    // A held window moves up with its rows, or it would seem to scroll by itself.
    if (!following_ && view_top_ > 0) {
        --view_top_;
    }
}

// nocedit 0x00441a40
void CConsole::reset() {
    std::ranges::fill(grid_, '\0');
    current_column_ = 0;
    current_row_ = 0;
    view_top_ = 0;
    following_ = true;
    file_system_.removeFile(kLogFilename);
}

// The decomp's console shim's (nocturne_console_process_input), which the original didn't have.
void CConsole::processInput(CKeys &keys, int wheel_notches) {
    if (keys.getAndClearKeyState(EInputCodeType::DIK_PRIOR) != 0) {
        scrollView(-console_height_);
    }
    if (keys.getAndClearKeyState(EInputCodeType::DIK_NEXT) != 0) {
        scrollView(console_height_);
    }
    if (keys.getAndClearKeyState(EInputCodeType::DIK_END) != 0) {
        view_top_ = 0;
        following_ = true;
    }
    if (wheel_notches != 0) {
        scrollView(-wheel_notches * kWheelLines);
    }
}

// The original drew 40 x 32 cells at 1x inside a box of lines around them; the decomp's console
// shim fits the console to the screen, draws the window into its history, and leaves the box out,
// which sat off the text at any scale that doesn't divide the screen. A cursor past the fitted
// width starts its row again.
// nocedit 0x00441b00
// bw1 0x00445690
// bw2 0x00436970
// bw3 0x00442250
void CConsole::render(C2d &two_d, int screen_width, int screen_height) {
    fitToScreen(screen_width, screen_height);
    if (current_column_ >= console_width_) {
        current_column_ = 0;
        const auto start =
            grid_.begin() + (static_cast<std::ptrdiff_t>(current_row_) * kMaxColumns);
        std::fill(start, start + kMaxColumns, '\0');
    }
    const int top = getViewTop();
    const int cell_width = kCellWidth * scale_;
    const int cell_height = kCellHeight * scale_;
    for (int row = 0; row < console_height_; ++row) {
        for (int column = 0; column < console_width_; ++column) {
            const auto character = static_cast<unsigned char>(cell(top + row, column));
            if (character >= kFirstPrintable) {
                static_cast<void>(
                    two_d.drawCharacterMaskedColor(character, screen_x_ + (column * cell_width),
                                                   screen_y_ + (row * cell_height), kInk, scale_));
            }
        }
    }
}

int CConsole::getViewTop() const {
    return following_ ? getMaxViewTop() : std::min(view_top_, getMaxViewTop());
}

int CConsole::getMaxViewTop() const {
    return std::max(current_row_ + 1 - console_height_, 0);
}

// Scrolling back from the newest starts where the window shows it; landing on the newest
// follows it again.
void CConsole::scrollView(int rows) {
    const int max_top = getMaxViewTop();
    view_top_ = std::clamp(getViewTop() + rows, 0, max_top);
    following_ = view_top_ >= max_top;
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
