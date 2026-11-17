// Name: sound_sndmain.cpp_setNextSfxTriggerTime_FUN_00555f60
// Address: 00555f60
// Address Range: [[00555f60, 00555f90]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTriggerTime_FUN_00555f60(double trigger_time,int trigger_id)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxTriggerTime_FUN_00555f60(double trigger_time,int trigger_id)

{
  int iVar1;
  
  iVar1 = g_INT_02ceb91c;
  g_CSfxOptions_ARRAY_02ceb920[g_INT_02ceb91c].playback_position = trigger_time;
  g_CSfxOptions_ARRAY_02ceb920[iVar1].playback_position_type = trigger_id;
  return;
}
