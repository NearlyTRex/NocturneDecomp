// Name: core_gore.cpp_FUN_004edbb0
// Address: 004edbb0
// Address Range: [[004edbb0, 004edce4] [004eddc2, 004eddd4]]
// Convention: unknown
// Signature: void core_gore_cpp_FUN_004edbb0(void)

#include "nocturne.h"

/* Signature: byte core_gore.cpp_FUN_004edbb0(uint param_1, uint param_2,
   uint param_3, uint param_4, uint param_5) */

void core_gore_cpp_FUN_004edbb0(void)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float10 extraout_ST1;
  float *in_stack_0000000c;
  int in_stack_00000010;
  float in_stack_00000014;
  CMatrix3x3f local_7c;
  CVector3f local_54;
  float local_44;
  float local_40;
  CVector3f local_3c;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  if (in_stack_00000014 != 2.8026e-45) {
    if (in_stack_0000000c == (float *)0x0) {
      iVar2 = 0;
      if (0 < in_stack_00000010) {
        do {
          local_7c.m[0].x = in_stack_00000014;
          iVar2 = iVar2 + 1;
          core_gore_cpp_FUN_004edaa0();
        } while (iVar2 < in_stack_00000010);
      }
    }
    else {
      local_1c = SQRT(in_stack_0000000c[2] * in_stack_0000000c[2] +
                      *in_stack_0000000c * *in_stack_0000000c +
                      in_stack_0000000c[1] * in_stack_0000000c[1]);
      if (&local_40 != in_stack_0000000c) {
        local_40 = *in_stack_0000000c;
        local_3c.x = in_stack_0000000c[1];
        local_3c.y = in_stack_0000000c[2];
      }
      local_7c.m[0].y =
           SQRT(local_3c.y * local_3c.y + local_40 * local_40 + local_3c.x * local_3c.x);
      if (local_7c.m[0].y <= 0.0) {
        local_3c.x = 0.0;
        local_40 = 0.0;
        local_3c.y = 0.0;
      }
      else {
        fVar1 = 1.0 / local_7c.m[0].y;
        local_40 = local_40 * fVar1;
        local_3c.x = local_3c.x * fVar1;
        local_3c.y = local_3c.y * fVar1;
      }
      local_7c.m[0].x = 7.242299e-39;
      crt_math_c_atan2_FUN_006013b1
                ((float10)local_3c.x,
                 SQRT((float10)local_40 * (float10)local_40 +
                      (float10)local_3c.y * (float10)local_3c.y));
      local_24 = 0.0;
      fVar3 = crt_math_c_atan2_FUN_006013b1((float10)local_44,(float10)local_3c.x);
      iVar2 = 0;
      local_30 = (float)-extraout_ST1;
      local_2c = (float)fVar3;
      if (0 < in_stack_00000010) {
        do {
          local_3c.x = local_30;
          local_3c.y = local_2c;
          local_3c.z = local_28;
          local_20 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.7853982,0.7853982);
          local_3c.x = local_20 + local_3c.x;
          local_20 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.7853982,0.7853982);
          local_3c.y = local_20 + local_3c.y;
          core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_7c,&local_3c);
          local_3c.x = local_7c.m[0].z;
          local_3c.y = local_7c.m[1].z;
          local_3c.z = local_7c.m[2].z;
          core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.5,0.5);
          local_54.x = local_3c.x * local_24;
          local_54.y = local_3c.y * local_24;
          local_54.z = local_3c.z * local_24;
          if (&local_3c != &local_54) {
            local_3c.x = local_54.x;
            local_3c.y = local_54.y;
            local_3c.z = local_54.z;
          }
          iVar2 = iVar2 + 1;
          core_gore_cpp_FUN_004edaa0();
        } while (iVar2 < in_stack_00000010);
      }
    }
  }
  return;
}
