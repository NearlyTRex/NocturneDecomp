#include "shape/edittool/edscrollbar.h"

#include "common/error/error.h"
#include "common/math/fixed.h"
#include "engine/2d/2d.h"
#include "engine/gameclock.h"
#include "engine/rawinput.h"
#include "shape/edittool/edcontrols.h"

#include <algorithm>

namespace nocturne::shape {
namespace {

constexpr int kLeftButton = 1;
constexpr int kLineStep = 1;
// A quarter second before a held press repeats, then a thirtieth between repeats.
constexpr int kFirstRepeatDelay = 0x48000;
constexpr int kRepeatDelay = 0x9999;
constexpr int kMinimumSide = 3;
constexpr int kTrackFillColor = 0;
constexpr int kTrackBorderColor = 7;

} // namespace

// The original also set a line step of 1, which nothing changes.
// nocedit 0x004a5ae0
CEdScrollBar::CEdScrollBar(CEdControls &controls) : controls_(controls) {}

// nocedit 0x004a5b20
// nocedit 0x004a5b40
CEdScrollBar::~CEdScrollBar() {
    if (controls_.getActiveControl() == this) {
        controls_.setActiveControl(nullptr);
    }
}

void CEdScrollBar::setItemCount(int item_count) {
    item_count_ = item_count;
}

void CEdScrollBar::setPageSize(int page_size) {
    page_size_ = page_size;
}

int CEdScrollBar::getScrollPosition() const {
    return scroll_position_;
}

void CEdScrollBar::setScrollPosition(int scroll_position) {
    scroll_position_ = scroll_position;
}

// The arrow buttons are as long as the bar is wide, overlapping the track by a pixel.
// nocedit 0x004a5b60
void CEdScrollBar::setPosition(int left_pos, int top_pos, int right_pos, int bottom_pos) {
    bounds_left_ = left_pos;
    bounds_top_ = top_pos;
    bounds_right_ = right_pos + 1;
    bounds_bottom_ = bottom_pos + 1;
    const int width = bounds_right_ - bounds_left_;
    const int height = bounds_bottom_ - bounds_top_;
    if (height < width) {
        track_start_ = bounds_left_ + height - 1;
        track_end_ = bounds_right_ - height + 1;
        orientation_ = 1;
    } else {
        track_start_ = bounds_top_ + width - 1;
        track_end_ = bounds_bottom_ - width + 1;
        orientation_ = 0;
    }
    if (width <= kMinimumSide || height <= kMinimumSide ||
        track_end_ - track_start_ <= kMinimumSide) {
        common::displayErrorAndQuit("CEdScrollBar::setPosition - invalid dimensions.");
    }
}

// The thumb is no shorter than the bar is wide and no longer than the track, and runs the
// track's length as the list scrolls; with everything in view it fills the track.
// nocedit 0x004a5ea0
void CEdScrollBar::computeThumb() {
    if (item_count_ <= page_size_ || item_count_ < 1) {
        thumb_start_ = track_start_;
        thumb_end_ = track_end_;
        return;
    }
    const int track = track_end_ - track_start_;
    if (track < 1) {
        common::displayErrorAndQuit("CEdScrollBar::computeThumb - invalid dimensions");
    }
    const int width =
        orientation_ == 0 ? bounds_right_ - bounds_left_ : bounds_bottom_ - bounds_top_;
    const int length = std::min(std::max((page_size_ * track) / item_count_, width), track);
    thumb_start_ = std::max(
        track_start_ + (((track - length) * scroll_position_) / (item_count_ - page_size_)),
        track_start_);
    thumb_end_ = thumb_start_ + length;
    if (thumb_end_ > track_end_) {
        thumb_start_ -= thumb_end_ - track_end_;
        thumb_end_ = track_end_;
    }
    thumb_start_ = std::max(thumb_start_, track_start_);
}

// nocedit 0x004a6380
void CEdScrollBar::clampScrollPosition() {
    scroll_position_ = std::max(std::min(scroll_position_, item_count_ - page_size_), 0);
}

// The original also warped the cursor back to where the press began while an arrow or the track
// repeated, and onto the track while the thumb dragged.
// nocedit 0x004a5fc0
void CEdScrollBar::handleInput() {
    clampScrollPosition();
    computeThumb();
    if (controls_.getActiveControl() != this) {
        if (!isPressedOver()) {
            return;
        }
        startPress();
        handleInput();
        return;
    }
    if ((controls_.getOwners().raw_input.getMouseButtonFlags() & kLeftButton) == 0) {
        controls_.setActiveControl(nullptr);
        return;
    }
    if (scroll_action_ == EScrollAction::Thumb) {
        dragThumb();
    } else {
        repeatAction();
    }
    clampScrollPosition();
    computeThumb();
}

bool CEdScrollBar::isPressedOver() const {
    const engine::IRawInput &input = controls_.getOwners().raw_input;
    const int x = input.getMouseX();
    const int y = input.getMouseY();
    return controls_.getActiveControl() == nullptr &&
           (input.getMouseButtonFlags() & kLeftButton) != 0 && x >= bounds_left_ &&
           y >= bounds_top_ && x < bounds_right_ && y < bounds_bottom_;
}

int CEdScrollBar::getMouseAlong() const {
    const engine::IRawInput &input = controls_.getOwners().raw_input;
    return orientation_ == 0 ? input.getMouseY() : input.getMouseX();
}

void CEdScrollBar::startPress() {
    const engine::IRawInput &input = controls_.getOwners().raw_input;
    drag_start_mouse_x_ = input.getMouseX();
    drag_start_mouse_y_ = input.getMouseY();
    drag_start_scroll_position_ = scroll_position_;
    controls_.setActiveControl(this);
    drag_start_thumb_position_ = thumb_start_;
    const int along = getMouseAlong();
    if (along < track_start_) {
        scroll_action_ = EScrollAction::LineBack;
        scroll_position_ -= kLineStep;
    } else if (along >= track_end_) {
        scroll_action_ = EScrollAction::LineForward;
        scroll_position_ += kLineStep;
    } else if (along < thumb_start_) {
        scroll_action_ = EScrollAction::PageBack;
        scroll_position_ -= page_size_;
    } else if (along < thumb_end_) {
        scroll_action_ = EScrollAction::Thumb;
    } else {
        scroll_action_ = EScrollAction::PageForward;
        scroll_position_ += page_size_;
    }
    scroll_timer_ = controls_.getOwners().clock.getTime();
    scroll_delay_ = kFirstRepeatDelay;
}

// A page repeats until the thumb reaches the mouse, then lets go of the button.
void CEdScrollBar::repeatAction() {
    const int now = controls_.getOwners().clock.getTime();
    scroll_delay_ -= std::max(common::wrappingSubtract(now, scroll_timer_), 0);
    scroll_timer_ = now;
    if (scroll_delay_ >= 1) {
        return;
    }
    scroll_delay_ = kRepeatDelay;
    if (scroll_action_ == EScrollAction::LineBack) {
        scroll_position_ -= kLineStep;
        return;
    }
    if (scroll_action_ == EScrollAction::LineForward) {
        scroll_position_ += kLineStep;
        return;
    }
    const int along = getMouseAlong();
    const bool back = scroll_action_ == EScrollAction::PageBack;
    if (back ? along < thumb_start_ : thumb_end_ < along) {
        scroll_position_ += back ? -page_size_ : page_size_;
        return;
    }
    controls_.getOwners().raw_input.releaseLeftMouseButton();
    controls_.setActiveControl(nullptr);
}

// The thumb follows the mouse from where it was taken, kept on the track, and the list scrolls
// in proportion.
void CEdScrollBar::dragThumb() {
    const engine::IRawInput &input = controls_.getOwners().raw_input;
    const bool down = orientation_ == 0;
    const int mouse = down ? input.getMouseY() : input.getMouseX();
    const int start = down ? drag_start_mouse_y_ : drag_start_mouse_x_;
    const int length = thumb_end_ - thumb_start_;
    const int lowest = track_start_ + start - drag_start_thumb_position_;
    const int highest = track_end_ + start - (drag_start_thumb_position_ + length);
    const int thumb =
        std::min(std::max(mouse, lowest), highest) - start + drag_start_thumb_position_;
    if (item_count_ > page_size_ && item_count_ > 0) {
        if (thumb == drag_start_thumb_position_) {
            scroll_position_ = drag_start_scroll_position_;
            return;
        }
        // How far the thumb can travel, which a thumb short of its end is inside.
        const int travel = (track_end_ - track_start_) - length;
        const int moved = thumb - track_start_;
        if (moved > 0) {
            scroll_position_ = moved < travel ? (moved * (item_count_ - page_size_)) / travel
                                              : item_count_ - page_size_;
            return;
        }
    }
    scroll_position_ = 0;
}

bool CEdScrollBar::isActing(EScrollAction action) const {
    return controls_.getActiveControl() == this && scroll_action_ == action;
}

// The arrows are inset a pixel when pressed.
// nocedit 0x004a5c10
void CEdScrollBar::render() {
    computeThumb();
    controls_.getOwners().two_d.fillRectWithBorder(bounds_left_ + 1, bounds_top_ + 1,
                                                   bounds_right_ - 2, bounds_bottom_ - 2,
                                                   kTrackFillColor, kTrackBorderColor);
    const int left = bounds_left_ + 1;
    const int right = bounds_right_ - 1;
    const int top = bounds_top_ + 1;
    const int bottom = bounds_bottom_ - 1;
    const bool back = isActing(EScrollAction::LineBack);
    const bool forward = isActing(EScrollAction::LineForward);
    if (orientation_ == 0) {
        controls_.draw3DBorder(left, thumb_start_, right, thumb_end_,
                               isActing(EScrollAction::Thumb));
        controls_.draw3DBorder(left, top, right, track_start_, back);
        controls_.draw3DInsetBorder(left, top, right, track_start_, back ? 1 : 0, 0);
        controls_.draw3DBorder(left, track_end_, right, bottom, forward);
        controls_.draw3DInsetBorder(left, track_end_, right, bottom, forward ? 1 : 0, 1);
        return;
    }
    controls_.draw3DBorder(thumb_start_, top, thumb_end_, bottom, isActing(EScrollAction::Thumb));
    controls_.draw3DBorder(left, top, track_start_, bottom, back);
    controls_.draw3DInsetBorder(left, top, track_start_, bottom, back ? 1 : 0, 2);
    controls_.draw3DBorder(track_end_, top, right, bottom, forward);
    controls_.draw3DInsetBorder(track_end_, top, right, bottom, forward ? 1 : 0, 3);
}

} // namespace nocturne::shape
