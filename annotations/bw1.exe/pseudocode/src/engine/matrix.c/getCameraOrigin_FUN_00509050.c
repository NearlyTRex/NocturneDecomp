// Name: engine_matrix.c_getCameraOrigin_FUN_00509050
// Address: 00509050
// Address Range: [[00509050, 0050907e]]
// Convention: unknown
// Signature: void engine_matrix_c_getCameraOrigin_FUN_00509050(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_matrix_c_getCameraOrigin_FUN_00509050(void)

{
  uint uVar1;
  uint uVar2;
  uint *unaff_ESI;
  
  uVar2 = _DAT_01c51d40;
  uVar1 = _DAT_01c51d3c;
  *unaff_ESI = _DAT_01c51d38;
  unaff_ESI[1] = uVar1;
  unaff_ESI[2] = uVar2;
  return;
}
