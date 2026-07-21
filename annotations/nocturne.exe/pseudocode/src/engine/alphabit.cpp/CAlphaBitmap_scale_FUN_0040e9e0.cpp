// Name: engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040e9e0
// Address: 0040e9e0
// Address Range: [[0040e9e0, 0040eaa5]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040e9e0(int *param_1,int param_2,int param_3)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040e9e0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  byte *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_14;
  
  iVar3 = param_1[3] / param_2;
  iVar4 = param_1[4] / param_3;
  local_14 = 0;
  if (0 < iVar4) {
    do {
      if (0 < iVar3) {
        iVar6 = local_14 * iVar3;
        iVar5 = 0;
        iVar7 = iVar3 + iVar6;
        do {
          iVar1 = local_14 * param_1[3] * param_3 + iVar5;
          *(byte *)(*param_1 + iVar6) = *(byte *)(*param_1 + iVar1);
          puVar2 = (byte *)(param_1[1] + iVar6);
          iVar6 = iVar6 + 1;
          *puVar2 = *(byte *)(param_1[1] + iVar1);
          iVar5 = iVar5 + param_2;
        } while (iVar6 < iVar7);
      }
      local_14 = local_14 + 1;
    } while (local_14 < iVar4);
  }
  param_1[3] = iVar3;
  param_1[4] = iVar4;
  return;
}
