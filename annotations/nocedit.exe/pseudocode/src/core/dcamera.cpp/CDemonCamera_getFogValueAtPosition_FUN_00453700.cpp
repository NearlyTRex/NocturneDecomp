// Name: core_dcamera.cpp_CDemonCamera_getFogValueAtPosition_FUN_00453700
// Address: 00453700
// Address Range: [[00453700, 004537cd]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_getFogValueAtPosition_FUN_00453700 (CDemonCamera *this_ptr,CVector3i *world_position)

#include "nocturne.h"

int __cdecl
core_dcamera_cpp_CDemonCamera_getFogValueAtPosition_FUN_00453700
          (CDemonCamera *this_ptr,CVector3i *world_position)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  double dVar5;
  
  fVar1 = (float)(world_position->x - (this_ptr->camera_origin).x) * 0.00390625f;
  fVar2 = (float)(world_position->y - (this_ptr->camera_origin).y) * 0.00390625f;
  fVar3 = (float)(world_position->z - (this_ptr->camera_origin).z) * 0.00390625f;
  dVar5 = crt_math_c_round_FUN_005fe6b0
                    ((double)(SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2) *
                             (float)256));
  uVar4 = core_dcamera_cpp_sampleFogAlongRay_FUN_0044bdd0
                    (&g_CameraFogGrid,&this_ptr->camera_origin,world_position,(int)ROUND(dVar5));
  uVar4 = uVar4 * 0xff >> 0xe;
  if (0xff < uVar4) {
    return 0xffff;
  }
  return uVar4 << 8;
}
