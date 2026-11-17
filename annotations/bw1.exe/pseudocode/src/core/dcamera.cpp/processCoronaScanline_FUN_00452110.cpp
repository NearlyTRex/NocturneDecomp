// Name: core_dcamera.cpp_processCoronaScanline_FUN_00452110
// Address: 00452110
// Address Range: [[00452110, 00452442]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_processCoronaScanline_FUN_00452110(int row,int x_start,int x_end,SCoronaLightEntry *corona)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_processCoronaScanline_FUN_00452110(int row,int x_start,int x_end,SCoronaLightEntry *corona)

{
  byte uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  char cStack_14;
  
  piVar6 = (int *)(&DAT_00857cd8 + x_start * 0xc + row * 0xf00);
  puVar8 = (uint *)(g_INT_ARRAY_014df1d0 + row * 0x140 + x_start);
  puVar14 = g_UINT_PTR_ARRAY_01c4480c[row << (g_BIT_INTEGER32_01323d00.bytes[0] & 0x1f)] +
            (x_start << (g_BIT_INTEGER32_01323d00.bytes[0] & 0x1f));
  pcVar7 = corona->lightmap[row] + x_start;
  uVar1 = g_BIT_INTEGER32_01323d00.bytes[0];
  do {
    g_BIT_INTEGER32_01323d00.bytes[0] = uVar1;
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
         (uVar2 = *piVar6 - (g_CDemonGlobe_PTR_0152bc18->position_scaled).x,
         uVar9 = (int)uVar2 >> 0x1f, iVar3 = (uVar2 ^ uVar9) - uVar9,
         iVar3 < g_CDemonGlobe_PTR_0152bc18->linear_radius_scaled)) &&
        (uVar2 = piVar6[1] - (g_CDemonGlobe_PTR_0152bc18->position_scaled).y,
        uVar9 = (int)uVar2 >> 0x1f, iVar4 = (uVar2 ^ uVar9) - uVar9,
        iVar4 < g_CDemonGlobe_PTR_0152bc18->linear_radius_scaled)) &&
       ((uVar2 = piVar6[2] - (g_CDemonGlobe_PTR_0152bc18->position_scaled).z,
        uVar9 = (int)uVar2 >> 0x1f, iVar5 = (uVar2 ^ uVar9) - uVar9,
        iVar5 < g_CDemonGlobe_PTR_0152bc18->linear_radius_scaled &&
        (iVar3 = iVar3 * iVar3 + iVar4 * iVar4 + iVar5 * iVar5,
        iVar3 < g_CDemonGlobe_PTR_0152bc18->quadratic_radius_scaled)))) {
      if (g_INT_0152bc1c != 0) {
        if (*puVar14 == 0) {
          iVar4 = 0x7fffffff;
        }
        else {
          iVar4 = (int)(0x7fffffff / (longlong)(int)*puVar14);
        }
        iVar10 = g_INT_0152bc28 - iVar4;
        iVar11 = iVar10 >> 0x1f;
        iVar13 = x_start << 8;
        iVar5 = 0x10;
        iVar12 = row << 8;
        do {
          if (g_INT_ARRAY_00b36198[(iVar12 >> 8) * 0x140 + (iVar13 >> 8)] < iVar4 + -0x80) break;
          iVar5 = iVar5 + -1;
          iVar4 = iVar4 + ((int)((iVar10 + iVar11 * -0x10) - (uint)(iVar11 << 3 < 0)) >> 4);
          iVar13 = iVar13 + (g_INT_0152bc20 - x_start) * 0x10;
          iVar12 = iVar12 + (g_INT_0152bc24 - row) * 0x10;
        } while (0 < iVar5);
        if (iVar5 != 0) goto LAB_0045228e;
      }
      cStack_14 = (char)(((g_CDemonGlobe_PTR_0152bc18->quadratic_radius_scaled - iVar3 >> 0x10) *
                         0x3f) / (g_CDemonGlobe_PTR_0152bc18->quadratic_radius_scaled >> 0x10));
    }
LAB_0045228e:
    puVar8 = puVar8 + 1;
    piVar6 = piVar6 + 3;
    *pcVar7 = cStack_14;
    puVar14 = puVar14 + (1 << (uVar1 & 0x1f));
    x_start = x_start + 1;
    pcVar7 = pcVar7 + 1;
    uVar1 = g_BIT_INTEGER32_01323d00.bytes[0];
  } while( true );
}
