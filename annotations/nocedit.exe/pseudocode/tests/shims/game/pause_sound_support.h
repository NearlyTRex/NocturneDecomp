#pragma once

// =============================================================================
// PAUSE SOUND SUPPORT — the engine's sound slots, and its calls as a log
// =============================================================================
//
// g_SfxSlots, the options stack and the hardware voices are real arrays here.
// startSfx takes the first free slot as the engine's does, copying the options
// on top of the stack, and hands out serials from a counter.

#include <string>
#include <vector>

struct CSfxSlot;

namespace pause_sound_support {

// "shutdown", "init", "kill N", "start NAME at POS ch C flags F",
// "voice V held H", "enable", in the order they came.
extern std::vector<std::string> calls;

extern int muted;           // isSoundMuted
extern int rate;            // getAudioSampleRate
extern bool start_fails;    // startSfx returns 0 and takes no slot
extern int start_elsewhere; // >= 0: startSfx takes this slot instead
extern double position;     // getSfxPlaybackPosition, for every handle
extern int lock_depth;      // lockSound less unlockSound
extern int next_serial;     // the serial startSfx hands out next

// Everything cleared, every slot free.
void reset();

// Slot `index` playing `name` under `serial`, on hardware voice `voice` (0 for
// none, a software mix).
CSfxSlot &play(int index, int serial, const char *name, int voice = 0);

} // namespace pause_sound_support
