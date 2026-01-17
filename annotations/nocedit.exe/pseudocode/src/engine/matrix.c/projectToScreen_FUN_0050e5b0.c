// Name: engine_matrix.c_projectToScreen_FUN_0050e5b0
// Address: 0050e5b0
// Address Range: [[0050e5b0, 0050e63a]]
// Convention: __cdecl
// Signature: int engine_matrix.c_projectToScreen_FUN_0050e5b0(int input_value)

#include "nocturne.h"

int __cdecl engine_matrix_c_projectToScreen_FUN_0050e5b0(int input_value)

{
  byte bVar1;
  double dVar2;
  int aiStackY_1038 [1017];
  int local_4c;
  int local_48;
  int local_1c;
  int local_18;
  
  bVar1 = 0;
  local_4c = input_value;
  local_48 = 0;
  engine_matrix_c_transformWorldToView_FUN_0050cc40((int *)&stack0xffffffb0,(int *)0x0);
  *(uint *)((int)&stack0xffffffb4 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffc0 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffb8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffc4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (0 < local_48) {
    local_1c = input_value;
    local_18 = local_48;
    dVar2 = crt_math_c_round_FUN_005fe6b0
                      (((-(double)input_value * (double)g_ViewportCenterYFixed) / (double)local_48)
                       / (double)g_ProjectionScale);
    return (int)ROUND(dVar2);
  }
  return -1;
}
