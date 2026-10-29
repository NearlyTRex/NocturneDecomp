#include "common/video/framerate.h"

#include <gtest/gtest.h>

#include <cmath>
#include <optional>
#include <type_traits>
#include <vector>

namespace nocturne::common {
namespace {

TEST(CFrameRateMeter, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CFrameRateMeter::addFrame),
                                 std::optional<SFrameRateReport> (CFrameRateMeter::*)(double)>);
}

// Frames `step` apart from `from` until `to`, the times each report came at.
std::vector<double> reportTimes(CFrameRateMeter &meter, double from, double to, double step) {
    std::vector<double> times;
    const auto frames = static_cast<int>(std::lround((to - from) / step));
    for (int frame = 0; frame <= frames; ++frame) {
        const double now = from + (frame * step);
        if (meter.addFrame(now)) {
            times.push_back(now);
        }
    }
    return times;
}

TEST(CFrameRateMeter, TheFirstReportIsASecondAfterTheFirstFrame) {
    CFrameRateMeter meter;
    EXPECT_EQ(meter.addFrame(5.0), std::nullopt);
    EXPECT_EQ(meter.addFrame(5.5), std::nullopt);
    EXPECT_EQ(meter.addFrame(5.75), std::nullopt);
    const std::optional<SFrameRateReport> report = meter.addFrame(6.0);
    ASSERT_TRUE(report);
    EXPECT_EQ(
        *report,
        (SFrameRateReport{
            .frames = 3, .seconds = 1.0, .frames_per_second = 3.0, .slowest_frame_seconds = 0.5}));
}

// A steady rate is reported a second, then two, four and so on apart, never more than a minute.
TEST(CFrameRateMeter, ASteadyRateIsReportedLessAndLessOften) {
    CFrameRateMeter meter;
    const std::vector<double> times = reportTimes(meter, 0.0, 250.0, 0.25);
    EXPECT_EQ(times, (std::vector<double>{1.0, 3.0, 7.0, 15.0, 31.0, 63.0, 123.0, 183.0, 243.0}));
}

// A rate a fifth away from the last report's starts the intervals again.
TEST(CFrameRateMeter, ARateThatMovesIsReportedASecondLater) {
    CFrameRateMeter meter;
    EXPECT_EQ(reportTimes(meter, 0.0, 7.0, 0.25), (std::vector<double>{1.0, 3.0, 7.0}));
    EXPECT_EQ(reportTimes(meter, 7.5, 16.0, 0.5), (std::vector<double>{15.0, 16.0}));
}

// Four frames a second, then three and a third: the next report is eight seconds on, not one.
TEST(CFrameRateMeter, AChangeWithinAFifthKeepsTheIntervalGrowing) {
    CFrameRateMeter meter;
    EXPECT_EQ(reportTimes(meter, 0.0, 3.0, 0.25), (std::vector<double>{1.0, 3.0}));
    EXPECT_EQ(reportTimes(meter, 3.3, 7.5, 0.3).size(), 1U);
    EXPECT_TRUE(reportTimes(meter, 7.8, 15.0, 0.3).empty());
}

} // namespace
} // namespace nocturne::common
