#pragma once

// =============================================================================
// MOVIE WRITER — a short movie made with FFmpeg, for the tests that play one
// =============================================================================
//
// Frames at 15 fps, each a different shade, with PCM to match, so the tests need
// no binary media checked in. Raw BGR by default; another codec's frames are
// YUV 4:2:0, the shade in their brightness.

extern "C" {
#include <libavcodec/avcodec.h>
}

#include <cstddef>
#include <cstdint>
#include <string>

namespace movie_writer {

struct Movie {
    int width = 32;
    int height = 16;
    int frames = 15; // a second at 15 fps
    bool video = true;
    AVCodecID video_codec = AV_CODEC_ID_RAWVIDEO;
    int b_frames = 0;                        // which the decoder holds back until the end
    AVCodecID audio = AV_CODEC_ID_PCM_S16LE; // AV_CODEC_ID_NONE for none
    int rate = 22050;
    int channels = 1;
    int sound_frames = -1; // fifteenths of a second of sound; -1 for `frames`
    const char *container = "avi";
};

// Writes `movie` to `path`. False if the container could not be made.
bool write(const std::string &path, const Movie &movie);

// Overwrites `size` little-endian bytes at `offset` into the format chunk
// ('strf') of the AVI at `path`'s first stream of `type`, "vids" or "auds":
// BITMAPINFOHEADER for the one, WAVEFORMATEX for the other. False if there is
// no such stream.
bool patch_format(const std::string &path, const char *type, size_t offset, uint32_t value,
                  int size);

} // namespace movie_writer
