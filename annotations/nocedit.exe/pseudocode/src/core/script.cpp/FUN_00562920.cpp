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
          (uint param_1,uint param_2,CCharacter *unaff_EBX,uint param_4,
          char *param_5,uint param_6,CCharacter *param_7,uint param_8,char *param_9,
          uint param_10,int param_11)

{
  float *class_name;
  char cVar1;
  uint uVar2;
  bool bVar3;
  undefined3 extraout_var;
  char *pcVar4;
  int iVar5;
  SPart *pSVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  int iVar8;
  char *pcVar9;
  byte bVar10;
  CDeformableModel *unaff_retaddr;
  ulonglong in_stack_ffffc8ac;
  float fVar11;
  int in_stack_ffffc8b4;
  char **in_stack_ffffc8b8;
  CStrList_vtable *in_stack_ffffc8bc;
  CStrList_vtable *in_stack_ffffc8c0;
  CStrList_vtable *in_stack_ffffc8c4;
  CStrList_vtable *in_stack_ffffc8c8;
  CStrList_vtable *in_stack_ffffc8cc;
  uint in_stack_ffffc8d0;
  uint in_stack_ffffc8d4;
  char *in_stack_ffffc8d8;
  uint in_stack_ffffc8dc;
  uint in_stack_ffffc8e0;
  uint in_stack_ffffc8e4;
  uint in_stack_ffffc8e8;
  uint in_stack_ffffc8ec;
  uint in_stack_ffffc8f0;
  uint in_stack_ffffc8f4;
  uint in_stack_ffffc8f8;
  byte auStack_33a8 [16];
  byte auStack_3398 [924];
  byte auStack_2ffc [8];
  byte auStack_2ff4 [8];
  byte auStack_2fec [936];
  byte auStack_2c44 [16];
  byte auStack_2c34 [8];
  byte auStack_2c2c [900];
  byte auStack_28a8 [8];
  byte auStack_28a0 [920];
  byte auStack_2508 [20];
  byte auStack_24f4 [8];
  byte auStack_24ec [8];
  byte auStack_24e4 [8];
  byte auStack_24dc [892];
  byte auStack_2160 [20];
  byte auStack_214c [8];
  byte auStack_2144 [8];
  byte auStack_213c [8];
  byte auStack_2134 [8];
  byte auStack_212c [8];
  byte auStack_2124 [884];
  byte auStack_1db0 [8];
  byte auStack_1da8 [920];
  byte auStack_1a10 [20];
  byte auStack_19fc [8];
  byte auStack_19f4 [8];
  byte auStack_19ec [8];
  byte auStack_19e4 [896];
  byte auStack_1664 [8];
  byte auStack_165c [8];
  byte auStack_1654 [8];
  byte auStack_164c [912];
  byte auStack_12bc [8];
  byte auStack_12b4 [924];
  byte auStack_f18 [20];
  byte auStack_f04 [8];
  byte auStack_efc [8];
  byte auStack_ef4 [904];
  byte auStack_b6c [8];
  byte auStack_b64 [920];
  char local_7cc [4];
  char acStack_7c8 [4];
  char acStack_7c4 [4];
  char acStack_7c0 [4];
  char acStack_7bc [4];
  char acStack_7b8 [4];
  char acStack_7b4 [8];
  char acStack_7ac [4];
  char acStack_7a8 [4];
  char acStack_7a4 [4];
  char acStack_7a0 [12];
  char acStack_794 [248];
  char acStack_69c [8];
  char acStack_694 [296];
  char acStack_56c [4];
  char acStack_568 [252];
  char acStack_46c [4];
  char acStack_468 [252];
  char acStack_36c [8];
  char acStack_364 [248];
  char acStack_26c [4];
  char acStack_268 [284];
  char acStack_14c [4];
  char acStack_148 [176];
  byte auStack_98 [28];
  uint auStack_7c [20];
  byte local_2c [4];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar10 = 0;
  crt_stdio_c_sprintf_FUN_005fdbd0
            (local_7cc,"Enter %s",&(param_7->model).transformed_vertices[0x16].z);
  switch(param_6) {
  case 0:
    iVar7 = crt_stdio_c_sscanf_FUN_0060013c(param_5,"%d",local_2c);
    bVar3 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                      (g_CEditorToolsPtr,acStack_7c4,&local_28,false,0,0,iVar7 == 1);
    if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar3) != 0) {
      crt_stdio_c_sprintf_FUN_005fdbd0(param_5,"%d");
      return 1;
    }
    break;
  case 1:
    iVar7 = crt_stdio_c_sscanf_FUN_0060013c(param_5,"%f",&stack0xffffc8ac);
    iVar7 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                      (g_CEditorToolsPtr,acStack_7c4,(float *)&stack0xffffc8b0,false,0.0,0.0,
                       iVar7 == 1);
    if (iVar7 != 0) {
      crt_stdio_c_sprintf_FUN_005fdbd0(param_5,"%g");
      return 1;
    }
    break;
  case 2:
  case 0x1f:
    iVar7 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,acStack_7c8,param_5,100,1);
    if (iVar7 != 0) {
      return 1;
    }
    break;
  case 3:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)(auStack_3398 + 0x398));
    class_name = &(param_7->model).transformed_vertices[0xe].y;
    iVar7 = 0;
    for (iVar8 = 0; iVar8 < (int)g_CDemonSetPtr->actor_list_ptr; iVar8 = iVar8 + 1) {
      if (((*(char *)&(param_7->model).transformed_vertices[0xe].y == '\0') ||
          (iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0
                             (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar7),
                              (char *)class_name), iVar5 != 0)) &&
         (iVar5 = core_actor_cpp_isOfClass_FUN_0040c6d0
                            (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar7),
                             "CHeroPlaceHolder"), iVar5 == 0)) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)(auStack_2ffc + 4),
                   *(char **)(g_CDemonSetPtr->actor_list_data + iVar7));
      }
      iVar7 = iVar7 + 4;
    }
    if ((*(char *)&(param_7->model).transformed_vertices[0xe].y == '\0') ||
       (iVar7 = core_actor_cpp_matchesClassName_FUN_0040c740(&g_CHeroClassInfo,(char *)class_name),
       iVar7 != 0)) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_2ffc,"$");
    }
    shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)(auStack_2ffc + 4));
    iVar7 = shape_edittool_cpp_CStrList_findString_FUN_004a3030((CStrList *)auStack_2ff4,param_5);
    iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)(auStack_2ff4 + 4),acStack_7b8,iVar7,(int)in_stack_ffffc8b8);
    if (iVar7 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_2fec,0,(uint)in_stack_ffffc8c0,(uint)in_stack_ffffc8c4,
                 (uint)in_stack_ffffc8c8,(uint)in_stack_ffffc8cc,in_stack_ffffc8d0);
      return 0;
    }
    pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)auStack_2fec,iVar7);
    do {
      cVar1 = *pcVar4;
      *param_5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      param_5[1] = cVar1;
      param_5 = param_5 + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)(auStack_2fec + 4),0,(uint)in_stack_ffffc8c4,(uint)in_stack_ffffc8c8,
               (uint)in_stack_ffffc8cc,in_stack_ffffc8d0,in_stack_ffffc8d4);
    return 1;
  case 4:
    iVar7 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,acStack_7c8,param_5,4,1);
    if (iVar7 != 0) {
      return 1;
    }
    break;
  case 5:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)(auStack_2c2c + 0x37c));
    core_script_cpp_CScript_CallLoadingScriptFile_FUN_00566fa0();
    iVar7 = shape_edittool_cpp_CStrList_findString_FUN_004a3030((CStrList *)auStack_28a8,param_5);
    iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)(auStack_28a8 + 4),acStack_7bc,iVar7,in_stack_ffffc8b4);
    if (iVar7 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_28a0,0,(uint)in_stack_ffffc8bc,(uint)in_stack_ffffc8c0,
                 (uint)in_stack_ffffc8c4,(uint)in_stack_ffffc8c8,(uint)in_stack_ffffc8cc);
      return 0;
    }
    pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)auStack_28a0,iVar7);
    do {
      cVar1 = *pcVar4;
      *param_5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      param_5[1] = cVar1;
      param_5 = param_5 + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)(auStack_28a0 + 4),0,(uint)in_stack_ffffc8c0,(uint)in_stack_ffffc8c4,
               (uint)in_stack_ffffc8c8,(uint)in_stack_ffffc8cc,in_stack_ffffc8d0);
    return 1;
  case 6:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)(auStack_ef4 + 900));
    iVar8 = 0;
    for (iVar7 = 0; fVar11 = (float)((ulonglong)in_stack_ffffc8ac >> 0x20),
        iVar7 < g_CDemonSetPtr->camera_count; iVar7 = iVar7 + 1) {
      pcVar4 = g_CDemonSetPtr->cameras[0].name + iVar8;
      in_stack_ffffc8ac = CONCAT44 /* combine 2-byte values */(fVar11,pcVar4);
      iVar8 = iVar8 + 0x1a4;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_b6c,pcVar4);
    }
    iVar7 = shape_edittool_cpp_CStrList_findString_FUN_004a3030((CStrList *)auStack_b6c,param_5);
    iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)(auStack_b6c + 4),acStack_7c0,iVar7,(int)fVar11);
    if (iVar7 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_b64,0,(uint)in_stack_ffffc8b8,(uint)in_stack_ffffc8bc,
                 (uint)in_stack_ffffc8c0,(uint)in_stack_ffffc8c4,(uint)in_stack_ffffc8c8);
      return 0;
    }
    pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)auStack_b64,iVar7);
    do {
      cVar1 = *pcVar4;
      *param_5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      param_5[1] = cVar1;
      param_5 = param_5 + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)(auStack_b64 + 4),0,(uint)in_stack_ffffc8bc,(uint)in_stack_ffffc8c0,
               (uint)in_stack_ffffc8c4,(uint)in_stack_ffffc8c8,(uint)in_stack_ffffc8cc);
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
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_2508);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_2508 + 4),"walk");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_2508 + 8),"backup");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_2508 + 0xc),"run");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_2508 + 0x10),"fire");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_24f4,"useItem");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_24f4 + 4),"light");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_24ec,"draw");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_24ec + 4),"jump");
    iVar7 = shape_edittool_cpp_CStrList_findString_FUN_004a3030((CStrList *)auStack_24e4,param_5);
    iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)(auStack_24e4 + 4),acStack_7a0,iVar7,in_stack_ffffc8d0);
    if (iVar7 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_24dc,0,(uint)in_stack_ffffc8d8,in_stack_ffffc8dc,
                 in_stack_ffffc8e0,in_stack_ffffc8e4,in_stack_ffffc8e8);
      return 0;
    }
    pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)auStack_24dc,iVar7);
    do {
      cVar1 = *pcVar4;
      *param_5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      param_5[1] = cVar1;
      param_5 = param_5 + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)(auStack_24dc + 4),0,in_stack_ffffc8dc,in_stack_ffffc8e0,
               in_stack_ffffc8e4,in_stack_ffffc8e8,in_stack_ffffc8ec);
    return 1;
  case 9:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_2160);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_2160 + 4),"generic");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_2160 + 8),"drown");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_2160 + 0xc),"fall");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)(auStack_2160 + 0x10),"explode");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_214c,"shatter");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)(auStack_214c + 4),"fallApart");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_2144,"electrocute");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_2144 + 4),"chopped");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_213c,"crushed");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_213c + 4),"impale");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_2134,"fire");
    iVar7 = shape_edittool_cpp_CStrList_findString_FUN_004a3030
                      ((CStrList *)(auStack_2134 + 4),param_5);
    iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)auStack_212c,acStack_794,iVar7,in_stack_ffffc8dc);
    if (iVar7 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)(auStack_212c + 4),0,in_stack_ffffc8e4,in_stack_ffffc8e8,
                 in_stack_ffffc8ec,in_stack_ffffc8f0,in_stack_ffffc8f4);
      return 0;
    }
    pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                       ((CStrList *)(auStack_212c + 4),iVar7);
    do {
      cVar1 = *pcVar4;
      *param_5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      param_5[1] = cVar1;
      param_5 = param_5 + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)auStack_2124,0,in_stack_ffffc8e8,in_stack_ffffc8ec,in_stack_ffffc8f0,
               in_stack_ffffc8f4,in_stack_ffffc8f8);
    return 1;
  case 10:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_1a10);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_1a10 + 4),"generic");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_1a10 + 8),"bullet");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_1a10 + 0xc),"fire");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_1a10 + 0x10),"blade")
    ;
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_19fc,"stake");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_19fc + 4),"gas");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_19f4,"electrocute");
    iVar7 = shape_edittool_cpp_CStrList_findString_FUN_004a3030
                      ((CStrList *)(auStack_19f4 + 4),param_5);
    iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)auStack_19ec,acStack_7a4,iVar7,(int)in_stack_ffffc8cc);
    if (iVar7 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)(auStack_19ec + 4),0,in_stack_ffffc8d4,(uint)in_stack_ffffc8d8,
                 in_stack_ffffc8dc,in_stack_ffffc8e0,in_stack_ffffc8e4);
      return 0;
    }
    pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                       ((CStrList *)(auStack_19ec + 4),iVar7);
    do {
      cVar1 = *pcVar4;
      *param_5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      param_5[1] = cVar1;
      param_5 = param_5 + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)auStack_19e4,0,(uint)in_stack_ffffc8d8,in_stack_ffffc8dc,
               in_stack_ffffc8e0,in_stack_ffffc8e4,in_stack_ffffc8e8);
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
                      (g_CEditorToolsPtr,acStack_7c8,"sound","*.wav",
                       SUB41 /* extract 2-byte value */(param_5,0));
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
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)(auStack_19e4 + 0x37c));
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_1664,"true");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_1664 + 4),"false");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_165c,"bottom");
    iVar7 = shape_edittool_cpp_CStrList_findString_FUN_004a3030
                      ((CStrList *)(auStack_165c + 4),param_5);
    iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)auStack_1654,acStack_7b4,iVar7,(int)in_stack_ffffc8bc);
    if (iVar7 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)(auStack_1654 + 4),0,(uint)in_stack_ffffc8c4,(uint)in_stack_ffffc8c8,
                 (uint)in_stack_ffffc8cc,in_stack_ffffc8d0,in_stack_ffffc8d4);
      return 0;
    }
    pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                       ((CStrList *)(auStack_1654 + 4),iVar7);
    do {
      cVar1 = *pcVar4;
      *param_5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      param_5[1] = cVar1;
      param_5 = param_5 + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)auStack_164c,0,(uint)in_stack_ffffc8c8,(uint)in_stack_ffffc8cc,
               in_stack_ffffc8d0,in_stack_ffffc8d4,(uint)in_stack_ffffc8d8);
    return 1;
  case 0x12:
    crt_string_c_splitpath_FUN_005ff178
              ((char *)&(param_7->model).transformed_vertices[0xe].y,(char *)0x0,acStack_36c,
               acStack_46c,acStack_26c);
    crt_file_c_makepath_FUN_005febfc(acStack_56c,(char *)0x0,(char *)0x0,acStack_468,acStack_268);
    iVar7 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,acStack_7c0,acStack_364,acStack_568,SUB41 /* extract 2-byte value */(param_5,0));
    if (iVar7 != 0) {
      return 1;
    }
    break;
  case 0x13:
    iVar7 = 0;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)(auStack_164c + 0x38c));
    for (iVar8 = 0; fVar11 = (float)((ulonglong)in_stack_ffffc8ac >> 0x20),
        iVar8 < g_CDemonSetPtr->light_count; iVar8 = iVar8 + 1) {
      if (*(int *)(g_CDemonSetPtr->lights[0].name + iVar7 + -4) == 0) {
        pcVar4 = g_CDemonSetPtr->lights[0].name + iVar7;
        in_stack_ffffc8ac = CONCAT44 /* combine 2-byte values */(fVar11,pcVar4);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_12bc,pcVar4);
      }
      iVar7 = iVar7 + 0x1898;
    }
    iVar7 = shape_edittool_cpp_CStrList_findString_FUN_004a3030((CStrList *)auStack_12bc,param_5);
    iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)(auStack_12bc + 4),acStack_7c0,iVar7,(int)fVar11);
    if (iVar7 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_12b4,0,(uint)in_stack_ffffc8b8,(uint)in_stack_ffffc8bc,
                 (uint)in_stack_ffffc8c0,(uint)in_stack_ffffc8c4,(uint)in_stack_ffffc8c8);
      return 0;
    }
    pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)auStack_12b4,iVar7);
    do {
      cVar1 = *pcVar4;
      *param_5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      param_5[1] = cVar1;
      param_5 = param_5 + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)(auStack_12b4 + 4),0,(uint)in_stack_ffffc8bc,(uint)in_stack_ffffc8c0,
               (uint)in_stack_ffffc8c4,(uint)in_stack_ffffc8c8,(uint)in_stack_ffffc8cc);
    return 1;
  case 0x14:
    iVar7 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,acStack_7c8,param_5,4,1);
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
      local_24 = iVar7;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xffffc8b4);
      local_1c = -1;
      if (0 < *(int *)(iVar7 + 0x964)) {
        local_18 = iVar7 + 4;
        pcVar4 = (char *)(iVar7 + 0x968);
        do {
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_694,"%s\t%s");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xffffc8b0,acStack_69c);
          iVar7 = crt_string_c_stricmp_FUN_005fe7f0(pcVar4,param_5);
          if (iVar7 == 0) {
            local_1c = iVar8;
          }
          pcVar4 = pcVar4 + 0x54c;
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(local_20 + 0x964));
      }
      pcVar4 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                 ((CPickList *)&stack0xffffc8b8,acStack_7c0,local_1c,0);
      if (-1 < (int)pcVar4) {
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  ((CStrList *)&stack0xffffc8bc,(int)param_5,pcVar4,0);
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xffffc8c0,0,(uint)in_stack_ffffc8bc,(uint)in_stack_ffffc8c0,
                   (uint)in_stack_ffffc8c4,(uint)in_stack_ffffc8c8,(uint)in_stack_ffffc8cc);
        return 1;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xffffc8bc,0,(uint)in_stack_ffffc8b8,(uint)in_stack_ffffc8bc,
                 (uint)in_stack_ffffc8c0,(uint)in_stack_ffffc8c4,(uint)in_stack_ffffc8c8);
      return 0;
    }
    break;
  case 0x18:
    iVar7 = core_script_cpp_FUN_00562860();
    if (iVar7 != 0) {
      iVar8 = 0;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)(auStack_2124 + 0x370));
      if (0 < *(int *)(iVar7 + 0x964)) {
        pcVar4 = (char *)(iVar7 + 4);
        do {
          iVar8 = iVar8 + 1;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_1db0,pcVar4);
          pcVar4 = pcVar4 + 0x1e;
        } while (iVar8 < *(int *)(iVar7 + 0x964));
      }
      iVar7 = shape_edittool_cpp_CStrList_findString_FUN_004a3030((CStrList *)auStack_1db0,param_5);
      iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)(auStack_1db0 + 4),acStack_7bc,iVar7,in_stack_ffffc8b4);
      if (iVar7 < 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)auStack_1da8,0,(uint)in_stack_ffffc8bc,(uint)in_stack_ffffc8c0,
                   (uint)in_stack_ffffc8c4,(uint)in_stack_ffffc8c8,(uint)in_stack_ffffc8cc);
        return 0;
      }
      pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)auStack_1da8,iVar7);
      do {
        cVar1 = *pcVar4;
        *param_5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        param_5[1] = cVar1;
        param_5 = param_5 + 2;
      } while (cVar1 != '\0');
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)(auStack_1da8 + 4),0,(uint)in_stack_ffffc8c0,(uint)in_stack_ffffc8c4,
                 (uint)in_stack_ffffc8c8,(uint)in_stack_ffffc8cc,in_stack_ffffc8d0);
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
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_33a8);
    for (iVar8 = 0; iVar8 < *(int *)(g_CScriptPtr->padding_0x18 + 4); iVar8 = iVar8 + 1) {
      iVar5 = *(int *)(g_CScriptPtr->padding_0x18 + 8) + iVar7;
      crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_031099e8,"%s\t%s\t%s",iVar5,iVar5 + 0x78);
      iVar7 = iVar7 + 0x226;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_33a8 + 8),&DAT_031099e8);
    }
    iVar7 = shape_edittool_cpp_CStrList_findByFirstField_FUN_004a3070
                      ((CStrList *)(auStack_33a8 + 4),param_5);
    if ((iVar7 < 0) &&
       (iVar7 = shape_edittool_cpp_CStrList_findByFirstField_FUN_004a3070
                          ((CStrList *)(auStack_33a8 + 8),&DAT_0310a9e8), -1 < iVar7)) {
      iVar7 = iVar7 + 1;
    }
    iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)(auStack_33a8 + 0xc),acStack_7bc,iVar7,0);
    if (iVar7 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_3398,0,(uint)in_stack_ffffc8bc,(uint)in_stack_ffffc8c0,
                 (uint)in_stack_ffffc8c4,(uint)in_stack_ffffc8c8,(uint)in_stack_ffffc8cc);
      return 0;
    }
    pcVar4 = (char *)(*(int *)(g_CScriptPtr->padding_0x18 + 8) + iVar7 * 0x226);
    do {
      cVar1 = *pcVar4;
      *param_5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      param_5[1] = cVar1;
      param_5 = param_5 + 2;
    } while (cVar1 != '\0');
    pcVar9 = &DAT_0310a9e8;
    pcVar4 = (char *)(*(int *)(g_CScriptPtr->padding_0x18 + 8) + iVar7 * 0x226);
    do {
      cVar1 = *pcVar4;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)auStack_3398,0,(uint)in_stack_ffffc8bc,(uint)in_stack_ffffc8c0,
               (uint)in_stack_ffffc8c4,(uint)in_stack_ffffc8c8,(uint)in_stack_ffffc8cc);
    return 1;
  case 0x1a:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_f18);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_f18 + 4),"stand");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_f18 + 8),"follow");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_f18 + 0xc),"kill");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_f18 + 0x10),"guard");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_f04,"suspend");
    iVar7 = shape_edittool_cpp_CStrList_findString_FUN_004a3030
                      ((CStrList *)(auStack_f04 + 4),param_5);
    iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)auStack_efc,acStack_7ac,iVar7,(int)in_stack_ffffc8c4);
    if (iVar7 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)(auStack_efc + 4),0,(uint)in_stack_ffffc8cc,in_stack_ffffc8d0,
                 in_stack_ffffc8d4,(uint)in_stack_ffffc8d8,in_stack_ffffc8dc);
      return 0;
    }
    pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                       ((CStrList *)(auStack_efc + 4),iVar7);
    do {
      cVar1 = *pcVar4;
      *param_5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      param_5[1] = cVar1;
      param_5 = param_5 + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)auStack_ef4,0,in_stack_ffffc8d0,in_stack_ffffc8d4,
               (uint)in_stack_ffffc8d8,in_stack_ffffc8dc,in_stack_ffffc8e0);
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
        crt_memory_c_memset_FUN_005fde40(auStack_98,0,0x78);
      }
      core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                ((CDeformableModelInstance *)(iVar7 + 0x158));
      iVar7 = -1;
      while( true ) {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_2c44);
        for (iVar8 = 0; iVar5 = core_charactr_cpp_CCharacter_FUN_0042f9c0(unaff_EBX), iVar8 < iVar5;
            iVar8 = iVar8 + 1) {
          core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_0059c220(unaff_retaddr,iVar8);
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_14c,"%s\t%s");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_2c34,acStack_148);
        }
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_2c44 + 8),"Done")
        ;
        iVar7 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          ((CPickList *)(auStack_2c44 + 0xc),acStack_7a8,iVar7,0);
        if (iVar7 < 0) {
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    ((CPickList *)auStack_2c34,0,in_stack_ffffc8d0,in_stack_ffffc8d4,
                     (uint)in_stack_ffffc8d8,in_stack_ffffc8dc,in_stack_ffffc8e0);
          return 0;
        }
        iVar8 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)auStack_2c34);
        if (iVar7 == iVar8 + -1) break;
        in_stack_ffffc8d0 = 0;
        auStack_7c[iVar7] = (uint)(auStack_7c[iVar7] == 0);
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)(auStack_2c34 + 4),0,in_stack_ffffc8d4,(uint)in_stack_ffffc8d8,
                   in_stack_ffffc8dc,in_stack_ffffc8e0,in_stack_ffffc8e4);
      }
      iVar7 = 0;
      *param_5 = '\0';
      do {
        iVar8 = core_charactr_cpp_CCharacter_FUN_0042f9c0(param_7);
        if (iVar8 <= iVar7) {
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    ((CPickList *)auStack_2c2c,0,(uint)in_stack_ffffc8d8,in_stack_ffffc8dc,
                     in_stack_ffffc8e0,in_stack_ffffc8e4,in_stack_ffffc8e8);
          return 1;
        }
        if (*(int *)((int)auStack_7c + param_11 + 4) != 0) {
          iVar8 = -1;
          pcVar4 = param_5;
          do {
            pcVar9 = pcVar4;
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            pcVar9 = pcVar4 + (uint)bVar10 * -2 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar9;
          } while (cVar1 != '\0');
          pcVar9 = pcVar9 + -1;
          do {
            cVar1 = *param_9;
            *pcVar9 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = param_9[1];
            param_9 = param_9 + 2;
            pcVar9[1] = cVar1;
            pcVar9 = pcVar9 + 2;
          } while (cVar1 != '\0');
          param_9 = &DAT_00643d08;
          pSVar6 = core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_0059c220
                             ((CDeformableModel *)&DAT_00643d07,iVar7);
          iVar8 = -1;
          pcVar4 = param_5;
          do {
            pcVar9 = pcVar4;
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            pcVar9 = pcVar4 + (uint)bVar10 * -2 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar9;
          } while (cVar1 != '\0');
          pcVar9 = pcVar9 + -1;
          do {
            cVar1 = pSVar6->part_name[0];
            *pcVar9 = cVar1;
            in_stack_ffffc8d8 = param_5;
            if (cVar1 == '\0') break;
            cVar1 = pSVar6->part_name[1];
            pSVar6 = (SPart *)(pSVar6->part_name + 2);
            pcVar9[1] = cVar1;
            pcVar9 = pcVar9 + 2;
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
