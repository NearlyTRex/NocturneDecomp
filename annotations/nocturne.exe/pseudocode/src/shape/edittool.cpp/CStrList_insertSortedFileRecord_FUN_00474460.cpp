// Name: shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00474460
// Address: 00474460
// Address Range: [[00474460, 004746a7]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_insertSortedFileRecord_FUN_00474460(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_insertSortedFileRecord_FUN_00474460(int *param_1,uint param_2,int param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  char *pcVar9;
  byte bVar10;
  uint local_b04 [128];
  uint local_904 [128];
  uint local_704 [65];
  byte local_600 [260];
  byte local_4fc [256];
  char local_3fc;
  byte local_3fb [255];
  byte local_2fc [256];
  byte local_1fc [256];
  byte local_fc [200];
  byte local_34 [32];
  int local_14;
  
  bVar10 = 0;
  iVar6 = *param_1 + -1;
  local_14 = 0;
  if (-1 < iVar6) {
    do {
      iVar2 = (local_14 + iVar6) / 2;
      puVar7 = &DAT_005b7078;
      puVar8 = local_904;
      for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      }
      puVar7 = &DAT_005b7278;
      puVar8 = local_b04;
      for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      }
      uVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080
                        (param_1,iVar2,"%[^\t]\t%[^\t]",local_904,local_b04);
      sscanf(uVar3);
      makepath(local_600,0,0,local_904,local_b04);
      iVar4 = _stricmp(param_2,local_600);
      if (iVar4 == 0) {
        return;
      }
      if (iVar4 < 0) {
        iVar6 = iVar2 + -1;
      }
      else {
        local_14 = iVar2 + 1;
      }
    } while (local_14 <= iVar6);
  }
  uVar3 = _localtime(&stack0x00000014);
  _strftime(local_34,0x1e,"%m/%d/%y %I:%M:%S %p",uVar3);
  puVar7 = &DAT_005b7478;
  puVar8 = local_704;
  for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
  }
  if (param_3 != 0) {
    splitpath(param_3,0,0,local_1fc,local_4fc);
    makepath(local_704,0,0,local_1fc,local_4fc);
  }
  splitpath(param_2,0,0,local_2fc,&local_3fc);
  if (local_3fc == '.') {
    uVar5 = 0xffffffff;
    pcVar9 = &local_3fc;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + (uint)bVar10 * -2 + 1;
    } while (cVar1 != '\0');
    memmove(&local_3fc,local_3fb,~uVar5 - 1);
  }
  _sprintf(local_fc,"%s\t%s\t%d\t%s\t%s",local_2fc,&local_3fc,param_4,local_34,local_704);
  strupr(local_fc);
  (**(code **)(param_1[3] + 0xc))(param_1,local_14,local_fc);
  return;
}
