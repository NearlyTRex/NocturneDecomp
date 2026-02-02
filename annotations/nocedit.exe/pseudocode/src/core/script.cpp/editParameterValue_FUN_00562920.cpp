// Name: core_script.cpp_editParameterValue_FUN_00562920
// Address: 00562920
// Address Range: [[00562920, 00564006]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_editParameterValue_FUN_00562920 (char *value_buffer,int param_type,CCmdParm *param_info,char *param_name)

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: local_3758 */
/* WARNING: Variable defined which should be unmapped: local_3754 */

int __cdecl
core_script_cpp_editParameterValue_FUN_00562920
          (char *value_buffer,int param_type,CCmdParm *param_info,char *param_name)

{
  char cVar1;
  uint uVar2;
  int extraout_EAX;
  int extraout_EAX_00;
  char *pcVar3;
  CHero *character;
  int iVar4;
  SPart *pSVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  byte bVar9;
  float local_3758;
  CPickList local_3754;
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
  sprintf(local_7cc,"Enter %s");
  switch(param_type) {
  case 0:
    iVar6 = sscanf(value_buffer,"%d");
    iVar6 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                      (g_CEditorToolsPtr,local_7cc,&local_30,0,0,0,(uint)(iVar6 == 1));
    if (iVar6 != 0) {
      sprintf(value_buffer,"%d");
      return 1;
    }
    break;
  case 1:
    iVar6 = sscanf(value_buffer,"%f");
    iVar6 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                      (g_CEditorToolsPtr,local_7cc,&local_3758,0,0.0,0.0,(uint)(iVar6 == 1));
    if (iVar6 != 0) {
      sprintf(value_buffer,"%g",(double)local_3758);
      return 1;
    }
    break;
  case 2:
  case 0x1f:
    iVar6 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,local_7cc,value_buffer,100,1);
    if (iVar6 != 0) {
      return 1;
    }
    break;
  case 3:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_3004);
    local_18 = param_info->modifier_string;
    iVar6 = 0;
    for (iVar7 = 0; iVar7 < (int)g_CDemonSetPtr->actor_list_ptr; iVar7 = iVar7 + 1) {
      if (((param_info->modifier_string[0] == '\0') ||
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
    if ((param_info->modifier_string[0] == '\0') ||
       (iVar6 = core_actor_cpp_matchesClassName_FUN_0040c740(&g_CHeroClassInfo,local_18), iVar6 != 0
       )) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3004.base,"$");
    }
    shape_edittool_cpp_CStrList_sort_FUN_004a2ec0(&local_3004.base);
    iVar7 = 0;
    iVar6 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&local_3004.base,value_buffer);
    iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_3004,local_7cc,iVar6,iVar7);
    if (iVar6 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_3004,0,(uint)local_3758,local_3754.base.item_count,local_3754.base.capacity,
                 (uint)local_3754.base.data_array,(uint)local_3754.base.vtable);
      return 0;
    }
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_3004.base,iVar6);
    do {
      cVar1 = *pcVar3;
      *value_buffer = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      value_buffer[1] = cVar1;
      value_buffer = value_buffer + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_3004,0,(uint)local_3758,local_3754.base.item_count,local_3754.base.capacity,
               (uint)local_3754.base.data_array,(uint)local_3754.base.vtable);
    return 1;
  case 4:
    iVar6 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,local_7cc,value_buffer,4,1);
    if (iVar6 != 0) {
      return 1;
    }
    break;
  case 5:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_28b4);
    core_script_cpp_CScript_FUN_00566fa0(g_CScriptPtr,&local_28b4.base);
    iVar7 = 0;
    iVar6 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&local_28b4.base,value_buffer);
    iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_28b4,local_7cc,iVar6,iVar7);
    if (iVar6 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_28b4,0,(uint)local_3758,local_3754.base.item_count,local_3754.base.capacity,
                 (uint)local_3754.base.data_array,(uint)local_3754.base.vtable);
      return 0;
    }
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_28b4.base,iVar6);
    do {
      cVar1 = *pcVar3;
      *value_buffer = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      value_buffer[1] = cVar1;
      value_buffer = value_buffer + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_28b4,0,(uint)local_3758,local_3754.base.item_count,local_3754.base.capacity,
               (uint)local_3754.base.data_array,(uint)local_3754.base.vtable);
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
    iVar6 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&local_b74.base,value_buffer);
    iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_b74,local_7cc,iVar6,iVar7);
    if (iVar6 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_b74,0,(uint)local_3758,local_3754.base.item_count,local_3754.base.capacity,
                 (uint)local_3754.base.data_array,(uint)local_3754.base.vtable);
      return 0;
    }
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_b74.base,iVar6);
    do {
      cVar1 = *pcVar3;
      *value_buffer = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      value_buffer[1] = cVar1;
      value_buffer = value_buffer + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_b74,0,(uint)local_3758,local_3754.base.item_count,local_3754.base.capacity,
               (uint)local_3754.base.data_array,(uint)local_3754.base.vtable);
    return 1;
  case 7:
    iVar6 = 0;
    core_script_cpp_CScript_FUN_00567630(g_CScriptPtr);
    iVar7 = 0;
    while (iVar6 < g_CScriptPtr->unk3) {
      uVar2 = *(uint *)(iVar7 + 0x100 + (int)g_CScriptPtr->unk4);
      if ((uVar2 < 10) || ((10 < uVar2 && (uVar2 != 0xb)))) {
        core_script_cpp_CScript_FUN_005676e0(g_CScriptPtr,iVar6);
      }
      else {
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x114;
      }
    }
    iVar6 = core_script_cpp_CScript_FUN_005677a0(g_CScriptPtr,local_7cc,value_buffer);
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
    iVar6 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&local_250c.base,value_buffer);
    iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_250c,local_7cc,iVar6,iVar7);
    if (iVar6 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_250c,0,(uint)local_3758,local_3754.base.item_count,local_3754.base.capacity,
                 (uint)local_3754.base.data_array,(uint)local_3754.base.vtable);
      return 0;
    }
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_250c.base,iVar6);
    do {
      cVar1 = *pcVar3;
      *value_buffer = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      value_buffer[1] = cVar1;
      value_buffer = value_buffer + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_250c,0,(uint)local_3758,local_3754.base.item_count,local_3754.base.capacity,
               (uint)local_3754.base.data_array,(uint)local_3754.base.vtable);
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
    iVar6 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&local_2164.base,value_buffer);
    iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_2164,local_7cc,iVar6,iVar7);
    if (iVar6 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_2164,0,(uint)local_3758,local_3754.base.item_count,local_3754.base.capacity,
                 (uint)local_3754.base.data_array,(uint)local_3754.base.vtable);
      return 0;
    }
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_2164.base,iVar6);
    do {
      cVar1 = *pcVar3;
      *value_buffer = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      value_buffer[1] = cVar1;
      value_buffer = value_buffer + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_2164,0,(uint)local_3758,local_3754.base.item_count,local_3754.base.capacity,
               (uint)local_3754.base.data_array,(uint)local_3754.base.vtable);
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
    iVar6 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&local_1a14.base,value_buffer);
    iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_1a14,local_7cc,iVar6,iVar7);
    if (iVar6 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_1a14,0,(uint)local_3758,local_3754.base.item_count,local_3754.base.capacity,
                 (uint)local_3754.base.data_array,(uint)local_3754.base.vtable);
      return 0;
    }
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_1a14.base,iVar6);
    do {
      cVar1 = *pcVar3;
      *value_buffer = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      value_buffer[1] = cVar1;
      value_buffer = value_buffer + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_1a14,0,(uint)local_3758,local_3754.base.item_count,local_3754.base.capacity,
               (uint)local_3754.base.data_array,(uint)local_3754.base.vtable);
    return 1;
  case 0xb:
  case 0xc:
    iVar6 = 0;
    iVar7 = 0;
    core_script_cpp_CScript_FUN_00567630(g_CScriptPtr);
    while (iVar6 < g_CScriptPtr->unk3) {
      uVar2 = *(uint *)(iVar7 + 0x100 + (int)g_CScriptPtr->unk4);
      if ((uVar2 < 8) || ((8 < uVar2 && (uVar2 != 9)))) {
        core_script_cpp_CScript_FUN_005676e0(g_CScriptPtr,iVar6);
      }
      else {
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x114;
      }
    }
    iVar6 = core_script_cpp_CScript_FUN_005677a0(g_CScriptPtr,local_7cc,value_buffer);
    if (iVar6 != 0) {
      return 1;
    }
    break;
  case 0xd:
    iVar6 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,local_7cc,"sound","*.wav",(int)value_buffer
                      );
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
    core_script_cpp_CScript_FUN_00567630(g_CScriptPtr);
    iVar6 = 0;
    while (iVar6 < g_CScriptPtr->unk3) {
      uVar2 = *(uint *)(iVar7 + 0x100 + (int)g_CScriptPtr->unk4);
      if ((uVar2 < 5) || ((5 < uVar2 && (uVar2 != 6)))) {
        core_script_cpp_CScript_FUN_005676e0(g_CScriptPtr,iVar6);
      }
      else {
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x114;
      }
    }
    iVar6 = core_script_cpp_CScript_FUN_005677a0(g_CScriptPtr,local_7cc,value_buffer);
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
    iVar6 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&local_166c.base,value_buffer);
    iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_166c,local_7cc,iVar6,iVar7);
    if (iVar6 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_166c,0,(uint)local_3758,local_3754.base.item_count,local_3754.base.capacity,
                 (uint)local_3754.base.data_array,(uint)local_3754.base.vtable);
      return 0;
    }
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_166c.base,iVar6);
    do {
      cVar1 = *pcVar3;
      *value_buffer = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      value_buffer[1] = cVar1;
      value_buffer = value_buffer + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_166c,0,(uint)local_3758,local_3754.base.item_count,local_3754.base.capacity,
               (uint)local_3754.base.data_array,(uint)local_3754.base.vtable);
    return 1;
  case 0x12:
    splitpath
              (param_info->modifier_string,(char *)0x0,local_370,local_470,local_270);
    makepath(local_574,(char *)0x0,(char *)0x0,local_470,local_270);
    iVar6 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                      (g_CEditorToolsPtr,local_7cc,local_370,local_574,(int)value_buffer);
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
    iVar6 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&local_12c4.base,value_buffer);
    iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_12c4,local_7cc,iVar6,iVar7);
    if (iVar6 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_12c4,0,(uint)local_3758,local_3754.base.item_count,local_3754.base.capacity,
                 (uint)local_3754.base.data_array,(uint)local_3754.base.vtable);
      return 0;
    }
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_12c4.base,iVar6);
    do {
      cVar1 = *pcVar3;
      *value_buffer = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      value_buffer[1] = cVar1;
      value_buffer = value_buffer + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_12c4,0,(uint)local_3758,local_3754.base.item_count,local_3754.base.capacity,
               (uint)local_3754.base.data_array,(uint)local_3754.base.vtable);
    return 1;
  case 0x14:
    iVar6 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,local_7cc,value_buffer,4,1);
    if (iVar6 != 0) {
      return 1;
    }
    break;
  case 0x15:
    iVar7 = 0;
    core_script_cpp_CScript_FUN_00567630(g_CScriptPtr);
    iVar6 = 0;
    while (iVar6 < g_CScriptPtr->unk3) {
      iVar4 = *(int *)(iVar7 + 0x100 + (int)g_CScriptPtr->unk4);
      if ((iVar4 == 0) || (iVar4 == 2)) {
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x114;
      }
      else {
        core_script_cpp_CScript_FUN_005676e0(g_CScriptPtr,iVar6);
      }
    }
    iVar6 = core_script_cpp_CScript_FUN_005677a0(g_CScriptPtr,local_7cc,value_buffer);
    if (iVar6 != 0) {
      return 1;
    }
    break;
  case 0x16:
    iVar6 = 0;
    iVar7 = 0;
    core_script_cpp_CScript_FUN_00567630(g_CScriptPtr);
    while (iVar6 < g_CScriptPtr->unk3) {
      iVar4 = *(int *)(iVar7 + 0x100 + (int)g_CScriptPtr->unk4);
      if ((iVar4 == 0) || (iVar4 == 3)) {
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x114;
      }
      else {
        core_script_cpp_CScript_FUN_005676e0(g_CScriptPtr,iVar6);
      }
    }
    iVar6 = core_script_cpp_CScript_FUN_005677a0(g_CScriptPtr,local_7cc,value_buffer);
    if (iVar6 != 0) {
      return 1;
    }
    break;
  case 0x17:
    core_script_cpp_FUN_00562860((int)param_info,(int)param_name);
    if (extraout_EAX != 0) {
      iVar6 = 0;
      local_2c = extraout_EAX;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_3754);
      local_28 = -1;
      if (0 < *(int *)(extraout_EAX + 0x964)) {
        local_24 = extraout_EAX + 4;
        pcVar3 = (char *)(extraout_EAX + 0x968);
        do {
          sprintf(local_6a0,"%s\t%s",pcVar3);
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3754.base,local_6a0);
          iVar7 = stricmp(pcVar3,value_buffer);
          if (iVar7 == 0) {
            local_28 = iVar6;
          }
          pcVar3 = pcVar3 + 0x54c;
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(local_2c + 0x964));
      }
      pcVar3 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                 (&local_3754,local_7cc,local_28,0);
      if (-1 < (int)pcVar3) {
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  (&local_3754.base,(int)value_buffer,pcVar3,0);
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&local_3754,0,(uint)local_3758,local_3754.base.item_count,
                   local_3754.base.capacity,(uint)local_3754.base.data_array,
                   (uint)local_3754.base.vtable);
        return 1;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_3754,0,(uint)local_3758,local_3754.base.item_count,local_3754.base.capacity,
                 (uint)local_3754.base.data_array,(uint)local_3754.base.vtable);
      return 0;
    }
    break;
  case 0x18:
    core_script_cpp_FUN_00562860((int)param_info,(int)param_name);
    if (extraout_EAX_00 != 0) {
      iVar6 = 0;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_1dbc);
      if (0 < *(int *)(extraout_EAX_00 + 0x964)) {
        pcVar3 = (char *)(extraout_EAX_00 + 4);
        do {
          iVar6 = iVar6 + 1;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1dbc.base,pcVar3);
          pcVar3 = pcVar3 + 0x1e;
        } while (iVar6 < *(int *)(extraout_EAX_00 + 0x964));
      }
      iVar7 = 0;
      iVar6 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&local_1dbc.base,value_buffer);
      iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&local_1dbc,local_7cc,iVar6,iVar7);
      if (iVar6 < 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&local_1dbc,0,(uint)local_3758,local_3754.base.item_count,
                   local_3754.base.capacity,(uint)local_3754.base.data_array,
                   (uint)local_3754.base.vtable);
        return 0;
      }
      pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_1dbc.base,iVar6);
      do {
        cVar1 = *pcVar3;
        *value_buffer = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        value_buffer[1] = cVar1;
        value_buffer = value_buffer + 2;
      } while (cVar1 != '\0');
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_1dbc,0,(uint)local_3758,local_3754.base.item_count,local_3754.base.capacity,
                 (uint)local_3754.base.data_array,(uint)local_3754.base.vtable);
      return 1;
    }
    break;
  case 0x19:
    if (g_CScriptPtr->dialog_entry_count < 1) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"No database loaded.");
      return 0;
    }
    iVar6 = 0;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_33ac);
    for (iVar7 = 0; iVar7 < g_CScriptPtr->dialog_entry_count; iVar7 = iVar7 + 1) {
      pcVar3 = g_CScriptPtr->dialog_entries->data + iVar6;
      sprintf(g_ScriptFormatBuffer,"%s\t%s\t%s",pcVar3,pcVar3 + 0x78);
      iVar6 = iVar6 + 0x226;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_33ac.base,g_ScriptFormatBuffer);
    }
    iVar6 = shape_edittool_cpp_CStrList_findByFirstField_FUN_004a3070(&local_33ac.base,value_buffer)
    ;
    if ((iVar6 < 0) &&
       (iVar6 = shape_edittool_cpp_CStrList_findByFirstField_FUN_004a3070
                          (&local_33ac.base,g_ScriptTempBuffer), -1 < iVar6)) {
      iVar6 = iVar6 + 1;
    }
    iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_33ac,local_7cc,iVar6,0);
    if (iVar6 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_33ac,0,(uint)local_3758,local_3754.base.item_count,local_3754.base.capacity,
                 (uint)local_3754.base.data_array,(uint)local_3754.base.vtable);
      return 0;
    }
    pcVar3 = g_CScriptPtr->dialog_entries[iVar6].data;
    do {
      cVar1 = *pcVar3;
      *value_buffer = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      value_buffer[1] = cVar1;
      value_buffer = value_buffer + 2;
    } while (cVar1 != '\0');
    pcVar8 = g_ScriptTempBuffer;
    pcVar3 = g_CScriptPtr->dialog_entries[iVar6].data;
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
              (&local_33ac,0,(uint)local_3758,local_3754.base.item_count,local_3754.base.capacity,
               (uint)local_3754.base.data_array,(uint)local_3754.base.vtable);
    return 1;
  case 0x1a:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_f1c);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_f1c.base,"stand");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_f1c.base,"follow");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_f1c.base,"kill");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_f1c.base,"guard");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_f1c.base,"suspend");
    iVar7 = 0;
    iVar6 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(&local_f1c.base,value_buffer);
    iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_f1c,local_7cc,iVar6,iVar7);
    if (iVar6 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_f1c,0,(uint)local_3758,local_3754.base.item_count,local_3754.base.capacity,
                 (uint)local_3754.base.data_array,(uint)local_3754.base.vtable);
      return 0;
    }
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_f1c.base,iVar6);
    do {
      cVar1 = *pcVar3;
      *value_buffer = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      value_buffer[1] = cVar1;
      value_buffer = value_buffer + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_f1c,0,(uint)local_3758,local_3754.base.item_count,local_3754.base.capacity,
               (uint)local_3754.base.data_array,(uint)local_3754.base.vtable);
    return 1;
  case 0x1b:
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't pick this yet");
    return 0;
  case 0x1c:
    iVar6 = 0;
    iVar7 = 0;
    core_script_cpp_CScript_FUN_00567630(g_CScriptPtr);
    while (iVar6 < g_CScriptPtr->unk3) {
      iVar4 = *(int *)(iVar7 + 0x100 + (int)g_CScriptPtr->unk4);
      if ((iVar4 == 0) || (iVar4 == 4)) {
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x114;
      }
      else {
        core_script_cpp_CScript_FUN_005676e0(g_CScriptPtr,iVar6);
      }
    }
    iVar6 = core_script_cpp_CScript_FUN_005677a0(g_CScriptPtr,local_7cc,value_buffer);
    if (iVar6 != 0) {
      return 1;
    }
    break;
  default:
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"WARNING! chooseParm - unknown parm type %d (code needs to be updated)");
    return 0;
  case 0x1e:
    character = core_script_cpp_FUN_005627f0((int)param_info,(int)param_name);
    if (character != (CHero *)0x0) {
      iVar6 = core_script_cpp_parseBodyPartMask_FUN_00559730
                        (&character->base,value_buffer,(int *)local_a8);
      if (iVar6 == 0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,g_ScriptErrorBuffer);
        memset(local_a8,0,0x78);
      }
      local_20 = (CCharacter *)
                 core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                           (&(character->base).model);
      iVar6 = -1;
      while( true ) {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_2c5c);
        for (iVar7 = 0; iVar4 = core_charactr_cpp_CCharacter_FUN_0042f9c0(local_20), iVar7 < iVar4;
            iVar7 = iVar7 + 1) {
          pSVar5 = core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_0059c220
                             ((CDeformableModel *)local_20,iVar7);
          sprintf(local_170,"%s\t%s",pSVar5);
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_2c5c.base,local_170);
        }
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_2c5c.base,"Done");
        iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          (&local_2c5c,local_7cc,iVar6,0);
        if (iVar6 < 0) {
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&local_2c5c,0,(uint)local_3758,local_3754.base.item_count,
                     local_3754.base.capacity,(uint)local_3754.base.data_array,
                     (uint)local_3754.base.vtable);
          return 0;
        }
        iVar7 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&local_2c5c.base);
        if (iVar6 == iVar7 + -1) break;
        local_a8[iVar6] = (uint)(local_a8[iVar6] == 0);
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&local_2c5c,0,(uint)local_3758,local_3754.base.item_count,
                   local_3754.base.capacity,(uint)local_3754.base.data_array,
                   (uint)local_3754.base.vtable);
      }
      iVar6 = 0;
      local_14 = 0;
      local_1c = &s_EmptyChar_00643d07;
      *value_buffer = '\0';
      do {
        iVar7 = core_charactr_cpp_CCharacter_FUN_0042f9c0(local_20);
        if (iVar7 <= iVar6) {
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&local_2c5c,0,(uint)local_3758,local_3754.base.item_count,
                     local_3754.base.capacity,(uint)local_3754.base.data_array,
                     (uint)local_3754.base.vtable);
          return 1;
        }
        if (*(int *)((int)local_a8 + local_14) != 0) {
          iVar7 = -1;
          pcVar3 = value_buffer;
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
          local_1c = " ";
          pSVar5 = core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_0059c220
                             ((CDeformableModel *)local_20,iVar6);
          iVar7 = -1;
          pcVar3 = value_buffer;
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
    core_script_cpp_CScript_FUN_00567630(g_CScriptPtr);
    while (iVar6 < g_CScriptPtr->unk3) {
      switch(*(uint *)(iVar7 + 0x100 + (int)g_CScriptPtr->unk4)) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x114;
        break;
      default:
        core_script_cpp_CScript_FUN_005676e0(g_CScriptPtr,iVar6);
      }
    }
    iVar6 = core_script_cpp_CScript_FUN_005677a0(g_CScriptPtr,local_7cc,value_buffer);
    if (iVar6 != 0) {
      return 1;
    }
  }
  return 0;
}
