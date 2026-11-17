// Name: sound_sndmain.cpp_setNextSfxTriggerTime_FUN_00572a50
// Address: 00572a50
// Address Range: [[00572a50, 00572a80]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTriggerTime_FUN_00572a50(double trigger_time,int trigger_id)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxTriggerTime_FUN_00572a50(double trigger_time,int trigger_id)

{
  int iVar1;
  
  iVar1 = g_INT_02c78cec;
  g_CSfxOptions_ARRAY_02c78cf0[g_INT_02c78cec].playback_position = trigger_time;
  g_CSfxOptions_ARRAY_02c78cf0[iVar1].playback_position_type = trigger_id;
  return;
}
