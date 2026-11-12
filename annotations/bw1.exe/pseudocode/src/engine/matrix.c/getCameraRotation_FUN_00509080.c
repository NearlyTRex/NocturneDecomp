// Name: engine_matrix.c_getCameraRotation_FUN_00509080
// Address: 00509080
// Address Range: [[00509080, 005090ae]]
// Convention: __esi
// Signature: void __esi engine_matrix_c_getCameraRotation_FUN_00509080(CVector3i *output)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __esi engine_matrix_c_getCameraRotation_FUN_00509080(CVector3i *output)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01c51d4c;
  iVar1 = _DAT_01c51d48;
  output->x = _DAT_01c51d44;
  output->y = iVar1;
  output->z = iVar2;
  return;
}
