// Name: core_dcamera.cpp_renderFlatColorScanline_FUN_00444440
// Address: 00444440
// Address Range: [[00444440, 004445fc]]
// Convention: unknown
// Signature: void core_dcamera_cpp_renderFlatColorScanline_FUN_00444440(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcamera_cpp_renderFlatColorScanline_FUN_00444440(int param_1,int param_2,int param_3)

{
  byte bVar1;
  byte uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_18;
  uint *local_14;
  
  uVar7 = param_1 - _DAT_01c00c5c;
  if (((_DAT_012b0660 != 1) || ((uVar7 & 1) == 0)) && ((_DAT_012b0660 != 2 || ((uVar7 & 3) == 0))))
  {
    iVar9 = (*(int *)(param_2 + 8) >> 0x10) - _DAT_01c00c58;
    local_18 = (*(int *)(param_3 + 8) >> 0x10) - _DAT_01c00c58;
    iVar3 = param_3;
    iVar10 = iVar9;
    if (local_18 < iVar9) {
      iVar3 = param_2;
      param_2 = param_3;
      iVar10 = local_18;
      local_18 = iVar9;
    }
    iVar9 = *(int *)(param_2 + 0x28);
    local_14 = (uint *)(*(int *)(&DAT_01bd4260 + uVar7 * 4) + iVar10 * 4);
    local_18 = local_18 >> (DAT_012b0660 & 0x1f);
    iVar10 = iVar10 >> (DAT_012b0660 & 0x1f);
    iVar3 = (*(int *)(iVar3 + 0x28) - iVar9) / ((local_18 - iVar10) + 1);
    uVar2 = (byte)
            ((_DAT_014b7190 + (_DAT_014b7190 >> 0x1f) * -0x100) -
             (uint)((_DAT_014b7190 >> 0x1f) << 7 < 0) >> 8);
    iVar4 = ((int)uVar7 >> (DAT_012b0660 & 0x1f)) * 0x140;
    if (_DAT_0140d780 < 2) {
      puVar6 = &DAT_012ceb78 + iVar10 + iVar4;
      for (; iVar10 < local_18; iVar10 = iVar10 + 1) {
        if (*local_14 < (uint)(iVar9 >> 8)) {
          *puVar6 = uVar2;
        }
        iVar9 = iVar9 + iVar3;
        puVar6 = puVar6 + 1;
        local_14 = local_14 + (1 << (DAT_012b0660 & 0x1f));
      }
    }
    else {
      bVar1 = DAT_012b0660 & 0x1f;
      for (; iVar10 < local_18; iVar10 = iVar10 + 1) {
        if ((*local_14 < (uint)(iVar9 >> 8)) && (iVar8 = 0, 0 < _DAT_0140d780)) {
          iVar5 = iVar4 + iVar10;
          do {
            iVar8 = iVar8 + 1;
            *(byte *)(iVar5 + 0x12e1778) = uVar2;
            iVar5 = iVar5 + 0x12c00;
          } while (iVar8 < _DAT_0140d780);
        }
        local_14 = local_14 + (1 << bVar1);
        iVar9 = iVar9 + iVar3;
      }
    }
  }
  return;
}
