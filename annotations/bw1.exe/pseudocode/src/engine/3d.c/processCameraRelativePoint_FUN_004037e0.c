// Name: engine_3d.c_processCameraRelativePoint_FUN_004037e0
// Address: 004037e0
// Address Range: [[004037e0, 00403839]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_processCameraRelativePoint_FUN_004037e0(SMRGLPoint *block)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_processCameraRelativePoint_FUN_004037e0(SMRGLPoint *block)

{
  g_INT_00713a88 = (block->point).x;
  g_INT_00713a8c = (block->point).y;
  g_INT_00713a90 = (block->point).z;
  g_INT_01c51d2c = g_INT_01c51d38 - (block->point).x;
  g_INT_01c51d30 = g_INT_01c51d3c - (block->point).y;
  g_INT_01c51d34 = g_INT_01c51d40 - (block->point).z;
  return (SMRGLHeaderExtended *)(block + 1);
}
