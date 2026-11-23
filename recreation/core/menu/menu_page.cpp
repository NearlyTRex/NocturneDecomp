#include "core/dfont/dfont.h"
#include "core/game/game.h"
#include "core/menu/menu.h"
#include "core/menu/menupage.h"
#include "engine/font/bitfont.h"
#include "engine/menuinput.h"
#include "engine/package/gamecontent.h"
#include "engine/rawinput.h"
#include "engine/screendevice.h"

#include <algorithm>
#include <cstddef>
#include <iterator>
#include <optional>
#include <ranges>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {
namespace {

// The character whose height spaces the lines.
constexpr int kLineHeightChar = 'X';

// The rows a list takes beyond its lines: a titled one's past its title's gap, an untitled one's.
constexpr int kTitledExtraRows = 2;
constexpr int kUntitledExtraRows = 1;

// The rows renderMenuAndGetChoice draws a list of `lines` in.
int getUntitledRows(const engine::SMenuLayout &menu, int lines) {
    return (lines * menu.item.spacing_untitled) + kUntitledExtraRows;
}

int getTitledRows(const engine::SMenuLayout &menu, int lines) {
    return menu.title.gap_lines + (lines * menu.item.spacing_titled) + kTitledExtraRows;
}

// The line under `id`, or past the end when this frame doesn't list it.
std::size_t findLine(const std::vector<SMenuLine> &lines, int id) {
    return static_cast<std::size_t>(
        std::distance(lines.begin(), std::ranges::find(lines, id, &SMenuLine::id)));
}

} // namespace

// The cursor stays on the line it was on; where that line has gone, on the nearest position the
// list still has.
void CMenu::runPage(CMenuPage &page) {
    std::vector<SMenuLine> lines;
    int selected_index = 0;
    std::optional<int> selected_id;
    while (true) {
        page.beginFrame();
        const std::optional<std::string> title = page.title();
        drawMenuBackdrop(!title || getMenuLayout().animate_titled_backdrop);
        lines.clear();
        page.build(lines);
        page.decorate();
        if (selected_id) {
            const std::size_t line = findLine(lines, *selected_id);
            if (line < lines.size()) {
                selected_index = static_cast<int>(line);
            }
        }
        const auto count = static_cast<int>(lines.size());
        selected_index = std::min(selected_index, count - 1);
        const engine::SMenuLayout &layout = getMenuLayout();
        const auto own_top = layout.page_tops.find(page.getLayoutId());
        const int titled_top =
            own_top != layout.page_tops.end() ? own_top->second : layout.titled_top;
        const int top = title ? fitMenuTop(titled_top, getTitledRows(layout, count))
                              : fitMenuTop(layout.top, getUntitledRows(layout, count));
        const std::vector<std::string> texts =
            lines | std::views::transform(&SMenuLine::text) | std::ranges::to<std::vector>();
        const int choice =
            renderMenuAndGetChoice(texts, selected_index, top,
                                   title ? std::optional<std::string_view>(*title) : std::nullopt);
        selected_id = lines[static_cast<std::size_t>(selected_index)].id;
        page.beforeSwap();
        owners_.screen.swapBuffers();
        if (choice >= 0) {
            const EMenuStep step = menu_left_right_pressed_ ? EMenuStep::Back : EMenuStep::On;
            if (page.choose(lines[static_cast<std::size_t>(choice)].id, step) ==
                EMenuOutcome::Leave) {
                return;
            }
        }
        if (page.endFrame() == EMenuOutcome::Leave) {
            return;
        }
    }
}

bool CMenu::takeMenuCancel() {
    return owners_.menu_input.takeMenuAction(engine::EMenuAction::Cancel) ||
           owners_.raw_input.getInputDisabled();
}

// The clock runs on while the backdrop holds still, so it moves on from where it stopped.
void CMenu::drawMenuBackdrop(bool animate) {
    owners_.game.updateDT();
    if (animate) {
        moon_.update(owners_.game.getDeltaTimeFloat());
    }
    moon_.render();
}

int CMenu::fitMenuTop(int top, int rows) const {
    const int height =
        rows * owners_.fonts.findFont(getMenuLayout().item.font).getCharHeight(kLineHeightChar);
    const int window_height = owners_.screen.getWindowHeight();
    if (window_height < top + height) {
        top = window_height - height;
    }
    return std::max(top, 0);
}

} // namespace nocturne::core
