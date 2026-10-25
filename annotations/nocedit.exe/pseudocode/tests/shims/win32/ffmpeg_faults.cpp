// =============================================================================
// FFMPEG FAULTS — see ffmpeg_faults.h
// =============================================================================

#include "ffmpeg_faults.h"

extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavutil/mem.h>
#include <libswresample/swresample.h>
#include <libswscale/swscale.h>
}

#include <map>
#include <string>

namespace ffmpeg_faults {

namespace {

// Calls still to pass before each named one fails.
std::map<std::string, int> &armed() {
    static std::map<std::string, int> calls;
    return calls;
}

// Whether this call to `name` is the one to fail; a failure is taken once.
bool take(const char *name) {
    auto it = armed().find(name);
    if (it == armed().end())
        return false;
    if (it->second-- > 0)
        return false;
    armed().erase(it);
    return true;
}

} // namespace

void fail(const char *name, int pass) {
    armed()[name] = pass;
}

void reset() {
    armed().clear();
}

} // namespace ffmpeg_faults

using ffmpeg_faults::take;

extern "C" {

int ffmpeg_faults_avformat_find_stream_info(AVFormatContext *ic, AVDictionary **options) {
    if (take("avformat_find_stream_info"))
        return AVERROR(ENOMEM);
    return avformat_find_stream_info(ic, options);
}

AVCodecContext *ffmpeg_faults_avcodec_alloc_context3(const AVCodec *codec) {
    if (take("avcodec_alloc_context3"))
        return nullptr;
    return avcodec_alloc_context3(codec);
}

int ffmpeg_faults_avcodec_parameters_to_context(AVCodecContext *codec,
                                                const AVCodecParameters *par) {
    if (take("avcodec_parameters_to_context"))
        return AVERROR(ENOMEM);
    return avcodec_parameters_to_context(codec, par);
}

int ffmpeg_faults_avcodec_open2(AVCodecContext *avctx, const AVCodec *codec,
                                AVDictionary **options) {
    if (take("avcodec_open2"))
        return AVERROR(ENOMEM);
    return avcodec_open2(avctx, codec, options);
}

AVPacket *ffmpeg_faults_av_packet_alloc(void) {
    if (take("av_packet_alloc"))
        return nullptr;
    return av_packet_alloc();
}

AVFrame *ffmpeg_faults_av_frame_alloc(void) {
    if (take("av_frame_alloc"))
        return nullptr;
    return av_frame_alloc();
}

void *ffmpeg_faults_av_malloc(size_t size) {
    if (take("av_malloc"))
        return nullptr;
    return av_malloc(size);
}

SwsContext *ffmpeg_faults_sws_getContext(int srcW, int srcH, enum AVPixelFormat srcFormat, int dstW,
                                         int dstH, enum AVPixelFormat dstFormat, int flags,
                                         SwsFilter *srcFilter, SwsFilter *dstFilter,
                                         const double *param) {
    if (take("sws_getContext"))
        return nullptr;
    return sws_getContext(srcW, srcH, srcFormat, dstW, dstH, dstFormat, flags, srcFilter, dstFilter,
                          param);
}

// Fails as the real one does, with no context made.
int ffmpeg_faults_swr_alloc_set_opts2(SwrContext **ps, const AVChannelLayout *out_ch_layout,
                                      enum AVSampleFormat out_sample_fmt, int out_sample_rate,
                                      const AVChannelLayout *in_ch_layout,
                                      enum AVSampleFormat in_sample_fmt, int in_sample_rate,
                                      int log_offset, void *log_ctx) {
    if (take("swr_alloc_set_opts2"))
        return AVERROR(ENOMEM);
    return swr_alloc_set_opts2(ps, out_ch_layout, out_sample_fmt, out_sample_rate, in_ch_layout,
                               in_sample_fmt, in_sample_rate, log_offset, log_ctx);
}

int ffmpeg_faults_swr_init(SwrContext *s) {
    if (take("swr_init"))
        return AVERROR(ENOMEM);
    return swr_init(s);
}

} // extern "C"
