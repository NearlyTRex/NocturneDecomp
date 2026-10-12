#include "sound/sndmain/sfxanalyzer.h"

#include <algorithm>
#include <bit>
#include <cmath>
#include <numbers>
#include <utility>

namespace nocturne::sound {
namespace {

// The original sized its mix buffers for the default half second of latency, split four ways.
constexpr double kMixLatency = 0.5;
constexpr int kMixBufferCount = 4;
constexpr std::size_t kMixBufferAlignment = 16;

// allocMixBuffers' size: the share of the latency in frames, rounded up to 16 and then to a
// power of two.
std::size_t getMixBufferSize(int sample_rate) {
    const auto frames = static_cast<std::size_t>(sample_rate * kMixLatency / kMixBufferCount);
    return std::bit_ceil((frames + kMixBufferAlignment - 1) & ~(kMixBufferAlignment - 1));
}

// In place, radix 2; the size is a power of two.
void fft(std::vector<std::complex<double>> &data) {
    const std::size_t size = data.size();
    for (std::size_t index = 1, reversed = 0; index < size; ++index) {
        std::size_t bit = size >> 1U;
        for (; (reversed & bit) != 0; bit >>= 1U) {
            reversed ^= bit;
        }
        reversed ^= bit;
        if (index < reversed) {
            std::swap(data[index], data[reversed]);
        }
    }
    for (std::size_t length = 2; length <= size; length <<= 1U) {
        const double angle = 2.0 * std::numbers::pi / static_cast<double>(length);
        const std::complex<double> step(std::cos(angle), std::sin(angle));
        const std::size_t half = length / 2;
        for (std::size_t start = 0; start < size; start += length) {
            std::complex<double> twiddle = 1.0;
            for (std::size_t offset = 0; offset < half; ++offset) {
                const std::complex<double> even = data[start + offset];
                const std::complex<double> odd = data[start + offset + half] * twiddle;
                data[start + offset] = even + odd;
                data[start + offset + half] = even - odd;
                twiddle *= step;
            }
        }
    }
}

int toBin(float frequency, std::size_t bin_count, int sample_rate) {
    return static_cast<int>(
        std::floor(frequency * static_cast<float>(bin_count) / static_cast<float>(sample_rate)));
}

} // namespace

void CSfxAnalyzer::reset(int channel_count, int sample_rate) {
    const std::scoped_lock lock(mutex_);
    channel_count_ = static_cast<std::size_t>(channel_count);
    sample_rate_ = sample_rate;
    window_size_ = getMixBufferSize(sample_rate);
    history_.assign(window_size_ * channel_count_, 0.0F);
    write_frame_ = 0;
    frames_recorded_ = 0;
    spectra_.assign(channel_count_, {});
}

void CSfxAnalyzer::record(std::span<const float> frames) {
    const std::scoped_lock lock(mutex_);
    if (channel_count_ == 0) {
        return;
    }
    const std::size_t frame_count = frames.size() / channel_count_;
    for (std::size_t frame = 0; frame < frame_count; ++frame) {
        std::ranges::copy(frames.subspan(frame * channel_count_, channel_count_),
                          history_.begin() +
                              static_cast<std::ptrdiff_t>(write_frame_ * channel_count_));
        write_frame_ = (write_frame_ + 1) % window_size_;
    }
    frames_recorded_ += frame_count;
}

// The original transformed each mix buffer once, the first time it was asked about; this keeps
// the spectrum of the last window until a whole new one is mixed.
float CSfxAnalyzer::analyzeFrequencyBand(int channel, float freq_start_hz, float freq_end_hz) {
    const std::scoped_lock lock(mutex_);
    if (channel < 0 || static_cast<std::size_t>(channel) >= channel_count_) {
        return 0.0F;
    }
    const auto index = static_cast<std::size_t>(channel);
    const std::uint64_t window = frames_recorded_ / window_size_;
    if (spectra_[index].bins.empty() || spectra_[index].window != window) {
        transform(index, window);
    }
    const std::size_t half = window_size_ / 2;
    const std::size_t bin_count = half + 1;
    int first = toBin(freq_start_hz, bin_count, sample_rate_);
    int last = toBin(freq_end_hz, bin_count, sample_rate_);
    const auto bins = static_cast<int>(bin_count);
    if (first >= bins || last <= 0) {
        return 0.0F;
    }
    last = std::min(last, bins);
    first = std::max(first, 0);
    // A band narrower than a bin reads the bin it starts in.
    const int count = std::max(last - first, 1);
    float sum = 0.0F;
    for (int bin = first; bin < first + count; ++bin) {
        sum += static_cast<float>(std::abs(spectra_[index].bins[static_cast<std::size_t>(bin)]));
    }
    return std::sqrt(sum / static_cast<float>(count) / static_cast<float>(bin_count)) * 2.0F;
}

std::size_t CSfxAnalyzer::getWindowSize() const {
    return window_size_;
}

void CSfxAnalyzer::transform(std::size_t channel, std::uint64_t window) {
    std::vector<std::complex<double>> &bins = spectra_[channel].bins;
    bins.resize(window_size_);
    for (std::size_t frame = 0; frame < window_size_; ++frame) {
        const std::size_t source = (write_frame_ + frame) % window_size_;
        bins[frame] = history_[source * channel_count_ + channel];
    }
    fft(bins);
    spectra_[channel].window = window;
}

} // namespace nocturne::sound
