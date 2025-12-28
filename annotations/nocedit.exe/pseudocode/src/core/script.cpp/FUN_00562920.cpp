// Name: core_script.cpp_FUN_00562920
// Address: 00562920
// Address Range: [[00562920, 00564006]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00562920()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00562920(uint param_1, uint param_2,
   uint param_3, uint param_4) */

uint
core_script_cpp_FUN_00562920
          (uint param_1,uint param_2,char *unaff_EBX,uint param_4,
          CStrList_vtable *param_5,uint param_6,int param_7)

{
  char cVar1;
  uint uVar2;
  CStrList_dtor **ppCVar3;
  bool bVar4;
  undefined3 extraout_var;
  int iVar5;
  SPart *pSVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  CCharacter *unaff_EDI;
  int iVar8;
  char *pcVar9;
  CStrList_vtable *pCVar10;
  char *pcVar11;
  byte bVar12;
  float in_stack_ffffc8ac;
  int in_stack_ffffc8b0;
  char **in_stack_ffffc8b4;
  CStrList_vtable *in_stack_ffffc8b8;
  CStrList_vtable *pCVar13;
  CStrList_vtable *in_stack_ffffc8bc;
  CPickList *this_ptr;
  CStrList_vtable *in_stack_ffffc8c0;
  CStrList_vtable *in_stack_ffffc8c4;
  CStrList_vtable *in_stack_ffffc8c8;
  uint in_stack_ffffc8cc;
  uint in_stack_ffffc8d0;
  uint in_stack_ffffc8d4;
  uint in_stack_ffffc8d8;
  uint in_stack_ffffc8dc;
  uint in_stack_ffffc8e0;
  uint in_stack_ffffc8e4;
  uint in_stack_ffffc8e8;
  uint in_stack_ffffc8ec;
  uint in_stack_ffffc8f0;
  uint in_stack_ffffc8f4;
  byte local_33ac [16];
  byte auStack_339c [924];
  byte auStack_3000 [8];
  byte auStack_2ff8 [8];
  byte auStack_2ff0 [916];
  byte local_2c5c [12];
  byte auStack_2c50 [8];
  byte auStack_2c48 [916];
  byte local_28b4 [16];
  byte auStack_28a4 [920];
  byte local_250c [20];
  byte auStack_24f8 [8];
  byte auStack_24f0 [8];
  byte auStack_24e8 [8];
  byte auStack_24e0 [892];
  byte local_2164 [20];
  byte auStack_2150 [8];
  byte auStack_2148 [8];
  byte auStack_2140 [8];
  byte auStack_2138 [8];
  byte auStack_2130 [8];
  byte auStack_2128 [884];
  byte auStack_1db4 [8];
  byte auStack_1dac [920];
  byte local_1a14 [20];
  byte auStack_1a00 [8];
  byte auStack_19f8 [8];
  byte auStack_19f0 [8];
  byte auStack_19e8 [896];
  byte auStack_1668 [8];
  byte auStack_1660 [8];
  byte auStack_1658 [8];
  byte auStack_1650 [912];
  byte auStack_12c0 [8];
  byte auStack_12b8 [924];
  byte local_f1c [20];
  byte auStack_f08 [8];
  byte auStack_f00 [8];
  byte auStack_ef8 [904];
  byte auStack_b70 [8];
  byte auStack_b68 [924];
  char local_7cc [8];
  char acStack_7c4 [4];
  char acStack_7c0 [4];
  char acStack_7bc [4];
  char acStack_7b8 [8];
  char acStack_7b0 [8];
  char acStack_7a8 [4];
  char acStack_7a4 [12];
  char acStack_798 [248];
  char local_6a0 [8];
  char acStack_698 [296];
  char acStack_570 [4];
  char acStack_56c [252];
  char local_470 [4];
  char acStack_46c [252];
  char local_370 [8];
  char acStack_368 [248];
  char local_270 [4];
  char acStack_26c [252];
  char local_170 [12];
  char acStack_164 [188];
  byte local_a8 [20];
  uint auStack_94 [25];
  int local_30 [2];
  int local_28;
  int local_24;
  int local_20;
  CCharacter *local_1c;
  CDeformableModel *local_18;
  char *local_14;
  
  bVar12 = 0;
  crt_stdio_c_sprintf_FUN_005fdbd0(local_7cc,"Enter %s",param_7 + 0x2c0);
  switch(param_6) {
  case 0:
    iVar7 = crt_stdio_c_sscanf_FUN_0060013c((char *)param_5,"%d",local_30);
    bVar4 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                      (g_CEditorToolsPtr,local_7cc,local_30,false,0,0,iVar7 == 1);
    if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar4) != 0) {
      crt_stdio_c_sprintf_FUN_005fdbd0((char *)param_5,"%d");
      return 1;
    }
    break;
  case 1:
    iVar7 = crt_stdio_c_sscanf_FUN_0060013c((char *)param_5,"%f",&stack0xffffc8a8);
    iVar7 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                      (g_CEditorToolsPtr,local_7cc,(float *)&stack0xffffc8a8,false,0.0,0.0,
                       iVar7 == 1);
    if (iVar7 != 0) {
      crt_stdio_c_sprintf_FUN_005fdbd0((char *)param_5,"%g",(double)in_stack_ffffc8ac);
      return 1;
    }
    break;
  case 2:
  case 0x1f:
    iVar7 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,local_7cc,(char *)param_5,100,1);
    if (iVar7 != 0) {
      return 1;
    }
    break;
  case 3:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)(auStack_339c + 0x398));
    local_14 = (char *)(param_7 + 0x25c);
    iVar7 = 0;
    for (iVar8 = 0; iVar8 < (int)g_CDemonSetPtr->actor_list_ptr; iVar8 = iVar8 + 1) {
      if (((*(char *)(param_7 + 0x25c) == '\0') ||
          (iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0
                             (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar7),local_14),
          iVar5 != 0)) &&
         (iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0
                            (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar7),
                             "CHeroPlaceHolder"), iVar5 == 0)) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)(auStack_3000 + 4),
                   *(char **)(g_CDemonSetPtr->actor_list_data + iVar7));
      }
      iVar7 = iVar7 + 4;
    }
    if ((*(char *)(param_7 + 0x25c) == '\0') ||
       (iVar7 = core_actor_cpp_matchesClassName_FUN_0040c740(&g_CHeroClassInfo,local_14), iVar7 != 0
       )) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_3000,"$");
    }
    shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)(auStack_3000 + 4));
    iVar7 = shape_edittool_cpp_CStrList_findString_FUN_004a3030
                      ((CStrList *)auStack_2ff8,(char *)param_5);
    iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)(auStack_2ff8 + 4),acStack_7bc,iVar7,(int)in_stack_ffffc8b4);
    if (iVar7 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_2ff0,0,(uint)in_stack_ffffc8bc,(uint)in_stack_ffffc8c0,
                 (uint)in_stack_ffffc8c4,(uint)in_stack_ffffc8c8,in_stack_ffffc8cc);
      return 0;
    }
    pcVar11 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)auStack_2ff0,iVar7);
    do {
      cVar1 = *pcVar11;
      *(char *)&param_5->dtor = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      *(char *)((int)&param_5->dtor + 1) = cVar1;
      param_5 = (CStrList_vtable *)((int)&param_5->dtor + 2);
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)(auStack_2ff0 + 4),0,(uint)in_stack_ffffc8c0,(uint)in_stack_ffffc8c4,
               (uint)in_stack_ffffc8c8,in_stack_ffffc8cc,in_stack_ffffc8d0);
    return 1;
  case 4:
    iVar7 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,local_7cc,(char *)param_5,4,1);
    if (iVar7 != 0) {
      return 1;
    }
    break;
  case 5:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)local_28b4);
    core_script_cpp_CScript_CallLoadingScriptFile_FUN_00566fa0();
    iVar7 = shape_edittool_cpp_CStrList_findString_FUN_004a3030
                      ((CStrList *)(local_28b4 + 8),(char *)param_5);
    iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)(local_28b4 + 0xc),acStack_7c0,iVar7,in_stack_ffffc8b0);
    if (iVar7 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_28a4,0,(uint)in_stack_ffffc8b8,(uint)in_stack_ffffc8bc,
                 (uint)in_stack_ffffc8c0,(uint)in_stack_ffffc8c4,(uint)in_stack_ffffc8c8);
      return 0;
    }
    pcVar11 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)auStack_28a4,iVar7);
    do {
      cVar1 = *pcVar11;
      *(char *)&param_5->dtor = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      *(char *)((int)&param_5->dtor + 1) = cVar1;
      param_5 = (CStrList_vtable *)((int)&param_5->dtor + 2);
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)(auStack_28a4 + 4),0,(uint)in_stack_ffffc8bc,(uint)in_stack_ffffc8c0,
               (uint)in_stack_ffffc8c4,(uint)in_stack_ffffc8c8,in_stack_ffffc8cc);
    return 1;
  case 6:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)(auStack_ef8 + 900));
    iVar8 = 0;
    for (iVar7 = 0; iVar7 < g_CDemonSetPtr->camera_count; iVar7 = iVar7 + 1) {
      pcVar11 = g_CDemonSetPtr->cameras[0].name + iVar8;
      iVar8 = iVar8 + 0x1a4;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_b70,pcVar11);
    }
    iVar7 = shape_edittool_cpp_CStrList_findString_FUN_004a3030
                      ((CStrList *)auStack_b70,(char *)param_5);
    iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)(auStack_b70 + 4),acStack_7c4,iVar7,(int)in_stack_ffffc8ac);
    if (iVar7 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_b68,0,(uint)in_stack_ffffc8b4,(uint)in_stack_ffffc8b8,
                 (uint)in_stack_ffffc8bc,(uint)in_stack_ffffc8c0,(uint)in_stack_ffffc8c4);
      return 0;
    }
    pcVar11 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)auStack_b68,iVar7);
    do {
      cVar1 = *pcVar11;
      *(char *)&param_5->dtor = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      *(char *)((int)&param_5->dtor + 1) = cVar1;
      param_5 = (CStrList_vtable *)((int)&param_5->dtor + 2);
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)(auStack_b68 + 4),0,(uint)in_stack_ffffc8b8,(uint)in_stack_ffffc8bc,
               (uint)in_stack_ffffc8c0,(uint)in_stack_ffffc8c4,(uint)in_stack_ffffc8c8);
    return 1;
  case 7:
    iVar7 = 0;
    core_script_cpp_FUN_00567630();
    iVar8 = 0;
    while (iVar7 < *(int *)(g_CScriptPtr->padding_0x18 + 0x10)) {
      uVar2 = *(uint *)(iVar8 + 0x100 + *(int *)(g_CScriptPtr->padding_0x18 + 0x14));
      if ((uVar2 < 10) || ((10 < uVar2 && (uVar2 != 0xb)))) {
        core_script_cpp_CScript_removeEventXRef_FUN_005676e0();
      }
      else {
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + 0x114;
      }
    }
    iVar7 = core_script_cpp_FUN_005677a0();
    if (iVar7 != 0) {
      return 1;
    }
    break;
  case 8:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)local_250c);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(local_250c + 4),"walk");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(local_250c + 8),"backup");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(local_250c + 0xc),"run");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(local_250c + 0x10),"fire");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_24f8,"useItem");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_24f8 + 4),"light");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_24f0,"draw");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_24f0 + 4),"jump");
    iVar7 = shape_edittool_cpp_CStrList_findString_FUN_004a3030
                      ((CStrList *)auStack_24e8,(char *)param_5);
    iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)(auStack_24e8 + 4),acStack_7a4,iVar7,in_stack_ffffc8cc);
    if (iVar7 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_24e0,0,in_stack_ffffc8d4,in_stack_ffffc8d8,in_stack_ffffc8dc,
                 in_stack_ffffc8e0,in_stack_ffffc8e4);
      return 0;
    }
    pcVar11 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)auStack_24e0,iVar7);
    do {
      cVar1 = *pcVar11;
      *(char *)&param_5->dtor = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      *(char *)((int)&param_5->dtor + 1) = cVar1;
      param_5 = (CStrList_vtable *)((int)&param_5->dtor + 2);
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)(auStack_24e0 + 4),0,in_stack_ffffc8d8,in_stack_ffffc8dc,
               in_stack_ffffc8e0,in_stack_ffffc8e4,in_stack_ffffc8e8);
    return 1;
  case 9:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)local_2164);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(local_2164 + 4),"generic");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(local_2164 + 8),"drown");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(local_2164 + 0xc),"fall");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(local_2164 + 0x10),"explode")
    ;
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_2150,"shatter");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)(auStack_2150 + 4),"fallApart");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_2148,"electrocute");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_2148 + 4),"chopped");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_2140,"crushed");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_2140 + 4),"impale");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_2138,"fire");
    iVar7 = shape_edittool_cpp_CStrList_findString_FUN_004a3030
                      ((CStrList *)(auStack_2138 + 4),(char *)param_5);
    iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)auStack_2130,acStack_798,iVar7,in_stack_ffffc8d8);
    if (iVar7 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)(auStack_2130 + 4),0,in_stack_ffffc8e0,in_stack_ffffc8e4,
                 in_stack_ffffc8e8,in_stack_ffffc8ec,in_stack_ffffc8f0);
      return 0;
    }
    pcVar11 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                        ((CStrList *)(auStack_2130 + 4),iVar7);
    do {
      cVar1 = *pcVar11;
      *(char *)&param_5->dtor = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      *(char *)((int)&param_5->dtor + 1) = cVar1;
      param_5 = (CStrList_vtable *)((int)&param_5->dtor + 2);
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)auStack_2128,0,in_stack_ffffc8e4,in_stack_ffffc8e8,in_stack_ffffc8ec,
               in_stack_ffffc8f0,in_stack_ffffc8f4);
    return 1;
  case 10:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)local_1a14);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(local_1a14 + 4),"generic");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(local_1a14 + 8),"bullet");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(local_1a14 + 0xc),"fire");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(local_1a14 + 0x10),"blade");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_1a00,"stake");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_1a00 + 4),"gas");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_19f8,"electrocute");
    iVar7 = shape_edittool_cpp_CStrList_findString_FUN_004a3030
                      ((CStrList *)(auStack_19f8 + 4),(char *)param_5);
    iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)auStack_19f0,acStack_7a8,iVar7,(int)in_stack_ffffc8c8);
    if (iVar7 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)(auStack_19f0 + 4),0,in_stack_ffffc8d0,in_stack_ffffc8d4,
                 in_stack_ffffc8d8,in_stack_ffffc8dc,in_stack_ffffc8e0);
      return 0;
    }
    pcVar11 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                        ((CStrList *)(auStack_19f0 + 4),iVar7);
    do {
      cVar1 = *pcVar11;
      *(char *)&param_5->dtor = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      *(char *)((int)&param_5->dtor + 1) = cVar1;
      param_5 = (CStrList_vtable *)((int)&param_5->dtor + 2);
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)auStack_19e8,0,in_stack_ffffc8d4,in_stack_ffffc8d8,in_stack_ffffc8dc,
               in_stack_ffffc8e0,in_stack_ffffc8e4);
    return 1;
  case 0xb:
  case 0xc:
    iVar7 = 0;
    iVar8 = 0;
    core_script_cpp_FUN_00567630();
    while (iVar7 < *(int *)(g_CScriptPtr->padding_0x18 + 0x10)) {
      uVar2 = *(uint *)(iVar8 + 0x100 + *(int *)(g_CScriptPtr->padding_0x18 + 0x14));
      if ((uVar2 < 8) || ((8 < uVar2 && (uVar2 != 9)))) {
        core_script_cpp_CScript_removeEventXRef_FUN_005676e0();
      }
      else {
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + 0x114;
      }
    }
    iVar7 = core_script_cpp_FUN_005677a0();
    if (iVar7 != 0) {
      return 1;
    }
    break;
  case 0xd:
    iVar7 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,local_7cc,"sound","*.wav",SUB41 /* extract 2-byte value */(param_5,0))
    ;
    if (iVar7 != 0) {
      return 1;
    }
    break;
  case 0xe:
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't pick this yet");
    return 0;
  case 0xf:
  case 0x10:
    iVar8 = 0;
    core_script_cpp_FUN_00567630();
    iVar7 = 0;
    while (iVar7 < *(int *)(g_CScriptPtr->padding_0x18 + 0x10)) {
      uVar2 = *(uint *)(iVar8 + 0x100 + *(int *)(g_CScriptPtr->padding_0x18 + 0x14));
      if ((uVar2 < 5) || ((5 < uVar2 && (uVar2 != 6)))) {
        core_script_cpp_CScript_removeEventXRef_FUN_005676e0();
      }
      else {
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + 0x114;
      }
    }
    iVar7 = core_script_cpp_FUN_005677a0();
    if (iVar7 != 0) {
      return 1;
    }
    break;
  case 0x11:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)(auStack_19e8 + 0x37c));
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_1668,"true");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_1668 + 4),"false");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_1660,"bottom");
    iVar7 = shape_edittool_cpp_CStrList_findString_FUN_004a3030
                      ((CStrList *)(auStack_1660 + 4),(char *)param_5);
    iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)auStack_1658,acStack_7b8,iVar7,(int)in_stack_ffffc8b8);
    if (iVar7 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)(auStack_1658 + 4),0,(uint)in_stack_ffffc8c0,(uint)in_stack_ffffc8c4,
                 (uint)in_stack_ffffc8c8,in_stack_ffffc8cc,in_stack_ffffc8d0);
      return 0;
    }
    pcVar11 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                        ((CStrList *)(auStack_1658 + 4),iVar7);
    do {
      cVar1 = *pcVar11;
      *(char *)&param_5->dtor = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      *(char *)((int)&param_5->dtor + 1) = cVar1;
      param_5 = (CStrList_vtable *)((int)&param_5->dtor + 2);
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)auStack_1650,0,(uint)in_stack_ffffc8c4,(uint)in_stack_ffffc8c8,
               in_stack_ffffc8cc,in_stack_ffffc8d0,in_stack_ffffc8d4);
    return 1;
  case 0x12:
    crt_string_c_splitpath_FUN_005ff178
              ((char *)(param_7 + 0x25c),(char *)0x0,local_370,local_470,local_270);
    crt_file_c_makepath_FUN_005febfc(acStack_570,(char *)0x0,(char *)0x0,acStack_46c,acStack_26c);
    iVar7 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,acStack_7c4,acStack_368,acStack_56c,SUB41 /* extract 2-byte value */(param_5,0));
    if (iVar7 != 0) {
      return 1;
    }
    break;
  case 0x13:
    iVar7 = 0;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)(auStack_1650 + 0x38c));
    for (iVar8 = 0; iVar8 < g_CDemonSetPtr->light_count; iVar8 = iVar8 + 1) {
      if (*(int *)(g_CDemonSetPtr->lights[0].name + iVar7 + -4) == 0) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)auStack_12c0,g_CDemonSetPtr->lights[0].name + iVar7);
      }
      iVar7 = iVar7 + 0x1898;
    }
    iVar7 = shape_edittool_cpp_CStrList_findString_FUN_004a3030
                      ((CStrList *)auStack_12c0,(char *)param_5);
    iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)(auStack_12c0 + 4),acStack_7c4,iVar7,(int)in_stack_ffffc8ac);
    if (iVar7 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_12b8,0,(uint)in_stack_ffffc8b4,(uint)in_stack_ffffc8b8,
                 (uint)in_stack_ffffc8bc,(uint)in_stack_ffffc8c0,(uint)in_stack_ffffc8c4);
      return 0;
    }
    pcVar11 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)auStack_12b8,iVar7);
    do {
      cVar1 = *pcVar11;
      *(char *)&param_5->dtor = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      *(char *)((int)&param_5->dtor + 1) = cVar1;
      param_5 = (CStrList_vtable *)((int)&param_5->dtor + 2);
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)(auStack_12b8 + 4),0,(uint)in_stack_ffffc8b8,(uint)in_stack_ffffc8bc,
               (uint)in_stack_ffffc8c0,(uint)in_stack_ffffc8c4,(uint)in_stack_ffffc8c8);
    return 1;
  case 0x14:
    iVar7 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,local_7cc,(char *)param_5,4,1);
    if (iVar7 != 0) {
      return 1;
    }
    break;
  case 0x15:
    iVar8 = 0;
    core_script_cpp_FUN_00567630();
    iVar7 = 0;
    while (iVar7 < *(int *)(g_CScriptPtr->padding_0x18 + 0x10)) {
      iVar5 = *(int *)(iVar8 + 0x100 + *(int *)(g_CScriptPtr->padding_0x18 + 0x14));
      if ((iVar5 == 0) || (iVar5 == 2)) {
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + 0x114;
      }
      else {
        core_script_cpp_CScript_removeEventXRef_FUN_005676e0();
      }
    }
    iVar7 = core_script_cpp_FUN_005677a0();
    if (iVar7 != 0) {
      return 1;
    }
    break;
  case 0x16:
    iVar7 = 0;
    iVar8 = 0;
    core_script_cpp_FUN_00567630();
    while (iVar7 < *(int *)(g_CScriptPtr->padding_0x18 + 0x10)) {
      iVar5 = *(int *)(iVar8 + 0x100 + *(int *)(g_CScriptPtr->padding_0x18 + 0x14));
      if ((iVar5 == 0) || (iVar5 == 3)) {
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + 0x114;
      }
      else {
        core_script_cpp_CScript_removeEventXRef_FUN_005676e0();
      }
    }
    iVar7 = core_script_cpp_FUN_005677a0();
    if (iVar7 != 0) {
      return 1;
    }
    break;
  case 0x17:
    iVar7 = core_script_cpp_FUN_00562860();
    if (iVar7 != 0) {
      iVar8 = 0;
      local_28 = iVar7;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xffffc8b0);
      local_20 = -1;
      if (0 < *(int *)(iVar7 + 0x964)) {
        local_1c = (CCharacter *)(iVar7 + 4);
        pcVar11 = (char *)(iVar7 + 0x968);
        do {
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_698,"%s\t%s");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xffffc8ac,local_6a0);
          iVar7 = crt_string_c_stricmp_FUN_005fe7f0(pcVar11,(char *)param_5);
          if (iVar7 == 0) {
            local_20 = iVar8;
          }
          pcVar11 = pcVar11 + 0x54c;
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(local_24 + 0x964));
      }
      pcVar11 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                  ((CPickList *)&stack0xffffc8b4,acStack_7c4,local_20,0);
      if (-1 < (int)pcVar11) {
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  ((CStrList *)&stack0xffffc8b8,(int)param_5,pcVar11,0);
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xffffc8bc,0,(uint)in_stack_ffffc8b8,(uint)in_stack_ffffc8bc,
                   (uint)in_stack_ffffc8c0,(uint)in_stack_ffffc8c4,(uint)in_stack_ffffc8c8);
        return 1;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xffffc8b8,0,(uint)in_stack_ffffc8b4,(uint)in_stack_ffffc8b8,
                 (uint)in_stack_ffffc8bc,(uint)in_stack_ffffc8c0,(uint)in_stack_ffffc8c4);
      return 0;
    }
    break;
  case 0x18:
    iVar7 = core_script_cpp_FUN_00562860();
    if (iVar7 != 0) {
      iVar8 = 0;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)(auStack_2128 + 0x370));
      if (0 < *(int *)(iVar7 + 0x964)) {
        pcVar11 = (char *)(iVar7 + 4);
        do {
          iVar8 = iVar8 + 1;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_1db4,pcVar11);
          pcVar11 = pcVar11 + 0x1e;
        } while (iVar8 < *(int *)(iVar7 + 0x964));
      }
      iVar7 = shape_edittool_cpp_CStrList_findString_FUN_004a3030
                        ((CStrList *)auStack_1db4,(char *)param_5);
      iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)(auStack_1db4 + 4),acStack_7c0,iVar7,in_stack_ffffc8b0);
      if (iVar7 < 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)auStack_1dac,0,(uint)in_stack_ffffc8b8,(uint)in_stack_ffffc8bc,
                   (uint)in_stack_ffffc8c0,(uint)in_stack_ffffc8c4,(uint)in_stack_ffffc8c8);
        return 0;
      }
      pcVar11 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)auStack_1dac,iVar7)
      ;
      do {
        cVar1 = *pcVar11;
        *(char *)&param_5->dtor = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        *(char *)((int)&param_5->dtor + 1) = cVar1;
        param_5 = (CStrList_vtable *)((int)&param_5->dtor + 2);
      } while (cVar1 != '\0');
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)(auStack_1dac + 4),0,(uint)in_stack_ffffc8bc,(uint)in_stack_ffffc8c0,
                 (uint)in_stack_ffffc8c4,(uint)in_stack_ffffc8c8,in_stack_ffffc8cc);
      return 1;
    }
    break;
  case 0x19:
    if (*(int *)(g_CScriptPtr->padding_0x18 + 4) < 1) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"No database loaded.");
      return 0;
    }
    iVar7 = 0;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)local_33ac);
    for (iVar8 = 0; iVar8 < *(int *)(g_CScriptPtr->padding_0x18 + 4); iVar8 = iVar8 + 1) {
      iVar5 = *(int *)(g_CScriptPtr->padding_0x18 + 8) + iVar7;
      crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_031099e8,"%s\t%s\t%s",iVar5,iVar5 + 0x78);
      iVar7 = iVar7 + 0x226;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)local_33ac,&DAT_031099e8);
    }
    iVar7 = shape_edittool_cpp_CStrList_findByFirstField_FUN_004a3070
                      ((CStrList *)(local_33ac + 4),(char *)param_5);
    if ((iVar7 < 0) &&
       (iVar7 = shape_edittool_cpp_CStrList_findByFirstField_FUN_004a3070
                          ((CStrList *)(local_33ac + 8),&DAT_0310a9e8), -1 < iVar7)) {
      iVar7 = iVar7 + 1;
    }
    iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)(local_33ac + 0xc),acStack_7c0,iVar7,0);
    if (iVar7 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_339c,0,(uint)in_stack_ffffc8b8,(uint)in_stack_ffffc8bc,
                 (uint)in_stack_ffffc8c0,(uint)in_stack_ffffc8c4,(uint)in_stack_ffffc8c8);
      return 0;
    }
    pcVar11 = (char *)(*(int *)(g_CScriptPtr->padding_0x18 + 8) + iVar7 * 0x226);
    do {
      cVar1 = *pcVar11;
      *(char *)&param_5->dtor = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      *(char *)((int)&param_5->dtor + 1) = cVar1;
      param_5 = (CStrList_vtable *)((int)&param_5->dtor + 2);
    } while (cVar1 != '\0');
    pcVar9 = &DAT_0310a9e8;
    pcVar11 = (char *)(*(int *)(g_CScriptPtr->padding_0x18 + 8) + iVar7 * 0x226);
    do {
      cVar1 = *pcVar11;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)auStack_339c,0,(uint)in_stack_ffffc8b8,(uint)in_stack_ffffc8bc,
               (uint)in_stack_ffffc8c0,(uint)in_stack_ffffc8c4,(uint)in_stack_ffffc8c8);
    return 1;
  case 0x1a:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)local_f1c);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(local_f1c + 4),"stand");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(local_f1c + 8),"follow");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(local_f1c + 0xc),"kill");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(local_f1c + 0x10),"guard");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_f08,"suspend");
    iVar7 = shape_edittool_cpp_CStrList_findString_FUN_004a3030
                      ((CStrList *)(auStack_f08 + 4),(char *)param_5);
    iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)auStack_f00,acStack_7b0,iVar7,(int)in_stack_ffffc8c0);
    if (iVar7 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)(auStack_f00 + 4),0,(uint)in_stack_ffffc8c8,in_stack_ffffc8cc,
                 in_stack_ffffc8d0,in_stack_ffffc8d4,in_stack_ffffc8d8);
      return 0;
    }
    pcVar11 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                        ((CStrList *)(auStack_f00 + 4),iVar7);
    do {
      cVar1 = *pcVar11;
      *(char *)&param_5->dtor = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      *(char *)((int)&param_5->dtor + 1) = cVar1;
      param_5 = (CStrList_vtable *)((int)&param_5->dtor + 2);
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)auStack_ef8,0,in_stack_ffffc8cc,in_stack_ffffc8d0,in_stack_ffffc8d4,
               in_stack_ffffc8d8,in_stack_ffffc8dc);
    return 1;
  case 0x1b:
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't pick this yet");
    return 0;
  case 0x1c:
    iVar7 = 0;
    iVar8 = 0;
    core_script_cpp_FUN_00567630();
    while (iVar7 < *(int *)(g_CScriptPtr->padding_0x18 + 0x10)) {
      iVar5 = *(int *)(iVar8 + 0x100 + *(int *)(g_CScriptPtr->padding_0x18 + 0x14));
      if ((iVar5 == 0) || (iVar5 == 4)) {
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + 0x114;
      }
      else {
        core_script_cpp_CScript_removeEventXRef_FUN_005676e0();
      }
    }
    iVar7 = core_script_cpp_FUN_005677a0();
    if (iVar7 != 0) {
      return 1;
    }
    break;
  default:
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"WARNING! chooseParm - unknown parm type %d (code needs to be updated)",param_6);
    return 0;
  case 0x1e:
    iVar7 = core_script_cpp_FUN_005627f0();
    if (iVar7 != 0) {
      iVar8 = core_script_cpp_FUN_00559730();
      if (iVar8 == 0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,&DAT_0310eca0);
        crt_memory_c_memset_FUN_005fde40(local_a8,0,0x78);
      }
      core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                ((CDeformableModelInstance *)(iVar7 + 0x158));
      iVar7 = -1;
      while( true ) {
        this_ptr = (CPickList *)(auStack_2c48 + 4);
        pCVar13 = (CStrList_vtable *)0x563dec;
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(this_ptr);
        for (iVar8 = 0; iVar5 = core_charactr_cpp_CCharacter_FUN_0042f9c0(local_1c), iVar8 < iVar5;
            iVar8 = iVar8 + 1) {
          core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_0059c220(local_18,iVar8);
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_164,"%s\t%s");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)local_2c5c,local_170);
        }
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(local_2c5c + 8),"Done");
        iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          ((CPickList *)auStack_2c50,acStack_7c0,iVar7,0);
        if (iVar7 < 0) {
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    ((CPickList *)(auStack_2c50 + 4),0,(uint)pCVar13,(uint)this_ptr,
                     (uint)in_stack_ffffc8c0,(uint)in_stack_ffffc8c4,(uint)in_stack_ffffc8c8);
          return 0;
        }
        iVar8 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)(auStack_2c50 + 4));
        if (iVar7 == iVar8 + -1) break;
        auStack_94[iVar7] = (uint)(auStack_94[iVar7] == 0);
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)auStack_2c48,0,(uint)this_ptr,(uint)in_stack_ffffc8c0,
                   (uint)in_stack_ffffc8c4,(uint)in_stack_ffffc8c8,in_stack_ffffc8cc);
      }
      iVar7 = 0;
      *(char *)&param_5->dtor = '\0';
      do {
        iVar8 = core_charactr_cpp_CCharacter_FUN_0042f9c0(unaff_EDI);
        if (iVar8 <= iVar7) {
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    ((CPickList *)(auStack_2c48 + 4),0,(uint)in_stack_ffffc8c0,
                     (uint)in_stack_ffffc8c4,(uint)in_stack_ffffc8c8,in_stack_ffffc8cc,
                     in_stack_ffffc8d0);
          return 1;
        }
        if (*(int *)((int)&param_5->remove + (int)auStack_94) != 0) {
          iVar8 = -1;
          pCVar13 = param_5;
          do {
            pCVar10 = pCVar13;
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            pCVar10 = (CStrList_vtable *)((int)pCVar13 + (uint)bVar12 * -2 + 1);
            ppCVar3 = &pCVar13->dtor;
            pCVar13 = pCVar10;
          } while (*(char *)ppCVar3 != '\0');
          pcVar11 = (char *)((int)&pCVar10[-1].handleInput + 3);
          do {
            cVar1 = *unaff_EBX;
            *pcVar11 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = unaff_EBX[1];
            unaff_EBX = unaff_EBX + 2;
            pcVar11[1] = cVar1;
            pcVar11 = pcVar11 + 2;
          } while (cVar1 != '\0');
          unaff_EBX = &DAT_00643d08;
          pSVar6 = core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_0059c220
                             ((CDeformableModel *)&DAT_00643d07,iVar7);
          iVar8 = -1;
          pCVar13 = param_5;
          do {
            pCVar10 = pCVar13;
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            pCVar10 = (CStrList_vtable *)((int)pCVar13 + (uint)bVar12 * -2 + 1);
            ppCVar3 = &pCVar13->dtor;
            pCVar13 = pCVar10;
          } while (*(char *)ppCVar3 != '\0');
          pcVar11 = (char *)((int)&pCVar10[-1].handleInput + 3);
          do {
            cVar1 = pSVar6->part_name[0];
            *pcVar11 = cVar1;
            in_stack_ffffc8c0 = param_5;
            if (cVar1 == '\0') break;
            cVar1 = pSVar6->part_name[1];
            pSVar6 = (SPart *)(pSVar6->part_name + 2);
            pcVar11[1] = cVar1;
            pcVar11 = pcVar11 + 2;
          } while (cVar1 != '\0');
        }
        iVar7 = iVar7 + 1;
      } while( true );
    }
    break;
  case 0x20:
    iVar7 = 0;
    iVar8 = 0;
    core_script_cpp_FUN_00567630();
    while (iVar7 < *(int *)(g_CScriptPtr->padding_0x18 + 0x10)) {
      switch(*(uint *)(iVar8 + 0x100 + *(int *)(g_CScriptPtr->padding_0x18 + 0x14))) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + 0x114;
        break;
      default:
        core_script_cpp_CScript_removeEventXRef_FUN_005676e0();
      }
    }
    iVar7 = core_script_cpp_FUN_005677a0();
    if (iVar7 != 0) {
      return 1;
    }
  }
  return 0;
}
