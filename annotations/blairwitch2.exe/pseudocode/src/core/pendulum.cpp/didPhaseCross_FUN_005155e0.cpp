// Name: core_pendulum.cpp_didPhaseCross_FUN_005155e0
// Address: 005155e0
// Address Range: [[005155e0, 005156c2]]
// Convention: __cdecl
// Signature: int __cdecl core_pendulum_cpp_didPhaseCross_FUN_005155e0(float threshold,float old_phase,float new_phase)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_pendulum_cpp_didPhaseCross_FUN_005155e0(float threshold,float old_phase,float new_phase)

{
  if (old_phase < threshold + (float)_DAT_005e1a2a) {
    old_phase = old_phase + 1.0;
  }
  if (threshold + (float)_DAT_005e1a32 < old_phase) {
    old_phase = old_phase + _DAT_005e1a3a;
  }
  if (old_phase <= threshold) {
    if (new_phase < old_phase) {
      new_phase = new_phase + 1.0;
    }
    if (new_phase < old_phase) {
      new_phase = new_phase + 1.0;
    }
    if (old_phase + 1.0 < new_phase) {
      new_phase = new_phase + _DAT_005e1a3a;
    }
    if (old_phase + 1.0 < new_phase) {
      new_phase = new_phase + _DAT_005e1a3a;
    }
    return (uint)(threshold < new_phase);
  }
  return 0;
}
