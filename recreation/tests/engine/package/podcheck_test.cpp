#include "engine/package/packagedata.h"
#include "engine/package/podcheck.h"
#include "tests/mocks/engine/packagefiles.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>
#include <vector>

namespace nocturne::engine {
namespace {

using ::testing::_;

// A package whose one POD was recorded as "POD one" at the fixture's time.
class CPodCheckTest : public ::testing::Test {
protected:
    [[nodiscard]] EPodState check(std::string_view folder = "") {
        const std::vector<SPodCheck> checks =
            checkPackagePods(files_.file_system_, folder, manifest_);
        EXPECT_EQ(checks.size(), 1U);
        EXPECT_EQ(checks.front().path, "A.POD");
        return checks.front().state;
    }

    CPackageFiles files_;
    SPackageManifest manifest_{.id = "a",
                               .name = "A",
                               .version = {},
                               .release = {},
                               .dependencies = {},
                               .required = {},
                               .pods = {{.path = "A.POD",
                                         .size = 7,
                                         .modified = CPackageFiles::kModified,
                                         .xxh3 = std::string(kHashOfPodOne)}}};
};

TEST_F(CPodCheckTest, APodAsRecordedIsntHashedAgain) {
    files_.givenFile("A.POD", "POD one");
    EXPECT_CALL(files_.file_system_, openFile).Times(0);
    EXPECT_EQ(check(), EPodState::Unchanged);
}

TEST_F(CPodCheckTest, APodWithNoHashRecordedIsOnlyLookedFor) {
    files_.givenFile("A.POD", "anything at all");
    manifest_.pods.front().xxh3.reset();
    EXPECT_CALL(files_.file_system_, openFile).Times(0);
    EXPECT_EQ(check(), EPodState::Unchanged);
}

TEST_F(CPodCheckTest, AMissingPodIsReported) {
    EXPECT_EQ(check(), EPodState::Missing);
}

// A copy keeps its bytes but takes a new time; the manifest takes it too, so it isn't hashed on
// the next start.
TEST_F(CPodCheckTest, APodWhoseTimeMovedButNotItsBytesIsRehashedAndRecorded) {
    files_.givenFile("A.POD", "POD one", CPackageFiles::kModified + 60);
    EXPECT_EQ(check(), EPodState::Rehashed);
    EXPECT_EQ(manifest_.pods.front().modified, CPackageFiles::kModified + 60);
    EXPECT_CALL(files_.file_system_, openFile).Times(0);
    EXPECT_EQ(check(), EPodState::Unchanged);
}

// It stays reported on each start until the manifest is written again.
TEST_F(CPodCheckTest, APodWhoseBytesChangedIsReportedAndLeftRecordedAsItWas) {
    files_.givenFile("A.POD", "POD two", CPackageFiles::kModified + 60);
    EXPECT_EQ(check(), EPodState::Changed);
    EXPECT_EQ(manifest_.pods.front().xxh3, std::string(kHashOfPodOne));
    EXPECT_EQ(check(), EPodState::Changed);
}

TEST_F(CPodCheckTest, APodThatCantBeReadIsReported) {
    files_.givenUnreadableFile("A.POD", 8);
    EXPECT_EQ(check(), EPodState::Unreadable);
}

TEST_F(CPodCheckTest, APackagesPodsAreFoundInItsFolder) {
    files_.givenFile("mods/extra/A.POD", "POD one");
    EXPECT_CALL(files_.file_system_, getFileInfo(_)).Times(0);
    EXPECT_CALL(files_.file_system_, getFileInfo(std::string_view("mods/extra/A.POD")));
    EXPECT_EQ(check("mods/extra"), EPodState::Unchanged);
}

} // namespace
} // namespace nocturne::engine
