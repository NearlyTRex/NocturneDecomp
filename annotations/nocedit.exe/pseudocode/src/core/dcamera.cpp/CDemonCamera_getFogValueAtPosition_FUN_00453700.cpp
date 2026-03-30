// Name: core_dcamera.cpp_CDemonCamera_getFogValueAtPosition_FUN_00453700
// Address: 00453700
// Address Range: [[00453700, 004537cd]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_getFogValueAtPosition_FUN_00453700(CDemonCamera *this_ptr,CVector3i *world_position,SProjectedVertex *projected_vertex)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl core_dcamera_cpp_CDemonCamera_getFogValueAtPosition_FUN_00453700(CDemonCamera *this_ptr,CVector3i *world_position,SProjectedVertex *projected_vertex)

{
  uint uVar4;
  uint uVar1;
  float fVar3;
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(world_position->x - (this_ptr->camera_origin).x) * 0.00390625f;
  fVar2 = (float)(world_position->y - (this_ptr->camera_origin).y) * 0.00390625f;
  fVar3 = (float)(world_position->z - (this_ptr->camera_origin).z) * 0.00390625f;
  uVar4 = core_dcamera_cpp_sampleFogAlongRay_FUN_0044bdd0
                    (&g_CameraFogGrid,&this_ptr->camera_origin,world_position,
                     (int)ROUND(ROUND(SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2) *
                                      (float)256)));
  uVar1 = uVar4 * 0xff >> 0xe;
  if (0xff < uVar1) {
    return 0xffff;
  }
  return uVar1 << 8;
}
