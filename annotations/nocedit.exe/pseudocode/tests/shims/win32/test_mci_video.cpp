// =============================================================================
// MCI VIDEO — the game's movies, opened, played and closed through MCI strings
// =============================================================================
//
// playMovie speaks to MCI in strings: open the file under an alias, ask where
// its picture is, play it, pump, and wait for the notify that says it ended.
// What matters is that a movie plays for its own length, shows its frames
// through whichever presenter owns the window, resumes where it was paused, and
// says once that it is done. The movies are written by movie_writer.h.

#include "nocturne_test.h"
#include "movie_writer.h"
#include "sdl_support.h"

#include "globals/globals_610000.h"
#include "system/mmsystem.h"
#include "win32/mci_video.h"
#include "win32/shim_init.h"

// The test's own main(), which SDL would otherwise rename on Windows.
#define SDL_MAIN_HANDLED
#include <SDL.h>

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <string>

namespace {

namespace fs = std::filesystem;
using sdl_support::stand;

using movie_writer::Movie;

bool write_movie(const std::string &path, const Movie &m) { return movie_writer::write(path, m); }

// --- driving it as playMovie does --------------------------------------------

MCIERROR mci(const std::string &command, char *reply = nullptr, UINT size = 0) {
    return g_mciSendStringAFunc(command.c_str(), reply, size, 0);
}

// Pumps until the movie says it ended, or `ms` pass; the notify, or 0.
int pump_until_done(int ms) {
    const Uint32 start = SDL_GetTicks();
    while (SDL_GetTicks() - start < (Uint32)ms) {
        if (mci_video_pump_frame()) return 1;
        SDL_Delay(5);
    }
    return 0;
}

struct Dir {
    fs::path root;
    fs::path previous;

    Dir() {
        std::error_code ec;
        previous = fs::current_path(ec);
        root = fs::temp_directory_path(ec) / "nocturne_mci_test";
        fs::remove_all(root, ec);
        fs::create_directories(root / "Video", ec);
        fs::current_path(root, ec);
        shims_init_mmsystem();
        stand.reset();
        SDL_setenv("SDL_AUDIODRIVER", "dummy", 1);
        SDL_setenv("SDL_VIDEODRIVER", "dummy", 1);
    }
    ~Dir() {
        mci("close mov");
        std::error_code ec;
        fs::current_path(previous, ec);
        fs::remove_all(root, ec);
    }
};

}  // namespace

// -----------------------------------------------------------------------------
// Opening
// -----------------------------------------------------------------------------

// The game's spelling of the path finds the file as it is on disk; where the
// picture is comes back as MCI's "x y w h".
NOCTURNE_TEST(a_movie_opens_by_the_games_path_and_says_where_its_picture_is) {
    Dir dir;
    CHECK(write_movie("Video/OPENING.AVI", Movie()));
    CHECK_EQ(mci("open \"video\\opening.avi\" alias mov"), 0u);
    char reply[64];
    CHECK_EQ(mci("where mov source", reply, sizeof(reply)), 0u);
    CHECK_EQ(std::string(reply), std::string("0 0 32 16"));
    CHECK_EQ(mci("status mov window handle", reply, sizeof(reply)), 0u);
    CHECK_EQ(atoi(reply), 1);
    // Asked for nowhere to put it, nothing is written.
    CHECK_EQ(mci("where mov source"), 0u);
    CHECK_EQ(mci("status mov window handle"), 0u);
}

// No file named, one not there, one that is not a movie or has no picture: each
// fails, and there is nothing to play.
NOCTURNE_TEST(a_movie_that_cannot_be_opened_is_an_error_and_nothing_to_play) {
    Dir dir;
    CHECK_EQ(mci("open video alias mov"), 1u);
    CHECK_EQ(mci("open \"video alias mov"), 1u);
    CHECK_EQ(mci("open \"video\\missing.avi\" alias mov"), 1u);

    FILE *text = fopen("Video/notes.avi", "wb");
    fputs("not a movie", text);
    fclose(text);
    CHECK_EQ(mci("open \"video\\notes.avi\" alias mov"), 1u);

    Movie sound_only;
    sound_only.video = false;
    sound_only.container = "wav";
    CHECK(write_movie("Video/sound.wav", sound_only));
    CHECK_EQ(mci("open \"video\\sound.wav\" alias mov"), 1u);

    CHECK_EQ(mci("play mov"), 1u);
    char reply[16] = "x";
    CHECK_EQ(mci("where mov source", reply, sizeof(reply)), 0u);
    CHECK_EQ(std::string(reply), std::string(""));
    CHECK_EQ(mci_video_pump_frame(), 0);
    CHECK_EQ(mci_video_is_playing(), 0);
}

// -----------------------------------------------------------------------------
// Playing
// -----------------------------------------------------------------------------

// A movie with sound plays for its own length through the GL presenter, frame
// by frame, and says it ended exactly once.
NOCTURNE_TEST(a_movie_plays_its_length_and_says_once_that_it_ended) {
    Dir dir;
    stand.gl_active = 1;
    CHECK(write_movie("Video/noc1.avi", Movie()));
    CHECK_EQ(mci("open \"video\\noc1.avi\" alias mov style child"), 0u);
    const Uint32 start = SDL_GetTicks();
    CHECK_EQ(mci("play mov notify"), 0u);
    CHECK_EQ(mci_video_is_playing(), 1);
    CHECK_EQ(pump_until_done(5000), 1);
    const Uint32 took = SDL_GetTicks() - start;
    CHECK(took >= 800);    // a second of movie, not a burst
    CHECK(stand.presents >= 5);
    CHECK_EQ(stand.present_width, 32);
    CHECK_EQ(stand.present_bpp, 24);
    // Ended is ended: nothing further to notify.
    CHECK_EQ(mci_video_pump_frame(), 0);
    CHECK_EQ(mci_video_is_playing(), 0);
}

// Without GL owning the window the movie draws through the window's SDL
// renderer; a movie with no sound runs on the clock alone.
NOCTURNE_TEST(without_gl_a_movie_draws_through_the_windows_renderer) {
    Dir dir;
    SDL_InitSubSystem(SDL_INIT_VIDEO);
    SDL_Window *window = SDL_CreateWindow("t", 0, 0, 64, 64, 0);
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
    CHECK(renderer != nullptr);
    Movie silent;
    silent.audio = AV_CODEC_ID_NONE;
    silent.frames = 6;
    CHECK(write_movie("Video/noc2.avi", silent));
    CHECK_EQ(mci("open \"video\\noc2.avi\" alias mov"), 0u);
    CHECK_EQ(mci("play mov fullscreen"), 0u);
    CHECK_EQ(pump_until_done(3000), 1);
    CHECK_EQ(stand.presents, 0);
    mci("close mov");
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);

    // And with neither, frames are decoded and simply not shown.
    CHECK_EQ(mci("open \"video\\noc2.avi\" alias mov"), 0u);
    CHECK_EQ(mci("play mov"), 0u);
    CHECK_EQ(pump_until_done(3000), 1);
}

// Paused, nothing advances; played again, it carries on from where it was
// rather than waiting out the pause. Silent, so the end is the picture's: the
// dummy sound device drains its queue slower than real time.
NOCTURNE_TEST(a_paused_movie_resumes_where_it_was) {
    Dir dir;
    stand.gl_active = 1;
    Movie two_seconds;
    two_seconds.frames = 30;
    two_seconds.audio = AV_CODEC_ID_NONE;
    CHECK(write_movie("Video/noc3.avi", two_seconds));
    CHECK_EQ(mci("open \"video\\noc3.avi\" alias mov"), 0u);
    CHECK_EQ(mci("pause mov"), 0u);   // before playing: nothing to pause
    mci("play mov");
    SDL_Delay(500);
    mci_video_pump_frame();
    CHECK_EQ(mci("pause mov"), 0u);
    CHECK_EQ(mci("pause mov"), 0u);   // twice is once
    CHECK_EQ(mci_video_is_playing(), 0);
    const int shown = stand.presents;
    SDL_Delay(1000);
    CHECK_EQ(mci_video_pump_frame(), 0);
    CHECK_EQ(stand.presents, shown);

    const Uint32 resumed = SDL_GetTicks();
    CHECK_EQ(mci("play mov"), 0u);
    // The next frame is a frame away, not a second.
    for (int i = 0; i < 40 && stand.presents == shown; ++i) {
        mci_video_pump_frame();
        SDL_Delay(5);
    }
    CHECK(SDL_GetTicks() - resumed < 300);
    CHECK_EQ(pump_until_done(5000), 1);
    const Uint32 rest = SDL_GetTicks() - resumed;
    CHECK(rest < 1900);   // the second and a half left, not that plus the pause
}

// A pump that falls behind drops the frames it missed rather than showing them
// late, so the movie keeps its length.
NOCTURNE_TEST(frames_missed_by_a_late_pump_are_dropped) {
    Dir dir;
    stand.gl_active = 1;
    CHECK(write_movie("Video/late.avi", Movie()));
    mci("open \"video\\late.avi\" alias mov");
    mci("play mov");
    mci_video_pump_frame();
    SDL_Delay(400);
    const int before = stand.presents;
    mci_video_pump_frame();
    CHECK_EQ(stand.presents, before + 1);   // one shown for the six that came due
    CHECK_EQ(pump_until_done(3000), 1);
}

// The game's movie level scales the sound, and muted is silence still played,
// so a muted movie lasts as long as one with sound.
NOCTURNE_TEST(the_movie_level_scales_its_sound_and_muted_is_silence) {
    Dir dir;
    stand.gl_active = 1;
    Movie stereo_u8;
    stereo_u8.audio = AV_CODEC_ID_PCM_U8;
    stereo_u8.channels = 2;
    stereo_u8.rate = 11025;
    stereo_u8.frames = 8;
    CHECK(write_movie("Video/noc4.avi", stereo_u8));
    for (float gain : {0.0f, 0.5f}) {
        stand.movie_gain = gain;
        CHECK_EQ(mci("open \"video\\noc4.avi\" alias mov"), 0u);
        const Uint32 start = SDL_GetTicks();
        mci("play mov");
        // The sound pauses with the picture.
        mci_video_pump_frame();
        CHECK_EQ(mci("pause mov"), 0u);
        CHECK_EQ(mci("play mov"), 0u);
        CHECK_EQ(pump_until_done(3000), 1);
        CHECK(SDL_GetTicks() - start >= 400);
        mci("close mov");
    }
}

// Sound past two channels is mixed down to what SDL is given.
NOCTURNE_TEST(a_movie_with_more_than_two_channels_plays) {
    Dir dir;
    stand.gl_active = 1;
    Movie surround;
    surround.channels = 6;
    surround.frames = 4;
    CHECK(write_movie("Video/six.avi", surround));
    CHECK_EQ(mci("open \"video\\six.avi\" alias mov"), 0u);
    mci("play mov");
    CHECK_EQ(pump_until_done(3000), 1);
}

// With no sound device the movie still plays, silent, on the clock.
NOCTURNE_TEST(without_a_sound_device_a_movie_plays_silent) {
    Dir dir;
    stand.gl_active = 1;
    SDL_QuitSubSystem(SDL_INIT_AUDIO);
    SDL_setenv("SDL_AUDIODRIVER", "no_such_driver", 1);
    CHECK(write_movie("Video/quiet.avi", Movie()));
    CHECK_EQ(mci("open \"video\\quiet.avi\" alias mov"), 0u);
    mci("play mov");
    CHECK_EQ(pump_until_done(3000), 1);
    SDL_setenv("SDL_AUDIODRIVER", "dummy", 1);
}

// -----------------------------------------------------------------------------
// The rest of MCI
// -----------------------------------------------------------------------------

// Commands the shim does not know succeed without doing anything, and no
// command at all is an error.
NOCTURNE_TEST(unknown_commands_succeed_and_none_is_an_error) {
    Dir dir;
    char reply[8] = "x";
    CHECK_EQ(mci("seek mov to start", reply, sizeof(reply)), 0u);
    CHECK_EQ(reply[0], '\0');
    CHECK_EQ(g_mciSendStringAFunc(nullptr, reply, sizeof(reply), 0), 1u);
    CHECK_EQ(mci("close mov"), 0u);
}

NOCTURNE_TEST(errors_are_described_in_words) {
    shims_init_mmsystem();
    char text[64];
    CHECK(g_mciGetErrorStringAFunc(0, text, sizeof(text)));
    CHECK_EQ(std::string(text), std::string("No error"));
    CHECK(g_mciGetErrorStringAFunc(1, text, sizeof(text)));
    CHECK(std::string(text).find("failed") != std::string::npos);
    CHECK(g_mciGetErrorStringAFunc(277, text, sizeof(text)));
    CHECK_EQ(std::string(text), std::string("MCI error 277"));
    char tiny[4];
    CHECK(g_mciGetErrorStringAFunc(0, tiny, sizeof(tiny)));
    CHECK_EQ(std::string(tiny), std::string("No "));
    CHECK(!g_mciGetErrorStringAFunc(0, nullptr, 8));
    CHECK(!g_mciGetErrorStringAFunc(0, text, 0));
}

NOCTURNE_TEST_MAIN()
