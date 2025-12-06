// Name: core_platfrm.cpp_FUN_0054cab0
// Address: 0054cab0
// Address Range: [[0054cab0, 0054cc0d]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054cab0()

#include "nocturne.h"

/* Signature: byte actors_other_platform.cpp_FUN_0054cab0(uint param_1) */

void core_platfrm_cpp_FUN_0054cab0(void)

{
  float *pfVar1;
  CVector3f *pCVar2;
  BADSPACEBASE *in_ESP;
  uint *puVar3;
  byte bVar4;
  int in_stack_00000004;
  CQuaternion4f *apCStackY_1844 [1523];
  float in_stack_ffffff98;
  CQuaternion4f *quat_ptr;
  CQuaternion4f local_58;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  CVector3f local_30;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  bVar4 = 0;
  if (*(float *)(in_stack_00000004 + 0x2dc) < 0.0) {
    *(uint *)(in_stack_00000004 + 0x2dc) = 0;
  }
  if (1.0 < *(float *)(in_stack_00000004 + 0x2dc)) {
    *(uint *)(in_stack_00000004 + 0x2dc) = 0x3f800000;
  }
  if (*(char *)(in_stack_00000004 + 0x2f0) == '\0') {
    pfVar1 = (float *)(in_stack_00000004 + 0x2dc);
    local_48 = *(float *)(in_stack_00000004 + 0x328) * *pfVar1;
    local_44 = *(float *)(in_stack_00000004 + 0x32c) * *pfVar1;
    local_40 = *(float *)(in_stack_00000004 + 0x330) * *pfVar1;
    local_18 = 1.0 - *(float *)(in_stack_00000004 + 0x2dc);
    local_24 = *(float *)(in_stack_00000004 + 0x31c) * local_18;
    local_20 = *(float *)(in_stack_00000004 + 800) * local_18;
    local_1c = *(float *)(in_stack_00000004 + 0x324) * local_18;
    local_3c = local_24 + local_48;
    local_38 = local_20 + local_44;
    local_34 = local_1c + local_40;
    *(float *)(in_stack_00000004 + 0x20) = local_3c;
    *(float *)(in_stack_00000004 + 0x24) = local_38;
    *(float *)(in_stack_00000004 + 0x28) = local_34;
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((CQuaternion4f *)(in_stack_00000004 + 0x334),
               (CQuaternion4f *)(in_stack_00000004 + 0x344),
               *(CQuaternion4f **)(in_stack_00000004 + 0x2dc),in_stack_ffffff98);
    quat_ptr = &local_58;
    pCVar2 = &local_30;
    local_58.w = (float)quat_ptr;
    puVar3 = (uint *)((int)&local_58 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(uint *)((int)&local_58 + (uint)bVar4 * -8 + 4) =
         *(uint *)(&stack0xffffff9c + (uint)bVar4 * -8);
    *puVar3 = *(uint *)(&stack0xffffffa0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    puVar3[(uint)bVar4 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffffa0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) +
          ((uint)bVar4 * -2 + 1) * 4);
    pCVar2 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0(pCVar2,quat_ptr);
    if ((CVector3f *)(in_stack_00000004 + 0x30) != pCVar2) {
      ((CVector3f *)(in_stack_00000004 + 0x30))->x = pCVar2->x;
      *(float *)(in_stack_00000004 + 0x34) = pCVar2->y;
      *(float *)(in_stack_00000004 + 0x38) = pCVar2->z;
      return;
    }
  }
  else {
    local_14 = ((CCourse *)(in_stack_00000004 + 0x310))->len;
    core_course_cpp_CCourse_FUN_00442710((CCourse *)(in_stack_00000004 + 0x310));
  }
  return;
}
