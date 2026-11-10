// Name: core_dimage.cpp_CDemonImage_packColor_FUN_0045f130
// Address: 0045f130
// Address Range: [[0045f130, 0045f184]]
// Convention: __cdecl
// Signature: ushort __cdecl core_dimage_cpp_CDemonImage_packColor_FUN_0045f130(CDemonImage *this_ptr,uint red,uint green,uint blue)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort __cdecl core_dimage_cpp_CDemonImage_packColor_FUN_0045f130(CDemonImage *this_ptr,uint red,uint green,uint blue)

{
  return (ushort)(blue / _DAT_01c4e9f0 << (DAT_01c4e9ec & 0x1f)) |
         (ushort)(green / _DAT_01c4e9e4 << (DAT_01c4e9e0 & 0x1f)) |
         (ushort)(red / _DAT_01c4e9d8 << (DAT_01c4e9d4 & 0x1f));
}
