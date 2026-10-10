#include "common/video/presentation.h"

#include <gtest/gtest.h>

namespace nocturne::common {
namespace {

constexpr SExtent k640x480{.width = 640, .height = 480};

SPresentation windowed(SExtent window, SExtent logical) {
    return {.window = window, .drawable = window, .logical = logical};
}

TEST(Presentation, ExactFitFillsTheDrawable) {
    EXPECT_EQ(fitViewport(k640x480, k640x480),
              (SViewport{.x = 0, .y = 0, .width = 640, .height = 480}));
}

TEST(Presentation, WideDrawablePillarboxes) {
    EXPECT_EQ(fitViewport({.width = 1920, .height = 1080}, k640x480),
              (SViewport{.x = 240, .y = 0, .width = 1440, .height = 1080}));
}

TEST(Presentation, TallDrawableLetterboxes) {
    EXPECT_EQ(fitViewport({.width = 640, .height = 800}, k640x480),
              (SViewport{.x = 0, .y = 160, .width = 640, .height = 480}));
}

TEST(Presentation, SmallerDrawableShrinksTheWholeFrame) {
    EXPECT_EQ(fitViewport({.width = 512, .height = 384}, k640x480),
              (SViewport{.x = 0, .y = 0, .width = 512, .height = 384}));
}

TEST(Presentation, FitIsNeverEmpty) {
    const SViewport viewport = fitViewport({.width = 1, .height = 1}, {.width = 1600, .height = 1});
    EXPECT_EQ(viewport.width, 1);
    EXPECT_EQ(viewport.height, 1);
}

TEST(Presentation, EmptyExtentsFillTheDrawable) {
    EXPECT_EQ(fitViewport({.width = 800, .height = 600}, {}),
              (SViewport{.x = 0, .y = 0, .width = 800, .height = 600}));
    EXPECT_EQ(fitViewport({.width = 800, .height = 600}, {.width = 640, .height = 0}),
              (SViewport{.x = 0, .y = 0, .width = 800, .height = 600}));
    EXPECT_EQ(fitViewport({}, k640x480), SViewport{});
    EXPECT_EQ(fitViewport({.width = 800, .height = 0}, k640x480),
              (SViewport{.x = 0, .y = 0, .width = 800, .height = 0}));
}

TEST(Presentation, WholeMultipleKeepsNearestSampling) {
    EXPECT_TRUE(isWholeMultiple({.x = 0, .y = 0, .width = 1280, .height = 960}, k640x480));
    EXPECT_FALSE(isWholeMultiple({.x = 0, .y = 0, .width = 1440, .height = 1080}, k640x480));
    EXPECT_FALSE(isWholeMultiple({.x = 0, .y = 0, .width = 640, .height = 480}, {}));
}

TEST(Presentation, MapsWindowPointsThroughThePillarbox) {
    const SPresentation presentation = windowed({.width = 1920, .height = 1080}, k640x480);
    EXPECT_EQ(windowToLogical(presentation, {.x = 240, .y = 0}), (SPoint{.x = 0, .y = 0}));
    EXPECT_EQ(windowToLogical(presentation, {.x = 960, .y = 540}), (SPoint{.x = 320, .y = 240}));
    EXPECT_EQ(windowToLogical(presentation, {.x = 1679, .y = 1079}), (SPoint{.x = 639, .y = 479}));
}

TEST(Presentation, ClampsPointsOnTheBarsToTheEdge) {
    const SPresentation presentation = windowed({.width = 1920, .height = 1080}, k640x480);
    EXPECT_EQ(windowToLogical(presentation, {.x = 10, .y = 500}), (SPoint{.x = 0, .y = 222}));
    EXPECT_EQ(windowToLogical(presentation, {.x = 1900, .y = 500}), (SPoint{.x = 639, .y = 222}));
    EXPECT_EQ(windowToLogical(windowed({.width = 640, .height = 800}, k640x480), {.x = 5, .y = 10}),
              (SPoint{.x = 5, .y = 0}));
}

TEST(Presentation, HighDensityDrawableScalesWindowUnits) {
    const SPresentation presentation{.window = {.width = 640, .height = 480},
                                     .drawable = {.width = 1280, .height = 960},
                                     .logical = k640x480};
    EXPECT_EQ(windowToLogical(presentation, {.x = 100, .y = 50}), (SPoint{.x = 100, .y = 50}));
    EXPECT_EQ(logicalToWindow(presentation, {.x = 100, .y = 50}), (SPoint{.x = 100, .y = 50}));
}

TEST(Presentation, WithoutAModeTheDrawableIsTheLogicalSpace) {
    const SPresentation presentation{.window = {.width = 400, .height = 300},
                                     .drawable = {.width = 800, .height = 600},
                                     .logical = {}};
    EXPECT_EQ(windowToLogical(presentation, {.x = 100, .y = 100}), (SPoint{.x = 200, .y = 200}));
}

TEST(Presentation, UnsizedWindowPassesPointsThrough) {
    const SPresentation no_window{.window = {}, .drawable = k640x480, .logical = k640x480};
    const SPresentation no_drawable{.window = k640x480, .drawable = {}, .logical = k640x480};
    EXPECT_EQ(windowToLogical(no_window, {.x = 7, .y = 9}), (SPoint{.x = 7, .y = 9}));
    EXPECT_EQ(windowToLogical(no_drawable, {.x = 7, .y = 9}), (SPoint{.x = 7, .y = 9}));
    EXPECT_EQ(logicalToWindow(no_window, {.x = 7, .y = 9}), (SPoint{.x = 7, .y = 9}));
}

TEST(Presentation, WarpLandsInsideThePixelItAims) {
    const SPresentation presentation = windowed({.width = 1920, .height = 1080}, k640x480);
    EXPECT_EQ(logicalToWindow(presentation, {.x = 0, .y = 0}), (SPoint{.x = 241, .y = 1}));
    EXPECT_EQ(logicalToWindow(presentation, {.x = 320, .y = 240}), (SPoint{.x = 961, .y = 541}));
}

TEST(Presentation, WarpThenMouseReturnsTheSamePixel) {
    const SPresentation presentation = windowed({.width = 1000, .height = 700}, k640x480);
    for (const SPoint point : {SPoint{.x = 0, .y = 0}, SPoint{.x = 320, .y = 240},
                               SPoint{.x = 639, .y = 479}, SPoint{.x = 17, .y = 401}}) {
        EXPECT_EQ(windowToLogical(presentation, logicalToWindow(presentation, point)), point);
    }
}

} // namespace
} // namespace nocturne::common
