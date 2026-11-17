// Name: core_dimage.cpp_CDemonImage_packColor_FUN_0045b2a0
// Address: 0045b2a0
// Address Range: [[0045b2a0, 0045b2f4]]
// Convention: __cdecl
// Signature: ushort __cdecl core_dimage_cpp_CDemonImage_packColor_FUN_0045b2a0(CDemonImage *this_ptr,uint red,uint green,uint blue)

#include "nocturne.h"

ushort __cdecl core_dimage_cpp_CDemonImage_packColor_FUN_0045b2a0(CDemonImage *this_ptr,uint red,uint green,uint blue)

{
  return (ushort)(blue / (uint)g_INT_01c6af90 << (g_BIT_INTEGER32_01c6af8c.bytes[0] & 0x1f)) |
         (ushort)(green / (uint)g_INT_01c6af84 << (g_BIT_INTEGER32_01c6af80.bytes[0] & 0x1f)) |
         (ushort)(red / (uint)g_INT_01c6af78 << (g_BIT_INTEGER32_01c6af74.bytes[0] & 0x1f));
}
