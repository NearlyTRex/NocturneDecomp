#include "common/serial/binarywriter.h"
#include "engine/dosio/foundfileinfo.h"
#include "engine/pod/podfile.h"
#include "tests/mocks/engine/podfixture.h"
#include "tests/mocks/engine/podimage.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <cstdint>
#include <expected>
#include <optional>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::engine {
namespace {

class CPodFileTest : public CPodFixture {
protected:
    CPodFile pod_{file_system_, dosio_};
};

std::vector<std::string> names(const CPodFile &pod) {
    std::vector<std::string> result;
    for (const CPodDirectoryEntry &entry : pod.getEntries()) {
        result.push_back(entry.name);
    }
    return result;
}

TEST_F(CPodFileTest, MountsAPod2Directory) {
    givenFile(
        "ACT1.POD",
        makePod2("Act one",
                 {{.name = "sounds\\door.wav", .data = "DOOR", .timestamp = 9, .checksum = 77},
                  {.name = "art\\sky.raw", .data = "SKYSKY"}},
                 3));
    ASSERT_TRUE(pod_.mountFromFile("ACT1.POD"));
    EXPECT_EQ(pod_.getVersion(), 2);
    EXPECT_EQ(pod_.getFilename(), "/game/ACT1.POD");
    EXPECT_EQ(pod_.getTimestamp(), kPodTime);
    EXPECT_EQ(pod_.getDescription(), "Act one");
    EXPECT_EQ(pod_.getAuditCount(), 3);
    ASSERT_THAT(names(pod_), ::testing::ElementsAre("art\\sky.raw", "sounds\\door.wav"));
    const CPodDirectoryEntry &door = pod_.getEntries()[1];
    EXPECT_EQ(door.size, 4U);
    EXPECT_EQ(door.timestamp, 9);
    EXPECT_EQ(door.checksum, 77U);
    // Header, two directory entries, then the 28 bytes of names.
    EXPECT_EQ(door.offset, 0x60U + 40U + 28U);
}

TEST_F(CPodFileTest, MountsAPod1DirectoryWithThePodsTime) {
    givenFile("OLD.POD",
              makePod1("Old", {{.name = "b.wav", .data = "BB"}, {.name = "A.WAV", .data = "AAA"}}));
    ASSERT_TRUE(pod_.mountFromFile("OLD.POD"));
    EXPECT_EQ(pod_.getVersion(), 1);
    EXPECT_EQ(pod_.getDescription(), "Old");
    EXPECT_EQ(pod_.getAuditCount(), 0);
    ASSERT_THAT(names(pod_), ::testing::ElementsAre("A.WAV", "b.wav"));
    EXPECT_EQ(pod_.getEntries()[0].size, 3U);
    EXPECT_EQ(pod_.getEntries()[0].offset, 0x54U + 80U + 2U);
    EXPECT_EQ(pod_.getEntries()[0].timestamp, kPodTime);
    EXPECT_EQ(pod_.getEntries()[0].checksum, 0U);
}

// Retail's malloc(0) at 0x004f7f2f returns null, which fails the mount.
TEST_F(CPodFileTest, AnEmptyPod1IsRefused) {
    givenFile("EMPTY.POD", makePod1("", {}));
    EXPECT_FALSE(pod_.mountFromFile("EMPTY.POD"));
    EXPECT_EQ(pod_.getVersion(), 0);
}

// The retail build's sort is a bubble sort, so names equal but for case keep their order.
TEST_F(CPodFileTest, NamesEqualButForCaseKeepTheirOrder) {
    givenFile("DUP.POD", makePod2("", {{.name = "x.wav"}, {.name = "X.WAV"}, {.name = "a"}}));
    ASSERT_TRUE(pod_.mountFromFile("DUP.POD"));
    EXPECT_THAT(names(pod_), ::testing::ElementsAre("a", "x.wav", "X.WAV"));
}

TEST_F(CPodFileTest, APathThatWontResolveIsOpenedAsGiven) {
    EXPECT_CALL(file_system_, getFullPath(std::string_view("odd.pod")))
        .WillRepeatedly(::testing::Return(std::nullopt));
    EXPECT_CALL(file_system_, openFile(std::string_view("odd.pod"), platform::EFileMode::Read))
        .WillOnce([](std::string_view, platform::EFileMode) {
            return std::make_unique<platform::CMemoryFile>(makePod2("", {{.name = "a"}}));
        });
    ASSERT_TRUE(pod_.mountFromFile("odd.pod"));
    EXPECT_EQ(pod_.getFilename(), "odd.pod");
}

TEST_F(CPodFileTest, AFileThatWontOpenMountsNothing) {
    EXPECT_FALSE(pod_.mountFromFile("GONE.POD"));
    EXPECT_EQ(pod_.getVersion(), 0);
    EXPECT_EQ(pod_.getFilename(), "");
}

TEST_F(CPodFileTest, FindsNamesIgnoringCase) {
    givenFile(
        "ACT1.POD",
        makePod2(
            "",
            {{.name = "a"}, {.name = "b"}, {.name = "Door.wav"}, {.name = "e"}, {.name = "f"}}));
    ASSERT_TRUE(pod_.mountFromFile("ACT1.POD"));
    EXPECT_EQ(pod_.findFileIndex("DOOR.WAV"), 2);
    EXPECT_EQ(pod_.findFileIndex("a"), 0);
    EXPECT_EQ(pod_.findFileIndex("F"), 4);
    EXPECT_EQ(pod_.findFileIndex("c"), -1);
    EXPECT_EQ(pod_.findFileIndex("zz"), -1);
}

TEST_F(CPodFileTest, NothingMountedFindsNothing) {
    EXPECT_EQ(pod_.findFileIndex("a"), -1);
}

TEST_F(CPodFileTest, PopulateFileInfoPointsIntoThePod) {
    givenFile("ACT1.POD", makePod2("", {{.name = "door.wav", .data = "DOOR", .timestamp = 9}}));
    ASSERT_TRUE(pod_.mountFromFile("ACT1.POD"));
    SFoundFileInfo info;
    pod_.populateFileInfo(0, info);
    EXPECT_EQ(info.target_path, "/game/ACT1.POD");
    EXPECT_EQ(info.file_offset, 0x60 + 20 + 9);
    EXPECT_EQ(info.file_size, 4);
    EXPECT_EQ(info.timestamp, 9);
    EXPECT_TRUE(info.is_archive);
    EXPECT_EQ(info.container_timestamp, kPodTime);
}

// The original kept the description when it unmounted.
TEST_F(CPodFileTest, CleanupUnmountsButKeepsTheDescription) {
    givenFile("ACT1.POD", makePod2("Act one", {{.name = "a"}}, 2));
    ASSERT_TRUE(pod_.mountFromFile("ACT1.POD"));
    pod_.cleanup();
    EXPECT_EQ(pod_.getVersion(), 0);
    EXPECT_EQ(pod_.getFilename(), "");
    EXPECT_TRUE(pod_.getEntries().empty());
    EXPECT_EQ(pod_.getAuditCount(), 0);
    EXPECT_EQ(pod_.getDescription(), "Act one");
}

// Images edited after building, to reach each check.
class CPodFileBadImageTest : public CPodFileTest {
protected:
    // The image of {a, bb} with one 32-bit field overwritten.
    static std::string withField(std::size_t offset, std::uint32_t value) {
        std::string image = makePod2("", {{.name = "a", .data = "1"}, {.name = "bb", .data = "2"}});
        common::CBinaryWriter writer;
        writer.write(value);
        image.replace(offset, 4, toText(writer));
        return image;
    }

    bool mount(const std::string &image) {
        givenFile("BAD.POD", image);
        return pod_.mountFromFile("BAD.POD");
    }

    static constexpr std::size_t kCount = 0x58;
    static constexpr std::size_t kFirstNameOffset = 0x60;
    static constexpr std::size_t kFirstDataOffset = 0x60 + 8;
};

TEST_F(CPodFileBadImageTest, TheUnmodifiedImageMounts) {
    EXPECT_TRUE(mount(withField(kCount, 2)));
}

// Retail's malloc(0) at 0x004f7c42 returns null, which fails the mount.
TEST_F(CPodFileBadImageTest, AnEmptyDirectoryIsRefused) {
    EXPECT_FALSE(mount(makePod2("", {})));
}

TEST_F(CPodFileBadImageTest, ANegativeCountIsRefused) {
    EXPECT_FALSE(mount(withField(kCount, 0xFFFFFFFF)));
}

TEST_F(CPodFileBadImageTest, ADirectoryLongerThanTheFileIsRefused) {
    EXPECT_FALSE(mount(withField(kCount, 9)));
}

TEST_F(CPodFileBadImageTest, ANameBlockSmallerThanOneBytePerFileIsRefused) {
    EXPECT_FALSE(mount(withField(kFirstDataOffset, 0x60 + 40 + 1)));
}

TEST_F(CPodFileBadImageTest, ANameBlockLargerThan256BytesPerFileIsRefused) {
    EXPECT_FALSE(mount(withField(kFirstDataOffset, 0x60 + 40 + 513)));
}

TEST_F(CPodFileBadImageTest, ANameBlockPastTheEndOfTheFileIsRefused) {
    EXPECT_FALSE(mount(withField(kFirstDataOffset, 0x60 + 40 + 100)));
}

TEST_F(CPodFileBadImageTest, ANameOutsideTheBlockIsRefused) {
    EXPECT_FALSE(mount(withField(kFirstNameOffset, 5)));
}

TEST_F(CPodFileBadImageTest, ANameWithoutANulEndsAtTheBlock) {
    std::string image = makePod2("", {{.name = "abc", .data = "1"}});
    image[0x60 + 20 + 3] = 'd';
    ASSERT_TRUE(mount(image));
    EXPECT_EQ(pod_.getEntries()[0].name, "abcd");
}

TEST_F(CPodFileBadImageTest, APod1WithANegativeCountIsRefused) {
    std::string image = makePod1("", {});
    image.replace(0, 4, std::string(4, '\xFF'));
    EXPECT_FALSE(mount(image));
}

// The original took a record cut short as the one before it.
TEST_F(CPodFileBadImageTest, APod1WithATruncatedDirectoryIsRefused) {
    std::string image = makePod1("", {{.name = "a"}});
    image.resize(0x54 + 10);
    EXPECT_FALSE(mount(image));
}

TEST_F(CPodFileBadImageTest, AFileShorterThanAnyHeaderIsRefused) {
    EXPECT_FALSE(mount("short"));
}

// The original took this as POD2 with the header's tail uninitialised.
TEST_F(CPodFileBadImageTest, APod2CutShortInItsHeaderIsntReadAsPod2) {
    EXPECT_FALSE(mount(withField(kCount, 2).substr(0, 0x5c)));
    EXPECT_EQ(pod_.getVersion(), 0);
}

// Images as the editor's builder leaves them: every CRC written.
class CPodFileVerifyTest : public CPodFileTest {
protected:
    static constexpr std::size_t kPod2CrcStart = 8;
    static constexpr std::size_t kPod1CrcStart = 0x54;

    static std::string makeSignedPod2(const std::vector<SPodImageFile> &files) {
        std::vector<SPodImageFile> signed_files = files;
        for (SPodImageFile &file : signed_files) {
            file.checksum = crcOf(file.data);
        }
        return withStoredCrc(makePod2("", signed_files), kPod2CrcStart);
    }

    std::expected<void, std::string> verify(const std::string &image) {
        givenFile("ACT1.POD", image);
        EXPECT_TRUE(pod_.mountFromFile("ACT1.POD"));
        return pod_.verifyChecksum();
    }
};

TEST_F(CPodFileVerifyTest, APod2WhoseCrcsAllMatchPasses) {
    EXPECT_TRUE(verify(makeSignedPod2({{.name = "a", .data = "one"}, {.name = "b", .data = "2"}})));
}

// The original listed them in a pick list headed "!!!CRC CHECK FAILED!! on these files:".
TEST_F(CPodFileVerifyTest, EachFileFailingItsOwnCrcIsNamed) {
    const std::string image =
        withStoredCrc(makePod2("", {{.name = "b", .data = "two", .checksum = 1},
                                    {.name = "a", .data = "one", .checksum = crcOf("one")},
                                    {.name = "c", .data = "six", .checksum = 2}}),
                      kPod2CrcStart);
    EXPECT_EQ(verify(image).error(), "fails its CRC check on b, c");
}

TEST_F(CPodFileVerifyTest, AFileTheImageEndsInsideFailsItsCrc) {
    std::string image =
        makeSignedPod2({{.name = "a", .data = "one"}, {.name = "b", .data = "two"}});
    image.pop_back();
    EXPECT_EQ(verify(image).error(), "fails its CRC check on b");
}

TEST_F(CPodFileVerifyTest, APod2WhoseWholeFileCrcIsWrongFails) {
    std::string image = makeSignedPod2({{.name = "a", .data = "one"}});
    image[0x10] = 'x';
    EXPECT_EQ(verify(image).error(), "fails its CRC check");
}

// The CRC is read 64 KiB at a time, as nocedit's g_FileIOBuffer held it.
TEST_F(CPodFileVerifyTest, ACrcRunsOnAcrossBlocks) {
    const std::string big(0x10000 + 5, 'z');
    std::string image = makeSignedPod2({{.name = "a", .data = big}, {.name = "b", .data = "two"}});
    EXPECT_TRUE(verify(image));
    image[image.size() - 3 - 2] = 'y';
    EXPECT_EQ(verify(image).error(), "fails its CRC check on a");
}

TEST_F(CPodFileVerifyTest, APod1IsCheckedByItsWholeFileCrc) {
    const std::string image =
        withStoredCrc(makePod1("", {{.name = "a", .data = "one"}}), kPod1CrcStart);
    EXPECT_TRUE(verify(image));
    std::string changed = image;
    changed.back() = 'x';
    EXPECT_EQ(verify(changed).error(), "fails its CRC check");
}

// tground.pod, the one POD1 that ships, stores 0, which the original's check failed.
TEST_F(CPodFileVerifyTest, APod1StoringNoCrcPasses) {
    EXPECT_TRUE(verify(makePod1("", {{.name = "a", .data = "one"}})));
}

TEST_F(CPodFileVerifyTest, NothingMountedIsntVerified) {
    EXPECT_EQ(pod_.verifyChecksum().error(), "isn't mounted");
}

TEST_F(CPodFileVerifyTest, APodGoneSinceItMountedCantBeVerified) {
    givenFile("ACT1.POD", makeSignedPod2({{.name = "a"}}));
    ASSERT_TRUE(pod_.mountFromFile("ACT1.POD"));
    ON_CALL(file_system_, openFile(std::string_view("/game/ACT1.POD"), platform::EFileMode::Read))
        .WillByDefault(::testing::ReturnNull());
    EXPECT_EQ(pod_.verifyChecksum().error(), "can't be opened");
}

TEST_F(CPodFileVerifyTest, APodCutShortSinceItMountedFails) {
    givenFile("OLD.POD", makePod1("", {{.name = "a", .data = "one"}}));
    ASSERT_TRUE(pod_.mountFromFile("OLD.POD"));
    givenFile("OLD.POD", "short");
    EXPECT_EQ(pod_.verifyChecksum().error(), "is cut short");
}

class CPodFileAuditTest : public CPodFileTest {
protected:
    // Two files, the later in the file the earlier by name, then the trail.
    void givenTrail(const std::vector<SPodImageAuditRecord> &records, std::int32_t audit_count) {
        std::string image = makePod2(
            "", {{.name = "zebra.wav", .data = "ZZ"}, {.name = "apple.wav", .data = "AAAA"}},
            audit_count);
        for (const SPodImageAuditRecord &record : records) {
            image += makeAuditRecord(record);
        }
        givenFile("ACT1.POD", image);
        ASSERT_TRUE(pod_.mountFromFile("ACT1.POD"));
    }
};

// The trail starts after the last file in the file, not the last by name.
TEST_F(CPodFileAuditTest, ReadsEachRecordOfTheTrail) {
    givenTrail({{.user_name = "jeffm",
                 .timestamp = 934387412,
                 .operation_type = 2,
                 .filename = "SOUND\\A2S2_SCAT01.WAV",
                 .original_timestamp = 934254606,
                 .original_file_size = 140540,
                 .new_timestamp = 934387330,
                 .new_file_size = 153316},
                {.user_name = "mark", .operation_type = 1, .filename = "OLD.WAV"}},
               2);
    EXPECT_EQ(pod_.getAuditCount(), 2);
    const std::optional<CPodAuditRecord> change = pod_.getAuditRecord(0);
    ASSERT_TRUE(change);
    EXPECT_EQ(change->user_name, "jeffm");
    EXPECT_EQ(change->timestamp, 934387412);
    EXPECT_EQ(change->operation_type, EPodAuditOperation::POD_AUDIT_OPERATION_CHANGE);
    EXPECT_EQ(change->filename, "SOUND\\A2S2_SCAT01.WAV");
    EXPECT_EQ(change->original_timestamp, 934254606);
    EXPECT_EQ(change->original_file_size, 140540U);
    EXPECT_EQ(change->new_timestamp, 934387330);
    EXPECT_EQ(change->new_file_size, 153316U);
    const std::optional<CPodAuditRecord> removal = pod_.getAuditRecord(1);
    ASSERT_TRUE(removal);
    EXPECT_EQ(removal->user_name, "mark");
    EXPECT_EQ(removal->operation_type, EPodAuditOperation::POD_AUDIT_OPERATION_REMOVE);
    EXPECT_EQ(removal->filename, "OLD.WAV");
}

// The original quit with "CPodFile::getAuditRecord - invalid index.  Pod not mounted?".
TEST_F(CPodFileAuditTest, AnIndexOutsideTheTrailHasNoRecord) {
    givenTrail({{.user_name = "jeffm"}}, 1);
    EXPECT_EQ(pod_.getAuditRecord(-1), std::nullopt);
    EXPECT_EQ(pod_.getAuditRecord(1), std::nullopt);
}

// The original quit with "CPodFile::getAuditRecord - error reading".
TEST_F(CPodFileAuditTest, ARecordTheFileCutsShortIsntRead) {
    givenTrail({{.user_name = "jeffm"}}, 2);
    EXPECT_TRUE(pod_.getAuditRecord(0));
    EXPECT_EQ(pod_.getAuditRecord(1), std::nullopt);
}

// The builder writes only 0 to 2; the original handed back whatever the record held.
TEST_F(CPodFileAuditTest, ARecordWithAnOperationTheBuilderNeverWritesIsntRead) {
    givenTrail({{.user_name = "a", .operation_type = -1},
                {.user_name = "b", .operation_type = 3},
                {.user_name = "c", .operation_type = 0}},
               3);
    EXPECT_EQ(pod_.getAuditRecord(0), std::nullopt);
    EXPECT_EQ(pod_.getAuditRecord(1), std::nullopt);
    const std::optional<CPodAuditRecord> add = pod_.getAuditRecord(2);
    ASSERT_TRUE(add);
    EXPECT_EQ(add->operation_type, EPodAuditOperation::POD_AUDIT_OPERATION_ADD);
}

// The original quit with "CPodFile::getAuditRecord - can't open".
TEST_F(CPodFileAuditTest, APodGoneSinceItMountedHasNoRecords) {
    givenTrail({{.user_name = "jeffm"}}, 1);
    ON_CALL(file_system_, openFile(std::string_view("/game/ACT1.POD"), platform::EFileMode::Read))
        .WillByDefault(::testing::ReturnNull());
    EXPECT_EQ(pod_.getAuditRecord(0), std::nullopt);
}

TEST_F(CPodFileAuditTest, APod1HasNoTrail) {
    givenFile("OLD.POD", makePod1("", {{.name = "a", .data = "one"}}));
    ASSERT_TRUE(pod_.mountFromFile("OLD.POD"));
    EXPECT_EQ(pod_.getAuditCount(), 0);
    EXPECT_EQ(pod_.getAuditRecord(0), std::nullopt);
}

} // namespace
} // namespace nocturne::engine
