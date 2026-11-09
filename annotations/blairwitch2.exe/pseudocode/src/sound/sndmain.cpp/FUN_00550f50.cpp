// Name: sound_sndmain.cpp_FUN_00550f50
// Address: 00550f50
// Address Range: [[00550f50, 00550fa2]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_FUN_00550f50(uint sfx_handle,float base_frequency)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_FUN_00550f50(uint sfx_handle,float base_frequency)

{
  CSfxSlot *pCVar1;
  int iVar2;
  
  pCVar1 = sound_sndmain_cpp_FUN_0054d3a0(sfx_handle,1);
  iVar2 = 0;
  if (pCVar1 != (CSfxSlot *)0x0) {
    *(float *)&pCVar1->field_0x3c = base_frequency;
    pCVar1->field_0x118 = pCVar1->field_0x118 | 0x10;
    if ((*(int *)&pCVar1->field_0x60 != 0) && (_DAT_02648e80 != (int *)0x0)) {
      (**(code **)(*_DAT_02648e80 + 0x44))(_DAT_02648e80,pCVar1,0x10);
    }
    sound_sndmain_cpp_FUN_00551440();
    iVar2 = 1;
  }
  return iVar2;
}
