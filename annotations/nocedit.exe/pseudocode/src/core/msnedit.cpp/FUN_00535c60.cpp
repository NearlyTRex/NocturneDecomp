// Name: core_msnedit.cpp_FUN_00535c60
// Address: 00535c60
// Address Range: [[00535c60, 00535de8]]
// Convention: __cdecl
// Signature: float * __cdecl core_msnedit_cpp_FUN_00535c60(float *param_1,int param_2,int param_3)

#include "nocturne.h"

float * __cdecl core_msnedit_cpp_FUN_00535c60(float *param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  float afStackY_1044 [1015];
  CVector3i *input_ptr;
  CVector3i local_5c [3];
  CVector3i local_38;
  float local_2c [3];
  CVector3i local_20;
  
  bVar5 = 0;
  core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
            (&g_CDemonCameraInstance,param_2,param_3,local_5c);
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
  *param_1 = (float)local_38.x * 0.00390625f;
  param_1[1] = (float)local_38.y * 0.00390625f;
  param_1[2] = (float)local_38.z * 0.00390625f;
  if (10000.0f < SQRT(param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1])
     ) {
    fVar1 = *param_1 - (float)g_CDemonCameraInstance.base.position.x;
    fVar2 = param_1[1] - (float)g_CDemonCameraInstance.base.position.y;
    fVar3 = param_1[2] - (float)g_CDemonCameraInstance.base.position.z;
    fVar4 = 10000.0f / SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
    fVar2 = (float)g_CDemonCameraInstance.base.position.y + fVar2 * fVar4;
    fVar3 = (float)g_CDemonCameraInstance.base.position.z + fVar3 * fVar4;
    if (param_1 != local_2c) {
      *param_1 = (float)g_CDemonCameraInstance.base.position.x + fVar1 * fVar4;
      param_1[1] = fVar2;
      param_1[2] = fVar3;
      return param_1;
    }
  }
  return param_1;
}
