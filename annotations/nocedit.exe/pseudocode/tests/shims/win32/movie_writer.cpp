// =============================================================================
// MOVIE WRITER — see movie_writer.h
// =============================================================================

#include "movie_writer.h"

extern "C" {
#include <libavformat/avformat.h>
}

#include <algorithm>
#include <cstring>
#include <fstream>
#include <iterator>
#include <vector>

namespace movie_writer {

namespace {

struct Encoder {
    AVCodecContext *context = nullptr;
    AVStream *stream = nullptr;
};

void send(AVFormatContext *out, Encoder &e, AVFrame *frame) {
    avcodec_send_frame(e.context, frame);
    AVPacket *packet = av_packet_alloc();
    while (avcodec_receive_packet(e.context, packet) == 0) {
        av_packet_rescale_ts(packet, e.context->time_base, e.stream->time_base);
        packet->stream_index = e.stream->index;
        av_interleaved_write_frame(out, packet);
    }
    av_packet_free(&packet);
}

} // namespace

bool write(const std::string &path, const Movie &m) {
    AVFormatContext *out = nullptr;
    if (avformat_alloc_output_context2(&out, nullptr, m.container, path.c_str()) < 0)
        return false;

    const AVPixelFormat pixels =
        m.video_codec == AV_CODEC_ID_RAWVIDEO ? AV_PIX_FMT_BGR24 : AV_PIX_FMT_YUV420P;
    Encoder video, audio;
    if (m.video) {
        const AVCodec *codec = avcodec_find_encoder(m.video_codec);
        video.stream = avformat_new_stream(out, nullptr);
        video.context = avcodec_alloc_context3(codec);
        video.context->width = m.width;
        video.context->height = m.height;
        video.context->pix_fmt = pixels;
        video.context->time_base = AVRational{1, 15};
        video.context->max_b_frames = m.b_frames;
        video.stream->time_base = video.context->time_base;
        avcodec_open2(video.context, codec, nullptr);
        avcodec_parameters_from_context(video.stream->codecpar, video.context);
    }
    if (m.audio != AV_CODEC_ID_NONE) {
        const AVCodec *codec = avcodec_find_encoder(m.audio);
        audio.stream = avformat_new_stream(out, nullptr);
        audio.context = avcodec_alloc_context3(codec);
        audio.context->sample_fmt = codec->sample_fmts[0];
        audio.context->sample_rate = m.rate;
        av_channel_layout_default(&audio.context->ch_layout, m.channels);
        audio.context->time_base = AVRational{1, m.rate};
        audio.stream->time_base = audio.context->time_base;
        avcodec_open2(audio.context, codec, nullptr);
        avcodec_parameters_from_context(audio.stream->codecpar, audio.context);
    }
    avio_open(&out->pb, path.c_str(), AVIO_FLAG_WRITE);
    avformat_write_header(out, nullptr);

    AVFrame *picture = av_frame_alloc();
    AVFrame *sound = av_frame_alloc();
    const int per_frame = m.rate / 15;
    const int sound_frames = m.sound_frames < 0 ? m.frames : m.sound_frames;
    for (int i = 0; i < std::max(m.frames, sound_frames); ++i) {
        if (m.video && i < m.frames) {
            picture->format = pixels;
            picture->width = m.width;
            picture->height = m.height;
            av_frame_get_buffer(picture, 0);
            memset(picture->data[0], (i * 16) & 0xff, (size_t)picture->linesize[0] * m.height);
            for (int c = 1; c < 3 && picture->data[c]; ++c) {
                memset(picture->data[c], 0x80, (size_t)picture->linesize[c] * m.height / 2);
            }
            picture->pts = i;
            send(out, video, picture);
            av_frame_unref(picture);
        }
        if (m.audio != AV_CODEC_ID_NONE && i < sound_frames) {
            sound->format = audio.context->sample_fmt;
            sound->sample_rate = m.rate;
            av_channel_layout_copy(&sound->ch_layout, &audio.context->ch_layout);
            sound->nb_samples = per_frame;
            av_frame_get_buffer(sound, 0);
            for (int c = 0; c < AV_NUM_DATA_POINTERS && sound->data[c]; ++c) {
                memset(sound->data[c], 0x40, (size_t)sound->linesize[0]);
            }
            sound->pts = (int64_t)i * per_frame;
            send(out, audio, sound);
            av_frame_unref(sound);
        }
    }
    if (m.video)
        send(out, video, nullptr);
    if (m.audio != AV_CODEC_ID_NONE)
        send(out, audio, nullptr);
    av_write_trailer(out);
    av_frame_free(&picture);
    av_frame_free(&sound);
    avcodec_free_context(&video.context);
    avcodec_free_context(&audio.context);
    avio_closep(&out->pb);
    avformat_free_context(out);
    return true;
}

bool patch_format(const std::string &path, const char *type, size_t offset, uint32_t value,
                  int size) {
    std::vector<char> bytes;
    {
        std::ifstream in(path, std::ios::binary);
        bytes.assign(std::istreambuf_iterator<char>(in), std::istreambuf_iterator<char>());
    }
    // A stream header is 'strh', its length, then the stream's type; its format
    // chunk follows it.
    const std::string header = "strh";
    auto at = bytes.begin();
    for (;;) {
        at = std::search(at, bytes.end(), header.begin(), header.end());
        if (bytes.end() - at < 12)
            return false;
        if (std::equal(type, type + 4, at + 8))
            break;
        at += 4;
    }
    const std::string format = "strf";
    at = std::search(at, bytes.end(), format.begin(), format.end());
    if ((size_t)(bytes.end() - at) < 8 + offset + size)
        return false;
    for (int i = 0; i < size; ++i) {
        at[8 + offset + i] = (char)(value >> (8 * i));
    }
    std::ofstream(path, std::ios::binary).write(bytes.data(), (std::streamsize)bytes.size());
    return true;
}

} // namespace movie_writer
