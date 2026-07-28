// Name: engine_matrix.c_getCameraRotation_FUN_004ce790
// Address: 004ce790
// Address Range: [[004ce790, 004ce7be]]
// Convention: __esi
// Signature: void __esi engine_matrix_c_getCameraRotation_FUN_004ce790(CVector3i *output)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __esi engine_matrix_c_getCameraRotation_FUN_004ce790(CVector3i *output)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01c039d8;
  iVar1 = _DAT_01c039d4;
  output->x = _DAT_01c039d0;
  output->y = iVar1;
  output->z = iVar2;
  return;
}
