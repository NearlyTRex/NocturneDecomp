// Name: engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0
// Address: 0050d9f0
// MANUAL RECONSTRUCTION
// Address Range: [[0050d9f0, 0050dac0] [0060ca9c, 0060cad7]]
// Convention: __stack_esi
// Signature: CVector3i * __stack_esi engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(CVector3i *input_vector,CVector3i *output_vector)

#include "nocturne.h"

CVector3i * __stack_esi engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(CVector3i *input_vector,CVector3i *output_vector)

{
  double dVar5;
  double local_30;
  double local_28;
  double local_20;
  double dVar4;
  double dVar1;
  double dVar2;
  double dVar3;

  dVar1 = (double)input_vector->x;
  dVar2 = (double)input_vector->y;
  dVar3 = (double)input_vector->z;
  dVar4 = SQRT(dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1);
  if (dVar4 == 0.0) {
    local_20 = 0.0;
    local_28 = 0.0;
    local_30 = 0.0;
  }
  else {
    dVar5 = 1.0 / dVar4;
    local_30 = dVar1 * dVar5 * 65535;
    local_28 = dVar2 * dVar5 * 65535;
    local_20 = 65535 * dVar3 * dVar5;
  }
  output_vector->x = (int)ROUND(local_30);
  output_vector->y = (int)ROUND(local_28);
  output_vector->z = (int)ROUND(local_20);
  return output_vector;
}
