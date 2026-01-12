// Name: engine_matrix.c_projectToScreen_FUN_0050e5b0
// Address: 0050e5b0
// Address Range: [[0050e5b0, 0050e63a]]
// Convention: __cdecl
// Signature: int engine_matrix.c_projectToScreen_FUN_0050e5b0(int input_value)

#include "nocturne.h"

int __cdecl engine_matrix_c_projectToScreen_FUN_0050e5b0(int input_value)

{
  BADSPACEBASE *in_ESP;
  byte bVar1;
  double dVar2;
  int aiStackY_1034 [1017];
  int local_48;
  int local_44;
  int local_18;
  int iStack_14;
  
  bVar1 = 0;
  local_48 = input_value;
  local_44 = 0;
  engine_matrix_c_transformWorldToView_FUN_0050cc40((int *)&stack0xffffffb4,(int *)0x0);
  *(uint *)((int)&stack0xffffffb8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffc8 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffbc + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffcc + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (0 < local_44) {
    local_18 = input_value;
    iStack_14 = local_44;
    dVar2 = crt_math_c_round_FUN_005fe6b0
                      (((-(double)input_value * (double)g_ViewportCenterYFixed) / (double)local_44)
                       / (double)g_ProjectionScale);
    return (int)ROUND(dVar2);
  }
  return -1;
}
