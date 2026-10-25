// =============================================================================
// MMSYSTEM — the joystick, the clock, and wave-out on SDL
// =============================================================================
//
// The game plays its streamed sound by writing four WAVEHDRs in turn and
// polling WHDR_DONE to know when it may refill one. So what matters is that
// every buffer written is eventually marked done — played, reset or closed —
// and none is marked before then. The joystick is SDL's virtual one; audio is
// SDL's dummy driver, which consumes what it is given at the real rate. A pad
// plugged into the machine is hidden from it.
//
// The first case runs before SDL's audio is up, with a driver that does not
// exist, so the cases are in the order they have to be.

#include "globals/globals_610000.h"
#include "nocturne_test.h"
#include "system/mmsystem.h"
#include "win32/shim_init.h"

// The test's own main(), which SDL would otherwise rename on Windows.
#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>

namespace {

const MMRESULT kOk = 0;
const MMRESULT kError = 1;
const MMRESULT kBadDevice = 2;
const MMRESULT kInvalidParam = 11;
const DWORD kDone = 0x1;
const DWORD kPrepared = 0x2;

tWAVEFORMATEX format(int rate, int channels, int bits) {
    tWAVEFORMATEX f;
    memset(&f, 0, sizeof(f));
    f.wFormatTag = 1;
    f.nChannels = (WORD)channels;
    f.nSamplesPerSec = (DWORD)rate;
    f.wBitsPerSample = (WORD)bits;
    f.nBlockAlign = (WORD)(channels * bits / 8);
    f.nAvgBytesPerSec = f.nSamplesPerSec * f.nBlockAlign;
    return f;
}

struct Buffer {
    std::vector<char> bytes;
    wavehdr_tag header;

    explicit Buffer(size_t size) : bytes(size, 0) {
        memset(&header, 0, sizeof(header));
        header.lpData = bytes.data();
        header.dwBufferLength = (DWORD)size;
    }
};

// Whether `header` is marked done within `ms`.
bool done_within(const wavehdr_tag &header, int ms) {
    for (int waited = 0; waited < ms; waited += 5) {
        if ((header.dwFlags & kDone) != 0)
            return true;
        SDL_Delay(5);
    }
    return (header.dwFlags & kDone) != 0;
}

HWAVEOUT open_out(int rate, int channels, int bits) {
    tWAVEFORMATEX f = format(rate, channels, bits);
    HWAVEOUT out = nullptr;
    CHECK_EQ(g_waveOutOpenFunc(&out, 0, &f, 0, 0, 0), kOk);
    return out;
}

// SDL's joysticks with only the virtual ones in them. Every host driver but
// Windows' RawInput passes over a device whose ID is not on the allowed list,
// and none is FFFF/FFFF (an XInput pad whose ID cannot be read is 0/0);
// RawInput is turned off. The virtual driver never asks. SDL reads both as the
// subsystem starts.
void start_joysticks() {
    SDL_SetHint(SDL_HINT_GAMECONTROLLER_IGNORE_DEVICES_EXCEPT, "0xFFFF/0xFFFF");
    SDL_SetHint(SDL_HINT_JOYSTICK_RAWINPUT, "0");
    SDL_InitSubSystem(SDL_INIT_JOYSTICK);
}

} // namespace

// -----------------------------------------------------------------------------
// Before audio comes up
// -----------------------------------------------------------------------------

// No audio driver to be had is an error to open and a generic name to list;
// writing, resetting and closing with nothing open are answered without one.
NOCTURNE_TEST(without_an_audio_driver_wave_out_is_an_error) {
    shims_init_mmsystem();
    SDL_setenv("SDL_AUDIODRIVER", "no_such_driver", 1);
    tWAVEFORMATEX f = format(22050, 1, 16);
    HWAVEOUT out = nullptr;
    CHECK_EQ(g_waveOutOpenFunc(&out, 0, &f, 0, 0, 0), kError);
    tagWAVEOUTCAPSA caps;
    CHECK_EQ(g_waveOutGetDevCapsAFunc(0, &caps, sizeof(caps)), kOk);
    CHECK_EQ(std::string(caps.szPname), std::string("SDL Audio"));

    Buffer b(64);
    CHECK_EQ(g_waveOutWriteFunc(out, &b.header, sizeof(b.header)), kError);
    CHECK_EQ(g_waveOutResetFunc(out), kOk);
    CHECK_EQ(g_waveOutCloseFunc(out), kOk);
    SDL_setenv("SDL_AUDIODRIVER", "dummy", 1);
}

// -----------------------------------------------------------------------------
// Wave-out
// -----------------------------------------------------------------------------

// A buffer written is played and then marked done, one longer than a device
// period and one shorter alike, in the order they were written.
NOCTURNE_TEST(a_written_buffer_is_marked_done_once_it_has_played) {
    shims_init_mmsystem();
    HWAVEOUT out = open_out(22050, 1, 16);
    CHECK(out != nullptr);
    Buffer first(8192), second(100);
    CHECK_EQ(g_waveOutPrepareHeaderFunc(out, &first.header, sizeof(first.header)), kOk);
    CHECK_EQ(first.header.dwFlags & kPrepared, kPrepared);
    first.header.dwFlags |= kDone; // left over from a previous pass
    CHECK_EQ(g_waveOutWriteFunc(out, &first.header, sizeof(first.header)), kOk);
    CHECK_EQ(first.header.dwFlags & kDone, 0u);
    CHECK_EQ(g_waveOutWriteFunc(out, &second.header, sizeof(second.header)), kOk);
    CHECK(done_within(first.header, 3000));
    CHECK(done_within(second.header, 3000));
    // With nothing queued the device plays silence and asks again.
    SDL_Delay(100);
    CHECK_EQ(g_waveOutUnprepareHeaderFunc(out, &first.header, sizeof(first.header)), kOk);
    CHECK_EQ(first.header.dwFlags & kPrepared, 0u);
    CHECK_EQ(g_waveOutCloseFunc(out), kOk);
}

// Reset, close and reopen each end what is queued, and mark it done so the game
// can write the buffer again.
NOCTURNE_TEST(what_is_queued_is_marked_done_when_it_will_not_be_played) {
    shims_init_mmsystem();
    HWAVEOUT out = open_out(8000, 1, 8);
    Buffer reset(80000), closed(80000), reopened(80000);
    g_waveOutWriteFunc(out, &reset.header, sizeof(reset.header));
    CHECK_EQ(g_waveOutResetFunc(out), kOk);
    CHECK_EQ(reset.header.dwFlags & kDone, kDone);

    g_waveOutWriteFunc(out, &reopened.header, sizeof(reopened.header));
    out = open_out(8000, 2, 32);
    CHECK_EQ(reopened.header.dwFlags & kDone, kDone);

    g_waveOutWriteFunc(out, &closed.header, sizeof(closed.header));
    CHECK_EQ(g_waveOutCloseFunc(out), kOk);
    CHECK_EQ(closed.header.dwFlags & kDone, kDone);
    // Closed is closed: nothing more is taken.
    CHECK_EQ(g_waveOutWriteFunc(out, &closed.header, sizeof(closed.header)), kError);
    CHECK_EQ(g_waveOutCloseFunc(out), kOk);
}

NOCTURNE_TEST(a_format_or_buffer_wave_out_cannot_take_is_refused) {
    shims_init_mmsystem();
    tWAVEFORMATEX f24 = format(22050, 1, 24);
    tWAVEFORMATEX f16 = format(22050, 1, 16);
    tWAVEFORMATEX too_wide = format(22050, 9, 16);
    HWAVEOUT out = nullptr;
    CHECK_EQ(g_waveOutOpenFunc(&out, 0, &f24, 0, 0, 0), kError);
    CHECK_EQ(g_waveOutOpenFunc(&out, 0, &too_wide, 0, 0, 0), kError); // SDL takes up to 8
    CHECK_EQ(g_waveOutOpenFunc(nullptr, 0, &f16, 0, 0, 0), kInvalidParam);
    CHECK_EQ(g_waveOutOpenFunc(&out, 0, nullptr, 0, 0, 0), kInvalidParam);

    out = open_out(22050, 1, 16);
    Buffer b(16);
    CHECK_EQ(g_waveOutWriteFunc(out, nullptr, 0), kInvalidParam);
    b.header.lpData = nullptr;
    CHECK_EQ(g_waveOutWriteFunc(out, &b.header, sizeof(b.header)), kInvalidParam);
    CHECK_EQ(g_waveOutPrepareHeaderFunc(out, nullptr, 0), kOk);
    CHECK_EQ(g_waveOutUnprepareHeaderFunc(out, nullptr, 0), kOk);
    g_waveOutCloseFunc(out);
}

// One device, listed by the name the game puts in its sound menu.
NOCTURNE_TEST(the_one_output_device_is_listed_by_name) {
    shims_init_mmsystem();
    tagWAVEOUTCAPSA caps;
    CHECK_EQ(g_waveOutGetDevCapsAFunc(0, &caps, sizeof(caps)), kOk);
    CHECK(caps.szPname[0] != '\0');
    CHECK_EQ((int)caps.wChannels, 2);
    CHECK_EQ(g_waveOutGetDevCapsAFunc((UINT)-1, &caps, sizeof(caps)), kOk); // WAVE_MAPPER
    CHECK_EQ(g_waveOutGetDevCapsAFunc(3, &caps, sizeof(caps)), kBadDevice);
    CHECK_EQ(g_waveOutGetDevCapsAFunc(0, nullptr, 0), kInvalidParam);
}

// Recording is accepted and does nothing; the game opens it and never reads.
NOCTURNE_TEST(wave_in_is_accepted_and_records_nothing) {
    shims_init_mmsystem();
    HWAVEIN in = nullptr;
    tWAVEFORMATEX f = format(11025, 1, 8);
    CHECK_EQ(g_waveInOpenFunc(&in, 0, &f, 0, 0, 0), kOk);
    CHECK(in != nullptr);
    CHECK_EQ(g_waveInOpenFunc(nullptr, 0, &f, 0, 0, 0), kOk);
    Buffer b(16);
    CHECK_EQ(g_waveInPrepareHeaderFunc(in, &b.header, sizeof(b.header)), kOk);
    CHECK_EQ(g_waveInAddBufferFunc(in, &b.header, sizeof(b.header)), kOk);
    CHECK_EQ(g_waveInStartFunc(in), kOk);
    CHECK_EQ(g_waveInResetFunc(in), kOk);
    CHECK_EQ(g_waveInUnprepareHeaderFunc(in, &b.header, sizeof(b.header)), kOk);
    CHECK_EQ(g_waveInCloseFunc(in), kOk);
    tagWAVEINCAPSA caps;
    caps.wChannels = 9;
    CHECK_EQ(g_waveInGetDevCapsAFunc(0, &caps, sizeof(caps)), kOk);
    CHECK_EQ((int)caps.wChannels, 0);
    CHECK_EQ(g_waveInGetDevCapsAFunc(0, nullptr, 0), kOk);
}

// -----------------------------------------------------------------------------
// The clock
// -----------------------------------------------------------------------------

NOCTURNE_TEST(the_clock_counts_milliseconds_and_takes_any_period) {
    shims_init_mmsystem();
    CHECK_EQ(g_timeBeginPeriodFunc(1), kOk);
    const DWORD before = g_timeGetTimeFunc();
    SDL_Delay(20);
    CHECK(g_timeGetTimeFunc() - before >= 15);
    CHECK_EQ(g_timeEndPeriodFunc(1), kOk);
}

// -----------------------------------------------------------------------------
// The joystick
// -----------------------------------------------------------------------------

NOCTURNE_TEST(with_no_joystick_there_are_no_capabilities_and_no_position) {
    shims_init_mmsystem();
    start_joysticks();
    tagJOYCAPSA caps;
    CHECK_EQ(g_joyGetDevCapsAFunc(0, &caps, sizeof(caps)), 1u);
    CHECK_EQ(g_joyGetDevCapsAFunc(0, nullptr, 0), 1u);
    joyinfo_tag position;
    CHECK_EQ(g_joyGetPosFunc(0, &position), 1u);
    CHECK_EQ(g_joyGetPosFunc(0, nullptr), 1u);
}

// What initJoystick reads — the buttons and whether there is a POV hat — and the
// position in Win32's 0..65535 with a bit per button held.
NOCTURNE_TEST(a_joystick_reports_its_controls_and_where_they_are) {
    shims_init_mmsystem();
    start_joysticks();
    const int index = SDL_JoystickAttachVirtual(SDL_JOYSTICK_TYPE_GAMECONTROLLER, 3, 4, 1);
    if (index < 0)
        fprintf(stderr, "attach: %s\n", SDL_GetError());
    CHECK(index >= 0);
    tagJOYCAPSA caps;
    CHECK_EQ(g_joyGetDevCapsAFunc((UINT)index, &caps, sizeof(caps)), kOk);
    CHECK_EQ(caps.wNumButtons, 4u);
    CHECK_EQ(caps.wMaxButtons, 4u);
    CHECK_EQ(caps.wNumAxes, 3u);
    CHECK_EQ(caps.wXmax, 0xFFFFu);
    CHECK_EQ(caps.wCaps & 0x10u, 0x10u);

    SDL_Joystick *stick = SDL_JoystickOpen(index);
    SDL_JoystickSetVirtualAxis(stick, 0, -32768);
    SDL_JoystickSetVirtualAxis(stick, 1, 32767);
    SDL_JoystickSetVirtualButton(stick, 2, 1);
    SDL_JoystickUpdate();
    joyinfo_tag position;
    CHECK_EQ(g_joyGetPosFunc((UINT)index, &position), kOk);
    CHECK_EQ(position.wXpos, 0u);
    CHECK_EQ(position.wYpos, 65535u);
    CHECK_EQ(position.wZpos, 32768u);
    CHECK_EQ(position.wButtons, 0x4u);
    // Polled again, the same one.
    CHECK_EQ(g_joyGetPosFunc((UINT)index, &position), kOk);
    CHECK_EQ(position.wButtons, 0x4u);
    SDL_JoystickClose(stick);

    // Unplugged, it is let go of and reported so.
    SDL_JoystickDetachVirtual(index);
    SDL_JoystickUpdate();
    CHECK_EQ(g_joyGetPosFunc((UINT)index, &position), 1u);

    // One without a hat says so.
    const int plain = SDL_JoystickAttachVirtual(SDL_JOYSTICK_TYPE_GAMECONTROLLER, 2, 2, 0);
    CHECK_EQ(g_joyGetDevCapsAFunc((UINT)plain, &caps, sizeof(caps)), kOk);
    CHECK_EQ(caps.wCaps & 0x10u, 0u);
    SDL_JoystickDetachVirtual(plain);
}

// The button word has 32 bits; a stick with more reports the first 32.
NOCTURNE_TEST(buttons_past_the_32nd_have_no_bit) {
    shims_init_mmsystem();
    start_joysticks();
    const int index = SDL_JoystickAttachVirtual(SDL_JOYSTICK_TYPE_GAMECONTROLLER, 2, 40, 0);
    SDL_Joystick *stick = SDL_JoystickOpen(index);
    SDL_JoystickSetVirtualButton(stick, 31, 1);
    SDL_JoystickSetVirtualButton(stick, 35, 1);
    SDL_JoystickUpdate();
    joyinfo_tag position;
    CHECK_EQ(g_joyGetPosFunc((UINT)index, &position), kOk);
    CHECK_EQ(position.wButtons, 0x80000000u);
    SDL_JoystickClose(stick);
    SDL_JoystickDetachVirtual(index);
}

NOCTURNE_TEST_MAIN()
