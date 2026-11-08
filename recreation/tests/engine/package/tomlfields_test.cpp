#include "engine/package/tomlfields.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstdint>
#include <optional>
#include <string>
#include <string_view>
#include <toml++/toml.hpp>
#include <vector>

namespace nocturne::engine {
namespace {

using ::testing::HasSubstr;

toml::table tableOf(std::string_view text) {
    TomlResult<toml::table> table = parseToml(text);
    EXPECT_TRUE(table.has_value()) << text;
    return table ? std::move(*table) : toml::table{};
}

TEST(TomlFields, BadTomlNamesItsLine) {
    const TomlResult<toml::table> table = parseToml("a = 1\nb = ");
    ASSERT_FALSE(table.has_value());
    EXPECT_THAT(table.error(), HasSubstr("line 2: "));
}

TEST(TomlFields, AnUnknownKeyIsNamedAndTheOtherListCounts) {
    const toml::table table = tableOf("a = 1\nb = 2");
    constexpr std::array<std::string_view, 1> kAlso{"b"};
    EXPECT_TRUE(rejectUnknownKeys(table, "", {"a"}, kAlso).has_value());
    EXPECT_EQ(rejectUnknownKeys(table, "t: ", {"a"}).error(), "t: b: not a key this file takes");
}

TEST(TomlFields, StringsAreReadOrMissingOrWrong) {
    const toml::table table = tableOf("s = \"x\"\nempty = \"\"\nn = 1");
    EXPECT_EQ(readString(table, "", "s").value(), std::optional<std::string>("x"));
    EXPECT_EQ(readString(table, "", "none").value(), std::nullopt);
    EXPECT_EQ(readString(table, "t: ", "n").error(), "t: n: not a string");
    EXPECT_EQ(readRequiredString(table, "", "s"), "x");
    EXPECT_EQ(readRequiredString(table, "t: ", "empty").error(), "t: empty: missing");
    EXPECT_EQ(readRequiredString(table, "t: ", "n").error(), "t: n: not a string");
}

TEST(TomlFields, AnIdHoldsOnlyItsCharacters) {
    EXPECT_EQ(readId(tableOf("id = \"a.b_c-1\""), ""), "a.b_c-1");
    EXPECT_EQ(readId(tableOf("id = \"a b\""), "").error(),
              "id: only letters, digits, '.', '_' and '-'");
    EXPECT_EQ(readId(tableOf(""), "").error(), "id: missing");
}

TEST(TomlFields, NumbersAreWholeAndInTheirRange) {
    const toml::table table = tableOf("n = 5\nf = 1.5");
    EXPECT_EQ(readInteger(table, "", "n").value(), std::optional<std::int64_t>(5));
    EXPECT_EQ(readInteger(table, "", "none").value(), std::nullopt);
    EXPECT_EQ(readInteger(table, "", "f").error(), "f: not a whole number");
    EXPECT_EQ(readIntegerIn(table, "", "n", 0, 5).value(), std::optional<int>(5));
    EXPECT_EQ(readIntegerIn(table, "", "none", 0, 5).value(), std::nullopt);
    EXPECT_EQ(readIntegerIn(table, "", "n", 6, 9).error(), "n: not from 6 to 9");
    EXPECT_EQ(readIntegerIn(table, "", "n", 0, 4).error(), "n: not from 0 to 4");
    EXPECT_EQ(readIntegerIn(table, "", "f", 0, 4).error(), "f: not a whole number");
}

TEST(TomlFields, BooleansAreTrueOrFalse) {
    const toml::table table = tableOf("b = true\nn = 1");
    EXPECT_EQ(readBoolean(table, "", "b").value(), std::optional<bool>(true));
    EXPECT_EQ(readBoolean(table, "", "none").value(), std::nullopt);
    EXPECT_EQ(readBoolean(table, "", "n").error(), "n: not true or false");
}

TEST(TomlFields, ListsHoldNames) {
    const toml::table table = tableOf("l = [\"a\", \"b\"]\nn = 1\nbad = [\"\"]");
    EXPECT_EQ(readStrings(table, "", "l"), (std::vector<std::string>{"a", "b"}));
    EXPECT_EQ(readStrings(table, "", "none"), std::vector<std::string>{});
    EXPECT_EQ(readStrings(table, "", "n").error(), "n: not a list");
    EXPECT_EQ(readStrings(table, "", "bad").error(), "bad: holds something that isn't a name");
}

TEST(TomlFields, TablesAreFoundByKey) {
    const toml::table table = tableOf("n = 1\n[t]\na = 1\n[[l]]\na = 1\n[[l]]\na = 2");
    EXPECT_EQ(readTables(table, "", "l")->size(), 2U);
    EXPECT_TRUE(readTables(table, "", "none")->empty());
    EXPECT_EQ(readTables(table, "", "n").error(), "n: not a list of [[n]] tables");
    EXPECT_NE(*readTable(table, "", "t"), nullptr);
    EXPECT_EQ(*readTable(table, "", "none"), nullptr);
    EXPECT_EQ(readTable(table, "", "n").error(), "n: not a [n] table");
}

TEST(TomlFields, TextIsQuotedAsTomlAndListsJoined) {
    EXPECT_EQ(quoteToml("plain"), "'plain'");
    EXPECT_EQ(
        parseToml(std::string("k = ") + quoteToml("a \" and '"))->get("k")->value<std::string>(),
        "a \" and '");
    EXPECT_EQ(formatTomlList({}), "[]");
    EXPECT_EQ(formatTomlList({"a", "b"}), "['a', 'b']");
}

} // namespace
} // namespace nocturne::engine
