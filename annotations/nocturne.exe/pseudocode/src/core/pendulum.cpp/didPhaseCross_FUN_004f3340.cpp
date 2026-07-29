// Name: core_pendulum.cpp_didPhaseCross_FUN_004f3340
// Address: 004f3340
// Address Range: [[004f3340, 004f3422]]
// Convention: __cdecl
// Signature: int __cdecl core_pendulum_cpp_didPhaseCross_FUN_004f3340(float threshold,float old_phase,float new_phase)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_pendulum_cpp_didPhaseCross_FUN_004f3340(float threshold,float old_phase,float new_phase)

{
  if (old_phase < threshold + (float)_DAT_0058d020) {
    old_phase = old_phase + 1.0;
  }
  if (threshold + (float)_DAT_0058d028 < old_phase) {
    old_phase = old_phase + _DAT_0058d030;
  }
  if (old_phase <= threshold) {
    if (new_phase < old_phase) {
      new_phase = new_phase + 1.0;
    }
    if (new_phase < old_phase) {
      new_phase = new_phase + 1.0;
    }
    if (old_phase + 1.0 < new_phase) {
      new_phase = new_phase + _DAT_0058d030;
    }
    if (old_phase + 1.0 < new_phase) {
      new_phase = new_phase + _DAT_0058d030;
    }
    return (uint)(threshold < new_phase);
  }
  return 0;
}
