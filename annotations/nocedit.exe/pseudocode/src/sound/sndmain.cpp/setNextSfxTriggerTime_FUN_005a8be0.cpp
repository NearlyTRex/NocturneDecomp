// Name: sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005a8be0
// Address: 005a8be0
// Address Range: [[005a8be0, 005a8c0d]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0(double trigger_time,int trigger_id)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0(double trigger_time,int trigger_id)

{
  int iVar1;
  int iVar2;
  
  iVar2 = g_SfxLastSlot;
  iVar1 = g_SfxLastSlot * 0x70;
  g_SfxOptions[g_SfxLastSlot].trigger_time = trigger_time;
  g_SfxOptions[iVar2].trigger_id = trigger_id;
  return iVar1;
}
