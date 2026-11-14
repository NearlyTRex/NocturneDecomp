// Name: core_dcamera.cpp_CDemonCamera_getFogValueAtPosition_FUN_00442cb0
// Address: 00442cb0
// Address Range: [[00442cb0, 00442d7e]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_getFogValueAtPosition_FUN_00442cb0(CDemonCamera *this_ptr,CVector3i *world_position,SProjectedVertex *projected_vertex)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dcamera_cpp_CDemonCamera_getFogValueAtPosition_FUN_00442cb0(CDemonCamera *this_ptr,CVector3i *world_position,SProjectedVertex *projected_vertex)

{
  uint uVar1;
  CVector3i *end_pos;
  int extraout_EDX;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar2 = (float10)((float)(world_position->y - (this_ptr->camera_origin).y) * _DAT_005f4dd4);
  fVar3 = (float10)((float)(world_position->x - (this_ptr->camera_origin).x) * _DAT_005f4dd4);
  fVar4 = (float10)((float)(world_position->z - (this_ptr->camera_origin).z) * _DAT_005f4dd4);
  fVar2 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) * (float10)_DAT_005ce73e;
  round();
  uVar1 = core_dcamera_cpp_sampleFogAlongRay_FUN_0043b1a0
                    ((SFogGrid *)0x146592c,(CVector3i *)(extraout_EDX + 0x16c),end_pos,
                     (int)ROUND(fVar2));
  uVar1 = uVar1 * 0xff >> 0xe;
  if (0xff < uVar1) {
    return 0xffff;
  }
  return uVar1 << 8;
}
