#include "platform/sdl/sdlmovieplayer.h"

#include "platform/display.h"

#include <SDL3/SDL.h>
#include <algorithm>
#include <array>
#include <span>

extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libswresample/swresample.h>
#include <libswscale/swscale.h>
}

namespace nocturne::platform::sdl {
namespace {

// Frames decoded ahead of the one on screen, and packets read per update at most.
constexpr std::size_t kQueuedFrames = 8;
constexpr int kPacketsPerUpdate = 256;
constexpr double kDefaultFrameRate = 15.0;

// Indexed by EPixelLayout. An 8-bit screen has no movie format: playMovie only runs at 32 bits.
constexpr std::array kScreenFormats = {AV_PIX_FMT_NONE, AV_PIX_FMT_RGB565, AV_PIX_FMT_BGR0};

double secondsNow() {
    constexpr double kNanoseconds = 1e9;
    return static_cast<double>(SDL_GetTicksNS()) / kNanoseconds;
}

} // namespace

void CSdlMoviePlayer::SFormatDeleter::operator()(AVFormatContext *format) const {
    avformat_close_input(&format);
}

void CSdlMoviePlayer::SCodecDeleter::operator()(AVCodecContext *codec) const {
    avcodec_free_context(&codec);
}

void CSdlMoviePlayer::SScalerDeleter::operator()(SwsContext *scaler) const {
    sws_freeContext(scaler);
}

void CSdlMoviePlayer::SResamplerDeleter::operator()(SwrContext *resampler) const {
    swr_free(&resampler);
}

void CSdlMoviePlayer::SPacketDeleter::operator()(AVPacket *packet) const {
    av_packet_free(&packet);
}

void CSdlMoviePlayer::SFrameDeleter::operator()(AVFrame *frame) const {
    av_frame_free(&frame);
}

void CSdlMoviePlayer::SStreamDeleter::operator()(SDL_AudioStream *stream) const {
    SDL_DestroyAudioStream(stream);
}

CSdlMoviePlayer::CSdlMoviePlayer(IDisplay &display) : display_(display) {}

CSdlMoviePlayer::~CSdlMoviePlayer() {
    closeMovie();
}

bool CSdlMoviePlayer::openMovie(const std::filesystem::path &movie_filename, common::SExtent screen,
                                common::EPixelLayout layout) {
    closeMovie();
    AVFormatContext *format = nullptr;
    if (avformat_open_input(&format, movie_filename.string().c_str(), nullptr, nullptr) < 0) {
        return false;
    }
    format_.reset(format);
    screen_ = screen;
    layout_ = layout;
    if (avformat_find_stream_info(format_.get(), nullptr) < 0 || !openVideo()) {
        closeMovie();
        return false;
    }
    // A movie whose sound will not open plays silent.
    openAudio();
    packet_.reset(av_packet_alloc());
    frame_.reset(av_frame_alloc());
    playing_ = true;
    return true;
}

common::SExtent CSdlMoviePlayer::getMovieSize() {
    return movie_size_;
}

void CSdlMoviePlayer::setMoviePlayback(bool play) {
    const double now = secondsNow();
    if (play) {
        clock_.play(now);
        SDL_ResumeAudioStreamDevice(audio_.get());
    } else {
        clock_.pause(now);
        SDL_PauseAudioStreamDevice(audio_.get());
    }
}

void CSdlMoviePlayer::updateMovie() {
    if (!playing_) {
        return;
    }
    decode();
    const double now = secondsNow();
    frame_times_.clear();
    std::ranges::transform(frames_, std::back_inserter(frame_times_),
                           [](const SQueuedFrame &frame) { return frame.time; });
    const std::optional<std::size_t> due =
        common::selectDueFrame(frame_times_, clock_.getTime(now));
    if (due) {
        const SQueuedFrame &frame = frames_.at(*due);
        display_.present(std::as_bytes(std::span(frame.pixels)),
                         screen_.width * common::getBytesPerPixel(layout_));
        frames_.erase(frames_.begin(), frames_.begin() + static_cast<std::ptrdiff_t>(*due) + 1);
        last_frame_at_ = now;
    }
    playing_ = !common::hasMovieEnded({.decoder_finished = decoder_finished_,
                                       .frames_queued = !frames_.empty(),
                                       .audio_queued = SDL_GetAudioStreamQueued(audio_.get()) > 0,
                                       .since_last_frame = now - last_frame_at_});
}

bool CSdlMoviePlayer::isMoviePlaying() {
    return playing_;
}

void CSdlMoviePlayer::setMovieVolume(float gain) {
    gain_ = gain;
}

void CSdlMoviePlayer::closeMovie() {
    audio_.reset();
    resampler_.reset();
    scaler_.reset();
    audio_codec_.reset();
    video_codec_.reset();
    format_.reset();
    packet_.reset();
    frame_.reset();
    frames_.clear();
    video_stream_ = -1;
    audio_stream_ = -1;
    frames_decoded_ = 0;
    movie_size_ = {};
    clock_ = {};
    decoder_finished_ = false;
    playing_ = false;
}

bool CSdlMoviePlayer::openVideo() {
    const AVCodec *codec = nullptr;
    video_stream_ = av_find_best_stream(format_.get(), AVMEDIA_TYPE_VIDEO, -1, -1, &codec, 0);
    if (video_stream_ < 0) {
        return false;
    }
    const AVStream *const stream = format_->streams[video_stream_];
    video_codec_.reset(avcodec_alloc_context3(codec));
    if (!video_codec_ || avcodec_parameters_to_context(video_codec_.get(), stream->codecpar) < 0 ||
        avcodec_open2(video_codec_.get(), codec, nullptr) < 0) {
        return false;
    }
    movie_size_ = {.width = video_codec_->width, .height = video_codec_->height};
    const std::optional<common::SViewport> placement = common::placeMovie(movie_size_, screen_);
    const AVPixelFormat target = kScreenFormats.at(static_cast<std::size_t>(layout_));
    if (!placement || target == AV_PIX_FMT_NONE) {
        return false;
    }
    placement_ = *placement;
    const double rate = av_q2d(stream->avg_frame_rate);
    frame_duration_ = 1.0 / (rate > 0.0 ? rate : kDefaultFrameRate);
    // The placement is a whole multiple of the movie, so point sampling keeps pixels even.
    scaler_.reset(sws_getContext(movie_size_.width, movie_size_.height, video_codec_->pix_fmt,
                                 placement_.width, placement_.height, target, SWS_POINT, nullptr,
                                 nullptr, nullptr));
    return scaler_ != nullptr;
}

void CSdlMoviePlayer::openAudio() {
    const AVCodec *codec = nullptr;
    audio_stream_ = av_find_best_stream(format_.get(), AVMEDIA_TYPE_AUDIO, -1, -1, &codec, 0);
    if (audio_stream_ < 0) {
        return;
    }
    audio_codec_.reset(avcodec_alloc_context3(codec));
    if (!audio_codec_ ||
        avcodec_parameters_to_context(audio_codec_.get(),
                                      format_->streams[audio_stream_]->codecpar) < 0 ||
        avcodec_open2(audio_codec_.get(), codec, nullptr) < 0) {
        audio_codec_.reset();
        audio_stream_ = -1;
        return;
    }
    // Played at the movie's own rate; more than two channels are folded to stereo.
    AVChannelLayout layout{};
    av_channel_layout_default(&layout, std::min(audio_codec_->ch_layout.nb_channels, 2));
    SwrContext *resampler = nullptr;
    swr_alloc_set_opts2(&resampler, &layout, AV_SAMPLE_FMT_S16, audio_codec_->sample_rate,
                        &audio_codec_->ch_layout, audio_codec_->sample_fmt,
                        audio_codec_->sample_rate, 0, nullptr);
    resampler_.reset(resampler);
    const SDL_AudioSpec spec{
        .format = SDL_AUDIO_S16, .channels = layout.nb_channels, .freq = audio_codec_->sample_rate};
    if (!resampler_ || swr_init(resampler_.get()) < 0) {
        audio_codec_.reset();
        audio_stream_ = -1;
        return;
    }
    audio_.reset(
        SDL_OpenAudioDeviceStream(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, &spec, nullptr, nullptr));
}

void CSdlMoviePlayer::decode() {
    // Reading only while the picture has room keeps the decoders from being fed faster than
    // they are drained, which loses packets.
    for (int packets = 0;
         !decoder_finished_ && frames_.size() < kQueuedFrames && packets < kPacketsPerUpdate;
         ++packets) {
        if (av_read_frame(format_.get(), packet_.get()) < 0) {
            decodePacket(nullptr);
            decoder_finished_ = true;
            return;
        }
        decodePacket(packet_.get());
        av_packet_unref(packet_.get());
    }
}

void CSdlMoviePlayer::decodePacket(const AVPacket *packet) {
    // A null packet flushes both decoders at the end of the file.
    const bool video = packet == nullptr || packet->stream_index == video_stream_;
    const bool audio = audio_codec_ && (packet == nullptr || packet->stream_index == audio_stream_);
    if (video && avcodec_send_packet(video_codec_.get(), packet) >= 0) {
        receiveVideo();
    }
    if (audio && avcodec_send_packet(audio_codec_.get(), packet) >= 0) {
        receiveAudio();
    }
}

void CSdlMoviePlayer::receiveVideo() {
    while (avcodec_receive_frame(video_codec_.get(), frame_.get()) >= 0) {
        queueFrame(*frame_);
        av_frame_unref(frame_.get());
    }
}

void CSdlMoviePlayer::receiveAudio() {
    while (avcodec_receive_frame(audio_codec_.get(), frame_.get()) >= 0) {
        const int capacity = std::max(swr_get_out_samples(resampler_.get(), frame_->nb_samples), 0);
        const auto frame_bytes =
            sizeof(std::int16_t) *
            static_cast<std::size_t>(std::min(audio_codec_->ch_layout.nb_channels, 2));
        samples_.resize(static_cast<std::size_t>(capacity) * frame_bytes);
        std::array<std::uint8_t *, 1> output = {samples_.data()};
        const int converted = swr_convert(resampler_.get(), output.data(), capacity,
                                          const_cast<const std::uint8_t **>(frame_->extended_data),
                                          frame_->nb_samples);
        av_frame_unref(frame_.get());
        if (converted <= 0) {
            continue;
        }
        const std::span<std::uint8_t> block(samples_.data(),
                                            static_cast<std::size_t>(converted) * frame_bytes);
        common::applyGain(block, gain_);
        SDL_PutAudioStreamData(audio_.get(), block.data(), static_cast<int>(block.size()));
    }
}

void CSdlMoviePlayer::queueFrame(const AVFrame &frame) {
    const int bytes_per_pixel = common::getBytesPerPixel(layout_);
    const int pitch = screen_.width * bytes_per_pixel;
    SQueuedFrame queued;
    // A frame without a timestamp follows the previous one at the movie's rate.
    const AVRational time_base = format_->streams[video_stream_]->time_base;
    queued.time = frame.best_effort_timestamp == AV_NOPTS_VALUE
                      ? static_cast<double>(frames_decoded_) * frame_duration_
                      : static_cast<double>(frame.best_effort_timestamp) * av_q2d(time_base);
    ++frames_decoded_;
    // Black around the movie, as the screen was cleared before it.
    queued.pixels.assign(static_cast<std::size_t>(pitch) * static_cast<std::size_t>(screen_.height),
                         0);
    const auto offset =
        (static_cast<std::size_t>(placement_.y) * static_cast<std::size_t>(pitch)) +
        (static_cast<std::size_t>(placement_.x) * static_cast<std::size_t>(bytes_per_pixel));
    std::array<std::uint8_t *, 1> planes = {std::span(queued.pixels).subspan(offset).data()};
    std::array<int, 1> strides = {pitch};
    sws_scale(scaler_.get(), frame.data, frame.linesize, 0, frame.height, planes.data(),
              strides.data());
    frames_.push_back(std::move(queued));
}

} // namespace nocturne::platform::sdl
