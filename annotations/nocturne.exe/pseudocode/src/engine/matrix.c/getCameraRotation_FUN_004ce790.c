// Name: engine_matrix.c_getCameraRotation_FUN_004ce790
// Address: 004ce790
// Address Range: [[004ce790, 004ce7be]]
// Convention: __esi
// Signature: undefined1 * __esi engine_matrix_c_getCameraRotation_FUN_004ce790(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * __esi engine_matrix_c_getCameraRotation_FUN_004ce790(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = _DAT_01c039d8;
  uVar1 = _DAT_01c039d4;
  *param_1 = _DAT_01c039d0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return &stack0xfffffffc;
}
