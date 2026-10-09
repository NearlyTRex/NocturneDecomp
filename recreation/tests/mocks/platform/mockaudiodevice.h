#pragma once

#include "platform/audiodevice.h"

#include <gmock/gmock.h>

namespace nocturne::platform {

class MockAudioDevice : public IAudioDevice {
public:
    MOCK_METHOD(std::vector<std::string>, getDeviceNames, (), (override));
    MOCK_METHOD(bool, open,
                (std::size_t device_index, const SAudioFormat &format, IAudioSource &source),
                (override));
    MOCK_METHOD(void, close, (), (override));
};

class MockAudioSource : public IAudioSource {
public:
    MOCK_METHOD(void, readFrames, (std::span<float> frames), (override));
};

} // namespace nocturne::platform
