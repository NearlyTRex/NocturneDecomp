#include "common/serial/binarywriter.h"
#include "engine/dosio/foundfileinfo.h"
#include "engine/pod/podfile.h"
#include "tests/mocks/engine/podfixture.h"
#include "tests/mocks/engine/podimage.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>
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

} // namespace
} // namespace nocturne::engine
