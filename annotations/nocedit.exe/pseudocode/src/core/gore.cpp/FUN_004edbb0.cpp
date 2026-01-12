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
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  float10 fVar3;
  float10 extraout_ST1;
  float *in_stack_0000000c;
  int in_stack_00000010;
  float in_stack_00000014;
  CMatrix3x3f CStack_70;
  float local_4c;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  CVector3f local_30;
  float local_24;
  float local_20;
  float local_18;
  float fStack_14;
  
  if (in_stack_00000014 != 2.8026e-45) {
    if (in_stack_0000000c == (float *)0x0) {
      iVar2 = 0;
      if (0 < in_stack_00000010) {
        do {
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
        local_38 = in_stack_0000000c[1];
        local_34 = in_stack_0000000c[2];
      }
      fVar1 = SQRT(local_34 * local_34 + local_3c * local_3c + local_38 * local_38);
      if (fVar1 <= 0.0) {
        local_38 = 0.0;
        local_3c = 0.0;
        local_34 = 0.0;
      }
      else {
        fVar1 = 1.0 / fVar1;
        local_3c = local_3c * fVar1;
        local_38 = local_38 * fVar1;
        local_34 = local_34 * fVar1;
      }
      crt_math_c_atan2_FUN_006013b1
                ((float10)local_38,
                 SQRT((float10)local_3c * (float10)local_3c + (float10)local_34 * (float10)local_34)
                );
      local_20 = 0.0;
      fVar3 = crt_math_c_atan2_FUN_006013b1((float10)local_40,(float10)local_38);
      iVar2 = 0;
      local_30.y = (float)-extraout_ST1;
      local_30.z = (float)fVar3;
      if (0 < in_stack_00000010) {
        do {
          local_38 = local_30.y;
          local_34 = local_30.z;
          local_30.x = local_24;
          local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.7853982,0.7853982);
          local_34 = local_18 + local_34;
          fStack_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.7853982,0.7853982);
          local_30.y = fStack_14 + local_30.y;
          core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_70,&local_30);
          local_30.y = CStack_70.m[1].x;
          local_30.z = CStack_70.m[2].x;
          local_24 = local_4c;
          core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.5,0.5);
          local_40 = local_30.z * unaff_EBP;
          local_3c = local_24 * unaff_EBP;
          local_38 = local_20 * unaff_EBP;
          if (&local_30.z != &local_40) {
            local_30.z = local_40;
            local_24 = local_3c;
            local_20 = local_38;
          }
          CStack_70.m[0].x = in_stack_00000014;
          iVar2 = iVar2 + 1;
          core_gore_cpp_FUN_004edaa0();
        } while (iVar2 < in_stack_00000010);
      }
    }
  }
  return;
}
