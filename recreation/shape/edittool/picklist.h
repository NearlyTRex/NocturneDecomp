#pragma once

#include "engine/fwd.h"
#include "shape/edittool/edscrollbar.h"
#include "shape/edittool/strlist.h"
#include "shape/fwd.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::shape {

// What a pick list draws with, presents on and reads the keys from; the mouse, the clock and the
// dialogs come through the controls.
struct SPickListOwners {
    CEdControls &controls;
    engine::CKeys &keys;
    engine::CMenuInput &menu_input;
    engine::C3d &three_d;
    engine::IScreenDevice &screen;
};

// A modal list to pick one string from, in as many columns as fit the screen, with each
// string's tab-separated fields lined up, and a scroll bar when they don't all fit. Typing finds
// the first string at or after what was typed, unless the list has hotkeys.
class CPickList : public CStrList {
public:
    // handleDialogInput's answer while nothing has been picked.
    static constexpr int kStillOpen = -2;
    static constexpr int kCancelled = -1;

    explicit CPickList(const SPickListOwners &owners);
    ~CPickList() override;
    CPickList(const CPickList &) = delete;
    CPickList &operator=(const CPickList &) = delete;
    CPickList(CPickList &&) = delete;
    CPickList &operator=(CPickList &&) = delete;

    // The four that move strings are fatal once an item has been enabled or disabled.
    void remove(int start_index, int end_index) override;
    void sort(int start_index, int end_index) override;
    void insert(int insert_index, std::string_view string_data) override;
    void swap(int index1, int index2) override;
    // Forgets which items were enabled as well.
    void clear() override;
    // Reads one frame's keys: 0 to carry on, kCancelled when cancelled.
    virtual int handleInput();

    // Shows the list, starting on initial_selected_index, until one is picked, and returns its
    // index; kCancelled when cancelled, when the window closes, or when the list is empty.
    int displayChoicesAndWaitForInput(std::string_view dialog_title, int initial_selected_index);
    // Opens the window, sized to the strings, on initial_selected_index.
    void initializeDialog(std::string_view dialog_title, int initial_selected_index,
                          std::uint32_t window_flags);
    // One frame of keys and mouse: the picked index, kCancelled, or kStillOpen.
    int handleDialogInput();
    void renderDialog();
    // A disabled item can't be picked and is drawn dimmed. An index outside the list is fatal.
    void enableItem(int item_index, bool enable_flag);
    // Character i picks item i when typed, in either case, in place of the search.
    void setHotkeys(std::string_view hotkeys);
    // Lays the list out in one column, however many would fit.
    void setForcedColumnCount(bool single_column);

private:
    // The most tab-separated fields a string can have.
    static constexpr std::size_t kMaxFields = 10;

    // Which way the scroll bar runs, if the list has one.
    enum class EScrollMode : std::uint8_t { None, Vertical, Horizontal };

    void calculateLayoutAndCreateComponents(std::string_view dialog_title,
                                            std::uint32_t window_flags);
    void measureFields(int scale);
    void sizeColumns(int line_height);
    void fitInsideWindow();
    // Columns of the current height the whole list fills.
    [[nodiscard]] int getColumnsNeeded() const;
    void validateScrollBounds();
    [[nodiscard]] bool isItemEnabled(int item_index) const;
    [[nodiscard]] int getItemAtMousePosition(int mouse_x, int mouse_y) const;
    // True when a hotkey picked an item.
    [[nodiscard]] bool readTypedKeys();
    [[nodiscard]] bool pickByHotkey(int key);
    void searchFor();
    void readMovementActions();
    [[nodiscard]] bool takeMovement(engine::EMenuAction action);
    void syncScrollBar();
    void takeScrollBar();
    void readMouse();
    void drawItem(int index, int left, int top);
    void requireNoneEnabled(std::string_view message) const;

    SPickListOwners owners_;
    CEdScrollBar scrollbar_;
    // One column, whatever fits.
    bool forced_column_count_ = false;
    std::string hotkeys_;
    // Each field's width, the field's widest string plus a gap before the next.
    std::array<int, kMaxFields> tab_column_widths_{};
    int tab_column_count_ = 0;
    std::string search_text_buffer_;
    // Picked, waiting for the frame that draws it so to answer.
    bool confirmed_flag_ = false;
    int row_height_ = 0;
    int column_padding_ = 0;
    int current_index_ = 0;
    int scroll_top_ = 0;
    // Rows times columns.
    int page_size_ = 0;
    int rows_per_column_ = 0;
    int column_width_ = 0;
    int column_count_ = 0;
    // Empty until an item is enabled or disabled; past its end, items are enabled.
    std::vector<bool> enabled_array_;
    EScrollMode scroll_mode_ = EScrollMode::None;
    // For a double click: when an item was last clicked, in game ticks, and which, -1 when the
    // last click missed.
    int last_click_timestamp_ = 0;
    int last_click_item_index_ = -1;
};

} // namespace nocturne::shape
