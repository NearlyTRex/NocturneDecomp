#include "core/podmain/demonpod.h"
#include "engine/pod/podfile.h"
#include "tests/mocks/engine/podfixture.h"
#include "tests/mocks/engine/podimage.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>
#include <type_traits>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::ElementsAre;
using ::testing::IsEmpty;
using ::testing::Return;

TEST(CDemonPod, DerivesFromCPod) {
    static_assert(std::is_base_of_v<engine::CPod, CDemonPod>);
}

class CDemonPodTest : public engine::CPodFixture {
protected:
    CDemonPodTest() {
        for (const char *name : {"ACT1.POD", "ACT2.POD", "COMMON.POD"}) {
            givenFile(name, engine::makePod2("", {{.name = "x"}}));
        }
    }

    void givenPodIni(const std::string &text) {
        EXPECT_CALL(file_system_, readFile(std::string_view("pod.ini"))).WillOnce(Return(text));
    }

    std::vector<std::string> mounted() const {
        std::vector<std::string> names;
        for (const auto &pod : pod_.getPodFiles()) {
            names.push_back(pod->getFilename());
        }
        return names;
    }

    CDemonPod pod_{file_system_, dosio_};
};

TEST_F(CDemonPodTest, PodIniListsThePodsInMountOrder) {
    givenPodIni("2\r\nCOMMON.POD\r\nACT1.POD\r\n");
    pod_.load();
    EXPECT_THAT(mounted(), ElementsAre("/game/COMMON.POD", "/game/ACT1.POD"));
}

TEST_F(CDemonPodTest, OnlyTheCountedNamesAreMounted) {
    givenPodIni("1\nACT2.POD\nACT1.POD\n");
    pod_.load();
    EXPECT_THAT(mounted(), ElementsAre("/game/ACT2.POD"));
}

// The original mounted its last name again for each one the list was short of.
TEST_F(CDemonPodTest, AListShortOfItsCountMountsWhatItHas) {
    givenPodIni("3\nACT1.POD");
    pod_.load();
    EXPECT_THAT(mounted(), ElementsAre("/game/ACT1.POD"));
}

TEST_F(CDemonPodTest, APodIniWithoutACountMountsNothing) {
    givenPodIni("ACT1.POD\n");
    pod_.load();
    EXPECT_THAT(mounted(), IsEmpty());
}

TEST_F(CDemonPodTest, WithoutPodIniEveryPodInTheDirectoryIsMounted) {
    EXPECT_CALL(file_system_, readFile(std::string_view("pod.ini"))).WillOnce(Return(std::nullopt));
    EXPECT_CALL(file_system_, findFiles(std::string_view("*.pod")))
        .WillOnce(
            Return(std::vector<platform::SFileInfo>{{.name = "ACT1.POD"}, {.name = "ACT2.POD"}}));
    pod_.load();
    EXPECT_THAT(mounted(), ElementsAre("/game/ACT1.POD", "/game/ACT2.POD"));
}

TEST_F(CDemonPodTest, WithNoPodsAtAllNothingIsMounted) {
    EXPECT_CALL(file_system_, readFile(std::string_view("pod.ini"))).WillOnce(Return(std::nullopt));
    EXPECT_CALL(file_system_, findFiles(std::string_view("*.pod")))
        .WillOnce(Return(std::vector<platform::SFileInfo>{}));
    pod_.load();
    EXPECT_THAT(mounted(), IsEmpty());
}

} // namespace
} // namespace nocturne::core
