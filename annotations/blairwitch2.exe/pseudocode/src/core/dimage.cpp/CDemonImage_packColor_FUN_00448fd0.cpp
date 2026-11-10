// Name: core_dimage.cpp_CDemonImage_packColor_FUN_00448fd0
// Address: 00448fd0
// Address Range: [[00448fd0, 00449024]]
// Convention: __cdecl
// Signature: ushort __cdecl core_dimage_cpp_CDemonImage_packColor_FUN_00448fd0(CDemonImage *this_ptr,uint red,uint green,uint blue)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort __cdecl core_dimage_cpp_CDemonImage_packColor_FUN_00448fd0(CDemonImage *this_ptr,uint red,uint green,uint blue)

{
  return (ushort)(blue / _DAT_01c35830 << (DAT_01c3582c & 0x1f)) |
         (ushort)(green / _DAT_01c35824 << (DAT_01c35820 & 0x1f)) |
         (ushort)(red / _DAT_01c35818 << (DAT_01c35814 & 0x1f));
}
