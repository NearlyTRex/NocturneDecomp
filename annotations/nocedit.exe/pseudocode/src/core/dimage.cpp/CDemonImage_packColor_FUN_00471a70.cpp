// Name: core_dimage.cpp_CDemonImage_packColor_FUN_00471a70
// Address: 00471a70
// Address Range: [[00471a70, 00471ac4]]
// Convention: __cdecl
// Signature: ushort __cdecl core_dimage_cpp_CDemonImage_packColor_FUN_00471a70(CDemonImage *this_ptr,uint red,uint green,uint blue)

#include "nocturne.h"

ushort __cdecl core_dimage_cpp_CDemonImage_packColor_FUN_00471a70(CDemonImage *this_ptr,uint red,uint green,uint blue)

{
  return (ushort)(blue / (uint)g_BlueScaleFactor << ((byte)g_BlueBitPosition & 0x1f)) |
         (ushort)(green / (uint)g_GreenScaleFactor << ((byte)g_GreenBitPosition & 0x1f)) |
         (ushort)(red / (uint)g_RedScaleFactor << ((byte)g_RedBitPosition & 0x1f));
}
