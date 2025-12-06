// Name: core_msnedit.cpp_FUN_00535c60
// Address: 00535c60
// Address Range: [[00535c60, 00535de8]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_00535c60()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte core_msnedit.cpp_FUN_00535c60(uint param_1, uint param_2,
   uint param_3) */

float * core_msnedit_cpp_FUN_00535c60(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  BADSPACEBASE *in_ESP;
  byte bVar5;
  float *in_stack_00000004;
  CVector3i *in_stack_00000008;
  int in_stack_0000000c;
  CVector3i *apCStackY_1040 [1014];
  int in_stack_ffffffa4;
  CVector3i *output_ptr;
  CVector3i *in_stack_ffffffa8;
  CVector3i *local_38;
  CVector3i local_34;
  int local_28;
  float local_24 [3];
  int iStack_18;
  uint local_14;
  
  bVar5 = 0;
  core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
            (&g_CDemonCameraInstance,in_stack_00000008,in_stack_0000000c,in_stack_ffffffa4);
  output_ptr = &local_34;
  local_38 = in_stack_ffffffa8;
  *(uint *)((int)&local_34 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffffac + (uint)bVar5 * -8);
  *(uint *)((int)&local_34 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4) =
       *(uint *)(&stack0xffffffb0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
            (&g_CDemonCameraInstance,output_ptr,in_stack_ffffffa8);
  local_34.x = iStack_18;
  *(uint *)((int)&local_34 + (uint)bVar5 * -8 + 4) = (&local_14)[(uint)bVar5 * -2];
  *(uint *)((int)&local_34 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       *(uint *)(&stack0xfffffff0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  *in_stack_00000004 = (float)local_34.y * _DAT_00661c30;
  in_stack_00000004[1] = (float)local_34.z * _DAT_00661c30;
  in_stack_00000004[2] = (float)local_28 * _DAT_00661c30;
  if (10000f <
      SQRT(in_stack_00000004[2] * in_stack_00000004[2] +
           *in_stack_00000004 * *in_stack_00000004 + in_stack_00000004[1] * in_stack_00000004[1])) {
    fVar1 = *in_stack_00000004 - (float)g_CDemonCameraInstance.base.position.x;
    fVar2 = in_stack_00000004[1] - (float)g_CDemonCameraInstance.base.position.y;
    fVar3 = in_stack_00000004[2] - (float)g_CDemonCameraInstance.base.position.z;
    fVar4 = 10000f / SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
    fVar2 = (float)g_CDemonCameraInstance.base.position.y + fVar2 * fVar4;
    fVar3 = (float)g_CDemonCameraInstance.base.position.z + fVar3 * fVar4;
    if (in_stack_00000004 != local_24) {
      *in_stack_00000004 = (float)g_CDemonCameraInstance.base.position.x + fVar1 * fVar4;
      in_stack_00000004[1] = fVar2;
      in_stack_00000004[2] = fVar3;
      return in_stack_00000004;
    }
  }
  return in_stack_00000004;
}
