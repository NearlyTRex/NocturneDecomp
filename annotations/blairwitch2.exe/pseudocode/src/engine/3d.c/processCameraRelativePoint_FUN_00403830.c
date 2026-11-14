// Name: engine_3d.c_processCameraRelativePoint_FUN_00403830
// Address: 00403830
// Address Range: [[00403830, 00403889]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * __cdecl engine_3d_c_processCameraRelativePoint_FUN_00403830(SMRGLPoint *block)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SMRGLHeaderExtended * __cdecl engine_3d_c_processCameraRelativePoint_FUN_00403830(SMRGLPoint *block)

{
  DAT_0070ca88 = (block->point).x;
  DAT_0070ca8c = (block->point).y;
  DAT_0070ca90 = (block->point).z;
  _DAT_01c38b6c = _DAT_01c38b78 - (block->point).x;
  _DAT_01c38b70 = _DAT_01c38b7c - (block->point).y;
  _DAT_01c38b74 = _DAT_01c38b80 - (block->point).z;
  return (SMRGLHeaderExtended *)(block + 1);
}
