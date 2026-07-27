// Name: core_sound.cpp_FUN_0052ec90
// Address: 0052ec90
// Address Range: [[0052ec90, 0052ecac]]
// Convention: unknown
// Signature: undefined * core_sound_cpp_FUN_0052ec90(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

byte * core_sound_cpp_FUN_0052ec90(void)

{
  int in_stack_00000008;
  
  if ((-1 < in_stack_00000008) && (in_stack_00000008 < 0x1b)) {
    return (&PTR_s_OFF_00594c3d_005bed6c)[in_stack_00000008 * 4];
  }
  return &DAT_00594bfe;
}
