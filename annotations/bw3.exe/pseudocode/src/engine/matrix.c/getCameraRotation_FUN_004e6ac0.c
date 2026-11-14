// Name: engine_matrix.c_getCameraRotation_FUN_004e6ac0
// Address: 004e6ac0
// Address Range: [[004e6ac0, 004e6aee]]
// Convention: __esi
// Signature: void __esi engine_matrix_c_getCameraRotation_FUN_004e6ac0(CVector3i *output)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __esi engine_matrix_c_getCameraRotation_FUN_004e6ac0(CVector3i *output)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01c6e2ec;
  iVar1 = _DAT_01c6e2e8;
  output->x = _DAT_01c6e2e4;
  output->y = iVar1;
  output->z = iVar2;
  return;
}
