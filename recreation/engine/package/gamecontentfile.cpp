#include "engine/package/gamecontentfile.h"

#include "common/text/ascii.h"
#include "engine/package/gamecontent.h"
#include "engine/package/packagedata.h"
#include "engine/package/tomlfields.h"
#include "engine/screendevice.h"

#include <algorithm>
#include <array>
#include <cstddef>
#include <expected>
#include <format>
#include <initializer_list>
#include <limits>
#include <map>
#include <optional>
#include <string>
#include <string_view>
#include <toml++/toml.hpp>
#include <tuple>
#include <vector>

namespace nocturne::engine {
namespace {

// The loading screen's 640x480 layout.
constexpr int kMaxPictureX = 639;
constexpr int kMaxPictureY = 479;
constexpr int kMaxTint = 0xff00;
constexpr int kMaxColour = 0xff;
constexpr int kMaxAlpha = 0xffff;
// Lines between menu rows or from a screen's edge, far more than a 480-line layout holds.
constexpr int kMaxLines = 40;
constexpr int kMaxGlowCopies = 16;
// A line's copy under it, a few pixels off.
constexpr int kMaxDropOffset = 8;
// A picture over the layout may be larger than it, as BW3's 512x512 hand is.
constexpr int kMaxPictureSize = 0x1000;
// Far past where a credits' scroll starts or loops, a few thousand lines up.
constexpr int kMaxScrollTop = 100000;

constexpr std::array<std::pair<std::string_view, EMenuAlign>, 2> kMenuAligns{
    {{"left", EMenuAlign::Left}, {"centre", EMenuAlign::Centre}}};
constexpr std::array<std::pair<std::string_view, EFooterCorner>, 4> kFooterCorners{
    {{"bottom_left", EFooterCorner::BottomLeft},
     {"bottom_right", EFooterCorner::BottomRight},
     {"top_left", EFooterCorner::TopLeft},
     {"top_right", EFooterCorner::TopRight}}};
constexpr std::array<std::pair<std::string_view, EFooterEdge>, 3> kFooterEdges{
    {{"screen", EFooterEdge::Screen},
     {"layout", EFooterEdge::Layout},
     {"backdrop", EFooterEdge::Backdrop}}};
constexpr std::array<std::pair<std::string_view, EPictureFit>, 2> kPictureFits{
    {{"keep_aspect", EPictureFit::KeepAspect}, {"stretch", EPictureFit::Stretch}}};
constexpr std::array<std::pair<std::string_view, EPictureAnchor>, 3> kPictureAnchors{
    {{"centre", EPictureAnchor::Centre},
     {"left", EPictureAnchor::Left},
     {"right", EPictureAnchor::Right}}};
constexpr int kMaxFramesPerSecond = 1000;
// A hero type's flags fit a byte.
constexpr int kMaxHeroType = 0xff;
// Longer than any line the menus fit.
constexpr int kMaxCardNameLength = 0xff;
constexpr int kMaxLoadingFrames = 1000;
// Far past any projection, depth, light or glow a scene takes.
constexpr int kMaxProjection = 0x10000;
constexpr int kMaxLight = 0x1000000;
constexpr int kMaxCheatCode = 99999;
constexpr int kMaxFontSheet = 0x1000;
// The input codes fit the INI's 16 bits.
constexpr int kMaxInputCode = 0xffff;
constexpr int kMaxBats = 1000;
constexpr int kMaxCloudSize = 1024;
// A 16.16 frame time shifted this far still fits an int.
constexpr int kMaxShift = 15;
constexpr int kMaxFrameDigits = 8;
constexpr int kMaxFrames = 1000;
constexpr int kMaxTitleSeconds = 600;
// The colour cube's last entry, 15 bits of red, green and blue.
constexpr int kMaxCubeColour = 0x7fff;
// A minute of game-clock ticks, far more than any delay needs.
constexpr int kMaxTicks = 60 * 18 * 0x10000;
constexpr int kMaxPercent = 100;
constexpr int kMaxYear = 9999;
constexpr int kMaxCode = std::numeric_limits<int>::max();

// Letters, digits, spaces, '-', '_' and '.', as every host's folders take, beginning with a
// letter or digit; Windows drops a trailing space or dot.
bool isFolderName(std::string_view name) {
    return !name.empty() && common::isAsciiAlnum(name.front()) && !name.ends_with(' ') &&
           !name.ends_with('.') && std::ranges::all_of(name, [](char c) {
               return common::isAsciiAlnum(c) || c == ' ' || c == '-' || c == '_' || c == '.';
           });
}

TomlResult<std::string> readOptionalString(const toml::table &table, std::string_view where,
                                           std::string_view key) {
    return readString(table, where, key).transform([](std::optional<std::string> value) {
        return std::move(value).value_or("");
    });
}

TomlResult<std::array<int, 3>> readTint(const toml::table &table, std::string_view where) {
    const toml::array *array = table.get_as<toml::array>("tint");
    std::array<int, 3> tint{};
    if (array == nullptr || array->size() != tint.size()) {
        return std::unexpected(std::format("{}tint: not a list of red, green and blue", where));
    }
    for (std::size_t i = 0; i < tint.size(); ++i) {
        const std::optional<std::int64_t> value = (*array)[i].value_exact<std::int64_t>();
        if (!value || *value < 0 || *value > kMaxTint) {
            return std::unexpected(std::format("{}tint: not from 0 to 0x{:x}", where, kMaxTint));
        }
        tint[i] = static_cast<int>(*value);
    }
    return tint;
}

TomlResult<int> readRequiredIntegerIn(const toml::table &table, std::string_view where,
                                      std::string_view key, int low, int high) {
    const TomlResult<std::optional<int>> value = readIntegerIn(table, where, key, low, high);
    if (!value) {
        return std::unexpected(value.error());
    }
    if (!*value) {
        return std::unexpected(std::format("{}{}: missing", where, key));
    }
    return **value;
}

TomlResult<std::optional<SMoonWindow>> readMoon(const toml::table &table, std::string_view where) {
    const TomlResult<const toml::table *> moon = readTable(table, where, "moon");
    if (!moon) {
        return std::unexpected(moon.error());
    }
    if (*moon == nullptr) {
        return std::nullopt;
    }
    const std::string inner = std::format("{}moon: ", where);
    if (TomlResult<void> keys = rejectUnknownKeys(**moon, inner, {"x", "y", "tint"}); !keys) {
        return std::unexpected(keys.error());
    }
    const TomlResult<int> x = readRequiredIntegerIn(**moon, inner, "x", 0, kMaxPictureX);
    if (!x) {
        return std::unexpected(x.error());
    }
    const TomlResult<int> y = readRequiredIntegerIn(**moon, inner, "y", 0, kMaxPictureY);
    if (!y) {
        return std::unexpected(y.error());
    }
    const TomlResult<std::array<int, 3>> tint = readTint(**moon, inner);
    if (!tint) {
        return std::unexpected(tint.error());
    }
    return SMoonWindow{.x = *x, .y = *y, .tint = *tint};
}

TomlResult<SPictureFit> readPictureFit(const toml::table &table, std::string_view where);

TomlResult<SLoadingPicture> readLoading(const toml::table &table, std::string_view where) {
    if (TomlResult<void> keys =
            rejectUnknownKeys(table, where, {"id", "fit", "anchor", "moon", "random"});
        !keys) {
        return std::unexpected(keys.error());
    }
    TomlResult<std::string> id = readId(table, where);
    if (!id) {
        return std::unexpected(id.error());
    }
    const TomlResult<std::optional<SMoonWindow>> moon = readMoon(table, where);
    if (!moon) {
        return std::unexpected(moon.error());
    }
    const TomlResult<std::optional<bool>> random = readBoolean(table, where, "random");
    if (!random) {
        return std::unexpected(random.error());
    }
    const TomlResult<SPictureFit> fit = readPictureFit(table, where);
    if (!fit) {
        return std::unexpected(fit.error());
    }
    return SLoadingPicture{
        .id = std::move(*id), .fit = *fit, .moon = *moon, .random = random->value_or(false)};
}

// An integer field, and the range it must be in.
struct SIntegerField {
    std::string_view key;
    int *field;
    int low;
    int high;
};

TomlResult<void> readIntegers(const toml::table &table, std::string_view where,
                              std::initializer_list<SIntegerField> fields) {
    for (const SIntegerField &integer : fields) {
        const TomlResult<int> value =
            readRequiredIntegerIn(table, where, integer.key, integer.low, integer.high);
        if (!value) {
            return std::unexpected(value.error());
        }
        *integer.field = *value;
    }
    return {};
}

// The [key] table inside the one at where, which must be there.
TomlResult<const toml::table *> readRequiredTable(const toml::table &table, std::string_view where,
                                                  std::string_view key) {
    const TomlResult<const toml::table *> found = readTable(table, where, key);
    if (found && *found == nullptr) {
        return std::unexpected(std::format("{}{}: missing", where, key));
    }
    return found;
}

TomlResult<bool> readRequiredBoolean(const toml::table &table, std::string_view where,
                                     std::string_view key) {
    const TomlResult<std::optional<bool>> value = readBoolean(table, where, key);
    if (!value) {
        return std::unexpected(value.error());
    }
    if (!*value) {
        return std::unexpected(std::format("{}{}: missing", where, key));
    }
    return **value;
}

TomlResult<std::optional<SMenuTrademark>> readTrademark(const toml::table &table,
                                                        std::string_view where) {
    const TomlResult<const toml::table *> found = readTable(table, where, "trademark");
    if (!found) {
        return std::unexpected(found.error());
    }
    if (*found == nullptr) {
        return std::nullopt;
    }
    const std::string inner = std::format("{}trademark: ", where);
    if (TomlResult<void> keys = rejectUnknownKeys(**found, inner, {"x", "y", "glyph", "alpha"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SMenuTrademark trademark;
    if (TomlResult<void> read = readIntegers(**found, inner,
                                             {{"x", &trademark.x, 0, kMaxPictureX},
                                              {"y", &trademark.y, 0, kMaxPictureY},
                                              {"glyph", &trademark.glyph, 1, kMaxColour},
                                              {"alpha", &trademark.alpha, 0, kMaxAlpha}});
        !read) {
        return std::unexpected(read.error());
    }
    return trademark;
}

// The keyword's value by its name, or fallback when the key is left out.
template <typename TValue, std::size_t Count>
TomlResult<TValue>
readKeyword(const toml::table &table, std::string_view where, std::string_view key, TValue fallback,
            const std::array<std::pair<std::string_view, TValue>, Count> &names) {
    TomlResult<std::optional<std::string>> value = readString(table, where, key);
    if (!value) {
        return std::unexpected(value.error());
    }
    if (!*value) {
        return fallback;
    }
    const auto found =
        std::ranges::find(names, **value, &std::pair<std::string_view, TValue>::first);
    if (found == names.end()) {
        std::string known;
        for (const auto &[name, choice] : names) {
            known += std::format("{}{}", known.empty() ? "" : ", ", name);
        }
        return std::unexpected(std::format("{}{}: not one of {}", where, key, known));
    }
    return found->second;
}

template <typename TValue, std::size_t Count>
std::string_view
getKeywordName(TValue value, const std::array<std::pair<std::string_view, TValue>, Count> &names) {
    return std::ranges::find(names, value, &std::pair<std::string_view, TValue>::second)->first;
}

// A picture's fit and, keeping its shape, its anchor, in the picture's own table. The fit is
// required; the anchor is centre when left out, and has no meaning for a stretch.
TomlResult<SPictureFit> readPictureFit(const toml::table &table, std::string_view where) {
    if (!table.contains("fit")) {
        return std::unexpected(std::format("{}fit: missing", where));
    }
    SPictureFit picture;
    TomlResult<EPictureFit> fit =
        readKeyword(table, where, "fit", EPictureFit::KeepAspect, kPictureFits);
    if (!fit) {
        return std::unexpected(fit.error());
    }
    picture.fit = *fit;
    if (picture.fit == EPictureFit::Stretch && table.contains("anchor")) {
        return std::unexpected(std::format("{}anchor: a stretched picture has none", where));
    }
    TomlResult<EPictureAnchor> anchor =
        readKeyword(table, where, "anchor", EPictureAnchor::Centre, kPictureAnchors);
    if (!anchor) {
        return std::unexpected(anchor.error());
    }
    picture.anchor = *anchor;
    return picture;
}

// fit, and anchor when it isn't centre.
std::string formatPictureFit(const SPictureFit &picture) {
    std::string text =
        std::format("fit = {}\n", quoteToml(getKeywordName(picture.fit, kPictureFits)));
    if (picture.fit == EPictureFit::KeepAspect && picture.anchor != EPictureAnchor::Centre) {
        text += std::format("anchor = {}\n",
                            quoteToml(getKeywordName(picture.anchor, kPictureAnchors)));
    }
    return text;
}

// A list of { x, y } layout points, none when the key is left out.
TomlResult<std::vector<SMenuPoint>> readMenuPoints(const toml::table &table, std::string_view where,
                                                   std::string_view key) {
    std::vector<SMenuPoint> points;
    if (!table.contains(key)) {
        return points;
    }
    const toml::array *array = table.get_as<toml::array>(key);
    if (array == nullptr) {
        return std::unexpected(std::format("{}{}: not a list of points", where, key));
    }
    for (const toml::node &node : *array) {
        const toml::table *entry = node.as_table();
        const std::string inner = std::format("{}{} {}: ", where, key, points.size() + 1);
        if (entry == nullptr) {
            return std::unexpected(std::format("{}not a table", inner));
        }
        if (TomlResult<void> keys = rejectUnknownKeys(*entry, inner, {"x", "centre_x", "y"});
            !keys) {
            return std::unexpected(keys.error());
        }
        // A left edge or a middle, not both.
        SMenuPoint point;
        point.centred = entry->contains("centre_x");
        if (point.centred == entry->contains("x")) {
            return std::unexpected(std::format("{}give one of x and centre_x", inner));
        }
        if (TomlResult<void> read =
                readIntegers(*entry, inner,
                             {{point.centred ? "centre_x" : "x", &point.x, 0, kMaxPictureX},
                              {"y", &point.y, 0, kMaxPictureY}});
            !read) {
            return std::unexpected(read.error());
        }
        points.push_back(point);
    }
    return points;
}

// A line's copy under it, or none.
TomlResult<std::optional<SMenuDrop>> readMenuDrop(const toml::table &table,
                                                  std::string_view where) {
    const TomlResult<const toml::table *> found = readTable(table, where, "drop");
    if (!found) {
        return std::unexpected(found.error());
    }
    if (*found == nullptr) {
        return std::nullopt;
    }
    const std::string inner = std::format("{}drop: ", where);
    if (TomlResult<void> keys = rejectUnknownKeys(**found, inner, {"x", "y", "colour"}); !keys) {
        return std::unexpected(keys.error());
    }
    SMenuDrop drop;
    if (TomlResult<void> read = readIntegers(**found, inner,
                                             {{"x", &drop.x, -kMaxDropOffset, kMaxDropOffset},
                                              {"y", &drop.y, -kMaxDropOffset, kMaxDropOffset},
                                              {"colour", &drop.colour, 0, kMaxColour}});
        !read) {
        return std::unexpected(read.error());
    }
    return drop;
}

TomlResult<SMenuTitle> readMenuTitle(const toml::table &table) {
    constexpr std::string_view kWhere = "menu: title: ";
    if (TomlResult<void> keys =
            rejectUnknownKeys(table, kWhere, {"colour", "shadow", "gap_lines", "drop", "font"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SMenuTitle title;
    TomlResult<std::string> font = readOptionalString(table, kWhere, "font");
    if (!font) {
        return std::unexpected(font.error());
    }
    title.font = std::move(*font);
    if (TomlResult<void> read = readIntegers(table, kWhere,
                                             {{"colour", &title.colour, 0, kMaxColour},
                                              {"shadow", &title.shadow, kNoMenuShadow, kMaxColour},
                                              {"gap_lines", &title.gap_lines, 0, kMaxLines}});
        !read) {
        return std::unexpected(read.error());
    }
    TomlResult<std::optional<SMenuDrop>> drop = readMenuDrop(table, kWhere);
    if (!drop) {
        return std::unexpected(drop.error());
    }
    title.drop = *drop;
    return title;
}

TomlResult<SMenuGlow> readMenuGlow(const toml::table &table) {
    constexpr std::string_view kWhere = "menu: item: glow: ";
    if (TomlResult<void> keys =
            rejectUnknownKeys(table, kWhere, {"colour", "copies", "flicker", "item_colour"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SMenuGlow glow;
    TomlResult<std::optional<int>> item_colour =
        readIntegerIn(table, kWhere, "item_colour", 0, kMaxColour);
    if (!item_colour) {
        return std::unexpected(item_colour.error());
    }
    glow.item_colour = *item_colour;
    if (TomlResult<void> read = readIntegers(
            table, kWhere,
            {{"colour", &glow.colour, 0, kMaxColour}, {"copies", &glow.copies, 0, kMaxGlowCopies}});
        !read) {
        return std::unexpected(read.error());
    }
    const TomlResult<bool> flicker = readRequiredBoolean(table, kWhere, "flicker");
    if (!flicker) {
        return std::unexpected(flicker.error());
    }
    glow.flicker = *flicker;
    return glow;
}

TomlResult<SMenuItems> readMenuItems(const toml::table &table) {
    constexpr std::string_view kWhere = "menu: item: ";
    if (TomlResult<void> keys = rejectUnknownKeys(
            table, kWhere,
            {"font", "colour", "selected_colour", "alpha", "shadow", "spacing_titled",
             "spacing_untitled", "glow", "drop", "untitled_font", "untitled_positions"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SMenuItems items;
    TomlResult<std::string> font = readRequiredString(table, kWhere, "font");
    if (!font) {
        return std::unexpected(font.error());
    }
    items.font = std::move(*font);
    TomlResult<std::string> untitled_font = readOptionalString(table, kWhere, "untitled_font");
    if (!untitled_font) {
        return std::unexpected(untitled_font.error());
    }
    items.untitled_font = std::move(*untitled_font);
    TomlResult<std::vector<SMenuPoint>> positions =
        readMenuPoints(table, kWhere, "untitled_positions");
    if (!positions) {
        return std::unexpected(positions.error());
    }
    items.untitled_positions = std::move(*positions);
    if (TomlResult<void> read =
            readIntegers(table, kWhere,
                         {{"colour", &items.colour, 0, kMaxColour},
                          {"selected_colour", &items.selected_colour, 0, kMaxColour},
                          {"alpha", &items.alpha, 0, kMaxAlpha},
                          {"shadow", &items.shadow, kNoMenuShadow, kMaxColour},
                          {"spacing_titled", &items.spacing_titled, 1, kMaxLines},
                          {"spacing_untitled", &items.spacing_untitled, 1, kMaxLines}});
        !read) {
        return std::unexpected(read.error());
    }
    const TomlResult<const toml::table *> glow = readRequiredTable(table, kWhere, "glow");
    if (!glow) {
        return std::unexpected(glow.error());
    }
    TomlResult<SMenuGlow> read_glow = readMenuGlow(**glow);
    if (!read_glow) {
        return std::unexpected(read_glow.error());
    }
    items.glow = *read_glow;
    TomlResult<std::optional<SMenuDrop>> drop = readMenuDrop(table, kWhere);
    if (!drop) {
        return std::unexpected(drop.error());
    }
    items.drop = *drop;
    return items;
}

// The [menu.footer.key] table: a corner, whose it is and how far in from it.
TomlResult<SFooterPlace> readFooterPlace(const toml::table &table, std::string_view key) {
    const std::string where = std::format("menu: footer: {}: ", key);
    const TomlResult<const toml::table *> found = readRequiredTable(table, "menu: footer: ", key);
    if (!found) {
        return std::unexpected(found.error());
    }
    if (TomlResult<void> keys = rejectUnknownKeys(**found, where, {"corner", "edge", "x", "y"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SFooterPlace place;
    for (const std::string_view name : {"corner", "edge"}) {
        if (!(*found)->contains(name)) {
            return std::unexpected(std::format("{}{}: missing", where, name));
        }
    }
    TomlResult<EFooterCorner> corner =
        readKeyword(**found, where, "corner", EFooterCorner::BottomLeft, kFooterCorners);
    if (!corner) {
        return std::unexpected(corner.error());
    }
    place.corner = *corner;
    TomlResult<EFooterEdge> edge =
        readKeyword(**found, where, "edge", EFooterEdge::Screen, kFooterEdges);
    if (!edge) {
        return std::unexpected(edge.error());
    }
    place.edge = *edge;
    if (TomlResult<void> read = readIntegers(
            **found, where, {{"x", &place.x, 0, kMaxPictureX}, {"y", &place.y, 0, kMaxPictureY}});
        !read) {
        return std::unexpected(read.error());
    }
    return place;
}

TomlResult<SMenuFooter> readMenuFooter(const toml::table &table) {
    constexpr std::string_view kWhere = "menu: footer: ";
    if (TomlResult<void> keys = rejectUnknownKeys(
            table, kWhere, {"font", "colour", "shadow", "version_alpha", "copyright", "version"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SMenuFooter footer;
    TomlResult<std::string> font = readRequiredString(table, kWhere, "font");
    if (!font) {
        return std::unexpected(font.error());
    }
    footer.font = std::move(*font);
    if (TomlResult<void> read =
            readIntegers(table, kWhere,
                         {{"colour", &footer.colour, 0, kMaxColour},
                          {"shadow", &footer.shadow, kNoMenuShadow, kMaxColour},
                          {"version_alpha", &footer.version_alpha, 0, kMaxAlpha}});
        !read) {
        return std::unexpected(read.error());
    }
    for (const auto &[key, field] :
         {std::pair{"copyright", &footer.copyright}, std::pair{"version", &footer.version}}) {
        TomlResult<SFooterPlace> place = readFooterPlace(table, key);
        if (!place) {
            return std::unexpected(place.error());
        }
        *field = *place;
    }
    return footer;
}

TomlResult<SMenuCalibration> readMenuCalibration(const toml::table &table) {
    constexpr std::string_view kWhere = "menu: calibration: ";
    if (TomlResult<void> keys =
            rejectUnknownKeys(table, kWhere,
                              {"image", "fit", "anchor", "steps", "title", "prompt", "font",
                               "colour", "title_lines", "prompt_lines"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SMenuCalibration calibration;
    for (const auto &[key, field] :
         {std::pair{"image", &calibration.image}, std::pair{"title", &calibration.title},
          std::pair{"prompt", &calibration.prompt}, std::pair{"font", &calibration.font}}) {
        TomlResult<std::string> value = readRequiredString(table, kWhere, key);
        if (!value) {
            return std::unexpected(value.error());
        }
        *field = std::move(*value);
    }
    TomlResult<std::vector<std::string>> steps = readStrings(table, kWhere, "steps");
    if (!steps) {
        return std::unexpected(steps.error());
    }
    if (steps->empty()) {
        return std::unexpected(std::format("{}steps: missing", kWhere));
    }
    calibration.steps = std::move(*steps);
    if (TomlResult<void> read =
            readIntegers(table, kWhere,
                         {{"colour", &calibration.colour, 0, kMaxColour},
                          {"title_lines", &calibration.title_lines, 0, kMaxLines},
                          {"prompt_lines", &calibration.prompt_lines, 0, kMaxLines}});
        !read) {
        return std::unexpected(read.error());
    }
    const TomlResult<SPictureFit> fit = readPictureFit(table, kWhere);
    if (!fit) {
        return std::unexpected(fit.error());
    }
    calibration.fit = *fit;
    return calibration;
}

TomlResult<std::map<std::string, int, std::less<>>> readPageTops(const toml::table &table) {
    constexpr std::string_view kWhere = "menu: page_tops: ";
    const TomlResult<const toml::table *> found = readTable(table, "menu: ", "page_tops");
    if (!found) {
        return std::unexpected(found.error());
    }
    std::map<std::string, int, std::less<>> tops;
    if (*found == nullptr) {
        return tops;
    }
    for (const auto &[page, node] : **found) {
        int top = 0;
        if (TomlResult<void> read =
                readIntegers(**found, kWhere, {{page.str(), &top, 0, kMaxPictureY}});
            !read) {
            return std::unexpected(read.error());
        }
        tops.emplace(page.str(), top);
    }
    return tops;
}

TomlResult<void> readMenuOptions(const toml::table &table, SMenuLayout &menu) {
    constexpr std::string_view kWhere = "menu: options: ";
    if (TomlResult<void> keys = rejectUnknownKeys(table, kWhere, {"hero", "card_name_length"});
        !keys) {
        return std::unexpected(keys.error());
    }
    return readIntegers(table, kWhere,
                        {{"hero", &menu.options_hero, 0, kMaxHeroType},
                         {"card_name_length", &menu.card_name_length, 1, kMaxCardNameLength}});
}

TomlResult<SMenuSpectrum> readMenuSpectrum(const toml::table &table) {
    constexpr std::string_view kWhere = "menu: sound: spectrum: ";
    if (TomlResult<void> keys =
            rejectUnknownKeys(table, kWhere,
                              {"frames", "fps", "pitch", "half_width", "margin_divisor",
                               "height_percent", "alpha", "mirrored"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SMenuSpectrum spectrum;
    TomlResult<std::vector<std::string>> frames = readStrings(table, kWhere, "frames");
    if (!frames) {
        return std::unexpected(frames.error());
    }
    if (frames->empty()) {
        return std::unexpected(std::format("{}frames: missing", kWhere));
    }
    spectrum.frames = std::move(*frames);
    if (TomlResult<void> read =
            readIntegers(table, kWhere,
                         {{"fps", &spectrum.fps, 1, kMaxFramesPerSecond},
                          {"pitch", &spectrum.pitch, 1, kMaxPictureX},
                          {"half_width", &spectrum.half_width, 1, kMaxPictureX},
                          {"margin_divisor", &spectrum.margin_divisor, 2, kMaxPictureX},
                          {"height_percent", &spectrum.height_percent, 1, kMaxPercent},
                          {"alpha", &spectrum.alpha, 0, kMaxAlpha}});
        !read) {
        return std::unexpected(read.error());
    }
    const TomlResult<std::optional<bool>> mirrored = readBoolean(table, kWhere, "mirrored");
    if (!mirrored) {
        return std::unexpected(mirrored.error());
    }
    spectrum.mirrored = mirrored->value_or(false);
    return spectrum;
}

TomlResult<void> readMenuSound(const toml::table &table, SMenuLayout &menu) {
    constexpr std::string_view kWhere = "menu: sound: ";
    if (TomlResult<void> keys = rejectUnknownKeys(table, kWhere, {"effects_sample", "spectrum"});
        !keys) {
        return std::unexpected(keys.error());
    }
    TomlResult<std::string> sample = readRequiredString(table, kWhere, "effects_sample");
    if (!sample) {
        return std::unexpected(sample.error());
    }
    menu.effects_sample = std::move(*sample);
    const TomlResult<const toml::table *> spectrum = readTable(table, kWhere, "spectrum");
    if (!spectrum) {
        return std::unexpected(spectrum.error());
    }
    if (*spectrum != nullptr) {
        TomlResult<SMenuSpectrum> read = readMenuSpectrum(**spectrum);
        if (!read) {
            return std::unexpected(read.error());
        }
        menu.spectrum = std::move(*read);
    }
    return {};
}

TomlResult<SMenuSlider> readMenuSlider(const toml::table &table) {
    constexpr std::string_view kWhere = "menu: slider: ";
    if (TomlResult<void> keys =
            rejectUnknownKeys(table, kWhere,
                              {"width_share", "width_parts", "height", "bar_colour",
                               "trough_colour", "border_colour", "text_colour", "text_shadow"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SMenuSlider slider;
    if (TomlResult<void> read =
            readIntegers(table, kWhere,
                         {{"width_share", &slider.width_share, 1, kMaxPictureX},
                          {"width_parts", &slider.width_parts, 1, kMaxPictureX},
                          {"height", &slider.height, 1, kMaxPictureY},
                          {"bar_colour", &slider.bar_colour, 0, kMaxColour},
                          {"trough_colour", &slider.trough_colour, 0, kMaxColour},
                          {"border_colour", &slider.border_colour, 0, kMaxColour},
                          {"text_colour", &slider.text_colour, 0, kMaxColour},
                          {"text_shadow", &slider.text_shadow, kNoMenuShadow, kMaxColour}});
        !read) {
        return std::unexpected(read.error());
    }
    if (slider.width_share > slider.width_parts) {
        return std::unexpected(std::format("{}width_share: more than width_parts", kWhere));
    }
    return slider;
}

TomlResult<SMenuAttract> readMenuAttract(const toml::table &table) {
    constexpr std::string_view kWhere = "menu: attract: ";
    if (TomlResult<void> keys = rejectUnknownKeys(table, kWhere, {"directory", "movies"}); !keys) {
        return std::unexpected(keys.error());
    }
    SMenuAttract attract;
    TomlResult<std::string> directory = readRequiredString(table, kWhere, "directory");
    if (!directory) {
        return std::unexpected(directory.error());
    }
    attract.directory = std::move(*directory);
    TomlResult<std::vector<std::string>> movies = readStrings(table, kWhere, "movies");
    if (!movies) {
        return std::unexpected(movies.error());
    }
    if (movies->empty()) {
        return std::unexpected(std::format("{}movies: missing", kWhere));
    }
    attract.movies = std::move(*movies);
    return attract;
}

TomlResult<SMenuMusic> readMenuMusic(const toml::table &table) {
    constexpr std::string_view kWhere = "menu: music: ";
    if (TomlResult<void> keys = rejectUnknownKeys(table, kWhere, {"low_rate", "high_rate"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SMenuMusic music;
    for (const auto &[key, field] :
         {std::pair{"low_rate", &music.low_rate}, std::pair{"high_rate", &music.high_rate}}) {
        TomlResult<std::string> value = readRequiredString(table, kWhere, key);
        if (!value) {
            return std::unexpected(value.error());
        }
        *field = std::move(*value);
    }
    return music;
}

TomlResult<SPointerLook> readPointerLook(const toml::table &table) {
    constexpr std::string_view kWhere = "list: pointer: ";
    if (TomlResult<void> keys =
            rejectUnknownKeys(table, kWhere, {"cube_colours", "size", "default_height"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SPointerLook pointer;
    const toml::array *colours = table.get_as<toml::array>("cube_colours");
    if (colours == nullptr || colours->size() != pointer.cube_colours.size()) {
        return std::unexpected(std::format("{}cube_colours: not a list of four", kWhere));
    }
    for (std::size_t i = 0; i < pointer.cube_colours.size(); ++i) {
        const std::optional<std::int64_t> value = (*colours)[i].value_exact<std::int64_t>();
        if (!value || *value < 0 || *value > kMaxCubeColour) {
            return std::unexpected(
                std::format("{}cube_colours: not from 0 to 0x{:x}", kWhere, kMaxCubeColour));
        }
        pointer.cube_colours.at(i) = static_cast<int>(*value);
    }
    if (TomlResult<void> read =
            readIntegers(table, kWhere,
                         {{"size", &pointer.size, 1, kMaxPictureY},
                          {"default_height", &pointer.default_height, 1, kMaxPictureY}});
        !read) {
        return std::unexpected(read.error());
    }
    return pointer;
}

TomlResult<SScrollBarLook> readScrollBarLook(const toml::table &table) {
    constexpr std::string_view kWhere = "list: scroll_bar: ";
    if (TomlResult<void> keys = rejectUnknownKeys(
            table, kWhere,
            {"first_repeat_ticks", "repeat_ticks", "track_fill_colour", "track_border_colour"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SScrollBarLook scroll_bar;
    if (TomlResult<void> read =
            readIntegers(table, kWhere,
                         {{"first_repeat_ticks", &scroll_bar.first_repeat_ticks, 1, kMaxTicks},
                          {"repeat_ticks", &scroll_bar.repeat_ticks, 1, kMaxTicks},
                          {"track_fill_colour", &scroll_bar.track_fill_colour, 0, kMaxColour},
                          {"track_border_colour", &scroll_bar.track_border_colour, 0, kMaxColour}});
        !read) {
        return std::unexpected(read.error());
    }
    return scroll_bar;
}

TomlResult<SListLook> readList(const toml::table &table) {
    constexpr std::string_view kWhere = "list: ";
    if (TomlResult<void> keys = rejectUnknownKeys(
            table, kWhere,
            {"item_colour", "disabled_colour", "selected_colour", "confirmed_colour",
             "separator_colour", "alpha", "shadow", "column_padding", "margin_width",
             "margin_height", "field_gap_divisor", "row_extra", "reserved_lines", "width_share",
             "width_parts", "double_click_ticks", "pointer", "scroll_bar"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SListLook list;
    if (TomlResult<void> read =
            readIntegers(table, kWhere,
                         {{"item_colour", &list.item_colour, 0, kMaxColour},
                          {"disabled_colour", &list.disabled_colour, 0, kMaxColour},
                          {"selected_colour", &list.selected_colour, 0, kMaxColour},
                          {"confirmed_colour", &list.confirmed_colour, 0, kMaxColour},
                          {"separator_colour", &list.separator_colour, 0, kMaxColour},
                          {"alpha", &list.alpha, 0, kMaxAlpha},
                          {"shadow", &list.shadow, kNoMenuShadow, kMaxColour},
                          {"column_padding", &list.column_padding, 0, kMaxPictureX},
                          {"margin_width", &list.margin_width, 0, kMaxPictureX},
                          {"margin_height", &list.margin_height, 0, kMaxPictureY},
                          {"field_gap_divisor", &list.field_gap_divisor, 1, kMaxPictureX},
                          {"row_extra", &list.row_extra, 0, kMaxPictureY},
                          {"reserved_lines", &list.reserved_lines, 0, kMaxLines},
                          {"width_share", &list.width_share, 1, kMaxPictureX},
                          {"width_parts", &list.width_parts, 1, kMaxPictureX},
                          {"double_click_ticks", &list.double_click_ticks, 1, kMaxTicks}});
        !read) {
        return std::unexpected(read.error());
    }
    if (list.width_share > list.width_parts) {
        return std::unexpected(std::format("{}width_share: more than width_parts", kWhere));
    }
    const TomlResult<const toml::table *> pointer = readRequiredTable(table, kWhere, "pointer");
    if (!pointer) {
        return std::unexpected(pointer.error());
    }
    const TomlResult<SPointerLook> read_pointer = readPointerLook(**pointer);
    if (!read_pointer) {
        return std::unexpected(read_pointer.error());
    }
    list.pointer = *read_pointer;
    const TomlResult<const toml::table *> scroll_bar =
        readRequiredTable(table, kWhere, "scroll_bar");
    if (!scroll_bar) {
        return std::unexpected(scroll_bar.error());
    }
    const TomlResult<SScrollBarLook> read_scroll_bar = readScrollBarLook(**scroll_bar);
    if (!read_scroll_bar) {
        return std::unexpected(read_scroll_bar.error());
    }
    list.scroll_bar = *read_scroll_bar;
    return list;
}

TomlResult<SDialogLook> readDialog(const toml::table &table) {
    constexpr std::string_view kWhere = "dialog: ";
    if (TomlResult<void> keys = rejectUnknownKeys(
            table, kWhere, {"content_colour",         "border_colour",
                            "title_colour",           "text_colour",
                            "warning_colour",         "window_status_colour",
                            "status_colour",          "progress_background_colour",
                            "progress_border_colour", "progress_fill_colour",
                            "bevel_highlight_colour", "bevel_shade_colour",
                            "bevel_face_colour",      "bevel_mark_colour",
                            "margin_width_divisor",   "margin_height_divisor",
                            "grid_divisor",           "button_margin_divisor",
                            "prompt_padding_chars",   "prompt_padding_lines"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SDialogLook dialog;
    if (TomlResult<void> read = readIntegers(
            table, kWhere,
            {{"content_colour", &dialog.content_colour, 0, kMaxColour},
             {"border_colour", &dialog.border_colour, 0, kMaxColour},
             {"title_colour", &dialog.title_colour, 0, kMaxColour},
             {"text_colour", &dialog.text_colour, 0, kMaxColour},
             {"warning_colour", &dialog.warning_colour, 0, kMaxColour},
             {"window_status_colour", &dialog.window_status_colour, 0, kMaxColour},
             {"status_colour", &dialog.status_colour, 0, kMaxColour},
             {"progress_background_colour", &dialog.progress_background_colour, 0, kMaxColour},
             {"progress_border_colour", &dialog.progress_border_colour, 0, kMaxColour},
             {"progress_fill_colour", &dialog.progress_fill_colour, 0, kMaxColour},
             {"bevel_highlight_colour", &dialog.bevel_highlight_colour, 0, kMaxColour},
             {"bevel_shade_colour", &dialog.bevel_shade_colour, 0, kMaxColour},
             {"bevel_face_colour", &dialog.bevel_face_colour, 0, kMaxColour},
             {"bevel_mark_colour", &dialog.bevel_mark_colour, 0, kMaxColour},
             {"margin_width_divisor", &dialog.margin_width_divisor, 1, kMaxPictureX},
             {"margin_height_divisor", &dialog.margin_height_divisor, 1, kMaxPictureY},
             {"grid_divisor", &dialog.grid_divisor, 1, kMaxPictureX},
             {"button_margin_divisor", &dialog.button_margin_divisor, 1, kMaxPictureY},
             {"prompt_padding_chars", &dialog.prompt_padding_chars, 0, kMaxLines},
             {"prompt_padding_lines", &dialog.prompt_padding_lines, 0, kMaxLines}});
        !read) {
        return std::unexpected(read.error());
    }
    return dialog;
}

TomlResult<SMenuFeatures> readMenuFeatures(const toml::table &table) {
    constexpr std::string_view kWhere = "menu: features: ";
    if (TomlResult<void> keys = rejectUnknownKeys(table, kWhere, {"difficulty"}); !keys) {
        return std::unexpected(keys.error());
    }
    const TomlResult<bool> difficulty = readRequiredBoolean(table, kWhere, "difficulty");
    if (!difficulty) {
        return std::unexpected(difficulty.error());
    }
    return SMenuFeatures{.difficulty = *difficulty};
}

// A one-character string, as a marker in the text.
TomlResult<char> readCharacter(const toml::table &table, std::string_view where,
                               std::string_view key) {
    const TomlResult<std::string> value = readRequiredString(table, where, key);
    if (!value) {
        return std::unexpected(value.error());
    }
    if (value->size() != 1) {
        return std::unexpected(std::format("{}{}: not one character", where, key));
    }
    return value->front();
}

TomlResult<SCreditsColumnScroll> readCreditsColumnScroll(const toml::table &table) {
    constexpr std::string_view kWhere = "credits: column_scroll: ";
    if (TomlResult<void> keys = rejectUnknownKeys(
            table, kWhere,
            {"font", "column_left", "column_to_screen_edge", "top_strip_bottom", "bottom_strip_top",
             "strip_colour", "text_colour", "heading_colour", "shadow_colour", "scroll_speed",
             "start_y", "end_line", "marker", "heading"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SCreditsColumnScroll scroll;
    for (const auto &[key, field] :
         {std::pair{"font", &scroll.font}, std::pair{"end_line", &scroll.end_line}}) {
        TomlResult<std::string> value = readRequiredString(table, kWhere, key);
        if (!value) {
            return std::unexpected(value.error());
        }
        *field = std::move(*value);
    }
    if (TomlResult<void> read =
            readIntegers(table, kWhere,
                         {{"column_left", &scroll.column_left, 0, kMaxPictureX},
                          {"top_strip_bottom", &scroll.top_strip_bottom, 0, kMaxPictureY},
                          {"bottom_strip_top", &scroll.bottom_strip_top, 0, kMaxPictureY},
                          {"strip_colour", &scroll.strip_colour, 0, kMaxColour},
                          {"text_colour", &scroll.text_colour, 0, kMaxColour},
                          {"heading_colour", &scroll.heading_colour, 0, kMaxColour},
                          {"shadow_colour", &scroll.shadow_colour, kNoMenuShadow, kMaxColour},
                          {"scroll_speed", &scroll.scroll_speed, 1, kMaxPictureY},
                          {"start_y", &scroll.start_y, 0, kMaxPictureY + 1}});
        !read) {
        return std::unexpected(read.error());
    }
    for (const auto &[key, field] :
         {std::pair{"marker", &scroll.marker}, std::pair{"heading", &scroll.heading}}) {
        const TomlResult<char> value = readCharacter(table, kWhere, key);
        if (!value) {
            return std::unexpected(value.error());
        }
        *field = *value;
    }
    const TomlResult<bool> to_edge = readRequiredBoolean(table, kWhere, "column_to_screen_edge");
    if (!to_edge) {
        return std::unexpected(to_edge.error());
    }
    scroll.column_to_screen_edge = *to_edge;
    return scroll;
}

TomlResult<SCreditsFadeLoop> readCreditsFadeLoop(const toml::table &table) {
    constexpr std::string_view kWhere = "credits: fade_loop: ";
    if (TomlResult<void> keys = rejectUnknownKeys(
            table, kWhere,
            {"font", "image_x", "image_y", "text_colour", "heading_colour", "shadow_colour",
             "scroll_speed", "start_y", "loop_below", "restart_y", "fade_centre", "fade_reach",
             "end_line", "marker", "heading"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SCreditsFadeLoop fade;
    for (const auto &[key, field] :
         {std::pair{"font", &fade.font}, std::pair{"end_line", &fade.end_line}}) {
        TomlResult<std::string> value = readRequiredString(table, kWhere, key);
        if (!value) {
            return std::unexpected(value.error());
        }
        *field = std::move(*value);
    }
    if (TomlResult<void> read =
            readIntegers(table, kWhere,
                         {{"image_x", &fade.image_x, 0, kMaxPictureX},
                          {"image_y", &fade.image_y, 0, kMaxPictureY},
                          {"text_colour", &fade.text_colour, 0, kMaxColour},
                          {"heading_colour", &fade.heading_colour, 0, kMaxColour},
                          {"shadow_colour", &fade.shadow_colour, kNoMenuShadow, kMaxColour},
                          {"scroll_speed", &fade.scroll_speed, 1, kMaxPictureY},
                          {"start_y", &fade.start_y, 0, kMaxScrollTop},
                          {"loop_below", &fade.loop_below, -kMaxScrollTop, kMaxPictureY},
                          {"restart_y", &fade.restart_y, 0, kMaxScrollTop},
                          {"fade_centre", &fade.fade_centre, 0, kMaxPictureY},
                          {"fade_reach", &fade.fade_reach, 1, kMaxPictureY}});
        !read) {
        return std::unexpected(read.error());
    }
    for (const auto &[key, field] :
         {std::pair{"marker", &fade.marker}, std::pair{"heading", &fade.heading}}) {
        const TomlResult<char> value = readCharacter(table, kWhere, key);
        if (!value) {
            return std::unexpected(value.error());
        }
        *field = *value;
    }
    return fade;
}

TomlResult<SCreditsTwoColumn> readCreditsTwoColumn(const toml::table &table) {
    constexpr std::string_view kWhere = "credits: two_column: ";
    if (TomlResult<void> keys = rejectUnknownKeys(
            table, kWhere,
            {"font", "centre_left", "centre_right", "left_x", "right_x", "left_column",
             "right_column", "top_strip_bottom", "bottom_strip_top", "strip_colour", "text_colour",
             "heading_colour", "shadow_colour", "scroll_speed", "start_y", "end_line", "marker",
             "heading"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SCreditsTwoColumn columns;
    for (const auto &[key, field] :
         {std::pair{"font", &columns.font}, std::pair{"end_line", &columns.end_line}}) {
        TomlResult<std::string> value = readRequiredString(table, kWhere, key);
        if (!value) {
            return std::unexpected(value.error());
        }
        *field = std::move(*value);
    }
    if (TomlResult<void> read =
            readIntegers(table, kWhere,
                         {{"centre_left", &columns.centre_left, 0, kMaxPictureX},
                          {"centre_right", &columns.centre_right, 0, kMaxPictureX},
                          {"left_x", &columns.left_x, 0, kMaxPictureX},
                          {"right_x", &columns.right_x, 0, kMaxPictureX},
                          {"top_strip_bottom", &columns.top_strip_bottom, 0, kMaxPictureY},
                          {"bottom_strip_top", &columns.bottom_strip_top, 0, kMaxPictureY},
                          {"strip_colour", &columns.strip_colour, 0, kMaxColour},
                          {"text_colour", &columns.text_colour, 0, kMaxColour},
                          {"heading_colour", &columns.heading_colour, 0, kMaxColour},
                          {"shadow_colour", &columns.shadow_colour, kNoMenuShadow, kMaxColour},
                          {"scroll_speed", &columns.scroll_speed, 1, kMaxPictureY},
                          {"start_y", &columns.start_y, 0, kMaxScrollTop}});
        !read) {
        return std::unexpected(read.error());
    }
    for (const auto &[key, field] :
         {std::pair{"marker", &columns.marker}, std::pair{"heading", &columns.heading},
          std::pair{"left_column", &columns.left_column},
          std::pair{"right_column", &columns.right_column}}) {
        const TomlResult<char> value = readCharacter(table, kWhere, key);
        if (!value) {
            return std::unexpected(value.error());
        }
        *field = *value;
    }
    return columns;
}

TomlResult<SGameCredits> readCredits(const toml::table &table) {
    constexpr std::string_view kWhere = "credits: ";
    if (TomlResult<void> keys = rejectUnknownKeys(table, kWhere,
                                                  {"text", "image", "fit", "anchor", "music",
                                                   "column_scroll", "fade_loop", "two_column"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SGameCredits credits;
    TomlResult<std::string> text = readRequiredString(table, kWhere, "text");
    if (!text) {
        return std::unexpected(text.error());
    }
    credits.text = std::move(*text);
    for (const auto &[key, field] :
         {std::pair{"image", &credits.image}, std::pair{"music", &credits.music}}) {
        TomlResult<std::string> value = readOptionalString(table, kWhere, key);
        if (!value) {
            return std::unexpected(value.error());
        }
        *field = std::move(*value);
    }
    const TomlResult<const toml::table *> scroll = readTable(table, kWhere, "column_scroll");
    if (!scroll) {
        return std::unexpected(scroll.error());
    }
    if (*scroll != nullptr) {
        TomlResult<SCreditsColumnScroll> read = readCreditsColumnScroll(**scroll);
        if (!read) {
            return std::unexpected(read.error());
        }
        credits.column_scroll = std::move(*read);
    }
    const TomlResult<const toml::table *> fade = readTable(table, kWhere, "fade_loop");
    if (!fade) {
        return std::unexpected(fade.error());
    }
    if (*fade != nullptr) {
        TomlResult<SCreditsFadeLoop> read = readCreditsFadeLoop(**fade);
        if (!read) {
            return std::unexpected(read.error());
        }
        credits.fade_loop = std::move(*read);
    }
    const TomlResult<const toml::table *> two = readTable(table, kWhere, "two_column");
    if (!two) {
        return std::unexpected(two.error());
    }
    if (*two != nullptr) {
        TomlResult<SCreditsTwoColumn> read = readCreditsTwoColumn(**two);
        if (!read) {
            return std::unexpected(read.error());
        }
        credits.two_column = std::move(*read);
    }
    const TomlResult<SPictureFit> fit = readPictureFit(table, kWhere);
    if (!fit) {
        return std::unexpected(fit.error());
    }
    credits.fit = *fit;
    return credits;
}

// A fixed-length list of whole numbers from low to high.
template <std::size_t Count>
TomlResult<std::array<int, Count>> readIntegerList(const toml::table &table, std::string_view where,
                                                   std::string_view key, int low, int high) {
    const toml::array *array = table.get_as<toml::array>(key);
    std::array<int, Count> values{};
    if (array == nullptr || array->size() != Count) {
        return std::unexpected(std::format("{}{}: not a list of {}", where, key, Count));
    }
    for (std::size_t i = 0; i < Count; ++i) {
        const std::optional<std::int64_t> value = (*array)[i].value_exact<std::int64_t>();
        if (!value || *value < low || *value > high) {
            return std::unexpected(std::format("{}{}: not from {} to {}", where, key, low, high));
        }
        values.at(i) = static_cast<int>(*value);
    }
    return values;
}

// A real number field, whole or not, and the range it must be in.
struct SRealField {
    std::string_view key;
    double *field;
    double low;
    double high;
};

TomlResult<void> readReals(const toml::table &table, std::string_view where,
                           std::initializer_list<SRealField> fields) {
    for (const SRealField &real : fields) {
        const toml::node *node = table.get(real.key);
        if (node == nullptr) {
            return std::unexpected(std::format("{}{}: missing", where, real.key));
        }
        const std::optional<double> value = node->value<double>();
        if (!value || !node->is_number()) {
            return std::unexpected(std::format("{}{}: not a number", where, real.key));
        }
        if (!(*value >= real.low && *value <= real.high)) {
            return std::unexpected(
                std::format("{}{}: not from {} to {}", where, real.key, real.low, real.high));
        }
        *real.field = *value;
    }
    return {};
}

TomlResult<void> readSkySceneStrings(const toml::table &table, std::string_view where,
                                     SSkyScene &sky) {
    for (const auto &[key, field] :
         {std::pair{"model", &sky.model}, std::pair{"cheat_model", &sky.cheat_model},
          std::pair{"bat_model", &sky.bat_model}, std::pair{"cloud_image", &sky.cloud_image},
          std::pair{"frame_prefix", &sky.frame_prefix}}) {
        TomlResult<std::string> value = readRequiredString(table, where, key);
        if (!value) {
            return std::unexpected(value.error());
        }
        *field = std::move(*value);
    }
    TomlResult<std::vector<std::string>> courses = readStrings(table, where, "bat_courses");
    if (!courses) {
        return std::unexpected(courses.error());
    }
    if (courses->empty()) {
        return std::unexpected(std::format("{}bat_courses: missing", where));
    }
    sky.bat_courses = std::move(*courses);
    return {};
}

constexpr std::array<std::string_view, 34> kSkySceneKeys{
    "model",        "cheat_model",         "cheat_code",    "start_phase",   "turn_per_second",
    "rest_phase",   "projection",          "swing",         "depth",         "moon_light",
    "moon_ambient", "moon_flat",           "bat_model",     "bat_courses",   "bat_count",
    "bat_speed",    "bat_animation_speed", "bat_scatter",   "bat_light",     "bat_ambient",
    "cloud_image",  "cloud_size",          "cloud_shift_x", "cloud_shift_y", "frame_prefix",
    "frame_digits", "frame_count",         "frame_x",       "frame_y",       "frame_width",
    "frame_height", "frame_alpha",         "frame_rate",    "frame_wrap"};

TomlResult<SSkyScene> readSkyScene(const toml::table &table) {
    constexpr std::string_view kWhere = "title_backdrop: sky_scene: ";
    if (TomlResult<void> keys = rejectUnknownKeys(table, kWhere, {}, kSkySceneKeys); !keys) {
        return std::unexpected(keys.error());
    }
    SSkyScene sky;
    if (TomlResult<void> read = readSkySceneStrings(table, kWhere, sky); !read) {
        return std::unexpected(read.error());
    }
    if (TomlResult<void> read =
            readIntegers(table, kWhere,
                         {{"cheat_code", &sky.cheat_code, 0, kMaxCheatCode},
                          {"moon_ambient", &sky.moon_ambient, 0, kMaxLight},
                          {"moon_flat", &sky.moon_flat, 0, kMaxLight},
                          {"bat_count", &sky.bat_count, 0, kMaxBats},
                          {"bat_ambient", &sky.bat_ambient, 0, kMaxLight},
                          {"cloud_size", &sky.cloud_size, 1, kMaxCloudSize},
                          {"cloud_shift_x", &sky.cloud_shift_x, 0, kMaxShift},
                          {"cloud_shift_y", &sky.cloud_shift_y, 0, kMaxShift},
                          {"frame_digits", &sky.frame_digits, 1, kMaxFrameDigits},
                          {"frame_count", &sky.frame_count, 1, kMaxFrames},
                          {"frame_x", &sky.frame_x, 0, kMaxPictureX},
                          {"frame_y", &sky.frame_y, 0, kMaxPictureY},
                          {"frame_width", &sky.frame_width, 1, kMaxPictureX + 1},
                          {"frame_height", &sky.frame_height, 1, kMaxPictureY + 1},
                          {"frame_alpha", &sky.frame_alpha, 0, kMaxAlpha}});
        !read) {
        return std::unexpected(read.error());
    }
    if (TomlResult<void> read =
            readReals(table, kWhere,
                      {{"start_phase", &sky.start_phase, 0.0, 1.0},
                       {"turn_per_second", &sky.turn_per_second, 0.0, 1.0},
                       {"rest_phase", &sky.rest_phase, 0.0, 1.0},
                       {"projection", &sky.projection, 1.0, kMaxProjection},
                       {"swing", &sky.swing, -kMaxProjection, kMaxProjection},
                       {"depth", &sky.depth, 1.0, kMaxProjection},
                       {"bat_speed", &sky.bat_speed, 0.0, kMaxProjection},
                       {"bat_animation_speed", &sky.bat_animation_speed, 0.0, kMaxProjection},
                       {"bat_scatter", &sky.bat_scatter, 0.0, kMaxProjection},
                       {"frame_rate", &sky.frame_rate, 0.0, kMaxFramesPerSecond},
                       {"frame_wrap", &sky.frame_wrap, 1.0, kMaxProjection}});
        !read) {
        return std::unexpected(read.error());
    }
    for (const auto &[key, field] :
         {std::pair{"moon_light", &sky.moon_light}, std::pair{"bat_light", &sky.bat_light}}) {
        TomlResult<std::array<int, 3>> light =
            readIntegerList<3>(table, kWhere, key, -kMaxLight, kMaxLight);
        if (!light) {
            return std::unexpected(light.error());
        }
        *field = *light;
    }
    return sky;
}

// A fixed-length list of real numbers, whole or not, from low to high.
template <std::size_t Count>
TomlResult<std::array<double, Count>> readRealList(const toml::table &table, std::string_view where,
                                                   std::string_view key, double low, double high) {
    const toml::array *array = table.get_as<toml::array>(key);
    std::array<double, Count> values{};
    if (array == nullptr || array->size() != Count) {
        return std::unexpected(std::format("{}{}: not a list of {}", where, key, Count));
    }
    for (std::size_t i = 0; i < Count; ++i) {
        const std::optional<double> value = (*array)[i].value<double>();
        if (!value || !(*array)[i].is_number() || !(*value >= low && *value <= high)) {
            return std::unexpected(std::format("{}{}: not from {} to {}", where, key, low, high));
        }
        values.at(i) = *value;
    }
    return values;
}

TomlResult<std::vector<SFigureModel>> readFigureModels(const toml::table &table,
                                                       std::string_view where) {
    std::vector<SFigureModel> models;
    // BW2's has none: its frames alone.
    if (!table.contains("models")) {
        return models;
    }
    const toml::array *array = table.get_as<toml::array>("models");
    if (array == nullptr) {
        return std::unexpected(std::format("{}models: not a list of model tables", where));
    }
    for (const toml::node &node : *array) {
        const toml::table *entry = node.as_table();
        const std::string inner = std::format("{}models {}: ", where, models.size() + 1);
        if (entry == nullptr) {
            return std::unexpected(std::format("{}not a table", inner));
        }
        if (TomlResult<void> keys = rejectUnknownKeys(*entry, inner, {"file", "frame_wrap"});
            !keys) {
            return std::unexpected(keys.error());
        }
        SFigureModel model;
        TomlResult<std::string> file = readRequiredString(*entry, inner, "file");
        if (!file) {
            return std::unexpected(file.error());
        }
        model.file = std::move(*file);
        if (TomlResult<void> read =
                readIntegers(*entry, inner, {{"frame_wrap", &model.frame_wrap, 0, kMaxFrames}});
            !read) {
            return std::unexpected(read.error());
        }
        models.push_back(std::move(model));
    }
    return models;
}

constexpr std::array<std::string_view, 24> kFigureSceneKeys{"fit",
                                                            "anchor",
                                                            "backdrop",
                                                            "backdrop_alpha",
                                                            "models",
                                                            "steps_per_second",
                                                            "cheat_model",
                                                            "cheat_code",
                                                            "camera_rotation",
                                                            "camera_origin",
                                                            "projection",
                                                            "light",
                                                            "flat",
                                                            "ambient",
                                                            "frame_prefix",
                                                            "frame_digits",
                                                            "frame_count",
                                                            "frame_x",
                                                            "frame_y",
                                                            "frame_width",
                                                            "frame_height",
                                                            "frame_alpha",
                                                            "frame_rate",
                                                            "frame_wrap"};

TomlResult<SFigureScene> readFigureScene(const toml::table &table) {
    constexpr std::string_view kWhere = "title_backdrop: figure_scene: ";
    if (TomlResult<void> keys = rejectUnknownKeys(table, kWhere, {}, kFigureSceneKeys); !keys) {
        return std::unexpected(keys.error());
    }
    SFigureScene figure;
    TomlResult<std::string> prefix = readRequiredString(table, kWhere, "frame_prefix");
    if (!prefix) {
        return std::unexpected(prefix.error());
    }
    figure.frame_prefix = std::move(*prefix);
    // Without a backdrop the screen is cleared behind the frames; without a cheat model the code
    // only clears.
    for (const auto &[key, field] :
         {std::pair{"backdrop", &figure.backdrop}, std::pair{"cheat_model", &figure.cheat_model}}) {
        TomlResult<std::string> value = readOptionalString(table, kWhere, key);
        if (!value) {
            return std::unexpected(value.error());
        }
        *field = std::move(*value);
    }
    TomlResult<std::vector<SFigureModel>> models = readFigureModels(table, kWhere);
    if (!models) {
        return std::unexpected(models.error());
    }
    figure.models = std::move(*models);
    if (!figure.backdrop.empty()) {
        if (TomlResult<void> read = readIntegers(
                table, kWhere, {{"backdrop_alpha", &figure.backdrop_alpha, 0, kMaxAlpha}});
            !read) {
            return std::unexpected(read.error());
        }
    } else if (table.contains("backdrop_alpha")) {
        return std::unexpected(std::format("{}backdrop_alpha: there is no backdrop", kWhere));
    }
    if (TomlResult<void> read =
            readIntegers(table, kWhere,
                         {{"steps_per_second", &figure.steps_per_second, 1, kMaxFramesPerSecond},
                          {"cheat_code", &figure.cheat_code, 0, kMaxCheatCode},
                          {"ambient", &figure.ambient, 0, kMaxLight},
                          {"frame_digits", &figure.frame_digits, 1, kMaxFrameDigits},
                          {"frame_count", &figure.frame_count, 1, kMaxFrames},
                          {"frame_x", &figure.frame_x, 0, kMaxPictureX},
                          {"frame_y", &figure.frame_y, 0, kMaxPictureY},
                          {"frame_width", &figure.frame_width, 1, kMaxPictureX + 1},
                          {"frame_height", &figure.frame_height, 1, kMaxPictureY + 1},
                          {"frame_alpha", &figure.frame_alpha, 0, kMaxAlpha}});
        !read) {
        return std::unexpected(read.error());
    }
    if (TomlResult<void> read =
            readReals(table, kWhere,
                      {{"projection", &figure.projection, 1.0, kMaxProjection},
                       {"frame_rate", &figure.frame_rate, 0.0, kMaxFramesPerSecond},
                       {"frame_wrap", &figure.frame_wrap, 1.0, kMaxProjection}});
        !read) {
        return std::unexpected(read.error());
    }
    TomlResult<std::array<double, 9>> rotation =
        readRealList<9>(table, kWhere, "camera_rotation", -1.0, 1.0);
    if (!rotation) {
        return std::unexpected(rotation.error());
    }
    figure.camera_rotation = *rotation;
    TomlResult<std::array<double, 3>> origin =
        readRealList<3>(table, kWhere, "camera_origin", -kMaxProjection, kMaxProjection);
    if (!origin) {
        return std::unexpected(origin.error());
    }
    figure.camera_origin = *origin;
    for (const auto &[key, field, low] :
         {std::tuple{"light", &figure.light, -kMaxLight}, std::tuple{"flat", &figure.flat, 0}}) {
        TomlResult<std::array<int, 3>> values =
            readIntegerList<3>(table, kWhere, key, low, kMaxLight);
        if (!values) {
            return std::unexpected(values.error());
        }
        *field = *values;
    }
    const TomlResult<SPictureFit> fit = readPictureFit(table, kWhere);
    if (!fit) {
        return std::unexpected(fit.error());
    }
    figure.fit = *fit;
    return figure;
}

// [title_backdrop] holds a table for each style's values.
TomlResult<STiledScroll> readTiledScroll(const toml::table &table) {
    constexpr std::string_view kWhere = "title_backdrop: tiled_scroll: ";
    if (TomlResult<void> keys = rejectUnknownKeys(table, kWhere,
                                                  {"fit",
                                                   "anchor",
                                                   "tile",
                                                   "columns",
                                                   "rows",
                                                   "step_x",
                                                   "step_y",
                                                   "steps_per_second",
                                                   "wrap_x_above",
                                                   "wrap_x_to",
                                                   "wrap_y_below",
                                                   "wrap_y_to",
                                                   "hand",
                                                   "hand_x",
                                                   "hand_y",
                                                   "hand_width",
                                                   "hand_height",
                                                   "hand_alpha_start",
                                                   "hand_alpha_low",
                                                   "hand_alpha_high",
                                                   "hand_alpha_step",
                                                   "overlay"});
        !keys) {
        return std::unexpected(keys.error());
    }
    STiledScroll scroll;
    for (const auto &[key, field] :
         {std::pair{"tile", &scroll.tile}, std::pair{"hand", &scroll.hand},
          std::pair{"overlay", &scroll.overlay}}) {
        TomlResult<std::string> value = readRequiredString(table, kWhere, key);
        if (!value) {
            return std::unexpected(value.error());
        }
        *field = std::move(*value);
    }
    for (const auto &[key, field] :
         {std::pair{"columns", &scroll.columns}, std::pair{"rows", &scroll.rows}}) {
        TomlResult<std::array<int, 2>> values =
            readIntegerList<2>(table, kWhere, key, -kMaxPictureX - 1, kMaxPictureX + 1);
        if (!values) {
            return std::unexpected(values.error());
        }
        *field = *values;
    }
    // The hand's alpha starts above the most, a step over 0xffff, as BW3's did.
    if (TomlResult<void> read = readIntegers(
            table, kWhere,
            {{"step_x", &scroll.step_x, -kMaxPictureX, kMaxPictureX},
             {"step_y", &scroll.step_y, -kMaxPictureY, kMaxPictureY},
             {"steps_per_second", &scroll.steps_per_second, 1, kMaxFramesPerSecond},
             {"wrap_x_above", &scroll.wrap_x_above, -kMaxPictureX - 1, kMaxPictureX + 1},
             {"wrap_x_to", &scroll.wrap_x_to, -kMaxPictureX - 1, kMaxPictureX + 1},
             {"wrap_y_below", &scroll.wrap_y_below, -kMaxPictureY - 1, kMaxPictureY + 1},
             {"wrap_y_to", &scroll.wrap_y_to, -kMaxPictureY - 1, kMaxPictureY + 1},
             {"hand_x", &scroll.hand_x, -kMaxPictureX, kMaxPictureX},
             {"hand_y", &scroll.hand_y, -kMaxPictureY, kMaxPictureY},
             {"hand_width", &scroll.hand_width, 1, kMaxPictureSize},
             {"hand_height", &scroll.hand_height, 1, kMaxPictureSize},
             {"hand_alpha_start", &scroll.hand_alpha_start, 0, kMaxAlpha + 1},
             {"hand_alpha_low", &scroll.hand_alpha_low, 0, kMaxAlpha},
             {"hand_alpha_high", &scroll.hand_alpha_high, 0, kMaxAlpha},
             {"hand_alpha_step", &scroll.hand_alpha_step, 1, kMaxAlpha}});
        !read) {
        return std::unexpected(read.error());
    }
    if (scroll.hand_alpha_low > scroll.hand_alpha_high) {
        return std::unexpected(std::format("{}hand_alpha_low: above hand_alpha_high", kWhere));
    }
    const TomlResult<SPictureFit> fit = readPictureFit(table, kWhere);
    if (!fit) {
        return std::unexpected(fit.error());
    }
    scroll.fit = *fit;
    return scroll;
}

TomlResult<void> readTitleBackdrop(const toml::table &table, SGameContent &content) {
    constexpr std::string_view kWhere = "title_backdrop: ";
    if (TomlResult<void> keys =
            rejectUnknownKeys(table, kWhere, {"sky_scene", "figure_scene", "tiled_scroll"});
        !keys) {
        return std::unexpected(keys.error());
    }
    const TomlResult<const toml::table *> tiled = readTable(table, kWhere, "tiled_scroll");
    if (!tiled) {
        return std::unexpected(tiled.error());
    }
    if (*tiled != nullptr) {
        TomlResult<STiledScroll> read = readTiledScroll(**tiled);
        if (!read) {
            return std::unexpected(read.error());
        }
        content.tiled_scroll = std::move(*read);
    }
    const TomlResult<const toml::table *> sky = readTable(table, kWhere, "sky_scene");
    if (!sky) {
        return std::unexpected(sky.error());
    }
    if (*sky != nullptr) {
        TomlResult<SSkyScene> read = readSkyScene(**sky);
        if (!read) {
            return std::unexpected(read.error());
        }
        content.sky_scene = std::move(*read);
    }
    const TomlResult<const toml::table *> figure = readTable(table, kWhere, "figure_scene");
    if (!figure) {
        return std::unexpected(figure.error());
    }
    if (*figure != nullptr) {
        TomlResult<SFigureScene> read = readFigureScene(**figure);
        if (!read) {
            return std::unexpected(read.error());
        }
        content.figure_scene = std::move(*read);
    }
    return {};
}

TomlResult<std::vector<SFontYOffset>> readFontYOffsets(const toml::table &table,
                                                       std::string_view where) {
    const toml::array *array = table.get_as<toml::array>("y_offsets");
    if (array == nullptr) {
        return std::unexpected(std::format("{}y_offsets: not a list of offset tables", where));
    }
    std::vector<SFontYOffset> offsets;
    for (const toml::node &node : *array) {
        const toml::table *entry = node.as_table();
        const std::string inner = std::format("{}y_offsets {}: ", where, offsets.size() + 1);
        if (entry == nullptr) {
            return std::unexpected(std::format("{}not a table", inner));
        }
        if (TomlResult<void> keys = rejectUnknownKeys(*entry, inner, {"offset", "first", "last"});
            !keys) {
            return std::unexpected(keys.error());
        }
        SFontYOffset offset;
        if (TomlResult<void> read = readIntegers(*entry, inner,
                                                 {{"offset", &offset.offset, 0, kMaxLines},
                                                  {"first", &offset.first, 0, kMaxColour},
                                                  {"last", &offset.last, 0, kMaxColour}});
            !read) {
            return std::unexpected(read.error());
        }
        offsets.push_back(offset);
    }
    return offsets;
}

TomlResult<std::optional<SOsFontSize>> readOsFontSize(const toml::table &table,
                                                      std::string_view where) {
    const TomlResult<const toml::table *> found = readTable(table, where, "os_font");
    if (!found || *found == nullptr) {
        return found.transform([](const toml::table *) { return std::optional<SOsFontSize>(); });
    }
    const std::string inner = std::format("{}os_font: ", where);
    if (TomlResult<void> keys =
            rejectUnknownKeys(**found, inner, {"height", "y_offset1", "y_offset2"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SOsFontSize size;
    if (TomlResult<void> read = readIntegers(**found, inner,
                                             {{"height", &size.height, 1, kMaxPictureY},
                                              {"y_offset1", &size.y_offset1, 0, kMaxLines},
                                              {"y_offset2", &size.y_offset2, 0, kMaxLines}});
        !read) {
        return std::unexpected(read.error());
    }
    return size;
}

TomlResult<SFontSpec> readFont(const toml::table &table, std::string_view where) {
    if (TomlResult<void> keys =
            rejectUnknownKeys(table, where,
                              {"id", "file", "width", "height", "transparent", "own_colours",
                               "y_offsets", "space_width", "shadow_x", "os_font"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SFontSpec font;
    TomlResult<std::string> id = readId(table, where);
    if (!id) {
        return std::unexpected(id.error());
    }
    font.id = std::move(*id);
    TomlResult<std::string> file = readRequiredString(table, where, "file");
    if (!file) {
        return std::unexpected(file.error());
    }
    font.file = std::move(*file);
    if (TomlResult<void> read = readIntegers(table, where,
                                             {{"width", &font.width, 1, kMaxFontSheet},
                                              {"height", &font.height, 1, kMaxFontSheet},
                                              {"transparent", &font.transparent, 0, kMaxColour},
                                              {"space_width", &font.space_width, 0, kMaxLines},
                                              {"shadow_x", &font.shadow_x, 0, kMaxLines}});
        !read) {
        return std::unexpected(read.error());
    }
    const TomlResult<bool> own_colours = readRequiredBoolean(table, where, "own_colours");
    if (!own_colours) {
        return std::unexpected(own_colours.error());
    }
    font.own_colours = *own_colours;
    TomlResult<std::vector<SFontYOffset>> offsets = readFontYOffsets(table, where);
    if (!offsets) {
        return std::unexpected(offsets.error());
    }
    font.y_offsets = std::move(*offsets);
    TomlResult<std::optional<SOsFontSize>> os_font = readOsFontSize(table, where);
    if (!os_font) {
        return std::unexpected(os_font.error());
    }
    font.os_font = *os_font;
    return font;
}

TomlResult<std::vector<SControlDefault>> readControlDefaults(const toml::table &table,
                                                             std::string_view where) {
    const TomlResult<const toml::table *> found = readRequiredTable(table, where, "defaults");
    if (!found) {
        return std::unexpected(found.error());
    }
    std::vector<SControlDefault> defaults;
    for (const auto &[key, node] : **found) {
        const toml::array *array = node.as_array();
        if (array == nullptr) {
            return std::unexpected(
                std::format("{}defaults: {}: not a list of codes", where, key.str()));
        }
        SControlDefault entry{.action = std::string(key.str()), .codes = {}};
        for (const toml::node &code : *array) {
            const std::optional<std::int64_t> value = code.value_exact<std::int64_t>();
            if (!value || *value < 0 || *value > kMaxInputCode) {
                return std::unexpected(std::format("{}defaults: {}: not codes from 0 to {}", where,
                                                   key.str(), kMaxInputCode));
            }
            entry.codes.push_back(static_cast<int>(*value));
        }
        defaults.push_back(std::move(entry));
    }
    return defaults;
}

TomlResult<SControlMode> readControlMode(const toml::table &table, std::string_view where) {
    if (TomlResult<void> keys =
            rejectUnknownKeys(table, where, {"id", "label", "manual_aim", "defaults"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SControlMode mode;
    TomlResult<std::string> id = readId(table, where);
    if (!id) {
        return std::unexpected(id.error());
    }
    mode.id = std::move(*id);
    TomlResult<std::string> label = readRequiredString(table, where, "label");
    if (!label) {
        return std::unexpected(label.error());
    }
    mode.label = std::move(*label);
    const TomlResult<bool> manual_aim = readRequiredBoolean(table, where, "manual_aim");
    if (!manual_aim) {
        return std::unexpected(manual_aim.error());
    }
    mode.manual_aim = *manual_aim;
    TomlResult<std::vector<SControlDefault>> defaults = readControlDefaults(table, where);
    if (!defaults) {
        return std::unexpected(defaults.error());
    }
    mode.defaults = std::move(*defaults);
    return mode;
}

TomlResult<SBindingRowSpec> readBindingRow(const toml::table &table, std::string_view where) {
    if (TomlResult<void> keys = rejectUnknownKeys(table, where, {"action", "label"}); !keys) {
        return std::unexpected(keys.error());
    }
    TomlResult<std::string> action = readRequiredString(table, where, "action");
    if (!action) {
        return std::unexpected(action.error());
    }
    TomlResult<std::string> label = readRequiredString(table, where, "label");
    if (!label) {
        return std::unexpected(label.error());
    }
    return SBindingRowSpec{.action = std::move(*action), .label = std::move(*label)};
}

TomlResult<SControls> readControls(const toml::table &table) {
    constexpr std::string_view kWhere = "controls: ";
    if (TomlResult<void> keys = rejectUnknownKeys(table, kWhere, {"mode", "binding"}); !keys) {
        return std::unexpected(keys.error());
    }
    SControls controls;
    const TomlResult<std::vector<const toml::table *>> modes = readTables(table, kWhere, "mode");
    if (!modes) {
        return std::unexpected(modes.error());
    }
    for (std::size_t i = 0; i < modes->size(); ++i) {
        const std::string where = std::format("{}mode {}: ", kWhere, i + 1);
        TomlResult<SControlMode> mode = readControlMode(*(*modes)[i], where);
        if (!mode) {
            return std::unexpected(mode.error());
        }
        if (std::ranges::contains(controls.modes, mode->id, &SControlMode::id)) {
            return std::unexpected(std::format("{}id: {} is another mode's", where, mode->id));
        }
        controls.modes.push_back(std::move(*mode));
    }
    if (controls.modes.empty()) {
        return std::unexpected(std::format("{}mode: missing", kWhere));
    }
    const TomlResult<std::vector<const toml::table *>> rows = readTables(table, kWhere, "binding");
    if (!rows) {
        return std::unexpected(rows.error());
    }
    for (std::size_t i = 0; i < rows->size(); ++i) {
        TomlResult<SBindingRowSpec> row =
            readBindingRow(*(*rows)[i], std::format("{}binding {}: ", kWhere, i + 1));
        if (!row) {
            return std::unexpected(row.error());
        }
        controls.bindings.push_back(std::move(*row));
    }
    return controls;
}

TomlResult<SStartup> readStartup(const toml::table &table) {
    constexpr std::string_view kWhere = "startup: ";
    if (TomlResult<void> keys =
            rejectUnknownKeys(table, kWhere,
                              {"picture", "fit", "anchor", "picture_alpha", "label_x", "label_y",
                               "label_font", "label_colour", "movie_directory", "movie"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SStartup startup;
    for (const auto &[key, field] :
         {std::pair{"picture", &startup.picture}, std::pair{"label_font", &startup.label_font},
          std::pair{"movie_directory", &startup.movie_directory},
          std::pair{"movie", &startup.movie}}) {
        TomlResult<std::string> value = readRequiredString(table, kWhere, key);
        if (!value) {
            return std::unexpected(value.error());
        }
        *field = std::move(*value);
    }
    if (TomlResult<void> read =
            readIntegers(table, kWhere,
                         {{"picture_alpha", &startup.picture_alpha, 0, kMaxAlpha},
                          {"label_x", &startup.label_x, 0, kMaxPictureX},
                          {"label_y", &startup.label_y, 0, kMaxPictureY},
                          {"label_colour", &startup.label_colour, 0, kMaxColour}});
        !read) {
        return std::unexpected(read.error());
    }
    const TomlResult<SPictureFit> fit = readPictureFit(table, kWhere);
    if (!fit) {
        return std::unexpected(fit.error());
    }
    startup.fit = *fit;
    return startup;
}

TomlResult<SMoonIndicator> readMoonIndicator(const toml::table &table) {
    constexpr std::string_view kWhere = "loading_indicator: moon: ";
    if (TomlResult<void> keys = rejectUnknownKeys(
            table, kWhere,
            {"model", "glow_texture", "window_size", "corner_x", "corner_y", "corner_size",
             "default_tint", "full_projection", "window_projection", "depth", "light_reach",
             "ambient", "glow_half_size", "status_box", "status_box_colour", "status_font",
             "status_colour"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SMoonIndicator moon;
    for (const auto &[key, field] :
         {std::pair{"model", &moon.model}, std::pair{"glow_texture", &moon.glow_texture},
          std::pair{"status_font", &moon.status_font}}) {
        TomlResult<std::string> value = readRequiredString(table, kWhere, key);
        if (!value) {
            return std::unexpected(value.error());
        }
        *field = std::move(*value);
    }
    if (TomlResult<void> read =
            readIntegers(table, kWhere,
                         {{"window_size", &moon.window_size, 1, kMaxPictureY + 1},
                          {"corner_x", &moon.corner_x, 0, kMaxPictureX},
                          {"corner_y", &moon.corner_y, 0, kMaxPictureY},
                          {"corner_size", &moon.corner_size, 1, kMaxPictureY + 1},
                          {"full_projection", &moon.full_projection, 1, kMaxProjection},
                          {"window_projection", &moon.window_projection, 1, kMaxProjection},
                          {"depth", &moon.depth, 1, kMaxProjection},
                          {"light_reach", &moon.light_reach, 0, kMaxLight},
                          {"ambient", &moon.ambient, 0, kMaxLight},
                          {"glow_half_size", &moon.glow_half_size, 0, kMaxLight},
                          {"status_box_colour", &moon.status_box_colour, 0, kMaxColour},
                          {"status_colour", &moon.status_colour, 0, kMaxColour}});
        !read) {
        return std::unexpected(read.error());
    }
    TomlResult<std::array<int, 3>> tint =
        readIntegerList<3>(table, kWhere, "default_tint", 0, kMaxTint);
    if (!tint) {
        return std::unexpected(tint.error());
    }
    moon.default_tint = *tint;
    TomlResult<std::array<int, 4>> box =
        readIntegerList<4>(table, kWhere, "status_box", 0, kMaxPictureX + 1);
    if (!box) {
        return std::unexpected(box.error());
    }
    moon.status_box = *box;
    return moon;
}

// [loading_indicator] holds a table for each style's values.
TomlResult<SMoonIndicator> readLoadingIndicator(const toml::table &table) {
    constexpr std::string_view kWhere = "loading_indicator: ";
    if (TomlResult<void> keys = rejectUnknownKeys(table, kWhere, {"moon"}); !keys) {
        return std::unexpected(keys.error());
    }
    const TomlResult<const toml::table *> moon = readRequiredTable(table, kWhere, "moon");
    if (!moon) {
        return std::unexpected(moon.error());
    }
    return readMoonIndicator(**moon);
}

// A mode is normal or hard.
constexpr int kHardMode = 1;

TomlResult<std::vector<SStoryDifficulty>> readDifficulties(const toml::table &table,
                                                           std::string_view where) {
    TomlResult<std::vector<const toml::table *>> tables = readTables(table, where, "difficulty");
    if (!tables) {
        return std::unexpected(tables.error());
    }
    std::vector<SStoryDifficulty> difficulties;
    for (std::size_t i = 0; i < tables->size(); ++i) {
        const toml::table &entry = *(*tables)[i];
        const std::string inner = std::format("{}difficulty {}: ", where, i + 1);
        if (TomlResult<void> keys = rejectUnknownKeys(entry, inner, {"label", "puzzle", "combat"});
            !keys) {
            return std::unexpected(keys.error());
        }
        SStoryDifficulty difficulty;
        TomlResult<std::string> label = readRequiredString(entry, inner, "label");
        if (!label) {
            return std::unexpected(label.error());
        }
        difficulty.label = std::move(*label);
        if (TomlResult<void> read = readIntegers(entry, inner,
                                                 {{"puzzle", &difficulty.puzzle, 0, kHardMode},
                                                  {"combat", &difficulty.combat, 0, kHardMode}});
            !read) {
            return std::unexpected(read.error());
        }
        difficulties.push_back(std::move(difficulty));
    }
    return difficulties;
}

TomlResult<SStorySelect> readStoryList(const toml::table &table) {
    constexpr std::string_view kWhere = "story_select: story_list: ";
    if (TomlResult<void> keys = rejectUnknownKeys(
            table, kWhere, {"full_install_probe", "loading_frames", "difficulty"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SStorySelect select;
    TomlResult<std::string> probe = readRequiredString(table, kWhere, "full_install_probe");
    if (!probe) {
        return std::unexpected(probe.error());
    }
    select.full_install_probe = std::move(*probe);
    if (TomlResult<void> read = readIntegers(
            table, kWhere, {{"loading_frames", &select.loading_frames, 1, kMaxLoadingFrames}});
        !read) {
        return std::unexpected(read.error());
    }
    TomlResult<std::vector<SStoryDifficulty>> difficulties = readDifficulties(table, kWhere);
    if (!difficulties) {
        return std::unexpected(difficulties.error());
    }
    select.difficulties = std::move(*difficulties);
    return select;
}

// [story_select] holds a table for each style's values.
TomlResult<SDirectStart> readDirectStart(const toml::table &table) {
    constexpr std::string_view kWhere = "story_select: direct_start: ";
    if (TomlResult<void> keys = rejectUnknownKeys(table, kWhere, {"loading_frames"}); !keys) {
        return std::unexpected(keys.error());
    }
    SDirectStart start;
    if (TomlResult<void> read = readIntegers(
            table, kWhere, {{"loading_frames", &start.loading_frames, 0, kMaxLoadingFrames}});
        !read) {
        return std::unexpected(read.error());
    }
    return start;
}

// Each style's table, as many as the package gives.
TomlResult<void> readStorySelect(const toml::table &table, SGameContent &content) {
    constexpr std::string_view kWhere = "story_select: ";
    if (TomlResult<void> keys = rejectUnknownKeys(table, kWhere, {"story_list", "direct_start"});
        !keys) {
        return std::unexpected(keys.error());
    }
    const TomlResult<const toml::table *> list = readTable(table, kWhere, "story_list");
    if (!list) {
        return std::unexpected(list.error());
    }
    if (*list != nullptr) {
        TomlResult<SStorySelect> read = readStoryList(**list);
        if (!read) {
            return std::unexpected(read.error());
        }
        content.story_select = std::move(*read);
    }
    const TomlResult<const toml::table *> start = readTable(table, kWhere, "direct_start");
    if (!start) {
        return std::unexpected(start.error());
    }
    if (*start != nullptr) {
        TomlResult<SDirectStart> read = readDirectStart(**start);
        if (!read) {
            return std::unexpected(read.error());
        }
        content.direct_start = *read;
    }
    if (*list == nullptr && *start == nullptr) {
        return std::unexpected(std::format("{}missing a style's table", kWhere));
    }
    return {};
}

TomlResult<std::vector<SChapterTitleFont>> readChapterTitleFonts(const toml::table &table) {
    constexpr std::string_view kWhere = "chapter_title: ";
    TomlResult<std::vector<const toml::table *>> tables = readTables(table, kWhere, "font");
    if (!tables) {
        return std::unexpected(tables.error());
    }
    std::vector<SChapterTitleFont> fonts;
    for (std::size_t i = 0; i < tables->size(); ++i) {
        const toml::table &entry = *(*tables)[i];
        const std::string where = std::format("{}font {}: ", kWhere, i + 1);
        if (TomlResult<void> keys = rejectUnknownKeys(entry, where, {"below_height", "font"});
            !keys) {
            return std::unexpected(keys.error());
        }
        SChapterTitleFont font;
        TomlResult<std::string> id = readRequiredString(entry, where, "font");
        if (!id) {
            return std::unexpected(id.error());
        }
        font.font = std::move(*id);
        const bool last = i + 1 == tables->size();
        const TomlResult<std::optional<int>> below =
            readIntegerIn(entry, where, "below_height", 1, kMaxScreenHeight);
        if (!below) {
            return std::unexpected(below.error());
        }
        if (last == below->has_value()) {
            return std::unexpected(
                std::format("{}below_height: {}", where,
                            last ? "the last font takes every height left" : "missing"));
        }
        font.below_height = below->value_or(0);
        fonts.push_back(std::move(font));
    }
    if (fonts.empty()) {
        return std::unexpected(std::format("{}font: missing", kWhere));
    }
    return fonts;
}

TomlResult<SChapterTitle> readChapterTitle(const toml::table &table) {
    constexpr std::string_view kWhere = "chapter_title: ";
    if (TomlResult<void> keys = rejectUnknownKeys(
            table, kWhere,
            {"seconds", "format", "colour", "shadow", "alpha", "inset_across", "inset_up", "font"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SChapterTitle title;
    TomlResult<std::string> format = readRequiredString(table, kWhere, "format");
    if (!format) {
        return std::unexpected(format.error());
    }
    title.format = std::move(*format);
    if (TomlResult<void> read = readIntegers(table, kWhere,
                                             {{"seconds", &title.seconds, 1, kMaxTitleSeconds},
                                              {"colour", &title.colour, 0, kMaxColour},
                                              {"shadow", &title.shadow, kNoMenuShadow, kMaxColour},
                                              {"alpha", &title.alpha, 0, kMaxAlpha},
                                              {"inset_across", &title.inset_across, 0, kMaxLines},
                                              {"inset_up", &title.inset_up, 0, kMaxLines}});
        !read) {
        return std::unexpected(read.error());
    }
    TomlResult<std::vector<SChapterTitleFont>> fonts = readChapterTitleFonts(table);
    if (!fonts) {
        return std::unexpected(fonts.error());
    }
    title.fonts = std::move(*fonts);
    return title;
}

// The [menu.key] table, read by read.
template <typename T, typename Read>
TomlResult<T> readMenuPart(const toml::table &table, std::string_view key, Read read) {
    const TomlResult<const toml::table *> found = readRequiredTable(table, "menu: ", key);
    if (!found) {
        return std::unexpected(found.error());
    }
    return read(**found);
}

TomlResult<SMenuLayout> readMenu(const toml::table &table) {
    constexpr std::string_view kWhere = "menu: ";
    if (TomlResult<void> keys =
            rejectUnknownKeys(table, kWhere,
                              {"left", "align", "top", "titled_top", "trademark", "page_tops",
                               "title", "item", "footer", "calibration", "options", "sound",
                               "slider", "attract", "features", "music"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SMenuLayout menu;
    if (TomlResult<void> read = readIntegers(table, kWhere,
                                             {{"left", &menu.left, 0, kMaxPictureX},
                                              {"top", &menu.top, 0, kMaxPictureY},
                                              {"titled_top", &menu.titled_top, 0, kMaxPictureY}});
        !read) {
        return std::unexpected(read.error());
    }
    TomlResult<EMenuAlign> align =
        readKeyword(table, kWhere, "align", EMenuAlign::Left, kMenuAligns);
    if (!align) {
        return std::unexpected(align.error());
    }
    menu.align = *align;
    TomlResult<std::optional<SMenuTrademark>> trademark = readTrademark(table, kWhere);
    if (!trademark) {
        return std::unexpected(trademark.error());
    }
    menu.trademark = *trademark;
    TomlResult<SMenuTitle> title = readMenuPart<SMenuTitle>(table, "title", readMenuTitle);
    if (!title) {
        return std::unexpected(title.error());
    }
    menu.title = *title;
    TomlResult<SMenuItems> item = readMenuPart<SMenuItems>(table, "item", readMenuItems);
    if (!item) {
        return std::unexpected(item.error());
    }
    menu.item = std::move(*item);
    TomlResult<SMenuFooter> footer = readMenuPart<SMenuFooter>(table, "footer", readMenuFooter);
    if (!footer) {
        return std::unexpected(footer.error());
    }
    menu.footer = std::move(*footer);
    TomlResult<SMenuCalibration> calibration =
        readMenuPart<SMenuCalibration>(table, "calibration", readMenuCalibration);
    if (!calibration) {
        return std::unexpected(calibration.error());
    }
    menu.calibration = std::move(*calibration);
    TomlResult<std::map<std::string, int, std::less<>>> page_tops = readPageTops(table);
    if (!page_tops) {
        return std::unexpected(page_tops.error());
    }
    menu.page_tops = std::move(*page_tops);
    const TomlResult<const toml::table *> options = readRequiredTable(table, kWhere, "options");
    if (!options) {
        return std::unexpected(options.error());
    }
    if (TomlResult<void> read = readMenuOptions(**options, menu); !read) {
        return std::unexpected(read.error());
    }
    const TomlResult<const toml::table *> sound = readRequiredTable(table, kWhere, "sound");
    if (!sound) {
        return std::unexpected(sound.error());
    }
    if (TomlResult<void> read = readMenuSound(**sound, menu); !read) {
        return std::unexpected(read.error());
    }
    TomlResult<SMenuSlider> slider = readMenuPart<SMenuSlider>(table, "slider", readMenuSlider);
    if (!slider) {
        return std::unexpected(slider.error());
    }
    menu.slider = *slider;
    const TomlResult<const toml::table *> attract = readTable(table, kWhere, "attract");
    if (!attract) {
        return std::unexpected(attract.error());
    }
    if (*attract != nullptr) {
        TomlResult<SMenuAttract> read = readMenuAttract(**attract);
        if (!read) {
            return std::unexpected(read.error());
        }
        menu.attract = std::move(*read);
    }
    TomlResult<SMenuFeatures> features =
        readMenuPart<SMenuFeatures>(table, "features", readMenuFeatures);
    if (!features) {
        return std::unexpected(features.error());
    }
    menu.features = *features;
    TomlResult<SMenuMusic> music = readMenuPart<SMenuMusic>(table, "music", readMenuMusic);
    if (!music) {
        return std::unexpected(music.error());
    }
    menu.music = std::move(*music);
    return menu;
}

// The style each part names, by key.
auto getFrontEndParts(auto &parts) {
    return std::array{std::pair{"title_backdrop", &parts.title_backdrop},
                      std::pair{"loading_indicator", &parts.loading_indicator},
                      std::pair{"credits", &parts.credits},
                      std::pair{"story_select", &parts.story_select}};
}

// A part a package names can't be empty; one it leaves out an earlier package names.
TomlResult<SFrontEndParts> readFrontEnd(const toml::table &table) {
    constexpr std::string_view kWhere = "front_end: ";
    if (TomlResult<void> keys = rejectUnknownKeys(
            table, kWhere, {"title_backdrop", "loading_indicator", "credits", "story_select"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SFrontEndParts parts;
    for (const auto &[key, field] : getFrontEndParts(parts)) {
        TomlResult<std::optional<std::string>> value = readString(table, kWhere, key);
        if (!value) {
            return std::unexpected(value.error());
        }
        if (*value && (*value)->empty()) {
            return std::unexpected(std::format("{}{}: missing", kWhere, key));
        }
        *field = std::move(*value);
    }
    return parts;
}

// The [key] table read by read, or nothing without it.
template <typename T, typename Read>
TomlResult<std::optional<T>> readOptionalTable(const toml::table &table, std::string_view key,
                                               Read read) {
    const TomlResult<const toml::table *> found = readTable(table, "", key);
    if (!found) {
        return std::unexpected(found.error());
    }
    if (*found == nullptr) {
        return std::nullopt;
    }
    return read(**found);
}

TomlResult<std::optional<SStoryUnlock>> readUnlock(const toml::table &table,
                                                   std::string_view where) {
    const TomlResult<const toml::table *> unlock = readTable(table, where, "unlock");
    if (!unlock) {
        return std::unexpected(unlock.error());
    }
    if (*unlock == nullptr) {
        return std::nullopt;
    }
    const std::string inner = std::format("{}unlock: ", where);
    if (TomlResult<void> keys = rejectUnknownKeys(**unlock, inner, {"key", "code"}); !keys) {
        return std::unexpected(keys.error());
    }
    TomlResult<std::string> key = readRequiredString(**unlock, inner, "key");
    if (!key) {
        return std::unexpected(key.error());
    }
    const TomlResult<int> code = readRequiredIntegerIn(**unlock, inner, "code", 0, kMaxCode);
    if (!code) {
        return std::unexpected(code.error());
    }
    return SStoryUnlock{.key = std::move(*key), .code = *code};
}

TomlResult<SGameChapter> readChapter(const toml::table &table, std::string_view where) {
    if (TomlResult<void> keys =
            rejectUnknownKeys(table, where, {"name", "mission", "needs_full_install"});
        !keys) {
        return std::unexpected(keys.error());
    }
    TomlResult<std::string> name = readRequiredString(table, where, "name");
    if (!name) {
        return std::unexpected(name.error());
    }
    TomlResult<std::string> mission = readRequiredString(table, where, "mission");
    if (!mission) {
        return std::unexpected(mission.error());
    }
    const TomlResult<std::optional<bool>> full = readBoolean(table, where, "needs_full_install");
    if (!full) {
        return std::unexpected(full.error());
    }
    return SGameChapter{.name = std::move(*name),
                        .mission = std::move(*mission),
                        .needs_full_install = full->value_or(false)};
}

TomlResult<std::vector<SGameChapter>> readChapters(const toml::table &table,
                                                   std::string_view where) {
    const TomlResult<std::vector<const toml::table *>> tables = readTables(table, where, "chapter");
    if (!tables) {
        return std::unexpected(tables.error());
    }
    if (tables->empty()) {
        return std::unexpected(std::format("{}chapter: a story needs one", where));
    }
    std::vector<SGameChapter> chapters;
    for (std::size_t i = 0; i < tables->size(); ++i) {
        TomlResult<SGameChapter> chapter =
            readChapter(*(*tables)[i], std::format("{}chapter {}: ", where, i + 1));
        if (!chapter) {
            return std::unexpected(chapter.error());
        }
        chapters.push_back(std::move(*chapter));
    }
    return chapters;
}

// Its id, names and year.
TomlResult<SGameStory> readStoryHeading(const toml::table &table, std::string_view where) {
    TomlResult<std::string> id = readId(table, where);
    if (!id) {
        return std::unexpected(id.error());
    }
    SGameStory story;
    story.id = std::move(*id);
    for (const auto &[key, field] :
         {std::pair{"name", &story.name}, std::pair{"title", &story.title}}) {
        TomlResult<std::string> value = readRequiredString(table, where, key);
        if (!value) {
            return std::unexpected(value.error());
        }
        *field = std::move(*value);
    }
    const TomlResult<std::optional<int>> year = readIntegerIn(table, where, "year", 0, kMaxYear);
    if (!year) {
        return std::unexpected(year.error());
    }
    story.year = year->value_or(0);
    return story;
}

TomlResult<SGameStory> readStory(const toml::table &table, std::string_view where) {
    if (TomlResult<void> keys = rejectUnknownKeys(
            table, where,
            {"id", "name", "title", "year", "loading", "unlock", "requires", "chapter"});
        !keys) {
        return std::unexpected(keys.error());
    }
    TomlResult<SGameStory> story = readStoryHeading(table, where);
    if (!story) {
        return story;
    }
    TomlResult<std::string> loading = readOptionalString(table, where, "loading");
    if (!loading) {
        return std::unexpected(loading.error());
    }
    story->loading = std::move(*loading);
    TomlResult<std::optional<SStoryUnlock>> unlock = readUnlock(table, where);
    if (!unlock) {
        return std::unexpected(unlock.error());
    }
    story->unlock = std::move(*unlock);
    TomlResult<std::vector<std::string>> required = readStrings(table, where, "requires");
    if (!required) {
        return std::unexpected(required.error());
    }
    story->required_stories = std::move(*required);
    TomlResult<std::vector<SGameChapter>> chapters = readChapters(table, where);
    if (!chapters) {
        return std::unexpected(chapters.error());
    }
    story->chapters = std::move(*chapters);
    return story;
}

// The [[key]] tables, read by read, each id once.
template <typename T, typename Read>
TomlResult<std::vector<T>> readListById(const toml::table &table, std::string_view key, Read read) {
    const TomlResult<std::vector<const toml::table *>> tables = readTables(table, "", key);
    if (!tables) {
        return std::unexpected(tables.error());
    }
    std::vector<T> items;
    for (std::size_t i = 0; i < tables->size(); ++i) {
        const std::string where = std::format("{} {}: ", key, i + 1);
        TomlResult<T> item = read(*(*tables)[i], where);
        if (!item) {
            return std::unexpected(item.error());
        }
        if (std::ranges::contains(items, item->id, &T::id)) {
            return std::unexpected(std::format("{}id: {} is another {}'s", where, item->id, key));
        }
        items.push_back(std::move(*item));
    }
    return items;
}

TomlResult<TranslationTable> readTranslation(const toml::table &table, std::string_view where) {
    TranslationTable translation;
    for (const auto &[key, node] : table) {
        const std::optional<std::string> value = node.value_exact<std::string>();
        if (!value) {
            return std::unexpected(std::format("{}{}: not a string", where, key.str()));
        }
        translation.emplace(key.str(), *value);
    }
    return translation;
}

TomlResult<void> readTranslations(const toml::table &table, SGameContent &content) {
    const TomlResult<const toml::table *> languages = readTable(table, "", "translation");
    if (!languages) {
        return std::unexpected(languages.error());
    }
    if (*languages == nullptr) {
        return {};
    }
    for (const auto &[language, node] : **languages) {
        const std::string where = std::format("translation.{}: ", language.str());
        if (language.str().empty() || !std::ranges::all_of(language.str(), isIdCharacter)) {
            return std::unexpected(
                std::format("{}not a language code of letters, digits, '.', '_' and '-'", where));
        }
        const toml::table *strings = node.as_table();
        if (strings == nullptr) {
            return std::unexpected(std::format("{}not a table of translations", where));
        }
        TomlResult<TranslationTable> translation = readTranslation(*strings, where);
        if (!translation) {
            return std::unexpected(translation.error());
        }
        content.translations.emplace(language.str(), std::move(*translation));
    }
    return {};
}

TomlResult<void> readLabels(const toml::table &table, SGameContent &content) {
    const TomlResult<const toml::table *> labels = readTable(table, "", "labels");
    if (!labels) {
        return std::unexpected(labels.error());
    }
    if (*labels == nullptr) {
        return {};
    }
    TomlResult<TranslationTable> read = readTranslation(**labels, "labels: ");
    if (!read) {
        return std::unexpected(read.error());
    }
    content.labels = std::move(*read);
    return {};
}

// The content's own strings, by key.
auto getGameStrings(auto &content) {
    return std::array{std::pair{"title", &content.title},
                      std::pair{"copyright", &content.copyright},
                      std::pair{"copyright_os_font", &content.copyright_os_font}};
}

TomlResult<void> readGameStrings(const toml::table &table, SGameContent &content) {
    for (const auto &[key, field] : getGameStrings(content)) {
        TomlResult<std::optional<std::string>> value = readString(table, "", key);
        if (!value) {
            return std::unexpected(value.error());
        }
        *field = std::move(*value);
    }
    if (content.title && !isFolderName(*content.title)) {
        return std::unexpected("title: not a name a folder can have");
    }
    return {};
}

std::string formatTint(const std::array<int, 3> &tint) {
    return std::format("[0x{:x}, 0x{:x}, 0x{:x}]", tint[0], tint[1], tint[2]);
}

std::string formatDrop(const std::optional<SMenuDrop> &drop) {
    if (!drop) {
        return {};
    }
    return std::format("drop = {{ x = {}, y = {}, colour = 0x{:x} }}\n", drop->x, drop->y,
                       drop->colour);
}

std::string formatMenu(const SMenuLayout &menu) {
    std::string text = std::format("\n[menu]\nleft = {}\n", menu.left);
    if (menu.align != EMenuAlign::Left) {
        text += std::format("align = {}\n", quoteToml(getKeywordName(menu.align, kMenuAligns)));
    }
    text += std::format("top = {}\ntitled_top = {}\n", menu.top, menu.titled_top);
    if (menu.trademark) {
        text += std::format("trademark = {{ x = {}, y = {}, glyph = 0x{:x}, alpha = 0x{:x} }}\n",
                            menu.trademark->x, menu.trademark->y, menu.trademark->glyph,
                            menu.trademark->alpha);
    }
    text += std::format("\n[menu.title]\ncolour = 0x{:x}\nshadow = {}\ngap_lines = {}\n{}",
                        menu.title.colour, menu.title.shadow, menu.title.gap_lines,
                        formatDrop(menu.title.drop));
    if (!menu.title.font.empty()) {
        text += std::format("font = {}\n", quoteToml(menu.title.font));
    }
    const SMenuItems &item = menu.item;
    text +=
        std::format("\n[menu.item]\nfont = {}\ncolour = 0x{:x}\nselected_colour = 0x{:x}\n"
                    "alpha = {}\nshadow = {}\nspacing_titled = {}\nspacing_untitled = {}\n{}",
                    quoteToml(item.font), item.colour, item.selected_colour, item.alpha,
                    item.shadow, item.spacing_titled, item.spacing_untitled, formatDrop(item.drop));
    if (!item.untitled_font.empty()) {
        text += std::format("untitled_font = {}\n", quoteToml(item.untitled_font));
    }
    if (!item.untitled_positions.empty()) {
        std::string points;
        for (const SMenuPoint &point : item.untitled_positions) {
            points += std::format("{}{{ {} = {}, y = {} }}", points.empty() ? "" : ", ",
                                  point.centred ? "centre_x" : "x", point.x, point.y);
        }
        text += std::format("untitled_positions = [{}]\n", points);
    }
    text += std::format("\n[menu.item.glow]\ncolour = 0x{:x}\ncopies = {}\nflicker = {}\n",
                        item.glow.colour, item.glow.copies, item.glow.flicker);
    if (item.glow.item_colour) {
        text += std::format("item_colour = 0x{:x}\n", *item.glow.item_colour);
    }
    const SMenuFooter &footer = menu.footer;
    text += std::format("\n[menu.footer]\nfont = {}\ncolour = 0x{:x}\nshadow = {}\n"
                        "version_alpha = 0x{:x}\n",
                        quoteToml(footer.font), footer.colour, footer.shadow, footer.version_alpha);
    for (const auto &[key, place] :
         {std::pair{"copyright", &footer.copyright}, std::pair{"version", &footer.version}}) {
        text +=
            std::format("\n[menu.footer.{}]\ncorner = {}\nedge = {}\nx = {}\ny = {}\n", key,
                        quoteToml(getKeywordName(place->corner, kFooterCorners)),
                        quoteToml(getKeywordName(place->edge, kFooterEdges)), place->x, place->y);
    }
    text += std::format("\n[menu.music]\nlow_rate = {}\nhigh_rate = {}\n",
                        quoteToml(menu.music.low_rate), quoteToml(menu.music.high_rate));
    const SMenuCalibration &calibration = menu.calibration;
    text += std::format("\n[menu.calibration]\nimage = {}\n{}steps = {}\ntitle = {}\nprompt = {}\n"
                        "font = {}\ncolour = 0x{:x}\ntitle_lines = {}\nprompt_lines = {}\n",
                        quoteToml(calibration.image), formatPictureFit(calibration.fit),
                        formatTomlList(calibration.steps), quoteToml(calibration.title),
                        quoteToml(calibration.prompt), quoteToml(calibration.font),
                        calibration.colour, calibration.title_lines, calibration.prompt_lines);
    if (!menu.page_tops.empty()) {
        text += "\n[menu.page_tops]\n";
        for (const auto &[page, top] : menu.page_tops) {
            text += std::format("{} = {}\n", quoteToml(page), top);
        }
    }
    text += std::format("\n[menu.options]\nhero = {}\ncard_name_length = {}\n", menu.options_hero,
                        menu.card_name_length);
    text += std::format("\n[menu.sound]\neffects_sample = {}\n", quoteToml(menu.effects_sample));
    if (const std::optional<SMenuSpectrum> &spectrum = menu.spectrum) {
        text += std::format("\n[menu.sound.spectrum]\nframes = {}\nfps = {}\npitch = {}\n"
                            "half_width = {}\nmargin_divisor = {}\nheight_percent = {}\n"
                            "alpha = 0x{:x}\n",
                            formatTomlList(spectrum->frames), spectrum->fps, spectrum->pitch,
                            spectrum->half_width, spectrum->margin_divisor,
                            spectrum->height_percent, spectrum->alpha);
        if (spectrum->mirrored) {
            text += "mirrored = true\n";
        }
    }
    const SMenuSlider &slider = menu.slider;
    text += std::format("\n[menu.slider]\nwidth_share = {}\nwidth_parts = {}\nheight = {}\n"
                        "bar_colour = 0x{:x}\ntrough_colour = 0x{:x}\nborder_colour = 0x{:x}\n"
                        "text_colour = 0x{:x}\ntext_shadow = {}\n",
                        slider.width_share, slider.width_parts, slider.height, slider.bar_colour,
                        slider.trough_colour, slider.border_colour, slider.text_colour,
                        slider.text_shadow);
    if (const std::optional<SMenuAttract> &attract = menu.attract) {
        text += std::format("\n[menu.attract]\ndirectory = {}\nmovies = {}\n",
                            quoteToml(attract->directory), formatTomlList(attract->movies));
    }
    text += std::format("\n[menu.features]\ndifficulty = {}\n", menu.features.difficulty);
    return text;
}

std::string formatList(const SListLook &list) {
    std::string text = std::format(
        "\n[list]\nitem_colour = 0x{:x}\ndisabled_colour = 0x{:x}\nselected_colour = 0x{:x}\n"
        "confirmed_colour = 0x{:x}\nseparator_colour = 0x{:x}\nalpha = 0x{:x}\nshadow = {}\n"
        "column_padding = {}\nmargin_width = {}\nmargin_height = {}\nfield_gap_divisor = {}\n"
        "row_extra = {}\nreserved_lines = {}\nwidth_share = {}\nwidth_parts = {}\n"
        "double_click_ticks = {}\n",
        list.item_colour, list.disabled_colour, list.selected_colour, list.confirmed_colour,
        list.separator_colour, list.alpha, list.shadow, list.column_padding, list.margin_width,
        list.margin_height, list.field_gap_divisor, list.row_extra, list.reserved_lines,
        list.width_share, list.width_parts, list.double_click_ticks);
    const SPointerLook &pointer = list.pointer;
    text += std::format("\n[list.pointer]\ncube_colours = [0x{:x}, 0x{:x}, 0x{:x}, 0x{:x}]\n"
                        "size = {}\ndefault_height = {}\n",
                        pointer.cube_colours[0], pointer.cube_colours[1], pointer.cube_colours[2],
                        pointer.cube_colours[3], pointer.size, pointer.default_height);
    const SScrollBarLook &bar = list.scroll_bar;
    text += std::format("\n[list.scroll_bar]\nfirst_repeat_ticks = 0x{:x}\nrepeat_ticks = 0x{:x}\n"
                        "track_fill_colour = 0x{:x}\ntrack_border_colour = 0x{:x}\n",
                        bar.first_repeat_ticks, bar.repeat_ticks, bar.track_fill_colour,
                        bar.track_border_colour);
    return text;
}

std::string formatDialog(const SDialogLook &dialog) {
    return std::format(
        "\n[dialog]\ncontent_colour = 0x{:x}\nborder_colour = 0x{:x}\ntitle_colour = 0x{:x}\n"
        "text_colour = 0x{:x}\nwarning_colour = 0x{:x}\nwindow_status_colour = 0x{:x}\n"
        "status_colour = 0x{:x}\nprogress_background_colour = 0x{:x}\n"
        "progress_border_colour = 0x{:x}\nprogress_fill_colour = 0x{:x}\n"
        "bevel_highlight_colour = 0x{:x}\nbevel_shade_colour = 0x{:x}\n"
        "bevel_face_colour = 0x{:x}\nbevel_mark_colour = 0x{:x}\nmargin_width_divisor = {}\n"
        "margin_height_divisor = {}\ngrid_divisor = {}\nbutton_margin_divisor = {}\n"
        "prompt_padding_chars = {}\nprompt_padding_lines = {}\n",
        dialog.content_colour, dialog.border_colour, dialog.title_colour, dialog.text_colour,
        dialog.warning_colour, dialog.window_status_colour, dialog.status_colour,
        dialog.progress_background_colour, dialog.progress_border_colour,
        dialog.progress_fill_colour, dialog.bevel_highlight_colour, dialog.bevel_shade_colour,
        dialog.bevel_face_colour, dialog.bevel_mark_colour, dialog.margin_width_divisor,
        dialog.margin_height_divisor, dialog.grid_divisor, dialog.button_margin_divisor,
        dialog.prompt_padding_chars, dialog.prompt_padding_lines);
}

std::string formatFont(const SFontSpec &font) {
    std::string offsets;
    for (const SFontYOffset &offset : font.y_offsets) {
        offsets +=
            std::format("{}{{ offset = {}, first = 0x{:x}, last = 0x{:x} }}",
                        offsets.empty() ? "" : ", ", offset.offset, offset.first, offset.last);
    }
    std::string text = std::format(
        "\n[[font]]\nid = {}\nfile = {}\nwidth = 0x{:x}\nheight = 0x{:x}\ntransparent = 0x{:x}\n"
        "own_colours = {}\ny_offsets = [{}]\nspace_width = {}\nshadow_x = {}\n",
        quoteToml(font.id), quoteToml(font.file), font.width, font.height, font.transparent,
        font.own_colours, offsets, font.space_width, font.shadow_x);
    if (font.os_font) {
        text += std::format("os_font = {{ height = {}, y_offset1 = {}, y_offset2 = {} }}\n",
                            font.os_font->height, font.os_font->y_offset1, font.os_font->y_offset2);
    }
    return text;
}

std::string formatControls(const SControls &controls) {
    std::string text;
    for (const SControlMode &mode : controls.modes) {
        text += std::format("\n[[controls.mode]]\nid = {}\nlabel = {}\nmanual_aim = {}\n"
                            "[controls.mode.defaults]\n",
                            quoteToml(mode.id), quoteToml(mode.label), mode.manual_aim);
        for (const SControlDefault &entry : mode.defaults) {
            std::string codes;
            for (const int code : entry.codes) {
                codes += std::format("{}0x{:x}", codes.empty() ? "" : ", ", code);
            }
            text += std::format("{} = [{}]\n", quoteToml(entry.action), codes);
        }
    }
    for (const SBindingRowSpec &row : controls.bindings) {
        text += std::format("\n[[controls.binding]]\naction = {}\nlabel = {}\n",
                            quoteToml(row.action), quoteToml(row.label));
    }
    return text;
}

std::string formatSkyScene(const SSkyScene &sky) {
    std::string text = std::format(
        "\n[title_backdrop.sky_scene]\nmodel = {}\ncheat_model = {}\ncheat_code = {}\n"
        "start_phase = {}\nturn_per_second = {}\nrest_phase = {}\nprojection = {}\nswing = {}\n"
        "depth = {}\nmoon_light = [{}, {}, {}]\nmoon_ambient = 0x{:x}\nmoon_flat = 0x{:x}\n",
        quoteToml(sky.model), quoteToml(sky.cheat_model), sky.cheat_code, sky.start_phase,
        sky.turn_per_second, sky.rest_phase, sky.projection, sky.swing, sky.depth,
        sky.moon_light[0], sky.moon_light[1], sky.moon_light[2], sky.moon_ambient, sky.moon_flat);
    text +=
        std::format("bat_model = {}\nbat_courses = {}\nbat_count = {}\nbat_speed = {}\n"
                    "bat_animation_speed = {}\nbat_scatter = {}\nbat_light = [{}, {}, {}]\n"
                    "bat_ambient = 0x{:x}\ncloud_image = {}\ncloud_size = {}\ncloud_shift_x = {}\n"
                    "cloud_shift_y = {}\n",
                    quoteToml(sky.bat_model), formatTomlList(sky.bat_courses), sky.bat_count,
                    sky.bat_speed, sky.bat_animation_speed, sky.bat_scatter, sky.bat_light[0],
                    sky.bat_light[1], sky.bat_light[2], sky.bat_ambient, quoteToml(sky.cloud_image),
                    sky.cloud_size, sky.cloud_shift_x, sky.cloud_shift_y);
    text += std::format("frame_prefix = {}\nframe_digits = {}\nframe_count = {}\nframe_x = {}\n"
                        "frame_y = {}\nframe_width = {}\nframe_height = {}\nframe_alpha = {}\n"
                        "frame_rate = {}\nframe_wrap = {}\n",
                        quoteToml(sky.frame_prefix), sky.frame_digits, sky.frame_count, sky.frame_x,
                        sky.frame_y, sky.frame_width, sky.frame_height, sky.frame_alpha,
                        sky.frame_rate, sky.frame_wrap);
    return text;
}

template <typename T, std::size_t Count>
std::string formatNumbers(const std::array<T, Count> &values) {
    std::string text;
    for (const T value : values) {
        text += std::format("{}{}", text.empty() ? "" : ", ", value);
    }
    return std::format("[{}]", text);
}

std::string formatTiledScroll(const STiledScroll &scroll) {
    return std::format(
        "\n[title_backdrop.tiled_scroll]\n{}tile = {}\ncolumns = [{}, {}]\nrows = [{}, {}]\n"
        "step_x = {}\nstep_y = {}\nsteps_per_second = {}\nwrap_x_above = {}\nwrap_x_to = {}\n"
        "wrap_y_below = {}\nwrap_y_to = {}\nhand = {}\nhand_x = {}\nhand_y = {}\nhand_width = {}\n"
        "hand_height = {}\nhand_alpha_start = 0x{:x}\nhand_alpha_low = {}\n"
        "hand_alpha_high = 0x{:x}\nhand_alpha_step = {}\noverlay = {}\n",
        formatPictureFit(scroll.fit), quoteToml(scroll.tile), scroll.columns[0], scroll.columns[1],
        scroll.rows[0], scroll.rows[1], scroll.step_x, scroll.step_y, scroll.steps_per_second,
        scroll.wrap_x_above, scroll.wrap_x_to, scroll.wrap_y_below, scroll.wrap_y_to,
        quoteToml(scroll.hand), scroll.hand_x, scroll.hand_y, scroll.hand_width, scroll.hand_height,
        scroll.hand_alpha_start, scroll.hand_alpha_low, scroll.hand_alpha_high,
        scroll.hand_alpha_step, quoteToml(scroll.overlay));
}

std::string formatFigureScene(const SFigureScene &figure) {
    std::string models;
    for (const SFigureModel &model : figure.models) {
        models += std::format("{}{{ file = {}, frame_wrap = {} }}", models.empty() ? "" : ", ",
                              quoteToml(model.file), model.frame_wrap);
    }
    std::string text =
        std::format("\n[title_backdrop.figure_scene]\n{}", formatPictureFit(figure.fit));
    if (!figure.backdrop.empty()) {
        text += std::format("backdrop = {}\nbackdrop_alpha = 0x{:x}\n", quoteToml(figure.backdrop),
                            figure.backdrop_alpha);
    }
    if (!figure.models.empty()) {
        text += std::format("models = [{}]\n", models);
    }
    text += std::format("steps_per_second = {}\n", figure.steps_per_second);
    if (!figure.cheat_model.empty()) {
        text += std::format("cheat_model = {}\n", quoteToml(figure.cheat_model));
    }
    text += std::format("cheat_code = {}\ncamera_rotation = {}\ncamera_origin = {}\n"
                        "projection = {}\nlight = {}\nflat = {}\nambient = 0x{:x}\n",
                        figure.cheat_code, formatNumbers(figure.camera_rotation),
                        formatNumbers(figure.camera_origin), figure.projection,
                        formatNumbers(figure.light), formatNumbers(figure.flat), figure.ambient);
    text += std::format("frame_prefix = {}\nframe_digits = {}\nframe_count = {}\nframe_x = {}\n"
                        "frame_y = {}\nframe_width = {}\nframe_height = {}\nframe_alpha = 0x{:x}\n"
                        "frame_rate = {}\nframe_wrap = {}\n",
                        quoteToml(figure.frame_prefix), figure.frame_digits, figure.frame_count,
                        figure.frame_x, figure.frame_y, figure.frame_width, figure.frame_height,
                        figure.frame_alpha, figure.frame_rate, figure.frame_wrap);
    return text;
}

std::string formatStory(const SGameStory &story) {
    std::string text =
        std::format("\n[[story]]\nid = {}\nname = {}\ntitle = {}\n", quoteToml(story.id),
                    quoteToml(story.name), quoteToml(story.title));
    if (story.year != 0) {
        text += std::format("year = {}\n", story.year);
    }
    if (!story.loading.empty()) {
        text += std::format("loading = {}\n", quoteToml(story.loading));
    }
    if (story.unlock) {
        text += std::format("unlock = {{ key = {}, code = 0x{:x} }}\n",
                            quoteToml(story.unlock->key), story.unlock->code);
    }
    if (!story.required_stories.empty()) {
        text += std::format("requires = {}\n", formatTomlList(story.required_stories));
    }
    for (const SGameChapter &chapter : story.chapters) {
        text += std::format("\n[[story.chapter]]\nname = {}\nmission = {}\n",
                            quoteToml(chapter.name), quoteToml(chapter.mission));
        if (chapter.needs_full_install) {
            text += "needs_full_install = true\n";
        }
    }
    return text;
}

} // namespace

TomlResult<SGameContent> readGameContent(const toml::table &table) {
    SGameContent content;
    if (TomlResult<void> strings = readGameStrings(table, content); !strings) {
        return std::unexpected(strings.error());
    }
    TomlResult<std::optional<SFrontEndParts>> front_end =
        readOptionalTable<SFrontEndParts>(table, "front_end", readFrontEnd);
    if (!front_end) {
        return std::unexpected(front_end.error());
    }
    content.front_end = std::move(*front_end).value_or(SFrontEndParts{});
    TomlResult<std::optional<SGameCredits>> credits =
        readOptionalTable<SGameCredits>(table, "credits", readCredits);
    if (!credits) {
        return std::unexpected(credits.error());
    }
    content.credits = std::move(*credits);
    TomlResult<std::optional<SMenuLayout>> menu =
        readOptionalTable<SMenuLayout>(table, "menu", readMenu);
    if (!menu) {
        return std::unexpected(menu.error());
    }
    content.menu = *menu;
    TomlResult<std::optional<SListLook>> list =
        readOptionalTable<SListLook>(table, "list", readList);
    if (!list) {
        return std::unexpected(list.error());
    }
    content.list = *list;
    TomlResult<std::optional<SDialogLook>> dialog =
        readOptionalTable<SDialogLook>(table, "dialog", readDialog);
    if (!dialog) {
        return std::unexpected(dialog.error());
    }
    content.dialog = *dialog;
    const TomlResult<const toml::table *> backdrop = readTable(table, "", "title_backdrop");
    if (!backdrop) {
        return std::unexpected(backdrop.error());
    }
    if (*backdrop != nullptr) {
        if (TomlResult<void> read = readTitleBackdrop(**backdrop, content); !read) {
            return std::unexpected(read.error());
        }
    }
    TomlResult<std::optional<SStartup>> startup =
        readOptionalTable<SStartup>(table, "startup", readStartup);
    if (!startup) {
        return std::unexpected(startup.error());
    }
    content.startup = std::move(*startup);
    TomlResult<std::optional<SMoonIndicator>> moon_indicator =
        readOptionalTable<SMoonIndicator>(table, "loading_indicator", readLoadingIndicator);
    if (!moon_indicator) {
        return std::unexpected(moon_indicator.error());
    }
    content.moon_indicator = std::move(*moon_indicator);
    const TomlResult<const toml::table *> story_select = readTable(table, "", "story_select");
    if (!story_select) {
        return std::unexpected(story_select.error());
    }
    if (*story_select != nullptr) {
        if (TomlResult<void> read = readStorySelect(**story_select, content); !read) {
            return std::unexpected(read.error());
        }
    }
    TomlResult<std::optional<SChapterTitle>> chapter_title =
        readOptionalTable<SChapterTitle>(table, "chapter_title", readChapterTitle);
    if (!chapter_title) {
        return std::unexpected(chapter_title.error());
    }
    content.chapter_title = std::move(*chapter_title);
    TomlResult<std::vector<SFontSpec>> fonts = readListById<SFontSpec>(table, "font", readFont);
    if (!fonts) {
        return std::unexpected(fonts.error());
    }
    content.fonts = std::move(*fonts);
    TomlResult<std::optional<SControls>> controls =
        readOptionalTable<SControls>(table, "controls", readControls);
    if (!controls) {
        return std::unexpected(controls.error());
    }
    content.controls = std::move(*controls);
    TomlResult<std::vector<SLoadingPicture>> loading =
        readListById<SLoadingPicture>(table, "loading", readLoading);
    if (!loading) {
        return std::unexpected(loading.error());
    }
    content.loading = std::move(*loading);
    TomlResult<std::vector<SGameStory>> stories =
        readListById<SGameStory>(table, "story", readStory);
    if (!stories) {
        return std::unexpected(stories.error());
    }
    content.stories = std::move(*stories);
    if (TomlResult<void> labels = readLabels(table, content); !labels) {
        return std::unexpected(labels.error());
    }
    if (TomlResult<void> translations = readTranslations(table, content); !translations) {
        return std::unexpected(translations.error());
    }
    return content;
}

std::expected<SGameContent, std::string> parseGameContent(std::string_view text) {
    return parseToml(text).and_then([](const toml::table &table) -> TomlResult<SGameContent> {
        if (TomlResult<void> keys = rejectUnknownKeys(table, "", {}, kGameContentKeys); !keys) {
            return std::unexpected(keys.error());
        }
        return readGameContent(table);
    });
}

std::string formatGameContentKeys(const SGameContent &content) {
    std::string text;
    for (const auto &[key, field] : getGameStrings(content)) {
        if (*field) {
            text += std::format("{} = {}\n", key, quoteToml(**field));
        }
    }
    return text;
}

std::string formatGameContentTables(const SGameContent &content) {
    std::string text;
    if (content.front_end != SFrontEndParts{}) {
        text += "\n[front_end]\n";
        for (const auto &[key, field] : getFrontEndParts(content.front_end)) {
            if (*field) {
                text += std::format("{} = {}\n", key, quoteToml(**field));
            }
        }
    }
    if (content.credits) {
        text += std::format("\n[credits]\ntext = {}\n{}", quoteToml(content.credits->text),
                            formatPictureFit(content.credits->fit));
        if (!content.credits->image.empty()) {
            text += std::format("image = {}\n", quoteToml(content.credits->image));
        }
        if (!content.credits->music.empty()) {
            text += std::format("music = {}\n", quoteToml(content.credits->music));
        }
        if (const std::optional<SCreditsColumnScroll> &scroll = content.credits->column_scroll) {
            text += std::format(
                "\n[credits.column_scroll]\nfont = {}\ncolumn_left = {}\n"
                "column_to_screen_edge = {}\ntop_strip_bottom = {}\n"
                "bottom_strip_top = {}\nstrip_colour = 0x{:x}\ntext_colour = 0x{:x}\n"
                "heading_colour = 0x{:x}\nshadow_colour = {}\nscroll_speed = {}\nstart_y = {}\n"
                "end_line = {}\nmarker = {}\nheading = {}\n",
                quoteToml(scroll->font), scroll->column_left, scroll->column_to_screen_edge,
                scroll->top_strip_bottom, scroll->bottom_strip_top, scroll->strip_colour,
                scroll->text_colour, scroll->heading_colour, scroll->shadow_colour,
                scroll->scroll_speed, scroll->start_y, quoteToml(scroll->end_line),
                quoteToml(std::string(1, scroll->marker)),
                quoteToml(std::string(1, scroll->heading)));
        }
        if (const std::optional<SCreditsTwoColumn> &two = content.credits->two_column) {
            text += std::format(
                "\n[credits.two_column]\nfont = {}\ncentre_left = {}\ncentre_right = {}\n"
                "left_x = {}\nright_x = {}\nleft_column = {}\nright_column = {}\n"
                "top_strip_bottom = {}\nbottom_strip_top = {}\nstrip_colour = 0x{:x}\n"
                "text_colour = 0x{:x}\nheading_colour = 0x{:x}\nshadow_colour = {}\n"
                "scroll_speed = {}\nstart_y = {}\nend_line = {}\nmarker = {}\nheading = {}\n",
                quoteToml(two->font), two->centre_left, two->centre_right, two->left_x,
                two->right_x, quoteToml(std::string(1, two->left_column)),
                quoteToml(std::string(1, two->right_column)), two->top_strip_bottom,
                two->bottom_strip_top, two->strip_colour, two->text_colour, two->heading_colour,
                two->shadow_colour, two->scroll_speed, two->start_y, quoteToml(two->end_line),
                quoteToml(std::string(1, two->marker)), quoteToml(std::string(1, two->heading)));
        }
        if (const std::optional<SCreditsFadeLoop> &fade = content.credits->fade_loop) {
            text += std::format(
                "\n[credits.fade_loop]\nfont = {}\nimage_x = {}\nimage_y = {}\n"
                "text_colour = 0x{:x}\nheading_colour = 0x{:x}\nshadow_colour = {}\n"
                "scroll_speed = {}\nstart_y = {}\nloop_below = {}\nrestart_y = {}\n"
                "fade_centre = {}\nfade_reach = {}\nend_line = {}\nmarker = {}\nheading = {}\n",
                quoteToml(fade->font), fade->image_x, fade->image_y, fade->text_colour,
                fade->heading_colour, fade->shadow_colour, fade->scroll_speed, fade->start_y,
                fade->loop_below, fade->restart_y, fade->fade_centre, fade->fade_reach,
                quoteToml(fade->end_line), quoteToml(std::string(1, fade->marker)),
                quoteToml(std::string(1, fade->heading)));
        }
    }
    if (content.menu) {
        text += formatMenu(*content.menu);
    }
    for (const SFontSpec &font : content.fonts) {
        text += formatFont(font);
    }
    if (content.controls) {
        text += formatControls(*content.controls);
    }
    if (content.list) {
        text += formatList(*content.list);
    }
    if (content.dialog) {
        text += formatDialog(*content.dialog);
    }
    if (const std::optional<SSkyScene> &sky = content.sky_scene) {
        text += formatSkyScene(*sky);
    }
    if (const std::optional<SFigureScene> &figure = content.figure_scene) {
        text += formatFigureScene(*figure);
    }
    if (const std::optional<STiledScroll> &tiled = content.tiled_scroll) {
        text += formatTiledScroll(*tiled);
    }
    if (const std::optional<SStartup> &startup = content.startup) {
        text += std::format("\n[startup]\npicture = {}\n{}picture_alpha = 0x{:x}\nlabel_x = {}\n"
                            "label_y = {}\nlabel_font = {}\nlabel_colour = 0x{:x}\n"
                            "movie_directory = {}\nmovie = {}\n",
                            quoteToml(startup->picture), formatPictureFit(startup->fit),
                            startup->picture_alpha, startup->label_x, startup->label_y,
                            quoteToml(startup->label_font), startup->label_colour,
                            quoteToml(startup->movie_directory), quoteToml(startup->movie));
    }
    if (const std::optional<SMoonIndicator> &moon = content.moon_indicator) {
        text += std::format(
            "\n[loading_indicator.moon]\nmodel = {}\nglow_texture = {}\nwindow_size = {}\n"
            "corner_x = {}\ncorner_y = {}\ncorner_size = {}\n"
            "default_tint = [0x{:x}, 0x{:x}, 0x{:x}]\nfull_projection = {}\n"
            "window_projection = {}\ndepth = {}\nlight_reach = {}\nambient = 0x{:x}\n"
            "glow_half_size = {}\nstatus_box = [{}, {}, {}, {}]\nstatus_box_colour = 0x{:x}\n"
            "status_font = {}\nstatus_colour = 0x{:x}\n",
            quoteToml(moon->model), quoteToml(moon->glow_texture), moon->window_size,
            moon->corner_x, moon->corner_y, moon->corner_size, moon->default_tint[0],
            moon->default_tint[1], moon->default_tint[2], moon->full_projection,
            moon->window_projection, moon->depth, moon->light_reach, moon->ambient,
            moon->glow_half_size, moon->status_box[0], moon->status_box[1], moon->status_box[2],
            moon->status_box[3], moon->status_box_colour, quoteToml(moon->status_font),
            moon->status_colour);
    }
    if (const std::optional<SStorySelect> &select = content.story_select) {
        text += std::format(
            "\n[story_select.story_list]\nfull_install_probe = {}\nloading_frames = {}\n",
            quoteToml(select->full_install_probe), select->loading_frames);
        for (const SStoryDifficulty &difficulty : select->difficulties) {
            text += std::format(
                "\n[[story_select.story_list.difficulty]]\nlabel = {}\npuzzle = {}\ncombat = {}\n",
                quoteToml(difficulty.label), difficulty.puzzle, difficulty.combat);
        }
    }
    if (const std::optional<SDirectStart> &start = content.direct_start) {
        text += std::format("\n[story_select.direct_start]\nloading_frames = {}\n",
                            start->loading_frames);
    }
    if (const std::optional<SChapterTitle> &title = content.chapter_title) {
        text += std::format("\n[chapter_title]\nseconds = {}\nformat = {}\ncolour = 0x{:x}\n"
                            "shadow = {}\nalpha = 0x{:x}\ninset_across = {}\ninset_up = {}\n",
                            title->seconds, quoteToml(title->format), title->colour, title->shadow,
                            title->alpha, title->inset_across, title->inset_up);
        for (const SChapterTitleFont &font : title->fonts) {
            text += std::format("\n[[chapter_title.font]]\nfont = {}\n", quoteToml(font.font));
            if (font.below_height != 0) {
                text += std::format("below_height = {}\n", font.below_height);
            }
        }
    }
    for (const SLoadingPicture &picture : content.loading) {
        text += std::format("\n[[loading]]\nid = {}\n{}", quoteToml(picture.id),
                            formatPictureFit(picture.fit));
        if (picture.moon) {
            text += std::format("moon = {{ x = {}, y = {}, tint = {} }}\n", picture.moon->x,
                                picture.moon->y, formatTint(picture.moon->tint));
        }
        if (picture.random) {
            text += "random = true\n";
        }
    }
    for (const SGameStory &story : content.stories) {
        text += formatStory(story);
    }
    if (!content.labels.empty()) {
        text += "\n[labels]\n";
        for (const auto &[english, label] : content.labels) {
            text += std::format("{} = {}\n", quoteToml(english), quoteToml(label));
        }
    }
    for (const auto &[language, translation] : content.translations) {
        text += std::format("\n[translation.{}]\n", quoteToml(language));
        for (const auto &[english, translated] : translation) {
            text += std::format("{} = {}\n", quoteToml(english), quoteToml(translated));
        }
    }
    return text;
}

} // namespace nocturne::engine
