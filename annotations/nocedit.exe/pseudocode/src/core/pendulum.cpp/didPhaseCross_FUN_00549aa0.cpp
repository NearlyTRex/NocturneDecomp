// Name: core_pendulum.cpp_didPhaseCross_FUN_00549aa0
// Address: 00549aa0
// Address Range: [[00549aa0, 00549b82]]
// Convention: __cdecl
// Signature: int __cdecl core_pendulum_cpp_didPhaseCross_FUN_00549aa0(float threshold,float old_phase,float new_phase)

#include "nocturne.h"

int __cdecl core_pendulum_cpp_didPhaseCross_FUN_00549aa0(float threshold,float old_phase,float new_phase)

{
  if (old_phase < threshold + (float)-0.5) {
    old_phase = old_phase + 1.0;
  }
  if (threshold + (float)0.5 < old_phase) {
    old_phase = old_phase + -1.0f;
  }
  if (old_phase <= threshold) {
    if (new_phase < old_phase) {
      new_phase = new_phase + 1.0;
    }
    if (new_phase < old_phase) {
      new_phase = new_phase + 1.0;
    }
    if (old_phase + 1.0 < new_phase) {
      new_phase = new_phase + -1.0f;
    }
    if (old_phase + 1.0 < new_phase) {
      new_phase = new_phase + -1.0f;
    }
    return (uint)(threshold < new_phase);
  }
  return 0;
}
