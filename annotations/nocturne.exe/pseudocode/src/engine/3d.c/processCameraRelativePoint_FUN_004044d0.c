// Name: engine_3d.c_processCameraRelativePoint_FUN_004044d0
// Address: 004044d0
// Address Range: [[004044d0, 00404529]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_processCameraRelativePoint_FUN_004044d0(CQuaternion4f *input_point)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_processCameraRelativePoint_FUN_004044d0(CQuaternion4f *input_point)

{
  DAT_006b028c = input_point->x;
  DAT_006b0290 = input_point->y;
  DAT_006b0294 = input_point->z;
  g_RelativeX = g_CameraOriginX - (int)input_point->x;
  g_RelativeY = g_CameraOriginY - (int)input_point->y;
  g_RelativeZ = g_CameraOriginZ - (int)input_point->z;
  return (SMRGLHeaderExtended *)(input_point + 1);
}
