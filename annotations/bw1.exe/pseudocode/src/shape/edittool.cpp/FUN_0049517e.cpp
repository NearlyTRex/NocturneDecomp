// Name: shape_edittool.cpp_FUN_0049517e
// Address: 0049517e
// Address Range: [[0049517e, 004958c5]]
// Convention: unknown
// Signature: undefined4 shape_edittool_cpp_FUN_0049517e(CEditorTools *param_1,undefined4 param_2,char *param_3,char *param_4,byte param_5)

#include "nocturne.h"

uint shape_edittool_cpp_FUN_0049517e(CEditorTools *param_1,uint param_2,char *param_3,char *param_4,byte param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  char *pcVar7;
  byte bVar8;
  char *pcVar9;
  CPickList CStack_1ee0;
  char acStack_1b20 [560];
  CFileFinder CStack_18f0;
  char acStack_17dc [260];
  char acStack_16d8 [260];
  char acStack_15d4 [260];
  byte auStack_14d0 [260];
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
  byte auStack_34 [32];
  uint uStack_14;
  char acStack_10 [4];
  char acStack_c [4];
  
  bVar8 = 0;
  iVar2 = FUN_005c26ae(auStack_14d0,0x104);
  if (iVar2 == 0) {
    shape_edittool_cpp_FUN_004943a0(param_1,"Error getting current directory.");
    return 0;
  }
  puVar6 = (uint *)0x61abd0;
  pcVar9 = acStack_12c8;
  for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pcVar9 = *puVar6;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    pcVar9 = pcVar9 + ((uint)bVar8 * -2 + 1) * 4;
  }
  if ((param_5 & 1) != 0) {
    engine_dosio_cpp_FUN_00479580(param_4,acStack_c,acStack_bc4,acStack_ec4,acStack_3c4);
    engine_dosio_cpp_FUN_004795b0(acStack_13cc,acStack_c,acStack_bc4,(char *)0x0,(char *)0x0);
    FUN_005c26c0(acStack_13cc);
    engine_dosio_cpp_FUN_004795b0(acStack_12c8,(char *)0x0,(char *)0x0,acStack_ec4,acStack_3c4);
    FUN_005c26c0(acStack_12c8);
  }
  uStack_14 = 0;
LAB_004951da:
  do {
    pcVar9 = "[ERROR: Can't get current directory.]";
    pcVar7 = acStack_17dc;
    for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(uint *)pcVar7 = *(uint *)pcVar9;
      pcVar9 = pcVar9 + ((uint)bVar8 * -2 + 1) * 4;
      pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
    }
    FUN_005c26ae(acStack_17dc,0x104);
    FUN_005bfb40(acStack_1b20,0x5dbe35,param_2,acStack_17dc);
    shape_edittool_cpp_CPickList_ctor_FUN_0049a620(&CStack_1ee0);
    engine_dosio_cpp_CFileFinder_ctor_FUN_00479320(&CStack_18f0);
    if (param_3 == (char *)0x0) {
      param_3 = (char *)0x5dbe3b;
    }
    engine_dosio_cpp_CFileFinder_openSearch_FUN_00479360(&CStack_18f0,param_3);
    while (CStack_18f0._0_1_ != '\0') {
      if ((CStack_18f0._256_1_ & 4) == 0) {
        engine_dosio_cpp_FUN_00479580
                  ((char *)&CStack_18f0,(char *)0x0,(char *)0x0,acStack_dc4,&cStack_4c4);
        if (cStack_4c4 == '.') {
          uVar5 = 0xffffffff;
          pcVar9 = &cStack_4c4;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + (uint)bVar8 * -2 + 1;
          } while (cVar1 != '\0');
          memmove(&cStack_4c4,auStack_4c3,~uVar5 - 1);
        }
        uVar4 = _localtime(&CStack_18f0.field_0x108);
        _strftime(auStack_34,0x1e,"\t%m/%d/%y %I:%M:%S %p",uVar4);
        FUN_005bfb40
                  (acStack_fc,0x5dbe55,acStack_dc4,&cStack_4c4,CStack_18f0._260_4_,auStack_34);
        strupr(acStack_fc);
        shape_edittool_cpp_CStrList_add_FUN_004994d0((CStrList *)&CStack_1ee0,acStack_fc);
      }
      engine_dosio_cpp_CFileFinder_findNext_FUN_004793e0(&CStack_18f0);
    }
    shape_edittool_cpp_CStrList_sortAll_FUN_004997f0((CStrList *)&CStack_1ee0);
    uVar4 = CStack_1ee0._0_4_;
    iVar2 = -1;
    if (acStack_12c8[0] != '\0') {
      iVar2 = 0;
      if (0 < (int)CStack_1ee0._0_4_) {
        do {
          shape_edittool_cpp_CStrList_getFieldAt_FUN_004998b0
                    ((CStrList *)&CStack_1ee0,acStack_9c4,iVar2,0);
          shape_edittool_cpp_CStrList_getFieldAt_FUN_004998b0
                    ((CStrList *)&CStack_1ee0,acStack_5c4,iVar2,1);
          engine_dosio_cpp_FUN_004795b0
                    (acStack_15d4,(char *)0x0,(char *)0x0,acStack_9c4,acStack_5c4);
          iVar3 = _stricmp(acStack_15d4,acStack_12c8);
          if (iVar3 == 0) break;
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)CStack_1ee0._0_4_);
      }
      if ((int)CStack_1ee0._0_4_ <= iVar2) {
        iVar2 = -1;
      }
      acStack_12c8[0] = '\0';
    }
    engine_dosio_cpp_CFileFinder_openSearch_FUN_00479360(&CStack_18f0,(char *)0x5dbe60);
    while (CStack_18f0._0_1_ != '\0') {
      if ((CStack_18f0._256_1_ & 4) != 0) {
        iVar3 = _strcmp((char *)&CStack_18f0,(char *)0x5dbe64);
        if (iVar3 == 0) {
          pcVar9 = (char *)0x5dbe67;
        }
        else {
          iVar3 = _strcmp((char *)&CStack_18f0,(char *)0x5dbe71);
          if (iVar3 == 0) goto LAB_004953ae;
          engine_dosio_cpp_FUN_00479580
                    ((char *)&CStack_18f0,(char *)0x0,(char *)0x0,acStack_ac4,&cStack_6c4);
          if (cStack_6c4 == '.') {
            uVar5 = 0xffffffff;
            pcVar9 = &cStack_6c4;
            do {
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar9 + (uint)bVar8 * -2 + 1;
            } while (cVar1 != '\0');
            memmove(&cStack_6c4,auStack_6c3,~uVar5 - 1);
          }
          FUN_005bfb40(acStack_1c4,0x5dbe73,acStack_ac4,&cStack_6c4);
          strupr(acStack_1c4);
          pcVar9 = acStack_1c4;
        }
        shape_edittool_cpp_CStrList_add_FUN_004994d0((CStrList *)&CStack_1ee0,pcVar9);
      }
LAB_004953ae:
      engine_dosio_cpp_CFileFinder_findNext_FUN_004793e0(&CStack_18f0);
    }
    shape_edittool_cpp_FUN_0049c3e0(&CStack_1ee0,uVar4,CStack_1ee0._0_4_ + -1);
    shape_edittool_cpp_CStrList_add_FUN_004994d0((CStrList *)&CStack_1ee0,"(Change Path)");
    iVar2 = shape_edittool_cpp_FUN_0049a8b0(&CStack_1ee0,acStack_1b20,iVar2,0);
    if (iVar2 < 0) goto LAB_004956e3;
    if (CStack_1ee0._0_4_ + -1 <= iVar2) {
      puVar6 = (uint *)0x61ade0;
      pcVar9 = acStack_16d8;
      for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(uint *)pcVar9 = *puVar6;
        puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
        pcVar9 = pcVar9 + ((uint)bVar8 * -2 + 1) * 4;
      }
      while ((iVar2 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_00496150
                                (param_1,"Enter new path",acStack_16d8,0x104,1), iVar2 != 0
             && (iVar2 = FUN_005c26c0(acStack_16d8), iVar2 != 0))) {
        shape_edittool_cpp_FUN_004943a0(param_1,"Can't change to %s",acStack_16d8);
        FUN_005c26c0(acStack_17dc);
      }
      engine_dosio_cpp_CFileFinder_dtor_FUN_00479340(&CStack_18f0,0);
      shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&CStack_1ee0,0);
      goto LAB_004951da;
    }
    if (iVar2 < (int)uVar4) {
      engine_dosio_cpp_FUN_00479580(acStack_17dc,acStack_10,acStack_7c4,acStack_cc4,acStack_2c4);
      engine_dosio_cpp_FUN_004795b0(acStack_8c4,(char *)0x0,acStack_7c4,acStack_cc4,acStack_2c4);
      shape_edittool_cpp_CStrList_getFieldAt_FUN_004998b0
                ((CStrList *)&CStack_1ee0,acStack_cc4,iVar2,0);
      shape_edittool_cpp_CStrList_getFieldAt_FUN_004998b0
                ((CStrList *)&CStack_1ee0,acStack_2c4,iVar2,1);
      engine_dosio_cpp_FUN_004795b0(param_4,acStack_10,acStack_8c4,acStack_cc4,acStack_2c4);
      uStack_14 = 1;
LAB_004956e3:
      engine_dosio_cpp_CFileFinder_dtor_FUN_00479340(&CStack_18f0,0);
      shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&CStack_1ee0,0);
      FUN_005c26c0(auStack_14d0);
      return uStack_14;
    }
    shape_edittool_cpp_CStrList_getFieldAt_FUN_004998b0
              ((CStrList *)&CStack_1ee0,acStack_10c4,iVar2,0);
    shape_edittool_cpp_CStrList_getFieldAt_FUN_004998b0
              ((CStrList *)&CStack_1ee0,acStack_11c4,iVar2,1);
    engine_dosio_cpp_FUN_004795b0(acStack_fc4,(char *)0x0,(char *)0x0,acStack_10c4,acStack_11c4);
    FUN_005c26c0(acStack_fc4);
    engine_dosio_cpp_CFileFinder_dtor_FUN_00479340(&CStack_18f0,0);
    shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&CStack_1ee0,0);
  } while( true );
}
