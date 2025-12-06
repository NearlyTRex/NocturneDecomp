// Name: sound_sndmain.cpp_setSfxIsActive_FUN_005a9c10
// Address: 005a9c10
// Address Range: [[005a9c10, 005a9c38]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_setSfxIsActive_FUN_005a9c10(uint sfx_handle, int active)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_setSfxIsActive_FUN_005a9c10(uint sfx_handle,int active)

{
  CSfxSlot *pCVar1;
  int in_stack_0000000c;
  
  pCVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005a5d00(sfx_handle,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  pCVar1->is_active = in_stack_0000000c;
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 1;
}
