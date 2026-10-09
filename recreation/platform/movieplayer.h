#pragma once

#include <filesystem>

namespace nocturne::platform {

class IMoviePlayer {
public:
    virtual ~IMoviePlayer() = default;

    [[nodiscard]] virtual bool openMovie(const std::filesystem::path &movie_filename,
                                         bool fullscreen) = 0;
    virtual void toggleMoviePlayback(bool play) = 0;
    // False once playback reaches the end or the movie is closed.
    [[nodiscard]] virtual bool isMoviePlaying() = 0;
    virtual void closeMovie() = 0;
};

} // namespace nocturne::platform
