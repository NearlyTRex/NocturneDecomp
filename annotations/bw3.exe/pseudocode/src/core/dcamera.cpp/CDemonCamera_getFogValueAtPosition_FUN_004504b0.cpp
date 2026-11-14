// Name: core_dcamera.cpp_CDemonCamera_getFogValueAtPosition_FUN_004504b0
// Address: 004504b0
// Address Range: [[004504b0, 0045057e]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_getFogValueAtPosition_FUN_004504b0(CDemonCamera *this_ptr,CVector3i *world_position,SProjectedVertex *projected_vertex)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dcamera_cpp_CDemonCamera_getFogValueAtPosition_FUN_004504b0(CDemonCamera *this_ptr,CVector3i *world_position,SProjectedVertex *projected_vertex)

{
  uint uVar1;
  CVector3i *end_pos;
  int extraout_EDX;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar2 = (float10)((float)(world_position->y - (this_ptr->camera_origin).y) * _DAT_005ddfc4);
  fVar3 = (float10)((float)(world_position->x - (this_ptr->camera_origin).x) * _DAT_005ddfc4);
  fVar4 = (float10)((float)(world_position->z - (this_ptr->camera_origin).z) * _DAT_005ddfc4);
  fVar2 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) * (float10)_DAT_005ba06e;
  round();
  uVar1 = core_dcamera_cpp_sampleFogAlongRay_FUN_00448980
                    ((SFogGrid *)0x149d6dc,(CVector3i *)(extraout_EDX + 0x16c),end_pos,
                     (int)ROUND(fVar2));
  uVar1 = uVar1 * 0xff >> 0xe;
  if (0xff < uVar1) {
    return 0xffff;
  }
  return uVar1 << 8;
}
