// Name: core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_005e7510
// Address: 005e7510
// Address Range: [[005e7510, 005e75ec]]
// Convention: unknown
// Signature: undefined core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_005e7510()

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* Signature: byte actors_enemy_vampboss.cpp_CVampireBoss_chooseDestWayPoint(CVampireBoss*
   param_1) */

void core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_005e7510(void)

{
  CHero *pCVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int in_stack_00000004;
  float local_20;
  
  *(uint *)(in_stack_00000004 + 0xce908) = 0;
  iVar9 = 0;
  local_20 = -8675309.0;
  iVar10 = in_stack_00000004;
  do {
    if (*(int *)(iVar10 + 0xce90c) == 0) {
      g_CurrentFilename = "..\\core\\vampboss.cpp";
      g_CurrentLineNumber = 0x423;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CVampireBoss::chooseDestWayPoint - wayPoint[%d] == NULL",iVar9);
    }
    pCVar1 = g_HeroActors[g_LocalHeroIndex];
    iVar2 = *(int *)(iVar10 + 0xce90c);
    fVar3 = *(float *)(iVar2 + 0x20) - (pCVar1->base).base.location.position.x;
    fVar4 = *(float *)(iVar2 + 0x20) - *(float *)(in_stack_00000004 + 0x20);
    fVar8 = *(float *)(iVar2 + 0x24) - (pCVar1->base).base.location.position.y;
    fVar5 = *(float *)(iVar2 + 0x24) - *(float *)(in_stack_00000004 + 0x24);
    fVar6 = *(float *)(iVar2 + 0x28) - *(float *)(in_stack_00000004 + 0x28);
    fVar7 = *(float *)(iVar2 + 0x28) - (pCVar1->base).base.location.position.z;
    fVar3 = fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4 +
            fVar7 * fVar7 + fVar8 * fVar8 + fVar3 * fVar3;
    if (local_20 < fVar3) {
      *(int *)(in_stack_00000004 + 0xce908) = iVar9;
      local_20 = fVar3;
    }
    iVar9 = iVar9 + 1;
    iVar10 = iVar10 + 4;
  } while (iVar9 < 4);
  return;
}
