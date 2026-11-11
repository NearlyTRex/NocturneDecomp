// Name: sound_sndmain.cpp_FUN_00573980
// Address: 00573980
// Address Range: [[00573980, 005739d2]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_FUN_00573980(uint sfx_handle,float base_frequency)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_FUN_00573980(uint sfx_handle,float base_frequency)

{
  CSfxSlot *pCVar1;
  int iVar2;
  
  pCVar1 = sound_sndmain_cpp_FUN_0056fa10(sfx_handle,1);
  iVar2 = 0;
  if (pCVar1 != (CSfxSlot *)0x0) {
    (pCVar1->options).base_frequency = base_frequency;
    *(byte *)&pCVar1->changed_flags = (byte)pCVar1->changed_flags | 0x10;
    if ((pCVar1->hardware_buffer_handle != 0) && (_DAT_02c80650 != (int *)0x0)) {
      (**(code **)(*_DAT_02c80650 + 0x44))(_DAT_02c80650,pCVar1,0x10);
    }
    sound_sndmain_cpp_FUN_00573e70();
    iVar2 = 1;
  }
  return iVar2;
}
