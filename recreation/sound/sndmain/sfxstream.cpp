#include "sound/sndmain/sfxstream.h"

#include <utility>

namespace nocturne::sound {

// Decoded to float: the mixer loses a source's last read in any other format.
CSfxStream::CSfxStream(std::string bytes) : bytes_(std::move(bytes)) {
    const ma_decoder_config config = ma_decoder_config_init(ma_format_f32, 0, 0);
    open_ = ma_decoder_init_memory(bytes_.data(), bytes_.size(), &config, &decoder_) == MA_SUCCESS;
}

CSfxStream::~CSfxStream() {
    if (open_) {
        ma_decoder_uninit(&decoder_);
    }
}

bool CSfxStream::isOpen() const {
    return open_;
}

int CSfxStream::getChannelCount() const {
    return static_cast<int>(decoder_.outputChannels);
}

int CSfxStream::getSampleRate() const {
    return static_cast<int>(decoder_.outputSampleRate);
}

ma_decoder &CSfxStream::getDecoder() {
    return decoder_;
}

} // namespace nocturne::sound
