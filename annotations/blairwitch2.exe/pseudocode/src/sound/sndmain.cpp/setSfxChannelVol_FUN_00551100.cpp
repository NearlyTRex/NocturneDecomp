// Name: sound_sndmain.cpp_setSfxChannelVol_FUN_00551100
// Address: 00551100
// Address Range: [[00551100, 0055118e]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setSfxChannelVol_FUN_00551100(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setSfxChannelVol_FUN_00551100(int param_1,uint param_2)

{
  int iVar1;
  int extraout_EAX;
  int *piVar2;
  int unaff_ESI;
  
  if ((param_1 < 0) || (0x1f < param_1)) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x110e;
    core_main_c_FUN_004e4500("setSfxChannelVol - invalid channel index: %d",param_1);
  }
  iVar1 = _DAT_02648e80;
  *(uint *)(param_1 * 4 + 0x26484c0) = param_2;
  if (iVar1 != 0) {
    sound_sndmain_cpp_FUN_00552b30(unaff_ESI);
    if (0 < extraout_EAX) {
      sound_sndmain_cpp_lockSound_FUN_005532f0();
      piVar2 = (int *)0x263cf1c;
      do {
        if (((piVar2[0x19] != 0) && (piVar2[0x18] != 0)) && (param_1 == *piVar2)) {
          *(byte *)(piVar2 + 0x46) = *(byte *)(piVar2 + 0x46) | 8;
        }
        piVar2 = piVar2 + 0x47;
      } while (piVar2 != (int *)&DAT_0264161c);
      sound_sndmain_cpp_FUN_00551440();
      return;
    }
  }
  return;
}
