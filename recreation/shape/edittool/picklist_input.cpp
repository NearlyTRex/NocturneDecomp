#include "common/math/fixed.h"
#include "common/text/ascii.h"
#include "engine/2d/2d.h"
#include "engine/gameclock.h"
#include "engine/keys/keys.h"
#include "engine/menuinput.h"
#include "engine/rawinput.h"
#include "shape/edittool/edcontrols.h"
#include "shape/edittool/editortools.h"
#include "shape/edittool/picklist.h"

#include <algorithm>
#include <cstddef>

namespace nocturne::shape {
namespace {

constexpr int kLeftButton = 1;
constexpr int kBackspace = 8;
// The original's buffer held 99 characters and its terminator.
constexpr std::size_t kMaxSearchLength = 99;
constexpr int kDoubleClickTicks = engine::IGameClock::kTicksPerSecond / 4;

} // namespace

// nocedit 0x004a3f20
int CPickList::handleInput() {
    engine::CMenuInput &input = owners_.menu_input;
    if (input.takeMenuAction(engine::EMenuAction::Confirm) && isItemEnabled(current_index_)) {
        confirmed_flag_ = true;
        return 0;
    }
    if (input.takeMenuAction(engine::EMenuAction::Cancel)) {
        return kCancelled;
    }
    if (input.takeMenuAction(engine::EMenuAction::Copy)) {
        copyToClipboard(owners_.controls.getOwners().editor_tools);
    }
    if (readTypedKeys()) {
        return 0;
    }
    readMovementActions();
    return 0;
}

// Backspace empties the search. With hotkeys, a key only picks; otherwise a letter or digit
// joins the search.
bool CPickList::readTypedKeys() {
    const engine::IRawInput &input = owners_.controls.getOwners().raw_input;
    while (input.wasKeyPressed() != 0) {
        const int key = owners_.keys.getUppercasedInputKey();
        if (key == kBackspace) {
            search_text_buffer_.clear();
        }
        if (!hotkeys_.empty()) {
            if (pickByHotkey(key)) {
                return true;
            }
            continue;
        }
        const auto character = static_cast<char>(key);
        if (common::isAsciiAlnum(character) && search_text_buffer_.size() < kMaxSearchLength) {
            search_text_buffer_ += character;
        }
        if (!search_text_buffer_.empty()) {
            searchFor();
        }
    }
    return false;
}

// A disabled item takes the selection without being picked, and the hotkeys after it are tried.
bool CPickList::pickByHotkey(int key) {
    const int count = std::min(static_cast<int>(hotkeys_.size()), getItemCount());
    for (int index = 0; index < count; ++index) {
        const auto hotkey = static_cast<unsigned char>(
            common::upperAscii(hotkeys_[static_cast<std::size_t>(index)]));
        if (hotkey != key) {
            continue;
        }
        current_index_ = index;
        validateScrollBounds();
        if (isItemEnabled(current_index_)) {
            confirmed_flag_ = true;
            return true;
        }
    }
    return false;
}

// The first string at or after the search, ignoring case, from the selection when the search
// still comes after it. The original read the string past the last when an earlier key in the
// same frame had run the search off the end.
void CPickList::searchFor() {
    const int count = getItemCount();
    if (current_index_ >= count ||
        common::compareIgnoringAsciiCase(search_text_buffer_, getStringAt(current_index_)) <= 0) {
        current_index_ = 0;
    }
    while (current_index_ < count &&
           common::compareIgnoringAsciiCase(search_text_buffer_, getStringAt(current_index_)) > 0) {
        ++current_index_;
    }
}

// Left and right move a column; page up and down move the view with the selection.
void CPickList::readMovementActions() {
    using engine::EMenuAction;
    if (takeMovement(EMenuAction::Up)) {
        --current_index_;
    }
    if (takeMovement(EMenuAction::Down)) {
        ++current_index_;
    }
    if (takeMovement(EMenuAction::Home)) {
        current_index_ = 0;
    }
    if (takeMovement(EMenuAction::End)) {
        current_index_ = getItemCount();
    }
    if (takeMovement(EMenuAction::PageUp)) {
        current_index_ -= page_size_;
        scroll_top_ -= page_size_;
    }
    if (takeMovement(EMenuAction::PageDown)) {
        current_index_ += page_size_;
        scroll_top_ += page_size_;
    }
    if (takeMovement(EMenuAction::Left)) {
        current_index_ -= rows_per_column_;
    }
    if (takeMovement(EMenuAction::Right)) {
        current_index_ += rows_per_column_;
    }
}

bool CPickList::takeMovement(engine::EMenuAction action) {
    if (!owners_.menu_input.takeMenuAction(action)) {
        return false;
    }
    search_text_buffer_.clear();
    return true;
}

// A pick answers on the frame after the one that made it, so it is drawn picked first. The
// original also stopped after the keys while a flag nothing sets was set.
// nocedit 0x004a4340
int CPickList::handleDialogInput() {
    validateScrollBounds();
    if (confirmed_flag_) {
        if (isItemEnabled(current_index_)) {
            return current_index_;
        }
        confirmed_flag_ = false;
    }
    if (handleInput() < 0) {
        return kCancelled;
    }
    validateScrollBounds();
    takeScrollBar();
    const int page_end = (rows_per_column_ * column_count_) + scroll_top_;
    current_index_ = std::max(std::min(current_index_, page_end - 1), scroll_top_);
    readMouse();
    return kStillOpen;
}

// A horizontal bar scrolls by columns.
void CPickList::syncScrollBar() {
    if (scroll_mode_ == EScrollMode::Vertical) {
        scrollbar_.setScrollPosition(scroll_top_);
        scrollbar_.setItemCount(getItemCount());
        scrollbar_.setPageSize(rows_per_column_);
        return;
    }
    scrollbar_.setScrollPosition(scroll_top_ / rows_per_column_);
    scrollbar_.setItemCount(getColumnsNeeded());
    scrollbar_.setPageSize(column_count_);
}

void CPickList::takeScrollBar() {
    if (scroll_mode_ == EScrollMode::None) {
        return;
    }
    syncScrollBar();
    scrollbar_.handleInput();
    const int position = scrollbar_.getScrollPosition();
    scroll_top_ = scroll_mode_ == EScrollMode::Vertical ? position : position * rows_per_column_;
}

// The pointer is held inside the list. A click selects, and a second on the same item within a
// quarter of a second picks it.
void CPickList::readMouse() {
    const SEdControlsOwners &controls = owners_.controls.getOwners();
    const engine::SClipRect clip = controls.two_d.getClipRect();
    engine::IRawInput &input = controls.raw_input;
    const int mouse_x = std::clamp(input.getMouseX(), clip.left, clip.right);
    const int mouse_y = std::clamp(input.getMouseY(), clip.top, clip.bottom);
    input.setCursorPosition(mouse_x, mouse_y);
    if ((input.getMouseButtonFlags() & kLeftButton) == 0) {
        return;
    }
    const int item = getItemAtMousePosition(mouse_x, mouse_y);
    if (item >= 0) {
        input.releaseLeftMouseButton();
        current_index_ = item;
        const int now = controls.clock.getTime();
        const int elapsed = common::wrappingSubtract(now, last_click_timestamp_);
        last_click_timestamp_ = now;
        if (elapsed > 0 && elapsed < kDoubleClickTicks && last_click_item_index_ == item) {
            confirmed_flag_ = true;
        }
    }
    last_click_item_index_ = item;
}

// Columns run down, then across. The mouse is inside the clip, so the original's tests for a
// negative row, column and index are gone.
// nocedit 0x004a53a0
int CPickList::getItemAtMousePosition(int mouse_x, int mouse_y) const {
    const engine::SClipRect clip = owners_.controls.getOwners().two_d.getClipRect();
    const int row = (mouse_y - clip.top) / row_height_;
    const int column = (mouse_x - clip.left) / column_width_;
    if (row >= rows_per_column_ || column >= column_count_) {
        return -1;
    }
    const int index = (column * rows_per_column_) + scroll_top_ + row;
    return index < getItemCount() ? index : -1;
}

} // namespace nocturne::shape
