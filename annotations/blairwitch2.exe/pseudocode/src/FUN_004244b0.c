// Name: FUN_004244b0
// Address: 004244b0
// Address Range: [[004244b0, 004246d6]]
// Convention: unknown
// Signature: undefined4 FUN_004244b0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004244b0(int param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  fVar1 = *(float *)(param_1 + 0x3050) - param_2;
  *(float *)(param_1 + 0x3050) = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)(param_1 + 0x3050) = 0;
  }
  FUN_00425fb0(param_1,param_2);
  FUN_00429320(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0x1022c) - param_2;
  *(float *)(param_1 + 0x1022c) = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)(param_1 + 0x1022c) = 0;
  }
  if ((0.0 < *(float *)(param_1 + 0x2820)) &&
     (param_2 = *(float *)(param_1 + 0x2820) - param_2, *(float *)(param_1 + 0x2820) = param_2,
     uVar2 = 0x01E65CD0, param_2 < 0.0)) {
    *(uint *)(param_1 + 0x2820) = 0;
    FUN_00529990(uVar2,param_1);
  }
  if (*(int *)(param_1 + 0x25b0) == 2) {
    FUN_004bb8d0(0x01CB6900,param_1 + 0x25b4,
                 *(float *)(param_1 + 0x25a8) / *(float *)(param_1 + 0x25ac),0x40000000);
  }
  if (*(int *)(param_1 + 0x2568) == 0) {
    if (*(float *)(param_1 + 0x2574) == _DAT_005f4084) {
      iVar4 = 0;
      iVar3 = param_1;
      do {
        if (*(int *)(iVar3 + 0x2620) != 0) {
          FUN_00428bd0(param_1,iVar4,0,0);
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x78;
      } while (iVar4 < 2);
    }
    fVar1 = *(float *)(param_1 + 0xe4);
    *(uint *)(param_1 + 0xe4) = 0;
    *(float *)(param_1 + 0x24) = fVar1 + *(float *)(param_1 + 0x24);
    if ((*(float *)(param_1 + 0x2574) == _DAT_005f4084) || (*(int *)(param_1 + 0xdc) != 0)) {
      uVar2 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x48))
                        (param_1,*(uint *)(param_1 + 0x3430),0);
      *(uint *)(param_1 + 0x2574) = uVar2;
    }
    *(uint *)(param_1 + 0x2570) =
         (uint)(*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x2574) + (float)_DAT_005ccc9e);
    *(uint *)(param_1 + 0x2584) = 0;
    *(uint *)(param_1 + 0x2580) = *(uint *)(param_1 + 0x2584);
    *(uint *)(param_1 + 0x257c) = *(uint *)(param_1 + 0x2580);
    *(uint *)(param_1 + 0x2578) = 0;
    if (((*(int *)(param_1 + 0xdc) == 0) && (*(int *)(param_1 + 0x2774) == 0)) &&
       (iVar3 = FUN_004ce180(param_1 + 0x20,*(uint *)(param_1 + 0x343c),
                             *(uint *)(param_1 + 0x3438)), iVar3 == 0)) {
      FUN_00551050(*(uint *)(param_1 + 0x10220));
      return 0;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
