// Name: engine_light.cpp_calculatePhongLighting_FUN_004ffaf0
// Address: 004ffaf0
// Address Range: [[004ffaf0, 004ffd30]]
// Convention: __cdecl
// Signature: int __cdecl engine_light_cpp_calculatePhongLighting_FUN_004ffaf0(int world_x,int world_y,int world_z)

#include "nocturne.h"

int __cdecl engine_light_cpp_calculatePhongLighting_FUN_004ffaf0(int world_x,int world_y,int world_z)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  int aiStackY_100c [1017];
  CVector3i local_24;
  int local_18;
  int local_14;
  
  bVar6 = 0;
  iVar3 = ((uint)((longlong)world_x * (longlong)g_INT_01c51d50) >> 0x10 |
          (int)((ulonglong)((longlong)world_x * (longlong)g_INT_01c51d50) >> 0x20) << 0x10) +
          ((uint)((longlong)world_y * (longlong)g_INT_01c51d54) >> 0x10 |
          (int)((ulonglong)((longlong)world_y * (longlong)g_INT_01c51d54) >> 0x20) << 0x10) +
          ((uint)((longlong)world_z * (longlong)g_INT_01c51d58) >> 0x10 |
          (int)((ulonglong)((longlong)world_z * (longlong)g_INT_01c51d58) >> 0x20) << 0x10);
  iVar4 = -iVar3;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (iVar3 != -0xffff && 0xfffe < iVar4) {
    iVar4 = 0xffff;
  }
  lVar1 = (longlong)iVar4 * (longlong)(0xffff - g_INT_0061f310);
  uVar5 = g_INT_0061f310 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  else if (0xffff < (int)uVar5) {
    uVar5 = 0xffff;
  }
  if (g_INT_0061f314 == 0) {
    uVar5 = (uint)((longlong)g_INT_0061f318 * (longlong)(int)uVar5) >> 0x10 |
            (int)((ulonglong)((longlong)g_INT_0061f318 * (longlong)(int)uVar5) >> 0x20) << 0x10;
    goto LAB_004ffcb8;
  }
  iVar4 = ((uint)((longlong)world_x * (longlong)iVar3) >> 0x10 |
          (int)((ulonglong)((longlong)world_x * (longlong)iVar3) >> 0x20) << 0x10) * 2 -
          g_INT_01c51d50;
  local_18 = ((uint)((longlong)world_y * (longlong)iVar3) >> 0x10 |
             (int)((ulonglong)((longlong)world_y * (longlong)iVar3) >> 0x20) << 0x10) * 2 -
             g_INT_01c51d54;
  local_14 = ((uint)((longlong)world_z * (longlong)iVar3) >> 0x10 |
             (int)((ulonglong)((longlong)world_z * (longlong)iVar3) >> 0x20) << 0x10) * 2 -
             g_INT_01c51d58;
  if (((g_CVector3i_01d1c22c.x != g_INT_01c51d2c) || (g_CVector3i_01d1c22c.y != g_INT_01c51d30)) ||
     (g_CVector3i_01d1c22c.z != g_INT_01c51d34)) {
    g_CVector3i_01d1c22c.x = g_INT_01c51d2c;
    g_CVector3i_01d1c22c.y = g_INT_01c51d30;
    g_CVector3i_01d1c22c.z = g_INT_01c51d34;
    engine_matrix_c_normalizeVector3DFloat_FUN_00508780(&g_CVector3i_01d1c22c,&local_24);
    g_CVector3i_01d1c238.x = local_24.x;
    *(uint *)((int)&g_CVector3i_01d1c238 + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_24 + (uint)bVar6 * -8 + 4);
    *(uint *)((uint)bVar6 * -8 + 0x1d1c240 + (uint)bVar6 * -8) =
         *(uint *)((int)&local_24 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  }
  lVar1 = (longlong)iVar4 * (longlong)g_CVector3i_01d1c238.x;
  iVar3 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
          ((uint)((longlong)local_18 * (longlong)g_CVector3i_01d1c238.y) >> 0x10 |
          (int)((ulonglong)((longlong)local_18 * (longlong)g_CVector3i_01d1c238.y) >> 0x20) << 0x10)
          + ((uint)((longlong)local_14 * (longlong)g_CVector3i_01d1c238.z) >> 0x10 |
            (int)((ulonglong)((longlong)local_14 * (longlong)g_CVector3i_01d1c238.z) >> 0x20) <<
            0x10);
  iVar4 = -iVar3;
  if (iVar4 < 0) goto LAB_004ffcb8;
  if (iVar3 == -0xffff || iVar4 < 0xffff) {
    if (iVar3 != -48000 && 47999 < iVar4) goto LAB_004ffc6d;
    uVar2 = 0;
  }
  else {
    iVar4 = 0xffff;
LAB_004ffc6d:
    uVar2 = (uint)((longlong)iVar4 * (longlong)iVar4) >> 0x10 |
            (int)((ulonglong)((longlong)iVar4 * (longlong)iVar4) >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uVar2 * (longlong)(int)uVar2;
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uVar2 * (longlong)(int)uVar2;
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uVar2 * (longlong)(int)uVar2;
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uVar2 * (longlong)(int)uVar2;
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  }
  uVar5 = ((uint)((longlong)g_INT_0061f318 * (longlong)(int)uVar5) >> 0x10 |
          (int)((ulonglong)((longlong)g_INT_0061f318 * (longlong)(int)uVar5) >> 0x20) << 0x10) +
          ((uint)((longlong)g_INT_0061f31c * (longlong)(int)uVar2) >> 0x10 |
          (int)((ulonglong)((longlong)g_INT_0061f31c * (longlong)(int)uVar2) >> 0x20) << 0x10);
LAB_004ffcb8:
  return ((int)((uVar5 + ((int)uVar5 >> 0x1f) * -0x10) - (uint)(((int)uVar5 >> 0x1f) << 3 < 0)) >> 4
         ) + 0x100;
}
