// Name: engine_light.cpp_calculatePhongLighting_FUN_004e2660
// Address: 004e2660
// Address Range: [[004e2660, 004e28a0]]
// Convention: __cdecl
// Signature: int __cdecl engine_light_cpp_calculatePhongLighting_FUN_004e2660(int world_x,int world_y,int world_z)

#include "nocturne.h"

int __cdecl engine_light_cpp_calculatePhongLighting_FUN_004e2660(int world_x,int world_y,int world_z)

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
  iVar3 = ((uint)((longlong)world_x * (longlong)g_INT_01c38b90) >> 0x10 |
          (int)((ulonglong)((longlong)world_x * (longlong)g_INT_01c38b90) >> 0x20) << 0x10) +
          ((uint)((longlong)world_y * (longlong)g_INT_01c38b94) >> 0x10 |
          (int)((ulonglong)((longlong)world_y * (longlong)g_INT_01c38b94) >> 0x20) << 0x10) +
          ((uint)((longlong)world_z * (longlong)g_INT_01c38b98) >> 0x10 |
          (int)((ulonglong)((longlong)world_z * (longlong)g_INT_01c38b98) >> 0x20) << 0x10);
  iVar4 = -iVar3;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (iVar3 != -0xffff && 0xfffe < iVar4) {
    iVar4 = 0xffff;
  }
  lVar1 = (longlong)iVar4 * (longlong)(0xffff - g_INT_00617e40);
  uVar5 = g_INT_00617e40 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  else if (0xffff < (int)uVar5) {
    uVar5 = 0xffff;
  }
  if (g_INT_00617e44 == 0) {
    uVar5 = (uint)((longlong)g_INT_00617e48 * (longlong)(int)uVar5) >> 0x10 |
            (int)((ulonglong)((longlong)g_INT_00617e48 * (longlong)(int)uVar5) >> 0x20) << 0x10;
    goto LAB_004e2828;
  }
  iVar4 = ((uint)((longlong)world_x * (longlong)iVar3) >> 0x10 |
          (int)((ulonglong)((longlong)world_x * (longlong)iVar3) >> 0x20) << 0x10) * 2 -
          g_INT_01c38b90;
  local_18 = ((uint)((longlong)world_y * (longlong)iVar3) >> 0x10 |
             (int)((ulonglong)((longlong)world_y * (longlong)iVar3) >> 0x20) << 0x10) * 2 -
             g_INT_01c38b94;
  local_14 = ((uint)((longlong)world_z * (longlong)iVar3) >> 0x10 |
             (int)((ulonglong)((longlong)world_z * (longlong)iVar3) >> 0x20) << 0x10) * 2 -
             g_INT_01c38b98;
  if (((g_CVector3i_01d03510.x != g_INT_01c38b6c) || (g_CVector3i_01d03510.y != g_INT_01c38b70)) ||
     (g_CVector3i_01d03510.z != g_INT_01c38b74)) {
    g_CVector3i_01d03510.x = g_INT_01c38b6c;
    g_CVector3i_01d03510.y = g_INT_01c38b70;
    g_CVector3i_01d03510.z = g_INT_01c38b74;
    engine_matrix_c_normalizeVector3DFloat_FUN_004e9ae0(&g_CVector3i_01d03510,&local_24);
    g_CVector3i_01d0351c.x = local_24.x;
    *(uint *)((int)&g_CVector3i_01d0351c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_24 + (uint)bVar6 * -8 + 4);
    *(uint *)((uint)bVar6 * -8 + 0x1d03524 + (uint)bVar6 * -8) =
         *(uint *)((int)&local_24 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  }
  lVar1 = (longlong)iVar4 * (longlong)g_CVector3i_01d0351c.x;
  iVar3 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
          ((uint)((longlong)local_18 * (longlong)g_CVector3i_01d0351c.y) >> 0x10 |
          (int)((ulonglong)((longlong)local_18 * (longlong)g_CVector3i_01d0351c.y) >> 0x20) << 0x10)
          + ((uint)((longlong)local_14 * (longlong)g_CVector3i_01d0351c.z) >> 0x10 |
            (int)((ulonglong)((longlong)local_14 * (longlong)g_CVector3i_01d0351c.z) >> 0x20) <<
            0x10);
  iVar4 = -iVar3;
  if (iVar4 < 0) goto LAB_004e2828;
  if (iVar3 == -0xffff || iVar4 < 0xffff) {
    if (iVar3 != -48000 && 47999 < iVar4) goto LAB_004e27dd;
    uVar2 = 0;
  }
  else {
    iVar4 = 0xffff;
LAB_004e27dd:
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
  uVar5 = ((uint)((longlong)g_INT_00617e48 * (longlong)(int)uVar5) >> 0x10 |
          (int)((ulonglong)((longlong)g_INT_00617e48 * (longlong)(int)uVar5) >> 0x20) << 0x10) +
          ((uint)((longlong)g_INT_00617e4c * (longlong)(int)uVar2) >> 0x10 |
          (int)((ulonglong)((longlong)g_INT_00617e4c * (longlong)(int)uVar2) >> 0x20) << 0x10);
LAB_004e2828:
  return ((int)((uVar5 + ((int)uVar5 >> 0x1f) * -0x10) - (uint)(((int)uVar5 >> 0x1f) << 3 < 0)) >> 4
         ) + 0x100;
}
