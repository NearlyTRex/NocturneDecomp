#pragma once

#include "common/video/framebuffer.h"
#include "common/video/presentation.h"

#include <filesystem>

namespace nocturne::platform {

// The MCI movie device playMovie drives. The game's wait loop calls updateMovie where MCI ran
// on its own, and isMoviePlaying turning false stands in for MM_MCINOTIFY.
class IMoviePlayer {
public:
    virtual ~IMoviePlayer() = default;

    // "open": frames are drawn into a screen of this size and layout, placed as
    // positionMovieWindow places them. False when the file cannot be decoded.
    [[nodiscard]] virtual bool openMovie(const std::filesystem::path &movie_filename,
                                         common::SExtent screen, common::EPixelLayout layout) = 0;
    // "where mov source".
    [[nodiscard]] virtual common::SExtent getMovieSize() = 0;
    // "play" when true, "pause" when false.
    virtual void setMoviePlayback(bool play) = 0;
    // Presents the frame now due and queues the sound decoded with it.
    virtual void updateMovie() = 0;
    // False once the movie has ended or was closed.
    [[nodiscard]] virtual bool isMoviePlaying() = 0;
    // The MovieVolume setting; zero silences without changing the timing.
    virtual void setMovieVolume(float gain) = 0;
    virtual void closeMovie() = 0;
};

} // namespace nocturne::platform
