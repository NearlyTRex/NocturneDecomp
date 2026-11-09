// Name: engine_prim.c_replaceWWithDepth_FUN_00515a80
// Address: 00515a80
// Address Range: [[00515a80, 00515ab6]]
// Convention: __cdecl
// Signature: void __cdecl engine_prim_c_replaceWWithDepth_FUN_00515a80(int param_1,int param_2)

#include "nocturne.h"

void __cdecl engine_prim_c_replaceWWithDepth_FUN_00515a80(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      while (*(int *)(param_1 + 8) != 0) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 0xc);
        iVar1 = iVar1 + 1;
        param_1 = param_1 + 0x30;
        if (param_2 <= iVar1) {
          return;
        }
      }
      *(uint *)(param_1 + 8) = 0x7fffffff;
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 0x30;
    } while (iVar1 < param_2);
  }
  return;
}
