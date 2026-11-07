#pragma once

#include <cstdint>
#include <expected>
#include <initializer_list>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <toml++/toml.hpp>
#include <vector>

namespace nocturne::engine {

// The package files' readers: each value or what is wrong with it, the error naming the key after
// `where`, which says which table it is in.
template <typename T>
using TomlResult = std::expected<T, std::string>;

[[nodiscard]] TomlResult<toml::table> parseToml(std::string_view text);
// Any key the table has that isn't one of these or of also.
[[nodiscard]] TomlResult<void> rejectUnknownKeys(const toml::table &table, std::string_view where,
                                                 std::initializer_list<std::string_view> known,
                                                 std::span<const std::string_view> also = {});
[[nodiscard]] TomlResult<std::optional<std::string>>
readString(const toml::table &table, std::string_view where, std::string_view key);
// Missing or empty is an error.
[[nodiscard]] TomlResult<std::string>
readRequiredString(const toml::table &table, std::string_view where, std::string_view key);
[[nodiscard]] TomlResult<std::optional<std::int64_t>>
readInteger(const toml::table &table, std::string_view where, std::string_view key);
// The table's id: a required string of letters, digits, '.', '_' and '-'.
[[nodiscard]] TomlResult<std::string> readId(const toml::table &table, std::string_view where);
// A whole number from low to high.
[[nodiscard]] TomlResult<std::optional<int>> readIntegerIn(const toml::table &table,
                                                           std::string_view where,
                                                           std::string_view key, int low, int high);
[[nodiscard]] TomlResult<std::optional<bool>>
readBoolean(const toml::table &table, std::string_view where, std::string_view key);
// A list of non-empty strings; none without the key.
[[nodiscard]] TomlResult<std::vector<std::string>>
readStrings(const toml::table &table, std::string_view where, std::string_view key);
// The tables of an array of tables, [[key]] in the file.
[[nodiscard]] TomlResult<std::vector<const toml::table *>>
readTables(const toml::table &table, std::string_view where, std::string_view key);
// The table under the key, [key] in the file, or nothing without it.
[[nodiscard]] TomlResult<const toml::table *>
readTable(const toml::table &table, std::string_view where, std::string_view key);

// The text as a TOML string.
[[nodiscard]] std::string quoteToml(std::string_view text);
[[nodiscard]] std::string formatTomlList(const std::vector<std::string> &values);

} // namespace nocturne::engine
