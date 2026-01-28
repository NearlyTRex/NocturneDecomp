// Name: engine_3d.c_processCameraRelativePoint_FUN_004037e0
// Address: 004037e0
// Address Range: [[004037e0, 00403839]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_processCameraRelativePoint_FUN_004037e0(CQuaternion4f *input_point)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_processCameraRelativePoint_FUN_004037e0(CQuaternion4f *input_point)

{
  g_StoredX = (int)input_point->x;
  g_StoredY = (int)input_point->y;
  g_StoredZ = (int)input_point->z;
  g_RelativeX = g_CameraOriginX - (int)input_point->x;
  g_RelativeY = g_CameraOriginY - (int)input_point->y;
  g_RelativeZ = g_CameraOriginZ - (int)input_point->z;
  return (SMRGLHeaderExtended *)(input_point + 1);
}
