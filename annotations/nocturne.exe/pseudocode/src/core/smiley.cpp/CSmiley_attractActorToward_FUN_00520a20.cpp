// Name: core_smiley.cpp_CSmiley_attractActorToward_FUN_00520a20
// Address: 00520a20
// Address Range: [[00520a20, 00520ad2]]
// Convention: unknown
// Signature: undefined4 core_smiley_cpp_CSmiley_attractActorToward_FUN_00520a20(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_smiley_cpp_CSmiley_attractActorToward_FUN_00520a20(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  byte auStack_20 [4];
  float fStack_1c;
  byte auStack_14 [12];
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x104))(param_1);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(param_2 + 0x14c) + 0xe8))(param_2);
    return 1;
  }
  uVar2 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                    (auStack_14,&DAT_02dd1184,_DAT_02da8a7c * 0x30 + param_1 + 0xfd0);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,auStack_20,uVar2);
  fStack_1c = fStack_1c + _DAT_005920a5;
  (**(code **)(*(int *)(param_2 + 0x14c) + 0x60))(param_2,auStack_20,param_2 + 0x30);
  return 1;
}
