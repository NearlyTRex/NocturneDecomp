#pragma once

#include "platform/externalrendererbridge.h"
#include "platform/gl/glrenderer.h"
#include "platform/gl/glvertexstream.h"
#include "tests/mocks/platform/glrecorder.h"
#include "tests/mocks/platform/mockglframepresenter.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstring>
#include <vector>

namespace nocturne::platform::gl {

// The engine state the bridge points at, at the values a plain draw sees.
struct SEngineState {
    int red_bit_position = -1;
    int red_scale_factor = -1;
    int red_dither_shift = -1;
    int green_bit_position = -1;
    int green_scale_factor = -1;
    int green_dither_shift = -1;
    int blue_bit_position = -1;
    int blue_scale_factor = -1;
    int blue_dither_shift = -1;
    int blend_mode = 0;
    int current_lighting = 0x1100;
    int current_alpha = 0xff;
    int console_text_color = 0;
    int texture_dimension = 0;
    int full_screen_quad_depth = 1;
    int system_initialized = 0;
    int processor_type = 1;
    int rendering_quality = 0;

    [[nodiscard]] CExternalRendererBridge makeBridge() {
        return {.red_bit_position = &red_bit_position,
                .red_scale_factor = &red_scale_factor,
                .red_dither_shift = &red_dither_shift,
                .green_bit_position = &green_bit_position,
                .green_scale_factor = &green_scale_factor,
                .green_dither_shift = &green_dither_shift,
                .blue_bit_position = &blue_bit_position,
                .blue_scale_factor = &blue_scale_factor,
                .blue_dither_shift = &blue_dither_shift,
                .blend_mode = &blend_mode,
                .current_lighting = &current_lighting,
                .current_alpha = &current_alpha,
                .console_text_color = &console_text_color,
                .texture_dimension = &texture_dimension,
                .full_screen_quad_depth = &full_screen_quad_depth,
                .system_initialized = &system_initialized,
                .processor_type = &processor_type,
                .rendering_quality = &rendering_quality};
    }
};

struct SRendererFixture {
    CGlRecorder gl;
    ::testing::NiceMock<MockGlFramePresenter> presenter;
    CGlRenderer renderer{gl.getApi(), presenter};
    SEngineState engine;
    std::vector<void *> scanlines = std::vector<void *>(1200);

    // Opens the device with the engine's bridge and sets a mode.
    void open(int width = 640, int height = 480, int bits_per_pixel = 16) {
        CExternalRendererBridge bridge = engine.makeBridge();
        ASSERT_EQ(renderer.init(&bridge), 1);
        ASSERT_EQ(renderer.setVideoMode2(width, height, bits_per_pixel, scanlines.data()), 1);
    }

    // Opens the device, sets a mode and begins a scene, ready to draw.
    void openScene(int width = 640, int height = 480) {
        open(width, height);
        ASSERT_EQ(renderer.beginScene(), 1);
        gl.clear();
    }
};

// Every vertex the stream sent, whether it grew its buffer or wrote into the orphaned one.
inline std::vector<SHardwareVertex> uploadedVertices(const CGlRecorder &gl) {
    std::vector<SHardwareVertex> vertices;
    for (const SGlCall &call : gl.getCalls()) {
        const bool upload = call.name == "BufferData" || call.name == "BufferSubData";
        if (!upload || call.args[0] != GL_ARRAY_BUFFER || call.data.empty()) {
            continue;
        }
        std::vector<SHardwareVertex> uploaded(call.data.size() / sizeof(SHardwareVertex));
        std::memcpy(uploaded.data(), call.data.data(), call.data.size());
        vertices.insert(vertices.end(), uploaded.begin(), uploaded.end());
    }
    return vertices;
}

inline std::vector<std::size_t> drawnIndexCounts(const CGlRecorder &gl) {
    std::vector<std::size_t> counts;
    for (const SGlCall &call : gl.getCalls("DrawElements")) {
        counts.push_back(static_cast<std::size_t>(call.args[1]));
    }
    return counts;
}

} // namespace nocturne::platform::gl
