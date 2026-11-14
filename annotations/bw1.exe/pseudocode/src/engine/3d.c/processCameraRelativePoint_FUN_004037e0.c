// Name: engine_3d.c_processCameraRelativePoint_FUN_004037e0
// Address: 004037e0
// Address Range: [[004037e0, 00403839]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_processCameraRelativePoint_FUN_004037e0(SMRGLPoint *block)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_processCameraRelativePoint_FUN_004037e0(SMRGLPoint *block)

{
  DAT_00713a88 = (block->point).x;
  DAT_00713a8c = (block->point).y;
  DAT_00713a90 = (block->point).z;
  _DAT_01c51d2c = _DAT_01c51d38 - (block->point).x;
  _DAT_01c51d30 = _DAT_01c51d3c - (block->point).y;
  _DAT_01c51d34 = _DAT_01c51d40 - (block->point).z;
  return (SMRGLHeaderExtended *)(block + 1);
}
