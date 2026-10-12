#pragma once

#include <complex>
#include <cstddef>
#include <cstdint>
#include <mutex>
#include <span>
#include <vector>

namespace nocturne::sound {

// The output as the Sound Options' spectrum sees it: the last window mixed, kept as the device
// pulls it and transformed when the menu asks. The window is the original's mix buffer.
class CSfxAnalyzer {
public:
    // Forgets what was kept and starts over for this output.
    void reset(int channel_count, int sample_rate);
    // Keeps a block the mixer produced; called on the audio device's thread.
    void record(std::span<const float> frames);
    // The average strength of the frequencies between the two, scaled so a full-scale tone reads
    // about 2; 0 for a channel the output doesn't have.
    [[nodiscard]] float analyzeFrequencyBand(int channel, float freq_start_hz, float freq_end_hz);

    [[nodiscard]] std::size_t getWindowSize() const;

private:
    struct SSpectrum {
        std::vector<std::complex<double>> bins;
        std::uint64_t window = 0;
    };

    void transform(std::size_t channel, std::uint64_t window);

    std::mutex mutex_;
    std::size_t channel_count_ = 0;
    int sample_rate_ = 0;
    std::size_t window_size_ = 0;
    // window_size_ frames, interleaved, oldest at write_frame_.
    std::vector<float> history_;
    std::size_t write_frame_ = 0;
    std::uint64_t frames_recorded_ = 0;
    std::vector<SSpectrum> spectra_;
};

} // namespace nocturne::sound
