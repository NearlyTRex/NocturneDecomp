// Name: core_hero.cpp_FUN_004b5110
// Address: 004b5110
// Address Range: [[004b5110, 004b5260]]
// Convention: unknown
// Signature: int core_hero_cpp_FUN_004b5110(int param_1)

#include "nocturne.h"

int core_hero_cpp_FUN_004b5110(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  byte local_24 [12];
  int local_18;
  int local_14;
  
  iVar4 = 0;
  local_14 = 0;
  *(uint *)(param_1 + 0x1fa04) = 0;
  do {
    if (*(int *)(0x01E57284 + 0x14cd6c) <= iVar4) {
      return 0;
    }
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (*(uint *)(0x01E57284 + local_14 + 0x14cd70),
                       g_CDoorActorType_01af4e9c.name_hash);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x2d8) == 0)) {
      fVar5 = *(float *)(param_1 + 0x20) - *(float *)(iVar2 + 0x9b4);
      fVar6 = *(float *)(param_1 + 0x24) - *(float *)(iVar2 + 0x9b8);
      fVar1 = *(float *)(param_1 + 0x28) - *(float *)(iVar2 + 0x9bc);
      iVar3 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                        (param_1,local_24,iVar2 + 0x20);
      if ((0.0 < *(float *)(iVar3 + 8)) &&
         ((ABS(fVar6) <= (float)5 &&
          (SQRT(fVar1 * fVar1 + fVar5 * fVar5) < (float)4)))) {
        iVar3 = core_event_cpp_CRuleList_evaluateAndRun_FUN_00481890(iVar2 + 0x470,fVar5,0);
        if (iVar3 != 0) {
          return 1;
        }
        local_18 = core_door_cpp_CDoor_getMoveType_FUN_004564b0(iVar2,param_1);
        if (local_18 != 0) {
          if (local_18 == 1) {
            core_door_cpp_CDoor_onOpened_FUN_00455270(iVar2);
            return local_18;
          }
          *(int *)(param_1 + 0x1fa04) = iVar2;
          return local_18;
        }
      }
    }
    local_14 = local_14 + 4;
    iVar4 = iVar4 + 1;
  } while( true );
}
