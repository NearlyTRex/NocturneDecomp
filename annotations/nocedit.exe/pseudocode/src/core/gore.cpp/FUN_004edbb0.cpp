// Name: core_gore.cpp_FUN_004edbb0
// Address: 004edbb0
// Address Range: [[004edbb0, 004edce4] [004eddc2, 004eddd4]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004edbb0()

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
  CMatrix3x3f local_78;
  CVector3f local_50;
  float local_40;
  float local_3c;
  CVector3f local_38;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  if (in_stack_00000014 != 2.8026e-45) {
    if (in_stack_0000000c == (float *)0x0) {
      iVar2 = 0;
      if (0 < in_stack_00000010) {
        do {
          local_78.m[0].x = in_stack_00000014;
          iVar2 = iVar2 + 1;
          core_gore_cpp_FUN_004edaa0();
        } while (iVar2 < in_stack_00000010);
      }
    }
    else {
      local_18 = SQRT(in_stack_0000000c[2] * in_stack_0000000c[2] +
                      *in_stack_0000000c * *in_stack_0000000c +
                      in_stack_0000000c[1] * in_stack_0000000c[1]);
      if (&local_3c != in_stack_0000000c) {
        local_3c = *in_stack_0000000c;
        local_38.x = in_stack_0000000c[1];
        local_38.y = in_stack_0000000c[2];
      }
      local_78.m[0].y =
           SQRT(local_38.y * local_38.y + local_3c * local_3c + local_38.x * local_38.x);
      if (local_78.m[0].y <= 0.0) {
        local_38.x = 0.0;
        local_3c = 0.0;
        local_38.y = 0.0;
      }
      else {
        fVar1 = 1.0 / local_78.m[0].y;
        local_3c = local_3c * fVar1;
        local_38.x = local_38.x * fVar1;
        local_38.y = local_38.y * fVar1;
      }
      local_78.m[0].x = 7.242299e-39;
      crt_math_c_atan2_FUN_006013b1
                ((float10)local_38.x,
                 SQRT((float10)local_3c * (float10)local_3c +
                      (float10)local_38.y * (float10)local_38.y));
      local_20 = 0.0;
      fVar3 = crt_math_c_atan2_FUN_006013b1((float10)local_40,(float10)local_38.x);
      iVar2 = 0;
      local_2c = (float)-extraout_ST1;
      local_28 = (float)fVar3;
      if (0 < in_stack_00000010) {
        do {
          local_38.x = local_2c;
          local_38.y = local_28;
          local_38.z = local_24;
          local_1c = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.7853982,0.7853982);
          local_38.x = local_1c + local_38.x;
          local_1c = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.7853982,0.7853982);
          local_38.y = local_1c + local_38.y;
          core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_78,&local_38);
          local_38.x = local_78.m[0].z;
          local_38.y = local_78.m[1].z;
          local_38.z = local_78.m[2].z;
          core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.5,0.5);
          local_50.x = local_38.x * local_20;
          local_50.y = local_38.y * local_20;
          local_50.z = local_38.z * local_20;
          if (&local_38 != &local_50) {
            local_38.x = local_50.x;
            local_38.y = local_50.y;
            local_38.z = local_50.z;
          }
          iVar2 = iVar2 + 1;
          core_gore_cpp_FUN_004edaa0();
        } while (iVar2 < in_stack_00000010);
      }
    }
  }
  return;
}
