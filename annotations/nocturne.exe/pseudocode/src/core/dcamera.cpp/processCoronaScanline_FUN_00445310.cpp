// Name: core_dcamera.cpp_processCoronaScanline_FUN_00445310
// Address: 00445310
// Address Range: [[00445310, 00445642]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_processCoronaScanline_FUN_00445310(int row,int x_start,int x_end,SCorona *corona)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_processCoronaScanline_FUN_00445310(int row,int x_start,int x_end,SCorona *corona)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  char local_14;
  
  piVar5 = (int *)(row * 0xf00 + 0x7f7378 + x_start * 0xc);
  puVar7 = (uint *)(row * 0x500 + 0x146ba10 + x_start * 4);
  puVar13 = g_ZBufferScanlineArray[row << (DAT_012b0660 & 0x1f)] +
            (x_start << (DAT_012b0660 & 0x1f));
  pcVar6 = corona->intensity[row] + x_start;
  bVar1 = DAT_012b0660;
  do {
    DAT_012b0660 = bVar1;
    if (x_end <= x_start) {
      iVar2 = corona->row_min_x[row];
      iVar3 = corona->row_max_x[row];
      for (pcVar6 = corona->intensity[row] + iVar2; (iVar2 < iVar3 && (*pcVar6 == '\0'));
          pcVar6 = pcVar6 + 1) {
        iVar2 = iVar2 + 1;
      }
      pcVar6 = corona->intensity[row] + iVar3;
      while ((iVar2 < iVar3 && (pcVar6 = pcVar6 + -1, *pcVar6 == '\0'))) {
        iVar3 = iVar3 + -1;
      }
      corona->row_min_x[row] = iVar2;
      corona->row_max_x[row] = iVar3;
      return;
    }
    local_14 = '\0';
    if ((((*puVar13 < *puVar7) &&
         (uVar8 = *piVar5 - *_DAT_014b8458 >> 0x1f,
         iVar2 = (*piVar5 - *_DAT_014b8458 ^ uVar8) - uVar8, iVar2 < _DAT_014b8458[3])) &&
        (uVar8 = piVar5[1] - _DAT_014b8458[1] >> 0x1f,
        iVar3 = (piVar5[1] - _DAT_014b8458[1] ^ uVar8) - uVar8, iVar3 < _DAT_014b8458[3])) &&
       ((uVar8 = piVar5[2] - _DAT_014b8458[2] >> 0x1f,
        iVar4 = (piVar5[2] - _DAT_014b8458[2] ^ uVar8) - uVar8, iVar4 < _DAT_014b8458[3] &&
        (iVar2 = iVar2 * iVar2 + iVar3 * iVar3 + iVar4 * iVar4, iVar2 < _DAT_014b8458[4])))) {
      if (_DAT_014b845c != 0) {
        if (*puVar13 == 0) {
          iVar3 = 0x7fffffff;
        }
        else {
          iVar3 = (int)(0x7fffffff / (longlong)(int)*puVar13);
        }
        iVar9 = _DAT_014b8468 - iVar3;
        iVar10 = iVar9 >> 0x1f;
        iVar12 = x_start << 8;
        iVar4 = 0x10;
        iVar11 = row << 8;
        do {
          if (*(int *)((iVar11 >> 8) * 0x500 + 0xac2af8 + (iVar12 >> 8) * 4) < iVar3 + -0x80) break;
          iVar4 = iVar4 + -1;
          iVar3 = iVar3 + ((int)((iVar9 + iVar10 * -0x10) - (uint)(iVar10 << 3 < 0)) >> 4);
          iVar12 = iVar12 + (_DAT_014b8460 - x_start) * 0x10;
          iVar11 = iVar11 + (_DAT_014b8464 - row) * 0x10;
        } while (0 < iVar4);
        if (iVar4 != 0) goto LAB_0044548e;
      }
      local_14 = (char)(((_DAT_014b8458[4] - iVar2 >> 0x10) * 0x3f) / (_DAT_014b8458[4] >> 0x10));
    }
LAB_0044548e:
    puVar7 = puVar7 + 1;
    piVar5 = piVar5 + 3;
    *pcVar6 = local_14;
    puVar13 = puVar13 + (1 << (bVar1 & 0x1f));
    x_start = x_start + 1;
    pcVar6 = pcVar6 + 1;
    bVar1 = DAT_012b0660;
  } while( true );
}
