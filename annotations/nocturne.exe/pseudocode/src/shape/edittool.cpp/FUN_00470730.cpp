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
  char *pcVar2;
  int iVar3;
  _tm *time_ptr;
  int iVar4;
  uint uVar5;
  uint unaff_ESI;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  byte bVar9;
  CEditorTools *in_stack_00000004;
  uint in_stack_00000008;
  char *in_stack_0000000c;
  char *in_stack_00000010;
  byte in_stack_00000014;
  char local_1c90 [560];
  CPickList local_1a60;
  CFileFinder local_18f0;
  char local_17dc [260];
  char local_16d8 [260];
  char local_15d4 [260];
  char local_14d0 [260];
  char local_13cc [260];
  char local_12c8 [260];
  char local_11c4 [256];
  char local_10c4 [256];
  char local_fc4 [256];
  char local_ec4 [256];
  char local_dc4 [256];
  char local_cc4 [256];
  char local_bc4 [256];
  char local_ac4 [256];
  char local_9c4 [256];
  char local_8c4 [256];
  char local_7c4 [256];
  char local_6c4;
  byte local_6c3 [255];
  char local_5c4 [256];
  char local_4c4;
  byte local_4c3 [255];
  char local_3c4 [256];
  char local_2c4 [256];
  char local_1c4 [200];
  char local_fc [200];
  char local_34 [32];
  uint local_14;
  char local_10 [4];
  char local_c [4];
  
  bVar9 = 0;
  pcVar2 = getcwd(local_14d0,0x104);
  if (pcVar2 == (char *)0x0) {
    shape_edittool_cpp_FUN_0046fcd0();
    return 0;
  }
  puVar7 = &DAT_005b6d60;
  pcVar2 = local_12c8;
  for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(uint *)pcVar2 = *puVar7;
    puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    pcVar2 = pcVar2 + ((uint)bVar9 * -2 + 1) * 4;
  }
  if ((in_stack_00000014 & 1) != 0) {
    splitpath(in_stack_00000010,local_c,local_bc4,local_ec4,local_3c4);
    makepath(local_13cc,local_c,local_bc4,(char *)0x0,(char *)0x0);
    chdir(local_13cc);
    makepath(local_12c8,(char *)0x0,(char *)0x0,local_ec4,local_3c4);
    chdir(local_12c8);
  }
  local_14 = 0;
LAB_0047078a:
  do {
    pcVar2 = "[ERROR: Can't get current directory.]";
    pcVar8 = local_17dc;
    for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(uint *)pcVar8 = *(uint *)pcVar2;
      pcVar2 = pcVar2 + ((uint)bVar9 * -2 + 1) * 4;
      pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
    }
    getcwd(local_17dc,0x104);
    _sprintf(local_1c90,"%s\n%s",in_stack_00000008,local_17dc);
    shape_edittool_cpp_CPickList_ctor_FUN_00474c90(&local_1a60);
    engine_dosio_cpp_CFileFinder_ctor_FUN_00456c00(&local_18f0);
    if (in_stack_0000000c == (char *)0x0) {
      in_stack_0000000c = "*.*";
    }
    engine_dosio_cpp_CFileFinder_openSearch_FUN_00456c40(&local_18f0,in_stack_0000000c);
    while (local_18f0.filename[0] != '\0') {
      if (((byte)local_18f0.attributes & 4) == 0) {
        splitpath
                  (local_18f0.filename,(char *)0x0,(char *)0x0,local_dc4,&local_4c4);
        if (local_4c4 == '.') {
          uVar5 = 0xffffffff;
          pcVar2 = &local_4c4;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar2 + (uint)bVar9 * -2 + 1;
          } while (cVar1 != '\0');
          memmove(&local_4c4,local_4c3,~uVar5 - 1);
        }
        time_ptr = _localtime((time_t *)&local_18f0.timestamp);
        _strftime(local_34,0x1e,"%m/%d/%y %I:%M:%S %p",time_ptr);
        _sprintf(local_fc,"%s\t%s\t%d\t%s",local_dc4,&local_4c4,local_18f0.file_size,local_34);
        strupr(local_fc);
        shape_edittool_cpp_CStrList_add_FUN_00473cb0(&local_1a60.base,local_fc);
      }
      engine_dosio_cpp_CFileFinder_findNext_FUN_00456cc0(&local_18f0);
    }
    shape_edittool_cpp_CStrList_sortAll_FUN_00473fd0(&local_1a60.base);
    iVar4 = local_1a60.base.item_count;
    iVar6 = -1;
    if (local_12c8[0] != '\0') {
      iVar6 = 0;
      if (0 < local_1a60.base.item_count) {
        do {
          shape_edittool_cpp_CStrList_getFieldAt_FUN_00474090(&local_1a60.base,local_9c4,iVar6,0);
          shape_edittool_cpp_CStrList_getFieldAt_FUN_00474090(&local_1a60.base,local_5c4,iVar6,1);
          makepath(local_15d4,(char *)0x0,(char *)0x0,local_9c4,local_5c4);
          iVar3 = _stricmp(local_15d4,local_12c8);
          if (iVar3 == 0) break;
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_1a60.base.item_count);
      }
      if (local_1a60.base.item_count <= iVar6) {
        iVar6 = -1;
      }
      local_12c8[0] = '\0';
    }
    engine_dosio_cpp_CFileFinder_openSearch_FUN_00456c40(&local_18f0,"*.*");
    while (local_18f0.filename[0] != '\0') {
      if (((byte)local_18f0.attributes & 4) != 0) {
        iVar3 = _strcmp(local_18f0.filename,"..");
        if (iVar3 == 0) {
          pcVar2 = "..\t\t(DIR)";
        }
        else {
          iVar3 = _strcmp(local_18f0.filename,".");
          if (iVar3 == 0) goto LAB_00470970;
          splitpath
                    (local_18f0.filename,(char *)0x0,(char *)0x0,local_ac4,&local_6c4);
          if (local_6c4 == '.') {
            uVar5 = 0xffffffff;
            pcVar2 = &local_6c4;
            do {
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              cVar1 = *pcVar2;
              pcVar2 = pcVar2 + (uint)bVar9 * -2 + 1;
            } while (cVar1 != '\0');
            memmove(&local_6c4,local_6c3,~uVar5 - 1);
          }
          _sprintf(local_1c4,"%s\t%s\t(DIR)",local_ac4,&local_6c4);
          strupr(local_1c4);
          pcVar2 = local_1c4;
        }
        shape_edittool_cpp_CStrList_add_FUN_00473cb0(&local_1a60.base,pcVar2);
      }
LAB_00470970:
      engine_dosio_cpp_CFileFinder_findNext_FUN_00456cc0(&local_18f0);
    }
    shape_edittool_cpp_CPickList_sort_FUN_004761a0
              (&local_1a60,iVar4,local_1a60.base.item_count + -1);
    shape_edittool_cpp_CStrList_add_FUN_00473cb0(&local_1a60.base,"(Change Path)");
    iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                      (&local_1a60,local_1c90,iVar6,unaff_ESI);
    if (iVar6 < 0) goto LAB_00470cb8;
    if (local_1a60.base.item_count + -1 <= iVar6) {
      puVar7 = &DAT_005b6f70;
      pcVar2 = local_16d8;
      for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint *)pcVar2 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        pcVar2 = pcVar2 + ((uint)bVar9 * -2 + 1) * 4;
      }
      while ((iVar4 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_00471600
                                (in_stack_00000004,"Enter new path",local_16d8,0x104,1),
             iVar4 != 0 && (iVar4 = chdir(local_16d8), iVar4 != 0))) {
        shape_edittool_cpp_FUN_0046fcd0();
        chdir(local_17dc);
      }
      engine_dosio_cpp_CFileFinder_dtor_FUN_00456c20(&local_18f0,0);
      shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(&local_1a60,0);
      goto LAB_0047078a;
    }
    if (iVar6 < iVar4) {
      splitpath(local_17dc,local_10,local_7c4,local_cc4,local_2c4);
      makepath(local_8c4,(char *)0x0,local_7c4,local_cc4,local_2c4);
      shape_edittool_cpp_CStrList_getFieldAt_FUN_00474090(&local_1a60.base,local_cc4,iVar6,0);
      shape_edittool_cpp_CStrList_getFieldAt_FUN_00474090(&local_1a60.base,local_2c4,iVar6,1);
      makepath(in_stack_00000010,local_10,local_8c4,local_cc4,local_2c4);
      local_14 = 1;
LAB_00470cb8:
      engine_dosio_cpp_CFileFinder_dtor_FUN_00456c20(&local_18f0,0);
      shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(&local_1a60,0);
      chdir(local_14d0);
      return local_14;
    }
    shape_edittool_cpp_CStrList_getFieldAt_FUN_00474090(&local_1a60.base,local_10c4,iVar6,0);
    shape_edittool_cpp_CStrList_getFieldAt_FUN_00474090(&local_1a60.base,local_11c4,iVar6,1);
    makepath(local_fc4,(char *)0x0,(char *)0x0,local_10c4,local_11c4);
    chdir(local_fc4);
    engine_dosio_cpp_CFileFinder_dtor_FUN_00456c20(&local_18f0,0);
    shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(&local_1a60,0);
  } while( true );
}
