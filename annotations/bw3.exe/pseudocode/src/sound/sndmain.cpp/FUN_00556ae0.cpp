// Name: sound_sndmain.cpp_FUN_00556ae0
// Address: 00556ae0
// Address Range: [[00556ae0, 00556b32]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_FUN_00556ae0(uint sfx_handle,float base_frequency)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_FUN_00556ae0(uint sfx_handle,float base_frequency)

{
  CSfxSlot *pCVar1;
  int iVar2;
  
  pCVar1 = sound_sndmain_cpp_FUN_00552f10(sfx_handle,1);
  iVar2 = 0;
  if (pCVar1 != (CSfxSlot *)0x0) {
    *(float *)&pCVar1->field_0x3c = base_frequency;
    pCVar1->field_0x118 = pCVar1->field_0x118 | 0x10;
    if ((*(int *)&pCVar1->field_0x60 != 0) && (_DAT_02cf3280 != (int *)0x0)) {
      (**(code **)(*_DAT_02cf3280 + 0x44))(_DAT_02cf3280,pCVar1,0x10);
    }
    sound_sndmain_cpp_FUN_00556fd0();
    iVar2 = 1;
  }
  return iVar2;
}
