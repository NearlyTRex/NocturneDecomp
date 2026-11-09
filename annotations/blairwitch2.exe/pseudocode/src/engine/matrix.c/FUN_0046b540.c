// Name: engine_matrix.c_FUN_0046b540
// Address: 0046b540
// Address Range: [[0046b540, 0046b596]]
// Convention: unknown
// Signature: void engine_matrix_c_FUN_0046b540(undefined4 param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_matrix_c_FUN_0046b540(uint param_1,float *param_2)

{
  int dir_y;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  int dir_z;
  
  fVar1 = (float10)_DAT_005d15c3;
  fVar2 = (float10)param_2[2] * fVar1;
  fVar3 = (float10)param_2[1] * fVar1;
  fVar1 = (float10)*param_2 * fVar1;
  round();
  round();
  dir_z = (int)ROUND(fVar2);
  round(dir_z,dir_z,(int)ROUND(fVar3));
  engine_light_cpp_setDirectionalLightVector_FUN_004e2600((int)ROUND(fVar1),dir_y,dir_z);
  return;
}
