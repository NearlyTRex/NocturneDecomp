// Name: engine_matrix.c_projectToScreen_FUN_0050e5b0
// Address: 0050e5b0
// Address Range: [[0050e5b0, 0050e63a]]
// Convention: __cdecl
// Signature: int __cdecl engine_matrix_c_projectToScreen_FUN_0050e5b0(int input_value)

#include "nocturne.h"

int __cdecl engine_matrix_c_projectToScreen_FUN_0050e5b0(int input_value)

{
  byte bVar1;
  double dVar2;
  int aiStackY_1038 [1017];
  CVector3i local_50;
  CVector3i local_44 [3];
  int local_1c;
  int local_18;
  
  bVar1 = 0;
  local_50.y = input_value;
  local_50.x = 0;
  local_50.z = 0;
  engine_matrix_c_transformWorldToView_FUN_0050cc40(&local_50,local_44);
  local_50.x = local_44[0].x;
  *(uint *)((int)local_44 + (uint)bVar1 * -8 + -8) =
       *(uint *)((int)local_44 + (uint)bVar1 * -8 + 4);
  *(uint *)((int)local_44 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + -4) =
       *(uint *)((int)local_44 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (0 < local_50.z) {
    local_1c = input_value;
    local_18 = local_50.z;
    dVar2 = round
                      (((-(double)input_value * (double)g_ViewportCenterYFixed) / (double)local_50.z
                       ) / (double)g_ProjectionScale);
    return (int)ROUND(dVar2);
  }
  return -1;
}
