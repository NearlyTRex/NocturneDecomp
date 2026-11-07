#include "engine/package/tomlfields.h"

#include "engine/package/packagedata.h"

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <expected>
#include <format>
#include <initializer_list>
#include <optional>
#include <span>
#include <sstream>
#include <string>
#include <string_view>
#include <toml++/toml.hpp>
#include <vector>

namespace nocturne::engine {

TomlResult<toml::table> parseToml(std::string_view text) {
    try {
        return toml::parse(text);
    } catch (const toml::parse_error &error) {
        return std::unexpected(
            std::format("line {}: {}", error.source().begin.line, error.description()));
    }
}

TomlResult<void> rejectUnknownKeys(const toml::table &table, std::string_view where,
                                   std::initializer_list<std::string_view> known,
                                   std::span<const std::string_view> also) {
    for (const auto &[key, node] : table) {
        if (!std::ranges::contains(known, key.str()) && !std::ranges::contains(also, key.str())) {
            return std::unexpected(
                std::format("{}{}: not a key this file takes", where, key.str()));
        }
    }
    return {};
}

TomlResult<std::optional<std::string>> readString(const toml::table &table, std::string_view where,
                                                  std::string_view key) {
    const toml::node *node = table.get(key);
    if (node == nullptr) {
        return std::nullopt;
    }
    std::optional<std::string> value = node->value_exact<std::string>();
    if (!value) {
        return std::unexpected(std::format("{}{}: not a string", where, key));
    }
    return value;
}

TomlResult<std::string> readRequiredString(const toml::table &table, std::string_view where,
                                           std::string_view key) {
    TomlResult<std::optional<std::string>> value = readString(table, where, key);
    if (!value) {
        return std::unexpected(value.error());
    }
    if (!*value || (*value)->empty()) {
        return std::unexpected(std::format("{}{}: missing", where, key));
    }
    return std::move(**value);
}

TomlResult<std::string> readId(const toml::table &table, std::string_view where) {
    TomlResult<std::string> id = readRequiredString(table, where, "id");
    if (id && !std::ranges::all_of(*id, isIdCharacter)) {
        return std::unexpected(std::format("{}id: only letters, digits, '.', '_' and '-'", where));
    }
    return id;
}

TomlResult<std::optional<std::int64_t>> readInteger(const toml::table &table,
                                                    std::string_view where, std::string_view key) {
    const toml::node *node = table.get(key);
    if (node == nullptr) {
        return std::nullopt;
    }
    const std::optional<std::int64_t> value = node->value_exact<std::int64_t>();
    if (!value) {
        return std::unexpected(std::format("{}{}: not a whole number", where, key));
    }
    return value;
}

TomlResult<std::optional<int>> readIntegerIn(const toml::table &table, std::string_view where,
                                             std::string_view key, int low, int high) {
    const TomlResult<std::optional<std::int64_t>> value = readInteger(table, where, key);
    if (!value) {
        return std::unexpected(value.error());
    }
    if (!*value) {
        return std::nullopt;
    }
    if (**value < low || **value > high) {
        return std::unexpected(std::format("{}{}: not from {} to {}", where, key, low, high));
    }
    return static_cast<int>(**value);
}

TomlResult<std::optional<bool>> readBoolean(const toml::table &table, std::string_view where,
                                            std::string_view key) {
    const toml::node *node = table.get(key);
    if (node == nullptr) {
        return std::nullopt;
    }
    const std::optional<bool> value = node->value_exact<bool>();
    if (!value) {
        return std::unexpected(std::format("{}{}: not true or false", where, key));
    }
    return value;
}

TomlResult<std::vector<std::string>> readStrings(const toml::table &table, std::string_view where,
                                                 std::string_view key) {
    const toml::node *node = table.get(key);
    if (node == nullptr) {
        return std::vector<std::string>{};
    }
    const toml::array *array = node->as_array();
    if (array == nullptr) {
        return std::unexpected(std::format("{}{}: not a list", where, key));
    }
    std::vector<std::string> values;
    for (const toml::node &element : *array) {
        const std::optional<std::string> value = element.value_exact<std::string>();
        if (!value || value->empty()) {
            return std::unexpected(
                std::format("{}{}: holds something that isn't a name", where, key));
        }
        values.push_back(*value);
    }
    return values;
}

TomlResult<std::vector<const toml::table *>>
readTables(const toml::table &table, std::string_view where, std::string_view key) {
    const toml::node *node = table.get(key);
    if (node == nullptr) {
        return std::vector<const toml::table *>{};
    }
    const toml::array *array = node->as_array();
    if (array == nullptr || !array->is_array_of_tables()) {
        return std::unexpected(std::format("{}{}: not a list of [[{}]] tables", where, key, key));
    }
    std::vector<const toml::table *> tables;
    for (const toml::node &element : *array) {
        tables.push_back(element.as_table());
    }
    return tables;
}

TomlResult<const toml::table *> readTable(const toml::table &table, std::string_view where,
                                          std::string_view key) {
    const toml::node *node = table.get(key);
    if (node == nullptr) {
        return nullptr;
    }
    const toml::table *found = node->as_table();
    if (found == nullptr) {
        return std::unexpected(std::format("{}{}: not a [{}] table", where, key, key));
    }
    return found;
}

std::string quoteToml(std::string_view text) {
    std::ostringstream out;
    out << toml::value<std::string>(std::string(text));
    return std::move(out).str();
}

std::string formatTomlList(const std::vector<std::string> &values) {
    std::string list = "[";
    for (std::size_t i = 0; i < values.size(); ++i) {
        list += (i == 0 ? "" : ", ") + quoteToml(values[i]);
    }
    return list + "]";
}

} // namespace nocturne::engine
