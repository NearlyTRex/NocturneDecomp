// Name: engine_matrix.c_getCameraOrigin_FUN_004ce760
// Address: 004ce760
// Address Range: [[004ce760, 004ce78e]]
// Convention: __esi
// Signature: undefined1 * __esi engine_matrix_c_getCameraOrigin_FUN_004ce760(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * __esi engine_matrix_c_getCameraOrigin_FUN_004ce760(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = _DAT_01c039cc;
  uVar1 = _DAT_01c039c8;
  *param_1 = _DAT_01c039c4;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return &stack0xfffffffc;
}
