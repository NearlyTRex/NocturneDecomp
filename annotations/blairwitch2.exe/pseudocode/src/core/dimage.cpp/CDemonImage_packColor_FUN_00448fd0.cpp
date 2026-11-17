// Name: core_dimage.cpp_CDemonImage_packColor_FUN_00448fd0
// Address: 00448fd0
// Address Range: [[00448fd0, 00449024]]
// Convention: __cdecl
// Signature: ushort __cdecl core_dimage_cpp_CDemonImage_packColor_FUN_00448fd0(CDemonImage *this_ptr,uint red,uint green,uint blue)

#include "nocturne.h"

ushort __cdecl core_dimage_cpp_CDemonImage_packColor_FUN_00448fd0(CDemonImage *this_ptr,uint red,uint green,uint blue)

{
  return (ushort)(blue / (uint)g_INT_01c35830 << (g_BIT_INTEGER32_01c3582c.bytes[0] & 0x1f)) |
         (ushort)(green / (uint)g_INT_01c35824 << (g_BIT_INTEGER32_01c35820.bytes[0] & 0x1f)) |
         (ushort)(red / (uint)g_INT_01c35818 << (g_BIT_INTEGER32_01c35814.bytes[0] & 0x1f));
}
