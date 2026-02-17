// Name: core_dimage.cpp_CDemonImage_packColor_FUN_00471a70
// Address: 00471a70
// Address Range: [[00471a70, 00471ac4]]
// Convention: __cdecl
// Signature: ushort __cdecl core_dimage_cpp_CDemonImage_packColor_FUN_00471a70(CDemonImage *this_ptr,uint red,uint green,uint blue)

#include "nocturne.h"

ushort __cdecl core_dimage_cpp_CDemonImage_packColor_FUN_00471a70(CDemonImage *this_ptr,uint red,uint green,uint blue)

{
  return (ushort)(blue / (uint)g_BlueScaleFactor << (g_BlueBitPosition.bytes[0] & 0x1f)) |
         (ushort)(green / (uint)g_GreenScaleFactor << (g_GreenBitPosition.bytes[0] & 0x1f)) |
         (ushort)(red / (uint)g_RedScaleFactor << (g_RedBitPosition.bytes[0] & 0x1f));
}
