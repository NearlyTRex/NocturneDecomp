// Name: engine_3d.c_processCameraRelativePoint_FUN_004037e0
// Address: 004037e0
// Address Range: [[004037e0, 00403839]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_processCameraRelativePoint_FUN_004037e0(SMRGLPoint *block)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_processCameraRelativePoint_FUN_004037e0(SMRGLPoint *block)

{
  DAT_00730408 = (block->point).x;
  DAT_0073040c = (block->point).y;
  DAT_00730410 = (block->point).z;
  _DAT_01c6e2cc = _DAT_01c6e2d8 - (block->point).x;
  _DAT_01c6e2d0 = _DAT_01c6e2dc - (block->point).y;
  _DAT_01c6e2d4 = _DAT_01c6e2e0 - (block->point).z;
  return (SMRGLHeaderExtended *)(block + 1);
}
