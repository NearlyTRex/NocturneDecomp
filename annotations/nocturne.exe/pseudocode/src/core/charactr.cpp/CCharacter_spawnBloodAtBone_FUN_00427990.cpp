// Name: core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_00427990
// Address: 00427990
// Address Range: [[00427990, 00427a1e]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00427990(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00427990(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  byte local_28 [12];
  byte local_1c [12];
  uint local_10;
  uint local_c;
  uint local_8;
  
  if (*(int *)(param_1 + 0x2290 + param_2 * 4) == 0) {
    iVar1 = core_actor_cpp_randomChance_FUN_0040dea0(param_4);
    if (iVar1 != 0) {
      uVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                        (param_1 + 0x150,local_1c,param_3);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_28,uVar2);
      local_10 = 0;
      local_c = 0x40e00000;
      local_8 = 0;
      core_gore_cpp_CGore_spawnBloodParticles_FUN_004b00f0
                (INT_005b96c4,local_28,&local_10,*(uint *)(param_1 + 0x2608));
      return;
    }
  }
  return;
}
