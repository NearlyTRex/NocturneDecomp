#pragma once

// =============================================================================
// MOVIE WRITER — a short movie made with FFmpeg, for the tests that play one
// =============================================================================
//
// Raw BGR frames at 15 fps, each a different shade, with PCM to match, so the
// tests need no binary media checked in.

extern "C" {
#include <libavcodec/avcodec.h>
}

#include <string>

namespace movie_writer {

struct Movie {
    int width = 32;
    int height = 16;
    int frames = 15;          // a second at 15 fps
    bool video = true;
    AVCodecID audio = AV_CODEC_ID_PCM_S16LE;   // AV_CODEC_ID_NONE for none
    int rate = 22050;
    int channels = 1;
    const char *container = "avi";
};

// Writes `movie` to `path`. False if the container could not be made.
bool write(const std::string &path, const Movie &movie);

}  // namespace movie_writer
