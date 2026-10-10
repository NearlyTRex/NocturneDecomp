#pragma once

#include "platform/audiodevice.h"

#include <gmock/gmock.h>

namespace nocturne::platform {

class MockAudioDevice : public IAudioDevice {
public:
    MOCK_METHOD(std::string, getDriverName, (), (override));
    MOCK_METHOD(std::vector<std::string>, getDeviceNames, (), (override));
    MOCK_METHOD(bool, open,
                (std::string_view device_name, const SAudioFormat &format, IAudioSource &source),
                (override));
    MOCK_METHOD(void, setPaused, (bool paused), (override));
    MOCK_METHOD(void, close, (), (override));
};

class MockAudioSource : public IAudioSource {
public:
    MOCK_METHOD(void, readFrames, (std::span<float> frames), (override));
};

} // namespace nocturne::platform
