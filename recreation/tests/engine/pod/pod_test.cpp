#include "common/error/fatalerror.h"
#include "engine/pod/pod.h"
#include "engine/pod/podfile.h"
#include "tests/mocks/engine/podfixture.h"
#include "tests/mocks/engine/podimage.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>
#include <type_traits>
#include <vector>

namespace nocturne::engine {
namespace {

using ::testing::ElementsAre;

TEST(CPod, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CPod>);
}

class CPodTest : public CPodFixture {
protected:
    CPodTest() {
        givenFile("ACT1.POD", makePod2("", {{.name = "door.wav", .data = "ONE"},
                                            {.name = "sky.raw", .data = "SKY"}}));
        givenFile("ACT2.POD", makePod2("", {{.name = "DOOR.WAV", .data = "TWO!"},
                                            {.name = "rain.wav", .data = "RAIN"}}));
    }

    std::vector<std::string> mounted() const {
        std::vector<std::string> names;
        for (const auto &pod : pod_.getPodFiles()) {
            names.push_back(pod->getFilename());
        }
        return names;
    }

    CPod pod_{file_system_, dosio_};
};

// What a game's pod set adds to the base: a load that can be counted.
class CCountingPod : public CPod {
public:
    using CPod::CPod;
    void load() override {
        ++loads;
    }
    int loads = 0;
};

TEST_F(CPodTest, TheBaseLoadsNothing) {
    pod_.init();
    EXPECT_TRUE(pod_.getPodFiles().empty());
}

TEST_F(CPodTest, InitLoadsOnlyWhileNothingIsMounted) {
    CCountingPod pod(file_system_, dosio_);
    pod.init();
    EXPECT_EQ(pod.loads, 1);
    pod.mount("ACT1.POD");
    pod.init();
    EXPECT_EQ(pod.loads, 1);
}

TEST_F(CPodTest, MountsInOrder) {
    pod_.mount("ACT1.POD");
    pod_.mount("ACT2.POD");
    EXPECT_THAT(mounted(), ElementsAre("/game/ACT1.POD", "/game/ACT2.POD"));
}

TEST_F(CPodTest, APodThatWontMountIsFatal) {
    EXPECT_THAT([this] { pod_.mount("GONE.POD"); }, ::testing::ThrowsMessage<common::CFatalError>(
                                                        ::testing::StrEq("Can't mount GONE.POD")));
}

TEST_F(CPodTest, AHundredAndFirstPodIsFatal) {
    for (std::size_t i = 0; i < CPod::kMaxPods; ++i) {
        pod_.mount("ACT1.POD");
    }
    EXPECT_THAT([this] { pod_.mount("ACT1.POD"); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("Too many .POD files at once!")));
}

TEST_F(CPodTest, TheFirstPodHoldingANameAnswersForIt) {
    pod_.mount("ACT2.POD");
    pod_.mount("ACT1.POD");
    SFoundFileInfo door("Door.Wav");
    ASSERT_TRUE(pod_.findFile(door));
    EXPECT_EQ(door.target_path, "/game/ACT2.POD");
    EXPECT_EQ(door.file_size, 4);
    SFoundFileInfo sky("sky.raw");
    ASSERT_TRUE(pod_.findFile(sky));
    EXPECT_EQ(sky.target_path, "/game/ACT1.POD");
    SFoundFileInfo missing("missing");
    EXPECT_FALSE(pod_.findFile(missing));
}

TEST_F(CPodTest, DismountRemovesEveryPodFromTheFileAndCallsTheHandler) {
    int handled = 0;
    pod_.setDismountHandler([&handled] { ++handled; });
    pod_.mount("ACT1.POD");
    pod_.mount("ACT2.POD");
    pod_.mount("ACT1.POD");
    // The disk lookup can give the name in another case than the mount did.
    givenFile("act1.pod", "");
    pod_.dismount("act1.pod");
    EXPECT_THAT(mounted(), ElementsAre("/game/ACT2.POD"));
    EXPECT_EQ(handled, 1);
}

// The retail build cleared the texture cache for any file it found, mounted or not.
TEST_F(CPodTest, DismountOfAnUnmountedFileStillCallsTheHandler) {
    int handled = 0;
    pod_.setDismountHandler([&handled] { ++handled; });
    pod_.mount("ACT2.POD");
    pod_.dismount("ACT1.POD");
    EXPECT_THAT(mounted(), ElementsAre("/game/ACT2.POD"));
    EXPECT_EQ(handled, 1);
}

TEST_F(CPodTest, DismountOfAMissingFileDoesNothing) {
    int handled = 0;
    pod_.setDismountHandler([&handled] { ++handled; });
    pod_.mount("ACT1.POD");
    pod_.dismount("GONE.POD");
    EXPECT_THAT(mounted(), ElementsAre("/game/ACT1.POD"));
    EXPECT_EQ(handled, 0);
}

TEST_F(CPodTest, DismountWithoutAHandlerJustRemoves) {
    pod_.mount("ACT1.POD");
    pod_.dismount("ACT1.POD");
    EXPECT_TRUE(pod_.getPodFiles().empty());
}

TEST_F(CPodTest, RemountRereadsEachPod) {
    pod_.mount("ACT1.POD");
    givenFile("ACT1.POD", makePod2("", {{.name = "new.wav"}}));
    pod_.remount();
    SFoundFileInfo info("new.wav");
    EXPECT_TRUE(pod_.findFile(info));
}

TEST_F(CPodTest, APodThatWontRemountIsFatal) {
    pod_.mount("ACT1.POD");
    ON_CALL(file_system_, openFile).WillByDefault(::testing::ReturnNull());
    EXPECT_THAT([this] { pod_.remount(); }, ::testing::ThrowsMessage<common::CFatalError>(
                                                ::testing::StrEq("Can't re-mount /game/ACT1.POD")));
}

TEST_F(CPodTest, CleanupUnmountsEverything) {
    pod_.mount("ACT1.POD");
    pod_.cleanup();
    EXPECT_TRUE(pod_.getPodFiles().empty());
}

TEST_F(CPodTest, ASearchWalksThePodsInOrderIgnoringCase) {
    pod_.mount("ACT1.POD");
    pod_.mount("ACT2.POD");
    CPodSearchContext search;
    pod_.initSearch("*.WAV", search);
    EXPECT_EQ(search.current_file_info.found_path, "door.wav");
    EXPECT_EQ(search.current_file_info.target_path, "/game/ACT1.POD");
    ASSERT_TRUE(pod_.getNextSearchResult(search));
    EXPECT_EQ(search.current_file_info.found_path, "DOOR.WAV");
    ASSERT_TRUE(pod_.getNextSearchResult(search));
    EXPECT_EQ(search.current_file_info.found_path, "rain.wav");
    EXPECT_FALSE(pod_.getNextSearchResult(search));
    EXPECT_EQ(search.current_file_info.found_path, "");
}

TEST_F(CPodTest, ASearchClampsNegativePositions) {
    pod_.mount("ACT1.POD");
    CPodSearchContext search;
    search.search_pattern = "sky*";
    search.current_pod_index = -3;
    search.current_file_index = -1;
    ASSERT_TRUE(pod_.getNextSearchResult(search));
    EXPECT_EQ(search.current_file_info.found_path, "sky.raw");
}

TEST_F(CPodTest, LocateFileFindsThePodAndIndex) {
    givenFile("ART.POD", makePod2("", {{.name = "art\\a.raw"}, {.name = "art\\sky.raw"}}));
    pod_.mount("ACT1.POD");
    pod_.mount("ART.POD");
    int index = -1;
    const CPodFile *pod = pod_.locateFile("ART", "SKY.RAW", &index);
    ASSERT_NE(pod, nullptr);
    EXPECT_EQ(pod->getFilename(), "/game/ART.POD");
    EXPECT_EQ(index, 1);
    EXPECT_EQ(pod_.locateFile("", "sky.raw"), pod_.getPodFiles()[0].get());
    EXPECT_EQ(pod_.locateFile("", "missing"), nullptr);
}

} // namespace
} // namespace nocturne::engine
