#pragma once

#include "shape/fwd.h"

#include <cstdint>

namespace nocturne::shape {

// A scroll bar over a list: an arrow button at each end and a thumb sized to the part of the
// list in view, running down the bar if it is taller than wide and across it otherwise.
class CEdScrollBar {
public:
    explicit CEdScrollBar(CEdControls &controls);
    // Lets go of the mouse if it holds it.
    ~CEdScrollBar();
    CEdScrollBar(const CEdScrollBar &) = delete;
    CEdScrollBar &operator=(const CEdScrollBar &) = delete;
    CEdScrollBar(CEdScrollBar &&) = delete;
    CEdScrollBar &operator=(CEdScrollBar &&) = delete;

    // From left_pos, top_pos to right_pos, bottom_pos, both corners inside. Fatal when it is too
    // small to hold its buttons and a track.
    void setPosition(int left_pos, int top_pos, int right_pos, int bottom_pos);
    void render();
    // Takes the mouse on a press over it: an arrow steps a line, the track either side of the
    // thumb a page, both repeating while held, and the thumb drags.
    void handleInput();

    // The list's length, and how many of it are in view at once.
    void setItemCount(int item_count);
    void setPageSize(int page_size);
    // The first in view.
    [[nodiscard]] int getScrollPosition() const;
    void setScrollPosition(int scroll_position);

private:
    // What a press took the mouse for; the values are the original's.
    enum class EScrollAction : std::uint8_t {
        Thumb,
        LineBack,
        LineForward,
        PageBack,
        PageForward,
    };

    void computeThumb();
    void clampScrollPosition();
    void startPress();
    void repeatAction();
    void dragThumb();
    [[nodiscard]] bool isPressedOver() const;
    // The mouse's position along the bar.
    [[nodiscard]] int getMouseAlong() const;
    [[nodiscard]] bool isActing(EScrollAction action) const;

    CEdControls &controls_;
    int bounds_left_ = 0;
    int bounds_top_ = 0;
    int bounds_right_ = 0;
    int bounds_bottom_ = 0;
    // 0 down the bar, 1 across it.
    int orientation_ = 0;
    // Between the arrow buttons, along the bar.
    int track_start_ = 0;
    int track_end_ = 0;
    int thumb_start_ = 0;
    int thumb_end_ = 0;
    int item_count_ = 1;
    int page_size_ = 1;
    int scroll_position_ = 0;
    // From the press that took the mouse.
    EScrollAction scroll_action_ = EScrollAction::Thumb;
    int drag_start_mouse_x_ = 0;
    int drag_start_mouse_y_ = 0;
    int drag_start_scroll_position_ = 0;
    int drag_start_thumb_position_ = 0;
    // In the game clock's ticks: when the action last ran, and how long until it runs again.
    int scroll_timer_ = 0;
    int scroll_delay_ = 0;
};

} // namespace nocturne::shape
