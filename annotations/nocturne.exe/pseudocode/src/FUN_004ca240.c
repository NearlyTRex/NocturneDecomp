// Name: FUN_004ca240
// Address: 004ca240
// Address Range: [[004ca240, 004ca2e1]]
// Convention: unknown
// Signature: void FUN_004ca240(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004ca240(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  iVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(param_1 + 0x150);
  local_24 = *(uint *)(iVar1 + 0x338);
  local_20 = *(uint *)(iVar1 + 0x33c);
  local_1c = *(uint *)(iVar1 + 0x340);
  local_18 = *(uint *)(iVar1 + 0x344);
  local_14 = *(uint *)(iVar1 + 0x348);
  piVar2 = (int *)(param_1 + 0x5e8);
  local_10 = *(uint *)(iVar1 + 0x34c);
  do {
    while (*piVar2 != 0) {
      core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_00510710
                (0x01E57284,param_2,&local_24,piVar2 + 3,piVar2 + 9);
      piVar2 = piVar2 + 0x19;
      if (piVar2 == (int *)(param_1 + 0xa98)) {
        return;
      }
    }
    piVar2 = piVar2 + 0x19;
  } while (piVar2 != (int *)(param_1 + 0xa98));
  return;
}
