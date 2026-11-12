// Name: engine_matrix.c_getCameraOrigin_FUN_004ea3b0
// Address: 004ea3b0
// Address Range: [[004ea3b0, 004ea3de]]
// Convention: __esi
// Signature: void __esi engine_matrix_c_getCameraOrigin_FUN_004ea3b0(CVector3i *output)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __esi engine_matrix_c_getCameraOrigin_FUN_004ea3b0(CVector3i *output)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01c38b80;
  iVar1 = _DAT_01c38b7c;
  output->x = _DAT_01c38b78;
  output->y = iVar1;
  output->z = iVar2;
  return;
}
