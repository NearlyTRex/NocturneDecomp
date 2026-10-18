#include "common/error/error.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/font/bitfont.h"
#include "engine/rawinput.h"
#include "engine/screendevice.h"
#include "shape/edittool/edcontrols.h"
#include "shape/edittool/editortools.h"
#include "shape/edittool/picklist.h"

#include <algorithm>
#include <cstddef>
#include <numeric>
#include <string_view>
#include <vector>

namespace nocturne::shape {
namespace {

// Extended keys fold onto their numpad twins, as the original's dialogs read them.
constexpr int kDialogKeyMask = 0x7f;
// No window flags: the window saves the screen under it.
constexpr std::uint32_t kSavingWindow = 0;
constexpr int kOpaqueAlpha = 0xffff;
constexpr int kEnabledTextColor = 0xff;
constexpr int kDisabledTextColor = 0xf8;
constexpr int kSelectionHighlightColor = 2;
constexpr int kConfirmedSelectionColor = 0xfa;
constexpr int kPickListSeparatorColor = 7;
// Either side of a column's text, at the HUD scale; then the window's room around the columns.
constexpr int kColumnPadding = 8;
constexpr int kExtraWidth = 8;
constexpr int kExtraHeight = 6;
// A field is followed by a gap of a fortieth of the screen's width.
constexpr int kFieldGapDivisor = 40;

// A tab at the end starts no field.
std::vector<std::string_view> splitFields(std::string_view text) {
    std::vector<std::string_view> fields;
    while (true) {
        const std::size_t tab = text.find('\t');
        fields.push_back(text.substr(0, tab));
        if (tab == std::string_view::npos || tab + 1 == text.size()) {
            return fields;
        }
        text.remove_prefix(tab + 1);
    }
}

} // namespace

int CPickList::getColumnsNeeded() const {
    return (getItemCount() + rows_per_column_ - 1) / rows_per_column_;
}

// deferred: servicing the network each frame the list waits, which the enhanced game does so a
//   netplay peer doesn't time out, with CNetGame's keepalive
// nocedit 0x004a3e20
int CPickList::displayChoicesAndWaitForInput(std::string_view dialog_title,
                                             int initial_selected_index) {
    const SEdControlsOwners &controls = owners_.controls.getOwners();
    controls.editor_tools.initEditorFontMetrics();
    if (getItemCount() < 1) {
        return kCancelled;
    }
    engine::IRawInput &input = controls.raw_input;
    const int saved_mask = input.getInputKeyMask();
    input.setInputKeyMask(kDialogKeyMask);
    const int saved_x = input.getMouseX();
    const int saved_y = input.getMouseY();
    initializeDialog(dialog_title, initial_selected_index, kSavingWindow);
    int result = kStillOpen;
    while (result == kStillOpen) {
        result = handleDialogInput();
        renderDialog();
        owners_.screen.swapBuffers();
        // A closed window cancels, as it ends every wait for input.
        if (result == kStillOpen && input.getInputDisabled()) {
            result = kCancelled;
        }
    }
    input.setCursorPosition(saved_x, saved_y);
    controls.two_d.clearInputAndWait();
    controls.editor_tools.restoreWindowAndCleanup();
    input.setInputKeyMask(saved_mask);
    return result;
}

// nocedit 0x004a3ef0
void CPickList::initializeDialog(std::string_view dialog_title, int initial_selected_index,
                                 std::uint32_t window_flags) {
    calculateLayoutAndCreateComponents(dialog_title, window_flags);
    current_index_ = initial_selected_index;
    validateScrollBounds();
}

// The padding and the text are at the HUD scale, as the enhanced game draws them; the gaps and
// the margins are not.
// nocedit 0x004a45d0
void CPickList::calculateLayoutAndCreateComponents(std::string_view dialog_title,
                                                   std::uint32_t window_flags) {
    const SEdControlsOwners &controls = owners_.controls.getOwners();
    // The original read the line height its caller had measured.
    controls.editor_tools.initEditorFontMetrics();
    const int scale = controls.editor_tools.getScale();
    const int line_height = controls.editor_tools.getEditorFontLineHeight();
    row_height_ = line_height + 1;
    column_padding_ = kColumnPadding * scale;
    measureFields(scale);
    sizeColumns(line_height);
    int width = (column_width_ * column_count_) + kExtraWidth;
    int height = (rows_per_column_ * row_height_) + kExtraHeight;
    if (scroll_mode_ == EScrollMode::Vertical) {
        width += owners_.controls.calculateGridWidth();
    } else if (scroll_mode_ == EScrollMode::Horizontal) {
        height += owners_.controls.calculateGridHeight();
    }
    controls.editor_tools.createCenteredModal(width, height, dialog_title, window_flags);
    fitInsideWindow();
    controls.two_d.clearInputAndWait();
    search_text_buffer_.clear();
    last_click_item_index_ = -1;
    confirmed_flag_ = false;
}

void CPickList::measureFields(int scale) {
    const engine::CBitFont &font = owners_.controls.getOwners().editor_tools.requireEditorFont();
    tab_column_count_ = 1;
    tab_column_widths_.fill(0);
    for (int index = 0; index < getItemCount(); ++index) {
        const std::vector<std::string_view> fields = splitFields(getStringAt(index));
        if (fields.size() > kMaxFields) {
            common::displayErrorAndQuit("Too many picklist columns!");
        }
        for (std::size_t field = 0; field < fields.size(); ++field) {
            tab_column_widths_[field] =
                std::max(tab_column_widths_[field], font.getTextWidth(fields[field], scale));
        }
        tab_column_count_ = std::max(tab_column_count_, static_cast<int>(fields.size()));
    }
}

// As many rows as fit the screen less four lines, and as many columns as fit seven eighths of
// its width, or one when forced; the scroll bar runs the way the list overflows.
void CPickList::sizeColumns(int line_height) {
    const int window_width = owners_.screen.getWindowWidth();
    const auto field_count = static_cast<std::size_t>(tab_column_count_);
    for (std::size_t field = 0; field + 1 < field_count; ++field) {
        tab_column_widths_[field] += window_width / kFieldGapDivisor;
    }
    column_width_ =
        std::accumulate(tab_column_widths_.begin(),
                        tab_column_widths_.begin() + static_cast<std::ptrdiff_t>(field_count), 0) +
        (column_padding_ * 2);
    const int count = getItemCount();
    const int rows = (owners_.screen.getWindowHeight() - (line_height * 4)) / row_height_;
    rows_per_column_ = std::min(std::max(rows, 1), count);
    const int columns = ((window_width * 7) / 8) / column_width_;
    column_count_ = std::min(std::max(columns, 1), getColumnsNeeded());
    if (forced_column_count_) {
        column_count_ = 1;
    }
    if (rows_per_column_ * column_count_ >= count) {
        scroll_mode_ = EScrollMode::None;
    } else {
        scroll_mode_ = column_count_ < 2 ? EScrollMode::Vertical : EScrollMode::Horizontal;
    }
}

// The scroll bar takes a strip along the right or the bottom, and the rows and columns are
// fitted again to what is left.
void CPickList::fitInsideWindow() {
    const engine::SClipRect clip = owners_.controls.getOwners().two_d.getClipRect();
    int width = (clip.right - clip.left) + 1;
    int height = (clip.bottom - clip.top) + 1;
    if (scroll_mode_ == EScrollMode::Vertical) {
        const int bar = owners_.controls.calculateGridWidth();
        width -= bar;
        scrollbar_.setPosition((clip.right - bar) + 1, clip.top, clip.right, clip.bottom);
    } else if (scroll_mode_ == EScrollMode::Horizontal) {
        const int bar = owners_.controls.calculateGridHeight();
        height -= bar;
        scrollbar_.setPosition(clip.left, (clip.bottom - bar) + 1, clip.right, clip.bottom);
    }
    rows_per_column_ = height / row_height_;
    column_count_ = std::max(std::min(width / column_width_, getColumnsNeeded()), 1);
    page_size_ = rows_per_column_ * column_count_;
    scroll_top_ = 0;
    column_width_ = width / column_count_;
}

// Keeps the selection on the list and in view. A single column scrolls a row at a time and
// stops with its last row at the bottom; several scroll a column at a time. The original also
// skipped the view checks for an empty list, which never reaches here.
// nocedit 0x004a5240
void CPickList::validateScrollBounds() {
    const int count = getItemCount();
    const int step = column_count_ == 1 ? 1 : rows_per_column_;
    current_index_ = std::max(std::min(current_index_, count - 1), 0);
    while (scroll_top_ < 0) {
        scroll_top_ += rows_per_column_;
    }
    while (scroll_top_ >= count) {
        scroll_top_ -= rows_per_column_;
    }
    scroll_top_ = std::max(scroll_top_, 0);
    while (current_index_ < scroll_top_) {
        scroll_top_ = std::max(scroll_top_ - step, 0);
    }
    while (scroll_top_ + page_size_ <= current_index_) {
        scroll_top_ += step;
    }
    if (column_count_ == 1) {
        scroll_top_ = std::min(scroll_top_, count - rows_per_column_);
    }
    scroll_top_ = std::max(scroll_top_, 0);
}

// The original also left the pointer undrawn while a flag nothing sets was set.
// nocedit 0x004a4d40
void CPickList::renderDialog() {
    const SEdControlsOwners &controls = owners_.controls.getOwners();
    controls.editor_tools.paintCurrentWindow();
    const engine::SClipRect clip = controls.two_d.getClipRect();
    int index = scroll_top_;
    int left = clip.left;
    for (int column = 0; column < column_count_; ++column) {
        int top = clip.top;
        for (int row = 0; row < rows_per_column_ && index < getItemCount(); ++row) {
            drawItem(index, left, top);
            ++index;
            top += row_height_;
        }
        if (column > 0) {
            const int saved_color = controls.two_d.getActiveRenderColor();
            controls.two_d.setActiveRenderColor(kPickListSeparatorColor);
            controls.two_d.drawLine(left, clip.top, left, clip.bottom);
            controls.two_d.setActiveRenderColor(saved_color);
        }
        left += column_width_;
    }
    if (scroll_mode_ != EScrollMode::None) {
        syncScrollBar();
        scrollbar_.render();
    }
    controls.editor_tools.drawMousePointer(true);
}

void CPickList::drawItem(int index, int left, int top) {
    const SEdControlsOwners &controls = owners_.controls.getOwners();
    if (index == current_index_) {
        controls.two_d.fillRectColor(left, top, (left + column_width_) - 1, (top + row_height_) - 1,
                                     confirmed_flag_ ? kConfirmedSelectionColor
                                                     : kSelectionHighlightColor);
    }
    const int color = isItemEnabled(index) ? kEnabledTextColor : kDisabledTextColor;
    engine::CBitFont &font = controls.editor_tools.requireEditorFont();
    const int scale = controls.editor_tools.getScale();
    int x = left + column_padding_;
    std::size_t field = 0;
    for (const std::string_view text : splitFields(getStringAt(index))) {
        owners_.three_d.setRenderAlpha(kOpaqueAlpha);
        font.drawText(text, x, top, color, engine::CBitFont::kNoShadow, scale);
        x += tab_column_widths_[field];
        ++field;
    }
}

} // namespace nocturne::shape
