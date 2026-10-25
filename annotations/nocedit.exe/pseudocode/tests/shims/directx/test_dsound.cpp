// =============================================================================
// DIRECTSOUND — the game's voices, summed into one output
// =============================================================================
//
// snddx.cpp makes a primary buffer for the output's format and its 3D listener,
// secondary buffers for samples and the music stream, duplicates of the samples
// for each sound effect playing, and 3D views of those it positions. What
// matters is what comes out: each voice at its rate, depth and channels, at its
// volume and distance, summed with the others and clipped. SDL's disk driver
// writes the output to a file, so each case reads back what was heard.

#include "globals/globals_610000.h"
#include "nocturne_test.h"
#include "system/dsound.h"
#include "win32/shim_init.h"

// The test's own main(), which SDL would otherwise rename on Windows.
#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <string>
#include <vector>

namespace {

namespace fs = std::filesystem;

const HRESULT kOk = 0;
const HRESULT kUnsupported = (HRESULT)0x80004001;
const HRESULT kNoDriver = (HRESULT)0x88780078;

const DWORD kPrimary = 0x1;
const DWORD kLooping = 0x1;
const DWORD kStatusPlaying = 0x1;
const DWORD kStatusLooping = 0x4;
const DWORD kModeHeadRelative = 1;
const DWORD kModeDisable = 2;

// The ones the game asks a buffer for.
GUID iid_3d_buffer = {0x279AFA86, 0x4981, 0x11CE, {0xA5, 0x21, 0x00, 0x20, 0xAF, 0x0B, 0xE5, 0x60}};
GUID iid_3d_listener = {
    0x279AFA84, 0x4981, 0x11CE, {0xA5, 0x21, 0x00, 0x20, 0xAF, 0x0B, 0xE5, 0x60}};
GUID iid_property_set = {
    0x31EFAC30, 0x515C, 0x11D0, {0xA9, 0xAA, 0x00, 0xAA, 0x00, 0x61, 0xBE, 0x93}};

void set_env(const char *name, const char *value) {
#if defined(_WIN32)
    _putenv_s(name, value);
#else
    setenv(name, value, 1);
#endif
}

ULONG release(void *object) {
    IUnknown *unknown = (IUnknown *)object;
    return (*unknown->vtable->Release)(unknown);
}

WAVEFORMATEX pcm(int channels, int bits, int rate) {
    WAVEFORMATEX format;
    memset(&format, 0, sizeof(format));
    format.wFormatTag = 1;
    format.nChannels = (WORD)channels;
    format.nSamplesPerSec = (DWORD)rate;
    format.wBitsPerSample = (WORD)bits;
    format.nBlockAlign = (WORD)(channels * bits / 8);
    format.nAvgBytesPerSec = format.nSamplesPerSec * format.nBlockAlign;
    return format;
}

// The output, through SDL's disk driver into a file, and the DirectSound object
// writing it. Releasing the object closes the file; heard() reads it back.
struct Sound {
    IDirectSound *ds = nullptr;
    fs::path file;

    Sound() {
        std::error_code ec;
        file = fs::temp_directory_path(ec) / "nocturne_dsound_test.raw";
        fs::remove(file, ec);
        SDL_QuitSubSystem(SDL_INIT_AUDIO);
        set_env("SDL_AUDIODRIVER", "disk");
        set_env("SDL_DISKAUDIOFILE", file.string().c_str());
        // As fast as it will go, a millisecond a buffer. Not on Windows: SDL's
        // getenv there answers into one shared buffer, and the disk driver
        // reads this after the file name, so the name becomes "1". There it
        // runs at the speed of sound, and the cases wait for a voice to end.
#if !defined(_WIN32)
        set_env("SDL_DISKAUDIODELAY", "1");
#endif
        shims_init_dsound();
        CHECK_EQ((*g_DirectSoundCreateFunc)(nullptr, &ds, nullptr), kOk);
    }
    ~Sound() {
        if (ds != nullptr)
            release(ds);
        SDL_QuitSubSystem(SDL_INIT_AUDIO);
        std::error_code ec;
        fs::remove(file, ec);
    }

    IDirectSoundBuffer *buffer(DWORD bytes, const WAVEFORMATEX &format) {
        WAVEFORMATEX copy = format;
        DSBUFFERDESC desc;
        memset(&desc, 0, sizeof(desc));
        desc.dwSize = sizeof(desc);
        desc.dwFlags = 0xb0; // the game's: volume, pan, frequency
        desc.dwBufferBytes = bytes;
        desc.lpwfxFormat = &copy;
        IDirectSoundBuffer *buf = nullptr;
        CHECK_EQ((*ds->vtable->CreateSoundBuffer)(ds, &desc, &buf, nullptr), kOk);
        return buf;
    }

    IDirectSoundBuffer *primary() {
        DSBUFFERDESC desc;
        memset(&desc, 0, sizeof(desc));
        desc.dwSize = sizeof(desc);
        desc.dwFlags = kPrimary | 0x10; // and 3D, as the game first asks
        IDirectSoundBuffer *buf = nullptr;
        CHECK_EQ((*ds->vtable->CreateSoundBuffer)(ds, &desc, &buf, nullptr), kOk);
        return buf;
    }

    // Every 16-bit sample that came out, left and right in turn. The buffers
    // must be released first.
    std::vector<int16_t> heard() {
        release(ds);
        ds = nullptr;
        std::vector<int16_t> samples;
        FILE *in = fopen(file.string().c_str(), "rb");
        if (in == nullptr)
            return samples;
        int16_t pair[2];
        while (fread(pair, sizeof(pair), 1, in) == 1) {
            samples.push_back(pair[0]);
            samples.push_back(pair[1]);
        }
        fclose(in);
        return samples;
    }
};

// A buffer of `frames` frames, every sample `value` (16-bit) or `value`+128
// (8-bit), on the left; the right gets `right`.
void fill(IDirectSoundBuffer *buf, DWORD bytes, int bits, int channels, int value, int right) {
    void *p1 = nullptr, *p2 = nullptr;
    DWORD n1 = 0, n2 = 0;
    CHECK_EQ((*buf->vtable->Lock)(buf, 0, bytes, &p1, &n1, &p2, &n2, 0), kOk);
    CHECK_EQ(n1, bytes);
    CHECK(p2 == nullptr);
    const int frame = channels * bits / 8;
    for (DWORD f = 0; f < bytes / frame; ++f) {
        for (int c = 0; c < channels; ++c) {
            const int v = c == 0 ? value : right;
            uint8_t *at = (uint8_t *)p1 + f * frame + c * bits / 8;
            if (bits == 8) {
                *at = (uint8_t)(v + 128);
            } else {
                const int16_t s = (int16_t)v;
                memcpy(at, &s, 2);
            }
        }
    }
    CHECK_EQ((*buf->vtable->Unlock)(buf, p1, n1, p2, n2), kOk);
}

// Until `buf` has played out, which the mixer marks as it reaches the end, or
// three seconds.
void wait_until_played(IDirectSoundBuffer *buf) {
    DWORD status = kStatusPlaying;
    for (int i = 0; i < 300 && (status & kStatusPlaying) != 0; ++i) {
        SDL_Delay(10);
        (*buf->vtable->GetStatus)(buf, &status);
    }
}

// How many output frames carried the voice, and the first of them.
struct Heard {
    int frames = 0;
    int left = 0;
    int right = 0;
};

Heard what_was_heard(const std::vector<int16_t> &out) {
    Heard h;
    for (size_t i = 0; i + 1 < out.size(); i += 2) {
        if (out[i] == 0 && out[i + 1] == 0)
            continue;
        if (h.frames == 0) {
            h.left = out[i];
            h.right = out[i + 1];
        }
        ++h.frames;
    }
    return h;
}

// Plays a mono 16-bit buffer of 1000s once, after `setup`, and says what came
// out.
template <typename Setup>
Heard play_once(Setup setup, int frames = 4410, int rate = 44100) {
    Sound sound;
    const DWORD bytes = (DWORD)frames * 2;
    IDirectSoundBuffer *buf = sound.buffer(bytes, pcm(1, 16, rate));
    fill(buf, bytes, 16, 1, 1000, 1000);
    setup(sound, buf);
    CHECK_EQ((*buf->vtable->Play)(buf, 0, 0, 0), kOk);
    wait_until_played(buf);
    release(buf);
    return what_was_heard(sound.heard());
}

void no_setup(Sound &, IDirectSoundBuffer *) {}

} // namespace

// -----------------------------------------------------------------------------
// What comes out
// -----------------------------------------------------------------------------

// A buffer plays once, all of it and no more, and then says it has stopped.
NOCTURNE_TEST(a_buffer_plays_once_through_and_stops) {
    Sound sound;
    IDirectSoundBuffer *buf = sound.buffer(4410 * 2, pcm(1, 16, 44100));
    fill(buf, 4410 * 2, 16, 1, 256, 256);
    DWORD status = 99;
    CHECK_EQ((*buf->vtable->GetStatus)(buf, &status), kOk);
    CHECK_EQ(status, 0u);
    CHECK_EQ((*buf->vtable->Play)(buf, 0, 0, 0), kOk);
    CHECK_EQ((*buf->vtable->GetStatus)(buf, &status), kOk);
    CHECK_EQ(status, kStatusPlaying);
    wait_until_played(buf);
    CHECK_EQ((*buf->vtable->GetStatus)(buf, &status), kOk);
    CHECK_EQ(status, 0u);
    DWORD play = 1, write = 1;
    CHECK_EQ((*buf->vtable->GetCurrentPosition)(buf, &play, &write), kOk);
    release(buf);
    const Heard h = what_was_heard(sound.heard());
    CHECK_EQ(h.frames, 4410);
    CHECK_EQ(h.left, 256);
    CHECK_EQ(h.right, 256);
}

// 8-bit is unsigned and 16-bit signed, and stereo keeps its sides.
NOCTURNE_TEST(each_depth_and_channel_count_comes_out_as_itself) {
    Sound sound;
    IDirectSoundBuffer *buf = sound.buffer(441 * 2, pcm(2, 8, 44100));
    fill(buf, 441 * 2, 8, 2, 64, -64);
    (*buf->vtable->Play)(buf, 0, 0, 0);
    wait_until_played(buf);
    release(buf);
    Heard h = what_was_heard(sound.heard());
    CHECK_EQ(h.frames, 441);
    CHECK_EQ(h.left, 64 << 8);
    CHECK_EQ(h.right, -(64 << 8));

    Sound stereo16;
    buf = stereo16.buffer(441 * 4, pcm(2, 16, 44100));
    fill(buf, 441 * 4, 16, 2, 1234, -4321);
    (*buf->vtable->Play)(buf, 0, 0, 0);
    wait_until_played(buf);
    release(buf);
    h = what_was_heard(stereo16.heard());
    CHECK_EQ(h.left, 1234);
    CHECK_EQ(h.right, -4321);

    Sound mono8;
    buf = mono8.buffer(441, pcm(1, 8, 44100));
    fill(buf, 441, 8, 1, -32, -32);
    (*buf->vtable->Play)(buf, 0, 0, 0);
    wait_until_played(buf);
    release(buf);
    h = what_was_heard(mono8.heard());
    CHECK_EQ(h.left, -(32 << 8));
    CHECK_EQ(h.right, -(32 << 8));
}

// A buffer plays at its own rate, or the one it is set to; 0 is its own again.
NOCTURNE_TEST(a_buffer_plays_at_its_frequency) {
    CHECK_EQ(play_once(no_setup, 2205, 22050).frames, 4410);
    CHECK_EQ(play_once([](Sound &, IDirectSoundBuffer *b) {
                 (*b->vtable->SetFrequency)(b, 88200);
             }).frames,
             2205);
    CHECK_EQ(play_once([](Sound &, IDirectSoundBuffer *b) {
                 (*b->vtable->SetFrequency)(b, 88200);
                 (*b->vtable->SetFrequency)(b, 0);
             }).frames,
             4410);
}

// Volume is hundredths of a decibel down: -20dB is a tenth.
NOCTURNE_TEST(volume_is_attenuation_in_hundredths_of_a_decibel) {
    const Heard h = play_once([](Sound &, IDirectSoundBuffer *b) {
        (*b->vtable->SetVolume)(b, 0);
        for (int i = 0; i < 100; ++i)
            (*b->vtable->SetVolume)(b, -2000);
    });
    CHECK_EQ(h.left, 100);
    CHECK_EQ(play_once([](Sound &, IDirectSoundBuffer *b) { (*b->vtable->SetVolume)(b, 0); }).left,
             1000);
}

// Voices are summed, and the sum is clipped rather than wrapped.
NOCTURNE_TEST(voices_are_summed_and_clipped) {
    Sound sound;
    IDirectSoundBuffer *loud = sound.buffer(882, pcm(2, 16, 44100));
    IDirectSoundBuffer *louder = sound.buffer(882, pcm(2, 16, 44100));
    fill(loud, 882, 16, 2, 30000, -30000);
    fill(louder, 882, 16, 2, 30000, -30000);
    (*loud->vtable->Play)(loud, 0, 0, 0);
    (*louder->vtable->Play)(louder, 0, 0, 0);
    wait_until_played(loud);
    wait_until_played(louder);
    release(loud);
    release(louder);
    const Heard h = what_was_heard(sound.heard());
    CHECK_EQ(h.left, 32767);
    CHECK_EQ(h.right, -32768);
}

// A looping buffer plays until stopped, its cursor going round with it; a
// stopped one says so, and a buffer with nothing in it plays nothing.
NOCTURNE_TEST(a_looping_buffer_plays_until_stopped) {
    Sound sound;
    // 1024 frames: a device buffer's worth, so a pass can end on its end.
    IDirectSoundBuffer *buf = sound.buffer(1024 * 2, pcm(1, 16, 44100));
    fill(buf, 1024 * 2, 16, 1, 500, 500);
    IDirectSoundBuffer *empty = sound.buffer(0, pcm(1, 16, 44100));
    (*empty->vtable->Play)(empty, 0, 0, kLooping);
    CHECK_EQ((*buf->vtable->Play)(buf, 0, 0, kLooping), kOk);
    DWORD status = 0;
    (*buf->vtable->GetStatus)(buf, &status);
    CHECK_EQ(status, kStatusPlaying | kStatusLooping);
    SDL_Delay(600);
    DWORD play = 0, write = 0;
    CHECK_EQ((*buf->vtable->GetCurrentPosition)(buf, &play, &write), kOk);
    CHECK(play < 1024 * 2);
    CHECK_EQ(play % 2, 0u);
    CHECK_EQ(write, play);
    CHECK_EQ((*buf->vtable->Stop)(buf), kOk);
    (*buf->vtable->GetStatus)(buf, &status);
    CHECK_EQ(status, kStatusLooping);
    release(empty);
    release(buf);
    CHECK(what_was_heard(sound.heard()).frames > 10000);
}

// The cursor is set to a whole frame within the buffer; a buffer of nothing
// has nowhere but 0.
NOCTURNE_TEST(the_cursor_is_set_to_a_whole_frame_within_the_buffer) {
    Sound sound;
    IDirectSoundBuffer *buf = sound.buffer(400, pcm(2, 16, 44100));
    DWORD play = 0, write = 0;
    CHECK_EQ((*buf->vtable->SetCurrentPosition)(buf, 398), kOk); // mid-frame
    (*buf->vtable->GetCurrentPosition)(buf, &play, &write);
    CHECK_EQ(play, 396u);
    CHECK_EQ((*buf->vtable->SetCurrentPosition)(buf, 1003), kOk);
    (*buf->vtable->GetCurrentPosition)(buf, &play, &write);
    CHECK_EQ(play, 200u);
    IDirectSoundBuffer *empty = sound.buffer(0, pcm(1, 16, 44100));
    CHECK_EQ((*empty->vtable->SetCurrentPosition)(empty, 10), kOk);
    (*empty->vtable->GetCurrentPosition)(empty, &play, &write);
    CHECK_EQ(play, 0u);
    release(empty);
    release(buf);
}

// A lock past the end of the buffer wraps round to its start.
NOCTURNE_TEST(a_lock_past_the_end_wraps_round) {
    Sound sound;
    IDirectSoundBuffer *buf = sound.buffer(100, pcm(1, 16, 44100));
    for (int i = 0; i < 1000; ++i) {
        void *p1 = nullptr, *p2 = nullptr;
        DWORD n1 = 0, n2 = 0;
        CHECK_EQ((*buf->vtable->Lock)(buf, 80, 40, &p1, &n1, &p2, &n2, 0), kOk);
        CHECK_EQ(n1, 20u);
        CHECK_EQ(n2, 20u);
        CHECK(p2 != nullptr);
        CHECK_EQ((uint8_t *)p1 - (uint8_t *)p2, 80);
        // A short write is not peeked at.
        CHECK_EQ((*buf->vtable->Unlock)(buf, p1, n1 / 2, p2, n2), kOk);
    }
    release(buf);
}

// A duplicate plays the original's samples, writes to either reach both, and
// they outlive the original being freed, as freeSample does to one still
// playing.
NOCTURNE_TEST(a_duplicate_shares_its_originals_samples) {
    Sound sound;
    IDirectSoundBuffer *original = sound.buffer(4410 * 2, pcm(1, 16, 44100));
    (*original->vtable->SetVolume)(original, -2000);
    IDirectSoundBuffer *dup = nullptr;
    CHECK_EQ((*sound.ds->vtable->DuplicateSoundBuffer)(sound.ds, original, &dup), kOk);
    fill(original, 4410 * 2, 16, 1, 1000, 1000);
    release(original);
    CHECK_EQ((*dup->vtable->Play)(dup, 0, 0, 0), kOk);
    wait_until_played(dup);
    release(dup);
    const Heard h = what_was_heard(sound.heard());
    CHECK_EQ(h.frames, 4410);
    CHECK_EQ(h.left, 100); // and its volume
}

// Past the mixer's sixty-four voices a buffer still works, unheard.
NOCTURNE_TEST(past_sixty_four_voices_a_buffer_is_silent) {
    Sound sound;
    std::vector<IDirectSoundBuffer *> voices;
    for (int i = 0; i < 64; ++i)
        voices.push_back(sound.buffer(4, pcm(1, 16, 44100)));
    IDirectSoundBuffer *unheard = sound.buffer(441 * 2, pcm(1, 16, 44100));
    fill(unheard, 441 * 2, 16, 1, 1000, 1000);
    CHECK_EQ((*unheard->vtable->Play)(unheard, 0, 0, 0), kOk);
    SDL_Delay(50);
    release(unheard);
    for (IDirectSoundBuffer *v : voices)
        release(v);
    CHECK_EQ(what_was_heard(sound.heard()).frames, 0);
}

// With no output to be had the buffers still work; Play asks for it again and
// sound comes out once there is one.
NOCTURNE_TEST(without_an_output_buffers_play_unheard_until_there_is_one) {
    Sound sound;
    SDL_AudioSpec spec;
    SDL_zero(spec);
    spec.freq = 44100;
    spec.format = AUDIO_S16SYS;
    spec.channels = 2;
    spec.samples = 1024;
    // Each to a file of its own: Windows will not open one file for writing
    // twice, which would end this before SDL runs out of devices.
    std::vector<SDL_AudioDeviceID> taken;
    std::vector<fs::path> elsewhere;
    for (;;) {
        elsewhere.push_back(
            fs::path(sound.file)
                .replace_extension(".taken" + std::to_string(elsewhere.size()) + ".raw"));
        set_env("SDL_DISKAUDIOFILE", elsewhere.back().string().c_str());
        SDL_AudioDeviceID id = SDL_OpenAudioDevice(nullptr, 0, &spec, nullptr, 0);
        if (id == 0)
            break;
        taken.push_back(id);
    }
    set_env("SDL_DISKAUDIOFILE", sound.file.string().c_str());
    CHECK(!taken.empty());
    IDirectSoundBuffer *buf = sound.buffer(441 * 2, pcm(1, 16, 44100));
    fill(buf, 441 * 2, 16, 1, 1000, 1000);
    CHECK_EQ((*buf->vtable->Play)(buf, 0, 0, 0), kOk);
    for (SDL_AudioDeviceID id : taken)
        SDL_CloseAudioDevice(id);
    CHECK_EQ((*buf->vtable->Play)(buf, 0, 0, 0), kOk);
    wait_until_played(buf);
    release(buf);
    CHECK_EQ(what_was_heard(sound.heard()).frames, 441);
    std::error_code ec;
    for (const fs::path &file : elsewhere)
        fs::remove(file, ec);
}

// -----------------------------------------------------------------------------
// 3D
// -----------------------------------------------------------------------------

// A positioned voice is attenuated by its distance from the listener: none
// within the minimum distance, the minimum over the distance past it, and no
// more past the maximum. Head-relative is measured from the listener itself,
// disabled is not attenuated, and a NaN position is ignored.
NOCTURNE_TEST(a_positioned_voice_falls_off_with_distance) {
    struct Case {
        float min, max, x;
        DWORD mode;
        bool listener;
        int level;
    };
    const Case cases[] = {
        {10, 100, 40, 0, false, 250}, // 10/40
        {10, 100, 5, 0, false, 1000}, // within the minimum
        {10, 20, 40, 0, false, 500},  // capped at the maximum: 10/20
        {0, 100, 4, 0, false, 250},   // a minimum of 0 is 1
        {10, 5, 40, 0, false, 1000},  // a maximum under the minimum is it
        {10, 100, 40, 0, true, 500},  // from a listener at 20
        {10, 100, 40, kModeHeadRelative, true, 250},
        {10, 100, 40, kModeDisable, false, 1000},
        {10, 100, NAN, 0, true, 1000},
    };
    for (const Case &c : cases) {
        Sound sound;
        IDirectSoundBuffer *primary = sound.primary();
        IDirectSound3DListener *listener = nullptr;
        if (c.listener) {
            CHECK_EQ((*primary->vtable->QueryInterface)((IUnknown *)primary, &iid_3d_listener,
                                                        (void **)&listener),
                     kOk);
            (*listener->vtable->SetPosition)(listener, 20, 0, 0, 0);
            (*listener->vtable->SetVelocity)(listener, 0, 0, 0, 0);
            (*listener->vtable->SetOrientation)(listener, 0, 0, 1, 0, 1, 0, 0);
            (*listener->vtable->SetDistanceFactor)(listener, 0.3048f, 0);
            CHECK_EQ((*listener->vtable->CommitDeferredSettings)(listener), kOk);
        }
        IDirectSoundBuffer *buf = sound.buffer(441 * 2, pcm(1, 16, 44100));
        fill(buf, 441 * 2, 16, 1, 1000, 1000);
        IDirectSound3DBuffer *d3d = nullptr;
        CHECK_EQ((*buf->vtable->QueryInterface)((IUnknown *)buf, &iid_3d_buffer, (void **)&d3d),
                 kOk);
        (*d3d->vtable->SetMinDistance)(d3d, c.min, 0);
        (*d3d->vtable->SetMaxDistance)(d3d, c.max, 0);
        (*d3d->vtable->SetMode)(d3d, c.mode, 0);
        (*d3d->vtable->SetPosition)(d3d, c.x, 0, 0, 0);
        (*d3d->vtable->SetVelocity)(d3d, 0, 0, 0, 0);
        // The game's EAX query, which it plays on without.
        void *property_set = nullptr;
        CHECK_EQ((*d3d->vtable->QueryInterface)((IUnknown *)d3d, &iid_property_set, &property_set),
                 kUnsupported);
        (*buf->vtable->Play)(buf, 0, 0, 0);
        wait_until_played(buf);
        release(d3d);
        release(buf);
        if (listener != nullptr)
            release(listener);
        release(primary);
        const Heard h = what_was_heard(sound.heard());
        CHECK_AT(std::abs(h.left - c.level) <= 1,
                 "case for " + std::to_string(c.level) + ", heard " + std::to_string(h.left));
    }
}

// The 3D view and the listener can go before or after what they belong to,
// and the voice is then not attenuated. A listener asked for again replaces
// the last.
NOCTURNE_TEST(the_3d_view_and_listener_go_in_either_order) {
    Sound sound;
    IDirectSoundBuffer *primary = sound.primary();
    IDirectSound3DListener *replaced = nullptr;
    (*primary->vtable->QueryInterface)((IUnknown *)primary, &iid_3d_listener, (void **)&replaced);
    IDirectSound3DListener *listener = nullptr;
    (*primary->vtable->QueryInterface)((IUnknown *)primary, &iid_3d_listener, (void **)&listener);
    CHECK_EQ(release(replaced), 0u);
    IDirectSoundBuffer *first = sound.buffer(441 * 2, pcm(1, 16, 44100));
    IDirectSoundBuffer *second = sound.buffer(441 * 2, pcm(1, 16, 44100));
    IDirectSound3DBuffer *first_3d = nullptr, *second_3d = nullptr;
    (*first->vtable->QueryInterface)((IUnknown *)first, &iid_3d_buffer, (void **)&first_3d);
    (*second->vtable->QueryInterface)((IUnknown *)second, &iid_3d_buffer, (void **)&second_3d);
    (*first_3d->vtable->SetPosition)(first_3d, 1000, 0, 0, 0);
    CHECK_EQ(release(first_3d), 0u); // the view first
    CHECK_EQ(release(listener), 0u);
    fill(first, 441 * 2, 16, 1, 1000, 1000);
    (*first->vtable->Play)(first, 0, 0, 0);
    wait_until_played(first);
    CHECK_EQ(release(first), 0u);
    CHECK_EQ(release(second), 0u); // the buffer first
    CHECK_EQ(release(second_3d), 0u);
    CHECK_EQ(release(primary), 0u);
    CHECK_EQ(what_was_heard(sound.heard()).left, 1000);
}

// A NaN position the game hands over for long enough is logged at intervals,
// and never attenuates.
NOCTURNE_TEST(a_nan_position_held_is_ignored_throughout) {
    Sound sound;
    IDirectSoundBuffer *buf = sound.buffer(1024 * 2, pcm(1, 16, 44100));
    fill(buf, 1024 * 2, 16, 1, 1000, 1000);
    IDirectSound3DBuffer *d3d = nullptr;
    (*buf->vtable->QueryInterface)((IUnknown *)buf, &iid_3d_buffer, (void **)&d3d);
    (*d3d->vtable->SetPosition)(d3d, NAN, 0, 0, 0);
    (*buf->vtable->Play)(buf, 0, 0, kLooping);
    SDL_Delay(800);
    release(d3d);
    release(buf);
    CHECK_EQ(what_was_heard(sound.heard()).left, 1000);
}

// -----------------------------------------------------------------------------
// The device
// -----------------------------------------------------------------------------

// The primary buffer keeps the format it is set to, and gives back no more of
// it than there is room for: the game asks with Win32's 18 bytes.
NOCTURNE_TEST(the_primary_buffer_gives_back_its_format) {
    Sound sound;
    CHECK_EQ((*sound.ds->vtable->SetCooperativeLevel)(sound.ds, (HWND)1, 2), kOk);
    IDirectSoundBuffer *primary = sound.primary();
    WAVEFORMATEX format = pcm(2, 16, 22050);
    CHECK_EQ((*primary->vtable->SetFormat)(primary, &format), kOk);
    WAVEFORMATEX back;
    memset(&back, 0xee, sizeof(back));
    CHECK_EQ((*primary->vtable->GetFormat)(primary, &back, 18, nullptr), kOk);
    CHECK_EQ(back.nSamplesPerSec, 22050u);
    CHECK_EQ(back.wBitsPerSample, 16u);
    CHECK_EQ(((uint8_t *)&back)[18], 0xee); // past what was asked for
    DWORD written = 0;
    CHECK_EQ((*primary->vtable->GetFormat)(primary, &back, sizeof(back) + 4, &written), kOk);
    CHECK_EQ(written, (DWORD)sizeof(WAVEFORMATEX));
    release(primary);
}

// The device reports hardware mixing, which the game's enumeration looks for
// on a DirectSound of its own, made while the game's is up.
NOCTURNE_TEST(the_device_reports_hardware_mixing) {
    Sound sound;
    IDirectSound *probe = nullptr;
    CHECK_EQ((*g_DirectSoundCreateFunc)(nullptr, &probe, nullptr), kOk);
    DSCAPS caps;
    memset(&caps, 0xee, sizeof(caps));
    CHECK_EQ((*probe->vtable->GetCaps)(probe, &caps), kOk);
    CHECK_EQ(caps.dwSize, (DWORD)sizeof(DSCAPS));
    CHECK_EQ(caps.dwFlags, 0u);
    CHECK_EQ(caps.dwMaxHwMixingStaticBuffers, 16u);
    CHECK_EQ(release(probe), 0u);
}

namespace {

std::string enumerated;

BOOL record_device(LPGUID guid, LPCSTR description, LPCSTR module, LPVOID context) {
    CHECK(guid == nullptr);
    CHECK_EQ(std::string(module), std::string("SDL2"));
    CHECK(context == &enumerated);
    enumerated = description;
    return 1;
}

} // namespace

// One device is listed: by name once SDL's audio is up, by a stand-in before.
NOCTURNE_TEST(one_device_is_enumerated) {
    shims_init_dsound();
    SDL_QuitSubSystem(SDL_INIT_AUDIO);
    CHECK_EQ((*g_DirectSoundEnumerateAFunc)(record_device, &enumerated), kOk);
    CHECK_EQ(enumerated, std::string("Default Audio Device"));
    set_env("SDL_AUDIODRIVER", "dummy");
    SDL_InitSubSystem(SDL_INIT_AUDIO);
    CHECK_EQ((*g_DirectSoundEnumerateAFunc)(record_device, &enumerated), kOk);
    CHECK(!enumerated.empty());
    CHECK(enumerated != std::string("Default Audio Device"));
    SDL_QuitSubSystem(SDL_INIT_AUDIO);
}

// With no audio driver there is no DirectSound.
NOCTURNE_TEST(without_an_audio_driver_there_is_no_directsound) {
    shims_init_dsound();
    SDL_QuitSubSystem(SDL_INIT_AUDIO);
    set_env("SDL_AUDIODRIVER", "no_such_driver");
    IDirectSound *ds = nullptr;
    CHECK_EQ((*g_DirectSoundCreateFunc)(nullptr, &ds, nullptr), kNoDriver);
    CHECK(ds == nullptr);
}

NOCTURNE_TEST_MAIN()
