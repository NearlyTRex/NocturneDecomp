// Name: core_dcamera.cpp_CDemonCamera_getFogValueAtPosition_FUN_00453700
// Address: 00453700
// Address Range: [[00453700, 004537cd]]
// Convention: __cdecl
// Signature: int core_dcamera.cpp_CDemonCamera_getFogValueAtPosition_FUN_00453700(CDemonCamera * this_ptr, CVector3i * world_position)

#include "nocturne.h"

int __cdecl
core_dcamera_cpp_CDemonCamera_getFogValueAtPosition_FUN_00453700
          (CDemonCamera *this_ptr,CVector3i *world_position)

{
  uint uVar1;
  CVector3i *end_pos;
  BADSPACEBASE *in_ESP;
  float10 fVar2;
  double dVar3;
  int local_1c;
  int local_18;
  int local_14;
  
  local_1c = world_position->x - (this_ptr->camera_origin).x;
  local_18 = world_position->y - (this_ptr->camera_origin).y;
  local_14 = world_position->z - (this_ptr->camera_origin).z;
  fVar2 = SQRT((float10)((float)local_14 * 0.00390625f) *
               (float10)((float)local_14 * 0.00390625f) +
               (float10)((float)local_1c * 0.00390625f) *
               (float10)((float)local_1c * 0.00390625f) +
               (float10)((float)local_18 * 0.00390625f) *
               (float10)((float)local_18 * 0.00390625f)) *
          (float10)256;
  dVar3 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(this_ptr,&local_1c));
  uVar1 = core_dcamera_cpp_sampleFogAlongRay_FUN_0044bdd0
                    (&g_CameraFogGrid,(CVector3i *)((int)((ulonglong)dVar3 >> 0x20) + 0x16c),end_pos
                     ,(int)ROUND(fVar2));
  uVar1 = uVar1 * 0xff >> 0xe;
  if (0xff < uVar1) {
    return 0xffff;
  }
  return uVar1 << 8;
}
