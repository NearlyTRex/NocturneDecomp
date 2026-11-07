#include "engine/package/packagedata.h"

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <ctime>
#include <expected>
#include <format>
#include <initializer_list>
#include <optional>
#include <sstream>
#include <string>
#include <string_view>
#include <toml++/toml.hpp>
#include <vector>

namespace nocturne::engine {
namespace {

template <typename T>
using Result = std::expected<T, std::string>;

constexpr std::size_t kHashDigits = 32;

// Any key the table has that isn't one of these.
Result<void> rejectUnknownKeys(const toml::table &table, std::string_view where,
                               std::initializer_list<std::string_view> known) {
    for (const auto &[key, node] : table) {
        if (std::ranges::find(known, key.str()) == known.end()) {
            return std::unexpected(
                std::format("{}{}: not a key this file takes", where, key.str()));
        }
    }
    return {};
}

Result<std::optional<std::string>> readString(const toml::table &table, std::string_view where,
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

Result<std::string> readRequiredString(const toml::table &table, std::string_view where,
                                       std::string_view key) {
    Result<std::optional<std::string>> value = readString(table, where, key);
    if (!value) {
        return std::unexpected(value.error());
    }
    if (!*value || (*value)->empty()) {
        return std::unexpected(std::format("{}{}: missing", where, key));
    }
    return std::move(**value);
}

Result<std::optional<std::int64_t>> readInteger(const toml::table &table, std::string_view where,
                                                std::string_view key) {
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

Result<std::optional<std::uint64_t>> readSize(const toml::table &table, std::string_view where) {
    const Result<std::optional<std::int64_t>> size = readInteger(table, where, "size");
    if (!size) {
        return std::unexpected(size.error());
    }
    if (!*size) {
        return std::nullopt;
    }
    if (**size < 0) {
        return std::unexpected(std::format("{}size: below zero", where));
    }
    return static_cast<std::uint64_t>(**size);
}

Result<std::vector<std::string>> readStrings(const toml::table &table, std::string_view where,
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

// The tables of an array of tables, [[key]] in the file.
Result<std::vector<const toml::table *>> readTables(const toml::table &table,
                                                    std::string_view where, std::string_view key) {
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

bool isPackageId(std::string_view id) {
    return std::ranges::all_of(id, [](char c) {
        return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') ||
               c == '.' || c == '_' || c == '-';
    });
}

bool isHash(std::string_view hash) {
    return hash.size() == kHashDigits && std::ranges::all_of(hash, [](char c) {
               return (c >= '0' && c <= '9') || (c >= 'a' && c <= 'f');
           });
}

// Inside the package: not absolute, no drive, no step up out of it. The path isn't empty.
bool isPackagePath(std::string_view path) {
    if (path.front() == '/' || path.front() == '\\' || path.contains(':')) {
        return false;
    }
    std::size_t start = 0;
    while (start <= path.size()) {
        const std::size_t end = std::min(path.find_first_of("/\\", start), path.size());
        if (path.substr(start, end - start) == "..") {
            return false;
        }
        start = end + 1;
    }
    return true;
}

Result<std::string> readHash(const toml::table &table, std::string_view where) {
    Result<std::optional<std::string>> hash = readString(table, where, "xxh3");
    if (!hash) {
        return std::unexpected(hash.error());
    }
    if (!*hash || !isHash(**hash)) {
        return std::unexpected(std::format("{}xxh3: not 32 lower-case hex digits", where));
    }
    return std::move(**hash);
}

Result<SPackagePod> readPackagePod(const toml::table &table, std::string_view where) {
    if (Result<void> keys = rejectUnknownKeys(table, where, {"path", "size", "modified", "xxh3"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SPackagePod pod;
    Result<std::string> path = readRequiredString(table, where, "path");
    if (!path) {
        return std::unexpected(path.error());
    }
    if (!isPackagePath(*path)) {
        return std::unexpected(std::format("{}path: not a path inside the package", where));
    }
    pod.path = std::move(*path);
    const Result<std::optional<std::uint64_t>> size = readSize(table, where);
    if (!size) {
        return std::unexpected(size.error());
    }
    pod.size = *size;
    const Result<std::optional<std::int64_t>> modified = readInteger(table, where, "modified");
    if (!modified) {
        return std::unexpected(modified.error());
    }
    if (*modified) {
        pod.modified = static_cast<std::time_t>(**modified);
    }
    if (table.contains("xxh3")) {
        Result<std::string> hash = readHash(table, where);
        if (!hash) {
            return std::unexpected(hash.error());
        }
        pod.xxh3 = std::move(*hash);
    }
    return pod;
}

Result<std::string> readId(const toml::table &table, std::string_view where) {
    Result<std::string> id = readRequiredString(table, where, "id");
    if (id && !isPackageId(*id)) {
        return std::unexpected(std::format("{}id: only letters, digits, '.', '_' and '-'", where));
    }
    return id;
}

// The manifest's strings and lists of names, by key.
Result<void> readManifestFields(const toml::table &table, SPackageManifest &manifest) {
    for (const auto &[key, field] :
         {std::pair{"name", &manifest.name}, std::pair{"version", &manifest.version},
          std::pair{"release", &manifest.release}}) {
        Result<std::optional<std::string>> value = readString(table, "", key);
        if (!value) {
            return std::unexpected(value.error());
        }
        *field = value->value_or("");
    }
    for (const auto &[key, field] : {std::pair{"requires", &manifest.dependencies},
                                     std::pair{"required", &manifest.required}}) {
        Result<std::vector<std::string>> values = readStrings(table, "", key);
        if (!values) {
            return std::unexpected(values.error());
        }
        *field = std::move(*values);
    }
    return {};
}

// A manifest without a name goes by its id.
Result<SPackageManifest> readPackageManifest(const toml::table &table) {
    if (Result<void> keys = rejectUnknownKeys(
            table, "", {"id", "name", "version", "release", "requires", "required", "pod"});
        !keys) {
        return std::unexpected(keys.error());
    }
    SPackageManifest manifest;
    Result<std::string> id = readId(table, "");
    if (!id) {
        return std::unexpected(id.error());
    }
    manifest.id = std::move(*id);
    if (Result<void> fields = readManifestFields(table, manifest); !fields) {
        return std::unexpected(fields.error());
    }
    if (manifest.name.empty()) {
        manifest.name = manifest.id;
    }
    const Result<std::vector<const toml::table *>> pods = readTables(table, "", "pod");
    if (!pods) {
        return std::unexpected(pods.error());
    }
    for (std::size_t i = 0; i < pods->size(); ++i) {
        Result<SPackagePod> pod = readPackagePod(*(*pods)[i], std::format("pod {}: ", i + 1));
        if (!pod) {
            return std::unexpected(pod.error());
        }
        manifest.pods.push_back(std::move(*pod));
    }
    return manifest;
}

Result<SReleasePod> readReleasePod(const toml::table &table, std::string_view where) {
    if (Result<void> keys = rejectUnknownKeys(table, where, {"name", "size", "xxh3"}); !keys) {
        return std::unexpected(keys.error());
    }
    Result<std::string> name = readRequiredString(table, where, "name");
    if (!name) {
        return std::unexpected(name.error());
    }
    const Result<std::optional<std::uint64_t>> size = readSize(table, where);
    if (!size) {
        return std::unexpected(size.error());
    }
    if (!*size) {
        return std::unexpected(std::format("{}size: missing", where));
    }
    Result<std::string> hash = readHash(table, where);
    if (!hash) {
        return std::unexpected(hash.error());
    }
    return SReleasePod{.name = std::move(*name), .size = **size, .xxh3 = std::move(*hash)};
}

Result<SRelease> readRelease(const toml::table &table, std::string_view where) {
    if (Result<void> keys = rejectUnknownKeys(table, where, {"id", "name", "required", "pod"});
        !keys) {
        return std::unexpected(keys.error());
    }
    Result<std::string> id = readId(table, where);
    if (!id) {
        return std::unexpected(id.error());
    }
    Result<std::string> name = readRequiredString(table, where, "name");
    if (!name) {
        return std::unexpected(name.error());
    }
    Result<std::vector<std::string>> required = readStrings(table, where, "required");
    if (!required) {
        return std::unexpected(required.error());
    }
    const Result<std::vector<const toml::table *>> pods = readTables(table, where, "pod");
    if (!pods) {
        return std::unexpected(pods.error());
    }
    SRelease release{.id = std::move(*id),
                     .name = std::move(*name),
                     .required = std::move(*required),
                     .pods = {}};
    for (std::size_t i = 0; i < pods->size(); ++i) {
        Result<SReleasePod> pod =
            readReleasePod(*(*pods)[i], std::format("{}pod {}: ", where, i + 1));
        if (!pod) {
            return std::unexpected(pod.error());
        }
        release.pods.push_back(std::move(*pod));
    }
    return release;
}

Result<toml::table> parseToml(std::string_view text) {
    try {
        return toml::parse(text);
    } catch (const toml::parse_error &error) {
        return std::unexpected(
            std::format("line {}: {}", error.source().begin.line, error.description()));
    }
}

std::string quote(std::string_view text) {
    std::ostringstream out;
    out << toml::value<std::string>(std::string(text));
    return std::move(out).str();
}

std::string formatList(const std::vector<std::string> &values) {
    std::string list = "[";
    for (std::size_t i = 0; i < values.size(); ++i) {
        list += (i == 0 ? "" : ", ") + quote(values[i]);
    }
    return list + "]";
}

} // namespace

std::expected<SPackageManifest, std::string> parsePackageManifest(std::string_view text) {
    return parseToml(text).and_then(
        [](const toml::table &table) { return readPackageManifest(table); });
}

std::string formatPackageManifest(const SPackageManifest &manifest) {
    std::string text =
        std::format("id = {}\nname = {}\n", quote(manifest.id), quote(manifest.name));
    if (!manifest.version.empty()) {
        text += std::format("version = {}\n", quote(manifest.version));
    }
    if (!manifest.release.empty()) {
        text += std::format("release = {}\n", quote(manifest.release));
    }
    if (!manifest.dependencies.empty()) {
        text += std::format("requires = {}\n", formatList(manifest.dependencies));
    }
    if (!manifest.required.empty()) {
        text += std::format("required = {}\n", formatList(manifest.required));
    }
    for (const SPackagePod &pod : manifest.pods) {
        text += std::format("\n[[pod]]\npath = {}\n", quote(pod.path));
        if (pod.size) {
            text += std::format("size = {}\n", *pod.size);
        }
        if (pod.modified) {
            text += std::format("modified = {}\n", *pod.modified);
        }
        if (pod.xxh3) {
            text += std::format("xxh3 = {}\n", quote(*pod.xxh3));
        }
    }
    return text;
}

std::expected<std::vector<SRelease>, std::string> parseReleaseCatalog(std::string_view text) {
    const Result<toml::table> table = parseToml(text);
    if (!table) {
        return std::unexpected(table.error());
    }
    if (Result<void> keys = rejectUnknownKeys(*table, "", {"release"}); !keys) {
        return std::unexpected(keys.error());
    }
    const Result<std::vector<const toml::table *>> tables = readTables(*table, "", "release");
    if (!tables) {
        return std::unexpected(tables.error());
    }
    std::vector<SRelease> releases;
    for (std::size_t i = 0; i < tables->size(); ++i) {
        Result<SRelease> release = readRelease(*(*tables)[i], std::format("release {}: ", i + 1));
        if (!release) {
            return std::unexpected(release.error());
        }
        if (std::ranges::contains(releases, release->id, &SRelease::id)) {
            return std::unexpected(
                std::format("release {}: id: {} is another release's", i + 1, release->id));
        }
        releases.push_back(std::move(*release));
    }
    return releases;
}

} // namespace nocturne::engine
