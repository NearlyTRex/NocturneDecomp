// Name: sound_sndmain.cpp_setNextSfxTriggerTime_FUN_00555f60
// Address: 00555f60
// Address Range: [[00555f60, 00555f90]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTriggerTime_FUN_00555f60(double trigger_time,int trigger_id)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxTriggerTime_FUN_00555f60(double trigger_time,int trigger_id)

{
  int iVar1;
  
  iVar1 = _DAT_02ceb91c * 0x60;
  *(double *)(iVar1 + 0x2ceb970) = trigger_time;
  *(int *)(iVar1 + 0x2ceb978) = trigger_id;
  return;
}
