// Name: sound_sndmain.cpp_enableSfxChannel_FUN_00527410
// Address: 00527410
// Address Range: [[00527410, 00527484]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_enableSfxChannel_FUN_00527410(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_enableSfxChannel_FUN_00527410(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 < 0) || (0x1f < param_1)) {
    _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
    _DAT_01cc4804 = 0xf52;
    FUN_004c8440("enableSfxChannel - invalid channel index: %d",param_1);
  }
  *(int *)(param_1 * 4 + 0x2dc79d8) = param_2;
  if (param_2 == 0) {
    sound_sndmain_cpp_lockSound_FUN_00528800();
    iVar1 = 0;
    do {
      if (param_1 == *(int *)(iVar1 + 0x2dbd374)) {
        sound_sndmain_cpp_CSfxSlot_kill_FUN_00525570(iVar1 + 0x2dbd374);
      }
      iVar1 = iVar1 + 0x120;
    } while (iVar1 != 0x4800);
    sound_sndmain_cpp_unlockSound_FUN_00528890();
  }
  return;
}
