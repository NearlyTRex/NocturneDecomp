#pragma once

#include "platform/movieplayer.h"

#include <gmock/gmock.h>

namespace nocturne::platform {

class MockMoviePlayer : public IMoviePlayer {
public:
    MOCK_METHOD(bool, openMovie, (const std::filesystem::path &movie_filename, bool fullscreen),
                (override));
    MOCK_METHOD(void, toggleMoviePlayback, (bool play), (override));
    MOCK_METHOD(bool, isMoviePlaying, (), (override));
    MOCK_METHOD(void, closeMovie, (), (override));
};

} // namespace nocturne::platform
