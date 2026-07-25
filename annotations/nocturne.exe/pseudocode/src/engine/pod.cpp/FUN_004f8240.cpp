// Name: FUN_004f8240
// Address: 004f8240
// Address Range: [[004f8240, 004f856e]]
// Convention: unknown
// Signature: bool FUN_004f8240(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_004f8240(int *param_1)

{
  byte uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte *puVar8;
  uint uVar9;
  bool bVar10;
  int local_198 [92];
  int local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  
  if ((*param_1 == 0) || ((char)param_1[1] == '\0')) {
    return false;
  }
  if (1 < *param_1) {
    shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_00471660
              (0x01BCD074,"Checking individual file CRCs");
    iVar3 = 0;
    FUN_00474c90(local_198);
    if (0 < param_1[0x82]) {
      iVar4 = 0;
      do {
        iVar6 = (param_1[0x82] + -1) * 0x14;
        iVar2 = param_1[0x83];
        local_14 = *(int *)(iVar2 + iVar4 + 8) - *(int *)(iVar2 + 8);
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_00471760
                  (0x01BCD074,(float)local_14,
                   (float)((*(int *)(iVar6 + 8 + iVar2) + *(int *)(iVar6 + 4 + iVar2)) -
                          *(int *)(iVar2 + 8)));
        iVar2 = param_1[0x83];
        iVar6 = FUN_004f86a0(param_1,iVar3);
        if (iVar6 != *(int *)(iVar4 + 0x10 + iVar2)) {
          shape_edittool_cpp_CStrList_add_FUN_00473cb0
                    (local_198,*(uint *)(iVar4 + param_1[0x83]));
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x14;
      } while (iVar3 < param_1[0x82]);
    }
    FUN_004720c0(0x01BCD074);
    if (local_198[0] != 0) {
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                (local_198,"!!!CRC CHECK FAILED!! on these files:",0xffffffff);
      shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(local_198,0);
      return false;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(local_198,0);
  }
  if (*param_1 == 1) {
    local_1c = 0x54;
  }
  else if (*param_1 == 2) {
    local_1c = 8;
  }
  else {
    _DAT_01cc4800 = "..\\engine\\pod.cpp";
    _DAT_01cc4804 = 0x1cf;
    FUN_004c8440("Invalid pod version!");
  }
  param_1 = param_1 + 1;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
            (0x01BCD074,"Verifying CRC for %s...",param_1);
  iVar3 = _fopen(param_1,"rb");
  bVar10 = false;
  if (iVar3 != 0) {
    _fseek(iVar3,local_1c + -4,0);
    _fread(&local_28,4,1,iVar3);
    _fclose(iVar3);
    iVar4 = engine_dosio_cpp_getFileSize_FUN_004568c0(&DAT_0058d9a8,param_1);
    iVar3 = local_1c;
    local_24 = iVar4 - local_1c;
    uVar5 = _fopen(param_1,"rb");
    local_20 = uVar5;
    _fseek(uVar5,iVar3,0);
    iVar3 = -1;
    for (uVar9 = local_24; 0xffff < (int)uVar9; uVar9 = uVar9 - 0x10000) {
      puVar8 = &DAT_01e428d0;
      _fread(&DAT_01e428d0,0x10000,1,uVar5);
      uVar7 = 0;
      do {
        uVar1 = *puVar8;
        puVar8 = puVar8 + 1;
        uVar7 = uVar7 + 1;
        iVar3 = FUN_004f77d0(iVar3,uVar1);
      } while (uVar7 < 0x10000);
    }
    puVar8 = &DAT_01e428d0;
    _fread(&DAT_01e428d0,uVar9,1,uVar5);
    uVar7 = 0;
    local_18 = uVar9;
    if (uVar9 != 0) {
      do {
        uVar1 = *puVar8;
        puVar8 = puVar8 + 1;
        iVar3 = FUN_004f77d0(iVar3,uVar1);
        uVar7 = uVar7 + 1;
      } while (uVar7 < local_18);
    }
    _fclose(local_20);
    bVar10 = iVar3 == local_28;
  }
  return bVar10;
}
