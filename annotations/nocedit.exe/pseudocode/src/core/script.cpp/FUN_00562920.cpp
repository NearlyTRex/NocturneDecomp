// Name: core_script.cpp_FUN_00562920
// Address: 00562920
// Address Range: [[00562920, 00564006]]
// Convention: unknown
// Signature: undefined4 core_script_cpp_FUN_00562920(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00562920(uint param_1, uint param_2,
   uint param_3, uint param_4) */

uint core_script_cpp_FUN_00562920(void)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  SPart *pSVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  byte bVar9;
  char *in_stack_00000004;
  uint in_stack_00000008;
  int in_stack_0000000c;
  float in_stack_ffffc8a8;
  uint in_stack_ffffc8ac;
  uint in_stack_ffffc8b0;
  char **in_stack_ffffc8b4;
  CStrList_vtable *in_stack_ffffc8b8;
  CPickList local_33ac;
  CPickList local_3004;
  CPickList local_2c5c;
  CPickList local_28b4;
  CPickList local_250c;
  CPickList local_2164;
  CPickList local_1dbc;
  CPickList local_1a14;
  CPickList local_166c;
  CPickList local_12c4;
  CPickList local_f1c;
  CPickList local_b74;
  char local_7cc [300];
  char local_6a0 [300];
  char local_574 [260];
  char local_470 [256];
  char local_370 [256];
  char local_270 [256];
  char local_170 [200];
  uint local_a8 [30];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  CCharacter *local_20;
  char *local_1c;
  char *local_18;
  int local_14;
  
  bVar9 = 0;
  crt_stdio_c_sprintf_FUN_005fdbd0(local_7cc,"Enter %s");
  switch(in_stack_00000008) {
  case 0:
    iVar6 = crt_stdio_c_sscanf_FUN_0060013c(in_stack_00000004,"%d");
    iVar6 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                      (g_CEditorToolsPtr,local_7cc,&local_30,0,0,0,(uint)(iVar6 == 1));
    if (iVar6 != 0) {
      crt_stdio_c_sprintf_FUN_005fdbd0(in_stack_00000004,"%d");
      return 1;
    }
    break;
  case 1:
    iVar6 = crt_stdio_c_sscanf_FUN_0060013c(in_stack_00000004,"%f");
    iVar6 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                      (g_CEditorToolsPtr,local_7cc,(float *)&stack0xffffc8a8,0,0.0,0.0,
                       (uint)(iVar6 == 1));
    if (iVar6 != 0) {
      crt_stdio_c_sprintf_FUN_005fdbd0(in_stack_00000004,"%g",(double)in_stack_ffffc8a8);
      return 1;
    }
    break;
  case 2:
  case 0x1f:
    iVar6 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,local_7cc,in_stack_00000004,100,1);
    if (iVar6 != 0) {
      return 1;
    }
    break;
  case 3:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_3004);
    local_18 = (char *)(in_stack_0000000c + 0x25c);
    iVar6 = 0;
    for (iVar7 = 0; iVar7 < (int)g_CDemonSetPtr->actor_list_ptr; iVar7 = iVar7 + 1) {
      if (((*(char *)(in_stack_0000000c + 0x25c) == '\0') ||
          (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0
                             (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar6),local_18),
          iVar4 != 0)) &&
         (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0
                            (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar6),
                             "CHeroPlaceHolder"), iVar4 == 0)) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  (&local_3004.base,*(char **)(g_CDemonSetPtr->actor_list_data + iVar6));
      }
      iVar6 = iVar6 + 4;
    }
    if ((*(char *)(in_stack_0000000c + 0x25c) == '\0') ||
       (iVar6 = core_actor_cpp_matchesClassName_FUN_0040c740(&g_CHeroClassInfo,local_18), iVar6 != 0
       )) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3004.base,"$");
    }
    shape_edittool_cpp_CStrList_sort_FUN_004a2ec0(&local_3004.base);
    iVar7 = 0;
    iVar6 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&local_3004.base,in_stack_00000004);
    iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_3004,local_7cc,iVar6,iVar7);
    if (iVar6 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_3004,0,(uint)in_stack_ffffc8a8,in_stack_ffffc8ac,in_stack_ffffc8b0,
                 (uint)in_stack_ffffc8b4,(uint)in_stack_ffffc8b8);
      return 0;
    }
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_3004.base,iVar6);
    do {
      cVar1 = *pcVar3;
      *in_stack_00000004 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      in_stack_00000004[1] = cVar1;
      in_stack_00000004 = in_stack_00000004 + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_3004,0,(uint)in_stack_ffffc8a8,in_stack_ffffc8ac,in_stack_ffffc8b0,
               (uint)in_stack_ffffc8b4,(uint)in_stack_ffffc8b8);
    return 1;
  case 4:
    iVar6 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,local_7cc,in_stack_00000004,4,1);
    if (iVar6 != 0) {
      return 1;
    }
    break;
  case 5:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_28b4);
    core_script_cpp_CScript_CallLoadingScriptFile_FUN_00566fa0();
    iVar7 = 0;
    iVar6 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&local_28b4.base,in_stack_00000004);
    iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_28b4,local_7cc,iVar6,iVar7);
    if (iVar6 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_28b4,0,(uint)in_stack_ffffc8a8,in_stack_ffffc8ac,in_stack_ffffc8b0,
                 (uint)in_stack_ffffc8b4,(uint)in_stack_ffffc8b8);
      return 0;
    }
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_28b4.base,iVar6);
    do {
      cVar1 = *pcVar3;
      *in_stack_00000004 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      in_stack_00000004[1] = cVar1;
      in_stack_00000004 = in_stack_00000004 + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_28b4,0,(uint)in_stack_ffffc8a8,in_stack_ffffc8ac,in_stack_ffffc8b0,
               (uint)in_stack_ffffc8b4,(uint)in_stack_ffffc8b8);
    return 1;
  case 6:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_b74);
    iVar7 = 0;
    for (iVar6 = 0; iVar6 < g_CDemonSetPtr->camera_count; iVar6 = iVar6 + 1) {
      pcVar3 = g_CDemonSetPtr->cameras[0].name + iVar7;
      iVar7 = iVar7 + 0x1a4;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_b74.base,pcVar3);
    }
    iVar7 = 0;
    iVar6 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&local_b74.base,in_stack_00000004);
    iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_b74,local_7cc,iVar6,iVar7);
    if (iVar6 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_b74,0,(uint)in_stack_ffffc8a8,in_stack_ffffc8ac,in_stack_ffffc8b0,
                 (uint)in_stack_ffffc8b4,(uint)in_stack_ffffc8b8);
      return 0;
    }
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_b74.base,iVar6);
    do {
      cVar1 = *pcVar3;
      *in_stack_00000004 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      in_stack_00000004[1] = cVar1;
      in_stack_00000004 = in_stack_00000004 + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_b74,0,(uint)in_stack_ffffc8a8,in_stack_ffffc8ac,in_stack_ffffc8b0,
               (uint)in_stack_ffffc8b4,(uint)in_stack_ffffc8b8);
    return 1;
  case 7:
    iVar6 = 0;
    core_script_cpp_FUN_00567630();
    iVar7 = 0;
    while (iVar6 < *(int *)(g_CScriptPtr->unk4 + 0x10)) {
      uVar2 = *(uint *)(iVar7 + 0x100 + *(int *)(g_CScriptPtr->unk4 + 0x14));
      if ((uVar2 < 10) || ((10 < uVar2 && (uVar2 != 0xb)))) {
        core_script_cpp_CScript_removeEventXRef_FUN_005676e0();
      }
      else {
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x114;
      }
    }
    iVar6 = core_script_cpp_FUN_005677a0();
    if (iVar6 != 0) {
      return 1;
    }
    break;
  case 8:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_250c);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_250c.base,"walk");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_250c.base,"backup");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_250c.base,"run");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_250c.base,"fire");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_250c.base,"useItem");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_250c.base,"light");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_250c.base,"draw");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_250c.base,"jump");
    iVar7 = 0;
    iVar6 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&local_250c.base,in_stack_00000004);
    iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_250c,local_7cc,iVar6,iVar7);
    if (iVar6 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_250c,0,(uint)in_stack_ffffc8a8,in_stack_ffffc8ac,in_stack_ffffc8b0,
                 (uint)in_stack_ffffc8b4,(uint)in_stack_ffffc8b8);
      return 0;
    }
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_250c.base,iVar6);
    do {
      cVar1 = *pcVar3;
      *in_stack_00000004 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      in_stack_00000004[1] = cVar1;
      in_stack_00000004 = in_stack_00000004 + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_250c,0,(uint)in_stack_ffffc8a8,in_stack_ffffc8ac,in_stack_ffffc8b0,
               (uint)in_stack_ffffc8b4,(uint)in_stack_ffffc8b8);
    return 1;
  case 9:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_2164);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_2164.base,"generic");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_2164.base,"drown");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_2164.base,"fall");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_2164.base,"explode");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_2164.base,"shatter");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_2164.base,"fallApart");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_2164.base,"electrocute");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_2164.base,"chopped");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_2164.base,"crushed");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_2164.base,"impale");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_2164.base,"fire");
    iVar7 = 0;
    iVar6 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&local_2164.base,in_stack_00000004);
    iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_2164,local_7cc,iVar6,iVar7);
    if (iVar6 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_2164,0,(uint)in_stack_ffffc8a8,in_stack_ffffc8ac,in_stack_ffffc8b0,
                 (uint)in_stack_ffffc8b4,(uint)in_stack_ffffc8b8);
      return 0;
    }
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_2164.base,iVar6);
    do {
      cVar1 = *pcVar3;
      *in_stack_00000004 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      in_stack_00000004[1] = cVar1;
      in_stack_00000004 = in_stack_00000004 + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_2164,0,(uint)in_stack_ffffc8a8,in_stack_ffffc8ac,in_stack_ffffc8b0,
               (uint)in_stack_ffffc8b4,(uint)in_stack_ffffc8b8);
    return 1;
  case 10:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_1a14);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1a14.base,"generic");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1a14.base,"bullet");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1a14.base,"fire");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1a14.base,"blade");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1a14.base,"stake");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1a14.base,"gas");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1a14.base,"electrocute");
    iVar7 = 0;
    iVar6 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&local_1a14.base,in_stack_00000004);
    iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_1a14,local_7cc,iVar6,iVar7);
    if (iVar6 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_1a14,0,(uint)in_stack_ffffc8a8,in_stack_ffffc8ac,in_stack_ffffc8b0,
                 (uint)in_stack_ffffc8b4,(uint)in_stack_ffffc8b8);
      return 0;
    }
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_1a14.base,iVar6);
    do {
      cVar1 = *pcVar3;
      *in_stack_00000004 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      in_stack_00000004[1] = cVar1;
      in_stack_00000004 = in_stack_00000004 + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_1a14,0,(uint)in_stack_ffffc8a8,in_stack_ffffc8ac,in_stack_ffffc8b0,
               (uint)in_stack_ffffc8b4,(uint)in_stack_ffffc8b8);
    return 1;
  case 0xb:
  case 0xc:
    iVar6 = 0;
    iVar7 = 0;
    core_script_cpp_FUN_00567630();
    while (iVar6 < *(int *)(g_CScriptPtr->unk4 + 0x10)) {
      uVar2 = *(uint *)(iVar7 + 0x100 + *(int *)(g_CScriptPtr->unk4 + 0x14));
      if ((uVar2 < 8) || ((8 < uVar2 && (uVar2 != 9)))) {
        core_script_cpp_CScript_removeEventXRef_FUN_005676e0();
      }
      else {
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x114;
      }
    }
    iVar6 = core_script_cpp_FUN_005677a0();
    if (iVar6 != 0) {
      return 1;
    }
    break;
  case 0xd:
    iVar6 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,local_7cc,"sound","*.wav",
                       (int)in_stack_00000004);
    if (iVar6 != 0) {
      return 1;
    }
    break;
  case 0xe:
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't pick this yet");
    return 0;
  case 0xf:
  case 0x10:
    iVar7 = 0;
    core_script_cpp_FUN_00567630();
    iVar6 = 0;
    while (iVar6 < *(int *)(g_CScriptPtr->unk4 + 0x10)) {
      uVar2 = *(uint *)(iVar7 + 0x100 + *(int *)(g_CScriptPtr->unk4 + 0x14));
      if ((uVar2 < 5) || ((5 < uVar2 && (uVar2 != 6)))) {
        core_script_cpp_CScript_removeEventXRef_FUN_005676e0();
      }
      else {
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x114;
      }
    }
    iVar6 = core_script_cpp_FUN_005677a0();
    if (iVar6 != 0) {
      return 1;
    }
    break;
  case 0x11:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_166c);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_166c.base,"true");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_166c.base,"false");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_166c.base,"bottom");
    iVar7 = 0;
    iVar6 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&local_166c.base,in_stack_00000004);
    iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_166c,local_7cc,iVar6,iVar7);
    if (iVar6 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_166c,0,(uint)in_stack_ffffc8a8,in_stack_ffffc8ac,in_stack_ffffc8b0,
                 (uint)in_stack_ffffc8b4,(uint)in_stack_ffffc8b8);
      return 0;
    }
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_166c.base,iVar6);
    do {
      cVar1 = *pcVar3;
      *in_stack_00000004 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      in_stack_00000004[1] = cVar1;
      in_stack_00000004 = in_stack_00000004 + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_166c,0,(uint)in_stack_ffffc8a8,in_stack_ffffc8ac,in_stack_ffffc8b0,
               (uint)in_stack_ffffc8b4,(uint)in_stack_ffffc8b8);
    return 1;
  case 0x12:
    crt_string_c_splitpath_FUN_005ff178
              ((char *)(in_stack_0000000c + 0x25c),(char *)0x0,local_370,local_470,local_270);
    crt_file_c_makepath_FUN_005febfc(local_574,(char *)0x0,(char *)0x0,local_470,local_270);
    iVar6 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,local_7cc,local_370,local_574,(int)in_stack_00000004);
    if (iVar6 != 0) {
      return 1;
    }
    break;
  case 0x13:
    iVar6 = 0;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_12c4);
    for (iVar7 = 0; iVar7 < g_CDemonSetPtr->light_count; iVar7 = iVar7 + 1) {
      if (*(int *)(g_CDemonSetPtr->lights[0].name + iVar6 + -4) == 0) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  (&local_12c4.base,g_CDemonSetPtr->lights[0].name + iVar6);
      }
      iVar6 = iVar6 + 0x1898;
    }
    iVar7 = 0;
    iVar6 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&local_12c4.base,in_stack_00000004);
    iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_12c4,local_7cc,iVar6,iVar7);
    if (iVar6 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_12c4,0,(uint)in_stack_ffffc8a8,in_stack_ffffc8ac,in_stack_ffffc8b0,
                 (uint)in_stack_ffffc8b4,(uint)in_stack_ffffc8b8);
      return 0;
    }
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_12c4.base,iVar6);
    do {
      cVar1 = *pcVar3;
      *in_stack_00000004 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      in_stack_00000004[1] = cVar1;
      in_stack_00000004 = in_stack_00000004 + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_12c4,0,(uint)in_stack_ffffc8a8,in_stack_ffffc8ac,in_stack_ffffc8b0,
               (uint)in_stack_ffffc8b4,(uint)in_stack_ffffc8b8);
    return 1;
  case 0x14:
    iVar6 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,local_7cc,in_stack_00000004,4,1);
    if (iVar6 != 0) {
      return 1;
    }
    break;
  case 0x15:
    iVar7 = 0;
    core_script_cpp_FUN_00567630();
    iVar6 = 0;
    while (iVar6 < *(int *)(g_CScriptPtr->unk4 + 0x10)) {
      iVar4 = *(int *)(iVar7 + 0x100 + *(int *)(g_CScriptPtr->unk4 + 0x14));
      if ((iVar4 == 0) || (iVar4 == 2)) {
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x114;
      }
      else {
        core_script_cpp_CScript_removeEventXRef_FUN_005676e0();
      }
    }
    iVar6 = core_script_cpp_FUN_005677a0();
    if (iVar6 != 0) {
      return 1;
    }
    break;
  case 0x16:
    iVar6 = 0;
    iVar7 = 0;
    core_script_cpp_FUN_00567630();
    while (iVar6 < *(int *)(g_CScriptPtr->unk4 + 0x10)) {
      iVar4 = *(int *)(iVar7 + 0x100 + *(int *)(g_CScriptPtr->unk4 + 0x14));
      if ((iVar4 == 0) || (iVar4 == 3)) {
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x114;
      }
      else {
        core_script_cpp_CScript_removeEventXRef_FUN_005676e0();
      }
    }
    iVar6 = core_script_cpp_FUN_005677a0();
    if (iVar6 != 0) {
      return 1;
    }
    break;
  case 0x17:
    iVar6 = core_script_cpp_FUN_00562860();
    if (iVar6 != 0) {
      iVar7 = 0;
      local_2c = iVar6;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xffffc8ac);
      local_28 = -1;
      if (0 < *(int *)(iVar6 + 0x964)) {
        local_24 = iVar6 + 4;
        pcVar3 = (char *)(iVar6 + 0x968);
        do {
          crt_stdio_c_sprintf_FUN_005fdbd0(local_6a0,"%s\t%s",pcVar3);
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xffffc8ac,local_6a0);
          iVar6 = crt_string_c_stricmp_FUN_005fe7f0(pcVar3,in_stack_00000004);
          if (iVar6 == 0) {
            local_28 = iVar7;
          }
          pcVar3 = pcVar3 + 0x54c;
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(local_2c + 0x964));
      }
      pcVar3 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                 ((CPickList *)&stack0xffffc8ac,local_7cc,local_28,0);
      if (-1 < (int)pcVar3) {
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  ((CStrList *)&stack0xffffc8ac,(int)in_stack_00000004,pcVar3,0);
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xffffc8ac,0,(uint)in_stack_ffffc8a8,in_stack_ffffc8ac,
                   in_stack_ffffc8b0,(uint)in_stack_ffffc8b4,(uint)in_stack_ffffc8b8);
        return 1;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xffffc8ac,0,(uint)in_stack_ffffc8a8,in_stack_ffffc8ac,
                 in_stack_ffffc8b0,(uint)in_stack_ffffc8b4,(uint)in_stack_ffffc8b8);
      return 0;
    }
    break;
  case 0x18:
    iVar6 = core_script_cpp_FUN_00562860();
    if (iVar6 != 0) {
      iVar7 = 0;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_1dbc);
      if (0 < *(int *)(iVar6 + 0x964)) {
        pcVar3 = (char *)(iVar6 + 4);
        do {
          iVar7 = iVar7 + 1;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1dbc.base,pcVar3);
          pcVar3 = pcVar3 + 0x1e;
        } while (iVar7 < *(int *)(iVar6 + 0x964));
      }
      iVar7 = 0;
      iVar6 = shape_edittool_cpp_CStrList_findString_FUN_004a3030
                        (&local_1dbc.base,in_stack_00000004);
      iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&local_1dbc,local_7cc,iVar6,iVar7);
      if (iVar6 < 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&local_1dbc,0,(uint)in_stack_ffffc8a8,in_stack_ffffc8ac,in_stack_ffffc8b0,
                   (uint)in_stack_ffffc8b4,(uint)in_stack_ffffc8b8);
        return 0;
      }
      pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_1dbc.base,iVar6);
      do {
        cVar1 = *pcVar3;
        *in_stack_00000004 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        in_stack_00000004[1] = cVar1;
        in_stack_00000004 = in_stack_00000004 + 2;
      } while (cVar1 != '\0');
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_1dbc,0,(uint)in_stack_ffffc8a8,in_stack_ffffc8ac,in_stack_ffffc8b0,
                 (uint)in_stack_ffffc8b4,(uint)in_stack_ffffc8b8);
      return 1;
    }
    break;
  case 0x19:
    if (*(int *)(g_CScriptPtr->unk4 + 4) < 1) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"No database loaded.");
      return 0;
    }
    iVar6 = 0;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_33ac);
    for (iVar7 = 0; iVar7 < *(int *)(g_CScriptPtr->unk4 + 4); iVar7 = iVar7 + 1) {
      iVar4 = *(int *)(g_CScriptPtr->unk4 + 8) + iVar6;
      crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_031099e8,"%s\t%s\t%s",iVar4,iVar4 + 0x78);
      iVar6 = iVar6 + 0x226;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_33ac.base,&DAT_031099e8);
    }
    iVar6 = shape_edittool_cpp_CStrList_findByFirstField_FUN_004a3070
                      (&local_33ac.base,in_stack_00000004);
    if ((iVar6 < 0) &&
       (iVar6 = shape_edittool_cpp_CStrList_findByFirstField_FUN_004a3070
                          (&local_33ac.base,&DAT_0310a9e8), -1 < iVar6)) {
      iVar6 = iVar6 + 1;
    }
    iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_33ac,local_7cc,iVar6,0);
    if (iVar6 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_33ac,0,(uint)in_stack_ffffc8a8,in_stack_ffffc8ac,in_stack_ffffc8b0,
                 (uint)in_stack_ffffc8b4,(uint)in_stack_ffffc8b8);
      return 0;
    }
    pcVar3 = (char *)(*(int *)(g_CScriptPtr->unk4 + 8) + iVar6 * 0x226);
    do {
      cVar1 = *pcVar3;
      *in_stack_00000004 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      in_stack_00000004[1] = cVar1;
      in_stack_00000004 = in_stack_00000004 + 2;
    } while (cVar1 != '\0');
    pcVar8 = &DAT_0310a9e8;
    pcVar3 = (char *)(*(int *)(g_CScriptPtr->unk4 + 8) + iVar6 * 0x226);
    do {
      cVar1 = *pcVar3;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_33ac,0,(uint)in_stack_ffffc8a8,in_stack_ffffc8ac,in_stack_ffffc8b0,
               (uint)in_stack_ffffc8b4,(uint)in_stack_ffffc8b8);
    return 1;
  case 0x1a:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_f1c);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_f1c.base,"stand");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_f1c.base,"follow");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_f1c.base,"kill");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_f1c.base,"guard");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_f1c.base,"suspend");
    iVar7 = 0;
    iVar6 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&local_f1c.base,in_stack_00000004);
    iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_f1c,local_7cc,iVar6,iVar7);
    if (iVar6 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_f1c,0,(uint)in_stack_ffffc8a8,in_stack_ffffc8ac,in_stack_ffffc8b0,
                 (uint)in_stack_ffffc8b4,(uint)in_stack_ffffc8b8);
      return 0;
    }
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_f1c.base,iVar6);
    do {
      cVar1 = *pcVar3;
      *in_stack_00000004 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      in_stack_00000004[1] = cVar1;
      in_stack_00000004 = in_stack_00000004 + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_f1c,0,(uint)in_stack_ffffc8a8,in_stack_ffffc8ac,in_stack_ffffc8b0,
               (uint)in_stack_ffffc8b4,(uint)in_stack_ffffc8b8);
    return 1;
  case 0x1b:
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't pick this yet");
    return 0;
  case 0x1c:
    iVar6 = 0;
    iVar7 = 0;
    core_script_cpp_FUN_00567630();
    while (iVar6 < *(int *)(g_CScriptPtr->unk4 + 0x10)) {
      iVar4 = *(int *)(iVar7 + 0x100 + *(int *)(g_CScriptPtr->unk4 + 0x14));
      if ((iVar4 == 0) || (iVar4 == 4)) {
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x114;
      }
      else {
        core_script_cpp_CScript_removeEventXRef_FUN_005676e0();
      }
    }
    iVar6 = core_script_cpp_FUN_005677a0();
    if (iVar6 != 0) {
      return 1;
    }
    break;
  default:
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"WARNING! chooseParm - unknown parm type %d (code needs to be updated)");
    return 0;
  case 0x1e:
    iVar6 = core_script_cpp_FUN_005627f0();
    if (iVar6 != 0) {
      iVar7 = core_script_cpp_FUN_00559730();
      if (iVar7 == 0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,&DAT_0310eca0);
        crt_memory_c_memset_FUN_005fde40(local_a8,0,0x78);
      }
      local_20 = (CCharacter *)
                 core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                           ((CDeformableModelInstance *)(iVar6 + 0x158));
      iVar6 = -1;
      while( true ) {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_2c5c);
        for (iVar7 = 0; iVar4 = core_charactr_cpp_CCharacter_FUN_0042f9c0(local_20), iVar7 < iVar4;
            iVar7 = iVar7 + 1) {
          pSVar5 = core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_0059c220
                             ((CDeformableModel *)local_20,iVar7);
          crt_stdio_c_sprintf_FUN_005fdbd0(local_170,"%s\t%s",pSVar5);
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_2c5c.base,local_170);
        }
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_2c5c.base,"Done");
        iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          (&local_2c5c,local_7cc,iVar6,0);
        if (iVar6 < 0) {
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&local_2c5c,0,(uint)in_stack_ffffc8a8,in_stack_ffffc8ac,in_stack_ffffc8b0,
                     (uint)in_stack_ffffc8b4,(uint)in_stack_ffffc8b8);
          return 0;
        }
        iVar7 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)&local_2c5c);
        if (iVar6 == iVar7 + -1) break;
        local_a8[iVar6] = (uint)(local_a8[iVar6] == 0);
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&local_2c5c,0,(uint)in_stack_ffffc8a8,in_stack_ffffc8ac,in_stack_ffffc8b0,
                   (uint)in_stack_ffffc8b4,(uint)in_stack_ffffc8b8);
      }
      iVar6 = 0;
      local_14 = 0;
      local_1c = &DAT_00643d07;
      *in_stack_00000004 = '\0';
      do {
        iVar7 = core_charactr_cpp_CCharacter_FUN_0042f9c0(local_20);
        if (iVar7 <= iVar6) {
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&local_2c5c,0,(uint)in_stack_ffffc8a8,in_stack_ffffc8ac,in_stack_ffffc8b0,
                     (uint)in_stack_ffffc8b4,(uint)in_stack_ffffc8b8);
          return 1;
        }
        if (*(int *)((int)local_a8 + local_14) != 0) {
          iVar7 = -1;
          pcVar3 = in_stack_00000004;
          do {
            pcVar8 = pcVar3;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar8 = pcVar3 + (uint)bVar9 * -2 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar8;
          } while (cVar1 != '\0');
          pcVar8 = pcVar8 + -1;
          do {
            cVar1 = *local_1c;
            *pcVar8 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = local_1c[1];
            local_1c = local_1c + 2;
            pcVar8[1] = cVar1;
            pcVar8 = pcVar8 + 2;
          } while (cVar1 != '\0');
          local_1c = &0x20;
          pSVar5 = core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_0059c220
                             ((CDeformableModel *)local_20,iVar6);
          iVar7 = -1;
          pcVar3 = in_stack_00000004;
          do {
            pcVar8 = pcVar3;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar8 = pcVar3 + (uint)bVar9 * -2 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar8;
          } while (cVar1 != '\0');
          pcVar8 = pcVar8 + -1;
          do {
            cVar1 = pSVar5->part_name[0];
            *pcVar8 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pSVar5->part_name[1];
            pSVar5 = (SPart *)(pSVar5->part_name + 2);
            pcVar8[1] = cVar1;
            pcVar8 = pcVar8 + 2;
          } while (cVar1 != '\0');
        }
        local_14 = local_14 + 4;
        iVar6 = iVar6 + 1;
      } while( true );
    }
    break;
  case 0x20:
    iVar6 = 0;
    iVar7 = 0;
    core_script_cpp_FUN_00567630();
    while (iVar6 < *(int *)(g_CScriptPtr->unk4 + 0x10)) {
      switch(*(uint *)(iVar7 + 0x100 + *(int *)(g_CScriptPtr->unk4 + 0x14))) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x114;
        break;
      default:
        core_script_cpp_CScript_removeEventXRef_FUN_005676e0();
      }
    }
    iVar6 = core_script_cpp_FUN_005677a0();
    if (iVar6 != 0) {
      return 1;
    }
  }
  return 0;
}
