// Name: engine_light.cpp_calculateLighting_FUN_00505780
// Address: 00505780
// Address Range: [[00505780, 00505823]]
// Convention: __cdecl
// Signature: int engine_light.cpp_calculateLighting_FUN_00505780(int normal_x, int normal_y, int normal_z)

#include "nocturne.h"

int __cdecl engine_light_cpp_calculateLighting_FUN_00505780(int normal_x,int normal_y,int normal_z)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = ((uint)((longlong)normal_x * (longlong)g_LightDirectionX) >> 0x10 |
          (int)((ulonglong)((longlong)normal_x * (longlong)g_LightDirectionX) >> 0x20) << 0x10) +
          ((uint)((longlong)normal_y * (longlong)g_LightDirectionY) >> 0x10 |
          (int)((ulonglong)((longlong)normal_y * (longlong)g_LightDirectionY) >> 0x20) << 0x10) +
          ((uint)((longlong)normal_z * (longlong)g_LightDirectionZ) >> 0x10 |
          (int)((ulonglong)((longlong)normal_z * (longlong)g_LightDirectionZ) >> 0x20) << 0x10);
  iVar2 = -iVar3;
  if (iVar3 < 1) {
    if (iVar3 != -0xffff && 0xfffe < iVar2) {
      iVar2 = 0xffff;
    }
  }
  else {
    iVar2 = 0;
  }
  lVar1 = (longlong)iVar2 * (longlong)(0xffff - g_AmbientLightLevel);
  iVar3 = g_AmbientLightLevel + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  if (-1 < iVar3) {
    if (0xffff < iVar3) {
      iVar3 = 0xffff;
    }
    return ((int)((iVar3 + (iVar3 >> 0x1f) * -0x10) - (uint)((iVar3 >> 0x1f) << 3 < 0)) >> 4) +
           0x100;
  }
  return 0x100;
}
