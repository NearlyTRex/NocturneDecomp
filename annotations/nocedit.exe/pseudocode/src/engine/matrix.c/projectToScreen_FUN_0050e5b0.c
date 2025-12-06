// Name: engine_matrix.c_projectToScreen_FUN_0050e5b0
// Address: 0050e5b0
// Address Range: [[0050e5b0, 0050e63a]]
// Convention: __cdecl
// Signature: int engine_matrix.c_projectToScreen_FUN_0050e5b0(int input_value)

#include "nocturne.h"

int __cdecl engine_matrix_c_projectToScreen_FUN_0050e5b0(int input_value)

{
  uint extraout_EDX;
  BADSPACEBASE *in_ESP;
  byte bVar1;
  float10 fVar2;
  int aiStackY_1038 [1017];
  int local_4c;
  uint local_48;
  int local_44;
  int local_18;
  int iStack_14;
  
  bVar1 = 0;
  local_4c = input_value;
  local_48 = 0;
  engine_matrix_c_transformWorldToView_FUN_0050cc40((int *)&stack0xffffffb0,(int *)0x0);
  *(uint *)((int)&stack0xffffffb4 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffc4 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffb8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffc8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (0 < local_44) {
    local_18 = input_value;
    iStack_14 = local_44;
    fVar2 = ((-(float10)input_value * (float10)g_ViewportCenterYFixed) / (float10)local_44) /
            (float10)g_ProjectionScale;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,input_value));
    return (int)ROUND(fVar2);
  }
  return -1;
}
