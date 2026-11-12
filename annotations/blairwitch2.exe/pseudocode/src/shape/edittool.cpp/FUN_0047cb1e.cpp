// Name: shape_edittool.cpp_FUN_0047cb1e
// Address: 0047cb1e
// Address Range: [[0047cb1e, 0047d265]]
// Convention: unknown
// Signature: undefined4 shape_edittool_cpp_FUN_0047cb1e(CEditorTools *param_1,undefined4 param_2,char *param_3,char *param_4,byte param_5)

#include "nocturne.h"

uint shape_edittool_cpp_FUN_0047cb1e(CEditorTools *param_1,uint param_2,char *param_3,char *param_4,byte param_5)

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
    shape_edittool_cpp_CEditorTools_showError_FUN_0047be40
              (param_1,"Error getting current directory.");
    return 0;
  }
  puVar7 = (uint *)0x6138f0;
  pcVar2 = acStack_12c8;
  for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(uint *)pcVar2 = *puVar7;
    puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    pcVar2 = pcVar2 + ((uint)bVar9 * -2 + 1) * 4;
  }
  if ((param_5 & 1) != 0) {
    engine_dosio_cpp_splitPath_FUN_00461070(param_4,acStack_c,acStack_bc4,acStack_ec4,acStack_3c4);
    engine_dosio_cpp_makePath_FUN_004610a0
              (acStack_13cc,acStack_c,acStack_bc4,(char *)0x0,(char *)0x0);
    FUN_005ba2e0(acStack_13cc);
    engine_dosio_cpp_makePath_FUN_004610a0
              (acStack_12c8,(char *)0x0,(char *)0x0,acStack_ec4,acStack_3c4);
    FUN_005ba2e0(acStack_12c8);
  }
  uStack_14 = 0;
LAB_0047cb7a:
  do {
    pcVar2 = "[ERROR: Can't get current directory.]";
    pcVar8 = acStack_17dc;
    for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(uint *)pcVar8 = *(uint *)pcVar2;
      pcVar2 = pcVar2 + ((uint)bVar9 * -2 + 1) * 4;
      pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
    }
    _getcwd(acStack_17dc,0x104);
    _sprintf(acStack_1b20,(char *)0x5d2097);
    shape_edittool_cpp_CPickList_ctor_FUN_00481fc0(&CStack_1ee0);
    engine_dosio_cpp_CFileFinder_ctor_FUN_00460e10(&CStack_18f0);
    if (param_3 == (char *)0x0) {
      param_3 = (char *)0x5d209d;
    }
    engine_dosio_cpp_CFileFinder_openSearch_FUN_00460e50(&CStack_18f0,param_3);
    while (CStack_18f0.filename[0] != '\0') {
      if (((byte)CStack_18f0.attributes & 4) == 0) {
        engine_dosio_cpp_splitPath_FUN_00461070
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
        _sprintf(acStack_fc,(char *)0x5d20b7);
        strupr(acStack_fc);
        shape_edittool_cpp_CStrList_add_FUN_00480e70(&CStack_1ee0.base,acStack_fc);
      }
      engine_dosio_cpp_CFileFinder_findNext_FUN_00460ed0(&CStack_18f0);
    }
    shape_edittool_cpp_CStrList_sortAll_FUN_00481190(&CStack_1ee0.base);
    iVar4 = CStack_1ee0.base.item_count;
    iVar6 = -1;
    if (acStack_12c8[0] != '\0') {
      iVar6 = 0;
      if (0 < CStack_1ee0.base.item_count) {
        do {
          shape_edittool_cpp_CStrList_getFieldAt_FUN_00481250(&CStack_1ee0.base,acStack_9c4,iVar6,0)
          ;
          shape_edittool_cpp_CStrList_getFieldAt_FUN_00481250(&CStack_1ee0.base,acStack_5c4,iVar6,1)
          ;
          engine_dosio_cpp_makePath_FUN_004610a0
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
    engine_dosio_cpp_CFileFinder_openSearch_FUN_00460e50(&CStack_18f0,(char *)0x5d20c2);
    while (CStack_18f0.filename[0] != '\0') {
      if (((byte)CStack_18f0.attributes & 4) != 0) {
        iVar3 = _strcmp(CStack_18f0.filename,(char *)0x5d20c6);
        if (iVar3 == 0) {
          pcVar2 = (char *)0x5d20c9;
        }
        else {
          iVar3 = _strcmp(CStack_18f0.filename,(char *)0x5d20d3);
          if (iVar3 == 0) goto LAB_0047cd4e;
          engine_dosio_cpp_splitPath_FUN_00461070
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
          _sprintf(acStack_1c4,(char *)0x5d20d5);
          strupr(acStack_1c4);
          pcVar2 = acStack_1c4;
        }
        shape_edittool_cpp_CStrList_add_FUN_00480e70(&CStack_1ee0.base,pcVar2);
      }
LAB_0047cd4e:
      engine_dosio_cpp_CFileFinder_findNext_FUN_00460ed0(&CStack_18f0);
    }
    shape_edittool_cpp_FUN_00483d80(&CStack_1ee0,iVar4,CStack_1ee0.base.item_count + -1);
    shape_edittool_cpp_CStrList_add_FUN_00480e70(&CStack_1ee0.base,"(Change Path)");
    iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00482250
                      (&CStack_1ee0,acStack_1b20,iVar6,0);
    if (iVar6 < 0) goto LAB_0047d083;
    if (CStack_1ee0.base.item_count + -1 <= iVar6) {
      puVar7 = (uint *)0x613b00;
      pcVar2 = acStack_16d8;
      for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint *)pcVar2 = *puVar7;
        puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
        pcVar2 = pcVar2 + ((uint)bVar9 * -2 + 1) * 4;
      }
      while ((iVar4 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_0047dae0
                                (param_1,"Enter new path",acStack_16d8,0x104,1), iVar4 != 0
             && (iVar4 = FUN_005ba2e0(acStack_16d8), iVar4 != 0))) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0047be40(param_1,"Can't change to %s")
        ;
        FUN_005ba2e0(acStack_17dc);
      }
      engine_dosio_cpp_CFileFinder_dtor_FUN_00460e30(&CStack_18f0,0);
      shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&CStack_1ee0,0);
      goto LAB_0047cb7a;
    }
    if (iVar6 < iVar4) {
      engine_dosio_cpp_splitPath_FUN_00461070
                (acStack_17dc,acStack_10,acStack_7c4,acStack_cc4,acStack_2c4);
      engine_dosio_cpp_makePath_FUN_004610a0
                (acStack_8c4,(char *)0x0,acStack_7c4,acStack_cc4,acStack_2c4);
      shape_edittool_cpp_CStrList_getFieldAt_FUN_00481250(&CStack_1ee0.base,acStack_cc4,iVar6,0);
      shape_edittool_cpp_CStrList_getFieldAt_FUN_00481250(&CStack_1ee0.base,acStack_2c4,iVar6,1);
      engine_dosio_cpp_makePath_FUN_004610a0(param_4,acStack_10,acStack_8c4,acStack_cc4,acStack_2c4)
      ;
      uStack_14 = 1;
LAB_0047d083:
      engine_dosio_cpp_CFileFinder_dtor_FUN_00460e30(&CStack_18f0,0);
      shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&CStack_1ee0,0);
      FUN_005ba2e0(acStack_14d0);
      return uStack_14;
    }
    shape_edittool_cpp_CStrList_getFieldAt_FUN_00481250(&CStack_1ee0.base,acStack_10c4,iVar6,0);
    shape_edittool_cpp_CStrList_getFieldAt_FUN_00481250(&CStack_1ee0.base,acStack_11c4,iVar6,1);
    engine_dosio_cpp_makePath_FUN_004610a0
              (acStack_fc4,(char *)0x0,(char *)0x0,acStack_10c4,acStack_11c4);
    FUN_005ba2e0(acStack_fc4);
    engine_dosio_cpp_CFileFinder_dtor_FUN_00460e30(&CStack_18f0,0);
    shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&CStack_1ee0,0);
  } while( true );
}
