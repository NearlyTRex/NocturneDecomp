// =============================================================================
// MENU PAGE — one screen's title, lines and presses, run a frame at a time
// =============================================================================
//
// A page lists its lines each frame under ids of its own; what matters is that
// the cursor stays on the line rather than the position as lines come and go,
// that a press reaches the page as the line it was on and which way, and that
// the list sits below the logo when titled and where the main menu's did when
// not.

#include "core/menu_page.h"
#include "front_support.h"
#include "nocturne_test.h"

#include <deque>
#include <utility>

namespace {

using front_support::last;
using front_support::Press;
using front_support::stand;
using nocturne_menu::LEAVE;
using nocturne_menu::Lines;
using nocturne_menu::Outcome;
using nocturne_menu::Page;
using nocturne_menu::STAY;

// Lists the ids it is handed, a set a frame, the last set from then on; a
// press on `leave_on` ends it.
class Listing : public Page {
public:
    std::deque<std::vector<int>> frames;
    std::vector<std::pair<int, int>> chosen;
    const char *heading = nullptr;
    int leave_on = -1;

    const char *title() override {
        return heading != nullptr ? heading : Page::title();
    }

    void build(Lines &lines) override {
        for (int id : frames.front())
            lines.add(id, "Line %d", id);
        if (frames.size() > 1)
            frames.pop_front();
    }

    Outcome choose(int id, int step) override {
        chosen.emplace_back(id, step);
        return id == leave_on ? LEAVE : STAY;
    }
};

// The hooks a page leaves alone.
class Plain : public Page {
public:
    void build(Lines &lines) override {
        lines.add_localized(7, "Only line");
    }
    Outcome choose(int, int) override {
        return STAY;
    }
};

} // namespace

// Untitled, double-spaced from the main menu's start-y; titled, its title
// below the logo, lifted only where a long list would run off.
NOCTURNE_TEST(a_page_sits_where_its_kind_does) {
    stand.reset();
    Plain plain;
    nocturne_menu::run(plain);
    CHECK_EQ(stand.frames.size(), (size_t)1);
    CHECK_EQ(last().title, std::string());
    CHECK_EQ(last().lines[0], std::string("Only line"));
    CHECK_EQ(last().y, NOCTURNE_MENU_START_Y);
    CHECK(stand.in_order({"moon", "swap"}));

    stand.reset();
    Listing titled;
    titled.heading = "Heading";
    titled.frames = {{0, 1, 2}};
    nocturne_menu::run(titled);
    CHECK_EQ(last().title, std::string("Heading"));
    CHECK_EQ(last().y, NOCTURNE_MENU_TITLE_Y);

    // 14 lines and the title's four rows, 18 high, from 480 up.
    stand.reset();
    titled.frames = {{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13}};
    nocturne_menu::run(titled);
    CHECK_EQ(last().y, 480 - 18 * 18);
}

// A press reaches the page as its line's id, back on a left press and on
// otherwise; the page says when to stop.
NOCTURNE_TEST(a_press_is_the_line_and_its_direction) {
    stand.reset();
    Listing page;
    page.frames = {{4, 5, 6}};
    page.leave_on = 6;
    Press left;
    left.line = 1;
    left.left = true;
    Press right;
    right.line = 2;
    stand.presses = {left, right};
    nocturne_menu::run(page);
    CHECK_EQ(page.chosen.size(), (size_t)2);
    CHECK(page.chosen[0] == std::make_pair(5, (int)nocturne_menu::STEP_BACK));
    CHECK(page.chosen[1] == std::make_pair(6, (int)nocturne_menu::STEP_ON));
    CHECK_EQ(stand.frames.size(), (size_t)2);
}

// The cursor follows its line when a line appears above it, and keeps to the
// list when its line goes.
NOCTURNE_TEST(the_cursor_stays_on_its_line) {
    stand.reset();
    Listing page;
    page.frames = {{0, 1, 2}, {0, 9, 1, 2}, {0, 1}};
    Press move;
    move.line = 2;
    move.choose = false;
    Press stay;
    stand.presses = {move, stay, stay};
    nocturne_menu::run(page);
    CHECK_EQ(stand.frames[1].selected, 3); // line 2, below the new line 9
    CHECK_EQ(stand.frames[2].selected, 1); // line 2 gone: the last line left
    CHECK(page.chosen.empty());
}

// Past its capacity a line is dropped; a line not listed is nowhere.
NOCTURNE_TEST(lines_hold_what_fits) {
    Lines lines;
    lines.clear();
    for (int id = 0; id < Lines::kMax + 3; id++)
        lines.add(id, "Line %d", id);
    CHECK_EQ(lines.count(), (int)Lines::kMax);
    CHECK_EQ(lines.id_at(3), 3);
    CHECK_EQ(lines.index_of(Lines::kMax - 1), (int)Lines::kMax - 1);
    CHECK_EQ(lines.index_of(Lines::kMax), -1);
    CHECK_EQ(std::string(lines.text()[2]), std::string("Line 2"));
    lines.clear();
    CHECK_EQ(lines.count(), 0);
}

NOCTURNE_TEST_MAIN()
