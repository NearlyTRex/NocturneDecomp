// Name: core_charactr.cpp_CCharacter_processDamageDecals_FUN_004277f0
// Address: 004277f0
// Address Range: [[004277f0, 004278d5]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_processDamageDecals_FUN_004277f0(int param_1)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_processDamageDecals_FUN_004277f0(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  byte local_5c [12];
  byte local_50 [12];
  byte local_44 [12];
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  byte local_20 [12];
  int local_14;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x2dec)) {
    local_14 = param_1 + 0xfd0;
    piVar3 = (int *)(param_1 + 0x2df0);
    do {
      if (*(int *)(param_1 + 0x2290 + *piVar3 * 4) != 0) {
        iVar1 = core_actor_cpp_randomChance_FUN_0040dea0(0x3dcccccd);
        if (iVar1 != 0) {
          local_2c = 0;
          local_28 = 0;
          local_24 = 0xbe4ccccd;
          uVar2 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                            (local_50,&local_2c,piVar3 + 2,piVar3[1] * 0x30 + local_14);
          core_xform_cpp_transformVector3x4_FUN_0055a8b0(local_20,uVar2);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_44,local_20);
          local_34 = 0;
          local_30 = 0;
          local_38 = 0x40400000;
          core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,local_5c,&local_38);
          core_gore_cpp_CGore_spawnBloodParticles_FUN_004b00f0
                    (INT_005b96c4,local_44,local_5c,*(uint *)(param_1 + 0x2608));
        }
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 0xe;
    } while (iVar4 < *(int *)(param_1 + 0x2dec));
  }
  return;
}
