// Name: engine_3d.c_setVertexTextureU_FUN_00405290
// Address: 00405290
// Address Range: [[00405290, 004052cd]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_setVertexTextureU_FUN_00405290(int param_1)

#include "nocturne.h"

int __cdecl engine_3d_c_setVertexTextureU_FUN_00405290(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0xc);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      (&DAT_0062202c)[(*(int *)(param_1 + 4) + iVar1) * 0xc] = *piVar2 << 0x10;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  return param_1 + 0xc + *(int *)(param_1 + 8) * 4;
}
