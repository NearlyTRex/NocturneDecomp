// Name: shape_edittool.cpp_FUN_00495180
// Address: 00495180
// Address Range: [[00495180, 004958c5]]
// Convention: unknown
// Signature: undefined4 shape_edittool_cpp_FUN_00495180(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint shape_edittool_cpp_FUN_00495180(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  _tm *time_ptr;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  byte bVar9;
  CEditorTools *in_stack_00000004;
  char *in_stack_0000000c;
  char *in_stack_00000010;
  byte in_stack_00000014;
  CPickList CStack_1ee0;
  char acStack_1b20 [560];
  CFileFinder CStack_18f0;
  char acStack_17dc [260];
  char acStack_16d8 [260];
  char acStack_15d4 [260];
  char acStack_14d0 [260];
  char acStack_13cc [260];
  char acStack_12c8 [260];
  char acStack_11c4 [256];
  char acStack_10c4 [256];
  char acStack_fc4 [256];
  char acStack_ec4 [256];
  char acStack_dc4 [256];
  char acStack_cc4 [256];
  char acStack_bc4 [256];
  char acStack_ac4 [256];
  char acStack_9c4 [256];
  char acStack_8c4 [256];
  char acStack_7c4 [256];
  char cStack_6c4;
  byte auStack_6c3 [255];
  char acStack_5c4 [256];
  char cStack_4c4;
  byte auStack_4c3 [255];
  char acStack_3c4 [256];
  char acStack_2c4 [256];
  char acStack_1c4 [200];
  char acStack_fc [200];
  char acStack_34 [32];
  uint uStack_14;
  char acStack_10 [4];
  char acStack_c [4];
  
  bVar9 = 0;
  pcVar2 = _getcwd(acStack_14d0,0x104);
  if (pcVar2 == (char *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_004943a0
              (in_stack_00000004,"Error getting current directory.");
    return 0;
  }
  puVar7 = (uint *)0x61abd0;
  pcVar2 = acStack_12c8;
  for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(uint *)pcVar2 = *puVar7;
    puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    pcVar2 = pcVar2 + ((uint)bVar9 * -2 + 1) * 4;
  }
  if ((in_stack_00000014 & 1) != 0) {
    engine_dosio_cpp_splitPath_FUN_00479580
              (in_stack_00000010,acStack_c,acStack_bc4,acStack_ec4,acStack_3c4);
    engine_dosio_cpp_makePath_FUN_004795b0
              (acStack_13cc,acStack_c,acStack_bc4,(char *)0x0,(char *)0x0);
    FUN_005c26c0(acStack_13cc);
    engine_dosio_cpp_makePath_FUN_004795b0
              (acStack_12c8,(char *)0x0,(char *)0x0,acStack_ec4,acStack_3c4);
    FUN_005c26c0(acStack_12c8);
  }
  uStack_14 = 0;
LAB_004951da:
  do {
    pcVar2 = "[ERROR: Can't get current directory.]";
    pcVar8 = acStack_17dc;
    for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(uint *)pcVar8 = *(uint *)pcVar2;
      pcVar2 = pcVar2 + ((uint)bVar9 * -2 + 1) * 4;
      pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
    }
    _getcwd(acStack_17dc,0x104);
    _sprintf(acStack_1b20,(char *)0x5dbe35);
    shape_edittool_cpp_CPickList_ctor_FUN_0049a620(&CStack_1ee0);
    engine_dosio_cpp_CFileFinder_ctor_FUN_00479320(&CStack_18f0);
    if (in_stack_0000000c == (char *)0x0) {
      in_stack_0000000c = (char *)0x5dbe3b;
    }
    engine_dosio_cpp_CFileFinder_openSearch_FUN_00479360(&CStack_18f0,in_stack_0000000c);
    while (CStack_18f0.filename[0] != '\0') {
      if (((byte)CStack_18f0.attributes & 4) == 0) {
        engine_dosio_cpp_splitPath_FUN_00479580
                  (CStack_18f0.filename,(char *)0x0,(char *)0x0,acStack_dc4,&cStack_4c4);
        if (cStack_4c4 == '.') {
          uVar5 = 0xffffffff;
          pcVar2 = &cStack_4c4;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar2 + (uint)bVar9 * -2 + 1;
          } while (cVar1 != '\0');
          memmove(&cStack_4c4,auStack_4c3,~uVar5 - 1);
        }
        time_ptr = _localtime((time_t *)&CStack_18f0.timestamp);
        _strftime(acStack_34,0x1e,"\t%m/%d/%y %I:%M:%S %p",time_ptr);
        _sprintf(acStack_fc,(char *)0x5dbe55);
        strupr(acStack_fc);
        shape_edittool_cpp_CStrList_add_FUN_004994d0(&CStack_1ee0.base,acStack_fc);
      }
      engine_dosio_cpp_CFileFinder_findNext_FUN_004793e0(&CStack_18f0);
    }
    shape_edittool_cpp_CStrList_sortAll_FUN_004997f0(&CStack_1ee0.base);
    iVar4 = CStack_1ee0.base.item_count;
    iVar6 = -1;
    if (acStack_12c8[0] != '\0') {
      iVar6 = 0;
      if (0 < CStack_1ee0.base.item_count) {
        do {
          shape_edittool_cpp_CStrList_getFieldAt_FUN_004998b0(&CStack_1ee0.base,acStack_9c4,iVar6,0)
          ;
          shape_edittool_cpp_CStrList_getFieldAt_FUN_004998b0(&CStack_1ee0.base,acStack_5c4,iVar6,1)
          ;
          engine_dosio_cpp_makePath_FUN_004795b0
                    (acStack_15d4,(char *)0x0,(char *)0x0,acStack_9c4,acStack_5c4);
          iVar3 = _stricmp(acStack_15d4,acStack_12c8);
          if (iVar3 == 0) break;
          iVar6 = iVar6 + 1;
        } while (iVar6 < CStack_1ee0.base.item_count);
      }
      if (CStack_1ee0.base.item_count <= iVar6) {
        iVar6 = -1;
      }
      acStack_12c8[0] = '\0';
    }
    engine_dosio_cpp_CFileFinder_openSearch_FUN_00479360(&CStack_18f0,(char *)0x5dbe60);
    while (CStack_18f0.filename[0] != '\0') {
      if (((byte)CStack_18f0.attributes & 4) != 0) {
        iVar3 = _strcmp(CStack_18f0.filename,(char *)0x5dbe64);
        if (iVar3 == 0) {
          pcVar2 = (char *)0x5dbe67;
        }
        else {
          iVar3 = _strcmp(CStack_18f0.filename,(char *)0x5dbe71);
          if (iVar3 == 0) goto LAB_004953ae;
          engine_dosio_cpp_splitPath_FUN_00479580
                    (CStack_18f0.filename,(char *)0x0,(char *)0x0,acStack_ac4,&cStack_6c4);
          if (cStack_6c4 == '.') {
            uVar5 = 0xffffffff;
            pcVar2 = &cStack_6c4;
            do {
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              cVar1 = *pcVar2;
              pcVar2 = pcVar2 + (uint)bVar9 * -2 + 1;
            } while (cVar1 != '\0');
            memmove(&cStack_6c4,auStack_6c3,~uVar5 - 1);
          }
          _sprintf(acStack_1c4,(char *)0x5dbe73);
          strupr(acStack_1c4);
          pcVar2 = acStack_1c4;
        }
        shape_edittool_cpp_CStrList_add_FUN_004994d0(&CStack_1ee0.base,pcVar2);
      }
LAB_004953ae:
      engine_dosio_cpp_CFileFinder_findNext_FUN_004793e0(&CStack_18f0);
    }
    shape_edittool_cpp_FUN_0049c3e0(&CStack_1ee0,iVar4,CStack_1ee0.base.item_count + -1);
    shape_edittool_cpp_CStrList_add_FUN_004994d0(&CStack_1ee0.base,"(Change Path)");
    iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0
                      (&CStack_1ee0,acStack_1b20,iVar6,0);
    if (iVar6 < 0) goto LAB_004956e3;
    if (CStack_1ee0.base.item_count + -1 <= iVar6) {
      puVar7 = (uint *)0x61ade0;
      pcVar2 = acStack_16d8;
      for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint *)pcVar2 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        pcVar2 = pcVar2 + ((uint)bVar9 * -2 + 1) * 4;
      }
      while ((iVar4 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_00496150
                                (in_stack_00000004,"Enter new path",acStack_16d8,0x104,1),
             iVar4 != 0 && (iVar4 = FUN_005c26c0(acStack_16d8), iVar4 != 0))) {
        shape_edittool_cpp_CEditorTools_showError_FUN_004943a0
                  (in_stack_00000004,"Can't change to %s");
        FUN_005c26c0(acStack_17dc);
      }
      engine_dosio_cpp_CFileFinder_dtor_FUN_00479340(&CStack_18f0,0);
      shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&CStack_1ee0,0);
      goto LAB_004951da;
    }
    if (iVar6 < iVar4) {
      engine_dosio_cpp_splitPath_FUN_00479580
                (acStack_17dc,acStack_10,acStack_7c4,acStack_cc4,acStack_2c4);
      engine_dosio_cpp_makePath_FUN_004795b0
                (acStack_8c4,(char *)0x0,acStack_7c4,acStack_cc4,acStack_2c4);
      shape_edittool_cpp_CStrList_getFieldAt_FUN_004998b0(&CStack_1ee0.base,acStack_cc4,iVar6,0);
      shape_edittool_cpp_CStrList_getFieldAt_FUN_004998b0(&CStack_1ee0.base,acStack_2c4,iVar6,1);
      engine_dosio_cpp_makePath_FUN_004795b0
                (in_stack_00000010,acStack_10,acStack_8c4,acStack_cc4,acStack_2c4);
      uStack_14 = 1;
LAB_004956e3:
      engine_dosio_cpp_CFileFinder_dtor_FUN_00479340(&CStack_18f0,0);
      shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&CStack_1ee0,0);
      FUN_005c26c0(acStack_14d0);
      return uStack_14;
    }
    shape_edittool_cpp_CStrList_getFieldAt_FUN_004998b0(&CStack_1ee0.base,acStack_10c4,iVar6,0);
    shape_edittool_cpp_CStrList_getFieldAt_FUN_004998b0(&CStack_1ee0.base,acStack_11c4,iVar6,1);
    engine_dosio_cpp_makePath_FUN_004795b0
              (acStack_fc4,(char *)0x0,(char *)0x0,acStack_10c4,acStack_11c4);
    FUN_005c26c0(acStack_fc4);
    engine_dosio_cpp_CFileFinder_dtor_FUN_00479340(&CStack_18f0,0);
    shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&CStack_1ee0,0);
  } while( true );
}
