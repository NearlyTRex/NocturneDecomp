#pragma once

#include "common/video/movie.h"
#include "platform/fwd.h"
#include "platform/movieplayer.h"

#include <cstddef>
#include <cstdint>
#include <deque>
#include <memory>
#include <optional>
#include <vector>

struct AVCodecContext;
struct AVFormatContext;
struct AVFrame;
struct AVPacket;
struct SDL_AudioStream;
struct SwrContext;
struct SwsContext;

namespace nocturne::platform::sdl {

// Decodes with FFmpeg and draws each frame into a whole screen in the game's mode, presented
// through the display as swapBuffers would. The sound plays on its own stream on the default
// device, as MCI's did. Needs a CSdlContext.
class CSdlMoviePlayer final : public IMoviePlayer {
public:
    explicit CSdlMoviePlayer(IDisplay &display);
    ~CSdlMoviePlayer() override;
    CSdlMoviePlayer(const CSdlMoviePlayer &) = delete;
    CSdlMoviePlayer &operator=(const CSdlMoviePlayer &) = delete;

    [[nodiscard]] bool openMovie(const std::filesystem::path &movie_filename,
                                 common::SExtent screen, common::EPixelLayout layout) override;
    [[nodiscard]] common::SExtent getMovieSize() override;
    void setMoviePlayback(bool play) override;
    void updateMovie() override;
    [[nodiscard]] bool isMoviePlaying() override;
    void setMovieVolume(float gain) override;
    void closeMovie() override;

private:
    struct SFormatDeleter {
        void operator()(AVFormatContext *format) const;
    };
    struct SCodecDeleter {
        void operator()(AVCodecContext *codec) const;
    };
    struct SScalerDeleter {
        void operator()(SwsContext *scaler) const;
    };
    struct SResamplerDeleter {
        void operator()(SwrContext *resampler) const;
    };
    struct SPacketDeleter {
        void operator()(AVPacket *packet) const;
    };
    struct SFrameDeleter {
        void operator()(AVFrame *frame) const;
    };
    struct SStreamDeleter {
        void operator()(SDL_AudioStream *stream) const;
    };

    struct SQueuedFrame {
        double time = 0.0;
        std::vector<std::uint8_t> pixels;
    };

    [[nodiscard]] bool openVideo();
    void openAudio();
    // Reads packets until the frame queue is full, the decoders are drained or the pump limit.
    void decode();
    void decodePacket(const AVPacket *packet);
    void receiveVideo();
    void receiveAudio();
    void queueFrame(const AVFrame &frame);

    IDisplay &display_;
    std::unique_ptr<AVFormatContext, SFormatDeleter> format_;
    std::unique_ptr<AVCodecContext, SCodecDeleter> video_codec_;
    std::unique_ptr<AVCodecContext, SCodecDeleter> audio_codec_;
    std::unique_ptr<SwsContext, SScalerDeleter> scaler_;
    std::unique_ptr<SwrContext, SResamplerDeleter> resampler_;
    std::unique_ptr<AVPacket, SPacketDeleter> packet_;
    std::unique_ptr<AVFrame, SFrameDeleter> frame_;
    std::unique_ptr<SDL_AudioStream, SStreamDeleter> audio_;
    int video_stream_ = -1;
    int audio_stream_ = -1;
    double frame_duration_ = 0.0;
    std::int64_t frames_decoded_ = 0;
    common::SExtent movie_size_;
    common::SExtent screen_;
    common::EPixelLayout layout_ = common::EPixelLayout::Bgra8888;
    common::SViewport placement_;
    std::deque<SQueuedFrame> frames_;
    std::vector<double> frame_times_;
    // 16-bit samples in native order, as bytes for the resampler.
    std::vector<std::uint8_t> samples_;
    common::CMovieClock clock_;
    double last_frame_at_ = 0.0;
    float gain_ = 1.0F;
    bool decoder_finished_ = false;
    bool playing_ = false;
};

} // namespace nocturne::platform::sdl
