// Name: core_dimage.cpp_CDemonImage_packColor_FUN_0045f130
// Address: 0045f130
// Address Range: [[0045f130, 0045f184]]
// Convention: __cdecl
// Signature: ushort __cdecl core_dimage_cpp_CDemonImage_packColor_FUN_0045f130(CDemonImage *this_ptr,uint red,uint green,uint blue)

#include "nocturne.h"

ushort __cdecl core_dimage_cpp_CDemonImage_packColor_FUN_0045f130(CDemonImage *this_ptr,uint red,uint green,uint blue)

{
  return (ushort)(blue / (uint)g_INT_01c4e9f0 << (g_BIT_INTEGER32_01c4e9ec.bytes[0] & 0x1f)) |
         (ushort)(green / (uint)g_INT_01c4e9e4 << (g_BIT_INTEGER32_01c4e9e0.bytes[0] & 0x1f)) |
         (ushort)(red / (uint)g_INT_01c4e9d8 << (g_BIT_INTEGER32_01c4e9d4.bytes[0] & 0x1f));
}
