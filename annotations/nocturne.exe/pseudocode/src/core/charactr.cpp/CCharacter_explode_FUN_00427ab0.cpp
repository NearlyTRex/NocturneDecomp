// Name: core_charactr.cpp_CCharacter_explode_FUN_00427ab0
// Address: 00427ab0
// Address Range: [[00427ab0, 00427b57]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_explode_FUN_00427ab0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_explode_FUN_00427ab0(int param_1,uint param_2,uint param_3)

{
  float *pfVar1;
  byte auStack_40 [24];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  byte auStack_1c [12];
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  pfVar1 = (float *)(**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,auStack_40);
  fStack_10 = *pfVar1 + pfVar1[3];
  fStack_c = pfVar1[1] + pfVar1[4];
  fStack_28 = fStack_10 * _DAT_0057a026;
  fStack_24 = fStack_c * _DAT_0057a026;
  fStack_8 = pfVar1[2] + pfVar1[5];
  fStack_20 = fStack_8 * _DAT_0057a026;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,auStack_1c,&fStack_28);
  FUN_0048c0d0(0x01C08D04,auStack_1c,0x40000000,0x44bb8000,0x40800000);
  core_charactr_cpp_CCharacter_dismember_FUN_00427b60(param_1,param_2,param_3,0);
  return;
}
