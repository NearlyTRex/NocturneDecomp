#include "common/error/fatalerror.h"
#include "engine/package/basemanifest.h"
#include "engine/package/packagedata.h"
#include "tests/mocks/engine/packagefiles.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <optional>
#include <string>
#include <vector>

namespace nocturne::engine {
namespace {

using ::testing::Return;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

// Two releases sharing A.POD: the English one with B.pod, the German one with C.POD.
class CBaseManifestTest : public ::testing::Test {
protected:
    // From the install folder's PODs, or those given.
    [[nodiscard]] SBaseManifest make(std::optional<std::vector<std::string>> installed = {}) {
        if (!installed) {
            installed.emplace();
            for (const platform::SFileInfo &file : files_.file_system_.findFiles("*.pod")) {
                installed->push_back(file.name);
            }
        }
        return makeBaseManifest(files_.file_system_, *installed, releases_);
    }

    static SPackagePod recorded(const std::string &path, std::string_view hash) {
        return {.path = path,
                .size = 7,
                .modified = CPackageFiles::kModified,
                .xxh3 = std::string(hash)};
    }

    CPackageFiles files_;

    static SPackagePod absent(const std::string &path) {
        return {.path = path, .size = {}, .modified = {}, .xxh3 = {}};
    }

    std::vector<SRelease> releases_{
        {.id = "1999-en",
         .name = "English",
         .game = "nocturne",
         .required = {"A.POD"},
         .pods = {{.name = "A.POD", .size = 7, .xxh3 = std::string(kHashOfPodOne)},
                  {.name = "B.pod", .size = 7, .xxh3 = std::string(kHashOfPodTwo)}},
         .content = {.title = {},
                     .front_end = "nocturne",
                     .loading_indicator = {},
                     .copyright = {},
                     .copyright_os_font = {},
                     .credits = {},
                     .menu = {},
                     .loading = {},
                     .stories = {},
                     .translations = {}}},
        {.id = "1999-de",
         .name = "German",
         .game = "nocturne",
         .required = {},
         .pods = {{.name = "A.POD", .size = 7, .xxh3 = std::string(kHashOfPodOne)},
                  {.name = "C.POD", .size = 7, .xxh3 = std::string(kHashOfPodTwo)}},
         .content = {}}};
};

// The retail build mounts by name ignoring case, the first answering; the manifest's last
// answers first. Each is named as on disk.
TEST_F(CBaseManifestTest, TheReleasesPodsAreRecordedLastMountedFirst) {
    files_.givenFile("A.POD", "POD one");
    files_.givenFile("b.POD", "POD two");
    const SBaseManifest base = make();
    EXPECT_EQ(base.manifest.id, "nocturne");
    EXPECT_EQ(base.manifest.name, "English");
    EXPECT_EQ(base.manifest.release, "1999-en");
    EXPECT_EQ(base.manifest.required, std::vector<std::string>{"A.POD"});
    EXPECT_EQ(base.manifest.pods, (std::vector<SPackagePod>{recorded("b.POD", kHashOfPodTwo),
                                                            recorded("A.POD", kHashOfPodOne)}));
    EXPECT_TRUE(base.notes.empty());
}

// Each is taken where it is first found, required ones included.
TEST_F(CBaseManifestTest, ThePodsCanBeInAnyFolder) {
    files_.givenFile("pods/A.POD", "POD one");
    files_.givenFile("pods/b.POD", "POD two");
    files_.givenFile("more/A.POD", "POD one");
    const SBaseManifest base =
        make(std::vector<std::string>{"pods/A.POD", "more/A.POD", "pods/b.POD"});
    EXPECT_EQ(base.manifest.pods,
              (std::vector<SPackagePod>{recorded("pods/b.POD", kHashOfPodTwo),
                                        recorded("pods/A.POD", kHashOfPodOne)}));
    EXPECT_EQ(base.manifest.required, std::vector<std::string>{"pods/A.POD"});
    EXPECT_TRUE(base.notes.empty());
}

// A required POD that isn't there keeps its name, so its absence is reported by it.
TEST_F(CBaseManifestTest, AMissingRequiredPodKeepsItsName) {
    files_.givenFile("B.pod", "POD two");
    EXPECT_EQ(make().manifest.required, std::vector<std::string>{"A.POD"});
}

TEST_F(CBaseManifestTest, TheReleaseMatchedIsTheOneWithTheMostPodsThere) {
    files_.givenFile("A.POD", "POD one");
    files_.givenFile("C.POD", "POD two");
    EXPECT_EQ(make().manifest.name, "German");
}

TEST_F(CBaseManifestTest, ATieGoesToTheReleaseListedFirst) {
    files_.givenFile("A.POD", "POD one");
    EXPECT_EQ(make().manifest.name, "English");
}

// Only what the release shipped is the base game's.
TEST_F(CBaseManifestTest, APodTheReleaseDidntShipIsLeftOut) {
    files_.givenFile("A.POD", "POD one");
    files_.givenFile("B.pod", "POD two");
    files_.givenFile("MYMOD.POD", "POD two");
    EXPECT_EQ(make().manifest.pods.size(), 2U);
}

TEST_F(CBaseManifestTest, AMissingPodIsListedWithNothingRecordedAndNoted) {
    files_.givenFile("A.POD", "POD one");
    const SBaseManifest base = make();
    EXPECT_EQ(base.manifest.pods,
              (std::vector<SPackagePod>{absent("B.pod"), recorded("A.POD", kHashOfPodOne)}));
    EXPECT_EQ(base.notes, std::vector<std::string>{"B.pod is missing"});
}

TEST_F(CBaseManifestTest, APodThatCantBeReadIsNoted) {
    files_.givenFile("A.POD", "POD one");
    files_.givenUnreadableFile("B.pod", 7);
    const SBaseManifest base = make();
    EXPECT_EQ(base.manifest.pods.front(), absent("B.pod"));
    EXPECT_EQ(base.notes, std::vector<std::string>{"B.pod can't be read"});
}

TEST_F(CBaseManifestTest, APodThatCantBeDescribedIsNoted) {
    files_.givenFile("A.POD", "POD one");
    files_.givenFile("B.pod", "POD two");
    ON_CALL(files_.file_system_, getFileInfo(std::string_view("B.pod")))
        .WillByDefault(Return(std::nullopt));
    EXPECT_EQ(make().notes, std::vector<std::string>{"B.pod can't be read"});
}

// What is there is recorded, and it is noted that it isn't the release's.
TEST_F(CBaseManifestTest, APodThatIsntTheReleasesCopyIsNoted) {
    files_.givenFile("A.POD", "POD one");
    files_.givenFile("B.pod", "POD one");
    files_.givenFile("C.POD", "POD!");
    const SBaseManifest base = make();
    EXPECT_EQ(base.manifest.pods.front(), recorded("B.pod", kHashOfPodOne));
    EXPECT_EQ(base.notes, std::vector<std::string>{"B.pod isn't the copy English shipped"});
    releases_.front().pods[1].xxh3 = std::string(kHashOfPodOne);
    releases_.front().pods[1].size = 8;
    EXPECT_EQ(make().notes, std::vector<std::string>{"B.pod isn't the copy English shipped"});
}

TEST_F(CBaseManifestTest, WithNoKnownReleaseTheInstallCantBeRecognised) {
    releases_.clear();
    EXPECT_THAT([this] { static_cast<void>(make()); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("No known release of Nocturne to recognise the install by")));
}

} // namespace
} // namespace nocturne::engine
