// Name: engine_3d.c_processCameraRelativePoint_FUN_004037e0
// Address: 004037e0
// Address Range: [[004037e0, 00403839]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_processCameraRelativePoint_FUN_004037e0(SMRGLPoint *block)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_processCameraRelativePoint_FUN_004037e0(SMRGLPoint *block)

{
  g_INT_00730408 = (block->point).x;
  g_INT_0073040c = (block->point).y;
  g_INT_00730410 = (block->point).z;
  g_INT_01c6e2cc = g_INT_01c6e2d8 - (block->point).x;
  g_INT_01c6e2d0 = g_INT_01c6e2dc - (block->point).y;
  g_INT_01c6e2d4 = g_INT_01c6e2e0 - (block->point).z;
  return (SMRGLHeaderExtended *)(block + 1);
}
