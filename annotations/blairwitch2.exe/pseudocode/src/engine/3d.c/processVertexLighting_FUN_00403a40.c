// Name: engine_3d.c_processVertexLighting_FUN_00403a40
// Address: 00403a40
// Address Range: [[00403a40, 00403a9c]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_processVertexLighting_FUN_00403a40(int param_1)

#include "nocturne.h"

int __cdecl engine_3d_c_processVertexLighting_FUN_00403a40(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = param_1;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar3 = iVar3 + 0xc;
      iVar1 = *(int *)(param_1 + 4) + iVar2;
      iVar2 = iVar2 + 1;
      engine_light_cpp_calculateAndStoreVertexLight_FUN_004e2980(iVar1 + DAT_0070ca60,iVar3);
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return param_1 + 0xc + *(int *)(param_1 + 8) * 0xc;
}
