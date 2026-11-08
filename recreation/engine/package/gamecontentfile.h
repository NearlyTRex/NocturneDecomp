#pragma once

#include "engine/package/gamecontent.h"
#include "engine/package/tomlfields.h"

#include <array>
#include <expected>
#include <string>
#include <string_view>
#include <toml++/toml.hpp>

namespace nocturne::engine {

// The keys a manifest takes for its game content, beside its own.
inline constexpr std::array<std::string_view, 10> kGameContentKeys{
    "title",   "front_end", "loading_indicator", "copyright", "copyright_os_font",
    "credits", "menu",      "loading",           "story",     "translation"};

// The game content among the table's keys, the others left alone.
[[nodiscard]] TomlResult<SGameContent> readGameContent(const toml::table &table);
// A file of game content only, as data/games/ has them.
[[nodiscard]] std::expected<SGameContent, std::string> parseGameContent(std::string_view text);
// TOML has a file's own keys before any table, so the content is written in two parts: its keys
// with the file's, and its tables after the file's.
[[nodiscard]] std::string formatGameContentKeys(const SGameContent &content);
[[nodiscard]] std::string formatGameContentTables(const SGameContent &content);

} // namespace nocturne::engine
