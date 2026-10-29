#pragma once

#include "engine/fwd.h"
#include "platform/fwd.h"
#include "sound/fwd.h"
#include "wincore/fwd.h"

#include <string_view>

namespace nocturne::wincore {

// What playMovie plays through and waits on.
struct SMovieOwners {
    platform::IFileSystem &file_system;
    platform::IMoviePlayer &movies;
    platform::IWindow &window;
    platform::IClock &clock;
    CWinRun &winrun;
    engine::CSpecial &special;
    engine::IScreenDevice &screen;
    engine::C2d &two_d;
    const sound::CSndMain &sound_main;
};

// Plays directory_path\movie_filename over a cleared screen until it ends or a key is typed.
// False when there is no such file; one that won't play shows a warning and counts as played.
bool playMovie(const SMovieOwners &owners, std::string_view directory_path,
               std::string_view movie_filename);

} // namespace nocturne::wincore
