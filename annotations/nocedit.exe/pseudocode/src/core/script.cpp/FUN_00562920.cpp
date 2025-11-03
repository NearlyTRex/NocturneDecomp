// Name: core_script.cpp_FUN_00562920
// Address: 00562920
// Address Range: [[00562920, 00564006]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00562920()
// Cross-references:
//   core_script.cpp_FUN_00565ae0 (00565ae0) at 00565b76 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_00562888 = 005636c1
//   void* switchdataD_0056289c = 00562964
//   TerminatedCString s_Enter_s_00643b92
//   TerminatedCString s_d_00643b9e
//   TerminatedCString s_f_00643ba1
//   TerminatedCString s_g_00643ba4
//   TerminatedCString s_CHeroPlaceHolder_00643ba7
//   TerminatedCString s_anon_00643bb8
//   TerminatedCString s_walk_00643bba
//   TerminatedCString s_backup_00643bbf
//   TerminatedCString s_run_00643bc6
//   TerminatedCString s_fire_00643bca
//   TerminatedCString s_useItem_00643bcf
//   TerminatedCString s_light_00643bd7
//   TerminatedCString s_draw_00643bdd
//   TerminatedCString s_jump_00643be2
//   TerminatedCString s_generic_00643be7
//   TerminatedCString s_drown_00643bef
//   TerminatedCString s_fall_00643bf5
//   TerminatedCString s_explode_00643bfa
//   TerminatedCString s_shatter_00643c02
//   TerminatedCString s_fallApart_00643c0a
//   TerminatedCString s_electrocute_00643c14
//   TerminatedCString s_chopped_00643c20
//   TerminatedCString s_crushed_00643c28
//   TerminatedCString s_impale_00643c30
//   TerminatedCString s_fire_00643c37
//   TerminatedCString s_generic_00643c3c
//   TerminatedCString s_bullet_00643c44
//   TerminatedCString s_fire_00643c4b
//   TerminatedCString s_blade_00643c50
//   TerminatedCString s_stake_00643c56
//   TerminatedCString s_gas_00643c5c
//   TerminatedCString s_electrocute_00643c60
//   TerminatedCString s_wav_00643c6c
//   TerminatedCString s_sound_00643c72
//   TerminatedCString s_Can_t_pick_this_yet_00643c78
//   TerminatedCString s_true_00643c8c
//   TerminatedCString s_false_00643c91
//   TerminatedCString s_bottom_00643c97
//   TerminatedCString s_s_s_00643c9e
//   TerminatedCString s_No_database_loaded_00643ca4
//   TerminatedCString s_s_s_s_00643cb8
//   TerminatedCString s_stand_00643cc1
//   TerminatedCString s_follow_00643cc7
//   TerminatedCString s_kill_00643cce
//   TerminatedCString s_guard_00643cd3
//   TerminatedCString s_suspend_00643cd9
//   TerminatedCString s_Can_t_pick_this_yet_00643ce1
//   TerminatedCString s_Yes_00643cf5
//   TerminatedCString s_No_00643cf9
//   TerminatedCString s_s_s_00643cfc
//   TerminatedCString s_Done_00643d02
//   undefined1 DAT_00643d07
//   undefined1 DAT_00643d08
//   undefined1 DAT_00643d09
//   TerminatedCString s_WARNING_chooseParm_unkno_00643d0a
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CScript* g_CScriptPtr = 0310f858
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CEditorTools g_CEditorToolsPtr
//   CDemonActorType g_CHeroClassInfo
//   undefined4 DAT_031099e8
//   undefined1 DAT_0310a9e8
//   undefined1 DAT_0310a9e9
//   undefined1 DAT_0310a9ea
//   undefined1 DAT_0310a9eb
//   undefined1 DAT_0310eca0
//   CScript g_CScriptInstance
//   undefined4 g_CScriptInstance.padding_0x18[4]
//   undefined4 g_CScriptInstance.padding_0x18[8]
//   undefined4 g_CScriptInstance.padding_0x18[16]
//   undefined4 g_CScriptInstance.padding_0x18[20]
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_0311427c
//   undefined4 DAT_03114420
//   undefined4 DAT_03115b10
//   undefined4 g_CDemonSetInstance.light_count
//   undefined4 g_CDemonSetInstance.lights[0].light_type
//   undefined4 DAT_0312f540
//   undefined4 DAT_0312f544
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
//   undefined4 DAT_032613d4
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_actor.cpp_matchesClassName_FUN_0040c740
//   core_charactr.cpp_CCharacter_FUN_0042f9c0
//   core_script.cpp_CScript_CallLoadingScriptFile_FUN_00566fa0
//   core_script.cpp_CScript_removeEventXRef_FUN_005676e0
//   core_script.cpp_FUN_00559730
//   core_script.cpp_FUN_005627f0
//   core_script.cpp_FUN_00562860
//   core_script.cpp_FUN_00567630
//   core_script.cpp_FUN_005677a0
//   core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_0059c220
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   crt_file.c_makepath_FUN_005febfc
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdio.c_sscanf_FUN_0060013c
//   crt_string.c_splitpath_FUN_005ff178
//   crt_string.c_stricmp_FUN_005fe7f0
//   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_findByFirstField_FUN_004a3070
//   shape_edittool.cpp_CStrList_findString_FUN_004a3030
//   shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
//   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00562920(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4) */

undefined4
core_script_cpp_FUN_00562920
          (undefined4 param_1,undefined4 param_2,CCharacter *unaff_EBX,undefined4 param_4,
          char *param_5,undefined4 param_6,CCharacter *param_7,undefined4 param_8,char *param_9,
          undefined4 param_10,int param_11)

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
  undefined8 in_stack_ffffc8ac;
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
  undefined1 auStack_33a8 [16];
  undefined1 auStack_3398 [924];
  undefined1 auStack_2ffc [8];
  undefined1 auStack_2ff4 [8];
  undefined1 auStack_2fec [936];
  undefined1 auStack_2c44 [16];
  undefined1 auStack_2c34 [8];
  undefined1 auStack_2c2c [900];
  undefined1 auStack_28a8 [8];
  undefined1 auStack_28a0 [920];
  undefined1 auStack_2508 [20];
  undefined1 auStack_24f4 [8];
  undefined1 auStack_24ec [8];
  undefined1 auStack_24e4 [8];
  undefined1 auStack_24dc [892];
  undefined1 auStack_2160 [20];
  undefined1 auStack_214c [8];
  undefined1 auStack_2144 [8];
  undefined1 auStack_213c [8];
  undefined1 auStack_2134 [8];
  undefined1 auStack_212c [8];
  undefined1 auStack_2124 [884];
  undefined1 auStack_1db0 [8];
  undefined1 auStack_1da8 [920];
  undefined1 auStack_1a10 [20];
  undefined1 auStack_19fc [8];
  undefined1 auStack_19f4 [8];
  undefined1 auStack_19ec [8];
  undefined1 auStack_19e4 [896];
  undefined1 auStack_1664 [8];
  undefined1 auStack_165c [8];
  undefined1 auStack_1654 [8];
  undefined1 auStack_164c [912];
  undefined1 auStack_12bc [8];
  undefined1 auStack_12b4 [924];
  undefined1 auStack_f18 [20];
  undefined1 auStack_f04 [8];
  undefined1 auStack_efc [8];
  undefined1 auStack_ef4 [904];
  undefined1 auStack_b6c [8];
  undefined1 auStack_b64 [920];
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
  undefined1 auStack_98 [28];
  uint auStack_7c [20];
  undefined1 local_2c [4];
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
    if (CONCAT31(extraout_var,bVar3) != 0) {
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
      in_stack_ffffc8ac = CONCAT44(fVar11,pcVar4);
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
                       SUB41(param_5,0));
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
                      (g_CEditorToolsPtr,acStack_7c0,acStack_364,acStack_568,SUB41(param_5,0));
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
        in_stack_ffffc8ac = CONCAT44(fVar11,pcVar4);
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
      switch(*(undefined4 *)(iVar8 + 0x100 + *(int *)(g_CScriptPtr->padding_0x18 + 0x14))) {
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


// Assembly code:
// 00562920: PUSH EBX
//   Label: core_script.cpp_FUN_00562920
// 00562921: PUSH ESI
// 00562922: PUSH EDI
// 00562923: PUSH EBP
// 00562924: MOV EBP,ESP
// 00562926: SUB ESP,0x3748
// 0056292c: AND ESP,0xfffffff8
// 0056292f: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00562932: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00562935: MOV ESI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00562938: LEA EAX,[EBX + 0x2c0]
// 0056293e: PUSH EAX
// 0056293f: PUSH 0x643b92
//   XREF to: 00643b92 (DATA)
// 00562944: LEA EAX,[ESP + 0x2f94]
//   XREF to: Stack[-0x7cc] (DATA)
// 0056294b: PUSH EAX
// 0056294c: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00562951: ADD ESP,0xc
// 00562954: CMP EDI,0x20
// 00562957: JA 0x00563fe7
//   XREF to: 00563fe7 (CONDITIONAL_JUMP)
// 0056295d: JMP dword ptr [EDI*0x4 + 0x56289c]
//   Label: switchD
//   XREF to: 00562964 (COMPUTED_JUMP)
//   XREF to: 005629e4 (COMPUTED_JUMP)
//   XREF to: 00562a52 (COMPUTED_JUMP)
//   XREF to: 00562a86 (COMPUTED_JUMP)
//   XREF to: 00562c14 (COMPUTED_JUMP)
//   XREF to: 00562c49 (COMPUTED_JUMP)
//   XREF to: 00562d12 (COMPUTED_JUMP)
//   XREF to: 00562df2 (COMPUTED_JUMP)
//   XREF to: 00562e75 (COMPUTED_JUMP)
//   XREF to: 00562fd4 (COMPUTED_JUMP)
//   XREF to: 00563176 (COMPUTED_JUMP)
//   XREF to: 005632c2 (COMPUTED_JUMP)
//   XREF to: 0056333d (COMPUTED_JUMP)
//   XREF to: 0056337a (COMPUTED_JUMP)
//   XREF to: 00563399 (COMPUTED_JUMP)
//   XREF to: 00563413 (COMPUTED_JUMP)
//   XREF to: 00563501 (COMPUTED_JUMP)
//   XREF to: 00563591 (COMPUTED_JUMP)
//   XREF to: 00563684 (COMPUTED_JUMP)
//   XREF to: 005636fc (COMPUTED_JUMP)
//   XREF to: 00563772 (COMPUTED_JUMP)
//   XREF to: 005637e8 (COMPUTED_JUMP)
//   XREF to: 0056381c (COMPUTED_JUMP)
//   XREF to: 00563950 (COMPUTED_JUMP)
//   XREF to: 00563a50 (COMPUTED_JUMP)
//   XREF to: 00563bbe (COMPUTED_JUMP)
//   XREF to: 00563cd7 (COMPUTED_JUMP)
//   XREF to: 00563cf6 (COMPUTED_JUMP)
//   XREF to: 00563d6b (COMPUTED_JUMP)
//   XREF to: 00563fe7 (COMPUTED_JUMP)
//   XREF to: 0056289c (DATA)
// 00562964: LEA EAX,[ESP + 0x3728]
//   Label: caseD_0
//   XREF to: Stack[-0x30] (DATA)
// 0056296b: PUSH EAX
// 0056296c: MOV EAX,0x643b9b
//   XREF to: 00643b9b (PARAM)
// 00562971: PUSH EAX
//   XREF to: 00643b9b (DATA)
// 00562972: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00562975: PUSH ESI
// 00562976: XOR EBX,EBX
// 00562978: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 0056297d: ADD ESP,0xc
// 00562980: CMP EAX,0x1
// 00562983: JNZ 0x00562988
//   XREF to: 00562988 (CONDITIONAL_JUMP)
// 00562985: OR BL,0x1
// 00562988: PUSH EBX
//   Label: LAB_00562988
// 00562989: PUSH 0x0
// 0056298b: PUSH 0x0
// 0056298d: PUSH 0x0
// 0056298f: LEA EAX,[ESP + 0x3738]
//   XREF to: Stack[-0x30] (DATA)
// 00562996: PUSH EAX
// 00562997: LEA EAX,[ESP + 0x2fa0]
//   XREF to: Stack[-0x7cc] (DATA)
// 0056299e: PUSH EAX
// 0056299f: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005629a5: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 005629a6: CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020
//   XREF to: 004a0020 (UNCONDITIONAL_CALL)
// 005629ab: ADD ESP,0x1c
// 005629ae: TEST EAX,EAX
// 005629b0: JNZ 0x005629bd
//   XREF to: 005629bd (CONDITIONAL_JUMP)
// 005629b2: XOR ESI,ESI
//   Label: LAB_005629b2
// 005629b4: MOV EAX,ESI
// 005629b6: MOV ESP,EBP
// 005629b8: POP EBP
// 005629b9: POP EDI
// 005629ba: POP ESI
// 005629bb: POP EBX
// 005629bc: RET
// 005629bd: MOV EAX,dword ptr [ESP + 0x3728]
//   Label: LAB_005629bd
//   XREF to: Stack[-0x30] (READ)
// 005629c4: PUSH EAX
// 005629c5: PUSH 0x643b9e
//   XREF to: 00643b9e (DATA)
// 005629ca: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005629cd: PUSH EDX
// 005629ce: MOV ESI,0x1
// 005629d3: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005629d8: ADD ESP,0xc
// 005629db: MOV EAX,ESI
// 005629dd: MOV ESP,EBP
// 005629df: POP EBP
// 005629e0: POP EDI
// 005629e1: POP ESI
// 005629e2: POP EBX
// 005629e3: RET
// 005629e4: MOV EAX,ESP
//   Label: caseD_1
// 005629e6: PUSH EAX
// 005629e7: MOV EAX,0x643ba1
//   XREF to: 00643ba1 (PARAM)
// 005629ec: PUSH EAX
//   XREF to: 00643ba1 (DATA)
// 005629ed: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005629f0: PUSH EDX
// 005629f1: XOR EBX,EBX
// 005629f3: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 005629f8: ADD ESP,0xc
// 005629fb: CMP EAX,0x1
// 005629fe: JNZ 0x00562a03
//   XREF to: 00562a03 (CONDITIONAL_JUMP)
// 00562a00: OR BL,0x1
// 00562a03: PUSH EBX
//   Label: LAB_00562a03
// 00562a04: PUSH 0x0
// 00562a06: PUSH 0x0
// 00562a08: PUSH 0x0
// 00562a0a: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x3758] (DATA)
// 00562a0e: PUSH EAX
// 00562a0f: LEA EAX,[ESP + 0x2fa0]
//   XREF to: Stack[-0x7cc] (DATA)
// 00562a16: PUSH EAX
// 00562a17: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00562a1d: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00562a1e: CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   XREF to: 004a00f0 (UNCONDITIONAL_CALL)
// 00562a23: ADD ESP,0x1c
// 00562a26: TEST EAX,EAX
// 00562a28: JZ 0x005629b2
//   XREF to: 005629b2 (CONDITIONAL_JUMP)
// 00562a2a: FLD float ptr [ESP]
//   XREF to: Stack[-0x3758] (DATA)
// 00562a2d: SUB ESP,0x8
// 00562a30: FSTP double ptr [ESP]
//   XREF to: Stack[-0x3760] (DATA)
// 00562a33: PUSH 0x643ba4
//   XREF to: 00643ba4 (DATA)
// 00562a38: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00562a3b: PUSH EBX
// 00562a3c: MOV ESI,0x1
// 00562a41: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00562a46: ADD ESP,0x10
// 00562a49: MOV EAX,ESI
// 00562a4b: MOV ESP,EBP
// 00562a4d: POP EBP
// 00562a4e: POP EDI
// 00562a4f: POP ESI
// 00562a50: POP EBX
// 00562a51: RET
// 00562a52: PUSH 0x1
//   Label: caseD_2
// 00562a54: PUSH 0x64
// 00562a56: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00562a59: PUSH EDI
// 00562a5a: LEA EAX,[ESP + 0x2f98]
//   XREF to: Stack[-0x7cc] (DATA)
// 00562a61: PUSH EAX
// 00562a62: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00562a67: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 00562a68: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 00562a6d: ADD ESP,0x14
// 00562a70: TEST EAX,EAX
// 00562a72: JZ 0x005629b2
//   XREF to: 005629b2 (CONDITIONAL_JUMP)
// 00562a78: MOV ESI,0x1
// 00562a7d: MOV EAX,ESI
// 00562a7f: MOV ESP,EBP
// 00562a81: POP EBP
// 00562a82: POP EDI
// 00562a83: POP ESI
// 00562a84: POP EBX
// 00562a85: RET
// 00562a86: LEA EAX,[ESP + 0x754]
//   Label: caseD_3
//   XREF to: Stack[-0x3004] (DATA)
// 00562a8d: PUSH EAX
// 00562a8e: XOR EDI,EDI
// 00562a90: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 00562a95: ADD ESP,0x4
// 00562a98: LEA EAX,[EBX + 0x25c]
// 00562a9e: LEA ESI,[EDI*0x4 + 0x0]
// 00562aa5: MOV dword ptr [ESP + 0x3740],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00562aac: MOV EAX,[0x006810c8]
//   Label: LAB_00562aac
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00562ab1: CMP EDI,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 00562ab7: JGE 0x00562b21
//   XREF to: 00562b21 (CONDITIONAL_JUMP)
// 00562ab9: CMP byte ptr [EBX + 0x25c],0x0
// 00562ac0: JZ 0x00562ae4
//   XREF to: 00562ae4 (CONDITIONAL_JUMP)
// 00562ac2: MOV EDX,dword ptr [ESP + 0x3740]
//   XREF to: Stack[-0x18] (READ)
// 00562ac9: PUSH EDX
// 00562aca: MOV ECX,dword ptr [ESI + EAX*0x1 + 0x14d158]
//   XREF to: 032613d0 (READ)
//   XREF to: 032613d4 (READ)
// 00562ad1: PUSH ECX
// 00562ad2: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 00562ad7: ADD ESP,0x8
// 00562ada: TEST EAX,EAX
// 00562adc: JNZ 0x00562ae4
//   XREF to: 00562ae4 (CONDITIONAL_JUMP)
// 00562ade: INC EDI
//   Label: LAB_00562ade
// 00562adf: ADD ESI,0x4
// 00562ae2: JMP 0x00562aac
//   XREF to: 00562aac (UNCONDITIONAL_JUMP)
// 00562ae4: MOV EAX,[0x006810c8]
//   Label: LAB_00562ae4
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00562ae9: PUSH 0x643ba7
//   XREF to: 00643ba7 (DATA)
// 00562aee: MOV EDX,dword ptr [ESI + EAX*0x1 + 0x14d158]
//   XREF to: 032613d0 (READ)
//   XREF to: 032613d4 (READ)
// 00562af5: PUSH EDX
// 00562af6: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 00562afb: ADD ESP,0x8
// 00562afe: TEST EAX,EAX
// 00562b00: JNZ 0x00562ade
//   XREF to: 00562ade (CONDITIONAL_JUMP)
// 00562b02: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 00562b07: MOV ECX,dword ptr [ESI + EAX*0x1 + 0x14d158]
//   XREF to: 032613d4 (READ)
// 00562b0e: PUSH ECX
// 00562b0f: LEA EAX,[ESP + 0x758]
//   XREF to: Stack[-0x3004] (DATA)
// 00562b16: PUSH EAX
// 00562b17: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00562b1c: ADD ESP,0x8
// 00562b1f: JMP 0x00562ade
//   XREF to: 00562ade (UNCONDITIONAL_JUMP)
// 00562b21: CMP byte ptr [EBX + 0x25c],0x0
//   Label: LAB_00562b21
// 00562b28: JNZ 0x00562bd5
//   XREF to: 00562bd5 (CONDITIONAL_JUMP)
// 00562b2e: PUSH 0x643bb8
//   Label: LAB_00562b2e
//   XREF to: 00643bb8 (DATA)
// 00562b33: LEA EAX,[ESP + 0x758]
//   XREF to: Stack[-0x3004] (DATA)
// 00562b3a: PUSH EAX
// 00562b3b: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00562b40: ADD ESP,0x8
// 00562b43: LEA EAX,[ESP + 0x754]
//   Label: LAB_00562b43
//   XREF to: Stack[-0x3004] (DATA)
// 00562b4a: PUSH EAX
// 00562b4b: CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
//   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)
// 00562b50: ADD ESP,0x4
// 00562b53: PUSH 0x0
// 00562b55: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00562b58: PUSH EBX
// 00562b59: LEA EAX,[ESP + 0x75c]
//   XREF to: Stack[-0x3004] (DATA)
// 00562b60: PUSH EAX
// 00562b61: CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030
//   XREF to: 004a3030 (UNCONDITIONAL_CALL)
// 00562b66: ADD ESP,0x8
// 00562b69: PUSH EAX
// 00562b6a: LEA EAX,[ESP + 0x2f94]
//   XREF to: Stack[-0x7cc] (DATA)
// 00562b71: PUSH EAX
// 00562b72: LEA EAX,[ESP + 0x760]
//   XREF to: Stack[-0x3004] (DATA)
// 00562b79: PUSH EAX
// 00562b7a: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 00562b7f: ADD ESP,0x10
// 00562b82: TEST EAX,EAX
// 00562b84: JL 0x00562bf7
//   XREF to: 00562bf7 (CONDITIONAL_JUMP)
// 00562b86: PUSH EAX
// 00562b87: LEA EAX,[ESP + 0x758]
//   XREF to: Stack[-0x3004] (DATA)
// 00562b8e: PUSH EAX
// 00562b8f: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 00562b94: ADD ESP,0x8
// 00562b97: MOV EDI,EBX
// 00562b99: MOV ESI,EAX
// 00562b9b: PUSH EDI
// 00562b9c: MOV AL,byte ptr [ESI]
//   Label: LAB_00562b9c
// 00562b9e: MOV byte ptr [EDI],AL
// 00562ba0: CMP AL,0x0
// 00562ba2: JZ 0x00562bb4
//   XREF to: 00562bb4 (CONDITIONAL_JUMP)
// 00562ba4: MOV AL,byte ptr [ESI + 0x1]
// 00562ba7: ADD ESI,0x2
// 00562baa: MOV byte ptr [EDI + 0x1],AL
// 00562bad: ADD EDI,0x2
// 00562bb0: CMP AL,0x0
// 00562bb2: JNZ 0x00562b9c
//   XREF to: 00562b9c (CONDITIONAL_JUMP)
// 00562bb4: POP EDI
//   Label: LAB_00562bb4
// 00562bb5: PUSH 0x0
// 00562bb7: LEA EAX,[ESP + 0x758]
//   XREF to: Stack[-0x3004] (DATA)
// 00562bbe: PUSH EAX
// 00562bbf: MOV ESI,0x1
// 00562bc4: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00562bc9: ADD ESP,0x8
// 00562bcc: MOV EAX,ESI
// 00562bce: MOV ESP,EBP
// 00562bd0: POP EBP
// 00562bd1: POP EDI
// 00562bd2: POP ESI
// 00562bd3: POP EBX
// 00562bd4: RET
// 00562bd5: MOV ECX,dword ptr [ESP + 0x3740]
//   Label: LAB_00562bd5
//   XREF to: Stack[-0x18] (READ)
// 00562bdc: PUSH ECX
// 00562bdd: PUSH 0x2db87d4
//   XREF to: 02db87d4 (DATA)
// 00562be2: CALL core_actor.cpp_matchesClassName_FUN_0040c740
//   XREF to: 0040c740 (UNCONDITIONAL_CALL)
// 00562be7: ADD ESP,0x8
// 00562bea: TEST EAX,EAX
// 00562bec: JNZ 0x00562b2e
//   XREF to: 00562b2e (CONDITIONAL_JUMP)
// 00562bf2: JMP 0x00562b43
//   XREF to: 00562b43 (UNCONDITIONAL_JUMP)
// 00562bf7: PUSH 0x0
//   Label: LAB_00562bf7
// 00562bf9: LEA EAX,[ESP + 0x758]
//   XREF to: Stack[-0x3004] (DATA)
// 00562c00: PUSH EAX
// 00562c01: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00562c06: ADD ESP,0x8
// 00562c09: XOR ESI,ESI
// 00562c0b: MOV EAX,ESI
// 00562c0d: MOV ESP,EBP
// 00562c0f: POP EBP
// 00562c10: POP EDI
// 00562c11: POP ESI
// 00562c12: POP EBX
// 00562c13: RET
// 00562c14: PUSH 0x1
//   Label: caseD_4
// 00562c16: PUSH 0x4
// 00562c18: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00562c1b: PUSH EBX
// 00562c1c: LEA EAX,[ESP + 0x2f98]
//   XREF to: Stack[-0x7cc] (DATA)
// 00562c23: PUSH EAX
// 00562c24: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00562c2a: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 00562c2b: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 00562c30: ADD ESP,0x14
// 00562c33: TEST EAX,EAX
// 00562c35: JZ 0x005629b2
//   XREF to: 005629b2 (CONDITIONAL_JUMP)
// 00562c3b: MOV ESI,0x1
// 00562c40: MOV EAX,ESI
// 00562c42: MOV ESP,EBP
// 00562c44: POP EBP
// 00562c45: POP EDI
// 00562c46: POP ESI
// 00562c47: POP EBX
// 00562c48: RET
// 00562c49: LEA EAX,[ESP + 0xea4]
//   Label: caseD_5
//   XREF to: Stack[-0x28b4] (DATA)
// 00562c50: PUSH EAX
// 00562c51: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 00562c56: ADD ESP,0x4
// 00562c59: LEA EAX,[ESP + 0xea4]
//   XREF to: Stack[-0x28b4] (DATA)
// 00562c60: PUSH EAX
// 00562c61: MOV EDX,dword ptr [0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 00562c67: PUSH EDX
//   XREF to: 0310f858 (DATA)
// 00562c68: CALL core_script.cpp_CScript_CallLoadingScriptFile_FUN_00566fa0
//   XREF to: 00566fa0 (UNCONDITIONAL_CALL)
// 00562c6d: ADD ESP,0x8
// 00562c70: PUSH 0x0
// 00562c72: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00562c75: PUSH ECX
// 00562c76: LEA EAX,[ESP + 0xeac]
//   XREF to: Stack[-0x28b4] (DATA)
// 00562c7d: PUSH EAX
// 00562c7e: CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030
//   XREF to: 004a3030 (UNCONDITIONAL_CALL)
// 00562c83: ADD ESP,0x8
// 00562c86: PUSH EAX
// 00562c87: LEA EAX,[ESP + 0x2f94]
//   XREF to: Stack[-0x7cc] (DATA)
// 00562c8e: PUSH EAX
// 00562c8f: LEA EAX,[ESP + 0xeb0]
//   XREF to: Stack[-0x28b4] (DATA)
// 00562c96: PUSH EAX
// 00562c97: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 00562c9c: ADD ESP,0x10
// 00562c9f: MOV EBX,EAX
// 00562ca1: TEST EAX,EAX
// 00562ca3: JL 0x00562cf5
//   XREF to: 00562cf5 (CONDITIONAL_JUMP)
// 00562ca5: PUSH EAX
// 00562ca6: LEA EAX,[ESP + 0xea8]
//   XREF to: Stack[-0x28b4] (DATA)
// 00562cad: PUSH EAX
// 00562cae: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 00562cb3: ADD ESP,0x8
// 00562cb6: MOV ESI,EAX
// 00562cb8: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00562cbb: PUSH EDI
// 00562cbc: MOV AL,byte ptr [ESI]
//   Label: LAB_00562cbc
// 00562cbe: MOV byte ptr [EDI],AL
// 00562cc0: CMP AL,0x0
// 00562cc2: JZ 0x00562cd4
//   XREF to: 00562cd4 (CONDITIONAL_JUMP)
// 00562cc4: MOV AL,byte ptr [ESI + 0x1]
// 00562cc7: ADD ESI,0x2
// 00562cca: MOV byte ptr [EDI + 0x1],AL
// 00562ccd: ADD EDI,0x2
// 00562cd0: CMP AL,0x0
// 00562cd2: JNZ 0x00562cbc
//   XREF to: 00562cbc (CONDITIONAL_JUMP)
// 00562cd4: POP EDI
//   Label: LAB_00562cd4
// 00562cd5: PUSH 0x0
// 00562cd7: LEA EAX,[ESP + 0xea8]
//   XREF to: Stack[-0x28b4] (DATA)
// 00562cde: PUSH EAX
// 00562cdf: MOV ESI,0x1
// 00562ce4: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00562ce9: ADD ESP,0x8
// 00562cec: MOV EAX,ESI
// 00562cee: MOV ESP,EBP
// 00562cf0: POP EBP
// 00562cf1: POP EDI
// 00562cf2: POP ESI
// 00562cf3: POP EBX
// 00562cf4: RET
// 00562cf5: PUSH 0x0
//   Label: LAB_00562cf5
// 00562cf7: LEA EAX,[ESP + 0xea8]
//   XREF to: Stack[-0x28b4] (DATA)
// 00562cfe: PUSH EAX
// 00562cff: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00562d04: ADD ESP,0x8
// 00562d07: XOR ESI,ESI
// 00562d09: MOV EAX,ESI
// 00562d0b: MOV ESP,EBP
// 00562d0d: POP EBP
// 00562d0e: POP EDI
// 00562d0f: POP ESI
// 00562d10: POP EBX
// 00562d11: RET
// 00562d12: LEA EAX,[ESP + 0x2be4]
//   Label: caseD_6
//   XREF to: Stack[-0xb74] (DATA)
// 00562d19: PUSH EAX
// 00562d1a: XOR ESI,ESI
// 00562d1c: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 00562d21: ADD ESP,0x4
// 00562d24: IMUL EDI,ESI,0x1a4
// 00562d2a: MOV EAX,[0x006810c8]
//   Label: LAB_00562d2a
//   XREF to: 006810c8 (READ)
// 00562d2f: CMP ESI,dword ptr [EAX]
//   XREF to: 03114278 (READ)
// 00562d31: JGE 0x00562d52
//   XREF to: 00562d52 (CONDITIONAL_JUMP)
// 00562d33: ADD EAX,0x4
// 00562d36: ADD EAX,EDI
// 00562d38: PUSH EAX
//   XREF to: 0311427c (DATA)
//   XREF to: 03114420 (DATA)
// 00562d39: LEA EAX,[ESP + 0x2be8]
//   XREF to: Stack[-0xb74] (DATA)
// 00562d40: PUSH EAX
// 00562d41: INC ESI
// 00562d42: ADD EDI,0x1a4
// 00562d48: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00562d4d: ADD ESP,0x8
// 00562d50: JMP 0x00562d2a
//   XREF to: 00562d2a (UNCONDITIONAL_JUMP)
// 00562d52: PUSH 0x0
//   Label: LAB_00562d52
// 00562d54: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00562d57: PUSH ECX
// 00562d58: LEA EAX,[ESP + 0x2bec]
//   XREF to: Stack[-0xb74] (DATA)
// 00562d5f: PUSH EAX
// 00562d60: CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030
//   XREF to: 004a3030 (UNCONDITIONAL_CALL)
// 00562d65: ADD ESP,0x8
// 00562d68: PUSH EAX
// 00562d69: LEA EAX,[ESP + 0x2f94]
//   XREF to: Stack[-0x7cc] (DATA)
// 00562d70: PUSH EAX
// 00562d71: LEA EAX,[ESP + 0x2bf0]
//   XREF to: Stack[-0xb74] (DATA)
// 00562d78: PUSH EAX
// 00562d79: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 00562d7e: ADD ESP,0x10
// 00562d81: TEST EAX,EAX
// 00562d83: JL 0x00562dd5
//   XREF to: 00562dd5 (CONDITIONAL_JUMP)
// 00562d85: PUSH EAX
// 00562d86: LEA EAX,[ESP + 0x2be8]
//   XREF to: Stack[-0xb74] (DATA)
// 00562d8d: PUSH EAX
// 00562d8e: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 00562d93: ADD ESP,0x8
// 00562d96: MOV ESI,EAX
// 00562d98: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00562d9b: PUSH EDI
// 00562d9c: MOV AL,byte ptr [ESI]
//   Label: LAB_00562d9c
// 00562d9e: MOV byte ptr [EDI],AL
// 00562da0: CMP AL,0x0
// 00562da2: JZ 0x00562db4
//   XREF to: 00562db4 (CONDITIONAL_JUMP)
// 00562da4: MOV AL,byte ptr [ESI + 0x1]
// 00562da7: ADD ESI,0x2
// 00562daa: MOV byte ptr [EDI + 0x1],AL
// 00562dad: ADD EDI,0x2
// 00562db0: CMP AL,0x0
// 00562db2: JNZ 0x00562d9c
//   XREF to: 00562d9c (CONDITIONAL_JUMP)
// 00562db4: POP EDI
//   Label: LAB_00562db4
// 00562db5: PUSH 0x0
// 00562db7: LEA EAX,[ESP + 0x2be8]
//   XREF to: Stack[-0xb74] (DATA)
// 00562dbe: PUSH EAX
// 00562dbf: MOV ESI,0x1
// 00562dc4: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00562dc9: ADD ESP,0x8
// 00562dcc: MOV EAX,ESI
// 00562dce: MOV ESP,EBP
// 00562dd0: POP EBP
// 00562dd1: POP EDI
// 00562dd2: POP ESI
// 00562dd3: POP EBX
// 00562dd4: RET
// 00562dd5: PUSH 0x0
//   Label: LAB_00562dd5
// 00562dd7: LEA EAX,[ESP + 0x2be8]
//   XREF to: Stack[-0xb74] (DATA)
// 00562dde: PUSH EAX
// 00562ddf: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00562de4: ADD ESP,0x8
// 00562de7: XOR ESI,ESI
// 00562de9: MOV EAX,ESI
// 00562deb: MOV ESP,EBP
// 00562ded: POP EBP
// 00562dee: POP EDI
// 00562def: POP ESI
// 00562df0: POP EBX
// 00562df1: RET
// 00562df2: XOR ESI,ESI
//   Label: caseD_7
// 00562df4: MOV EAX,[0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 00562df9: MOV EDI,ESI
// 00562dfb: PUSH EAX
//   XREF to: 0310f858 (DATA)
// 00562dfc: SHL EDI,0x4
// 00562dff: CALL core_script.cpp_FUN_00567630
//   XREF to: 00567630 (UNCONDITIONAL_CALL)
// 00562e04: SHL EDI,0x2
// 00562e07: ADD ESP,0x4
// 00562e0a: SHL EDI,0x2
// 00562e0d: MOV EAX,[0x00680d50]
//   Label: LAB_00562e0d
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 00562e12: CMP ESI,dword ptr [EAX + 0x28]
//   XREF to: 0310f880 (READ)
// 00562e15: JGE 0x00562e4a
//   XREF to: 00562e4a (CONDITIONAL_JUMP)
// 00562e17: MOV EAX,dword ptr [EAX + 0x2c]
//   XREF to: 0310f884 (READ)
// 00562e1a: MOV EAX,dword ptr [EDI + EAX*0x1 + 0x100]
// 00562e21: CMP EAX,0xa
// 00562e24: JNC 0x00562e41
//   XREF to: 00562e41 (CONDITIONAL_JUMP)
// 00562e26: PUSH ESI
//   Label: LAB_00562e26
// 00562e27: MOV EBX,dword ptr [0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 00562e2d: PUSH EBX
//   XREF to: 0310f858 (DATA)
// 00562e2e: CALL core_script.cpp_CScript_removeEventXRef_FUN_005676e0
//   XREF to: 005676e0 (UNCONDITIONAL_CALL)
// 00562e33: ADD ESP,0x8
// 00562e36: JMP 0x00562e0d
//   XREF to: 00562e0d (UNCONDITIONAL_JUMP)
// 00562e38: INC ESI
//   Label: LAB_00562e38
// 00562e39: ADD EDI,0x114
// 00562e3f: JMP 0x00562e0d
//   XREF to: 00562e0d (UNCONDITIONAL_JUMP)
// 00562e41: JBE 0x00562e38
//   Label: LAB_00562e41
//   XREF to: 00562e38 (CONDITIONAL_JUMP)
// 00562e43: CMP EAX,0xb
// 00562e46: JZ 0x00562e38
//   XREF to: 00562e38 (CONDITIONAL_JUMP)
// 00562e48: JMP 0x00562e26
//   XREF to: 00562e26 (UNCONDITIONAL_JUMP)
// 00562e4a: MOV ECX,dword ptr [EBP + 0x14]
//   Label: LAB_00562e4a
//   XREF to: Stack[0x4] (READ)
// 00562e4d: PUSH ECX
// 00562e4e: LEA EBX,[ESP + 0x2f90]
//   XREF to: Stack[-0x7cc] (DATA)
// 00562e55: PUSH EBX
// 00562e56: PUSH EAX
//   XREF to: 0310f858 (DATA)
// 00562e57: CALL core_script.cpp_FUN_005677a0
//   XREF to: 005677a0 (UNCONDITIONAL_CALL)
// 00562e5c: ADD ESP,0xc
// 00562e5f: TEST EAX,EAX
// 00562e61: JZ 0x005629b2
//   XREF to: 005629b2 (CONDITIONAL_JUMP)
// 00562e67: MOV ESI,0x1
// 00562e6c: MOV EAX,ESI
// 00562e6e: MOV ESP,EBP
// 00562e70: POP EBP
// 00562e71: POP EDI
// 00562e72: POP ESI
// 00562e73: POP EBX
// 00562e74: RET
// 00562e75: LEA EAX,[ESP + 0x124c]
//   Label: caseD_8
//   XREF to: Stack[-0x250c] (DATA)
// 00562e7c: PUSH EAX
// 00562e7d: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 00562e82: ADD ESP,0x4
// 00562e85: MOV EAX,0x643bba
//   XREF to: 00643bba (DATA)
// 00562e8a: PUSH EAX
//   XREF to: 00643bba (DATA)
// 00562e8b: LEA EAX,[ESP + 0x1250]
//   XREF to: Stack[-0x250c] (DATA)
// 00562e92: PUSH EAX
// 00562e93: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00562e98: ADD ESP,0x8
// 00562e9b: MOV EAX,0x643bbf
//   XREF to: 00643bbf (DATA)
// 00562ea0: PUSH EAX
//   XREF to: 00643bbf (DATA)
// 00562ea1: LEA EAX,[ESP + 0x1250]
//   XREF to: Stack[-0x250c] (DATA)
// 00562ea8: PUSH EAX
// 00562ea9: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00562eae: ADD ESP,0x8
// 00562eb1: MOV EAX,0x643bc6
//   XREF to: 00643bc6 (DATA)
// 00562eb6: PUSH EAX
//   XREF to: 00643bc6 (DATA)
// 00562eb7: LEA EAX,[ESP + 0x1250]
//   XREF to: Stack[-0x250c] (DATA)
// 00562ebe: PUSH EAX
// 00562ebf: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00562ec4: ADD ESP,0x8
// 00562ec7: MOV EAX,0x643bca
//   XREF to: 00643bca (DATA)
// 00562ecc: PUSH EAX
//   XREF to: 00643bca (DATA)
// 00562ecd: LEA EAX,[ESP + 0x1250]
//   XREF to: Stack[-0x250c] (DATA)
// 00562ed4: PUSH EAX
// 00562ed5: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00562eda: ADD ESP,0x8
// 00562edd: MOV EAX,0x643bcf
//   XREF to: 00643bcf (DATA)
// 00562ee2: PUSH EAX
//   XREF to: 00643bcf (DATA)
// 00562ee3: LEA EAX,[ESP + 0x1250]
//   XREF to: Stack[-0x250c] (DATA)
// 00562eea: PUSH EAX
// 00562eeb: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00562ef0: ADD ESP,0x8
// 00562ef3: MOV EAX,0x643bd7
//   XREF to: 00643bd7 (DATA)
// 00562ef8: PUSH EAX
//   XREF to: 00643bd7 (DATA)
// 00562ef9: LEA EAX,[ESP + 0x1250]
//   XREF to: Stack[-0x250c] (DATA)
// 00562f00: PUSH EAX
// 00562f01: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00562f06: ADD ESP,0x8
// 00562f09: MOV EAX,0x643bdd
//   XREF to: 00643bdd (DATA)
// 00562f0e: PUSH EAX
//   XREF to: 00643bdd (DATA)
// 00562f0f: LEA EAX,[ESP + 0x1250]
//   XREF to: Stack[-0x250c] (DATA)
// 00562f16: PUSH EAX
// 00562f17: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00562f1c: ADD ESP,0x8
// 00562f1f: MOV EAX,0x643be2
//   XREF to: 00643be2 (DATA)
// 00562f24: PUSH EAX
//   XREF to: 00643be2 (DATA)
// 00562f25: LEA EAX,[ESP + 0x1250]
//   XREF to: Stack[-0x250c] (DATA)
// 00562f2c: PUSH EAX
// 00562f2d: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00562f32: ADD ESP,0x8
// 00562f35: PUSH 0x0
// 00562f37: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00562f3a: PUSH EDI
// 00562f3b: LEA EAX,[ESP + 0x1254]
//   XREF to: Stack[-0x250c] (DATA)
// 00562f42: PUSH EAX
// 00562f43: CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030
//   XREF to: 004a3030 (UNCONDITIONAL_CALL)
// 00562f48: ADD ESP,0x8
// 00562f4b: PUSH EAX
// 00562f4c: LEA EAX,[ESP + 0x2f94]
//   XREF to: Stack[-0x7cc] (DATA)
// 00562f53: PUSH EAX
// 00562f54: LEA EAX,[ESP + 0x1258]
//   XREF to: Stack[-0x250c] (DATA)
// 00562f5b: PUSH EAX
// 00562f5c: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 00562f61: ADD ESP,0x10
// 00562f64: MOV EBX,EAX
// 00562f66: TEST EAX,EAX
// 00562f68: JL 0x00562fb7
//   XREF to: 00562fb7 (CONDITIONAL_JUMP)
// 00562f6a: PUSH EAX
// 00562f6b: LEA EAX,[ESP + 0x1250]
//   XREF to: Stack[-0x250c] (DATA)
// 00562f72: PUSH EAX
// 00562f73: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 00562f78: ADD ESP,0x8
// 00562f7b: MOV ESI,EAX
// 00562f7d: PUSH EDI
// 00562f7e: MOV AL,byte ptr [ESI]
//   Label: LAB_00562f7e
// 00562f80: MOV byte ptr [EDI],AL
// 00562f82: CMP AL,0x0
// 00562f84: JZ 0x00562f96
//   XREF to: 00562f96 (CONDITIONAL_JUMP)
// 00562f86: MOV AL,byte ptr [ESI + 0x1]
// 00562f89: ADD ESI,0x2
// 00562f8c: MOV byte ptr [EDI + 0x1],AL
// 00562f8f: ADD EDI,0x2
// 00562f92: CMP AL,0x0
// 00562f94: JNZ 0x00562f7e
//   XREF to: 00562f7e (CONDITIONAL_JUMP)
// 00562f96: POP EDI
//   Label: LAB_00562f96
// 00562f97: PUSH 0x0
// 00562f99: LEA EAX,[ESP + 0x1250]
//   XREF to: Stack[-0x250c] (DATA)
// 00562fa0: PUSH EAX
// 00562fa1: MOV ESI,0x1
// 00562fa6: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00562fab: ADD ESP,0x8
// 00562fae: MOV EAX,ESI
// 00562fb0: MOV ESP,EBP
// 00562fb2: POP EBP
// 00562fb3: POP EDI
// 00562fb4: POP ESI
// 00562fb5: POP EBX
// 00562fb6: RET
// 00562fb7: PUSH 0x0
//   Label: LAB_00562fb7
// 00562fb9: LEA EAX,[ESP + 0x1250]
//   XREF to: Stack[-0x250c] (DATA)
// 00562fc0: PUSH EAX
// 00562fc1: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00562fc6: ADD ESP,0x8
// 00562fc9: XOR ESI,ESI
// 00562fcb: MOV EAX,ESI
// 00562fcd: MOV ESP,EBP
// 00562fcf: POP EBP
// 00562fd0: POP EDI
// 00562fd1: POP ESI
// 00562fd2: POP EBX
// 00562fd3: RET
// 00562fd4: LEA EAX,[ESP + 0x15f4]
//   Label: caseD_9
//   XREF to: Stack[-0x2164] (DATA)
// 00562fdb: PUSH EAX
// 00562fdc: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 00562fe1: ADD ESP,0x4
// 00562fe4: MOV EAX,0x643be7
//   XREF to: 00643be7 (DATA)
// 00562fe9: PUSH EAX
//   XREF to: 00643be7 (DATA)
// 00562fea: LEA EAX,[ESP + 0x15f8]
//   XREF to: Stack[-0x2164] (DATA)
// 00562ff1: PUSH EAX
// 00562ff2: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00562ff7: ADD ESP,0x8
// 00562ffa: MOV EAX,0x643bef
//   XREF to: 00643bef (DATA)
// 00562fff: PUSH EAX
//   XREF to: 00643bef (DATA)
// 00563000: LEA EAX,[ESP + 0x15f8]
//   XREF to: Stack[-0x2164] (DATA)
// 00563007: PUSH EAX
// 00563008: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0056300d: ADD ESP,0x8
// 00563010: MOV EAX,0x643bf5
//   XREF to: 00643bf5 (DATA)
// 00563015: PUSH EAX
//   XREF to: 00643bf5 (DATA)
// 00563016: LEA EAX,[ESP + 0x15f8]
//   XREF to: Stack[-0x2164] (DATA)
// 0056301d: PUSH EAX
// 0056301e: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00563023: ADD ESP,0x8
// 00563026: MOV EAX,0x643bfa
//   XREF to: 00643bfa (DATA)
// 0056302b: PUSH EAX
//   XREF to: 00643bfa (DATA)
// 0056302c: LEA EAX,[ESP + 0x15f8]
//   XREF to: Stack[-0x2164] (DATA)
// 00563033: PUSH EAX
// 00563034: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00563039: ADD ESP,0x8
// 0056303c: MOV EAX,0x643c02
//   XREF to: 00643c02 (DATA)
// 00563041: PUSH EAX
//   XREF to: 00643c02 (DATA)
// 00563042: LEA EAX,[ESP + 0x15f8]
//   XREF to: Stack[-0x2164] (DATA)
// 00563049: PUSH EAX
// 0056304a: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0056304f: ADD ESP,0x8
// 00563052: MOV EAX,0x643c0a
//   XREF to: 00643c0a (DATA)
// 00563057: PUSH EAX
//   XREF to: 00643c0a (DATA)
// 00563058: LEA EAX,[ESP + 0x15f8]
//   XREF to: Stack[-0x2164] (DATA)
// 0056305f: PUSH EAX
// 00563060: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00563065: ADD ESP,0x8
// 00563068: MOV EAX,0x643c14
//   XREF to: 00643c14 (DATA)
// 0056306d: PUSH EAX
//   XREF to: 00643c14 (DATA)
// 0056306e: LEA EAX,[ESP + 0x15f8]
//   XREF to: Stack[-0x2164] (DATA)
// 00563075: PUSH EAX
// 00563076: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0056307b: ADD ESP,0x8
// 0056307e: MOV EAX,0x643c20
//   XREF to: 00643c20 (DATA)
// 00563083: PUSH EAX
//   XREF to: 00643c20 (DATA)
// 00563084: LEA EAX,[ESP + 0x15f8]
//   XREF to: Stack[-0x2164] (DATA)
// 0056308b: PUSH EAX
// 0056308c: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00563091: ADD ESP,0x8
// 00563094: MOV EAX,0x643c28
//   XREF to: 00643c28 (DATA)
// 00563099: PUSH EAX
//   XREF to: 00643c28 (DATA)
// 0056309a: LEA EAX,[ESP + 0x15f8]
//   XREF to: Stack[-0x2164] (DATA)
// 005630a1: PUSH EAX
// 005630a2: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005630a7: ADD ESP,0x8
// 005630aa: MOV EAX,0x643c30
//   XREF to: 00643c30 (DATA)
// 005630af: PUSH EAX
//   XREF to: 00643c30 (DATA)
// 005630b0: LEA EAX,[ESP + 0x15f8]
//   XREF to: Stack[-0x2164] (DATA)
// 005630b7: PUSH EAX
// 005630b8: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005630bd: ADD ESP,0x8
// 005630c0: MOV EAX,0x643c37
//   XREF to: 00643c37 (DATA)
// 005630c5: PUSH EAX
//   XREF to: 00643c37 (DATA)
// 005630c6: LEA EAX,[ESP + 0x15f8]
//   XREF to: Stack[-0x2164] (DATA)
// 005630cd: PUSH EAX
// 005630ce: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005630d3: ADD ESP,0x8
// 005630d6: PUSH 0x0
// 005630d8: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005630db: PUSH ESI
// 005630dc: LEA EAX,[ESP + 0x15fc]
//   XREF to: Stack[-0x2164] (DATA)
// 005630e3: PUSH EAX
// 005630e4: CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030
//   XREF to: 004a3030 (UNCONDITIONAL_CALL)
// 005630e9: ADD ESP,0x8
// 005630ec: PUSH EAX
// 005630ed: LEA EAX,[ESP + 0x2f94]
//   XREF to: Stack[-0x7cc] (DATA)
// 005630f4: PUSH EAX
// 005630f5: LEA EAX,[ESP + 0x1600]
//   XREF to: Stack[-0x2164] (DATA)
// 005630fc: PUSH EAX
// 005630fd: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 00563102: ADD ESP,0x10
// 00563105: TEST EAX,EAX
// 00563107: JL 0x00563159
//   XREF to: 00563159 (CONDITIONAL_JUMP)
// 00563109: PUSH EAX
// 0056310a: LEA EAX,[ESP + 0x15f8]
//   XREF to: Stack[-0x2164] (DATA)
// 00563111: PUSH EAX
// 00563112: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 00563117: ADD ESP,0x8
// 0056311a: MOV ESI,EAX
// 0056311c: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056311f: PUSH EDI
// 00563120: MOV AL,byte ptr [ESI]
//   Label: LAB_00563120
// 00563122: MOV byte ptr [EDI],AL
// 00563124: CMP AL,0x0
// 00563126: JZ 0x00563138
//   XREF to: 00563138 (CONDITIONAL_JUMP)
// 00563128: MOV AL,byte ptr [ESI + 0x1]
// 0056312b: ADD ESI,0x2
// 0056312e: MOV byte ptr [EDI + 0x1],AL
// 00563131: ADD EDI,0x2
// 00563134: CMP AL,0x0
// 00563136: JNZ 0x00563120
//   XREF to: 00563120 (CONDITIONAL_JUMP)
// 00563138: POP EDI
//   Label: LAB_00563138
// 00563139: PUSH 0x0
// 0056313b: LEA EAX,[ESP + 0x15f8]
//   XREF to: Stack[-0x2164] (DATA)
// 00563142: PUSH EAX
// 00563143: MOV ESI,0x1
// 00563148: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0056314d: ADD ESP,0x8
// 00563150: MOV EAX,ESI
// 00563152: MOV ESP,EBP
// 00563154: POP EBP
// 00563155: POP EDI
// 00563156: POP ESI
// 00563157: POP EBX
// 00563158: RET
// 00563159: PUSH 0x0
//   Label: LAB_00563159
// 0056315b: LEA EAX,[ESP + 0x15f8]
//   XREF to: Stack[-0x2164] (DATA)
// 00563162: PUSH EAX
// 00563163: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00563168: ADD ESP,0x8
// 0056316b: XOR ESI,ESI
// 0056316d: MOV EAX,ESI
// 0056316f: MOV ESP,EBP
// 00563171: POP EBP
// 00563172: POP EDI
// 00563173: POP ESI
// 00563174: POP EBX
// 00563175: RET
// 00563176: LEA EAX,[ESP + 0x1d44]
//   Label: caseD_a
//   XREF to: Stack[-0x1a14] (DATA)
// 0056317d: PUSH EAX
// 0056317e: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 00563183: ADD ESP,0x4
// 00563186: MOV EAX,0x643c3c
//   XREF to: 00643c3c (DATA)
// 0056318b: PUSH EAX
//   XREF to: 00643c3c (DATA)
// 0056318c: LEA EAX,[ESP + 0x1d48]
//   XREF to: Stack[-0x1a14] (DATA)
// 00563193: PUSH EAX
// 00563194: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00563199: ADD ESP,0x8
// 0056319c: MOV EAX,0x643c44
//   XREF to: 00643c44 (DATA)
// 005631a1: PUSH EAX
//   XREF to: 00643c44 (DATA)
// 005631a2: LEA EAX,[ESP + 0x1d48]
//   XREF to: Stack[-0x1a14] (DATA)
// 005631a9: PUSH EAX
// 005631aa: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005631af: ADD ESP,0x8
// 005631b2: MOV EAX,0x643c4b
//   XREF to: 00643c4b (DATA)
// 005631b7: PUSH EAX
//   XREF to: 00643c4b (DATA)
// 005631b8: LEA EAX,[ESP + 0x1d48]
//   XREF to: Stack[-0x1a14] (DATA)
// 005631bf: PUSH EAX
// 005631c0: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005631c5: ADD ESP,0x8
// 005631c8: MOV EAX,0x643c50
//   XREF to: 00643c50 (DATA)
// 005631cd: PUSH EAX
//   XREF to: 00643c50 (DATA)
// 005631ce: LEA EAX,[ESP + 0x1d48]
//   XREF to: Stack[-0x1a14] (DATA)
// 005631d5: PUSH EAX
// 005631d6: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005631db: ADD ESP,0x8
// 005631de: MOV EAX,0x643c56
//   XREF to: 00643c56 (DATA)
// 005631e3: PUSH EAX
//   XREF to: 00643c56 (DATA)
// 005631e4: LEA EAX,[ESP + 0x1d48]
//   XREF to: Stack[-0x1a14] (DATA)
// 005631eb: PUSH EAX
// 005631ec: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005631f1: ADD ESP,0x8
// 005631f4: MOV EAX,0x643c5c
//   XREF to: 00643c5c (DATA)
// 005631f9: PUSH EAX
//   XREF to: 00643c5c (DATA)
// 005631fa: LEA EAX,[ESP + 0x1d48]
//   XREF to: Stack[-0x1a14] (DATA)
// 00563201: PUSH EAX
// 00563202: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00563207: ADD ESP,0x8
// 0056320a: MOV EAX,0x643c60
//   XREF to: 00643c60 (DATA)
// 0056320f: PUSH EAX
//   XREF to: 00643c60 (DATA)
// 00563210: LEA EAX,[ESP + 0x1d48]
//   XREF to: Stack[-0x1a14] (DATA)
// 00563217: PUSH EAX
// 00563218: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0056321d: ADD ESP,0x8
// 00563220: PUSH 0x0
// 00563222: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00563225: PUSH EBX
// 00563226: LEA EAX,[ESP + 0x1d4c]
//   XREF to: Stack[-0x1a14] (DATA)
// 0056322d: PUSH EAX
// 0056322e: CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030
//   XREF to: 004a3030 (UNCONDITIONAL_CALL)
// 00563233: ADD ESP,0x8
// 00563236: PUSH EAX
// 00563237: LEA EAX,[ESP + 0x2f94]
//   XREF to: Stack[-0x7cc] (DATA)
// 0056323e: PUSH EAX
// 0056323f: LEA EAX,[ESP + 0x1d50]
//   XREF to: Stack[-0x1a14] (DATA)
// 00563246: PUSH EAX
// 00563247: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0056324c: ADD ESP,0x10
// 0056324f: MOV EBX,EAX
// 00563251: TEST EAX,EAX
// 00563253: JL 0x005632a5
//   XREF to: 005632a5 (CONDITIONAL_JUMP)
// 00563255: PUSH EAX
// 00563256: LEA EAX,[ESP + 0x1d48]
//   XREF to: Stack[-0x1a14] (DATA)
// 0056325d: PUSH EAX
// 0056325e: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 00563263: ADD ESP,0x8
// 00563266: MOV ESI,EAX
// 00563268: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056326b: PUSH EDI
// 0056326c: MOV AL,byte ptr [ESI]
//   Label: LAB_0056326c
// 0056326e: MOV byte ptr [EDI],AL
// 00563270: CMP AL,0x0
// 00563272: JZ 0x00563284
//   XREF to: 00563284 (CONDITIONAL_JUMP)
// 00563274: MOV AL,byte ptr [ESI + 0x1]
// 00563277: ADD ESI,0x2
// 0056327a: MOV byte ptr [EDI + 0x1],AL
// 0056327d: ADD EDI,0x2
// 00563280: CMP AL,0x0
// 00563282: JNZ 0x0056326c
//   XREF to: 0056326c (CONDITIONAL_JUMP)
// 00563284: POP EDI
//   Label: LAB_00563284
// 00563285: PUSH 0x0
// 00563287: LEA EAX,[ESP + 0x1d48]
//   XREF to: Stack[-0x1a14] (DATA)
// 0056328e: PUSH EAX
// 0056328f: MOV ESI,0x1
// 00563294: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00563299: ADD ESP,0x8
// 0056329c: MOV EAX,ESI
// 0056329e: MOV ESP,EBP
// 005632a0: POP EBP
// 005632a1: POP EDI
// 005632a2: POP ESI
// 005632a3: POP EBX
// 005632a4: RET
// 005632a5: PUSH 0x0
//   Label: LAB_005632a5
// 005632a7: LEA EAX,[ESP + 0x1d48]
//   XREF to: Stack[-0x1a14] (DATA)
// 005632ae: PUSH EAX
// 005632af: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 005632b4: ADD ESP,0x8
// 005632b7: XOR ESI,ESI
// 005632b9: MOV EAX,ESI
// 005632bb: MOV ESP,EBP
// 005632bd: POP EBP
// 005632be: POP EDI
// 005632bf: POP ESI
// 005632c0: POP EBX
// 005632c1: RET
// 005632c2: MOV ECX,dword ptr [0x00680d50]
//   Label: caseD_b
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 005632c8: PUSH ECX
//   XREF to: 0310f858 (DATA)
// 005632c9: XOR ESI,ESI
// 005632cb: XOR EDI,EDI
// 005632cd: CALL core_script.cpp_FUN_00567630
//   XREF to: 00567630 (UNCONDITIONAL_CALL)
// 005632d2: ADD ESP,0x4
// 005632d5: MOV EAX,[0x00680d50]
//   Label: LAB_005632d5
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 005632da: CMP ESI,dword ptr [EAX + 0x28]
//   XREF to: 0310f880 (READ)
// 005632dd: JGE 0x00563312
//   XREF to: 00563312 (CONDITIONAL_JUMP)
// 005632df: MOV EAX,dword ptr [EAX + 0x2c]
//   XREF to: 0310f884 (READ)
// 005632e2: MOV EAX,dword ptr [EDI + EAX*0x1 + 0x100]
// 005632e9: CMP EAX,0x8
// 005632ec: JNC 0x00563309
//   XREF to: 00563309 (CONDITIONAL_JUMP)
// 005632ee: PUSH ESI
//   Label: LAB_005632ee
// 005632ef: MOV EBX,dword ptr [0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 005632f5: PUSH EBX
//   XREF to: 0310f858 (DATA)
// 005632f6: CALL core_script.cpp_CScript_removeEventXRef_FUN_005676e0
//   XREF to: 005676e0 (UNCONDITIONAL_CALL)
// 005632fb: ADD ESP,0x8
// 005632fe: JMP 0x005632d5
//   XREF to: 005632d5 (UNCONDITIONAL_JUMP)
// 00563300: INC ESI
//   Label: LAB_00563300
// 00563301: ADD EDI,0x114
// 00563307: JMP 0x005632d5
//   XREF to: 005632d5 (UNCONDITIONAL_JUMP)
// 00563309: JBE 0x00563300
//   Label: LAB_00563309
//   XREF to: 00563300 (CONDITIONAL_JUMP)
// 0056330b: CMP EAX,0x9
// 0056330e: JZ 0x00563300
//   XREF to: 00563300 (CONDITIONAL_JUMP)
// 00563310: JMP 0x005632ee
//   XREF to: 005632ee (UNCONDITIONAL_JUMP)
// 00563312: MOV ECX,dword ptr [EBP + 0x14]
//   Label: LAB_00563312
//   XREF to: Stack[0x4] (READ)
// 00563315: PUSH ECX
// 00563316: LEA EBX,[ESP + 0x2f90]
//   XREF to: Stack[-0x7cc] (DATA)
// 0056331d: PUSH EBX
// 0056331e: PUSH EAX
//   XREF to: 0310f858 (DATA)
// 0056331f: CALL core_script.cpp_FUN_005677a0
//   XREF to: 005677a0 (UNCONDITIONAL_CALL)
// 00563324: ADD ESP,0xc
// 00563327: TEST EAX,EAX
// 00563329: JZ 0x005629b2
//   XREF to: 005629b2 (CONDITIONAL_JUMP)
// 0056332f: MOV ESI,0x1
// 00563334: MOV EAX,ESI
// 00563336: MOV ESP,EBP
// 00563338: POP EBP
// 00563339: POP EDI
// 0056333a: POP ESI
// 0056333b: POP EBX
// 0056333c: RET
// 0056333d: PUSH 0x1
//   Label: caseD_d
// 0056333f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00563342: PUSH EAX
// 00563343: PUSH 0x643c6c
//   XREF to: 00643c6c (DATA)
// 00563348: PUSH 0x643c72
//   XREF to: 00643c72 (DATA)
// 0056334d: LEA EAX,[ESP + 0x2f9c]
//   XREF to: Stack[-0x7cc] (DATA)
// 00563354: PUSH EAX
// 00563355: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0056335b: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0056335c: CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   XREF to: 0049f270 (UNCONDITIONAL_CALL)
// 00563361: ADD ESP,0x18
// 00563364: TEST EAX,EAX
// 00563366: JZ 0x005629b2
//   XREF to: 005629b2 (CONDITIONAL_JUMP)
// 0056336c: MOV ESI,0x1
// 00563371: MOV EAX,ESI
// 00563373: MOV ESP,EBP
// 00563375: POP EBP
// 00563376: POP EDI
// 00563377: POP ESI
// 00563378: POP EBX
// 00563379: RET
// 0056337a: PUSH 0x643c78
//   Label: caseD_e
//   XREF to: 00643c78 (DATA)
// 0056337f: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00563385: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 00563386: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0056338b: ADD ESP,0x8
// 0056338e: XOR ESI,ESI
// 00563390: MOV EAX,ESI
// 00563392: MOV ESP,EBP
// 00563394: POP EBP
// 00563395: POP EDI
// 00563396: POP ESI
// 00563397: POP EBX
// 00563398: RET
// 00563399: MOV ESI,dword ptr [0x00680d50]
//   Label: caseD_f
//   XREF to: 00680d50 (READ)
// 0056339f: PUSH ESI
//   XREF to: 0310f858 (DATA)
// 005633a0: XOR EDI,EDI
// 005633a2: CALL core_script.cpp_FUN_00567630
//   XREF to: 00567630 (UNCONDITIONAL_CALL)
// 005633a7: ADD ESP,0x4
// 005633aa: XOR ESI,ESI
// 005633ac: MOV EAX,[0x00680d50]
//   Label: LAB_005633ac
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 005633b1: CMP ESI,dword ptr [EAX + 0x28]
//   XREF to: 0310f880 (READ)
// 005633b4: JGE 0x005633e8
//   XREF to: 005633e8 (CONDITIONAL_JUMP)
// 005633b6: MOV EAX,dword ptr [EAX + 0x2c]
//   XREF to: 0310f884 (READ)
// 005633b9: MOV EAX,dword ptr [EDI + EAX*0x1 + 0x100]
// 005633c0: CMP EAX,0x5
// 005633c3: JNC 0x005633df
//   XREF to: 005633df (CONDITIONAL_JUMP)
// 005633c5: PUSH ESI
//   Label: LAB_005633c5
// 005633c6: MOV EAX,[0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 005633cb: PUSH EAX
//   XREF to: 0310f858 (DATA)
// 005633cc: CALL core_script.cpp_CScript_removeEventXRef_FUN_005676e0
//   XREF to: 005676e0 (UNCONDITIONAL_CALL)
// 005633d1: ADD ESP,0x8
// 005633d4: JMP 0x005633ac
//   XREF to: 005633ac (UNCONDITIONAL_JUMP)
// 005633d6: INC ESI
//   Label: LAB_005633d6
// 005633d7: ADD EDI,0x114
// 005633dd: JMP 0x005633ac
//   XREF to: 005633ac (UNCONDITIONAL_JUMP)
// 005633df: JBE 0x005633d6
//   Label: LAB_005633df
//   XREF to: 005633d6 (CONDITIONAL_JUMP)
// 005633e1: CMP EAX,0x6
// 005633e4: JZ 0x005633d6
//   XREF to: 005633d6 (CONDITIONAL_JUMP)
// 005633e6: JMP 0x005633c5
//   XREF to: 005633c5 (UNCONDITIONAL_JUMP)
// 005633e8: MOV EBX,dword ptr [EBP + 0x14]
//   Label: LAB_005633e8
//   XREF to: Stack[0x4] (READ)
// 005633eb: PUSH EBX
// 005633ec: LEA EBX,[ESP + 0x2f90]
//   XREF to: Stack[-0x7cc] (DATA)
// 005633f3: PUSH EBX
// 005633f4: PUSH EAX
//   XREF to: 0310f858 (DATA)
// 005633f5: CALL core_script.cpp_FUN_005677a0
//   XREF to: 005677a0 (UNCONDITIONAL_CALL)
// 005633fa: ADD ESP,0xc
// 005633fd: TEST EAX,EAX
// 005633ff: JZ 0x005629b2
//   XREF to: 005629b2 (CONDITIONAL_JUMP)
// 00563405: MOV ESI,0x1
// 0056340a: MOV EAX,ESI
// 0056340c: MOV ESP,EBP
// 0056340e: POP EBP
// 0056340f: POP EDI
// 00563410: POP ESI
// 00563411: POP EBX
// 00563412: RET
// 00563413: LEA EAX,[ESP + 0x20ec]
//   Label: caseD_11
//   XREF to: Stack[-0x166c] (DATA)
// 0056341a: PUSH EAX
// 0056341b: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 00563420: ADD ESP,0x4
// 00563423: PUSH 0x643c8c
//   XREF to: 00643c8c (DATA)
// 00563428: LEA EAX,[ESP + 0x20f0]
//   XREF to: Stack[-0x166c] (DATA)
// 0056342f: PUSH EAX
// 00563430: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00563435: ADD ESP,0x8
// 00563438: PUSH 0x643c91
//   XREF to: 00643c91 (DATA)
// 0056343d: LEA EAX,[ESP + 0x20f0]
//   XREF to: Stack[-0x166c] (DATA)
// 00563444: PUSH EAX
// 00563445: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0056344a: ADD ESP,0x8
// 0056344d: PUSH 0x643c97
//   XREF to: 00643c97 (DATA)
// 00563452: LEA EAX,[ESP + 0x20f0]
//   XREF to: Stack[-0x166c] (DATA)
// 00563459: PUSH EAX
// 0056345a: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0056345f: ADD ESP,0x8
// 00563462: PUSH 0x0
// 00563464: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00563467: PUSH EBX
// 00563468: LEA EAX,[ESP + 0x20f4]
//   XREF to: Stack[-0x166c] (DATA)
// 0056346f: PUSH EAX
// 00563470: CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030
//   XREF to: 004a3030 (UNCONDITIONAL_CALL)
// 00563475: ADD ESP,0x8
// 00563478: PUSH EAX
// 00563479: LEA EAX,[ESP + 0x2f94]
//   XREF to: Stack[-0x7cc] (DATA)
// 00563480: PUSH EAX
// 00563481: LEA EAX,[ESP + 0x20f8]
//   XREF to: Stack[-0x166c] (DATA)
// 00563488: PUSH EAX
// 00563489: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0056348e: ADD ESP,0x10
// 00563491: TEST EAX,EAX
// 00563493: JL 0x005634e4
//   XREF to: 005634e4 (CONDITIONAL_JUMP)
// 00563495: PUSH EAX
// 00563496: LEA EAX,[ESP + 0x20f0]
//   XREF to: Stack[-0x166c] (DATA)
// 0056349d: PUSH EAX
// 0056349e: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 005634a3: ADD ESP,0x8
// 005634a6: MOV EDI,EBX
// 005634a8: MOV ESI,EAX
// 005634aa: PUSH EDI
// 005634ab: MOV AL,byte ptr [ESI]
//   Label: LAB_005634ab
// 005634ad: MOV byte ptr [EDI],AL
// 005634af: CMP AL,0x0
// 005634b1: JZ 0x005634c3
//   XREF to: 005634c3 (CONDITIONAL_JUMP)
// 005634b3: MOV AL,byte ptr [ESI + 0x1]
// 005634b6: ADD ESI,0x2
// 005634b9: MOV byte ptr [EDI + 0x1],AL
// 005634bc: ADD EDI,0x2
// 005634bf: CMP AL,0x0
// 005634c1: JNZ 0x005634ab
//   XREF to: 005634ab (CONDITIONAL_JUMP)
// 005634c3: POP EDI
//   Label: LAB_005634c3
// 005634c4: PUSH 0x0
// 005634c6: LEA EAX,[ESP + 0x20f0]
//   XREF to: Stack[-0x166c] (DATA)
// 005634cd: PUSH EAX
// 005634ce: MOV ESI,0x1
// 005634d3: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 005634d8: ADD ESP,0x8
// 005634db: MOV EAX,ESI
// 005634dd: MOV ESP,EBP
// 005634df: POP EBP
// 005634e0: POP EDI
// 005634e1: POP ESI
// 005634e2: POP EBX
// 005634e3: RET
// 005634e4: PUSH 0x0
//   Label: LAB_005634e4
// 005634e6: LEA EAX,[ESP + 0x20f0]
//   XREF to: Stack[-0x166c] (DATA)
// 005634ed: PUSH EAX
// 005634ee: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 005634f3: ADD ESP,0x8
// 005634f6: XOR ESI,ESI
// 005634f8: MOV EAX,ESI
// 005634fa: MOV ESP,EBP
// 005634fc: POP EBP
// 005634fd: POP EDI
// 005634fe: POP ESI
// 005634ff: POP EBX
// 00563500: RET
// 00563501: LEA EAX,[ESP + 0x34e8]
//   Label: caseD_12
//   XREF to: Stack[-0x270] (DATA)
// 00563508: PUSH EAX
// 00563509: LEA EAX,[ESP + 0x32ec]
//   XREF to: Stack[-0x470] (DATA)
// 00563510: PUSH EAX
// 00563511: LEA EAX,[ESP + 0x33f0]
//   XREF to: Stack[-0x370] (DATA)
// 00563518: PUSH EAX
// 00563519: PUSH 0x0
// 0056351b: ADD EBX,0x25c
// 00563521: PUSH EBX
// 00563522: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 00563527: ADD ESP,0x14
// 0056352a: LEA EAX,[ESP + 0x34e8]
//   XREF to: Stack[-0x270] (DATA)
// 00563531: PUSH EAX
// 00563532: LEA EAX,[ESP + 0x32ec]
//   XREF to: Stack[-0x470] (DATA)
// 00563539: PUSH EAX
// 0056353a: PUSH 0x0
// 0056353c: PUSH 0x0
// 0056353e: LEA EAX,[ESP + 0x31f4]
//   XREF to: Stack[-0x574] (DATA)
// 00563545: PUSH EAX
// 00563546: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 0056354b: ADD ESP,0x14
// 0056354e: PUSH 0x1
// 00563550: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00563553: PUSH EDX
// 00563554: LEA EAX,[ESP + 0x31ec]
//   XREF to: Stack[-0x574] (DATA)
// 0056355b: PUSH EAX
// 0056355c: LEA EAX,[ESP + 0x33f4]
//   XREF to: Stack[-0x370] (DATA)
// 00563563: PUSH EAX
// 00563564: LEA EAX,[ESP + 0x2f9c]
//   XREF to: Stack[-0x7cc] (DATA)
// 0056356b: PUSH EAX
// 0056356c: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00563572: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00563573: CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   XREF to: 0049f270 (UNCONDITIONAL_CALL)
// 00563578: ADD ESP,0x18
// 0056357b: TEST EAX,EAX
// 0056357d: JZ 0x005629b2
//   XREF to: 005629b2 (CONDITIONAL_JUMP)
// 00563583: MOV ESI,0x1
// 00563588: MOV EAX,ESI
// 0056358a: MOV ESP,EBP
// 0056358c: POP EBP
// 0056358d: POP EDI
// 0056358e: POP ESI
// 0056358f: POP EBX
// 00563590: RET
// 00563591: LEA EAX,[ESP + 0x2494]
//   Label: caseD_13
//   XREF to: Stack[-0x12c4] (DATA)
// 00563598: PUSH EAX
// 00563599: XOR EDI,EDI
// 0056359b: XOR ESI,ESI
// 0056359d: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 005635a2: ADD ESP,0x4
// 005635a5: MOV EAX,[0x006810c8]
//   Label: LAB_005635a5
//   XREF to: 006810c8 (READ)
// 005635aa: CMP EDI,dword ptr [EAX + 0x19a2c]
//   XREF to: 0312dca4 (READ)
// 005635b0: JGE 0x005635e4
//   XREF to: 005635e4 (CONDITIONAL_JUMP)
// 005635b2: LEA EBX,[EAX + ESI*0x1]
//   XREF to: 03114278 (PARAM)
//   XREF to: 03115b10 (PARAM)
//   XREF to: 03114278 (DATA)
// 005635b5: CMP dword ptr [EBX + 0x19a30],0x0
//   XREF to: 0312dca8 (READ)
//   XREF to: 0312f540 (READ)
// 005635bc: JZ 0x005635c7
//   XREF to: 005635c7 (CONDITIONAL_JUMP)
// 005635be: INC EDI
//   Label: LAB_005635be
// 005635bf: ADD ESI,0x1898
// 005635c5: JMP 0x005635a5
//   XREF to: 005635a5 (UNCONDITIONAL_JUMP)
// 005635c7: ADD EAX,0x19a30
//   Label: LAB_005635c7
// 005635cc: ADD EAX,ESI
// 005635ce: ADD EAX,0x4
// 005635d1: PUSH EAX
//   XREF to: 0312f544 (DATA)
// 005635d2: LEA EAX,[ESP + 0x2498]
//   XREF to: Stack[-0x12c4] (DATA)
// 005635d9: PUSH EAX
// 005635da: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005635df: ADD ESP,0x8
// 005635e2: JMP 0x005635be
//   XREF to: 005635be (UNCONDITIONAL_JUMP)
// 005635e4: PUSH 0x0
//   Label: LAB_005635e4
// 005635e6: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005635e9: PUSH ECX
// 005635ea: LEA EAX,[ESP + 0x249c]
//   XREF to: Stack[-0x12c4] (DATA)
// 005635f1: PUSH EAX
// 005635f2: CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030
//   XREF to: 004a3030 (UNCONDITIONAL_CALL)
// 005635f7: ADD ESP,0x8
// 005635fa: PUSH EAX
// 005635fb: LEA EAX,[ESP + 0x2f94]
//   XREF to: Stack[-0x7cc] (DATA)
// 00563602: PUSH EAX
// 00563603: LEA EAX,[ESP + 0x24a0]
//   XREF to: Stack[-0x12c4] (DATA)
// 0056360a: PUSH EAX
// 0056360b: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 00563610: ADD ESP,0x10
// 00563613: TEST EAX,EAX
// 00563615: JL 0x00563667
//   XREF to: 00563667 (CONDITIONAL_JUMP)
// 00563617: PUSH EAX
// 00563618: LEA EAX,[ESP + 0x2498]
//   XREF to: Stack[-0x12c4] (DATA)
// 0056361f: PUSH EAX
// 00563620: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 00563625: ADD ESP,0x8
// 00563628: MOV ESI,EAX
// 0056362a: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056362d: PUSH EDI
// 0056362e: MOV AL,byte ptr [ESI]
//   Label: LAB_0056362e
// 00563630: MOV byte ptr [EDI],AL
// 00563632: CMP AL,0x0
// 00563634: JZ 0x00563646
//   XREF to: 00563646 (CONDITIONAL_JUMP)
// 00563636: MOV AL,byte ptr [ESI + 0x1]
// 00563639: ADD ESI,0x2
// 0056363c: MOV byte ptr [EDI + 0x1],AL
// 0056363f: ADD EDI,0x2
// 00563642: CMP AL,0x0
// 00563644: JNZ 0x0056362e
//   XREF to: 0056362e (CONDITIONAL_JUMP)
// 00563646: POP EDI
//   Label: LAB_00563646
// 00563647: PUSH 0x0
// 00563649: LEA EAX,[ESP + 0x2498]
//   XREF to: Stack[-0x12c4] (DATA)
// 00563650: PUSH EAX
// 00563651: MOV ESI,0x1
// 00563656: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0056365b: ADD ESP,0x8
// 0056365e: MOV EAX,ESI
// 00563660: MOV ESP,EBP
// 00563662: POP EBP
// 00563663: POP EDI
// 00563664: POP ESI
// 00563665: POP EBX
// 00563666: RET
// 00563667: PUSH 0x0
//   Label: LAB_00563667
// 00563669: LEA EAX,[ESP + 0x2498]
//   XREF to: Stack[-0x12c4] (DATA)
// 00563670: PUSH EAX
// 00563671: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00563676: ADD ESP,0x8
// 00563679: XOR ESI,ESI
// 0056367b: MOV EAX,ESI
// 0056367d: MOV ESP,EBP
// 0056367f: POP EBP
// 00563680: POP EDI
// 00563681: POP ESI
// 00563682: POP EBX
// 00563683: RET
// 00563684: MOV ECX,dword ptr [0x00680d50]
//   Label: caseD_20
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 0056368a: PUSH ECX
//   XREF to: 0310f858 (DATA)
// 0056368b: XOR ESI,ESI
// 0056368d: XOR EDI,EDI
// 0056368f: CALL core_script.cpp_FUN_00567630
//   XREF to: 00567630 (UNCONDITIONAL_CALL)
// 00563694: ADD ESP,0x4
// 00563697: MOV EAX,[0x00680d50]
//   Label: LAB_00563697
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 0056369c: CMP ESI,dword ptr [EAX + 0x28]
//   XREF to: 0310f880 (READ)
// 0056369f: JGE 0x005636d1
//   XREF to: 005636d1 (CONDITIONAL_JUMP)
// 005636a1: MOV EAX,dword ptr [EAX + 0x2c]
//   XREF to: 0310f884 (READ)
// 005636a4: MOV EAX,dword ptr [EDI + EAX*0x1 + 0x100]
// 005636ab: CMP EAX,0x4
// 005636ae: JBE 0x005636ca
//   XREF to: 005636ca (CONDITIONAL_JUMP)
// 005636b0: PUSH ESI
//   Label: default
// 005636b1: MOV EAX,[0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 005636b6: PUSH EAX
//   XREF to: 0310f858 (DATA)
// 005636b7: CALL core_script.cpp_CScript_removeEventXRef_FUN_005676e0
//   XREF to: 005676e0 (UNCONDITIONAL_CALL)
// 005636bc: ADD ESP,0x8
// 005636bf: JMP 0x00563697
//   XREF to: 00563697 (UNCONDITIONAL_JUMP)
// 005636c1: INC ESI
//   Label: caseD_0
// 005636c2: ADD EDI,0x114
// 005636c8: JMP 0x00563697
//   XREF to: 00563697 (UNCONDITIONAL_JUMP)
// 005636ca: JMP dword ptr [EAX*0x4 + 0x562888]
//   Label: switchD
//   XREF to: 005636c1 (COMPUTED_JUMP)
//   XREF to: 00562888 (DATA)
// 005636d1: MOV EBX,dword ptr [EBP + 0x14]
//   Label: LAB_005636d1
//   XREF to: Stack[0x4] (READ)
// 005636d4: PUSH EBX
// 005636d5: LEA EBX,[ESP + 0x2f90]
//   XREF to: Stack[-0x7cc] (DATA)
// 005636dc: PUSH EBX
// 005636dd: PUSH EAX
//   XREF to: 0310f858 (DATA)
// 005636de: CALL core_script.cpp_FUN_005677a0
//   XREF to: 005677a0 (UNCONDITIONAL_CALL)
// 005636e3: ADD ESP,0xc
// 005636e6: TEST EAX,EAX
// 005636e8: JZ 0x005629b2
//   XREF to: 005629b2 (CONDITIONAL_JUMP)
// 005636ee: MOV ESI,0x1
// 005636f3: MOV EAX,ESI
// 005636f5: MOV ESP,EBP
// 005636f7: POP EBP
// 005636f8: POP EDI
// 005636f9: POP ESI
// 005636fa: POP EBX
// 005636fb: RET
// 005636fc: MOV ESI,dword ptr [0x00680d50]
//   Label: caseD_15
//   XREF to: 00680d50 (READ)
// 00563702: PUSH ESI
//   XREF to: 0310f858 (DATA)
// 00563703: XOR EDI,EDI
// 00563705: CALL core_script.cpp_FUN_00567630
//   XREF to: 00567630 (UNCONDITIONAL_CALL)
// 0056370a: ADD ESP,0x4
// 0056370d: XOR ESI,ESI
// 0056370f: MOV EAX,[0x00680d50]
//   Label: LAB_0056370f
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 00563714: CMP ESI,dword ptr [EAX + 0x28]
//   XREF to: 0310f880 (READ)
// 00563717: JGE 0x00563747
//   XREF to: 00563747 (CONDITIONAL_JUMP)
// 00563719: MOV EAX,dword ptr [EAX + 0x2c]
//   XREF to: 0310f884 (READ)
// 0056371c: MOV EAX,dword ptr [EDI + EAX*0x1 + 0x100]
// 00563723: TEST EAX,EAX
// 00563725: JBE 0x0056372c
//   XREF to: 0056372c (CONDITIONAL_JUMP)
// 00563727: CMP EAX,0x2
// 0056372a: JNZ 0x00563735
//   XREF to: 00563735 (CONDITIONAL_JUMP)
// 0056372c: INC ESI
//   Label: LAB_0056372c
// 0056372d: ADD EDI,0x114
// 00563733: JMP 0x0056370f
//   XREF to: 0056370f (UNCONDITIONAL_JUMP)
// 00563735: PUSH ESI
//   Label: LAB_00563735
// 00563736: MOV EBX,dword ptr [0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 0056373c: PUSH EBX
//   XREF to: 0310f858 (DATA)
// 0056373d: CALL core_script.cpp_CScript_removeEventXRef_FUN_005676e0
//   XREF to: 005676e0 (UNCONDITIONAL_CALL)
// 00563742: ADD ESP,0x8
// 00563745: JMP 0x0056370f
//   XREF to: 0056370f (UNCONDITIONAL_JUMP)
// 00563747: MOV ECX,dword ptr [EBP + 0x14]
//   Label: LAB_00563747
//   XREF to: Stack[0x4] (READ)
// 0056374a: PUSH ECX
// 0056374b: LEA EBX,[ESP + 0x2f90]
//   XREF to: Stack[-0x7cc] (DATA)
// 00563752: PUSH EBX
// 00563753: PUSH EAX
//   XREF to: 0310f858 (DATA)
// 00563754: CALL core_script.cpp_FUN_005677a0
//   XREF to: 005677a0 (UNCONDITIONAL_CALL)
// 00563759: ADD ESP,0xc
// 0056375c: TEST EAX,EAX
// 0056375e: JZ 0x005629b2
//   XREF to: 005629b2 (CONDITIONAL_JUMP)
// 00563764: MOV ESI,0x1
// 00563769: MOV EAX,ESI
// 0056376b: MOV ESP,EBP
// 0056376d: POP EBP
// 0056376e: POP EDI
// 0056376f: POP ESI
// 00563770: POP EBX
// 00563771: RET
// 00563772: MOV EBX,dword ptr [0x00680d50]
//   Label: caseD_16
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 00563778: PUSH EBX
//   XREF to: 0310f858 (DATA)
// 00563779: XOR ESI,ESI
// 0056377b: XOR EDI,EDI
// 0056377d: CALL core_script.cpp_FUN_00567630
//   XREF to: 00567630 (UNCONDITIONAL_CALL)
// 00563782: ADD ESP,0x4
// 00563785: MOV EAX,[0x00680d50]
//   Label: LAB_00563785
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 0056378a: CMP ESI,dword ptr [EAX + 0x28]
//   XREF to: 0310f880 (READ)
// 0056378d: JGE 0x005637bd
//   XREF to: 005637bd (CONDITIONAL_JUMP)
// 0056378f: MOV EAX,dword ptr [EAX + 0x2c]
//   XREF to: 0310f884 (READ)
// 00563792: MOV EAX,dword ptr [EDI + EAX*0x1 + 0x100]
// 00563799: TEST EAX,EAX
// 0056379b: JBE 0x005637a2
//   XREF to: 005637a2 (CONDITIONAL_JUMP)
// 0056379d: CMP EAX,0x3
// 005637a0: JNZ 0x005637ab
//   XREF to: 005637ab (CONDITIONAL_JUMP)
// 005637a2: INC ESI
//   Label: LAB_005637a2
// 005637a3: ADD EDI,0x114
// 005637a9: JMP 0x00563785
//   XREF to: 00563785 (UNCONDITIONAL_JUMP)
// 005637ab: PUSH ESI
//   Label: LAB_005637ab
// 005637ac: MOV EBX,dword ptr [0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 005637b2: PUSH EBX
//   XREF to: 0310f858 (DATA)
// 005637b3: CALL core_script.cpp_CScript_removeEventXRef_FUN_005676e0
//   XREF to: 005676e0 (UNCONDITIONAL_CALL)
// 005637b8: ADD ESP,0x8
// 005637bb: JMP 0x00563785
//   XREF to: 00563785 (UNCONDITIONAL_JUMP)
// 005637bd: MOV ECX,dword ptr [EBP + 0x14]
//   Label: LAB_005637bd
//   XREF to: Stack[0x4] (READ)
// 005637c0: PUSH ECX
// 005637c1: LEA EBX,[ESP + 0x2f90]
//   XREF to: Stack[-0x7cc] (DATA)
// 005637c8: PUSH EBX
// 005637c9: PUSH EAX
//   XREF to: 0310f858 (DATA)
// 005637ca: CALL core_script.cpp_FUN_005677a0
//   XREF to: 005677a0 (UNCONDITIONAL_CALL)
// 005637cf: ADD ESP,0xc
// 005637d2: TEST EAX,EAX
// 005637d4: JZ 0x005629b2
//   XREF to: 005629b2 (CONDITIONAL_JUMP)
// 005637da: MOV ESI,0x1
// 005637df: MOV EAX,ESI
// 005637e1: MOV ESP,EBP
// 005637e3: POP EBP
// 005637e4: POP EDI
// 005637e5: POP ESI
// 005637e6: POP EBX
// 005637e7: RET
// 005637e8: PUSH 0x1
//   Label: caseD_14
// 005637ea: PUSH 0x4
// 005637ec: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005637ef: PUSH EDI
// 005637f0: LEA EAX,[ESP + 0x2f98]
//   XREF to: Stack[-0x7cc] (DATA)
// 005637f7: PUSH EAX
// 005637f8: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005637fd: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 005637fe: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 00563803: ADD ESP,0x14
// 00563806: TEST EAX,EAX
// 00563808: JZ 0x005629b2
//   XREF to: 005629b2 (CONDITIONAL_JUMP)
// 0056380e: MOV ESI,0x1
// 00563813: MOV EAX,ESI
// 00563815: MOV ESP,EBP
// 00563817: POP EBP
// 00563818: POP EDI
// 00563819: POP ESI
// 0056381a: POP EBX
// 0056381b: RET
// 0056381c: PUSH ESI
//   Label: caseD_17
// 0056381d: PUSH EBX
// 0056381e: CALL core_script.cpp_FUN_00562860
//   XREF to: 00562860 (UNCONDITIONAL_CALL)
// 00563823: ADD ESP,0x8
// 00563826: MOV EDI,EAX
// 00563828: MOV dword ptr [ESP + 0x372c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0056382f: TEST EAX,EAX
// 00563831: JZ 0x005629b2
//   XREF to: 005629b2 (CONDITIONAL_JUMP)
// 00563837: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3754] (DATA)
// 0056383b: PUSH EAX
// 0056383c: XOR ESI,ESI
// 0056383e: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 00563843: MOV EDX,0xffffffff
// 00563848: ADD ESP,0x4
// 0056384b: MOV ECX,dword ptr [EDI + 0x964]
// 00563851: MOV dword ptr [ESP + 0x3730],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 00563858: TEST ECX,ECX
// 0056385a: JLE 0x005638e2
//   XREF to: 005638e2 (CONDITIONAL_JUMP)
// 00563860: MOV EAX,EDI
// 00563862: ADD EAX,0x4
// 00563865: LEA EBX,[EDI + 0x968]
// 0056386b: MOV dword ptr [ESP + 0x3734],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00563872: IMUL EAX,dword ptr [EDI + 0x98c],0x1e
//   Label: LAB_00563872
// 00563879: ADD EAX,dword ptr [ESP + 0x3734]
//   XREF to: Stack[-0x24] (READ)
// 00563880: PUSH EAX
// 00563881: PUSH EBX
// 00563882: PUSH 0x643c9e
//   XREF to: 00643c9e (DATA)
// 00563887: LEA EAX,[ESP + 0x30c4]
//   XREF to: Stack[-0x6a0] (DATA)
// 0056388e: PUSH EAX
// 0056388f: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00563894: ADD ESP,0x10
// 00563897: LEA EAX,[ESP + 0x30b8]
//   XREF to: Stack[-0x6a0] (DATA)
// 0056389e: PUSH EAX
// 0056389f: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x3754] (DATA)
// 005638a3: PUSH EAX
// 005638a4: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005638a9: ADD ESP,0x8
// 005638ac: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005638af: PUSH EAX
// 005638b0: PUSH EBX
// 005638b1: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005638b6: ADD ESP,0x8
// 005638b9: TEST EAX,EAX
// 005638bb: JNZ 0x005638c4
//   XREF to: 005638c4 (CONDITIONAL_JUMP)
// 005638bd: MOV dword ptr [ESP + 0x3730],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 005638c4: MOV EAX,dword ptr [ESP + 0x372c]
//   Label: LAB_005638c4
//   XREF to: Stack[-0x2c] (READ)
// 005638cb: ADD EBX,0x54c
// 005638d1: INC ESI
// 005638d2: MOV ECX,dword ptr [EAX + 0x964]
// 005638d8: ADD EDI,0x54c
// 005638de: CMP ESI,ECX
// 005638e0: JL 0x00563872
//   XREF to: 00563872 (CONDITIONAL_JUMP)
// 005638e2: PUSH 0x0
//   Label: LAB_005638e2
// 005638e4: MOV EBX,dword ptr [ESP + 0x3734]
//   XREF to: Stack[-0x28] (READ)
// 005638eb: PUSH EBX
// 005638ec: LEA EAX,[ESP + 0x2f94]
//   XREF to: Stack[-0x7cc] (DATA)
// 005638f3: PUSH EAX
// 005638f4: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x3754] (DATA)
// 005638f8: PUSH EAX
// 005638f9: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 005638fe: ADD ESP,0x10
// 00563901: TEST EAX,EAX
// 00563903: JL 0x00563936
//   XREF to: 00563936 (CONDITIONAL_JUMP)
// 00563905: PUSH 0x0
// 00563907: PUSH EAX
// 00563908: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056390b: PUSH ESI
// 0056390c: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x3754] (DATA)
// 00563910: PUSH EAX
// 00563911: CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   XREF to: 004a2f80 (UNCONDITIONAL_CALL)
// 00563916: ADD ESP,0x10
// 00563919: PUSH 0x0
// 0056391b: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x3754] (DATA)
// 0056391f: PUSH EAX
// 00563920: MOV ESI,0x1
// 00563925: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0056392a: ADD ESP,0x8
// 0056392d: MOV EAX,ESI
// 0056392f: MOV ESP,EBP
// 00563931: POP EBP
// 00563932: POP EDI
// 00563933: POP ESI
// 00563934: POP EBX
// 00563935: RET
// 00563936: PUSH 0x0
//   Label: LAB_00563936
// 00563938: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x3754] (DATA)
// 0056393c: PUSH EAX
// 0056393d: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00563942: ADD ESP,0x8
// 00563945: XOR ESI,ESI
// 00563947: MOV EAX,ESI
// 00563949: MOV ESP,EBP
// 0056394b: POP EBP
// 0056394c: POP EDI
// 0056394d: POP ESI
// 0056394e: POP EBX
// 0056394f: RET
// 00563950: PUSH ESI
//   Label: caseD_18
// 00563951: PUSH EBX
// 00563952: CALL core_script.cpp_FUN_00562860
//   XREF to: 00562860 (UNCONDITIONAL_CALL)
// 00563957: MOV EDI,EAX
// 00563959: ADD ESP,0x8
// 0056395c: MOV EBX,EAX
// 0056395e: TEST EAX,EAX
// 00563960: JZ 0x005629b2
//   XREF to: 005629b2 (CONDITIONAL_JUMP)
// 00563966: LEA EAX,[ESP + 0x199c]
//   XREF to: Stack[-0x1dbc] (DATA)
// 0056396d: PUSH EAX
// 0056396e: XOR ESI,ESI
// 00563970: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 00563975: MOV EAX,dword ptr [EDI + 0x964]
// 0056397b: ADD ESP,0x4
// 0056397e: TEST EAX,EAX
// 00563980: JLE 0x005639b0
//   XREF to: 005639b0 (CONDITIONAL_JUMP)
// 00563982: ADD EDI,0x4
// 00563985: PUSH EDI
//   Label: LAB_00563985
// 00563986: LEA EAX,[ESP + 0x19a0]
//   XREF to: Stack[-0x1dbc] (DATA)
// 0056398d: PUSH EAX
// 0056398e: INC ESI
// 0056398f: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00563994: ADD EDI,0x1e
// 00563997: MOV EAX,dword ptr [EBX + 0x964]
// 0056399d: ADD ESP,0x8
// 005639a0: CMP ESI,EAX
// 005639a2: JL 0x00563985
//   XREF to: 00563985 (CONDITIONAL_JUMP)
// 005639a4: LEA EAX,[EAX]
// 005639aa: LEA EDX,[EDX]
// 005639b0: PUSH 0x0
//   Label: LAB_005639b0
// 005639b2: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005639b5: PUSH EDX
// 005639b6: LEA EAX,[ESP + 0x19a4]
//   XREF to: Stack[-0x1dbc] (DATA)
// 005639bd: PUSH EAX
// 005639be: CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030
//   XREF to: 004a3030 (UNCONDITIONAL_CALL)
// 005639c3: ADD ESP,0x8
// 005639c6: PUSH EAX
// 005639c7: LEA EAX,[ESP + 0x2f94]
//   XREF to: Stack[-0x7cc] (DATA)
// 005639ce: PUSH EAX
// 005639cf: LEA EAX,[ESP + 0x19a8]
//   XREF to: Stack[-0x1dbc] (DATA)
// 005639d6: PUSH EAX
// 005639d7: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 005639dc: ADD ESP,0x10
// 005639df: TEST EAX,EAX
// 005639e1: JL 0x00563a33
//   XREF to: 00563a33 (CONDITIONAL_JUMP)
// 005639e3: PUSH EAX
// 005639e4: LEA EAX,[ESP + 0x19a0]
//   XREF to: Stack[-0x1dbc] (DATA)
// 005639eb: PUSH EAX
// 005639ec: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 005639f1: ADD ESP,0x8
// 005639f4: MOV ESI,EAX
// 005639f6: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005639f9: PUSH EDI
// 005639fa: MOV AL,byte ptr [ESI]
//   Label: LAB_005639fa
// 005639fc: MOV byte ptr [EDI],AL
// 005639fe: CMP AL,0x0
// 00563a00: JZ 0x00563a12
//   XREF to: 00563a12 (CONDITIONAL_JUMP)
// 00563a02: MOV AL,byte ptr [ESI + 0x1]
// 00563a05: ADD ESI,0x2
// 00563a08: MOV byte ptr [EDI + 0x1],AL
// 00563a0b: ADD EDI,0x2
// 00563a0e: CMP AL,0x0
// 00563a10: JNZ 0x005639fa
//   XREF to: 005639fa (CONDITIONAL_JUMP)
// 00563a12: POP EDI
//   Label: LAB_00563a12
// 00563a13: PUSH 0x0
// 00563a15: LEA EAX,[ESP + 0x19a0]
//   XREF to: Stack[-0x1dbc] (DATA)
// 00563a1c: PUSH EAX
// 00563a1d: MOV ESI,0x1
// 00563a22: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00563a27: ADD ESP,0x8
// 00563a2a: MOV EAX,ESI
// 00563a2c: MOV ESP,EBP
// 00563a2e: POP EBP
// 00563a2f: POP EDI
// 00563a30: POP ESI
// 00563a31: POP EBX
// 00563a32: RET
// 00563a33: PUSH 0x0
//   Label: LAB_00563a33
// 00563a35: LEA EAX,[ESP + 0x19a0]
//   XREF to: Stack[-0x1dbc] (DATA)
// 00563a3c: PUSH EAX
// 00563a3d: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00563a42: ADD ESP,0x8
// 00563a45: XOR ESI,ESI
// 00563a47: MOV EAX,ESI
// 00563a49: MOV ESP,EBP
// 00563a4b: POP EBP
// 00563a4c: POP EDI
// 00563a4d: POP ESI
// 00563a4e: POP EBX
// 00563a4f: RET
// 00563a50: MOV EAX,[0x00680d50]
//   Label: caseD_19
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 00563a55: CMP dword ptr [EAX + 0x1c],0x1
//   XREF to: 0310f874 (READ)
// 00563a59: JL 0x00563aba
//   XREF to: 00563aba (CONDITIONAL_JUMP)
// 00563a5b: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x33ac] (DATA)
// 00563a62: PUSH EAX
// 00563a63: XOR EDI,EDI
// 00563a65: XOR ESI,ESI
// 00563a67: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 00563a6c: ADD ESP,0x4
// 00563a6f: MOV EAX,[0x00680d50]
//   Label: LAB_00563a6f
//   XREF to: 00680d50 (READ)
// 00563a74: CMP EDI,dword ptr [EAX + 0x1c]
//   XREF to: 0310f874 (READ)
// 00563a77: JGE 0x00563ad9
//   XREF to: 00563ad9 (CONDITIONAL_JUMP)
// 00563a79: MOV EAX,dword ptr [EAX + 0x20]
//   XREF to: 0310f878 (READ)
// 00563a7c: ADD EAX,ESI
// 00563a7e: LEA EBX,[EAX + 0x96]
// 00563a84: PUSH EBX
// 00563a85: LEA EBX,[EAX + 0x78]
// 00563a88: PUSH EBX
// 00563a89: PUSH EAX
// 00563a8a: PUSH 0x643cb8
//   XREF to: 00643cb8 (DATA)
// 00563a8f: PUSH 0x31099e8
//   XREF to: 031099e8 (DATA)
// 00563a94: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00563a99: ADD ESP,0x14
// 00563a9c: PUSH 0x31099e8
//   XREF to: 031099e8 (DATA)
// 00563aa1: LEA EAX,[ESP + 0x3b0]
//   XREF to: Stack[-0x33ac] (DATA)
// 00563aa8: PUSH EAX
// 00563aa9: INC EDI
// 00563aaa: ADD ESI,0x226
// 00563ab0: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00563ab5: ADD ESP,0x8
// 00563ab8: JMP 0x00563a6f
//   XREF to: 00563a6f (UNCONDITIONAL_JUMP)
// 00563aba: PUSH 0x643ca4
//   Label: LAB_00563aba
//   XREF to: 00643ca4 (DATA)
// 00563abf: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00563ac5: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 00563ac6: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00563acb: ADD ESP,0x8
// 00563ace: XOR ESI,ESI
// 00563ad0: MOV EAX,ESI
// 00563ad2: MOV ESP,EBP
// 00563ad4: POP EBP
// 00563ad5: POP EDI
// 00563ad6: POP ESI
// 00563ad7: POP EBX
// 00563ad8: RET
// 00563ad9: MOV ECX,dword ptr [EBP + 0x14]
//   Label: LAB_00563ad9
//   XREF to: Stack[0x4] (READ)
// 00563adc: PUSH ECX
// 00563add: LEA EAX,[ESP + 0x3b0]
//   XREF to: Stack[-0x33ac] (DATA)
// 00563ae4: PUSH EAX
// 00563ae5: CALL shape_edittool.cpp_CStrList_findByFirstField_FUN_004a3070
//   XREF to: 004a3070 (UNCONDITIONAL_CALL)
// 00563aea: ADD ESP,0x8
// 00563aed: TEST EAX,EAX
// 00563aef: JGE 0x00563b0b
//   XREF to: 00563b0b (CONDITIONAL_JUMP)
// 00563af1: PUSH 0x310a9e8
//   XREF to: 0310a9e8 (DATA)
// 00563af6: LEA EAX,[ESP + 0x3b0]
//   XREF to: Stack[-0x33ac] (DATA)
// 00563afd: PUSH EAX
// 00563afe: CALL shape_edittool.cpp_CStrList_findByFirstField_FUN_004a3070
//   XREF to: 004a3070 (UNCONDITIONAL_CALL)
// 00563b03: ADD ESP,0x8
// 00563b06: TEST EAX,EAX
// 00563b08: JL 0x00563b0b
//   XREF to: 00563b0b (CONDITIONAL_JUMP)
// 00563b0a: INC EAX
// 00563b0b: PUSH 0x0
//   Label: LAB_00563b0b
// 00563b0d: PUSH EAX
// 00563b0e: LEA EAX,[ESP + 0x2f94]
//   XREF to: Stack[-0x7cc] (DATA)
// 00563b15: PUSH EAX
// 00563b16: LEA EAX,[ESP + 0x3b8]
//   XREF to: Stack[-0x33ac] (DATA)
// 00563b1d: PUSH EAX
// 00563b1e: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 00563b23: ADD ESP,0x10
// 00563b26: TEST EAX,EAX
// 00563b28: JL 0x00563ba1
//   XREF to: 00563ba1 (CONDITIONAL_JUMP)
// 00563b2a: IMUL EBX,EAX,0x226
// 00563b30: MOV ESI,dword ptr [0x00680d50]
//   XREF to: 00680d50 (READ)
// 00563b36: MOV ESI,dword ptr [ESI + 0x20]
//   XREF to: 0310f878 (READ)
// 00563b39: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00563b3c: ADD ESI,EBX
// 00563b3e: PUSH EDI
// 00563b3f: MOV AL,byte ptr [ESI]
//   Label: LAB_00563b3f
// 00563b41: MOV byte ptr [EDI],AL
// 00563b43: CMP AL,0x0
// 00563b45: JZ 0x00563b57
//   XREF to: 00563b57 (CONDITIONAL_JUMP)
// 00563b47: MOV AL,byte ptr [ESI + 0x1]
// 00563b4a: ADD ESI,0x2
// 00563b4d: MOV byte ptr [EDI + 0x1],AL
// 00563b50: ADD EDI,0x2
// 00563b53: CMP AL,0x0
// 00563b55: JNZ 0x00563b3f
//   XREF to: 00563b3f (CONDITIONAL_JUMP)
// 00563b57: POP EDI
//   Label: LAB_00563b57
// 00563b58: MOV EAX,[0x00680d50]
//   XREF to: 00680d50 (READ)
// 00563b5d: MOV ESI,dword ptr [EAX + 0x20]
//   XREF to: 0310f878 (READ)
// 00563b60: MOV EDI,0x310a9e8
//   XREF to: 0310a9e8 (DATA)
// 00563b65: ADD ESI,EBX
// 00563b67: PUSH EDI
//   XREF to: 0310a9e8 (DATA)
// 00563b68: MOV AL,byte ptr [ESI]
//   Label: LAB_00563b68
// 00563b6a: MOV byte ptr [EDI],AL
//   XREF to: 0310a9e8 (WRITE)
//   XREF to: 0310a9ea (WRITE)
// 00563b6c: CMP AL,0x0
// 00563b6e: JZ 0x00563b80
//   XREF to: 00563b80 (CONDITIONAL_JUMP)
// 00563b70: MOV AL,byte ptr [ESI + 0x1]
// 00563b73: ADD ESI,0x2
// 00563b76: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 0310a9e9 (WRITE)
//   XREF to: 0310a9eb (WRITE)
// 00563b79: ADD EDI,0x2
// 00563b7c: CMP AL,0x0
// 00563b7e: JNZ 0x00563b68
//   XREF to: 00563b68 (CONDITIONAL_JUMP)
// 00563b80: POP EDI
//   Label: LAB_00563b80
// 00563b81: PUSH 0x0
// 00563b83: LEA EAX,[ESP + 0x3b0]
//   XREF to: Stack[-0x33ac] (DATA)
// 00563b8a: PUSH EAX
// 00563b8b: MOV ESI,0x1
// 00563b90: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00563b95: ADD ESP,0x8
// 00563b98: MOV EAX,ESI
// 00563b9a: MOV ESP,EBP
// 00563b9c: POP EBP
// 00563b9d: POP EDI
// 00563b9e: POP ESI
// 00563b9f: POP EBX
// 00563ba0: RET
// 00563ba1: PUSH 0x0
//   Label: LAB_00563ba1
// 00563ba3: LEA EAX,[ESP + 0x3b0]
//   XREF to: Stack[-0x33ac] (DATA)
// 00563baa: PUSH EAX
// 00563bab: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00563bb0: ADD ESP,0x8
// 00563bb3: XOR ESI,ESI
// 00563bb5: MOV EAX,ESI
// 00563bb7: MOV ESP,EBP
// 00563bb9: POP EBP
// 00563bba: POP EDI
// 00563bbb: POP ESI
// 00563bbc: POP EBX
// 00563bbd: RET
// 00563bbe: LEA EAX,[ESP + 0x283c]
//   Label: caseD_1a
//   XREF to: Stack[-0xf1c] (DATA)
// 00563bc5: PUSH EAX
// 00563bc6: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 00563bcb: ADD ESP,0x4
// 00563bce: PUSH 0x643cc1
//   XREF to: 00643cc1 (DATA)
// 00563bd3: LEA EAX,[ESP + 0x2840]
//   XREF to: Stack[-0xf1c] (DATA)
// 00563bda: PUSH EAX
// 00563bdb: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00563be0: ADD ESP,0x8
// 00563be3: PUSH 0x643cc7
//   XREF to: 00643cc7 (DATA)
// 00563be8: LEA EAX,[ESP + 0x2840]
//   XREF to: Stack[-0xf1c] (DATA)
// 00563bef: PUSH EAX
// 00563bf0: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00563bf5: ADD ESP,0x8
// 00563bf8: PUSH 0x643cce
//   XREF to: 00643cce (DATA)
// 00563bfd: LEA EAX,[ESP + 0x2840]
//   XREF to: Stack[-0xf1c] (DATA)
// 00563c04: PUSH EAX
// 00563c05: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00563c0a: ADD ESP,0x8
// 00563c0d: PUSH 0x643cd3
//   XREF to: 00643cd3 (DATA)
// 00563c12: LEA EAX,[ESP + 0x2840]
//   XREF to: Stack[-0xf1c] (DATA)
// 00563c19: PUSH EAX
// 00563c1a: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00563c1f: ADD ESP,0x8
// 00563c22: PUSH 0x643cd9
//   XREF to: 00643cd9 (DATA)
// 00563c27: LEA EAX,[ESP + 0x2840]
//   XREF to: Stack[-0xf1c] (DATA)
// 00563c2e: PUSH EAX
// 00563c2f: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00563c34: ADD ESP,0x8
// 00563c37: PUSH 0x0
// 00563c39: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00563c3c: PUSH ECX
// 00563c3d: LEA EAX,[ESP + 0x2844]
//   XREF to: Stack[-0xf1c] (DATA)
// 00563c44: PUSH EAX
// 00563c45: CALL shape_edittool.cpp_CStrList_findString_FUN_004a3030
//   XREF to: 004a3030 (UNCONDITIONAL_CALL)
// 00563c4a: ADD ESP,0x8
// 00563c4d: PUSH EAX
// 00563c4e: LEA EAX,[ESP + 0x2f94]
//   XREF to: Stack[-0x7cc] (DATA)
// 00563c55: PUSH EAX
// 00563c56: LEA EAX,[ESP + 0x2848]
//   XREF to: Stack[-0xf1c] (DATA)
// 00563c5d: PUSH EAX
// 00563c5e: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 00563c63: ADD ESP,0x10
// 00563c66: TEST EAX,EAX
// 00563c68: JL 0x00563cba
//   XREF to: 00563cba (CONDITIONAL_JUMP)
// 00563c6a: PUSH EAX
// 00563c6b: LEA EAX,[ESP + 0x2840]
//   XREF to: Stack[-0xf1c] (DATA)
// 00563c72: PUSH EAX
// 00563c73: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 00563c78: ADD ESP,0x8
// 00563c7b: MOV ESI,EAX
// 00563c7d: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00563c80: PUSH EDI
// 00563c81: MOV AL,byte ptr [ESI]
//   Label: LAB_00563c81
// 00563c83: MOV byte ptr [EDI],AL
// 00563c85: CMP AL,0x0
// 00563c87: JZ 0x00563c99
//   XREF to: 00563c99 (CONDITIONAL_JUMP)
// 00563c89: MOV AL,byte ptr [ESI + 0x1]
// 00563c8c: ADD ESI,0x2
// 00563c8f: MOV byte ptr [EDI + 0x1],AL
// 00563c92: ADD EDI,0x2
// 00563c95: CMP AL,0x0
// 00563c97: JNZ 0x00563c81
//   XREF to: 00563c81 (CONDITIONAL_JUMP)
// 00563c99: POP EDI
//   Label: LAB_00563c99
// 00563c9a: PUSH 0x0
// 00563c9c: LEA EAX,[ESP + 0x2840]
//   XREF to: Stack[-0xf1c] (DATA)
// 00563ca3: PUSH EAX
// 00563ca4: MOV ESI,0x1
// 00563ca9: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00563cae: ADD ESP,0x8
// 00563cb1: MOV EAX,ESI
// 00563cb3: MOV ESP,EBP
// 00563cb5: POP EBP
// 00563cb6: POP EDI
// 00563cb7: POP ESI
// 00563cb8: POP EBX
// 00563cb9: RET
// 00563cba: PUSH 0x0
//   Label: LAB_00563cba
// 00563cbc: LEA EAX,[ESP + 0x2840]
//   XREF to: Stack[-0xf1c] (DATA)
// 00563cc3: PUSH EAX
// 00563cc4: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00563cc9: ADD ESP,0x8
// 00563ccc: XOR ESI,ESI
// 00563cce: MOV EAX,ESI
// 00563cd0: MOV ESP,EBP
// 00563cd2: POP EBP
// 00563cd3: POP EDI
// 00563cd4: POP ESI
// 00563cd5: POP EBX
// 00563cd6: RET
// 00563cd7: PUSH 0x643ce1
//   Label: caseD_1b
//   XREF to: 00643ce1 (DATA)
// 00563cdc: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00563ce2: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 00563ce3: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00563ce8: ADD ESP,0x8
// 00563ceb: XOR ESI,ESI
// 00563ced: MOV EAX,ESI
// 00563cef: MOV ESP,EBP
// 00563cf1: POP EBP
// 00563cf2: POP EDI
// 00563cf3: POP ESI
// 00563cf4: POP EBX
// 00563cf5: RET
// 00563cf6: MOV EAX,[0x00680d50]
//   Label: caseD_1c
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 00563cfb: PUSH EAX
//   XREF to: 0310f858 (DATA)
// 00563cfc: XOR ESI,ESI
// 00563cfe: XOR EDI,EDI
// 00563d00: CALL core_script.cpp_FUN_00567630
//   XREF to: 00567630 (UNCONDITIONAL_CALL)
// 00563d05: ADD ESP,0x4
// 00563d08: MOV EAX,[0x00680d50]
//   Label: LAB_00563d08
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 00563d0d: CMP ESI,dword ptr [EAX + 0x28]
//   XREF to: 0310f880 (READ)
// 00563d10: JGE 0x00563d40
//   XREF to: 00563d40 (CONDITIONAL_JUMP)
// 00563d12: MOV EAX,dword ptr [EAX + 0x2c]
//   XREF to: 0310f884 (READ)
// 00563d15: MOV EAX,dword ptr [EDI + EAX*0x1 + 0x100]
// 00563d1c: TEST EAX,EAX
// 00563d1e: JBE 0x00563d25
//   XREF to: 00563d25 (CONDITIONAL_JUMP)
// 00563d20: CMP EAX,0x4
// 00563d23: JNZ 0x00563d2e
//   XREF to: 00563d2e (CONDITIONAL_JUMP)
// 00563d25: INC ESI
//   Label: LAB_00563d25
// 00563d26: ADD EDI,0x114
// 00563d2c: JMP 0x00563d08
//   XREF to: 00563d08 (UNCONDITIONAL_JUMP)
// 00563d2e: PUSH ESI
//   Label: LAB_00563d2e
// 00563d2f: MOV EBX,dword ptr [0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 00563d35: PUSH EBX
//   XREF to: 0310f858 (DATA)
// 00563d36: CALL core_script.cpp_CScript_removeEventXRef_FUN_005676e0
//   XREF to: 005676e0 (UNCONDITIONAL_CALL)
// 00563d3b: ADD ESP,0x8
// 00563d3e: JMP 0x00563d08
//   XREF to: 00563d08 (UNCONDITIONAL_JUMP)
// 00563d40: MOV ECX,dword ptr [EBP + 0x14]
//   Label: LAB_00563d40
//   XREF to: Stack[0x4] (READ)
// 00563d43: PUSH ECX
// 00563d44: LEA EBX,[ESP + 0x2f90]
//   XREF to: Stack[-0x7cc] (DATA)
// 00563d4b: PUSH EBX
// 00563d4c: PUSH EAX
//   XREF to: 0310f858 (DATA)
// 00563d4d: CALL core_script.cpp_FUN_005677a0
//   XREF to: 005677a0 (UNCONDITIONAL_CALL)
// 00563d52: ADD ESP,0xc
// 00563d55: TEST EAX,EAX
// 00563d57: JZ 0x005629b2
//   XREF to: 005629b2 (CONDITIONAL_JUMP)
// 00563d5d: MOV ESI,0x1
// 00563d62: MOV EAX,ESI
// 00563d64: MOV ESP,EBP
// 00563d66: POP EBP
// 00563d67: POP EDI
// 00563d68: POP ESI
// 00563d69: POP EBX
// 00563d6a: RET
// 00563d6b: PUSH ESI
//   Label: caseD_1e
// 00563d6c: PUSH EBX
// 00563d6d: CALL core_script.cpp_FUN_005627f0
//   XREF to: 005627f0 (UNCONDITIONAL_CALL)
// 00563d72: ADD ESP,0x8
// 00563d75: MOV ESI,EAX
// 00563d77: TEST EAX,EAX
// 00563d79: JZ 0x005629b2
//   XREF to: 005629b2 (CONDITIONAL_JUMP)
// 00563d7f: LEA EBX,[ESP + 0x36b0]
//   XREF to: Stack[-0xa8] (DATA)
// 00563d86: PUSH EBX
// 00563d87: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00563d8a: PUSH EBX
// 00563d8b: PUSH EAX
// 00563d8c: CALL core_script.cpp_FUN_00559730
//   XREF to: 00559730 (UNCONDITIONAL_CALL)
// 00563d91: ADD ESP,0xc
// 00563d94: TEST EAX,EAX
// 00563d96: JNZ 0x00563dc0
//   XREF to: 00563dc0 (CONDITIONAL_JUMP)
// 00563d98: PUSH 0x310eca0
//   XREF to: 0310eca0 (DATA)
// 00563d9d: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00563da3: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 00563da4: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00563da9: ADD ESP,0x8
// 00563dac: PUSH 0x78
// 00563dae: PUSH 0x0
// 00563db0: LEA EAX,[ESP + 0x36b8]
//   XREF to: Stack[-0xa8] (DATA)
// 00563db7: PUSH EAX
// 00563db8: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00563dbd: ADD ESP,0xc
// 00563dc0: LEA EAX,[ESI + 0x158]
//   Label: LAB_00563dc0
// 00563dc6: PUSH EAX
// 00563dc7: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 00563dcc: ADD ESP,0x4
// 00563dcf: MOV EDI,0xffffffff
// 00563dd4: MOV dword ptr [ESP + 0x3738],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00563ddb: LEA EAX,[ESP + 0xafc]
//   Label: LAB_00563ddb
//   XREF to: Stack[-0x2c5c] (DATA)
// 00563de2: PUSH EAX
// 00563de3: XOR EBX,EBX
// 00563de5: XOR ESI,ESI
// 00563de7: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 00563dec: ADD ESP,0x4
// 00563def: MOV EAX,dword ptr [ESP + 0x3738]
//   Label: LAB_00563def
//   XREF to: Stack[-0x20] (READ)
// 00563df6: PUSH EAX
// 00563df7: CALL core_charactr.cpp_CCharacter_FUN_0042f9c0
//   XREF to: 0042f9c0 (UNCONDITIONAL_CALL)
// 00563dfc: ADD ESP,0x4
// 00563dff: CMP EBX,EAX
// 00563e01: JGE 0x00563e5f
//   XREF to: 00563e5f (CONDITIONAL_JUMP)
// 00563e03: CMP dword ptr [ESP + ESI*0x1 + 0x36b0],0x0
// 00563e0b: JZ 0x00563e58
//   XREF to: 00563e58 (CONDITIONAL_JUMP)
// 00563e0d: MOV EAX,0x643cf5
//   XREF to: 00643cf5 (PARAM)
// 00563e12: PUSH EAX
//   Label: LAB_00563e12
//   XREF to: 00643cf5 (DATA)
//   XREF to: 00643cf9 (DATA)
// 00563e13: PUSH EBX
// 00563e14: MOV EDX,dword ptr [ESP + 0x3740]
//   XREF to: Stack[-0x20] (READ)
// 00563e1b: PUSH EDX
// 00563e1c: CALL core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_0059c220
//   XREF to: 0059c220 (UNCONDITIONAL_CALL)
//   XREF to: 00643cf9 (PARAM)
// 00563e21: ADD ESP,0x8
// 00563e24: PUSH EAX
// 00563e25: PUSH 0x643cfc
//   XREF to: 00643cfc (DATA)
// 00563e2a: LEA EAX,[ESP + 0x35f4]
//   XREF to: Stack[-0x170] (DATA)
// 00563e31: PUSH EAX
// 00563e32: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00563e37: ADD ESP,0x10
// 00563e3a: LEA EAX,[ESP + 0x35e8]
//   XREF to: Stack[-0x170] (DATA)
// 00563e41: PUSH EAX
// 00563e42: LEA EAX,[ESP + 0xb00]
//   XREF to: Stack[-0x2c5c] (DATA)
// 00563e49: PUSH EAX
// 00563e4a: ADD ESI,0x4
// 00563e4d: INC EBX
// 00563e4e: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00563e53: ADD ESP,0x8
// 00563e56: JMP 0x00563def
//   XREF to: 00563def (UNCONDITIONAL_JUMP)
// 00563e58: MOV EAX,0x643cf9
//   Label: LAB_00563e58
//   XREF to: 00643cf9 (PARAM)
// 00563e5d: JMP 0x00563e12
//   XREF to: 00563e12 (UNCONDITIONAL_JUMP)
// 00563e5f: PUSH 0x643d02
//   Label: LAB_00563e5f
//   XREF to: 00643d02 (DATA)
// 00563e64: LEA EAX,[ESP + 0xb00]
//   XREF to: Stack[-0x2c5c] (DATA)
// 00563e6b: PUSH EAX
// 00563e6c: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00563e71: ADD ESP,0x8
// 00563e74: PUSH 0x0
// 00563e76: PUSH EDI
// 00563e77: LEA EAX,[ESP + 0x2f94]
//   XREF to: Stack[-0x7cc] (DATA)
// 00563e7e: PUSH EAX
// 00563e7f: LEA EAX,[ESP + 0xb08]
//   XREF to: Stack[-0x2c5c] (DATA)
// 00563e86: PUSH EAX
// 00563e87: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 00563e8c: MOV EBX,EAX
// 00563e8e: ADD ESP,0x10
// 00563e91: MOV EDI,EAX
// 00563e93: TEST EAX,EAX
// 00563e95: JL 0x00563f08
//   XREF to: 00563f08 (CONDITIONAL_JUMP)
// 00563e97: LEA EAX,[ESP + 0xafc]
//   XREF to: Stack[-0x2c5c] (DATA)
// 00563e9e: PUSH EAX
// 00563e9f: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 00563ea4: DEC EAX
// 00563ea5: ADD ESP,0x4
// 00563ea8: CMP EBX,EAX
// 00563eaa: JNZ 0x00563fb9
//   XREF to: 00563fb9 (CONDITIONAL_JUMP)
// 00563eb0: MOV ECX,0x643d07
//   XREF to: 00643d07 (DATA)
// 00563eb5: XOR EBX,EBX
// 00563eb7: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00563eba: MOV dword ptr [ESP + 0x3744],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 00563ec1: MOV dword ptr [ESP + 0x373c],ECX
//   XREF to: Stack[-0x1c] (WRITE)
//   XREF to: 00643d07 (DATA)
// 00563ec8: MOV byte ptr [EAX],0x0
// 00563ecb: MOV ECX,dword ptr [ESP + 0x3738]
//   Label: LAB_00563ecb
//   XREF to: Stack[-0x20] (READ)
// 00563ed2: PUSH ECX
// 00563ed3: CALL core_charactr.cpp_CCharacter_FUN_0042f9c0
//   XREF to: 0042f9c0 (UNCONDITIONAL_CALL)
// 00563ed8: ADD ESP,0x4
// 00563edb: CMP EBX,EAX
// 00563edd: JGE 0x00563f99
//   XREF to: 00563f99 (CONDITIONAL_JUMP)
// 00563ee3: MOV EAX,dword ptr [ESP + 0x3744]
//   XREF to: Stack[-0x14] (READ)
// 00563eea: CMP dword ptr [ESP + EAX*0x1 + 0x36b0],0x0
// 00563ef2: JNZ 0x00563f24
//   XREF to: 00563f24 (CONDITIONAL_JUMP)
// 00563ef4: MOV EDX,dword ptr [ESP + 0x3744]
//   Label: LAB_00563ef4
//   XREF to: Stack[-0x14] (READ)
// 00563efb: ADD EDX,0x4
// 00563efe: INC EBX
// 00563eff: MOV dword ptr [ESP + 0x3744],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00563f06: JMP 0x00563ecb
//   XREF to: 00563ecb (UNCONDITIONAL_JUMP)
// 00563f08: XOR ESI,ESI
//   Label: LAB_00563f08
// 00563f0a: PUSH ESI
// 00563f0b: LEA EAX,[ESP + 0xb00]
//   XREF to: Stack[-0x2c5c] (DATA)
// 00563f12: PUSH EAX
// 00563f13: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00563f18: ADD ESP,0x8
// 00563f1b: MOV EAX,ESI
// 00563f1d: MOV ESP,EBP
// 00563f1f: POP EBP
// 00563f20: POP EDI
// 00563f21: POP ESI
// 00563f22: POP EBX
// 00563f23: RET
// 00563f24: MOV ESI,dword ptr [ESP + 0x373c]
//   Label: LAB_00563f24
//   XREF to: Stack[-0x1c] (READ)
// 00563f2b: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00563f2e: PUSH EDI
// 00563f2f: SUB ECX,ECX
// 00563f31: DEC ECX
// 00563f32: MOV AL,0x0
// 00563f34: SCASB.REPNE ES:EDI
// 00563f36: DEC EDI
// 00563f37: MOV AL,byte ptr [ESI]
//   Label: LAB_00563f37
//   XREF to: 00643d07 (READ)
//   XREF to: 00643d09 (READ)
// 00563f39: MOV byte ptr [EDI],AL
// 00563f3b: CMP AL,0x0
// 00563f3d: JZ 0x00563f4f
//   XREF to: 00563f4f (CONDITIONAL_JUMP)
// 00563f3f: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00643d08 (READ)
//   XREF to: 00643d0a (READ)
// 00563f42: ADD ESI,0x2
// 00563f45: MOV byte ptr [EDI + 0x1],AL
// 00563f48: ADD EDI,0x2
// 00563f4b: CMP AL,0x0
// 00563f4d: JNZ 0x00563f37
//   XREF to: 00563f37 (CONDITIONAL_JUMP)
// 00563f4f: POP EDI
//   Label: LAB_00563f4f
// 00563f50: PUSH EBX
// 00563f51: MOV EAX,dword ptr [ESP + 0x373c]
//   XREF to: Stack[-0x20] (READ)
// 00563f58: MOV EDI,0x643d08
//   XREF to: 00643d08 (DATA)
// 00563f5d: PUSH EAX
// 00563f5e: MOV dword ptr [ESP + 0x3744],EDI
//   XREF to: Stack[-0x1c] (WRITE)
//   XREF to: 00643d08 (DATA)
// 00563f65: CALL core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_0059c220
//   XREF to: 0059c220 (UNCONDITIONAL_CALL)
// 00563f6a: ADD ESP,0x8
// 00563f6d: MOV ESI,EAX
// 00563f6f: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00563f72: PUSH EDI
// 00563f73: SUB ECX,ECX
// 00563f75: DEC ECX
// 00563f76: MOV AL,0x0
// 00563f78: SCASB.REPNE ES:EDI
// 00563f7a: DEC EDI
// 00563f7b: MOV AL,byte ptr [ESI]
//   Label: LAB_00563f7b
// 00563f7d: MOV byte ptr [EDI],AL
// 00563f7f: CMP AL,0x0
// 00563f81: JZ 0x00563f93
//   XREF to: 00563f93 (CONDITIONAL_JUMP)
// 00563f83: MOV AL,byte ptr [ESI + 0x1]
// 00563f86: ADD ESI,0x2
// 00563f89: MOV byte ptr [EDI + 0x1],AL
// 00563f8c: ADD EDI,0x2
// 00563f8f: CMP AL,0x0
// 00563f91: JNZ 0x00563f7b
//   XREF to: 00563f7b (CONDITIONAL_JUMP)
// 00563f93: POP EDI
//   Label: LAB_00563f93
// 00563f94: JMP 0x00563ef4
//   XREF to: 00563ef4 (UNCONDITIONAL_JUMP)
// 00563f99: PUSH 0x0
//   Label: LAB_00563f99
// 00563f9b: LEA EAX,[ESP + 0xb00]
//   XREF to: Stack[-0x2c5c] (DATA)
// 00563fa2: PUSH EAX
// 00563fa3: MOV ESI,0x1
// 00563fa8: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00563fad: ADD ESP,0x8
// 00563fb0: MOV EAX,ESI
// 00563fb2: MOV ESP,EBP
// 00563fb4: POP EBP
// 00563fb5: POP EDI
// 00563fb6: POP ESI
// 00563fb7: POP EBX
// 00563fb8: RET
// 00563fb9: CMP dword ptr [ESP + EBX*0x4 + 0x36b0],0x0
//   Label: LAB_00563fb9
// 00563fc1: SETZ AL
// 00563fc4: AND EAX,0xff
// 00563fc9: PUSH 0x0
// 00563fcb: MOV dword ptr [ESP + EBX*0x4 + 0x36b4],EAX
// 00563fd2: LEA EAX,[ESP + 0xb00]
//   XREF to: Stack[-0x2c5c] (DATA)
// 00563fd9: PUSH EAX
// 00563fda: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00563fdf: ADD ESP,0x8
// 00563fe2: JMP 0x00563ddb
//   XREF to: 00563ddb (UNCONDITIONAL_JUMP)
// 00563fe7: PUSH EDI
//   Label: caseD_1d
// 00563fe8: PUSH 0x643d0a
//   XREF to: 00643d0a (DATA)
// 00563fed: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00563ff3: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 00563ff4: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00563ff9: ADD ESP,0xc
// 00563ffc: XOR ESI,ESI
// 00563ffe: MOV EAX,ESI
// 00564000: MOV ESP,EBP
// 00564002: POP EBP
// 00564003: POP EDI
// 00564004: POP ESI
// 00564005: POP EBX
// 00564006: RET
