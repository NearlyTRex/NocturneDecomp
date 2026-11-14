// Name: core_dcamera.cpp_processCoronaScanline_FUN_0044e250
// Address: 0044e250
// Address Range: [[0044e250, 0044e582]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_processCoronaScanline_FUN_0044e250(int row,int x_start,int x_end,SCoronaLightEntry *corona)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_processCoronaScanline_FUN_0044e250(int row,int x_start,int x_end,SCoronaLightEntry *corona)

{
  byte bVar1;
  uint *puVar2;
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
  char cStack_14;
  
  piVar6 = (int *)(row * 0xf00 + 0x874588 + x_start * 0xc);
  puVar8 = (uint *)(row * 0x500 + 0x14fba80 + x_start * 4);
  puVar2 = (uint *)(*(int *)(&DAT_01c60dac + (row << (DAT_013405b0 & 0x1f)) * 4) +
                   (x_start << (DAT_013405b0 & 0x1f)) * 4);
  pcVar7 = corona->lightmap[row] + x_start;
  bVar1 = DAT_013405b0;
  do {
    DAT_013405b0 = bVar1;
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
    if ((((*puVar2 < *puVar8) &&
         (uVar9 = *piVar6 - *_DAT_015484c8 >> 0x1f,
         iVar3 = (*piVar6 - *_DAT_015484c8 ^ uVar9) - uVar9, iVar3 < _DAT_015484c8[3])) &&
        (uVar9 = piVar6[1] - _DAT_015484c8[1] >> 0x1f,
        iVar4 = (piVar6[1] - _DAT_015484c8[1] ^ uVar9) - uVar9, iVar4 < _DAT_015484c8[3])) &&
       ((uVar9 = piVar6[2] - _DAT_015484c8[2] >> 0x1f,
        iVar5 = (piVar6[2] - _DAT_015484c8[2] ^ uVar9) - uVar9, iVar5 < _DAT_015484c8[3] &&
        (iVar3 = iVar3 * iVar3 + iVar4 * iVar4 + iVar5 * iVar5, iVar3 < _DAT_015484c8[4])))) {
      if (_DAT_015484cc != 0) {
        if (*puVar2 == 0) {
          iVar4 = 0x7fffffff;
        }
        else {
          iVar4 = (int)(0x7fffffff / (longlong)(int)*puVar2);
        }
        iVar10 = _DAT_015484d8 - iVar4;
        iVar11 = iVar10 >> 0x1f;
        iVar13 = x_start << 8;
        iVar5 = 0x10;
        iVar12 = row << 8;
        do {
          if (*(int *)((iVar12 >> 8) * 0x500 + 0xb52a48 + (iVar13 >> 8) * 4) < iVar4 + -0x80) break;
          iVar5 = iVar5 + -1;
          iVar4 = iVar4 + ((int)((iVar10 + iVar11 * -0x10) - (uint)(iVar11 << 3 < 0)) >> 4);
          iVar13 = iVar13 + (_DAT_015484d0 - x_start) * 0x10;
          iVar12 = iVar12 + (_DAT_015484d4 - row) * 0x10;
        } while (0 < iVar5);
        if (iVar5 != 0) goto LAB_0044e3ce;
      }
      cStack_14 = (char)(((_DAT_015484c8[4] - iVar3 >> 0x10) * 0x3f) / (_DAT_015484c8[4] >> 0x10));
    }
LAB_0044e3ce:
    puVar8 = puVar8 + 1;
    piVar6 = piVar6 + 3;
    *pcVar7 = cStack_14;
    puVar2 = puVar2 + (1 << (bVar1 & 0x1f));
    x_start = x_start + 1;
    pcVar7 = pcVar7 + 1;
    bVar1 = DAT_013405b0;
  } while( true );
}
