// Name: engine_light.cpp_calculateLighting_FUN_004e28b0
// Address: 004e28b0
// Address Range: [[004e28b0, 004e2953]]
// Convention: __cdecl
// Signature: int __cdecl engine_light_cpp_calculateLighting_FUN_004e28b0(int normal_x,int normal_y,int normal_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_light_cpp_calculateLighting_FUN_004e28b0(int normal_x,int normal_y,int normal_z)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = ((uint)((longlong)normal_x * (longlong)_DAT_01c38b90) >> 0x10 |
          (int)((ulonglong)((longlong)normal_x * (longlong)_DAT_01c38b90) >> 0x20) << 0x10) +
          ((uint)((longlong)normal_y * (longlong)_DAT_01c38b94) >> 0x10 |
          (int)((ulonglong)((longlong)normal_y * (longlong)_DAT_01c38b94) >> 0x20) << 0x10) +
          ((uint)((longlong)normal_z * (longlong)_DAT_01c38b98) >> 0x10 |
          (int)((ulonglong)((longlong)normal_z * (longlong)_DAT_01c38b98) >> 0x20) << 0x10);
  iVar2 = -iVar3;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (iVar3 != -0xffff && 0xfffe < iVar2) {
    iVar2 = 0xffff;
  }
  lVar1 = (longlong)iVar2 * (longlong)(0xffff - DAT_00617e40);
  iVar3 = DAT_00617e40 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  if (-1 < iVar3) {
    if (0xffff < iVar3) {
      iVar3 = 0xffff;
    }
    return ((int)((iVar3 + (iVar3 >> 0x1f) * -0x10) - (uint)((iVar3 >> 0x1f) << 3 < 0)) >> 4) +
           0x100;
  }
  return 0x100;
}
