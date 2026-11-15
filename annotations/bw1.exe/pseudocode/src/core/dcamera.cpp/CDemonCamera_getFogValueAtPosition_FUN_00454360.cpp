// Name: core_dcamera.cpp_CDemonCamera_getFogValueAtPosition_FUN_00454360
// Address: 00454360
// Address Range: [[00454360, 0045442e]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_getFogValueAtPosition_FUN_00454360(CDemonCamera *this_ptr,CVector3i *world_position,SProjectedVertex *projected_vertex)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dcamera_cpp_CDemonCamera_getFogValueAtPosition_FUN_00454360(CDemonCamera *this_ptr,CVector3i *world_position,SProjectedVertex *projected_vertex)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  double dVar5;
  
  fVar1 = (float)(world_position->x - (this_ptr->camera_origin).x) * _DAT_005fe604;
  fVar2 = (float)(world_position->y - (this_ptr->camera_origin).y) * _DAT_005fe604;
  fVar3 = (float)(world_position->z - (this_ptr->camera_origin).z) * _DAT_005fe604;
  dVar5 = round
                    ((double)(SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2) *
                             (float)_DAT_005d7a07));
  uVar4 = core_dcamera_cpp_sampleFogAlongRay_FUN_0044c840
                    ((SFogGrid *)0x1480e2c,&this_ptr->camera_origin,world_position,(int)ROUND(dVar5)
                    );
  uVar4 = uVar4 * 0xff >> 0xe;
  if (0xff < uVar4) {
    return 0xffff;
  }
  return uVar4 << 8;
}
