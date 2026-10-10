#include "platform/movieplayer.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::platform {
namespace {

TEST(IMoviePlayer, IsAbstractWithVirtualDestructor) {
    static_assert(std::is_abstract_v<IMoviePlayer>);
    static_assert(std::has_virtual_destructor_v<IMoviePlayer>);
}

TEST(IMoviePlayer, PublicInterface) {
    static_assert(std::is_same_v<decltype(&IMoviePlayer::openMovie),
                                 bool (IMoviePlayer::*)(const std::filesystem::path &,
                                                        common::SExtent, common::EPixelLayout)>);
    static_assert(
        std::is_same_v<decltype(&IMoviePlayer::getMovieSize), common::SExtent (IMoviePlayer::*)()>);
    static_assert(
        std::is_same_v<decltype(&IMoviePlayer::setMoviePlayback), void (IMoviePlayer::*)(bool)>);
    static_assert(std::is_same_v<decltype(&IMoviePlayer::updateMovie), void (IMoviePlayer::*)()>);
    static_assert(
        std::is_same_v<decltype(&IMoviePlayer::isMoviePlaying), bool (IMoviePlayer::*)()>);
    static_assert(
        std::is_same_v<decltype(&IMoviePlayer::setMovieVolume), void (IMoviePlayer::*)(float)>);
    static_assert(std::is_same_v<decltype(&IMoviePlayer::closeMovie), void (IMoviePlayer::*)()>);
}

} // namespace
} // namespace nocturne::platform
