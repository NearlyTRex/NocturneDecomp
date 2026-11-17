// Name: engine_matrix.c_getCameraOrigin_FUN_00509050
// Address: 00509050
// Address Range: [[00509050, 0050907e]]
// Convention: __esi
// Signature: void __esi engine_matrix_c_getCameraOrigin_FUN_00509050(CVector3i *output)

#include "nocturne.h"

void __esi engine_matrix_c_getCameraOrigin_FUN_00509050(CVector3i *output)

{
  int iVar1;
  int iVar2;
  
  iVar2 = g_INT_01c51d40;
  iVar1 = g_INT_01c51d3c;
  output->x = g_INT_01c51d38;
  output->y = iVar1;
  output->z = iVar2;
  return;
}
