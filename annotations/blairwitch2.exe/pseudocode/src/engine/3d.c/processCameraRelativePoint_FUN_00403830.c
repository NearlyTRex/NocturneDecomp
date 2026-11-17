// Name: engine_3d.c_processCameraRelativePoint_FUN_00403830
// Address: 00403830
// Address Range: [[00403830, 00403889]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_processCameraRelativePoint_FUN_00403830(SMRGLPoint *block)

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl engine_3d_c_processCameraRelativePoint_FUN_00403830(SMRGLPoint *block)

{
  g_INT_0070ca88 = (block->point).x;
  g_INT_0070ca8c = (block->point).y;
  g_INT_0070ca90 = (block->point).z;
  g_INT_01c38b6c = g_INT_01c38b78 - (block->point).x;
  g_INT_01c38b70 = g_INT_01c38b7c - (block->point).y;
  g_INT_01c38b74 = g_INT_01c38b80 - (block->point).z;
  return (SMRGLHeaderExtended *)(block + 1);
}
