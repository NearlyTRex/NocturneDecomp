// Name: sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005262d0
// Address: 005262d0
// Address Range: [[005262d0, 00526307]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005262d0(double trigger_time,int trigger_id)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005262d0(double trigger_time,int trigger_id)

{
  int iVar1;
  
  iVar1 = _DAT_02dc1b74;
  g_CSfxOptions_ARRAY_02dc1b78[_DAT_02dc1b74].trigger_time = trigger_time;
  g_CSfxOptions_ARRAY_02dc1b78[iVar1].trigger_id = trigger_id;
  return;
}
