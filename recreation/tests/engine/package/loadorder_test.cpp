#include "engine/package/loadorder.h"
#include "engine/package/packagedata.h"
#include "engine/package/packagediscovery.h"
#include "tests/mocks/engine/packagefiles.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <format>
#include <initializer_list>
#include <ranges>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::engine {
namespace {

using ::testing::_;
using ::testing::HasSubstr;
using ::testing::Not;
using ::testing::Return;

// The base game and three mods, found in the order a, b, c.
class CLoadOrderTest : public ::testing::Test {
protected:
    static SPackage package(std::string_view id, std::initializer_list<std::string> needs = {}) {
        return {.manifest = {.id = std::string(id),
                             .name = std::string(id),
                             .version = {},
                             .release = {},
                             .dependencies = needs,
                             .required = {},
                             .pods = {},
                             .game = {}},
                .folder = std::string(id),
                .written_by_game = false};
    }

    [[nodiscard]] SLoadOrder order() {
        return orderPackages(files_.file_system_, discovered_);
    }

    [[nodiscard]] static std::vector<std::string> ids(const SLoadOrder &order) {
        return order.packages |
               std::views::transform([](const SPackage &package) { return package.manifest.id; }) |
               std::ranges::to<std::vector>();
    }

    CPackageFiles files_;
    std::vector<SPackage> discovered_{package("nocturne"), package("a"), package("b"),
                                      package("c")};
};

// What else was found is listed turned off, and noted.
TEST_F(CLoadOrderTest, WithoutTheFileOnlyTheBaseGameIsLoaded) {
    const SLoadOrder ordered = order();
    EXPECT_EQ(ids(ordered), std::vector<std::string>{"nocturne"});
    EXPECT_EQ(files_.contents("loadorder.txt"), "nocturne\n# a\n# b\n# c\n");
    EXPECT_EQ(ordered.notes.front(),
              "a is added to loadorder.txt turned off; remove the '#' before it to load it");
    EXPECT_EQ(ordered.notes.size(), 3U);
}

// A total conversion's load order, say: the base game is a package like any other.
TEST_F(CLoadOrderTest, TheFileChoosesAndOrdersEveryPackage) {
    files_.givenFile("loadorder.txt", "c\n  a\t\r\n# nocturne\n# b\n");
    EXPECT_CALL(files_.file_system_, writeFile).Times(0);
    const SLoadOrder ordered = order();
    EXPECT_EQ(ids(ordered), (std::vector<std::string>{"c", "a"}));
    EXPECT_TRUE(ordered.notes.empty());
}

TEST_F(CLoadOrderTest, WithOnlyTheBaseGameTheNewFileNamesIt) {
    discovered_ = {package("nocturne")};
    const SLoadOrder ordered = order();
    EXPECT_EQ(ids(ordered), std::vector<std::string>{"nocturne"});
    EXPECT_EQ(files_.contents("loadorder.txt"), "nocturne\n");
    EXPECT_TRUE(ordered.notes.empty());
}

TEST_F(CLoadOrderTest, WithoutABaseGameTheNewFileTurnsNothingOn) {
    discovered_ = {package("a")};
    EXPECT_TRUE(order().packages.empty());
    EXPECT_EQ(files_.contents("loadorder.txt"), "# a\n");
}

// Its own lines stay as they were.
TEST_F(CLoadOrderTest, APackageTheFileDoesntNameIsAddedTurnedOff) {
    files_.givenFile("loadorder.txt", "# mine\nnocturne\nc");
    EXPECT_EQ(ids(order()), (std::vector<std::string>{"nocturne", "c"}));
    EXPECT_EQ(files_.contents("loadorder.txt"), "# mine\nnocturne\nc\n# a\n# b\n");
}

// A comment after an id, blank lines and a '#' before anything but an id are passed over; an
// id's first line counts, on or off.
TEST_F(CLoadOrderTest, OnlyEachIdsFirstLineCounts) {
    files_.givenFile("loadorder.txt",
                     "\nb # after\n# an id here\n#\n# c\nnocturne\na\nb\nc\n# a\n");
    EXPECT_CALL(files_.file_system_, writeFile).Times(0);
    const SLoadOrder ordered = order();
    EXPECT_EQ(ids(ordered), (std::vector<std::string>{"b", "nocturne", "a"}));
    EXPECT_TRUE(ordered.notes.empty());
}

// The line keeps the package's place for when it comes back; one turned off isn't noted.
TEST_F(CLoadOrderTest, ALineNamingAPackageThatIsntInstalledIsNotedAndKept) {
    files_.givenFile("loadorder.txt", "gone\n# away\nnocturne\na\nb\nc\n");
    EXPECT_CALL(files_.file_system_, writeFile).Times(0);
    EXPECT_EQ(order().notes,
              std::vector<std::string>{"loadorder.txt names gone, which isn't installed"});
}

TEST_F(CLoadOrderTest, AFileThatCantBeWrittenIsNoted) {
    ON_CALL(files_.file_system_, writeFile(_, _)).WillByDefault(Return(false));
    EXPECT_THAT(order().notes,
                ::testing::Contains("loadorder.txt couldn't be written, so what it lacks is added "
                                    "again on the next start"));
}

// What a package needs must be loaded before it: needing a later one, a missing one or one left
// out keeps it out too.
TEST_F(CLoadOrderTest, APackageWhoseNeedsArentLoadedBeforeItIsLeftOut) {
    discovered_ = {package("nocturne"), package("a", {"nocturne"}), package("b", {"c"}),
                   package("c", {"a"}), package("d", {"gone"}),     package("e", {"d"})};
    files_.givenFile("loadorder.txt", "nocturne\na\nb\nc\nd\ne\n");
    const SLoadOrder ordered = order();
    EXPECT_EQ(ids(ordered), (std::vector<std::string>{"nocturne", "a", "c"}));
    EXPECT_EQ(ordered.notes,
              (std::vector<std::string>{"b needs c loaded before it, so it isn't loaded",
                                        "d needs gone loaded before it, so it isn't loaded",
                                        "e needs d loaded before it, so it isn't loaded"}));
}

// In load order: a link to a POD an earlier package loads is that POD. A manifest the game wrote
// is written without it; the player's own is left as it is.
class CLoadOrderPodsTest : public CLoadOrderTest {
protected:
    CLoadOrderPodsTest() {
        files_.givenFile("nocturne/STARTUP.POD", "POD one");
        files_.givenLink("a/STARTUP.POD", "nocturne/STARTUP.POD");
        files_.givenFile("a/MINE.POD", "mine");
        files_.givenLink("b/STARTUP.POD", "nocturne/STARTUP.POD");
        discovered_ = {withPods(package("nocturne"), {"STARTUP.POD"}),
                       withPods(package("a"), {"STARTUP.POD", "MINE.POD"}),
                       withPods(package("b"), {"STARTUP.POD", "GONE.POD"})};
        discovered_[1].written_by_game = true;
        files_.givenFile("loadorder.txt", "nocturne\na\nb\n");
    }

    static SPackage withPods(SPackage package, std::initializer_list<const char *> pods) {
        for (const char *pod : pods) {
            package.manifest.pods.push_back({.path = pod, .size = {}, .modified = {}, .xxh3 = {}});
        }
        return package;
    }
};

TEST_F(CLoadOrderPodsTest, APodAnEarlierPackageLoadsIsntLoadedAgain) {
    const SLoadOrder ordered = order();
    ASSERT_EQ(ordered.packages.size(), 3U);
    EXPECT_EQ(ordered.packages[0].manifest.pods.size(), 1U);
    EXPECT_EQ(ordered.packages[1].manifest.pods.size(), 1U);
    EXPECT_EQ(ordered.packages[2].manifest.pods.size(), 1U);
    EXPECT_EQ(ordered.packages[2].manifest.pods.front().path, "GONE.POD");
    EXPECT_EQ(ordered.notes,
              (std::vector<std::string>{
                  "a/nocturne.toml: 1 of its PODs are an earlier package's files, so they aren't "
                  "loaded again",
                  "b/nocturne.toml: 1 of its PODs are an earlier package's files, so they aren't "
                  "loaded again"}));
    EXPECT_THAT(files_.bytes("a/nocturne.toml"), Not(HasSubstr("STARTUP.POD")));
    EXPECT_EQ(files_.contents("b/nocturne.toml"), std::nullopt);
}

// Without the base game loaded first, the link is the package's own.
TEST_F(CLoadOrderPodsTest, APodIsThePackagesWhenNothingEarlierLoadsIt) {
    files_.givenFile("loadorder.txt", "a\n# nocturne\n# b\n");
    const SLoadOrder ordered = order();
    ASSERT_EQ(ordered.packages.size(), 1U);
    EXPECT_EQ(ordered.packages[0].manifest.pods.size(), 2U);
    EXPECT_TRUE(ordered.notes.empty());
}

TEST_F(CLoadOrderPodsTest, AManifestThatCantBeWrittenWithoutItsRepeatsIsNoted) {
    ON_CALL(files_.file_system_, writeFile(_, _)).WillByDefault(Return(false));
    EXPECT_THAT(order().notes, ::testing::Contains("a/nocturne.toml couldn't be written"));
}

} // namespace
} // namespace nocturne::engine
