// Name: engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0
// Address: 0050d9f0
// Address Range: [[0050d9f0, 0050dac0]]
// Convention: __cdecl
// Signature: CVector3i * engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0(CVector3i * inputVector)

#include "nocturne.h"

CVector3i * __cdecl engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(CVector3i *inputVector)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  CVector3i *unaff_ESI;
  int local_38;
  double local_30;
  double local_28;
  double local_20;
  
  dVar1 = (double)inputVector->x;
  dVar2 = (double)inputVector->y;
  dVar3 = (double)inputVector->z;
  dVar4 = SQRT(dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1);
  local_38 = SUB84 /* extract 2-byte value */(dVar4,0);
  if ((((ulonglong)dVar4 & 0x7fffffff00000000) == 0) && (local_38 == 0)) {
    local_20 = 0.0;
    local_28 = 0.0;
    local_30 = 0.0;
  }
  else {
    dVar4 = 1.0 / dVar4;
    local_30 = dVar1 * dVar4 * 65535;
    local_28 = dVar2 * dVar4 * 65535;
    local_20 = 65535 * dVar3 * dVar4;
  }
  unaff_ESI->x = (int)ROUND(local_30);
  unaff_ESI->y = (int)ROUND(local_28);
  unaff_ESI->z = (int)ROUND(local_20);
  return unaff_ESI;
}
