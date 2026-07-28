// Name: engine_matrix.c_getCameraOrigin_FUN_004ce760
// Address: 004ce760
// Address Range: [[004ce760, 004ce78e]]
// Convention: __esi
// Signature: void __esi engine_matrix_c_getCameraOrigin_FUN_004ce760(CVector3i *output)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __esi engine_matrix_c_getCameraOrigin_FUN_004ce760(CVector3i *output)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01c039cc;
  iVar1 = _DAT_01c039c8;
  output->x = _DAT_01c039c4;
  output->y = iVar1;
  output->z = iVar2;
  return;
}
