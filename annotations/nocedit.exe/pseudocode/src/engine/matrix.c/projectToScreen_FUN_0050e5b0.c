// Name: engine_matrix.c_projectToScreen_FUN_0050e5b0
// Address: 0050e5b0
// Address Range: [[0050e5b0, 0050e63a] [00608c4c, 00608c6a]]
// Convention: __cdecl
// Signature: int __cdecl engine_matrix_c_projectToScreen_FUN_0050e5b0(int input_value)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl engine_matrix_c_projectToScreen_FUN_0050e5b0(int input_value)

{
  byte bVar1;
  int aiStackY_1038 [1017];
  CVector3i local_50;
  CVector3i local_44 [4];
  
  local_50.y = input_value;
  local_50.x = 0;
  local_50.z = 0;
  engine_matrix_c_transformWorldToView_FUN_0050cc40(&local_50,local_44);
  if (0 < local_44[0].z) {
    return (int)ROUND(ROUND(((-(float10)input_value * (float10)g_Projection.neg_half_height_fixed) /
                            (float10)local_44[0].z) / (float10)g_ProjectionScale));
  }
  return -1;
}
