// Name: sound_snddx.cpp_CDirectSoundDevice_hasHardware3D_FUN_00555b60
// Address: 00555b60
// Address Range: [[00555b60, 00555c0d]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_hasHardware3D_FUN_00555b60(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_snddx_cpp_CDirectSoundDevice_hasHardware3D_FUN_00555b60(CDirectSoundDevice *this_ptr)

{
  int iVar1;
  uint error_code;
  uint auStack_64 [4];
  int iStack_54;
  
  if (_DAT_0264a5c4 == (int *)0x0) {
    iVar1 = 0;
  }
  else if (_DAT_0264a5d0 == 0) {
    memset(auStack_64,0,0x60);
    auStack_64[0] = 0x60;
    error_code = (**(code **)(*_DAT_0264a5c4 + 0x10))();
    if (error_code != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00554ad0(error_code);
      _sprintf(&stack0xfffffe04,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_005549c0(&stack0xfffffe04);
      return 0;
    }
    iVar1 = 0;
    if (iStack_54 != 0) {
      return 1;
    }
  }
  else {
    iVar1 = 2;
  }
  return iVar1;
}
