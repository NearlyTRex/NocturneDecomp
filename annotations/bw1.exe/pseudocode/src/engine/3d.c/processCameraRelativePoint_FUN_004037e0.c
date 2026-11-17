// Name: engine_3d.c_processCameraRelativePoint_FUN_004037e0
// Address: 004037e0
// Address Range: [[004037e0, 00403839]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_processCameraRelativePoint_FUN_004037e0(SMRGLPoint *block)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_processCameraRelativePoint_FUN_004037e0(SMRGLPoint *block)

{
  g_StoredX = (block->point).x;
  g_StoredY = (block->point).y;
  g_StoredZ = (block->point).z;
  g_RelativeX = g_CameraOriginX - (block->point).x;
  g_RelativeY = g_CameraOriginY - (block->point).y;
  g_RelativeZ = g_CameraOriginZ - (block->point).z;
  return (SMRGLHeaderExtended *)(block + 1);
}
