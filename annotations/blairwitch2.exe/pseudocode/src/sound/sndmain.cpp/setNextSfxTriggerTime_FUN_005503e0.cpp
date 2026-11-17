// Name: sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005503e0
// Address: 005503e0
// Address Range: [[005503e0, 00550410]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005503e0(double trigger_time,int trigger_id)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005503e0(double trigger_time,int trigger_id)

{
  int iVar1;
  
  iVar1 = g_INT_0264161c;
  g_CSfxOptions_ARRAY_02641620[g_INT_0264161c].playback_position = trigger_time;
  g_CSfxOptions_ARRAY_02641620[iVar1].playback_position_type = trigger_id;
  return;
}
