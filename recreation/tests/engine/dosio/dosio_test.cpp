#include "common/error/fatalerror.h"
#include "engine/dosio/dosio.h"
#include "engine/dosio/foundfileinfo.h"
#include "tests/mocks/platform/memoryfile.h"
#include "tests/mocks/platform/mockfilesystem.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <memory>
#include <string>
#include <vector>

namespace nocturne::engine {
namespace {

using platform::EFileMode;
using platform::SFileInfo;
using ::testing::_;
using ::testing::ByMove;
using ::testing::Return;

constexpr std::time_t kModified = 900000000;

class CDosIoTest : public ::testing::Test {
protected:
    // A file on disk under /game.
    void givenDiskFile(const std::string &path, std::uint64_t size) {
        EXPECT_CALL(file_system_, getFullPath(std::string_view(path)))
            .WillRepeatedly(Return("/game/" + path));
        EXPECT_CALL(file_system_, getFileInfo(std::string_view("/game/" + path)))
            .WillRepeatedly(Return(SFileInfo{.name = path, .size = size, .modified = kModified}));
    }

    // A hook that knows one file, inside a pod at an offset.
    static FileSearchHandlerFunc podHook(std::string known) {
        return [known = std::move(known)](SFoundFileInfo &info) {
            if (info.found_path != known) {
                return false;
            }
            info.target_path = "/game/ACT1.POD";
            info.file_offset = 300;
            info.file_size = 12;
            info.is_archive = true;
            info.timestamp = 5;
            return true;
        };
    }

    ::testing::NiceMock<platform::MockFileSystem> file_system_;
    CDosIo dosio_{file_system_};
};

TEST_F(CDosIoTest, WithoutHooksLookupsGoToTheDisk) {
    givenDiskFile("pod.ini", 40);
    SFoundFileInfo info("pod.ini");
    ASSERT_TRUE(dosio_.findFile(info));
    EXPECT_EQ(info.target_path, "/game/pod.ini");
    EXPECT_EQ(info.file_size, 40);
    EXPECT_EQ(info.file_offset, 0);
    EXPECT_EQ(info.timestamp, kModified);
    EXPECT_EQ(info.container_timestamp, kModified);
    EXPECT_FALSE(info.is_archive);
}

TEST_F(CDosIoTest, TheDiskLookupFailsForNothingOrAMissingFile) {
    SFoundFileInfo empty;
    EXPECT_FALSE(dosio_.findFileNormally(empty));
    SFoundFileInfo unresolvable("a");
    EXPECT_CALL(file_system_, getFullPath(std::string_view("a"))).WillOnce(Return(std::nullopt));
    EXPECT_FALSE(dosio_.findFileNormally(unresolvable));
    SFoundFileInfo missing("b");
    EXPECT_CALL(file_system_, getFullPath(std::string_view("b"))).WillOnce(Return("/game/b"));
    EXPECT_CALL(file_system_, getFileInfo(std::string_view("/game/b")))
        .WillOnce(Return(std::nullopt));
    EXPECT_FALSE(dosio_.findFileNormally(missing));
}

// Once hooks are registered the disk is asked only through one of them.
TEST_F(CDosIoTest, HooksAreAskedInOrderAndTheFirstAnswerWins) {
    dosio_.addGetFileInfoHook(podHook("door.wav"));
    dosio_.addGetFileInfoHook(
        [this](SFoundFileInfo &info) { return dosio_.findFileNormally(info); });
    SFoundFileInfo in_pod("door.wav");
    ASSERT_TRUE(dosio_.findFile(in_pod));
    EXPECT_TRUE(in_pod.is_archive);
    givenDiskFile("pod.ini", 40);
    SFoundFileInfo on_disk("pod.ini");
    ASSERT_TRUE(dosio_.findFile(on_disk));
    EXPECT_FALSE(on_disk.is_archive);
}

TEST_F(CDosIoTest, AFileNoHookKnowsIsNotFound) {
    dosio_.addGetFileInfoHook(podHook("door.wav"));
    SFoundFileInfo info("pod.ini");
    EXPECT_FALSE(dosio_.findFile(info));
}

TEST_F(CDosIoTest, ASixthHookIsFatal) {
    for (int i = 0; i < 5; ++i) {
        dosio_.addGetFileInfoHook(podHook("x"));
    }
    EXPECT_THAT([this] { dosio_.addGetFileInfoHook(podHook("x")); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("addGetFileInfoHook - too many!")));
}

TEST_F(CDosIoTest, SizeAndTimestampComeFromTheLookup) {
    dosio_.addGetFileInfoHook(podHook("sounds\\door.wav"));
    EXPECT_EQ(dosio_.getFileSize("sounds", "door.wav"), 12);
    EXPECT_EQ(dosio_.getFileTimestamp("sounds", "door.wav"), 5);
    EXPECT_EQ(dosio_.getFileSize("sounds", "gone.wav"), -1);
    EXPECT_EQ(dosio_.getFileTimestamp("sounds", "gone.wav"), 0);
}

TEST_F(CDosIoTest, ReadingOpensTheLookupsTargetAtItsOffset) {
    dosio_.addGetFileInfoHook(podHook("door.wav"));
    auto pod = std::make_unique<platform::CMemoryFile>(std::string(400, 'p'));
    platform::CMemoryFile *opened = pod.get();
    EXPECT_CALL(file_system_, openFile(std::string_view("/game/ACT1.POD"), EFileMode::Read))
        .WillOnce(Return(ByMove(std::move(pod))));
    const std::unique_ptr<platform::IFile> file = dosio_.getFile("", "door.wav", EFileMode::Read);
    ASSERT_EQ(file.get(), opened);
    EXPECT_EQ(file->tell(), 300);
}

TEST_F(CDosIoTest, AFileOnDiskOpensAtItsStart) {
    givenDiskFile("pod.ini", 40);
    EXPECT_CALL(file_system_, openFile(std::string_view("/game/pod.ini"), EFileMode::Append))
        .WillOnce(Return(ByMove(std::make_unique<platform::CMemoryFile>("x"))));
    const std::unique_ptr<platform::IFile> file = dosio_.getFile("", "pod.ini", EFileMode::Append);
    ASSERT_NE(file, nullptr);
    EXPECT_EQ(file->tell(), 0);
}

TEST_F(CDosIoTest, ReadingAFileNothingFindsOrThatWontOpenGivesNothing) {
    EXPECT_EQ(dosio_.getFile("", "gone.wav", EFileMode::Read), nullptr);
    dosio_.addGetFileInfoHook(podHook("door.wav"));
    EXPECT_CALL(file_system_, openFile(_, _)).WillOnce(Return(ByMove(nullptr)));
    EXPECT_EQ(dosio_.getFile("", "door.wav", EFileMode::Read), nullptr);
}

TEST_F(CDosIoTest, ReadFileTakesTheLookupsSizeFromItsOffset) {
    dosio_.addGetFileInfoHook(podHook("door.wav"));
    std::string pod(400, 'p');
    pod.replace(300, 12, "RIFF....WAVE");
    EXPECT_CALL(file_system_, openFile(std::string_view("/game/ACT1.POD"), EFileMode::Read))
        .WillOnce(Return(ByMove(std::make_unique<platform::CMemoryFile>(pod))));
    EXPECT_EQ(dosio_.readFile("", "door.wav"), "RIFF....WAVE");
}

TEST_F(CDosIoTest, ReadFileStopsShortWhenTheFileEndsEarly) {
    givenDiskFile("pod.ini", 40);
    EXPECT_CALL(file_system_, openFile(std::string_view("/game/pod.ini"), EFileMode::Read))
        .WillOnce(Return(ByMove(std::make_unique<platform::CMemoryFile>("2 A.POD"))));
    EXPECT_EQ(dosio_.readFile("", "pod.ini"), "2 A.POD");
}

TEST_F(CDosIoTest, ReadFileGivesNothingForAFileNothingFindsOrThatWontOpen) {
    EXPECT_EQ(dosio_.readFile("", "gone.wav"), std::nullopt);
    dosio_.addGetFileInfoHook(podHook("door.wav"));
    EXPECT_CALL(file_system_, openFile(_, _)).WillOnce(Return(ByMove(nullptr)));
    EXPECT_EQ(dosio_.readFile("", "door.wav"), std::nullopt);
}

// Writing never looks the file up: it makes the directory and the file under it.
TEST_F(CDosIoTest, WritingCreatesTheDirectoryAndTheFile) {
    EXPECT_CALL(file_system_, makeDirectory(std::string_view("save"))).WillOnce(Return(true));
    EXPECT_CALL(file_system_, openFile(std::string_view("save\\SAVE1.NOC"), EFileMode::Write))
        .WillOnce(Return(ByMove(std::make_unique<platform::CMemoryFile>())));
    EXPECT_NE(dosio_.getFile("save", "SAVE1.NOC", EFileMode::Write), nullptr);
}

TEST_F(CDosIoTest, WritingWithoutADirectoryMakesNone) {
    EXPECT_CALL(file_system_, makeDirectory(_)).Times(0);
    EXPECT_CALL(file_system_, openFile(std::string_view("gtfo.txt"), EFileMode::Write))
        .WillOnce(Return(ByMove(std::make_unique<platform::CMemoryFile>())));
    EXPECT_NE(dosio_.getFile("", "gtfo.txt", EFileMode::Write), nullptr);
}

TEST_F(CDosIoTest, AttributesComeFromTheFileFinder) {
    EXPECT_CALL(file_system_, findFiles(std::string_view("save\\SAVE1.NOC")))
        .WillOnce(Return(std::vector<SFileInfo>{{.name = "SAVE1.NOC", .is_read_only = true}}));
    EXPECT_EQ(dosio_.getFileAttributes("save", "SAVE1.NOC"), 1 | 8);
    EXPECT_CALL(file_system_, findFiles(std::string_view("gone")))
        .WillOnce(Return(std::vector<SFileInfo>{}));
    EXPECT_EQ(dosio_.getFileAttributes("", "gone"), -1);
}

TEST_F(CDosIoTest, TheReadOnlyBitSetsOrClearsReadOnly) {
    EXPECT_CALL(file_system_, setReadOnly(std::string_view("a"), true)).WillOnce(Return(true));
    EXPECT_TRUE(dosio_.setFileAttributes("a", 8 | 1));
    EXPECT_CALL(file_system_, setReadOnly(std::string_view("a"), false)).WillOnce(Return(false));
    EXPECT_FALSE(dosio_.setFileAttributes("a", 1));
}

TEST_F(CDosIoTest, CopyFileTimestampSetsTheModifiedTime) {
    EXPECT_CALL(file_system_, setModifiedTime(std::string_view("a"), kModified))
        .WillOnce(Return(true));
    EXPECT_TRUE(dosio_.copyFileTimestamp("a", kModified));
}

} // namespace
} // namespace nocturne::engine
