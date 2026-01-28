// Name: core_msnedit.cpp_FUN_00535c60
// Address: 00535c60
// Address Range: [[00535c60, 00535de8]]
// Convention: unknown
// Signature: float * core_msnedit_cpp_FUN_00535c60(void)

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_FUN_00535c60(uint param_1, uint param_2,
   uint param_3) */

float * core_msnedit_cpp_FUN_00535c60(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  float *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  float afStackY_1044 [1015];
  CVector3i *input_ptr;
  CVector3i local_5c [3];
  CVector3i local_38;
  float local_2c [3];
  CVector3i local_20;
  
  bVar5 = 0;
  core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
            (&g_CDemonCameraInstance,in_stack_00000008,in_stack_0000000c,local_5c);
  input_ptr = &local_38;
  local_38.x = local_5c[0].x;
  local_2c[(uint)bVar5 * -2 + -2] = *(float *)((int)local_5c + (uint)bVar5 * -8 + 4);
  local_2c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -1] =
       *(float *)((int)local_5c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
            (&g_CDemonCameraInstance,input_ptr,&local_20);
  local_38.x = local_20.x;
  local_2c[(uint)bVar5 * -2 + -2] = *(float *)((int)&local_20 + (uint)bVar5 * -8 + 4);
  local_2c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -1] =
       *(float *)((int)&local_20 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  *in_stack_00000004 = (float)local_38.x * 0.00390625f;
  in_stack_00000004[1] = (float)local_38.y * 0.00390625f;
  in_stack_00000004[2] = (float)local_38.z * 0.00390625f;
  if (10000.0f <
      SQRT(in_stack_00000004[2] * in_stack_00000004[2] +
           *in_stack_00000004 * *in_stack_00000004 + in_stack_00000004[1] * in_stack_00000004[1])) {
    fVar1 = *in_stack_00000004 - (float)g_CDemonCameraInstance.base.position.x;
    fVar2 = in_stack_00000004[1] - (float)g_CDemonCameraInstance.base.position.y;
    fVar3 = in_stack_00000004[2] - (float)g_CDemonCameraInstance.base.position.z;
    fVar4 = 10000.0f / SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
    fVar2 = (float)g_CDemonCameraInstance.base.position.y + fVar2 * fVar4;
    fVar3 = (float)g_CDemonCameraInstance.base.position.z + fVar3 * fVar4;
    if (in_stack_00000004 != local_2c) {
      *in_stack_00000004 = (float)g_CDemonCameraInstance.base.position.x + fVar1 * fVar4;
      in_stack_00000004[1] = fVar2;
      in_stack_00000004[2] = fVar3;
      return in_stack_00000004;
    }
  }
  return in_stack_00000004;
}
