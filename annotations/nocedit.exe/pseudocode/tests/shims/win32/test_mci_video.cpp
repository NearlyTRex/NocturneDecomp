// =============================================================================
// MCI VIDEO — the game's movies, opened, played and closed through MCI strings
// =============================================================================
//
// playMovie speaks to MCI in strings: open the file under an alias, ask where
// its picture is, play it, pump, and wait for the notify that says it ended.
// What matters is that a movie plays for its own length, shows its frames
// through whichever presenter owns the window, resumes where it was paused, and
// says once that it is done. The movies are written by movie_writer.h; what no
// movie makes fail, ffmpeg_faults.h does.

#include "ffmpeg_faults.h"
#include "globals/globals_610000.h"
#include "movie_writer.h"
#include "nocturne_test.h"
#include "sdl_support.h"
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
#include <vector>

namespace {

namespace fs = std::filesystem;
using sdl_support::stand;

using movie_writer::Movie;

bool write_movie(const std::string &path, const Movie &m) {
    return movie_writer::write(path, m);
}

// --- driving it as playMovie does --------------------------------------------

MCIERROR mci(const std::string &command, char *reply = nullptr, UINT size = 0) {
    return g_mciSendStringAFunc(command.c_str(), reply, size, 0);
}

// Pumps until the movie says it ended, or `ms` pass; the notify, or 0.
int pump_until_done(int ms) {
    const Uint32 start = SDL_GetTicks();
    while (SDL_GetTicks() - start < (Uint32)ms) {
        if (mci_video_pump_frame())
            return 1;
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
        ffmpeg_faults::reset();
        std::error_code ec;
        fs::current_path(previous, ec);
        fs::remove_all(root, ec);
    }
};

} // namespace

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
    // Asked for nowhere to put it, or no room, nothing is written.
    CHECK_EQ(mci("where mov source"), 0u);
    CHECK_EQ(mci("status mov window handle"), 0u);
    strcpy(reply, "x");
    CHECK_EQ(mci("where mov source", reply, 0), 0u);
    CHECK_EQ(mci("status mov window handle", reply, 0), 0u);
    CHECK_EQ(std::string(reply), std::string("x"));
}

// The window handle is the game window's SDL id: the grabbed window's, else the
// first made, whose id is 1.
NOCTURNE_TEST(the_window_handle_is_the_game_windows) {
    Dir dir;
    SDL_InitSubSystem(SDL_INIT_VIDEO);
    SDL_Window *first = SDL_CreateWindow("first", 0, 0, 64, 64, 0);
    SDL_Window *second = SDL_CreateWindow("second", 0, 0, 64, 64, 0);
    char reply[16];
    CHECK_EQ(mci("status mov window handle", reply, sizeof(reply)), 0u);
    CHECK_EQ(atoi(reply), 1);
    SDL_RaiseWindow(second);
    SDL_SetWindowGrab(second, SDL_TRUE);
    CHECK_EQ(mci("status mov window handle", reply, sizeof(reply)), 0u);
    CHECK_EQ(atoi(reply), (int)SDL_GetWindowID(second));
    SDL_DestroyWindow(second);
    SDL_DestroyWindow(first);
    SDL_QuitSubSystem(SDL_INIT_VIDEO);
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

// A picture in a codec there is no decoder for, or with no width or height, is
// no movie.
NOCTURNE_TEST(a_picture_that_cannot_be_decoded_is_an_error) {
    Dir dir;
    struct Patch {
        size_t offset; // into the BITMAPINFOHEADER
        uint32_t value;
        int size;
    };
    const Patch patches[] = {
        {16, 0x5a5a5a5a, 4}, // biCompression: an unknown fourcc
        {4, 0, 4},           // biWidth
        {8, 0, 4},           // biHeight
    };
    for (const Patch &p : patches) {
        CHECK(write_movie("Video/bad.avi", Movie()));
        CHECK(movie_writer::patch_format("Video/bad.avi", "vids", p.offset, p.value, p.size));
        CHECK_EQ(mci("open \"video\\bad.avi\" alias mov"), 1u);
    }
}

// Each thing opening a movie makes, failing, fails the open and leaves nothing
// behind to play.
NOCTURNE_TEST(a_movie_whose_opening_fails_part_way_is_an_error) {
    Dir dir;
    CHECK(write_movie("Video/noc1.avi", Movie()));
    struct Fault {
        const char *call;
        int pass;
    };
    const Fault faults[] = {
        {"avformat_find_stream_info", 0},
        {"avcodec_alloc_context3", 0},
        {"avcodec_parameters_to_context", 0},
        {"avcodec_open2", 0},
        {"av_packet_alloc", 0},
        {"av_frame_alloc", 0}, // the decode frame
        {"av_frame_alloc", 1}, // the RGB one
        {"av_frame_alloc", 2}, // the first of the queue
        {"av_malloc", 0},
        {"sws_getContext", 0},
    };
    for (const Fault &f : faults) {
        ffmpeg_faults::fail(f.call, f.pass);
        CHECK_EQ(mci("open \"video\\noc1.avi\" alias mov"), 1u);
        CHECK_EQ(mci("play mov"), 1u);
        ffmpeg_faults::reset();
    }
    // And with nothing failing, the same movie opens.
    CHECK_EQ(mci("open \"video\\noc1.avi\" alias mov"), 0u);
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
    CHECK(took >= 800); // a second of movie, not a burst
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
    CHECK_EQ(mci("pause mov"), 0u); // before playing: nothing to pause
    mci("play mov");
    SDL_Delay(500);
    mci_video_pump_frame();
    CHECK_EQ(mci("pause mov"), 0u);
    CHECK_EQ(mci("pause mov"), 0u); // twice is once
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
    CHECK(rest < 1900); // the second and a half left, not that plus the pause
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
    CHECK_EQ(stand.presents, before + 1); // one shown for the six that came due
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

// Nor with every device SDL will open already taken.
NOCTURNE_TEST(with_every_sound_device_taken_a_movie_plays_silent) {
    Dir dir;
    stand.gl_active = 1;
    SDL_InitSubSystem(SDL_INIT_AUDIO);
    SDL_AudioSpec spec;
    SDL_zero(spec);
    spec.freq = 22050;
    spec.format = AUDIO_S16SYS;
    spec.channels = 1;
    spec.samples = 1024;
    std::vector<SDL_AudioDeviceID> taken;
    while (SDL_AudioDeviceID id = SDL_OpenAudioDevice(nullptr, 0, &spec, nullptr, 0)) {
        taken.push_back(id);
    }
    CHECK(!taken.empty());
    CHECK(write_movie("Video/quiet.avi", Movie()));
    CHECK_EQ(mci("open \"video\\quiet.avi\" alias mov"), 0u);
    mci("play mov");
    CHECK_EQ(pump_until_done(3000), 1);
    for (SDL_AudioDeviceID id : taken)
        SDL_CloseAudioDevice(id);
}

// Sound that cannot be decoded, or whose decoder or resampler fails to come up,
// is left out, and the picture plays. (A rate of 0 FFmpeg turns away itself.)
NOCTURNE_TEST(a_movie_whose_sound_cannot_be_played_plays_silent) {
    Dir dir;
    stand.gl_active = 1;
    Movie movie;
    movie.frames = 3;
    struct Patch {
        size_t offset; // into the WAVEFORMATEX
        uint32_t value;
        int size;
    };
    const Patch patches[] = {
        {0, 0x7777, 2}, // wFormatTag: no such codec
        {2, 0, 2},      // nChannels
    };
    for (const Patch &p : patches) {
        CHECK(write_movie("Video/mute.avi", movie));
        CHECK(movie_writer::patch_format("Video/mute.avi", "auds", p.offset, p.value, p.size));
        CHECK_EQ(mci("open \"video\\mute.avi\" alias mov"), 0u);
        mci("play mov");
        CHECK_EQ(pump_until_done(3000), 1);
        mci("close mov");
    }

    CHECK(write_movie("Video/mute.avi", movie));
    struct Fault {
        const char *call;
        int pass;
    };
    const Fault faults[] = {
        {"avcodec_alloc_context3", 1},
        {"avcodec_parameters_to_context", 1},
        {"avcodec_open2", 1},
        {"swr_alloc_set_opts2", 0},
        {"swr_init", 0},
    };
    for (const Fault &f : faults) {
        ffmpeg_faults::fail(f.call, f.pass);
        CHECK_EQ(mci("open \"video\\mute.avi\" alias mov"), 0u);
        mci("play mov");
        CHECK_EQ(pump_until_done(3000), 1);
        mci("close mov");
        ffmpeg_faults::reset();
    }
}

// Sound that runs on past the picture is waited for, but not forever: the end
// comes a few seconds after the picture's whether or not the device has played
// it out. The dummy device plays slower than real time, so it never has.
NOCTURNE_TEST(sound_left_playing_after_the_picture_is_given_up_on) {
    Dir dir;
    stand.gl_active = 1;
    Movie movie;
    movie.frames = 1;
    movie.sound_frames = 300; // twenty seconds
    CHECK(write_movie("Video/long.avi", movie));
    CHECK_EQ(mci("open \"video\\long.avi\" alias mov"), 0u);
    const Uint32 start = SDL_GetTicks();
    mci("play mov");
    CHECK_EQ(pump_until_done(8000), 1);
    const Uint32 took = SDL_GetTicks() - start;
    CHECK(took >= 3000);
    CHECK(took < 6000);
}

// The frames a decoder holds back are given up at the end and shown, the last
// of them the movie's last frame, though it comes out with no timestamp.
NOCTURNE_TEST(the_frames_a_decoder_holds_back_are_shown_at_the_end) {
    Dir dir;
    stand.gl_active = 1;
    Movie movie;
    movie.video_codec = AV_CODEC_ID_MPEG4;
    movie.b_frames = 2;
    movie.frames = 10;
    movie.audio = AV_CODEC_ID_NONE;
    CHECK(write_movie("Video/bframes.avi", movie));
    CHECK_EQ(mci("open \"video\\bframes.avi\" alias mov"), 0u);
    mci("play mov");
    CHECK_EQ(pump_until_done(3000), 1);
    // Brightness 9 * 16 = 144, the last frame's; the one before is 128.
    CHECK(stand.present_first_byte > 140);
}

// A movie whose container gives neither its rate nor its length plays all the
// same.
NOCTURNE_TEST(a_movie_that_does_not_say_its_rate_or_length_plays) {
    Dir dir;
    stand.gl_active = 1;
    Movie movie;
    movie.frames = 1;
    movie.audio = AV_CODEC_ID_NONE;
    movie.container = "nut";
    CHECK(write_movie("Video/rate.nut", movie));
    CHECK_EQ(mci("open \"video\\rate.nut\" alias mov"), 0u);
    mci("play mov");
    CHECK_EQ(pump_until_done(3000), 1);
    CHECK_EQ(stand.presents, 1);
}

// Played again while playing, a movie carries on rather than starting its clock
// over.
NOCTURNE_TEST(playing_a_playing_movie_carries_on) {
    Dir dir;
    stand.gl_active = 1;
    Movie movie;
    movie.audio = AV_CODEC_ID_NONE;
    CHECK(write_movie("Video/again.avi", movie));
    CHECK_EQ(mci("open \"video\\again.avi\" alias mov"), 0u);
    const Uint32 start = SDL_GetTicks();
    mci("play mov");
    SDL_Delay(500);
    mci_video_pump_frame();
    CHECK_EQ(mci("play mov"), 0u);
    CHECK_EQ(pump_until_done(3000), 1);
    CHECK(SDL_GetTicks() - start < 1400); // a second's movie, not a second and a half
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
