// Name: engine_prim.c_prepareDepthBuffer_FUN_00515920
// Address: 00515920
// Address Range: [[00515920, 0051598d]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_prepareDepthBuffer_FUN_00515920(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_prim_c_prepareDepthBuffer_FUN_00515920(int param_1,int param_2)

{
  int iVar1;
  
  if (_DAT_01c6e2b0 == 0) {
    iVar1 = 0;
    if (0 < param_2) {
      do {
        while (*(int *)(param_1 + 8) >> 4 == 0) {
          *(uint *)(param_1 + 8) = 0x7fffffff;
          iVar1 = iVar1 + 1;
          param_1 = param_1 + 0x30;
          if (param_2 <= iVar1) {
            return;
          }
        }
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 0xc);
        iVar1 = iVar1 + 1;
        param_1 = param_1 + 0x30;
      } while (iVar1 < param_2);
    }
  }
  else {
    iVar1 = 0;
    if (0 < param_2) {
      do {
        if (*(int *)(param_1 + 8) == 0) {
          *(uint *)(param_1 + 8) = 0x7fffffff;
        }
        else {
          *(int *)(param_1 + 8) = 0x7fffffff - *(int *)(param_1 + 8);
        }
        iVar1 = iVar1 + 1;
        param_1 = param_1 + 0x30;
      } while (iVar1 < param_2);
    }
  }
  return;
}
