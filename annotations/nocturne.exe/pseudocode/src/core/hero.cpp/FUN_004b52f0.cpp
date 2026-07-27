// Name: core_hero.cpp_FUN_004b52f0
// Address: 004b52f0
// Address Range: [[004b52f0, 004b548b]]
// Convention: unknown
// Signature: undefined4 core_hero_cpp_FUN_004b52f0(int param_1)

#include "nocturne.h"

uint core_hero_cpp_FUN_004b52f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float local_3c;
  float local_38;
  float local_34;
  byte local_30 [20];
  int local_1c;
  float local_18;
  float local_14;
  
  local_1c = param_1 + 0x20;
  iVar3 = 0;
  local_18 = 1e+30;
  *(uint *)(param_1 + 0x1fa10) = 0;
  for (iVar4 = 0; iVar4 < *(int *)(0x01E57284 + 0x14cd6c); iVar4 = iVar4 + 1) {
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (*(uint *)(iVar3 + 0x14cd70 + 0x01E57284),
                       g_CLeverActorType_01cc3628.name_hash);
    if (iVar1 != 0) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(param_1,&local_3c,iVar1 + 0x20);
      if ((((ABS(local_38) <= (float)5) && (0.0 <= (double)local_34)) &&
          ((double)local_34 <= 3)) && (ABS(local_3c) <= (float)3)) {
        iVar2 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_30,&local_3c)
        ;
        if (ABS(*(float *)(iVar2 + 4)) <= (float)1.04719755116667) {
          iVar2 = core_lever_cpp_CLever_isAccessibleFrom_FUN_004c68f0(iVar1,local_1c);
          if (iVar2 != 0) {
            local_14 = SQRT((local_34 + -2.0f) * (local_34 + -2.0f) +
                            (local_3c + -0.5f) * (local_3c + -0.5f));
            if (local_14 <= local_18) {
              *(int *)(param_1 + 0x1fa10) = iVar1;
              local_18 = local_14;
            }
          }
        }
      }
    }
    iVar3 = iVar3 + 4;
  }
  if (*(int *)(param_1 + 0x1fa10) != 0) {
    iVar3 = core_event_cpp_CRuleList_evaluateAndRun_FUN_00481890
                      (*(int *)(param_1 + 0x1fa10) + 0x418);
    if (iVar3 == 0) {
      *(uint *)(param_1 + 0xbca0) = 0;
      return 1;
    }
  }
  return 0;
}
