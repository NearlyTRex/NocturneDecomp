// Name: core_msnedit.cpp_screenToWorldPosition_FUN_00535c60
// Address: 00535c60
// Address Range: [[00535c60, 00535de8] [0060c655, 0060c691]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_msnedit_cpp_screenToWorldPosition_FUN_00535c60(CVector3f *out_world_pos,int screen_x,int screen_y)

#include "nocturne.h"

CVector3f * __cdecl core_msnedit_cpp_screenToWorldPosition_FUN_00535c60(CVector3f *out_world_pos,int screen_x,int screen_y)

{
  float fVar5;
  float fVar6;
  byte bVar5;
  int aiStackY_1044 [1015];
  CVector3i local_5c [3];
  CVector3i local_38;
  CVector3f local_2c;
  CVector3i local_20;
  float fVar2;
  float fVar4;
  float fVar3;
  CVector3i *input_ptr;
  float fVar1;
  
  core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0044d2a0
            (&g_CDemonCameraInstance,screen_x,screen_y,local_5c);
  core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
            (&g_CDemonCameraInstance,&local_38,&local_20);
  out_world_pos->x = (float)local_20.x * 0.00390625f;
  out_world_pos->y = (float)local_20.y * 0.00390625f;
  out_world_pos->z = (float)local_20.z * 0.00390625f;
  if (10000.0f <
      SQRT(out_world_pos->z * out_world_pos->z +
           out_world_pos->x * out_world_pos->x + out_world_pos->y * out_world_pos->y)) {
    fVar1 = out_world_pos->x - g_CDemonCameraInstance.base.position.f.x;
    fVar5 = out_world_pos->y - g_CDemonCameraInstance.base.position.f.y;
    fVar6 = out_world_pos->z - g_CDemonCameraInstance.base.position.f.z;
    fVar4 = 10000.0f / SQRT(fVar6 * fVar6 + fVar1 * fVar1 + fVar5 * fVar5);
    fVar2 = g_CDemonCameraInstance.base.position.f.y + fVar5 * fVar4;
    fVar3 = g_CDemonCameraInstance.base.position.f.z + fVar6 * fVar4;
    if (out_world_pos != &local_2c) {
      out_world_pos->x = g_CDemonCameraInstance.base.position.f.x + fVar1 * fVar4;
      out_world_pos->y = fVar2;
      out_world_pos->z = fVar3;
      return out_world_pos;
    }
  }
  return out_world_pos;
}
