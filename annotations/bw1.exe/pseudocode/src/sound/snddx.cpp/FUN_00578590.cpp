// Name: sound_snddx.cpp_FUN_00578590
// Address: 00578590
// Address Range: [[00578590, 0057863d]]
// Convention: unknown
// Signature: undefined4 sound_snddx_cpp_FUN_00578590(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_snddx_cpp_FUN_00578590(void)

{
  uint uVar1;
  uint error_code;
  char *pcVar2;
  uint auStack_64 [4];
  int iStack_54;
  
  if (_DAT_02c81d94 == (int *)0x0) {
    uVar1 = 0;
  }
  else if (_DAT_02c81da0 == 0) {
    memset(auStack_64,0,0x60);
    auStack_64[0] = 0x60;
    error_code = (**(code **)(*_DAT_02c81d94 + 0x10))();
    if (error_code != 0) {
      pcVar2 = sound_snddx_cpp_FUN_00577500(error_code);
      FUN_005bfb40
                (&stack0xfffffe04,"DirectSux: Unable to %s.  (%s)",
                 "Querry DirectSound capabilities",pcVar2);
      sound_sndmain_cpp_FUN_005773f0(&stack0xfffffe04);
      return 0;
    }
    uVar1 = 0;
    if (iStack_54 != 0) {
      return 1;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}
