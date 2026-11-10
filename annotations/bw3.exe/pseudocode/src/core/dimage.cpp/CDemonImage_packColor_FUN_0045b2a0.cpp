// Name: core_dimage.cpp_CDemonImage_packColor_FUN_0045b2a0
// Address: 0045b2a0
// Address Range: [[0045b2a0, 0045b2f4]]
// Convention: __cdecl
// Signature: ushort __cdecl core_dimage_cpp_CDemonImage_packColor_FUN_0045b2a0(CDemonImage *this_ptr,uint red,uint green,uint blue)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort __cdecl core_dimage_cpp_CDemonImage_packColor_FUN_0045b2a0(CDemonImage *this_ptr,uint red,uint green,uint blue)

{
  return (ushort)(blue / _DAT_01c6af90 << (DAT_01c6af8c & 0x1f)) |
         (ushort)(green / _DAT_01c6af84 << (DAT_01c6af80 & 0x1f)) |
         (ushort)(red / _DAT_01c6af78 << (DAT_01c6af74 & 0x1f));
}
