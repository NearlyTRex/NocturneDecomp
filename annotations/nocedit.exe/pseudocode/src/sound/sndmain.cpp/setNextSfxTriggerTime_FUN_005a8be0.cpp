// Name: sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005a8be0
// Address: 005a8be0
// Address Range: [[005a8be0, 005a8c0d]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005a8be0(double trigger_time, int trigger_id)

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0(double trigger_time,int trigger_id)

{
  int iVar1;
  
  iVar1 = g_SfxLastSlot;
  g_SfxOptions[g_SfxLastSlot].trigger_time = trigger_time;
  g_SfxOptions[iVar1].trigger_id = trigger_id;
  return;
}
