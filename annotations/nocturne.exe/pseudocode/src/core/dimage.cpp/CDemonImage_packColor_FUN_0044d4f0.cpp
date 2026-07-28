// Name: core_dimage.cpp_CDemonImage_packColor_FUN_0044d4f0
// Address: 0044d4f0
// Address Range: [[0044d4f0, 0044d544]]
// Convention: __cdecl
// Signature: ushort __cdecl core_dimage_cpp_CDemonImage_packColor_FUN_0044d4f0(CDemonImage *this_ptr,uint red,uint green,uint blue)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort __cdecl core_dimage_cpp_CDemonImage_packColor_FUN_0044d4f0(CDemonImage *this_ptr,uint red,uint green,uint blue)

{
  return (ushort)(blue / _DAT_01c00640 << (DAT_01c0063c & 0x1f)) |
         (ushort)(green / _DAT_01c00634 << (DAT_01c00630 & 0x1f)) |
         (ushort)(red / _DAT_01c00628 << (DAT_01c00624 & 0x1f));
}
