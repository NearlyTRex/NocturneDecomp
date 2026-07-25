// Name: FUN_004181f0
// Address: 004181f0
// Address Range: [[004181f0, 0041829a]]
// Convention: unknown
// Signature: undefined4 FUN_004181f0(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004181f0(uint param_1,int param_2)

{
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  (**(code **)(*(int *)(param_2 + 0x14c) + 0x14))(param_2,&fStack_40);
  core_actor_cpp_CVector_ctor_FUN_0040e160(&fStack_1c);
  fStack_1c = fStack_40 + fStack_34;
  fStack_18 = fStack_3c + fStack_30;
  fStack_14 = fStack_38 + fStack_2c;
  core_actor_cpp_CVector_ctor_FUN_0040e160(&fStack_28);
  fStack_28 = fStack_1c * _DAT_0057913e;
  fStack_24 = fStack_18 * _DAT_0057913e;
  fStack_20 = fStack_38 + (float)_DAT_00579146;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_2,param_1,&fStack_28);
  return param_1;
}
