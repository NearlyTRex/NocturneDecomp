// =============================================================================
// MCI VIDEO SHIM - libav-backed AVI playback for mciSendString
// =============================================================================
//
// Implements the subset of MCI string commands used by the game's movie
// playback system (winvideo.cpp). The game opens AVI files via MCI and
// plays them in a child window or fullscreen.
//
// We decode video with libav (ffmpeg) and render frames to the game's
// SDL window/renderer via the DirectDraw shim's infrastructure.
//
// Supported MCI commands:
//   open "file.avi" alias mov [style child parent %d]
//   status mov window handle
//   where mov source
//   play mov [window|fullscreen] [notify]
//   pause mov
//   close mov
//

#include "system/mmsystem.h"
#include <SDL.h>

extern "C" {
#include <libavformat/avformat.h>
#include <libavcodec/avcodec.h>
#include <libavutil/imgutils.h>
#include <libswscale/swscale.h>
}

#include <cstring>
#include <cstdlib>
#include <cstdio>

// =============================================================================
// MCI Movie State
// =============================================================================

struct MciMovieState {
    // libav demuxer/decoder
    AVFormatContext* fmt_ctx;
    AVCodecContext* video_codec_ctx;
    int video_stream_idx;
    SwsContext* sws_ctx;

    // Decoded frame storage
    AVFrame* frame;         // raw decoded frame
    AVFrame* frame_rgb;     // converted to RGB/BGR for display
    uint8_t* rgb_buffer;

    // Video properties
    int width;
    int height;
    double fps;
    double duration_sec;

    // Playback state
    int is_open;
    int is_playing;
    int is_paused;
    HWND notify_window;

    // SDL rendering
    SDL_Texture* texture;
    SDL_Renderer* renderer;

    // Timing
    Uint32 play_start_ticks;
    Uint32 pause_ticks;
    int64_t next_pts;       // next frame pts in stream timebase

    // Parent window handle (from MCI open command)
    HWND parent_hwnd;
};

static MciMovieState s_movie = {};

// =============================================================================
// Internal helpers
// =============================================================================

static void movie_close() {
    if (s_movie.texture) {
        SDL_DestroyTexture(s_movie.texture);
        s_movie.texture = nullptr;
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
    if (s_movie.video_codec_ctx) {
        avcodec_free_context(&s_movie.video_codec_ctx);
    }
    if (s_movie.fmt_ctx) {
        avformat_close_input(&s_movie.fmt_ctx);
    }
    memset(&s_movie, 0, sizeof(s_movie));
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

    // Find video stream
    s_movie.video_stream_idx = -1;
    for (unsigned i = 0; i < s_movie.fmt_ctx->nb_streams; i++) {
        if (s_movie.fmt_ctx->streams[i]->codecpar->codec_type == AVMEDIA_TYPE_VIDEO) {
            s_movie.video_stream_idx = i;
            break;
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
    avcodec_parameters_to_context(s_movie.video_codec_ctx, codecpar);
    if (avcodec_open2(s_movie.video_codec_ctx, codec, nullptr) < 0) {
        movie_close();
        return -1;
    }

    s_movie.width = s_movie.video_codec_ctx->width;
    s_movie.height = s_movie.video_codec_ctx->height;

    // Calculate FPS
    AVRational tb = s_movie.fmt_ctx->streams[s_movie.video_stream_idx]->avg_frame_rate;
    if (tb.num > 0 && tb.den > 0) {
        s_movie.fps = (double)tb.num / (double)tb.den;
    } else {
        s_movie.fps = 24.0;
    }

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

    // RGB conversion buffer
    int num_bytes = av_image_get_buffer_size(AV_PIX_FMT_RGB24, s_movie.width, s_movie.height, 1);
    s_movie.rgb_buffer = (uint8_t*)av_malloc(num_bytes);
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

    s_movie.is_open = 1;
    return 0;
}

// Decode and display the next video frame. Called from the game's message pump.
// Returns 0 if a frame was displayed, 1 if end of stream, -1 on error.
static int movie_decode_next_frame() {
    if (!s_movie.is_open || !s_movie.is_playing || s_movie.is_paused)
        return -1;

    AVPacket* pkt = av_packet_alloc();
    if (!pkt) return -1;

    int result = -1;
    while (av_read_frame(s_movie.fmt_ctx, pkt) >= 0) {
        if (pkt->stream_index == s_movie.video_stream_idx) {
            int ret = avcodec_send_packet(s_movie.video_codec_ctx, pkt);
            if (ret < 0) {
                av_packet_unref(pkt);
                break;
            }

            ret = avcodec_receive_frame(s_movie.video_codec_ctx, s_movie.frame);
            if (ret == 0) {
                // Convert to RGB
                sws_scale(s_movie.sws_ctx,
                          s_movie.frame->data, s_movie.frame->linesize,
                          0, s_movie.height,
                          s_movie.frame_rgb->data, s_movie.frame_rgb->linesize);

                // Update SDL texture
                if (s_movie.texture && s_movie.renderer) {
                    SDL_UpdateTexture(s_movie.texture, nullptr,
                                     s_movie.frame_rgb->data[0],
                                     s_movie.frame_rgb->linesize[0]);
                    SDL_RenderClear(s_movie.renderer);
                    SDL_RenderCopy(s_movie.renderer, s_movie.texture, nullptr, nullptr);
                    SDL_RenderPresent(s_movie.renderer);
                }

                av_packet_unref(pkt);
                result = 0;
                break;
            }
        }
        av_packet_unref(pkt);
    }

    av_packet_free(&pkt);

    // If we couldn't read a frame, we've reached end of stream
    if (result != 0) return 1;
    return 0;
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

    // Convert backslashes to forward slashes for POSIX
    for (int i = 0; i < len; i++) {
        if (filepath[i] == '\\') filepath[i] = '/';
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

        if (movie_open(filepath) < 0) {
            return 1; // MCIERR_DEVICE_NOT_READY
        }

        // Try to get existing renderer
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
            // Return the SDL window ID as a string (game calls atoi on this)
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
        s_movie.notify_window = hwndCallback;

        // If fullscreen requested, try to make the window fullscreen
        if (strstr(lpstrCommand, "fullscreen")) {
            SDL_Window* win = get_sdl_window();
            if (win) SDL_SetWindowFullscreen(win, SDL_WINDOW_FULLSCREEN_DESKTOP);
        }

        // Decode and display the first frame immediately
        movie_decode_next_frame();
        return 0;
    }

    // ---- pause mov ----
    if (strncmp(lpstrCommand, "pause mov", 9) == 0) {
        s_movie.is_paused = 1;
        s_movie.pause_ticks = SDL_GetTicks();
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
// Frame pump - called by the game's message loop during movie playback
// =============================================================================
// The game polls g_MoviePlaying in a tight loop with Sleep(20).
// We expose this function so the mmsystem shim or the game's message pump
// can advance video frames at the right rate.

int mci_video_pump_frame() {
    if (!s_movie.is_open || !s_movie.is_playing || s_movie.is_paused)
        return 0;

    // Simple frame timing: advance one frame per call if enough time has passed
    Uint32 now = SDL_GetTicks();
    Uint32 elapsed = now - s_movie.play_start_ticks;
    double frame_interval_ms = 1000.0 / s_movie.fps;

    // Calculate which frame we should be on
    int target_frame = (int)(elapsed / frame_interval_ms);
    (void)target_frame; // We just decode sequentially for now

    int result = movie_decode_next_frame();
    if (result == 1) {
        // End of stream
        s_movie.is_playing = 0;
        return 1; // Signal movie finished
    }
    return 0;
}

int mci_video_is_playing() {
    return s_movie.is_open && s_movie.is_playing && !s_movie.is_paused;
}
