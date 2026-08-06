// Name: core_dcamera.cpp_CDemonCamera_getFogValueAtPosition_FUN_004475a0
// Address: 004475a0
// Address Range: [[004475a0, 0044766d]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_getFogValueAtPosition_FUN_004475a0(CDemonCamera *this_ptr,CVector3i *world_position,SProjectedVertex *projected_vertex)

#include "nocturne.h"

int __cdecl core_dcamera_cpp_CDemonCamera_getFogValueAtPosition_FUN_004475a0(CDemonCamera *this_ptr,CVector3i *world_position,SProjectedVertex *projected_vertex)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  double dVar5;
  
  fVar1 = (float)(world_position->x - (this_ptr->camera_origin).x) * 0.00390625f;
  fVar2 = (float)(world_position->y - (this_ptr->camera_origin).y) * 0.00390625f;
  fVar3 = (float)(world_position->z - (this_ptr->camera_origin).z) * 0.00390625f;
  dVar5 = round
                    ((double)(SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2) *
                             (float)256));
  uVar4 = core_dcamera_cpp_sampleFogAlongRay_FUN_0043fc80
                    (&g_SFogGrid_0140d784,&this_ptr->camera_origin,world_position,(int)ROUND(dVar5))
  ;
  uVar4 = uVar4 * 0xff >> 0xe;
  if (0xff < uVar4) {
    return 0xffff;
  }
  return uVar4 << 8;
}
