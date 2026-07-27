// Name: shape_edittool.cpp_FUN_00470730
// Address: 00470730
// Address Range: [[00470730, 00470eac]]
// Convention: unknown
// Signature: undefined4 shape_edittool_cpp_FUN_00470730(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint shape_edittool_cpp_FUN_00470730(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  uint in_stack_00000008;
  char *in_stack_0000000c;
  uint in_stack_00000010;
  byte in_stack_00000014;
  char *pcVar10;
  byte local_1c90 [560];
  int local_1a60 [92];
  char local_18f0 [256];
  byte local_17f0;
  uint local_17ec;
  byte local_17e8 [12];
  uint local_17dc [65];
  uint local_16d8 [65];
  byte local_15d4 [260];
  byte local_14d0 [260];
  byte local_13cc [260];
  char local_12c8 [260];
  byte local_11c4 [256];
  byte local_10c4 [256];
  byte local_fc4 [256];
  byte local_ec4 [256];
  byte local_dc4 [256];
  byte local_cc4 [256];
  byte local_bc4 [256];
  byte local_ac4 [256];
  byte local_9c4 [256];
  byte local_8c4 [256];
  byte local_7c4 [256];
  char local_6c4;
  byte local_6c3 [255];
  byte local_5c4 [256];
  char local_4c4;
  byte local_4c3 [255];
  byte local_3c4 [256];
  byte local_2c4 [256];
  char local_1c4 [200];
  byte local_fc [200];
  byte local_34 [32];
  uint local_14;
  byte local_10 [4];
  byte local_c [4];
  
  bVar9 = 0;
  iVar2 = thunk_FUN_0056c5f0(local_14d0,0x104);
  if (iVar2 == 0) {
    shape_edittool_cpp_FUN_0046fcd0();
    return 0;
  }
  puVar7 = &DAT_005b6d60;
  pcVar10 = local_12c8;
  for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pcVar10 = *puVar7;
    puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    pcVar10 = pcVar10 + ((uint)bVar9 * -2 + 1) * 4;
  }
  if ((in_stack_00000014 & 1) != 0) {
    splitpath(in_stack_00000010,local_c,local_bc4,local_ec4,local_3c4);
    makepath(local_13cc,local_c,local_bc4,0,0);
    FUN_00566570(local_13cc);
    makepath(local_12c8,0,0,local_ec4,local_3c4);
    FUN_00566570(local_12c8);
  }
  local_14 = 0;
LAB_0047078a:
  do {
    pcVar10 = "[ERROR: Can't get current directory.]";
    puVar7 = local_17dc;
    for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = *(uint *)pcVar10;
      pcVar10 = pcVar10 + ((uint)bVar9 * -2 + 1) * 4;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    }
    thunk_FUN_0056c5f0(local_17dc,0x104);
    _sprintf(local_1c90,"%s\n%s",in_stack_00000008,local_17dc);
    shape_edittool_cpp_FUN_00474c90(local_1a60);
    engine_dosio_cpp_CFileFinder_ctor_FUN_00456c00(local_18f0);
    if (in_stack_0000000c == (char *)0x0) {
      in_stack_0000000c = "*.*";
    }
    engine_dosio_cpp_CFileFinder_openSearch_FUN_00456c40(local_18f0,in_stack_0000000c);
    while (local_18f0[0] != '\0') {
      if ((local_17f0 & 4) == 0) {
        splitpath(local_18f0,0,0,local_dc4,&local_4c4);
        if (local_4c4 == '.') {
          uVar5 = 0xffffffff;
          pcVar10 = &local_4c4;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar10 + (uint)bVar9 * -2 + 1;
          } while (cVar1 != '\0');
          memmove(&local_4c4,local_4c3,~uVar5 - 1);
        }
        uVar4 = _localtime(local_17e8);
        _strftime(local_34,0x1e,"%m/%d/%y %I:%M:%S %p",uVar4);
        _sprintf(local_fc,"%s\t%s\t%d\t%s",local_dc4,&local_4c4,local_17ec,local_34);
        strupr(local_fc);
        shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_1a60,local_fc);
      }
      engine_dosio_cpp_CFileFinder_findNext_FUN_00456cc0(local_18f0);
    }
    shape_edittool_cpp_CStrList_sortAll_FUN_00473fd0(local_1a60);
    iVar2 = local_1a60[0];
    iVar6 = -1;
    if (local_12c8[0] != '\0') {
      iVar6 = 0;
      if (0 < local_1a60[0]) {
        do {
          shape_edittool_cpp_CStrList_getFieldAt_FUN_00474090(local_1a60,local_9c4,iVar6,0);
          shape_edittool_cpp_CStrList_getFieldAt_FUN_00474090(local_1a60,local_5c4,iVar6,1);
          makepath(local_15d4,0,0,local_9c4,local_5c4);
          iVar3 = _stricmp(local_15d4,local_12c8);
          if (iVar3 == 0) break;
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_1a60[0]);
      }
      if (local_1a60[0] <= iVar6) {
        iVar6 = -1;
      }
      local_12c8[0] = '\0';
    }
    engine_dosio_cpp_CFileFinder_openSearch_FUN_00456c40(local_18f0,"*.*");
    while (local_18f0[0] != '\0') {
      if ((local_17f0 & 4) != 0) {
        iVar3 = _strcmp(local_18f0,"..");
        if (iVar3 == 0) {
          pcVar10 = "..\t\t(DIR)";
        }
        else {
          iVar3 = _strcmp(local_18f0,".");
          if (iVar3 == 0) goto LAB_00470970;
          splitpath(local_18f0,0,0,local_ac4,&local_6c4);
          if (local_6c4 == '.') {
            uVar5 = 0xffffffff;
            pcVar10 = &local_6c4;
            do {
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              cVar1 = *pcVar10;
              pcVar10 = pcVar10 + (uint)bVar9 * -2 + 1;
            } while (cVar1 != '\0');
            memmove(&local_6c4,local_6c3,~uVar5 - 1);
          }
          _sprintf(local_1c4,"%s\t%s\t(DIR)",local_ac4,&local_6c4);
          strupr(local_1c4);
          pcVar10 = local_1c4;
        }
        shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_1a60,pcVar10);
      }
LAB_00470970:
      engine_dosio_cpp_CFileFinder_findNext_FUN_00456cc0(local_18f0);
    }
    shape_edittool_cpp_CPickList_sort_FUN_004761a0(local_1a60,iVar2,local_1a60[0] + -1);
    shape_edittool_cpp_CStrList_add_FUN_00473cb0(local_1a60,"(Change Path)");
    iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                      (local_1a60,local_1c90,iVar6);
    if (iVar6 < 0) goto LAB_00470cb8;
    if (local_1a60[0] + -1 <= iVar6) {
      puVar7 = &DAT_005b6f70;
      puVar8 = local_16d8;
      for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
      }
      while ((iVar2 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_00471600(), iVar2 != 0
             && (iVar2 = FUN_00566570(local_16d8), iVar2 != 0))) {
        shape_edittool_cpp_FUN_0046fcd0();
        FUN_00566570(local_17dc);
      }
      engine_dosio_cpp_CFileFinder_dtor_FUN_00456c20(local_18f0,0);
      shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(local_1a60,0);
      goto LAB_0047078a;
    }
    if (iVar6 < iVar2) {
      splitpath(local_17dc,local_10,local_7c4,local_cc4,local_2c4);
      makepath(local_8c4,0,local_7c4,local_cc4,local_2c4);
      shape_edittool_cpp_CStrList_getFieldAt_FUN_00474090(local_1a60,local_cc4,iVar6,0);
      shape_edittool_cpp_CStrList_getFieldAt_FUN_00474090(local_1a60,local_2c4,iVar6,1);
      makepath(in_stack_00000010,local_10,local_8c4,local_cc4,local_2c4);
      local_14 = 1;
LAB_00470cb8:
      engine_dosio_cpp_CFileFinder_dtor_FUN_00456c20(local_18f0,0);
      shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(local_1a60,0);
      FUN_00566570(local_14d0);
      return local_14;
    }
    shape_edittool_cpp_CStrList_getFieldAt_FUN_00474090(local_1a60,local_10c4,iVar6,0);
    shape_edittool_cpp_CStrList_getFieldAt_FUN_00474090(local_1a60,local_11c4,iVar6,1);
    makepath(local_fc4,0,0,local_10c4,local_11c4);
    FUN_00566570(local_fc4);
    engine_dosio_cpp_CFileFinder_dtor_FUN_00456c20(local_18f0,0);
    shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(local_1a60,0);
  } while( true );
}
