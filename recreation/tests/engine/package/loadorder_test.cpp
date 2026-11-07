#include "engine/package/loadorder.h"
#include "engine/package/packagediscovery.h"
#include "tests/mocks/engine/packagefiles.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <initializer_list>
#include <ranges>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::engine {
namespace {

using ::testing::_;
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
                             .pods = {}},
                .folder = id == "nocturne" ? "" : std::string(id),
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

TEST_F(CLoadOrderTest, WithoutTheFileEveryPackageIsLoadedAsFoundAndListed) {
    const SLoadOrder ordered = order();
    EXPECT_EQ(ids(ordered), (std::vector<std::string>{"nocturne", "a", "b", "c"}));
    EXPECT_TRUE(ordered.notes.empty());
    EXPECT_EQ(files_.contents("loadorder.txt"), "a\nb\nc\n");
}

// The ones it doesn't name come after, and are added to its end; its own lines stay as they were.
TEST_F(CLoadOrderTest, TheFilesOrderIsTakenAndWhatItLacksAdded) {
    files_.givenFile("loadorder.txt", "# mine\nc\n  a\t\r\n");
    EXPECT_EQ(ids(order()), (std::vector<std::string>{"nocturne", "c", "a", "b"}));
    EXPECT_EQ(files_.contents("loadorder.txt"), "# mine\nc\n  a\t\r\nb\n");
}

TEST_F(CLoadOrderTest, ALastLineWithoutItsNewlineIsEndedBeforeAnAddition) {
    files_.givenFile("loadorder.txt", "c\na");
    static_cast<void>(order());
    EXPECT_EQ(files_.contents("loadorder.txt"), "c\na\nb\n");
}

// Comments after an id, blank lines, an id given twice and the base game itself are passed over.
TEST_F(CLoadOrderTest, OnlyEachIdsFirstLineCounts) {
    files_.givenFile("loadorder.txt", "\nb # after\nnocturne\na\nb\nc\n");
    EXPECT_CALL(files_.file_system_, writeFile).Times(0);
    const SLoadOrder ordered = order();
    EXPECT_EQ(ids(ordered), (std::vector<std::string>{"nocturne", "b", "a", "c"}));
    EXPECT_TRUE(ordered.notes.empty());
}

// The line keeps the package's place for when it comes back.
TEST_F(CLoadOrderTest, ALineNamingAPackageThatIsntInstalledIsNotedAndKept) {
    files_.givenFile("loadorder.txt", "gone\na\nb\nc\n");
    EXPECT_CALL(files_.file_system_, writeFile).Times(0);
    EXPECT_EQ(order().notes,
              std::vector<std::string>{"loadorder.txt names gone, which isn't installed"});
}

TEST_F(CLoadOrderTest, AFileThatCantBeWrittenIsNoted) {
    ON_CALL(files_.file_system_, writeFile(_, _)).WillByDefault(Return(false));
    const SLoadOrder ordered = order();
    EXPECT_EQ(ids(ordered).size(), 4U);
    EXPECT_EQ(ordered.notes, std::vector<std::string>{"loadorder.txt couldn't be written, so the "
                                                      "packages it lacks are added again on the "
                                                      "next start"});
}

// What a package needs must be loaded before it: needing a later one, a missing one or one left
// out keeps it out too.
TEST_F(CLoadOrderTest, APackageWhoseNeedsArentLoadedBeforeItIsLeftOut) {
    discovered_ = {package("nocturne"), package("a", {"nocturne"}), package("b", {"c"}),
                   package("c", {"a"}), package("d", {"gone"}),     package("e", {"d"})};
    const SLoadOrder ordered = order();
    EXPECT_EQ(ids(ordered), (std::vector<std::string>{"nocturne", "a", "c"}));
    EXPECT_EQ(ordered.notes,
              (std::vector<std::string>{"b needs c loaded before it, so it isn't loaded",
                                        "d needs gone loaded before it, so it isn't loaded",
                                        "e needs d loaded before it, so it isn't loaded"}));
}

} // namespace
} // namespace nocturne::engine
