// Name: engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0
// Address: 0050d9f0
// Address Range: [[0050d9f0, 0050dac0]]
// Convention: __stack_esi
// Signature: CVector3i * engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0(CVector3i * input_vector, CVector3i * output_vector)

#include "nocturne.h"

CVector3i * __stack_esi
engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0
          (CVector3i *input_vector,CVector3i *output_vector)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int local_38;
  double local_30;
  double local_28;
  double local_20;
  
  dVar1 = (double)input_vector->x;
  dVar2 = (double)input_vector->y;
  dVar3 = (double)input_vector->z;
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
  output_vector->x = (int)ROUND(local_30);
  output_vector->y = (int)ROUND(local_28);
  output_vector->z = (int)ROUND(local_20);
  return output_vector;
}
