// Name: engine_matrix.c_getCameraRotation_FUN_004ea3e0
// Address: 004ea3e0
// Address Range: [[004ea3e0, 004ea40e]]
// Convention: __esi
// Signature: void __esi engine_matrix_c_getCameraRotation_FUN_004ea3e0(CVector3i *output)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __esi engine_matrix_c_getCameraRotation_FUN_004ea3e0(CVector3i *output)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01c38b8c;
  iVar1 = _DAT_01c38b88;
  output->x = _DAT_01c38b84;
  output->y = iVar1;
  output->z = iVar2;
  return;
}
