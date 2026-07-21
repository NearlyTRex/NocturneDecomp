// Name: core_dfilter.cpp_CDemonFilter_init_FUN_0044c190
// Address: 0044c190
// Address Range: [[0044c190, 0044c2aa]]
// Convention: __cdecl
// Signature: void __cdecl core_dfilter_cpp_CDemonFilter_init_FUN_0044c190(int *param_1,float param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dfilter_cpp_CDemonFilter_init_FUN_0044c190(int *param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float local_28;
  byte bStack_20;
  
  if (param_3 == 0) {
    core_dfilter_cpp_CDemonFilter_allocMemory_FUN_0044bf20(param_1);
  }
  iVar4 = 0;
  if (0 < param_1[1]) {
    do {
      iVar3 = 0;
      if (0 < *param_1) {
        do {
          fVar1 = (float)(*param_1 / 2 - iVar3);
          fVar2 = (float)(param_1[1] / 2 - iVar4);
          local_28 = SQRT(fVar2 * fVar2 + fVar1 * fVar1) / (float)(*param_1 / 2);
          if (1.0 < local_28) {
            local_28 = 1.0;
          }
          fVar1 = (1.0 - local_28) * param_2;
          if (param_3 == 0) {
            fVar5 = (float10)fVar1 * (float10)_DAT_0057c05d * (float10)_DAT_0057c065;
          }
          else {
            fVar5 = (float10)*(byte *)(param_1[0x12] + *param_1 * iVar4 + iVar3) * (float10)fVar1;
          }
          fVar5 = (float10)round(fVar5);
          bStack_20 = (byte)(int)ROUND(fVar5);
          if (0x3f < bStack_20) {
            bStack_20 = 0x3f;
          }
          *(byte *)(*param_1 * iVar4 + iVar3 + param_1[0x12]) = bStack_20;
          iVar3 = iVar3 + 1;
        } while (iVar3 < *param_1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[1]);
  }
  return;
}
