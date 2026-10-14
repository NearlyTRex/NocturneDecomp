#pragma once

#include "engine/console/console.h"
#include "sound/sndmain/sndmain.h"
#include "tests/mocks/engine/podfixture.h"
#include "tests/mocks/platform/mockaudiodevice.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <ctime>
#include <optional>
#include <string>
#include <vector>

namespace nocturne::sound {

// A sound system over a sound directory the test fills, on an output device that opens.
class CSndMainFixture : public engine::CPodFixture {
protected:
    CSndMainFixture() {
        ON_CALL(audio_device_, getDriverName).WillByDefault(::testing::Return("pipewire"));
        ON_CALL(audio_device_, getDeviceNames)
            .WillByDefault(::testing::Return(std::vector<std::string>{"Speakers", "Headphones"}));
        ON_CALL(audio_device_, open).WillByDefault(::testing::Return(true));
    }

    static std::tm getLocalTime() {
        std::tm time{};
        time.tm_year = 99;
        time.tm_mon = 9;
        time.tm_mday = 3;
        time.tm_hour = 7;
        time.tm_min = 5;
        time.tm_sec = 9;
        return time;
    }

    // What CSound's constructor sets, then the output running on the default device.
    void startOutput() {
        sound_.resetSoundSystemDefaults();
        sound_.initializeSoundDevice();
        ASSERT_TRUE(sound_.enableSoundSystem());
    }

    // The info, failing the test when there is none.
    static CSampleInfo expectInfo(const std::optional<CSampleInfo> &info) {
        EXPECT_TRUE(info.has_value());
        return info.value_or(CSampleInfo{});
    }

    void givenSound(const std::string &name, const std::string &contents) {
        givenFile("sound\\" + name, contents);
    }

    // Mixes frame_count frames, interleaved.
    std::vector<float> mix(std::size_t frame_count) {
        std::vector<float> frames(frame_count *
                                  static_cast<std::size_t>(sound_.getAudioChannelCount()));
        sound_.readFrames(frames);
        return frames;
    }

    ::testing::NiceMock<platform::MockAudioDevice> audio_device_;
    engine::CConsole console_{file_system_, 80, 50, 0, 0};
    CSndMain sound_{dosio_, file_system_, audio_device_, console_, &getLocalTime};
};

} // namespace nocturne::sound
