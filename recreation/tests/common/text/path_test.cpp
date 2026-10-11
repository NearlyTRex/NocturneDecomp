#include "common/text/path.h"

#include <gtest/gtest.h>

#include <map>
#include <set>
#include <string>
#include <vector>

namespace nocturne::common {
namespace {

TEST(Path, BackslashesBecomeSlashes) {
    EXPECT_EQ(toPortablePath(".\\system\\nocturne.ini"), "./system/nocturne.ini");
    EXPECT_EQ(toPortablePath("save/SAVE1.NOC"), "save/SAVE1.NOC");
}

TEST(Path, LeafIsAfterTheLastSeparatorOfEitherKind) {
    EXPECT_EQ(pathLeaf("..\\engine\\ini.cpp"), "ini.cpp");
    EXPECT_EQ(pathLeaf("/src/engine/ini.cpp"), "ini.cpp");
    EXPECT_EQ(pathLeaf("art\\textures/sky.raw"), "sky.raw");
}

TEST(Path, LeafOfABareNameIsTheName) {
    EXPECT_EQ(pathLeaf("gtfo.txt"), "gtfo.txt");
}

// A small tree: directories map to their entries, and every listed path exists.
class ResolvePathTest : public ::testing::Test {
protected:
    std::string resolve(std::string_view path) {
        return resolvePathIgnoringCase(path, lookup_);
    }

    std::map<std::string, std::vector<std::string>> tree_ = {
        {"", {"system", "ACT1.POD", "Save", "save"}},
        {".", {"system", "ACT1.POD", "Save", "save"}},
        {"system", {"Nocturne.INI"}},
        {"./system", {"Nocturne.INI"}},
        {"/", {"data"}},
        {"/data", {"Music"}},
        {"/data/Music", {"Track1.WAV"}},
    };
    std::set<std::string> existing_ = {
        "system",
        "ACT1.POD",
        "Save",
        "save",
        "system/Nocturne.INI",
        "./system",
        "./system/Nocturne.INI",
        "/data",
        "/data/Music",
        "/data/Music/Track1.WAV",
    };
    SPathLookup lookup_{
        .exists = [this](const std::string &path) { return existing_.contains(path); },
        .list_directory =
            [this](const std::string &directory) {
                const auto found = tree_.find(directory);
                return found == tree_.end() ? std::vector<std::string>{} : found->second;
            },
    };
};

TEST_F(ResolvePathTest, AnExistingPathIsKept) {
    EXPECT_EQ(resolve("ACT1.POD"), "ACT1.POD");
}

TEST_F(ResolvePathTest, EachComponentFindsItsRealCase) {
    EXPECT_EQ(resolve("SYSTEM\\nocturne.ini"), "system/Nocturne.INI");
    EXPECT_EQ(resolve("act1.pod"), "ACT1.POD");
}

TEST_F(ResolvePathTest, ADotSlashOrRootPrefixIsKept) {
    EXPECT_EQ(resolve(".\\system\\NOCTURNE.INI"), "./system/Nocturne.INI");
    EXPECT_EQ(resolve("/DATA/music/track1.wav"), "/data/Music/Track1.WAV");
}

// "Save" and "save" both exist; the one asked for wins over whichever the listing gives first.
TEST_F(ResolvePathTest, TheExactSpellingWinsOverACaseMatch) {
    EXPECT_EQ(resolve("save/SAVE1.NOC"), "save/SAVE1.NOC");
}

TEST_F(ResolvePathTest, FromAComponentThatMatchesNothingTheRestIsAsGiven) {
    EXPECT_EQ(resolve("SYSTEM\\missing\\File.TXT"), "system/missing/File.TXT");
    EXPECT_EQ(resolve("nowhere.pod"), "nowhere.pod");
}

TEST_F(ResolvePathTest, EmptyAndDotComponentsAreSkipped) {
    EXPECT_EQ(resolve("system//./nocturne.ini"), "system/Nocturne.INI");
    EXPECT_EQ(resolve(""), "");
}

} // namespace
} // namespace nocturne::common
