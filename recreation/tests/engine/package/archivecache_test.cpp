#include "engine/package/archivecache.h"
#include "tests/mocks/engine/packagefiles.h"
#include "tests/mocks/engine/testarchive.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <expected>
#include <optional>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::engine {
namespace {

using ::testing::_;
using ::testing::EndsWith;
using ::testing::MatchesRegex;
using ::testing::Return;

constexpr std::string_view kManifest = "id = \"hell\"\n";

class CArchiveCacheTest : public ::testing::Test {
protected:
    CArchiveCacheTest() {
        givenMod({{.path = "nocturne.toml", .contents = std::string(kManifest)}});
    }

    void givenMod(const std::vector<STestArchiveEntry> &entries,
                  std::time_t modified = CPackageFiles::kModified) {
        files_.givenFile("mods/hell.zip", makeTestArchive(ETestArchiveFormat::Zip, entries),
                         modified);
    }

    [[nodiscard]] std::string unpack() {
        const std::expected<std::string, std::string> folder =
            unpackToCache(files_.file_system_, "mods/hell.zip");
        EXPECT_TRUE(folder.has_value()) << folder.error();
        return folder.value_or("");
    }

    [[nodiscard]] std::string failure() {
        const std::expected<std::string, std::string> folder =
            unpackToCache(files_.file_system_, "mods/hell.zip");
        EXPECT_FALSE(folder.has_value());
        return folder ? std::string() : folder.error();
    }

    CPackageFiles files_;
};

TEST_F(CArchiveCacheTest, UnpacksIntoAFolderNamedAfterTheArchiveAndRecordsIt) {
    const std::string folder = unpack();
    EXPECT_THAT(folder, MatchesRegex(R"(\.packages/hell\.zip-[0-9a-f]{16})"));
    EXPECT_EQ(files_.bytes(folder + "/nocturne.toml"), kManifest);
    EXPECT_EQ(files_.contents(folder + ".unpacked"), "mods/hell.zip");
}

TEST_F(CArchiveCacheTest, OnceUnpackedItIsntUnpackedAgain) {
    const std::string folder = unpack();
    files_.givenFile(folder + "/nocturne.toml", "edited");
    EXPECT_EQ(unpack(), folder);
    EXPECT_EQ(files_.bytes(folder + "/nocturne.toml"), "edited");
}

TEST_F(CArchiveCacheTest, AChangedArchiveIsUnpackedAfresh) {
    const std::string folder = unpack();
    givenMod({{.path = "nocturne.toml", .contents = std::string(kManifest)}},
             CPackageFiles::kModified + 1);
    const std::string changed = unpack();
    EXPECT_NE(changed, folder);
    EXPECT_EQ(files_.bytes(changed + "/nocturne.toml"), kManifest);
}

// Unpacking was cut short: there is no record.
TEST_F(CArchiveCacheTest, WhatAnUnfinishedUnpackingLeftIsCleared) {
    const std::string folder = unpack();
    static_cast<void>(files_.file_system_.removeFile(folder + ".unpacked"));
    files_.givenFile(folder + "/stray.txt", "left over");
    EXPECT_EQ(unpack(), folder);
    EXPECT_FALSE(files_.contents(folder + "/stray.txt").has_value());
    EXPECT_EQ(files_.bytes(folder + "/nocturne.toml"), kManifest);
}

TEST_F(CArchiveCacheTest, APodIsAPackageWithoutAManifest) {
    givenMod({{.path = "hell/HELL.POD", .contents = "POD"}});
    EXPECT_EQ(files_.bytes(unpack() + "/hell/HELL.POD"), "POD");
}

TEST_F(CArchiveCacheTest, AnArchiveWithoutAPackageIsntUnpacked) {
    givenMod({{.path = "saves/", .contents = {}}, {.path = "readme.txt", .contents = "hi"}});
    EXPECT_CALL(files_.file_system_, makeDirectory).Times(0);
    EXPECT_EQ(failure(), "mods/hell.zip holds no nocturne.toml and no POD");
}

TEST_F(CArchiveCacheTest, AMissingOrBrokenArchiveIsntUnpacked) {
    EXPECT_EQ(unpackToCache(files_.file_system_, "mods/gone.zip").error(),
              "mods/gone.zip is missing");
    files_.givenFile("mods/hell.zip", "PK\3\4 and no more");
    EXPECT_THAT(failure(), ::testing::StartsWith("mods/hell.zip: "));
}

TEST_F(CArchiveCacheTest, WhatCouldntBeUnpackedWholeIsRemoved) {
    ON_CALL(files_.file_system_, openFile(EndsWith("/nocturne.toml"), platform::EFileMode::Write))
        .WillByDefault([](std::string_view, platform::EFileMode) { return nullptr; });
    EXPECT_CALL(files_.file_system_, removeDirectory(_)).Times(2);
    EXPECT_EQ(failure(), "mods/hell.zip: nocturne.toml: it couldn't be written");
}

TEST_F(CArchiveCacheTest, WithoutItsRecordTheUnpackingIsUndone) {
    ON_CALL(files_.file_system_, writeFile(EndsWith(".unpacked"), _)).WillByDefault(Return(false));
    const std::string error = failure();
    EXPECT_THAT(error,
                MatchesRegex(R"(\.packages/hell\.zip-[0-9a-f]{16}\.unpacked couldn't be written)"));
    EXPECT_FALSE(files_.contents(error.substr(0, error.find(".unpacked")) + "/nocturne.toml"));
}

TEST_F(CArchiveCacheTest, AnArchiveIsFoundUnpackedOnlyOnceItIsWholeAndUnchanged) {
    EXPECT_EQ(findUnpacked(files_.file_system_, "mods/hell.zip"), std::nullopt);
    const std::string folder = unpack();
    EXPECT_EQ(findUnpacked(files_.file_system_, "mods/hell.zip"), folder);
    givenMod({{.path = "nocturne.toml", .contents = std::string(kManifest)}},
             CPackageFiles::kModified + 1);
    EXPECT_EQ(findUnpacked(files_.file_system_, "mods/hell.zip"), std::nullopt);
    EXPECT_EQ(findUnpacked(files_.file_system_, "mods/gone.zip"), std::nullopt);
}

TEST_F(CArchiveCacheTest, AnArchiveIsCheckedWithoutUnpackingIt) {
    EXPECT_CALL(files_.file_system_, makeDirectory).Times(0);
    EXPECT_TRUE(checkUnpackable(files_.file_system_, "mods/hell.zip").has_value());
    givenMod({{.path = "readme.txt", .contents = "hi"}});
    EXPECT_EQ(checkUnpackable(files_.file_system_, "mods/hell.zip").error(),
              "mods/hell.zip holds no nocturne.toml and no POD");
}

TEST_F(CArchiveCacheTest, PruningRemovesWhatIsntKept) {
    const std::string kept = unpack();
    files_.givenFile(".packages/gone.zip-0123456789abcdef/nocturne.toml", "old");
    files_.givenFile(".packages/gone.zip-0123456789abcdef.unpacked", "gone.zip");
    EXPECT_CALL(files_.file_system_, removeDirectory(".packages/gone.zip-0123456789abcdef"));
    EXPECT_CALL(files_.file_system_, removeFile(".packages/gone.zip-0123456789abcdef.unpacked"));
    EXPECT_CALL(files_.file_system_, removeDirectory(kept)).Times(0);
    EXPECT_CALL(files_.file_system_, removeFile(kept + ".unpacked")).Times(0);
    pruneArchiveCache(files_.file_system_, std::vector{kept});
}

} // namespace
} // namespace nocturne::engine
