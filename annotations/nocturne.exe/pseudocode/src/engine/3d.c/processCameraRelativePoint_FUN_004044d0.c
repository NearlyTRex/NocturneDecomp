// Name: engine_3d.c_processCameraRelativePoint_FUN_004044d0
// Address: 004044d0
// Address Range: [[004044d0, 00404529]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_processCameraRelativePoint_FUN_004044d0(CQuaternion4f *input_point)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_processCameraRelativePoint_FUN_004044d0(CQuaternion4f *input_point)

{
  DAT_006b028c = input_point->x;
  DAT_006b0290 = input_point->y;
  DAT_006b0294 = input_point->z;
  _DAT_01c039b8 = _DAT_01c039c4 - (int)input_point->x;
  _DAT_01c039bc = _DAT_01c039c8 - (int)input_point->y;
  _DAT_01c039c0 = _DAT_01c039cc - (int)input_point->z;
  return (SMRGLHeaderExtended *)(input_point + 1);
}
