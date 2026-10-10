#pragma once

#include "platform/movieplayer.h"

#include <gmock/gmock.h>

namespace nocturne::platform {

class MockMoviePlayer : public IMoviePlayer {
public:
    MOCK_METHOD(bool, openMovie,
                (const std::filesystem::path &movie_filename, common::SExtent screen,
                 common::EPixelLayout layout),
                (override));
    MOCK_METHOD(common::SExtent, getMovieSize, (), (override));
    MOCK_METHOD(void, setMoviePlayback, (bool play), (override));
    MOCK_METHOD(void, updateMovie, (), (override));
    MOCK_METHOD(bool, isMoviePlaying, (), (override));
    MOCK_METHOD(void, setMovieVolume, (float gain), (override));
    MOCK_METHOD(void, closeMovie, (), (override));
};

} // namespace nocturne::platform
