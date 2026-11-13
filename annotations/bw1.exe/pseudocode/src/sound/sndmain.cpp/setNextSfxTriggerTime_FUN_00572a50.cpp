// Name: sound_sndmain.cpp_setNextSfxTriggerTime_FUN_00572a50
// Address: 00572a50
// Address Range: [[00572a50, 00572a80]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTriggerTime_FUN_00572a50(double trigger_time,int trigger_id)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxTriggerTime_FUN_00572a50(double trigger_time,int trigger_id)

{
  int iVar1;
  
  iVar1 = _DAT_02c78cec * 0x60;
  *(double *)(iVar1 + 0x2c78d40) = trigger_time;
  *(int *)(iVar1 + 0x2c78d48) = trigger_id;
  return;
}
