// Name: sound_sndmain.cpp_FUN_00558bbe
// Address: 00558bbe
// Address Range: [[00558bbe, 00558c02]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00558bbe(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_00558bbe(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  if (param_1 != (uint *)0x0) {
    *param_1 = _DAT_0060425c;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = _DAT_00604260;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = _DAT_00604264;
  }
  if (param_4 == (uint *)0x0) {
    return;
  }
  *param_4 = _DAT_02cf3c70;
  return;
}
