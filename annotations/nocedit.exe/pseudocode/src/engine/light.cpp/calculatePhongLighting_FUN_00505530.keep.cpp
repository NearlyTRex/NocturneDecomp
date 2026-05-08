// Name: engine_light.cpp_calculatePhongLighting_FUN_00505530
// Address: 00505530
// MANUAL RECONSTRUCTION
// Address Range: [[00505530, 00505770] [0060c458, 0060c475]]
// Convention: __cdecl
// Signature: int __cdecl engine_light_cpp_calculatePhongLighting_FUN_00505530(int world_x,int world_y,int world_z)

#include "nocturne.h"

int __cdecl engine_light_cpp_calculatePhongLighting_FUN_00505530(int world_x,int world_y,int world_z)

{
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar2;
  uint uVar7;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar8;
  CVector3i local_24;
  longlong lVar1;
  
  iVar6 = ((uint)((longlong)world_x * (longlong)g_LightDirectionX) >> 0x10 |
          (int)((ulonglong)((longlong)world_x * (longlong)g_LightDirectionX) >> 0x20) << 0x10) +
          ((uint)((longlong)world_y * (longlong)g_LightDirectionY) >> 0x10 |
          (int)((ulonglong)((longlong)world_y * (longlong)g_LightDirectionY) >> 0x20) << 0x10) +
          ((uint)((longlong)world_z * (longlong)g_LightDirectionZ) >> 0x10 |
          (int)((ulonglong)((longlong)world_z * (longlong)g_LightDirectionZ) >> 0x20) << 0x10);
  iVar4 = -iVar6;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (iVar6 != -0xffff && 0xfffe < iVar4) {
    iVar4 = 0xffff;
  }
  lVar1 = (longlong)iVar4 * (longlong)(0xffff - g_AmbientLightLevel);
  uVar5 = g_AmbientLightLevel + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  else if (0xffff < (int)uVar5) {
    uVar5 = 0xffff;
  }
  if (g_SpecularEnabled == 0) {
    uVar5 = (uint)((longlong)g_DiffuseLightMultiplier * (longlong)(int)uVar5) >> 0x10 |
            (int)((ulonglong)((longlong)g_DiffuseLightMultiplier * (longlong)(int)uVar5) >> 0x20) <<
            0x10;
    goto LAB_005056f8;
  }
  iVar8 = ((uint)((longlong)world_x * (longlong)iVar6) >> 0x10 |
          (int)((ulonglong)((longlong)world_x * (longlong)iVar6) >> 0x20) << 0x10) * 2 -
          g_LightDirectionX;
  iVar5 = ((uint)((longlong)world_y * (longlong)iVar6) >> 0x10 |
          (int)((ulonglong)((longlong)world_y * (longlong)iVar6) >> 0x20) << 0x10) * 2 -
          g_LightDirectionY;
  iVar6 = ((uint)((longlong)world_z * (longlong)iVar6) >> 0x10 |
          (int)((ulonglong)((longlong)world_z * (longlong)iVar6) >> 0x20) << 0x10) * 2 -
          g_LightDirectionZ;
  if (((g_CachedViewPosition.x != g_RelativeX) || (g_CachedViewPosition.y != g_RelativeY)) ||
     (g_CachedViewPosition.z != g_RelativeZ)) {
    g_CachedViewPosition.x = g_RelativeX;
    g_CachedViewPosition.y = g_RelativeY;
    g_CachedViewPosition.z = g_RelativeZ;
    engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(&g_CachedViewPosition,&local_24);
    g_NormalizedViewVector = local_24;
  }
  lVar2 = (longlong)iVar8 * (longlong)g_NormalizedViewVector.x;
  lVar3 = (longlong)iVar5 * (longlong)g_NormalizedViewVector.y;
  lVar4 = (longlong)iVar6 * (longlong)g_NormalizedViewVector.z;
  iVar3 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
          ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
          ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
  iVar6 = -iVar3;
  if (iVar6 < 0) goto LAB_005056f8;
  if (iVar3 == -0xffff || iVar6 < 0xffff) {
    if (iVar3 != -48000 && 47999 < iVar6) goto LAB_005056ad;
    uVar7 = 0;
  }
  else {
    iVar6 = 0xffff;
LAB_005056ad:
    uVar2 = (uint)((longlong)iVar6 * (longlong)iVar6) >> 0x10 |
            (int)((ulonglong)((longlong)iVar6 * (longlong)iVar6) >> 0x20) << 0x10;
    uVar7 = (uint)((longlong)(int)uVar2 * (longlong)(int)uVar2) >> 0x10 |
            (int)((ulonglong)((longlong)(int)uVar2 * (longlong)(int)uVar2) >> 0x20) << 0x10;
    lVar2 = (longlong)(int)uVar7 * (longlong)(int)uVar7;
    uVar7 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    lVar2 = (longlong)(int)uVar7 * (longlong)(int)uVar7;
    uVar7 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    lVar2 = (longlong)(int)uVar7 * (longlong)(int)uVar7;
    uVar7 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
  }
  uVar5 = ((uint)((longlong)g_DiffuseLightMultiplier * (longlong)(int)uVar5) >> 0x10 |
          (int)((ulonglong)((longlong)g_DiffuseLightMultiplier * (longlong)(int)uVar5) >> 0x20) <<
          0x10) + ((uint)((longlong)g_SpecularLightMultiplier * (longlong)(int)uVar7) >> 0x10 |
                  (int)((ulonglong)((longlong)g_SpecularLightMultiplier * (longlong)(int)uVar7) >>
                       0x20) << 0x10);
LAB_005056f8:
  return ((int)((uVar5 + ((int)uVar5 >> 0x1f) * -0x10) - (uint)(((int)uVar5 >> 0x1f) << 3 < 0)) >> 4
         ) + 0x100;
}
