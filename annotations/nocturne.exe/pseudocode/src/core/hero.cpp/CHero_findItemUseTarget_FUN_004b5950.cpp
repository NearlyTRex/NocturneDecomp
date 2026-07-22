// Name: core_hero.cpp_CHero_findItemUseTarget_FUN_004b5950
// Address: 004b5950
// Address Range: [[004b5950, 004b5af1]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_hero_cpp_CHero_findItemUseTarget_FUN_004b5950(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_hero_cpp_CHero_findItemUseTarget_FUN_004b5950(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte local_48 [12];
  float local_3c;
  float local_38;
  float local_34;
  double local_30;
  double local_28;
  int local_20;
  uint *local_1c;
  int local_18;
  int local_14;
  
  local_20 = param_1 + 0x1f5a0;
  *(uint *)(param_1 + 0x1fa1c) = 0;
  iVar3 = 0;
  local_18 = 0;
  do {
    if (*(int *)(0x01E57284 + 0x14cd6c) <= local_18) {
      iVar3 = core_actor_cpp_isOfClass_FUN_0040d7e0
                        (*(uint *)(local_20 + 0x334),"CTrap");
      if (iVar3 != 0) {
        *(uint *)(param_1 + 0x1fa1c) = *(uint *)(local_20 + 0x334);
      }
      return 0;
    }
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (*(uint *)(iVar3 + 0x14cd70 + 0x01E57284),_DAT_014b8a54);
    local_14 = iVar1;
    if (iVar1 != 0) {
      iVar2 = core_dest_cpp_CActorDestination_acceptsActor_FUN_0044bab0
                        (iVar1,*(uint *)(local_20 + 0x334));
      if (iVar2 != 0) {
        local_1c = (uint *)(iVar1 + 0x20);
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(param_1,&local_3c,local_1c);
        local_30 = (double)local_38;
        if ((((1.0 <= local_30) && (local_30 <= 6)) &&
            (local_28 = (double)local_34, (float)0.5 <= local_34)) &&
           ((local_28 <= 3 && (ABS(local_3c) <= (float)3)))) {
          iVar2 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                            (local_48,&local_3c);
          if ((ABS(*(float *)(iVar2 + 4)) <= (float)60) &&
             (iVar1 = *(int *)(iVar1 + 0x150), *(int *)(param_1 + 0x1fa1c) = iVar1, iVar1 != 0)) {
            if ((uint *)(param_1 + 0x1fa20) != local_1c) {
              *(uint *)(param_1 + 0x1fa20) = *local_1c;
              *(uint *)(param_1 + 0x1fa24) = local_1c[1];
              *(uint *)(param_1 + 0x1fa28) = local_1c[2];
            }
            if ((uint *)(param_1 + 0x1fa2c) != (uint *)(local_14 + 0x30)) {
              *(uint *)(param_1 + 0x1fa2c) = *(uint *)(local_14 + 0x30);
              *(uint *)(param_1 + 0x1fa30) = *(uint *)(local_14 + 0x34);
              *(uint *)(param_1 + 0x1fa34) = *(uint *)(local_14 + 0x38);
            }
            return 1;
          }
        }
      }
    }
    local_18 = local_18 + 1;
    iVar3 = iVar3 + 4;
  } while( true );
}
