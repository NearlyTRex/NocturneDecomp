// =============================================================================
// MOVIE WRITER — see movie_writer.h
// =============================================================================

#include "movie_writer.h"

extern "C" {
#include <libavformat/avformat.h>
}

#include <cstring>

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

}  // namespace

bool write(const std::string &path, const Movie &m) {
    AVFormatContext *out = nullptr;
    if (avformat_alloc_output_context2(&out, nullptr, m.container, path.c_str()) < 0) return false;

    Encoder video, audio;
    if (m.video) {
        const AVCodec *codec = avcodec_find_encoder(AV_CODEC_ID_RAWVIDEO);
        video.stream = avformat_new_stream(out, nullptr);
        video.context = avcodec_alloc_context3(codec);
        video.context->width = m.width;
        video.context->height = m.height;
        video.context->pix_fmt = AV_PIX_FMT_BGR24;
        video.context->time_base = AVRational{1, 15};
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
    for (int i = 0; i < m.frames; ++i) {
        if (m.video) {
            picture->format = AV_PIX_FMT_BGR24;
            picture->width = m.width;
            picture->height = m.height;
            av_frame_get_buffer(picture, 0);
            memset(picture->data[0], (i * 16) & 0xff, (size_t)picture->linesize[0] * m.height);
            picture->pts = i;
            send(out, video, picture);
            av_frame_unref(picture);
        }
        if (m.audio != AV_CODEC_ID_NONE) {
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
    if (m.video) send(out, video, nullptr);
    if (m.audio != AV_CODEC_ID_NONE) send(out, audio, nullptr);
    av_write_trailer(out);
    av_frame_free(&picture);
    av_frame_free(&sound);
    avcodec_free_context(&video.context);
    avcodec_free_context(&audio.context);
    avio_closep(&out->pb);
    avformat_free_context(out);
    return true;
}

}  // namespace movie_writer
