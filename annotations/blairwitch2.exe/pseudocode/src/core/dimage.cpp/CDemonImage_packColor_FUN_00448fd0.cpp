// Name: core_dimage.cpp_CDemonImage_packColor_FUN_00448fd0
// Address: 00448fd0
// Address Range: [[00448fd0, 00449024]]
// Convention: __cdecl
// Signature: ushort __cdecl core_dimage_cpp_CDemonImage_packColor_FUN_00448fd0(CDemonImage *this_ptr,uint red,uint green,uint blue)

#include "nocturne.h"

ushort __cdecl core_dimage_cpp_CDemonImage_packColor_FUN_00448fd0(CDemonImage *this_ptr,uint red,uint green,uint blue)

{
  return (ushort)(blue / (uint)g_BlueScaleFactor << (g_BlueBitPosition.bytes[0] & 0x1f)) |
         (ushort)(green / (uint)g_GreenScaleFactor << (g_GreenBitPosition.bytes[0] & 0x1f)) |
         (ushort)(red / (uint)g_RedScaleFactor << (g_RedBitPosition.bytes[0] & 0x1f));
}
