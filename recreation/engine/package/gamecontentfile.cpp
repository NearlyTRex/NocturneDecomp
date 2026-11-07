#include "engine/package/gamecontentfile.h"

#include "engine/package/gamecontent.h"
#include "engine/package/packagedata.h"
#include "engine/package/tomlfields.h"

#include <algorithm>
#include <array>
#include <cstddef>
#include <expected>
#include <format>
#include <limits>
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
constexpr int kMaxYear = 9999;
constexpr int kMaxCode = std::numeric_limits<int>::max();

TomlResult<std::string> readOptionalString(const toml::table &table, std::string_view where,
                                           std::string_view key) {
    return readString(table, where, key).transform([](std::optional<std::string> value) {
        return std::move(value).value_or("");
    });
}

TomlResult<SGameCredits> readCredits(const toml::table &table) {
    constexpr std::string_view kWhere = "credits: ";
    if (TomlResult<void> keys = rejectUnknownKeys(table, kWhere, {"text", "image", "music"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SGameCredits credits;
    for (const auto &[key, field] :
         {std::pair{"text", &credits.text}, std::pair{"image", &credits.image}}) {
        TomlResult<std::string> value = readRequiredString(table, kWhere, key);
        if (!value) {
            return std::unexpected(value.error());
        }
        *field = std::move(*value);
    }
    TomlResult<std::string> music = readOptionalString(table, kWhere, "music");
    if (!music) {
        return std::unexpected(music.error());
    }
    credits.music = std::move(*music);
    return credits;
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

TomlResult<SLoadingPicture> readLoading(const toml::table &table, std::string_view where) {
    if (TomlResult<void> keys = rejectUnknownKeys(table, where, {"id", "moon", "random"}); !keys) {
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
    return SLoadingPicture{.id = std::move(*id), .moon = *moon, .random = random->value_or(false)};
}

TomlResult<std::optional<SLayoutPoint>> readPoint(const toml::table &table, std::string_view where,
                                                  std::string_view key) {
    const TomlResult<const toml::table *> point = readTable(table, where, key);
    if (!point) {
        return std::unexpected(point.error());
    }
    if (*point == nullptr) {
        return std::nullopt;
    }
    const std::string inner = std::format("{}{}: ", where, key);
    if (TomlResult<void> keys = rejectUnknownKeys(**point, inner, {"x", "y"}); !keys) {
        return std::unexpected(keys.error());
    }
    const TomlResult<int> x = readRequiredIntegerIn(**point, inner, "x", 0, kMaxPictureX);
    if (!x) {
        return std::unexpected(x.error());
    }
    const TomlResult<int> y = readRequiredIntegerIn(**point, inner, "y", 0, kMaxPictureY);
    if (!y) {
        return std::unexpected(y.error());
    }
    return SLayoutPoint{.x = *x, .y = *y};
}

TomlResult<SMenuLayout> readMenu(const toml::table &table) {
    constexpr std::string_view kWhere = "menu: ";
    if (TomlResult<void> keys =
            rejectUnknownKeys(table, kWhere, {"left", "top", "titled_top", "trademark"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SMenuLayout menu;
    for (const auto &[key, field, high] :
         {std::tuple{"left", &menu.left, kMaxPictureX}, std::tuple{"top", &menu.top, kMaxPictureY},
          std::tuple{"titled_top", &menu.titled_top, kMaxPictureY}}) {
        const TomlResult<int> value = readRequiredIntegerIn(table, kWhere, key, 0, high);
        if (!value) {
            return std::unexpected(value.error());
        }
        *field = *value;
    }
    TomlResult<std::optional<SLayoutPoint>> trademark = readPoint(table, kWhere, "trademark");
    if (!trademark) {
        return std::unexpected(trademark.error());
    }
    menu.trademark = *trademark;
    return menu;
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

// The content's own strings, by key.
auto getGameStrings(auto &content) {
    return std::array{std::pair{"front_end", &content.front_end},
                      std::pair{"loading_indicator", &content.loading_indicator},
                      std::pair{"copyright", &content.copyright},
                      std::pair{"copyright_os_font", &content.copyright_os_font}};
}

// The code a front end or indicator names can't be empty.
TomlResult<void> readGameStrings(const toml::table &table, SGameContent &content) {
    for (const auto &[key, field] : getGameStrings(content)) {
        TomlResult<std::optional<std::string>> value = readString(table, "", key);
        if (!value) {
            return std::unexpected(value.error());
        }
        *field = std::move(*value);
    }
    for (const auto &[key, field] : {std::pair{"front_end", &content.front_end},
                                     std::pair{"loading_indicator", &content.loading_indicator}}) {
        if (*field && (*field)->empty()) {
            return std::unexpected(std::format("{}: missing", key));
        }
    }
    return {};
}

std::string formatTint(const std::array<int, 3> &tint) {
    return std::format("[0x{:x}, 0x{:x}, 0x{:x}]", tint[0], tint[1], tint[2]);
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
    if (content.credits) {
        text += std::format("\n[credits]\ntext = {}\nimage = {}\n",
                            quoteToml(content.credits->text), quoteToml(content.credits->image));
        if (!content.credits->music.empty()) {
            text += std::format("music = {}\n", quoteToml(content.credits->music));
        }
    }
    if (content.menu) {
        text += std::format("\n[menu]\nleft = {}\ntop = {}\ntitled_top = {}\n", content.menu->left,
                            content.menu->top, content.menu->titled_top);
        if (content.menu->trademark) {
            text += std::format("trademark = {{ x = {}, y = {} }}\n", content.menu->trademark->x,
                                content.menu->trademark->y);
        }
    }
    for (const SLoadingPicture &picture : content.loading) {
        text += std::format("\n[[loading]]\nid = {}\n", quoteToml(picture.id));
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
    for (const auto &[language, translation] : content.translations) {
        text += std::format("\n[translation.{}]\n", quoteToml(language));
        for (const auto &[english, translated] : translation) {
            text += std::format("{} = {}\n", quoteToml(english), quoteToml(translated));
        }
    }
    return text;
}

} // namespace nocturne::engine
