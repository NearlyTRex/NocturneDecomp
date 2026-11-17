// Name: core_dcamera.cpp_processCoronaScanline_FUN_0044e250
// Address: 0044e250
// Address Range: [[0044e250, 0044e582]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_processCoronaScanline_FUN_0044e250(int row,int x_start,int x_end,SCoronaLightEntry *corona)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_processCoronaScanline_FUN_0044e250(int row,int x_start,int x_end,SCoronaLightEntry *corona)

{
  byte uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CVector3i *pCVar6;
  char *pcVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  char cStack_14;
  
  pCVar6 = g_CVector3i_ARRAY_00874588 + row * 0x140 + x_start;
  puVar8 = (uint *)(g_INT_ARRAY_014fba80 + row * 0x140 + x_start);
  puVar14 = g_UINT_PTR_ARRAY_01c60dac[row << (g_BIT_INTEGER32_013405b0.bytes[0] & 0x1f)] +
            (x_start << (g_BIT_INTEGER32_013405b0.bytes[0] & 0x1f));
  pcVar7 = corona->lightmap[row] + x_start;
  uVar1 = g_BIT_INTEGER32_013405b0.bytes[0];
  do {
    g_BIT_INTEGER32_013405b0.bytes[0] = uVar1;
    if (x_end <= x_start) {
      iVar3 = corona->left_extents[row];
      iVar4 = corona->right_extents[row];
      for (pcVar7 = corona->lightmap[row] + iVar3; (iVar3 < iVar4 && (*pcVar7 == '\0'));
          pcVar7 = pcVar7 + 1) {
        iVar3 = iVar3 + 1;
      }
      pcVar7 = corona->lightmap[row] + iVar4;
      while ((iVar3 < iVar4 && (pcVar7 = pcVar7 + -1, *pcVar7 == '\0'))) {
        iVar4 = iVar4 + -1;
      }
      corona->left_extents[row] = iVar3;
      corona->right_extents[row] = iVar4;
      return;
    }
    cStack_14 = '\0';
    if ((((*puVar14 < *puVar8) &&
         (uVar2 = pCVar6->x - (g_CDemonGlobe_PTR_015484c8->position_scaled).x,
         uVar9 = (int)uVar2 >> 0x1f, iVar3 = (uVar2 ^ uVar9) - uVar9,
         iVar3 < g_CDemonGlobe_PTR_015484c8->linear_radius_scaled)) &&
        (uVar2 = pCVar6->y - (g_CDemonGlobe_PTR_015484c8->position_scaled).y,
        uVar9 = (int)uVar2 >> 0x1f, iVar4 = (uVar2 ^ uVar9) - uVar9,
        iVar4 < g_CDemonGlobe_PTR_015484c8->linear_radius_scaled)) &&
       ((uVar2 = pCVar6->z - (g_CDemonGlobe_PTR_015484c8->position_scaled).z,
        uVar9 = (int)uVar2 >> 0x1f, iVar5 = (uVar2 ^ uVar9) - uVar9,
        iVar5 < g_CDemonGlobe_PTR_015484c8->linear_radius_scaled &&
        (iVar3 = iVar3 * iVar3 + iVar4 * iVar4 + iVar5 * iVar5,
        iVar3 < g_CDemonGlobe_PTR_015484c8->quadratic_radius_scaled)))) {
      if (g_INT_015484cc != 0) {
        if (*puVar14 == 0) {
          iVar4 = 0x7fffffff;
        }
        else {
          iVar4 = (int)(0x7fffffff / (longlong)(int)*puVar14);
        }
        iVar10 = g_INT_015484d8 - iVar4;
        iVar11 = iVar10 >> 0x1f;
        iVar13 = x_start << 8;
        iVar5 = 0x10;
        iVar12 = row << 8;
        do {
          if (g_INT_ARRAY_00b52a48[(iVar12 >> 8) * 0x140 + (iVar13 >> 8)] < iVar4 + -0x80) break;
          iVar5 = iVar5 + -1;
          iVar4 = iVar4 + ((int)((iVar10 + iVar11 * -0x10) - (uint)(iVar11 << 3 < 0)) >> 4);
          iVar13 = iVar13 + (g_INT_015484d0 - x_start) * 0x10;
          iVar12 = iVar12 + (g_INT_015484d4 - row) * 0x10;
        } while (0 < iVar5);
        if (iVar5 != 0) goto LAB_0044e3ce;
      }
      cStack_14 = (char)(((g_CDemonGlobe_PTR_015484c8->quadratic_radius_scaled - iVar3 >> 0x10) *
                         0x3f) / (g_CDemonGlobe_PTR_015484c8->quadratic_radius_scaled >> 0x10));
    }
LAB_0044e3ce:
    puVar8 = puVar8 + 1;
    pCVar6 = pCVar6 + 1;
    *pcVar7 = cStack_14;
    puVar14 = puVar14 + (1 << (uVar1 & 0x1f));
    x_start = x_start + 1;
    pcVar7 = pcVar7 + 1;
    uVar1 = g_BIT_INTEGER32_013405b0.bytes[0];
  } while( true );
}
