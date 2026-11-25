#pragma once

#include "core/fwd.h"

#include <cstddef>
#include <cstdint>
#include <optional>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::core {

// A line of a page, under an id of its own so the cursor follows the line, not its position, as
// lines come and go.
struct SMenuLine {
    int id = 0;
    std::string text;
};

// Left on a line with a colon is Back; right, or Confirm, is On.
enum class EMenuStep : std::int8_t {
    Back = -1,
    On = 1,
};

// A choice of Count, one on or back, wrapping.
template <typename TChoice, std::size_t Count>
[[nodiscard]] TChoice stepChoice(TChoice choice, EMenuStep step) {
    constexpr int kCount = static_cast<int>(Count);
    const int next = (std::to_underlying(choice) + std::to_underlying(step) + kCount) % kCount;
    return static_cast<TChoice>(next);
}

enum class EMenuOutcome : std::uint8_t {
    Stay,
    Leave,
};

// One front-end screen as the enhanced game runs it: its title, the lines it lists this frame,
// and what a press on each does. CMenu::runPage draws it over the moon until it leaves.
class CMenuPage {
public:
    explicit CMenuPage(CMenu &menu);
    CMenuPage(const CMenuPage &) = delete;
    CMenuPage &operator=(const CMenuPage &) = delete;
    CMenuPage(CMenuPage &&) = delete;
    CMenuPage &operator=(CMenuPage &&) = delete;
    virtual ~CMenuPage() = default;

    // Localized. A titled page sits under the logo with its lines single spaced; an untitled one
    // double spaces them from the main menu's top.
    [[nodiscard]] virtual std::optional<std::string> title();
    // The name a manifest's [menu.page_tops] gives a titled page its own top under; none for one
    // that takes titled_top whatever the manifest says.
    [[nodiscard]] virtual std::string_view getLayoutId() const;
    // Before the moon is drawn.
    virtual void beginFrame();
    // This frame's lines, at least one.
    virtual void build(std::vector<SMenuLine> &lines) = 0;
    // Over the moon, under the lines.
    virtual void decorate();
    // With the page drawn, before it is shown.
    virtual void beforeSwap();
    virtual EMenuOutcome choose(int id, EMenuStep step) = 0;
    // Last in every frame, chosen or not; leaves on Cancel or the window closing.
    virtual EMenuOutcome endFrame();

protected:
    [[nodiscard]] CMenu &getMenu();
    [[nodiscard]] const CMenu &getMenu() const;

private:
    CMenu &menu_;
};

} // namespace nocturne::core
