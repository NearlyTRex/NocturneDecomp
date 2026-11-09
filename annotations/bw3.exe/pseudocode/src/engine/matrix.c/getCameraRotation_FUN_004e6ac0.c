// Name: engine_matrix.c_getCameraRotation_FUN_004e6ac0
// Address: 004e6ac0
// Address Range: [[004e6ac0, 004e6aee]]
// Convention: unknown
// Signature: void engine_matrix_c_getCameraRotation_FUN_004e6ac0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_matrix_c_getCameraRotation_FUN_004e6ac0(void)

{
  uint uVar1;
  uint uVar2;
  uint *unaff_ESI;
  
  uVar2 = _DAT_01c6e2ec;
  uVar1 = _DAT_01c6e2e8;
  *unaff_ESI = _DAT_01c6e2e4;
  unaff_ESI[1] = uVar1;
  unaff_ESI[2] = uVar2;
  return;
}
