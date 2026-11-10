// Name: sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005503e0
// Address: 005503e0
// Address Range: [[005503e0, 00550410]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005503e0(double trigger_time,int trigger_id)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005503e0(double trigger_time,int trigger_id)

{
  int iVar1;
  
  iVar1 = _DAT_0264161c * 0x60;
  *(double *)(iVar1 + 0x2641670) = trigger_time;
  *(int *)(iVar1 + 0x2641678) = trigger_id;
  return;
}
