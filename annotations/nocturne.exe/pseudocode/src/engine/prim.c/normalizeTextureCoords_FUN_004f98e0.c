// Name: engine_prim.c_normalizeTextureCoords_FUN_004f98e0
// Address: 004f98e0
// Address Range: [[004f98e0, 004f995e]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_normalizeTextureCoords_FUN_004f98e0(int param_1,int param_2)

#include "nocturne.h"

void __cdecl engine_prim_c_normalizeTextureCoords_FUN_004f98e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0x7fffffff;
  iVar1 = 0;
  iVar3 = param_1;
  if (0 < param_2) {
    do {
      if (*(int *)(iVar3 + 8) < iVar2) {
        iVar2 = *(int *)(iVar3 + 8);
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x30;
    } while (iVar1 < param_2);
  }
  iVar3 = 0;
  if (0 < param_2) {
    do {
      while (*(int *)(param_1 + 8) != 0) {
        *(int *)(param_1 + 0x18) =
             (int)(((longlong)*(int *)(param_1 + 0x18) * (longlong)iVar2) /
                  (longlong)*(int *)(param_1 + 8));
        *(int *)(param_1 + 0x1c) =
             (int)(((longlong)*(int *)(param_1 + 0x1c) * (longlong)iVar2) /
                  (longlong)*(int *)(param_1 + 8));
        *(int *)(param_1 + 8) =
             (int)((longlong)
                   ((((longlong)iVar2 & 0xffffffffffU) >> 8) << 0x20 |
                   (longlong)iVar2 * 0x1000000 & 0xffffffffU) / (longlong)*(int *)(param_1 + 8));
        iVar3 = iVar3 + 1;
        param_1 = param_1 + 0x30;
        if (param_2 <= iVar3) {
          return;
        }
      }
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 0x30;
    } while (iVar3 < param_2);
  }
  return;
}
