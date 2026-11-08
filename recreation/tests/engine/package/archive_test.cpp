#include "engine/package/archive.h"
#include "tests/mocks/engine/packagefiles.h"
#include "tests/mocks/engine/testarchive.h"
#include "tests/mocks/platform/memoryfile.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <expected>
#include <memory>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::engine {
namespace {

using ::testing::_;
using ::testing::AllOf;
using ::testing::EndsWith;
using ::testing::HasSubstr;
using ::testing::Return;
using ::testing::StartsWith;
using ::testing::UnorderedElementsAre;

// Takes nothing written to it.
class CFullFile final : public platform::CMemoryFile {
public:
    bool write(std::span<const std::byte> /*data*/) override {
        return false;
    }
};

class CArchiveTest : public ::testing::TestWithParam<ETestArchiveFormat> {
protected:
    void givenArchive(const std::vector<STestArchiveEntry> &entries) {
        files_.givenFile("mod.zip", makeTestArchive(GetParam(), entries));
    }

    [[nodiscard]] std::string listingError() {
        const auto listed = listArchive(files_.file_system_, "mod.zip");
        return listed ? std::string() : listed.error();
    }

    CPackageFiles files_;
};

INSTANTIATE_TEST_SUITE_P(Formats, CArchiveTest,
                         ::testing::Values(ETestArchiveFormat::Zip, ETestArchiveFormat::SevenZip),
                         [](const ::testing::TestParamInfo<ETestArchiveFormat> &format) {
                             return format.param == ETestArchiveFormat::Zip ? "Zip" : "SevenZip";
                         });

TEST_P(CArchiveTest, IsKnownByItsFirstBytesWhateverItIsCalled) {
    files_.givenFile("mod.dat", makeTestArchive(GetParam(), {{.path = "a", .contents = "x"}}));
    EXPECT_TRUE(isArchive(files_.file_system_, "mod.dat"));
}

TEST_P(CArchiveTest, ListsItsFilesAndFoldersWithoutLeadingDots) {
    givenArchive({{.path = "./hell/", .contents = {}},
                  {.path = "./hell/nocturne.toml", .contents = "id = \"hell\"\n"},
                  {.path = "HELL.POD", .contents = "POD"}});
    const auto listed = listArchive(files_.file_system_, "mod.zip");
    ASSERT_TRUE(listed.has_value()) << listed.error();
    // A 7z keeps its files and folders in an order of its own.
    EXPECT_THAT(*listed, UnorderedElementsAre(SArchiveEntry{.path = "hell", .is_folder = true},
                                              SArchiveEntry{.path = "hell/nocturne.toml"},
                                              SArchiveEntry{.path = "HELL.POD"}));
}

// A folder of only "." names the folder it is unpacked in, which is made anyway.
TEST_P(CArchiveTest, AnEntryForItsOwnFolderIsLeftOut) {
    givenArchive({{.path = "./", .contents = {}}, {.path = "a.pod", .contents = "POD"}});
    const auto listed = listArchive(files_.file_system_, "mod.zip");
    ASSERT_TRUE(listed.has_value()) << listed.error();
    EXPECT_EQ(*listed, (std::vector<SArchiveEntry>{{.path = "a.pod"}}));
}

TEST_P(CArchiveTest, APathLeadingOutOfItsFolderIsRefused) {
    for (const std::string path :
         {"../evil.pod", "a/../../evil.pod", "/evil.pod", "\\evil.pod", "C:evil.pod"}) {
        givenArchive({{.path = "a.pod", .contents = "POD"}, {.path = path, .contents = "POD"}});
        // A ZIP's writer stores '\' as '/', so the path is named as the archive holds it.
        EXPECT_THAT(listingError(),
                    AllOf(StartsWith("mod.zip: "), EndsWith("evil.pod leads out of its folder")))
            << path;
    }
}

TEST_P(CArchiveTest, ALinkIsRefused) {
    files_.givenFile("mod.zip",
                     makeTestArchive(GetParam(), {}, {{.path = "link", .target = "/etc/passwd"}}));
    EXPECT_EQ(listingError(), "mod.zip: link isn't a plain file or folder");
}

TEST_P(CArchiveTest, UnpacksItsFilesAndFoldersIntoTheFolder) {
    givenArchive({{.path = "empty/", .contents = {}},
                  {.path = "hell/nocturne.toml", .contents = "id = \"hell\"\n"},
                  {.path = "HELL.POD", .contents = std::string(100000, 'p')}});
    EXPECT_CALL(files_.file_system_, makeDirectory(_)).Times(::testing::AnyNumber());
    EXPECT_CALL(files_.file_system_, makeDirectory("cache/empty"));
    EXPECT_CALL(files_.file_system_, makeDirectory("cache/hell"));
    const auto unpacked = unpackArchive(files_.file_system_, "mod.zip", "cache");
    ASSERT_TRUE(unpacked.has_value()) << unpacked.error();
    EXPECT_EQ(files_.bytes("cache/hell/nocturne.toml"), "id = \"hell\"\n");
    EXPECT_EQ(files_.bytes("cache/HELL.POD"), std::string(100000, 'p'));
}

TEST_P(CArchiveTest, NothingIsWrittenForAnArchiveThatCantBeUnpackedWhole) {
    givenArchive({{.path = "a.pod", .contents = "POD"}, {.path = "../b.pod", .contents = "POD"}});
    EXPECT_CALL(files_.file_system_, makeDirectory).Times(0);
    EXPECT_CALL(files_.file_system_, openFile(_, platform::EFileMode::Read))
        .Times(::testing::AnyNumber());
    EXPECT_CALL(files_.file_system_, openFile(_, platform::EFileMode::Write)).Times(0);
    const auto unpacked = unpackArchive(files_.file_system_, "mod.zip", "cache");
    ASSERT_FALSE(unpacked.has_value());
    EXPECT_EQ(unpacked.error(), "mod.zip: ../b.pod leads out of its folder");
}

TEST_P(CArchiveTest, AFolderThatCantBeMadeStopsTheUnpacking) {
    givenArchive({{.path = "a.pod", .contents = "POD"}});
    ON_CALL(files_.file_system_, makeDirectory("cache")).WillByDefault(Return(false));
    const auto unpacked = unpackArchive(files_.file_system_, "mod.zip", "cache");
    ASSERT_FALSE(unpacked.has_value());
    EXPECT_EQ(unpacked.error(), "cache couldn't be made");
}

TEST_P(CArchiveTest, AnEntrysFolderThatCantBeMadeStopsTheUnpacking) {
    givenArchive({{.path = "hell/a.pod", .contents = "POD"}});
    ON_CALL(files_.file_system_, makeDirectory("cache/hell")).WillByDefault(Return(false));
    const auto unpacked = unpackArchive(files_.file_system_, "mod.zip", "cache");
    ASSERT_FALSE(unpacked.has_value());
    EXPECT_EQ(unpacked.error(), "mod.zip: hell/a.pod: its folder couldn't be made");
}

TEST_P(CArchiveTest, AFileThatCantBeOpenedStopsTheUnpacking) {
    givenArchive({{.path = "a.pod", .contents = "POD"}});
    ON_CALL(files_.file_system_, openFile("cache/a.pod", platform::EFileMode::Write))
        .WillByDefault([](std::string_view, platform::EFileMode) { return nullptr; });
    const auto unpacked = unpackArchive(files_.file_system_, "mod.zip", "cache");
    ASSERT_FALSE(unpacked.has_value());
    EXPECT_EQ(unpacked.error(), "mod.zip: a.pod: it couldn't be written");
}

TEST_P(CArchiveTest, AFileThatCantBeWrittenStopsTheUnpacking) {
    givenArchive({{.path = "a.pod", .contents = "POD"}});
    ON_CALL(files_.file_system_, openFile("cache/a.pod", platform::EFileMode::Write))
        .WillByDefault(
            [](std::string_view, platform::EFileMode) { return std::make_unique<CFullFile>(); });
    const auto unpacked = unpackArchive(files_.file_system_, "mod.zip", "cache");
    ASSERT_FALSE(unpacked.has_value());
    EXPECT_EQ(unpacked.error(), "mod.zip: a.pod: it couldn't be written");
}

// Its entries list, but a file's compressed bytes are damaged.
TEST(Archive, DamagedContentsStopTheUnpacking) {
    CPackageFiles files;
    std::string zip = makeTestArchive(ETestArchiveFormat::Zip,
                                      {{.path = "a.pod", .contents = std::string(1000, 'p')}});
    // Past the local header, its 30 bytes and the name.
    constexpr std::size_t kInData = 30 + 5 + 2;
    zip[kInData] = static_cast<char>(~zip[kInData]);
    files.givenFile("mod.zip", zip);
    ASSERT_TRUE(listArchive(files.file_system_, "mod.zip").has_value());
    const auto unpacked = unpackArchive(files.file_system_, "mod.zip", "cache");
    ASSERT_FALSE(unpacked.has_value());
    EXPECT_THAT(unpacked.error(), StartsWith("mod.zip: a.pod: "));
}

TEST(Archive, AnEmptyZipIsAnArchiveOfNothing) {
    CPackageFiles files;
    files.givenFile("mod.zip", makeTestArchive(ETestArchiveFormat::Zip, {}));
    EXPECT_TRUE(isArchive(files.file_system_, "mod.zip"));
    const auto listed = listArchive(files.file_system_, "mod.zip");
    ASSERT_TRUE(listed.has_value()) << listed.error();
    EXPECT_TRUE(listed->empty());
}

TEST(Archive, OtherFilesArentArchives) {
    CPackageFiles files;
    files.givenFile("readme.txt", "Read me first");
    files.givenFile("short", "PK");
    files.givenUnreadableFile("locked.zip", 10);
    EXPECT_FALSE(isArchive(files.file_system_, "readme.txt"));
    EXPECT_FALSE(isArchive(files.file_system_, "short"));
    EXPECT_FALSE(isArchive(files.file_system_, "locked.zip"));
    EXPECT_FALSE(isArchive(files.file_system_, "missing.zip"));
}

// Why the archive can't be listed, or empty when it can.
std::string listingErrorOf(CPackageFiles &files, std::string_view path) {
    const auto listed = listArchive(files.file_system_, path);
    EXPECT_FALSE(listed.has_value()) << path;
    return listed ? std::string() : listed.error();
}

TEST(Archive, OneThatCantBeReadIsntListed) {
    CPackageFiles files;
    files.givenUnreadableFile("locked.zip", 10);
    files.givenFile("readme.txt", "Neither a ZIP nor a 7z");
    EXPECT_EQ(listingErrorOf(files, "missing.zip"), "missing.zip is missing");
    EXPECT_EQ(listingErrorOf(files, "locked.zip"), "locked.zip can't be read");
    EXPECT_EQ(listingErrorOf(files, "readme.txt"), "readme.txt: Unrecognized archive format");
}

// Its header, at its end, is cut off.
TEST(Archive, OneCutShortIsntListed) {
    CPackageFiles files;
    const std::string seven_zip = makeTestArchive(
        ETestArchiveFormat::SevenZip, {{.path = "a.pod", .contents = std::string(1000, 'p')},
                                       {.path = "b.pod", .contents = std::string(1000, 'q')}});
    files.givenFile("mod.7z", seven_zip.substr(0, seven_zip.size() - 10));
    EXPECT_THAT(listingErrorOf(files, "mod.7z"), StartsWith("mod.7z: "));
}

// A 7z's header, at its end, is found by seeking to it once it is past the first read.
TEST(Archive, OneTheFileCantSeekInIsntListed) {
    constexpr std::size_t kPastTheFirstRead = std::size_t{1} << 18U;
    std::string noise(kPastTheFirstRead, '\0');
    unsigned state = 1;
    for (char &c : noise) {
        state = (state * 1103515245U) + 12345U;
        c = static_cast<char>(state >> 24U);
    }
    class CUnseekableFile final : public platform::CMemoryFile {
    public:
        using CMemoryFile::CMemoryFile;
        bool seek(std::int64_t /*position*/) override {
            return false;
        }
    };
    CPackageFiles files;
    const std::string seven_zip =
        makeTestArchive(ETestArchiveFormat::SevenZip, {{.path = "a.pod", .contents = noise}});
    files.givenFile("mod.7z", seven_zip);
    ON_CALL(files.file_system_, openFile(std::string_view("mod.7z"), platform::EFileMode::Read))
        .WillByDefault([&seven_zip](std::string_view, platform::EFileMode) {
            return std::make_unique<CUnseekableFile>(seven_zip);
        });
    EXPECT_THAT(listingErrorOf(files, "mod.7z"), StartsWith("mod.7z: "));
}

// The "C" locale has no conversion for a 7z's UTF-16 names past ASCII; a ZIP's are its bytes.
TEST(Archive, A7zNameTheLocaleCantHoldIsRefused) {
    CPackageFiles files;
    files.givenFile("mod.7z", makeTestArchive(ETestArchiveFormat::SevenZip,
                                              {{.path = "M\xc3\xbasica/a.pod", .contents = "x"}}));
    EXPECT_THAT(listingErrorOf(files, "mod.7z"), HasSubstr("cannot be converted"));
}

} // namespace
} // namespace nocturne::engine
