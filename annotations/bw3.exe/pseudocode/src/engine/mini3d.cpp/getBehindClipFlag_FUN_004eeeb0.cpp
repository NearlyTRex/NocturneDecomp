// Name: engine_mini3d.cpp_getBehindClipFlag_FUN_004eeeb0
// Address: 004eeeb0
// Address Range: [[004eeeb0, 004eeef0]]
// Convention: __cdecl
// Signature: int __cdecl engine_mini3d_cpp_getBehindClipFlag_FUN_004eeeb0(CVector3f *point)

#include "nocturne.h"

int __cdecl engine_mini3d_cpp_getBehindClipFlag_FUN_004eeeb0(CVector3f *point)

{
  float fVar1;
  uint3 uVar2;
  
  fVar1 = (point->z - *(float *)(g_PTR_01d76cfc + 0x2c)) * *(float *)(g_PTR_01d76cfc + 0x20) +
          (point->y - *(float *)(g_PTR_01d76cfc + 0x28)) * *(float *)(g_PTR_01d76cfc + 0x14) +
          (point->x - *(float *)(g_PTR_01d76cfc + 0x24)) * *(float *)(g_PTR_01d76cfc + 8);
  uVar2 = (uint3)(CONCAT22((short)((uint)g_PTR_01d76cfc >> 0x10),
                           (ushort)(0.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                           (ushort)(fVar1 == 0.0) << 0xe) >> 8);
  if (0.0 >= fVar1) {
    return CONCAT31(uVar2,0x10);
  }
  return (uint)uVar2 << 8;
}
