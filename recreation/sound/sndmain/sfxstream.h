#pragma once

#include <miniaudio.h>
#include <string>

namespace nocturne::sound {

// A sound decoded as it plays from its file's bytes: what the original streamed through a ring
// buffer, MP3s and the largest WAVs.
class CSfxStream {
public:
    // Not open when the bytes are in no format the decoder reads.
    explicit CSfxStream(std::string bytes);
    ~CSfxStream();
    CSfxStream(const CSfxStream &) = delete;
    CSfxStream &operator=(const CSfxStream &) = delete;
    CSfxStream(CSfxStream &&) = delete;
    CSfxStream &operator=(CSfxStream &&) = delete;

    [[nodiscard]] bool isOpen() const;
    [[nodiscard]] int getChannelCount() const;
    [[nodiscard]] int getSampleRate() const;
    [[nodiscard]] ma_decoder &getDecoder();

private:
    std::string bytes_;
    ma_decoder decoder_{};
    bool open_ = false;
};

} // namespace nocturne::sound
