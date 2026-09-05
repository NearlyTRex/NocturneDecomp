// =============================================================================
// MCI VIDEO SHIM - libav-backed AVI playback for mciSendString
// =============================================================================
//
// Implements the subset of MCI string commands used by the game's movie
// playback system (winvideo.cpp). The game opens AVI files via MCI and
// plays them in a child window or fullscreen.
//
// We decode video with libav (ffmpeg) and present frames through the same
// path the engine's 2D back buffer uses — the GL presenter when it owns the
// window (the default), the DirectDraw shim's SDL_Renderer otherwise.
//
// Supported MCI commands:
//   open "file.avi" alias mov [style child parent %d]
//   status mov window handle
//   where mov source
//   play mov [window|fullscreen] [notify]
//   pause mov
//   close mov
//
// The shipped movies are 320x240 @ 15fps with uncompressed PCM audio:
//   OPENING.AVI  indeo5    + pcm_s16le 44100 stereo
//   NOC1/NOC2    msvideo1  + pcm_s16le 11025/22050 mono
//   NOC3         cinepak   + pcm_u8    22050 mono
//   NOC4         indeo5    + pcm_s16le 44100 stereo
// All four video codecs and both sample formats are native ffmpeg decoders, so
// the bundled build needs no extra configure flags. Audio is resampled to
// interleaved S16 regardless, so a movie with any other layout still plays.
//
// Timing: the wall clock from "play mov" is the master. Video frames are
// decoded ahead into a small queue and presented when their pts comes due; if
// the pump falls behind, late frames are dropped rather than presented, so
// playback keeps its real length instead of stretching. Audio is queued to SDL
// and paced by the device.
//
// Deriving video timing from the audio clock instead is tempting and wrong: it
// couples the two, since the decoder only advances when video is needed and
// video is only due when audio has drained. See movie_clock() and the decode
// loop in mci_video_pump_frame() — both carry the reasoning, because the
// failure mode (an 88-second movie consumed in 956ms) is not obvious from the
// code.

#include "system/mmsystem.h"
#include "media/mci_video.h"
#include "gl/gl_present.h"
#include "core/debug_log.h"
#include <SDL.h>

extern "C" {
#include <libavformat/avformat.h>
#include <libavcodec/avcodec.h>
#include <libavutil/imgutils.h>
#include <libavutil/opt.h>
#include <libswscale/swscale.h>
#include <libswresample/swresample.h>
}

#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <string>

// Defined in shims/crt.cpp. The game hands MCI a Watcom-style path
// ("video\\opening.avi"); the CRT _fopen shim resolves those against the real
// filesystem ('\\' -> '/' plus case-insensitive component matching), which is
// why playMovie's own existence check succeeds. libav's avformat_open_input
// does neither, so the same path has to go through the same resolver or the
// open fails on a case difference the game never sees.
std::string watcom_resolve_fs_path(const char *path);

// =============================================================================
// Tunables
// =============================================================================

// How many decoded video frames to hold ahead of the playback clock. At 15fps
// this is a little under half a second of slack, enough to absorb a stalled
// pump without starving the presenter.
#define MCI_VIDEO_QUEUE_FRAMES 8

// Upper bound on packets consumed in a single pump call, so a movie whose
// streams are badly interleaved can't spin the message pump for an unbounded
// time inside one tick.
#define MCI_MAX_PACKETS_PER_PUMP 256

// Once the video has run out, how long the audio device gets to finish playing
// what is queued before end-of-stream is declared anyway. Only matters when the
// device is not draining at all; a working one empties in well under this.
#define MCI_EOS_AUDIO_GRACE_MS 3000

// =============================================================================
// MCI Movie State
// =============================================================================

struct MciVideoFrame {
    AVFrame *frame;
    double   pts;      // seconds from start of stream
};

struct MciMovieState {
    // libav demuxer/decoder
    AVFormatContext* fmt_ctx;
    AVCodecContext* video_codec_ctx;
    AVCodecContext* audio_codec_ctx;
    int video_stream_idx;
    int audio_stream_idx;
    SwsContext* sws_ctx;
    SwrContext* swr_ctx;

    // Decoded frame storage
    AVFrame* frame;         // scratch for decode
    AVFrame* frame_rgb;     // converted to RGB24 for display
    uint8_t* rgb_buffer;

    // Video frames decoded ahead of the clock, oldest first
    MciVideoFrame queue[MCI_VIDEO_QUEUE_FRAMES];
    int queue_head;
    int queue_count;

    // Video properties
    int width;
    int height;
    double fps;
    double duration_sec;
    double video_time_base;
    double next_synth_pts;  // used when the container gives no pts

    // Playback state
    int is_open;
    int is_playing;
    int is_paused;
    int at_eof;             // demuxer drained
    int notified;           // MM_MCINOTIFY edge already reported
    int fullscreen;

    // SDL rendering
    SDL_Texture* texture;
    SDL_Renderer* renderer;

    // SDL audio
    SDL_AudioDeviceID audio_dev;
    int audio_bytes_per_sec;
    uint64_t audio_bytes_queued;
    int audio_channels;
    int audio_rate;

    // Timing
    Uint32 play_start_ticks;
    Uint32 pause_ticks;
    Uint32 drained_ticks;   // when video first ran out; 0 until then

    // Diagnostics
    unsigned dbg_packets;
    unsigned dbg_presented;
    unsigned dbg_dropped;
    int      dbg_read_err;
};

static MciMovieState s_movie = {};

// =============================================================================
// Internal helpers — teardown
// =============================================================================

static void movie_queue_clear() {
    for (int i = 0; i < MCI_VIDEO_QUEUE_FRAMES; i++) {
        if (s_movie.queue[i].frame) {
            av_frame_free(&s_movie.queue[i].frame);
        }
    }
    s_movie.queue_head = 0;
    s_movie.queue_count = 0;
}

static void movie_close() {
    // The SDL audio device has to be closed before the struct is cleared —
    // memset would drop the handle and leak the device for the process
    // lifetime, and a second movie would then open another one.
    if (s_movie.audio_dev) {
        SDL_PauseAudioDevice(s_movie.audio_dev, 1);
        SDL_ClearQueuedAudio(s_movie.audio_dev);
        SDL_CloseAudioDevice(s_movie.audio_dev);
        s_movie.audio_dev = 0;
    }
    movie_queue_clear();
    if (s_movie.texture) {
        SDL_DestroyTexture(s_movie.texture);
        s_movie.texture = nullptr;
    }
    if (s_movie.swr_ctx) {
        swr_free(&s_movie.swr_ctx);
    }
    if (s_movie.sws_ctx) {
        sws_freeContext(s_movie.sws_ctx);
        s_movie.sws_ctx = nullptr;
    }
    if (s_movie.rgb_buffer) {
        av_free(s_movie.rgb_buffer);
        s_movie.rgb_buffer = nullptr;
    }
    if (s_movie.frame_rgb) {
        av_frame_free(&s_movie.frame_rgb);
    }
    if (s_movie.frame) {
        av_frame_free(&s_movie.frame);
    }
    if (s_movie.audio_codec_ctx) {
        avcodec_free_context(&s_movie.audio_codec_ctx);
    }
    if (s_movie.video_codec_ctx) {
        avcodec_free_context(&s_movie.video_codec_ctx);
    }
    if (s_movie.fmt_ctx) {
        avformat_close_input(&s_movie.fmt_ctx);
    }
    memset(&s_movie, 0, sizeof(s_movie));
}

// =============================================================================
// Internal helpers — open
// =============================================================================

// Bring up the SDL audio device for the movie's audio stream and the resampler
// that feeds it. Failure is non-fatal: the movie plays silently on the wall
// clock instead.
static void movie_open_audio() {
    if (s_movie.audio_stream_idx < 0) return;

    AVStream *st = s_movie.fmt_ctx->streams[s_movie.audio_stream_idx];
    const AVCodec *codec = avcodec_find_decoder(st->codecpar->codec_id);
    if (!codec) return;

    s_movie.audio_codec_ctx = avcodec_alloc_context3(codec);
    if (!s_movie.audio_codec_ctx) return;
    if (avcodec_parameters_to_context(s_movie.audio_codec_ctx, st->codecpar) < 0 ||
        avcodec_open2(s_movie.audio_codec_ctx, codec, nullptr) < 0) {
        avcodec_free_context(&s_movie.audio_codec_ctx);
        return;
    }

    int channels = s_movie.audio_codec_ctx->ch_layout.nb_channels;
    if (channels < 1) channels = 1;
    if (channels > 2) channels = 2;   // SDL gets mono or stereo; downmix the rest
    int rate = s_movie.audio_codec_ctx->sample_rate;
    if (rate <= 0) {
        avcodec_free_context(&s_movie.audio_codec_ctx);
        return;
    }

    if (!SDL_WasInit(SDL_INIT_AUDIO)) {
        if (SDL_InitSubSystem(SDL_INIT_AUDIO) != 0) {
            avcodec_free_context(&s_movie.audio_codec_ctx);
            return;
        }
    }

    SDL_AudioSpec want, have;
    SDL_zero(want);
    SDL_zero(have);
    want.freq = rate;
    want.format = AUDIO_S16SYS;
    want.channels = (Uint8)channels;
    want.samples = 1024;
    want.callback = nullptr;          // queue-driven, see SDL_QueueAudio below
    s_movie.audio_dev = SDL_OpenAudioDevice(nullptr, 0, &want, &have, 0);
    if (!s_movie.audio_dev) {
        avcodec_free_context(&s_movie.audio_codec_ctx);
        return;
    }

    // Resample whatever the file holds (S16/U8, planar or packed) to the
    // interleaved S16 the device was opened with. All the shipped movies are
    // already PCM, but going through swr keeps the path uniform.
    AVChannelLayout out_layout;
    av_channel_layout_default(&out_layout, channels);
    int rc = swr_alloc_set_opts2(&s_movie.swr_ctx,
                                 &out_layout, AV_SAMPLE_FMT_S16, rate,
                                 &s_movie.audio_codec_ctx->ch_layout,
                                 s_movie.audio_codec_ctx->sample_fmt,
                                 s_movie.audio_codec_ctx->sample_rate,
                                 0, nullptr);
    av_channel_layout_uninit(&out_layout);
    if (rc < 0 || swr_init(s_movie.swr_ctx) < 0) {
        if (s_movie.swr_ctx) swr_free(&s_movie.swr_ctx);
        SDL_CloseAudioDevice(s_movie.audio_dev);
        s_movie.audio_dev = 0;
        avcodec_free_context(&s_movie.audio_codec_ctx);
        return;
    }

    s_movie.audio_channels = channels;
    s_movie.audio_rate = rate;
    s_movie.audio_bytes_per_sec = rate * channels * 2;  // S16 = 2 bytes/sample
    s_movie.audio_bytes_queued = 0;
}

static int movie_open(const char* filepath) {
    movie_close();

    // Open file
    if (avformat_open_input(&s_movie.fmt_ctx, filepath, nullptr, nullptr) < 0) {
        return -1;
    }
    if (avformat_find_stream_info(s_movie.fmt_ctx, nullptr) < 0) {
        movie_close();
        return -1;
    }

    // Find video + audio streams
    s_movie.video_stream_idx = -1;
    s_movie.audio_stream_idx = -1;
    for (unsigned i = 0; i < s_movie.fmt_ctx->nb_streams; i++) {
        int type = s_movie.fmt_ctx->streams[i]->codecpar->codec_type;
        if (type == AVMEDIA_TYPE_VIDEO && s_movie.video_stream_idx < 0) {
            s_movie.video_stream_idx = (int)i;
        } else if (type == AVMEDIA_TYPE_AUDIO && s_movie.audio_stream_idx < 0) {
            s_movie.audio_stream_idx = (int)i;
        }
    }
    if (s_movie.video_stream_idx < 0) {
        movie_close();
        return -1;
    }

    // Open video codec
    AVCodecParameters* codecpar = s_movie.fmt_ctx->streams[s_movie.video_stream_idx]->codecpar;
    const AVCodec* codec = avcodec_find_decoder(codecpar->codec_id);
    if (!codec) {
        movie_close();
        return -1;
    }

    s_movie.video_codec_ctx = avcodec_alloc_context3(codec);
    if (!s_movie.video_codec_ctx) {
        movie_close();
        return -1;
    }
    avcodec_parameters_to_context(s_movie.video_codec_ctx, codecpar);
    if (avcodec_open2(s_movie.video_codec_ctx, codec, nullptr) < 0) {
        movie_close();
        return -1;
    }

    s_movie.width = s_movie.video_codec_ctx->width;
    s_movie.height = s_movie.video_codec_ctx->height;
    if (s_movie.width <= 0 || s_movie.height <= 0) {
        movie_close();
        return -1;
    }

    // Calculate FPS
    AVRational tb = s_movie.fmt_ctx->streams[s_movie.video_stream_idx]->avg_frame_rate;
    if (tb.num > 0 && tb.den > 0) {
        s_movie.fps = (double)tb.num / (double)tb.den;
    } else {
        s_movie.fps = 15.0;
    }
    s_movie.video_time_base =
        av_q2d(s_movie.fmt_ctx->streams[s_movie.video_stream_idx]->time_base);

    // Duration
    if (s_movie.fmt_ctx->duration > 0) {
        s_movie.duration_sec = (double)s_movie.fmt_ctx->duration / AV_TIME_BASE;
    }

    // Allocate frames
    s_movie.frame = av_frame_alloc();
    s_movie.frame_rgb = av_frame_alloc();
    if (!s_movie.frame || !s_movie.frame_rgb) {
        movie_close();
        return -1;
    }
    for (int i = 0; i < MCI_VIDEO_QUEUE_FRAMES; i++) {
        s_movie.queue[i].frame = av_frame_alloc();
        if (!s_movie.queue[i].frame) {
            movie_close();
            return -1;
        }
    }

    // RGB conversion buffer
    int num_bytes = av_image_get_buffer_size(AV_PIX_FMT_RGB24, s_movie.width, s_movie.height, 1);
    s_movie.rgb_buffer = (uint8_t*)av_malloc(num_bytes);
    if (!s_movie.rgb_buffer) {
        movie_close();
        return -1;
    }
    av_image_fill_arrays(s_movie.frame_rgb->data, s_movie.frame_rgb->linesize,
                         s_movie.rgb_buffer, AV_PIX_FMT_RGB24,
                         s_movie.width, s_movie.height, 1);

    // SWS context for pixel format conversion
    s_movie.sws_ctx = sws_getContext(
        s_movie.width, s_movie.height, s_movie.video_codec_ctx->pix_fmt,
        s_movie.width, s_movie.height, AV_PIX_FMT_RGB24,
        SWS_BILINEAR, nullptr, nullptr, nullptr);
    if (!s_movie.sws_ctx) {
        movie_close();
        return -1;
    }

    movie_open_audio();

    s_movie.is_open = 1;
    return 0;
}

// =============================================================================
// Internal helpers — clock, decode, present
// =============================================================================

// Seconds of playback elapsed. The audio device is the reference when there is
// one: SDL drains its queue at exactly the device rate, so bytes-consumed is
// the same timeline the player hears, and it stops of its own accord while
// paused. Wall clock is the silent-movie fallback.
// Playback position in seconds, measured on the wall clock from the moment
// "play mov" was issued.
//
// Deliberately NOT the audio clock. Deriving video timing from how much audio
// the device has consumed makes the two mutually dependent: the decode loop
// only advances when video frames are needed, and video frames are only due
// when the audio clock has advanced, so any hiccup in audio output stalls both.
// Both clocks track real time anyway, and SDL paces its own queue, so the
// wall clock keeps A/V together without the feedback loop.
static double movie_clock() {
    Uint32 base = s_movie.is_paused ? s_movie.pause_ticks : SDL_GetTicks();
    return (double)(base - s_movie.play_start_ticks) / 1000.0;
}

// Convert a decoded audio frame and hand it to the device.
static void movie_queue_audio(AVFrame *src) {
    if (!s_movie.audio_dev || !s_movie.swr_ctx) return;

    // Input and output rates are the same (the device was opened at the file's
    // rate), so the only slack needed is whatever the resampler is still
    // holding — no rate rescale.
    int64_t delay = swr_get_delay(s_movie.swr_ctx, s_movie.audio_rate);
    int max_out = (int)(delay + src->nb_samples);
    if (max_out <= 0) return;

    int out_bytes = max_out * s_movie.audio_channels * 2;
    uint8_t *out_buf = (uint8_t*)av_malloc(out_bytes);
    if (!out_buf) return;

    int got = swr_convert(s_movie.swr_ctx, &out_buf, max_out,
                          (const uint8_t**)src->extended_data, src->nb_samples);
    if (got > 0) {
        int bytes = got * s_movie.audio_channels * 2;
        if (SDL_QueueAudio(s_movie.audio_dev, out_buf, (Uint32)bytes) == 0) {
            s_movie.audio_bytes_queued += (uint64_t)bytes;
        }
    }
    av_free(out_buf);
}

// Take one decoded video frame into the look-ahead queue. Caller guarantees
// there is room.
static void movie_queue_video(AVFrame *src, double pts) {
    int slot = (s_movie.queue_head + s_movie.queue_count) % MCI_VIDEO_QUEUE_FRAMES;
    av_frame_unref(s_movie.queue[slot].frame);
    av_frame_move_ref(s_movie.queue[slot].frame, src);
    s_movie.queue[slot].pts = pts;
    s_movie.queue_count++;
}

// Drain whatever the decoders are still holding once the demuxer runs out.
// Without this a codec with an internal delay would swallow its last frames and
// the movie would cut short of its final image.
static void movie_flush_decoders() {
    if (s_movie.video_codec_ctx &&
        avcodec_send_packet(s_movie.video_codec_ctx, nullptr) >= 0) {
        while (s_movie.queue_count < MCI_VIDEO_QUEUE_FRAMES &&
               avcodec_receive_frame(s_movie.video_codec_ctx, s_movie.frame) == 0) {
            int64_t ts = s_movie.frame->best_effort_timestamp;
            double pts = (ts != AV_NOPTS_VALUE && s_movie.video_time_base > 0.0)
                       ? (double)ts * s_movie.video_time_base
                       : s_movie.next_synth_pts;
            s_movie.next_synth_pts = pts + (s_movie.fps > 0.0 ? 1.0 / s_movie.fps : 0.0);
            movie_queue_video(s_movie.frame, pts);
            av_frame_unref(s_movie.frame);
        }
    }
    if (s_movie.audio_codec_ctx &&
        avcodec_send_packet(s_movie.audio_codec_ctx, nullptr) >= 0) {
        while (avcodec_receive_frame(s_movie.audio_codec_ctx, s_movie.frame) == 0) {
            movie_queue_audio(s_movie.frame);
            av_frame_unref(s_movie.frame);
        }
    }
}

// Read and decode one packet. Returns 1 if the demuxer produced something, 0 at
// end of stream.
static int movie_decode_packet() {
    AVPacket *pkt = av_packet_alloc();
    if (!pkt) return 0;

    int alive = 0;
    int rc = av_read_frame(s_movie.fmt_ctx, pkt);
    if (rc >= 0) {
        alive = 1;
        s_movie.dbg_packets++;
        if (pkt->stream_index == s_movie.video_stream_idx) {
            if (avcodec_send_packet(s_movie.video_codec_ctx, pkt) >= 0) {
                while (s_movie.queue_count < MCI_VIDEO_QUEUE_FRAMES &&
                       avcodec_receive_frame(s_movie.video_codec_ctx, s_movie.frame) == 0) {
                    int64_t ts = s_movie.frame->best_effort_timestamp;
                    double pts;
                    if (ts != AV_NOPTS_VALUE && s_movie.video_time_base > 0.0) {
                        pts = (double)ts * s_movie.video_time_base;
                    } else {
                        pts = s_movie.next_synth_pts;
                    }
                    s_movie.next_synth_pts = pts + (s_movie.fps > 0.0 ? 1.0 / s_movie.fps : 0.0);
                    movie_queue_video(s_movie.frame, pts);
                    av_frame_unref(s_movie.frame);
                }
            }
        } else if (s_movie.audio_codec_ctx &&
                   pkt->stream_index == s_movie.audio_stream_idx) {
            if (avcodec_send_packet(s_movie.audio_codec_ctx, pkt) >= 0) {
                while (avcodec_receive_frame(s_movie.audio_codec_ctx, s_movie.frame) == 0) {
                    movie_queue_audio(s_movie.frame);
                    av_frame_unref(s_movie.frame);
                }
            }
        }
    }

    else {
        s_movie.dbg_read_err = rc;
    }

    av_packet_unref(pkt);
    av_packet_free(&pkt);
    return alive;
}

// Draw one decoded frame. The GL presenter owns the window in the default
// build (NOCTURNE_GL_PRESENT=1), in which case ddraw never made an
// SDL_Renderer and the SDL path below is dead; when GL is off the reverse is
// true. Sizing is handled for us either way: the presenter scales the frame to
// the engine's logical size (640x480) and integer-scales that into the window,
// which reproduces the original's "double it if the client area is bigger than
// 400x300" rule for a 320x240 movie.
static void movie_present(AVFrame *src) {
    sws_scale(s_movie.sws_ctx,
              src->data, src->linesize,
              0, s_movie.height,
              s_movie.frame_rgb->data, s_movie.frame_rgb->linesize);

    if (nocturne_gl_is_active()) {
        nocturne_gl_present_framebuffer(s_movie.frame_rgb->data[0],
                                        s_movie.width, s_movie.height,
                                        s_movie.frame_rgb->linesize[0], 24);
        return;
    }

    if (s_movie.texture && s_movie.renderer) {
        SDL_UpdateTexture(s_movie.texture, nullptr,
                          s_movie.frame_rgb->data[0],
                          s_movie.frame_rgb->linesize[0]);
        SDL_RenderClear(s_movie.renderer);
        SDL_RenderCopy(s_movie.renderer, s_movie.texture, nullptr, nullptr);
        SDL_RenderPresent(s_movie.renderer);
    }
}

// =============================================================================
// MCI Command Parser
// =============================================================================

// Extract the quoted filename from: open "path\to\file.avi" alias mov ...
static int parse_open_command(const char* cmd, char* filepath, int maxlen) {
    const char* q1 = strchr(cmd, '"');
    if (!q1) return -1;
    q1++;
    const char* q2 = strchr(q1, '"');
    if (!q2) return -1;
    int len = (int)(q2 - q1);
    if (len >= maxlen) len = maxlen - 1;
    memcpy(filepath, q1, len);
    filepath[len] = '\0';

    // Resolve the Watcom path the same way the CRT _fopen shim does — '\' to
    // '/' plus case-insensitive component matching — so "video\opening.avi"
    // finds video/OPENING.AVI the way the game's own existence check did.
    std::string resolved = watcom_resolve_fs_path(filepath);
    if (!resolved.empty() && (int)resolved.size() < maxlen) {
        memcpy(filepath, resolved.c_str(), resolved.size() + 1);
    }
    return 0;
}

// Get the SDL_Renderer from the DDraw shim's window (if available)
static SDL_Renderer* get_sdl_renderer() {
    // Try to get the renderer from any existing SDL window
    SDL_Window* win = SDL_GetGrabbedWindow();
    if (!win) {
        // Fall back to window ID 1 (usually the first created window)
        win = SDL_GetWindowFromID(1);
    }
    if (win) {
        return SDL_GetRenderer(win);
    }
    return nullptr;
}

static SDL_Window* get_sdl_window() {
    SDL_Window* win = SDL_GetGrabbedWindow();
    if (!win) win = SDL_GetWindowFromID(1);
    return win;
}

// =============================================================================
// Public MCI Shim Functions
// =============================================================================

MCIERROR shim_mciSendStringA(LPCSTR lpstrCommand, LPSTR lpstrReturnString,
                              UINT uReturnLength, HWND hwndCallback) {
    if (!lpstrCommand) return 1;

    // Clear return string
    if (lpstrReturnString && uReturnLength > 0) {
        lpstrReturnString[0] = '\0';
    }

    // ---- open "file.avi" alias mov ... ----
    if (strncmp(lpstrCommand, "open ", 5) == 0) {
        char filepath[512];
        if (parse_open_command(lpstrCommand, filepath, sizeof(filepath)) < 0) {
            return 1; // MCIERR_FILENAME_REQUIRED
        }

        int open_rc = movie_open(filepath);
        DLOG_EX("attract", "mci open '%s' -> %d (%dx%d fps=%.2f dur=%.1fs audio=%d)",
                filepath, open_rc, s_movie.width, s_movie.height,
                s_movie.fps, s_movie.duration_sec, s_movie.audio_stream_idx);
        if (open_rc < 0) {
            return 1; // MCIERR_DEVICE_NOT_READY
        }

        // Only meaningful on the non-GL path; get_sdl_renderer() returns null
        // when the GL presenter owns the window, and movie_present falls back
        // to it accordingly.
        s_movie.renderer = get_sdl_renderer();
        if (s_movie.renderer) {
            s_movie.texture = SDL_CreateTexture(
                s_movie.renderer, SDL_PIXELFORMAT_RGB24,
                SDL_TEXTUREACCESS_STREAMING,
                s_movie.width, s_movie.height);
        }

        return 0; // success
    }

    // ---- status mov window handle ----
    if (strncmp(lpstrCommand, "status mov window handle", 24) == 0) {
        if (lpstrReturnString && uReturnLength > 0) {
            // Return the SDL window ID as a string (game calls atoi on this).
            // This is deliberately NOT the game's own HWND: playMovie feeds the
            // result to MoveWindow to place the movie's child window, and the
            // user32 shim ignores MoveWindow for anything that isn't the real
            // top-level window — see shim_MoveWindow.
            SDL_Window* win = get_sdl_window();
            int id = win ? (int)SDL_GetWindowID(win) : 1;
            snprintf(lpstrReturnString, uReturnLength, "%d", id);
        }
        return 0;
    }

    // ---- where mov source ----
    if (strncmp(lpstrCommand, "where mov source", 16) == 0) {
        if (lpstrReturnString && uReturnLength > 0 && s_movie.is_open) {
            // MCI returns "x y w h" format
            snprintf(lpstrReturnString, uReturnLength, "0 0 %d %d",
                     s_movie.width, s_movie.height);
        }
        return 0;
    }

    // ---- play mov [window|fullscreen] [notify] ----
    if (strncmp(lpstrCommand, "play mov", 8) == 0) {
        if (!s_movie.is_open) return 1;
        s_movie.is_playing = 1;
        s_movie.is_paused = 0;
        s_movie.play_start_ticks = SDL_GetTicks();

        // Recorded but not acted on. The original asked MCI for a fullscreen
        // device when g_FullscreenMovie was set; toggling the SDL window's
        // fullscreen state here would fight the engine's own window management
        // and there is no path that restores it afterwards. The presenter
        // already fills the game's logical area either way.
        s_movie.fullscreen = strstr(lpstrCommand, "fullscreen") ? 1 : 0;

        if (s_movie.audio_dev) {
            SDL_PauseAudioDevice(s_movie.audio_dev, 0);
        }
        return 0;
    }

    // ---- pause mov ----
    if (strncmp(lpstrCommand, "pause mov", 9) == 0) {
        if (!s_movie.is_paused) {
            s_movie.is_paused = 1;
            s_movie.pause_ticks = SDL_GetTicks();
            if (s_movie.audio_dev) {
                SDL_PauseAudioDevice(s_movie.audio_dev, 1);
            }
        }
        return 0;
    }

    // ---- close mov ----
    if (strncmp(lpstrCommand, "close mov", 9) == 0) {
        movie_close();
        return 0;
    }

    // Unknown command — succeed silently
    return 0;
}

BOOL shim_mciGetErrorStringA(MCIERROR mcierr, LPSTR pszText, UINT cchText) {
    if (!pszText || cchText == 0) return 0;
    switch (mcierr) {
    case 0:
        strncpy(pszText, "No error", cchText);
        break;
    case 1:
        strncpy(pszText, "MCI error: operation failed", cchText);
        break;
    default:
        snprintf(pszText, cchText, "MCI error %lu", (unsigned long)mcierr);
        break;
    }
    pszText[cchText - 1] = '\0';
    return 1;
}

// =============================================================================
// Frame pump — called once per message-pump tick (see mci_video.h)
// =============================================================================

extern "C" int mci_video_pump_frame() {
    if (!s_movie.is_open || !s_movie.is_playing || s_movie.is_paused)
        return 0;

    const double now = movie_clock();

    // Decode ahead: keep the video queue full and the audio device fed. Both
    // matter — the audio queue running dry would stall the clock that decides
    // when the next video frame is due.
    int packets = 0;
    // Read only while the video queue has room. Audio rides along for free
    // because the streams are interleaved in the container, so filling N frames
    // of video also yields roughly N frames' worth of audio.
    //
    // Gating on audio as well (the obvious "keep both buffers topped up" form)
    // is a trap: once the video queue is full, avcodec_send_packet returns
    // EAGAIN with output pending, so the packet is neither decoded nor pushed
    // back — it is silently dropped. A pump that keeps reading for audio's sake
    // therefore shreds the video stream, and at ~50 pumps/sec x 256 packets it
    // consumes an entire 88-second movie in under a second and reports EOF.
    while (!s_movie.at_eof && packets < MCI_MAX_PACKETS_PER_PUMP) {
        if (s_movie.queue_count >= MCI_VIDEO_QUEUE_FRAMES) break;
        if (!movie_decode_packet()) {
            s_movie.at_eof = 1;
            movie_flush_decoders();
            break;
        }
        packets++;
    }

    // Present at most one frame per tick. Anything already overdue behind it is
    // dropped rather than drawn, so a stalled pump costs frames instead of
    // stretching the movie out past its real length.
    int presented = 0;
    while (s_movie.queue_count > 0 && s_movie.queue[s_movie.queue_head].pts <= now) {
        MciVideoFrame *f = &s_movie.queue[s_movie.queue_head];
        int is_last_due = !(s_movie.queue_count > 1 &&
                            s_movie.queue[(s_movie.queue_head + 1) % MCI_VIDEO_QUEUE_FRAMES].pts <= now);
        if (is_last_due && !presented) {
            movie_present(f->frame);
            presented = 1;
            s_movie.dbg_presented++;
        } else {
            s_movie.dbg_dropped++;
        }
        av_frame_unref(f->frame);
        s_movie.queue_head = (s_movie.queue_head + 1) % MCI_VIDEO_QUEUE_FRAMES;
        s_movie.queue_count--;
        if (presented) break;
    }

    // End of stream: demuxer drained, nothing left to show, and the audio
    // device has actually played out what was queued.
    // End of stream: demuxer drained, nothing left to show, and the audio
    // device has played out what was queued.
    //
    // The audio half of that test has to be able to give up. If the device
    // opened but never drains (no output sink), its queue stays non-empty, MM_MCINOTIFY is never posted, and the game sits
    // in playMovie's wait loop on the last frame until a key is pressed. That
    // is a hang, not a stall, so cap the wait: once the video has run out the
    // audio gets a bounded grace period to finish and then we call it done.
    if (s_movie.at_eof && s_movie.queue_count == 0) {
        if (s_movie.drained_ticks == 0) {
            s_movie.drained_ticks = SDL_GetTicks();
            DLOG_EX("attract",
                    "mci drained after %ums: packets=%u presented=%u dropped=%u "
                    "read_err=%d clock=%.2f audio_dev=%d queued=%u bps=%d",
                    (unsigned)(s_movie.drained_ticks - s_movie.play_start_ticks),
                    s_movie.dbg_packets, s_movie.dbg_presented, s_movie.dbg_dropped,
                    s_movie.dbg_read_err, now, (int)(s_movie.audio_dev != 0),
                    s_movie.audio_dev ? SDL_GetQueuedAudioSize(s_movie.audio_dev) : 0u,
                    s_movie.audio_bytes_per_sec);
        }
        int audio_done = !s_movie.audio_dev ||
                         SDL_GetQueuedAudioSize(s_movie.audio_dev) == 0;
        int waited_long_enough =
            (SDL_GetTicks() - s_movie.drained_ticks) > MCI_EOS_AUDIO_GRACE_MS;

        if (audio_done || waited_long_enough) {
            s_movie.is_playing = 0;
            if (!s_movie.notified) {
                s_movie.notified = 1;
                return 1;   // caller posts MM_MCINOTIFY
            }
        }
    }
    return 0;
}

extern "C" int mci_video_is_playing() {
    return s_movie.is_open && s_movie.is_playing && !s_movie.is_paused;
}
