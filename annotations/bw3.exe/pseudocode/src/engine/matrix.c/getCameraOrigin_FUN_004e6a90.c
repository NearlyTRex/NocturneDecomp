// Name: engine_matrix.c_getCameraOrigin_FUN_004e6a90
// Address: 004e6a90
// Address Range: [[004e6a90, 004e6abe]]
// Convention: __esi
// Signature: void __esi engine_matrix_c_getCameraOrigin_FUN_004e6a90(CVector3i *output)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __esi engine_matrix_c_getCameraOrigin_FUN_004e6a90(CVector3i *output)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01c6e2e0;
  iVar1 = _DAT_01c6e2dc;
  output->x = _DAT_01c6e2d8;
  output->y = iVar1;
  output->z = iVar2;
  return;
}
