// Name: core_actor.cpp_AnotherActorParser_FUN_0040eed0
// Address: 0040eed0
// Address Range: [[0040eed0, 0040ef00] [0040ef93, 0040fffd] [004100ee, 00410332]]
// Convention: unknown
// Signature: undefined core_actor.cpp_AnotherActorParser_FUN_0040eed0()
// Cross-references:
//   core_msnedit.cpp_FUN_00536e20 (00536e20) at 00536f7b [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053c730 (0053c730) at 0053c8a4 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053ae03 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_0040ee84 = 0040ef01
//   undefined4 caseD_0
//   TerminatedCString s_Enter_s_for_s_00614560
//   TerminatedCString s_Select_model_for_actor_s_00614570
//   TerminatedCString s_kfm_006145a1
//   TerminatedCString s_models_006145a7
//   TerminatedCString s_none_006145ae
//   TerminatedCString s_Select_model_for_actor_s_006145b5
//   TerminatedCString s_dfm_006145e6
//   TerminatedCString s_models_006145ec
//   TerminatedCString s_none_006145f3
//   TerminatedCString s_none_006145fa
//   TerminatedCString s_s_s_00614601
//   TerminatedCString s_cth_00614607
//   TerminatedCString s_models_0061460d
//   TerminatedCString s_Select_s_for_actor_s_Cur_00614614
//   TerminatedCString s_remove_cloth_0061463c
//   TerminatedCString s_Add_s_for_actor_s_0061464b
//   TerminatedCString s_Condition_Event_00614660
//   undefined4 s_ondition_=>_Event_00614661
//   undefined4 s_ndition_=>_Event_00614662
//   undefined4 s_dition_=>_Event_00614663
//   TerminatedCString s_s_s_00614673
//   TerminatedCString s_anon_0061467c
//   TerminatedCString s_Please_input_rule_as_con_0061467f
//   TerminatedCString s_enable_006146ad
//   TerminatedCString s_disabled_006146b4
//   TerminatedCString s_s_s_006146bd
//   TerminatedCString s_core_actor_cpp_006146c3
//   TerminatedCString s_Unknown_CActorProperty_t_006146d5
//   TerminatedCString s_thrust_006146f5
//   TerminatedCString s_swing_006146fc
//   undefined4 DAT_0066e30c
//   undefined4 DAT_0066e314
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEventList* g_CEventListPtr = 02d05310
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   char[256] g_CharacterClassificationTable
//   CEditorTools g_CEditorToolsPtr
//   undefined4 DAT_02d05310
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonMission g_CDemonMissionInstance
// Function calls:
//   core_cloth.cpp_CClothList_add_FUN_0043c0f0
//   core_cloth.cpp_CClothList_remove_FUN_0043c170
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_event.cpp_CRuleList_remove_FUN_004b17c0
//   core_event.cpp_FUN_004add00
//   core_event.cpp_FUN_004add40
//   core_ground.cpp_getGroundTypeName_FUN_004eed80
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_FUN_0052dde0
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   core_msnedit.cpp_RunNoneFunctorForCancelAndElse_FUN_0053cad0
//   core_skeleton.cpp_FUN_005a0840
//   core_sound.cpp_FUN_005b3de0
//   crt_file.c_makepath_FUN_005febfc
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_memmove_FUN_005fe5e0
//   crt_string.c_strstr_FUN_005fedd0
//   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_004a0300
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0
//   shape_edittool.cpp_CStrList_sort_FUN_004a2ec0

#include "nocturne.h"

undefined4 core_actor_cpp_AnotherActorParser_FUN_0040eed0(void)

{
  undefined4 *puVar1;
  CClothList CVar2;
  char cVar3;
  float *pfVar4;
  CVector3f *pCVar5;
  int *piVar6;
  bool bVar7;
  undefined3 extraout_var;
  undefined4 uVar8;
  char *pcVar9;
  uint uVar10;
  SIZE_T SVar11;
  BADSPACEBASE *in_ESP;
  byte *pbVar12;
  CClothList *pCVar13;
  char *pcVar14;
  int iVar15;
  byte *pbVar16;
  CClothList *pCVar17;
  char *pcVar18;
  CRuleList *pCVar19;
  int iVar20;
  int iVar21;
  byte bVar22;
  undefined4 *in_stack_00000004;
  int in_stack_00000008;
  uint in_stack_ffffc814;
  uint in_stack_ffffc818;
  char **in_stack_ffffc81c;
  CStrList_vtable *in_stack_ffffc820;
  uint in_stack_ffffc824;
  CPickList local_3444;
  CPickList local_309c;
  CPickList local_2cf4;
  CPickList local_294c;
  CPickList local_25a4;
  CPickList local_21fc;
  CPickList local_1e54;
  char local_1aac [512];
  char local_18ac [512];
  char local_16ac [512];
  char local_14ac [512];
  char local_12ac [512];
  char local_10ac [512];
  char local_eac [512];
  char local_cac [512];
  char local_aac [300];
  char local_980 [300];
  char local_854 [260];
  byte local_750 [260];
  CClothList local_64c [260];
  char local_548 [260];
  char local_444 [220];
  char local_368 [200];
  char local_2a0 [199];
  char acStack_1d9 [100];
  char local_175 [101];
  char local_110 [100];
  char local_ac [100];
  CVector3f local_48;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  char *local_14;
  
  bVar22 = 0;
  if (in_stack_00000004[0x15] == 0) {
    return 0;
  }
  puVar1 = in_stack_00000004 + 1;
  crt_stdio_c_sprintf_FUN_005fdbd0(local_2a0,"Enter %s for %s",puVar1,in_stack_00000008);
  switch(*in_stack_00000004) {
  case 0:
    local_2c = *(int *)in_stack_00000004[0x1a];
    while (bVar7 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                             (g_CEditorToolsPtr,local_2a0,&local_2c,SUB41(in_stack_00000004[0x17],0)
                              ,in_stack_00000004[0x18],in_stack_00000004[0x19],true),
          CONCAT31(extraout_var,bVar7) != 0) {
      if ((in_stack_00000004[0x3a] == 0) ||
         (iVar15 = (*(code *)in_stack_00000004[0x3a])(), iVar15 != 0)) {
        *(int *)in_stack_00000004[0x1a] = local_2c;
        if (in_stack_00000004[0x16] != 0) {
          (*(code *)**(undefined4 **)(in_stack_00000008 + 0x154))();
        }
        return 1;
      }
    }
    break;
  case 1:
    local_30 = *(float *)in_stack_00000004[0x1a];
    while (iVar15 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                              (g_CEditorToolsPtr,local_2a0,&local_30,
                               SUB41(in_stack_00000004[0x17],0),(float)in_stack_00000004[0x18],
                               (float)in_stack_00000004[0x19],true), iVar15 != 0) {
      if ((in_stack_00000004[0x3a] == 0) ||
         (iVar15 = (*(code *)in_stack_00000004[0x3a])(), iVar15 != 0)) {
        *(float *)in_stack_00000004[0x1a] = local_30;
        if (in_stack_00000004[0x16] != 0) {
          (*(code *)**(undefined4 **)(in_stack_00000008 + 0x154))();
        }
        return 1;
      }
    }
    break;
  case 2:
    pfVar4 = (float *)in_stack_00000004[0x1a];
    local_48.x = *pfVar4;
    local_48.y = pfVar4[1];
    local_48.z = pfVar4[2];
    do {
      iVar15 = shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_004a0300
                         (g_CEditorToolsPtr,local_2a0,&local_48,true);
      if (iVar15 == 0) {
        return 0;
      }
      if (in_stack_00000004[0x3a] == 0) break;
      local_3c = local_48.x;
      local_38 = local_48.y;
      local_34 = local_48.z;
      iVar15 = (*(code *)in_stack_00000004[0x3a])();
    } while (iVar15 == 0);
    pCVar5 = (CVector3f *)in_stack_00000004[0x1a];
    if (pCVar5 != &local_48) {
      pCVar5->x = local_48.x;
      pCVar5->y = local_48.y;
      pCVar5->z = local_48.z;
    }
    if (in_stack_00000004[0x16] != 0) {
      (*(code *)**(undefined4 **)(in_stack_00000008 + 0x154))();
    }
    return 1;
  case 3:
    pcVar9 = local_aac;
    pcVar14 = (char *)in_stack_00000004[0x1a];
    do {
      cVar3 = *pcVar14;
      *pcVar9 = cVar3;
      if (cVar3 == '\0') break;
      cVar3 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar9[1] = cVar3;
      pcVar9 = pcVar9 + 2;
    } while (cVar3 != '\0');
    do {
      iVar15 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                         (g_CEditorToolsPtr,local_2a0,local_aac,in_stack_00000004[0x19],1);
      if (iVar15 == 0) {
        return 0;
      }
    } while ((in_stack_00000004[0x3a] != 0) &&
            (iVar15 = (*(code *)in_stack_00000004[0x3a])(), iVar15 == 0));
    pcVar9 = local_aac;
    pcVar14 = (char *)in_stack_00000004[0x1a];
    do {
      cVar3 = *pcVar9;
      *pcVar14 = cVar3;
      if (cVar3 == '\0') break;
      cVar3 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar14[1] = cVar3;
      pcVar14 = pcVar14 + 2;
    } while (cVar3 != '\0');
    if (in_stack_00000004[0x16] != 0) {
      (*(code *)**(undefined4 **)(in_stack_00000008 + 0x154))();
    }
    return 1;
  case 4:
    *(uint *)in_stack_00000004[0x1a] = (uint)(*(int *)in_stack_00000004[0x1a] == 0);
    return 1;
  case 5:
    local_28 = *(undefined4 *)in_stack_00000004[0x1a];
    iVar15 = core_msnedit_cpp_RunNoneFunctorForCancelAndElse_FUN_0053cad0();
    if (iVar15 != 0) {
      *(undefined4 *)in_stack_00000004[0x1a] = local_28;
      if (in_stack_00000004[0x16] == 0) {
        return 1;
      }
      (*(code *)**(undefined4 **)(in_stack_00000008 + 0x154))();
      return 1;
    }
    break;
  case 6:
    crt_stdio_c_sprintf_FUN_005fdbd0
              (local_2a0,"Select model for actor %s.  Current model is %s.",in_stack_00000008,
               in_stack_00000004[0x1a] + 0x78);
    pcVar9 = local_854;
    pcVar14 = (char *)(in_stack_00000004[0x1a] + 0x78);
    do {
      cVar3 = *pcVar14;
      *pcVar9 = cVar3;
      if (cVar3 == '\0') break;
      cVar3 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar9[1] = cVar3;
      pcVar9 = pcVar9 + 2;
    } while (cVar3 != '\0');
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xffffc814);
    shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004a35b0
              ((CStrList *)&stack0xffffc814,"models","*.kfm");
    shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)&stack0xffffc814);
    if (in_stack_00000004[0x17] != 0) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xffffc814,"(none)");
    }
    do {
      pcVar9 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                 ((CPickList *)&stack0xffffc814,local_2a0,-1,0);
      if ((int)pcVar9 < 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xffffc814,0,in_stack_ffffc814,in_stack_ffffc818,
                   (uint)in_stack_ffffc81c,(uint)in_stack_ffffc820,in_stack_ffffc824);
        return 0;
      }
      if ((in_stack_00000004[0x17] == 0) || (pcVar9 != (char *)(in_stack_ffffc814 - 1))) {
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  ((CStrList *)&stack0xffffc814,(int)local_18ac,pcVar9,0);
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  ((CStrList *)&stack0xffffc814,(int)local_eac,pcVar9,1);
        crt_file_c_makepath_FUN_005febfc(local_854,(char *)0x0,(char *)0x0,local_18ac,local_eac);
      }
      else {
        local_854[0] = '\0';
      }
    } while ((in_stack_00000004[0x3a] != 0) &&
            (iVar15 = (*(code *)in_stack_00000004[0x3a])(), iVar15 == 0));
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
              ((CKeyFramedModelInstance *)in_stack_00000004[0x1a],local_854);
    if (in_stack_00000004[0x16] != 0) {
      (*(code *)**(undefined4 **)(in_stack_00000008 + 0x154))();
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xffffc814,0,in_stack_ffffc814,in_stack_ffffc818,
               (uint)in_stack_ffffc81c,(uint)in_stack_ffffc820,in_stack_ffffc824);
    return 1;
  case 7:
    crt_stdio_c_sprintf_FUN_005fdbd0
              (local_2a0,"Select model for actor %s.  Current model is %s.",in_stack_00000008,
               in_stack_00000004[0x1a] + 0x2260);
    pcVar9 = local_548;
    pcVar14 = (char *)(in_stack_00000004[0x1a] + 0x2260);
    do {
      cVar3 = *pcVar14;
      *pcVar9 = cVar3;
      if (cVar3 == '\0') break;
      cVar3 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar9[1] = cVar3;
      pcVar9 = pcVar9 + 2;
    } while (cVar3 != '\0');
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_2cf4);
    shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004a35b0
              (&local_2cf4.base_strlist,"models","*.dfm");
    shape_edittool_cpp_CStrList_sort_FUN_004a2ec0(&local_2cf4.base_strlist);
    if (in_stack_00000004[0x17] != 0) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_2cf4.base_strlist,"(none)");
    }
    do {
      pcVar9 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                 (&local_2cf4,local_2a0,-1,0);
      if ((int)pcVar9 < 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&local_2cf4,0,in_stack_ffffc814,in_stack_ffffc818,(uint)in_stack_ffffc81c,
                   (uint)in_stack_ffffc820,in_stack_ffffc824);
        return 0;
      }
      if ((in_stack_00000004[0x17] == 0) ||
         (pcVar9 != (char *)(local_2cf4.base_strlist.item_count + -1))) {
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  (&local_2cf4.base_strlist,(int)local_12ac,pcVar9,0);
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  (&local_2cf4.base_strlist,(int)local_1aac,pcVar9,1);
        crt_file_c_makepath_FUN_005febfc(local_548,(char *)0x0,(char *)0x0,local_12ac,local_1aac);
      }
      else {
        local_548[0] = '\0';
      }
    } while ((in_stack_00000004[0x3a] != 0) &&
            (iVar15 = (*(code *)in_stack_00000004[0x3a])(), iVar15 == 0));
    core_skeleton_cpp_FUN_005a0840();
    if (in_stack_00000004[0x16] != 0) {
      (*(code *)**(undefined4 **)(in_stack_00000008 + 0x154))();
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_2cf4,0,in_stack_ffffc814,in_stack_ffffc818,(uint)in_stack_ffffc81c,
               (uint)in_stack_ffffc820,in_stack_ffffc824);
    return 1;
  case 8:
    uVar8 = core_sound_cpp_FUN_005b3de0();
    return uVar8;
  case 9:
    iVar15 = 0;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_3444);
    do {
      pcVar9 = core_ground_cpp_getGroundTypeName_FUN_004eed80(iVar15);
      iVar15 = iVar15 + 1;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3444.base_strlist,pcVar9);
    } while (iVar15 < 0xe);
    iVar15 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                       (&local_3444,local_2a0,*(int *)in_stack_00000004[0x1a],0);
    if (-1 < iVar15) {
      *(int *)in_stack_00000004[0x1a] = iVar15;
      if (in_stack_00000004[0x16] != 0) {
        (*(code *)**(undefined4 **)(in_stack_00000008 + 0x154))();
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_3444,0,in_stack_ffffc814,in_stack_ffffc818,(uint)in_stack_ffffc81c,
                 (uint)in_stack_ffffc820,in_stack_ffffc824);
      return 1;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_3444,0,in_stack_ffffc814,in_stack_ffffc818,(uint)in_stack_ffffc81c,
               (uint)in_stack_ffffc820,in_stack_ffffc824);
    return 0;
  case 10:
    pbVar16 = local_750;
    pbVar12 = (byte *)in_stack_00000004[0x1a];
    do {
      bVar22 = *pbVar12;
      *pbVar16 = bVar22;
      if (bVar22 == 0) break;
      bVar22 = pbVar12[1];
      pbVar12 = pbVar12 + 2;
      pbVar16[1] = bVar22;
      pbVar16 = pbVar16 + 2;
    } while (bVar22 != 0);
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_309c);
    shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004a35b0
              (&local_309c.base_strlist,(char *)(in_stack_00000004 + 0x1c),
               (char *)(in_stack_00000004 + 0x21));
    shape_edittool_cpp_CStrList_sort_FUN_004a2ec0(&local_309c.base_strlist);
    if (in_stack_00000004[0x17] != 0) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_309c.base_strlist,"(none)");
    }
    do {
      pcVar9 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                 (&local_309c,local_2a0,-1,0);
      if ((int)pcVar9 < 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&local_309c,0,in_stack_ffffc814,in_stack_ffffc818,(uint)in_stack_ffffc81c,
                   (uint)in_stack_ffffc820,in_stack_ffffc824);
        return 0;
      }
      if ((in_stack_00000004[0x17] == 0) ||
         (pcVar9 != (char *)(local_309c.base_strlist.item_count + -1))) {
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  (&local_309c.base_strlist,(int)local_cac,pcVar9,0);
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  (&local_309c.base_strlist,(int)local_10ac,pcVar9,1);
        crt_file_c_makepath_FUN_005febfc
                  ((char *)local_750,(char *)0x0,(char *)0x0,local_cac,local_10ac);
      }
      else {
        local_750[0] = (byte)((uint)pcVar9 >> 8) ^
                       (byte)((uint)(local_309c.base_strlist.item_count + -1) >> 8);
      }
    } while ((in_stack_00000004[0x3a] != 0) &&
            (iVar15 = (*(code *)in_stack_00000004[0x3a])(), iVar15 == 0));
    pbVar16 = local_750;
    pbVar12 = (byte *)in_stack_00000004[0x1a];
    do {
      bVar22 = *pbVar16;
      *pbVar12 = bVar22;
      if (bVar22 == 0) break;
      bVar22 = pbVar16[1];
      pbVar16 = pbVar16 + 2;
      pbVar12[1] = bVar22;
      pbVar12 = pbVar12 + 2;
    } while (bVar22 != 0);
    if (in_stack_00000004[0x16] != 0) {
      (*(code *)**(undefined4 **)(in_stack_00000008 + 0x154))();
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_309c,0,in_stack_ffffc814,in_stack_ffffc818,(uint)in_stack_ffffc81c,
               (uint)in_stack_ffffc820,in_stack_ffffc824);
    return 1;
  case 0xb:
    pcVar9 = local_ac;
    pcVar14 = (char *)in_stack_00000004[0x1a];
    do {
      cVar3 = *pcVar14;
      *pcVar9 = cVar3;
      if (cVar3 == '\0') break;
      cVar3 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar9[1] = cVar3;
      pcVar9 = pcVar9 + 2;
    } while (cVar3 != '\0');
    while( true ) {
      iVar15 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                         (g_CEditorToolsPtr,local_2a0,local_ac,100,1);
      if (iVar15 == 0) {
        return 0;
      }
      pcVar9 = (char *)core_event_cpp_FUN_004add00();
      if (pcVar9 == (char *)0x0) break;
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar9);
    }
    pcVar9 = local_ac;
    pcVar14 = (char *)in_stack_00000004[0x1a];
    do {
      cVar3 = *pcVar9;
      *pcVar14 = cVar3;
      if (cVar3 == '\0') break;
      cVar3 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar14[1] = cVar3;
      pcVar14 = pcVar14 + 2;
    } while (cVar3 != '\0');
    if (in_stack_00000004[0x16] != 0) {
      (*(code *)**(undefined4 **)(in_stack_00000008 + 0x154))();
    }
    return 1;
  case 0xc:
    pcVar9 = local_110;
    pcVar14 = (char *)in_stack_00000004[0x1a];
    do {
      cVar3 = *pcVar14;
      *pcVar9 = cVar3;
      if (cVar3 == '\0') break;
      cVar3 = pcVar14[1];
      pcVar14 = pcVar14 + 2;
      pcVar9[1] = cVar3;
      pcVar9 = pcVar9 + 2;
    } while (cVar3 != '\0');
    while( true ) {
      iVar15 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                         (g_CEditorToolsPtr,local_2a0,local_110,100,1);
      if (iVar15 == 0) {
        return 0;
      }
      pcVar9 = (char *)core_event_cpp_FUN_004add40();
      if (pcVar9 == (char *)0x0) break;
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar9);
    }
    pcVar9 = local_110;
    pcVar14 = (char *)in_stack_00000004[0x1a];
    do {
      cVar3 = *pcVar9;
      *pcVar14 = cVar3;
      if (cVar3 == '\0') break;
      cVar3 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar14[1] = cVar3;
      pcVar14 = pcVar14 + 2;
    } while (cVar3 != '\0');
    if (in_stack_00000004[0x16] != 0) {
      (*(code *)**(undefined4 **)(in_stack_00000008 + 0x154))();
    }
    return 1;
  case 0xd:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_21fc);
    local_18 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0();
    iVar15 = 0;
    local_20 = -1;
    if (0 < *(int *)(local_18 + 0x964)) {
      local_1c = local_18 + 4;
      iVar21 = local_18 + 0x968;
      local_24 = local_18;
      do {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_980,"%s\t%s",iVar21,*(int *)(local_24 + 0x98c) * 0x1e + local_1c);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_21fc.base_strlist,local_980);
        iVar20 = core_motion_cpp_CMotionController_FUN_0052dab0();
        if (iVar20 == iVar21) {
          local_20 = iVar15;
        }
        local_24 = local_24 + 0x54c;
        iVar15 = iVar15 + 1;
        iVar21 = iVar21 + 0x54c;
      } while (iVar15 < *(int *)(local_18 + 0x964));
    }
    iVar15 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                       (&local_21fc,local_2a0,local_20,0);
    if (-1 < iVar15) {
      core_motion_cpp_CMotionController_FUN_0052dde0();
      if (in_stack_00000004[0x16] != 0) {
        (*(code *)**(undefined4 **)(in_stack_00000008 + 0x154))();
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_21fc,0,in_stack_ffffc814,in_stack_ffffc818,(uint)in_stack_ffffc81c,
                 (uint)in_stack_ffffc820,in_stack_ffffc824);
      return 1;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_21fc,0,in_stack_ffffc814,in_stack_ffffc818,(uint)in_stack_ffffc81c,
               (uint)in_stack_ffffc820,in_stack_ffffc824);
    return 0;
  case 0xe:
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_294c);
    shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004a35b0
              (&local_294c.base_strlist,"models","*.cth");
    shape_edittool_cpp_CStrList_sort_FUN_004a2ec0(&local_294c.base_strlist);
    if ((int)in_stack_00000004[0x17] < *(int *)in_stack_00000004[0x1a]) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_2a0,"Select %s for actor %s.  Current is %s.",puVar1,in_stack_00000008,
                 (int *)in_stack_00000004[0x1a] + in_stack_00000004[0x17] * 10 + 1);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_294c.base_strlist,"(remove cloth)")
      ;
    }
    else {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_2a0,"Add %s for actor %s.",puVar1,in_stack_00000008);
    }
    pcVar9 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                               (&local_294c,local_2a0,-1,0);
    if ((int)pcVar9 < 0) {
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_294c,0,in_stack_ffffc814,in_stack_ffffc818,(uint)in_stack_ffffc81c,
                 (uint)in_stack_ffffc820,in_stack_ffffc824);
      return 0;
    }
    shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
              (&local_294c.base_strlist,(int)local_16ac,pcVar9,0);
    shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
              (&local_294c.base_strlist,(int)local_14ac,pcVar9,1);
    crt_file_c_makepath_FUN_005febfc
              ((char *)local_64c,(char *)0x0,(char *)0x0,local_16ac,local_14ac);
    pCVar17 = (CClothList *)in_stack_00000004[0x1a];
    if ((int)in_stack_00000004[0x17] < *(int *)pCVar17) {
      if (pcVar9 == (char *)(local_294c.base_strlist.item_count + -1)) {
        core_cloth_cpp_CClothList_remove_FUN_0043c170(pCVar17);
      }
      else {
        pCVar13 = local_64c;
        pCVar17 = pCVar17 + in_stack_00000004[0x17] * 0x28 + 4;
        do {
          CVar2 = *pCVar13;
          *pCVar17 = CVar2;
          if (CVar2 == (CClothList)0x0) break;
          CVar2 = pCVar13[1];
          pCVar13 = pCVar13 + 2;
          pCVar17[1] = CVar2;
          pCVar17 = pCVar17 + 2;
        } while (CVar2 != (CClothList)0x0);
      }
    }
    else {
      core_cloth_cpp_CClothList_add_FUN_0043c0f0(pCVar17);
    }
    (*(code *)**(undefined4 **)(in_stack_00000008 + 0x154))();
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_294c,0,in_stack_ffffc814,in_stack_ffffc818,(uint)in_stack_ffffc81c,
               (uint)in_stack_ffffc820,in_stack_ffffc824);
    return 1;
  case 0xf:
    iVar15 = -1;
    iVar21 = 0;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_1e54);
    if (0 < (int)in_stack_00000004[0x17]) {
      iVar20 = 0;
      do {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  (&local_1e54.base_strlist,*(char **)(iVar20 + in_stack_00000004[0x18]));
        if (*(int *)in_stack_00000004[0x1a] == *(int *)(in_stack_00000004[0x18] + 4 + iVar20)) {
          iVar15 = iVar21;
        }
        iVar21 = iVar21 + 1;
        iVar20 = iVar20 + 8;
      } while (iVar21 < (int)in_stack_00000004[0x17]);
    }
    if ((in_stack_00000004[0x17] == 2) && (-1 < iVar15)) {
      iVar21 = in_stack_00000004[0x18];
      iVar15 = (1 - iVar15) * 8;
    }
    else {
      iVar15 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         (&local_1e54,local_2a0,iVar15,0);
      if (iVar15 < 0) goto LAB_00410163;
      iVar15 = iVar15 << 3;
      iVar21 = in_stack_00000004[0x18];
    }
    *(undefined4 *)in_stack_00000004[0x1a] = *(undefined4 *)(iVar15 + iVar21 + 4);
LAB_00410163:
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_1e54,0,in_stack_ffffc814,in_stack_ffffc818,(uint)in_stack_ffffc81c,
               (uint)in_stack_ffffc820,in_stack_ffffc824);
    return 0;
  case 0x10:
    piVar6 = (int *)in_stack_00000004[0x1a];
    iVar15 = in_stack_00000004[0x17];
    if (iVar15 < *piVar6) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_444,"%s => %s",piVar6 + iVar15 * 0x19 + 1,piVar6 + iVar15 * 0x19 + 0x7e);
    }
    else {
      pcVar14 = "Condition => Event";
      pcVar9 = local_444;
      do {
        cVar3 = *pcVar14;
        *pcVar9 = cVar3;
        if (cVar3 == '\0') break;
        cVar3 = pcVar14[1];
        pcVar14 = pcVar14 + 2;
        pcVar9[1] = cVar3;
        pcVar9 = pcVar9 + 2;
      } while (cVar3 != '\0');
    }
LAB_0040fdd3:
    iVar15 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                       (g_CEditorToolsPtr,local_2a0,local_444,0xdc,1);
    if (iVar15 != 0) {
      if (local_444[0] == '\0') {
        if ((int)in_stack_00000004[0x17] < *(int *)in_stack_00000004[0x1a]) {
          core_event_cpp_CRuleList_remove_FUN_004b17c0();
        }
        return 1;
      }
      pcVar9 = crt_string_c_strstr_FUN_005fedd0(local_444,"=>");
      if (pcVar9 == (char *)0x0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Please input rule as \"<condition> => <event>\"");
      }
      else {
        pcVar14 = local_444;
        pcVar18 = acStack_1d9 + 1;
        *pcVar9 = '\0';
        do {
          cVar3 = *pcVar14;
          *pcVar18 = cVar3;
          if (cVar3 == '\0') break;
          cVar3 = pcVar14[1];
          pcVar14 = pcVar14 + 2;
          pcVar18[1] = cVar3;
          pcVar18 = pcVar18 + 2;
        } while (cVar3 != '\0');
        uVar10 = 0xffffffff;
        pcVar14 = acStack_1d9 + 1;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar3 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar22 * -2 + 1;
        } while (cVar3 != '\0');
        SVar11 = ~uVar10 - 1;
        if (0 < (int)SVar11) {
          pcVar14 = acStack_1d9 + ~uVar10;
          do {
            if ((g_CharacterClassificationTable[(byte)(pcVar14[-1] + 1)] & 2U) == 0) break;
            SVar11 = SVar11 - 1;
            pcVar14 = pcVar14 + -1;
          } while (0 < (int)SVar11);
        }
        (acStack_1d9 + 1)[SVar11] = '\0';
        local_14 = acStack_1d9 + 2;
        while ((g_CharacterClassificationTable[(byte)(acStack_1d9[1] + 1)] & 2U) != 0) {
          crt_string_c_memmove_FUN_005fe5e0(acStack_1d9 + 1,local_14,SVar11);
          SVar11 = SVar11 - 1;
        }
        pcVar14 = local_175 + 1;
        *pcVar9 = '=';
        do {
          cVar3 = pcVar9[2];
          *pcVar14 = cVar3;
          if (cVar3 == '\0') break;
          cVar3 = pcVar9[3];
          pcVar14[1] = cVar3;
          pcVar14 = pcVar14 + 2;
          pcVar9 = pcVar9 + 2;
        } while (cVar3 != '\0');
        uVar10 = 0xffffffff;
        pcVar9 = local_175 + 1;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar3 = *pcVar9;
          pcVar9 = pcVar9 + (uint)bVar22 * -2 + 1;
        } while (cVar3 != '\0');
        SVar11 = ~uVar10 - 1;
        if (0 < (int)SVar11) {
          pcVar9 = local_175 + ~uVar10;
          do {
            if ((g_CharacterClassificationTable[(byte)(pcVar9[-1] + 1)] & 2U) == 0) break;
            SVar11 = SVar11 - 1;
            pcVar9 = pcVar9 + -1;
          } while (0 < (int)SVar11);
        }
        (local_175 + 1)[SVar11] = '\0';
        while ((g_CharacterClassificationTable[(byte)(local_175[1] + 1)] & 2U) != 0) {
          crt_string_c_memmove_FUN_005fe5e0(local_175 + 1,local_175 + 2,SVar11);
          SVar11 = SVar11 - 1;
        }
        pcVar9 = (char *)core_event_cpp_FUN_004add00();
        if (pcVar9 == (char *)0x0) {
          pcVar9 = (char *)core_event_cpp_FUN_004add40();
          if (pcVar9 == (char *)0x0) {
            pCVar19 = (CRuleList *)in_stack_00000004[0x1a];
            if (pCVar19->list_size <= (int)in_stack_00000004[0x17]) {
              core_event_cpp_CRuleList_insert_FUN_004b1680(pCVar19);
              return 1;
            }
            pCVar19 = pCVar19 + in_stack_00000004[0x17] * 0x19 + 1;
            pcVar9 = acStack_1d9 + 1;
            goto LAB_00410083;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar9);
        }
        else {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar9);
        }
      }
      goto LAB_0040fdd3;
    }
    break;
  case 0x11:
    iVar15 = (*(code *)in_stack_00000004[0x3a])();
    if (iVar15 != 0) {
      if (in_stack_00000004[0x16] == 0) {
        return 1;
      }
      (*(code *)**(undefined4 **)(in_stack_00000008 + 0x154))();
      return 1;
    }
    break;
  case 0x12:
    iVar15 = 0;
    while( true ) {
      iVar21 = 0;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_25a4);
      do {
        pcVar9 = "disabled";
        if ((*(uint *)in_stack_00000004[0x1a] & *(uint *)((int)&DAT_0066e30c + iVar21)) != 0) {
          pcVar9 = "enable";
        }
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_368,"%s\t%s",*(undefined4 *)((int)&PTR_s_thrust_0066e310 + iVar21),
                   pcVar9);
        iVar21 = iVar21 + 8;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_25a4.base_strlist,local_368);
      } while (iVar21 != 0x10);
      iVar15 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         (&local_25a4,local_2a0,iVar15,0);
      if (iVar15 < 0) break;
      *(uint *)in_stack_00000004[0x1a] =
           *(uint *)in_stack_00000004[0x1a] ^ (&DAT_0066e30c)[iVar15 * 2];
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_25a4,0,in_stack_ffffc814,in_stack_ffffc818,(uint)in_stack_ffffc81c,
                 (uint)in_stack_ffffc820,in_stack_ffffc824);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_25a4,0,in_stack_ffffc814,in_stack_ffffc818,(uint)in_stack_ffffc81c,
               (uint)in_stack_ffffc820,in_stack_ffffc824);
    return 0;
  default:
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0x119f;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Unknown CActorProperty type: %d",*in_stack_00000004);
    return 0;
  }
  return 0;
  while( true ) {
    cVar3 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    *(char *)((int)&pCVar19->list_size + 1) = cVar3;
    pCVar19 = (CRuleList *)((int)&pCVar19->list_size + 2);
    if (cVar3 == '\0') break;
LAB_00410083:
    cVar3 = *pcVar9;
    *(char *)&pCVar19->list_size = cVar3;
    if (cVar3 == '\0') break;
  }
  pcVar9 = local_175 + 1;
  pcVar14 = (char *)(in_stack_00000004[0x1a] + 0x1f8 + in_stack_00000004[0x17] * 100);
  do {
    cVar3 = *pcVar9;
    *pcVar14 = cVar3;
    if (cVar3 == '\0') {
      return 1;
    }
    cVar3 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar14[1] = cVar3;
    pcVar14 = pcVar14 + 2;
  } while (cVar3 != '\0');
  return 1;
}


// Assembly code:
// 0040eed0: PUSH EBX
//   Label: core_actor.cpp_AnotherActorParser_FUN_0040eed0
// 0040eed1: PUSH ESI
// 0040eed2: PUSH EDI
// 0040eed3: PUSH EBP
// 0040eed4: SUB ESP,0x37dc
// 0040eeda: MOV EBX,dword ptr [ESP + 0x37f0]
//   XREF to: Stack[0x4] (READ)
// 0040eee1: MOV EBP,dword ptr [ESP + 0x37f4]
//   XREF to: Stack[0x8] (READ)
// 0040eee8: CMP dword ptr [EBX + 0x54],0x0
// 0040eeec: JNZ 0x0041030b
//   XREF to: 0041030b (CONDITIONAL_JUMP)
// 0040eef2: XOR ESI,ESI
//   Label: LAB_0040eef2
// 0040eef4: MOV EAX,ESI
// 0040eef6: ADD ESP,0x37dc
// 0040eefc: POP EBP
// 0040eefd: POP EDI
// 0040eefe: POP ESI
// 0040eeff: POP EBX
// 0040ef00: RET
// 0040ef93: MOV EAX,dword ptr [EBX + 0x68]
//   Label: caseD_1
// 0040ef96: MOV EAX,dword ptr [EAX]
// 0040ef98: MOV dword ptr [ESP + 0x37bc],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0040ef9f: XOR ESI,ESI
// 0040efa1: PUSH 0x1
//   Label: LAB_0040efa1
// 0040efa3: PUSH dword ptr [EBX + 0x64]
// 0040efa6: MOV ECX,dword ptr [EBX + 0x5c]
// 0040efa9: PUSH dword ptr [EBX + 0x60]
// 0040efac: PUSH ECX
// 0040efad: LEA EAX,[ESP + 0x37cc]
//   XREF to: Stack[-0x30] (DATA)
// 0040efb4: PUSH EAX
// 0040efb5: LEA EAX,[ESP + 0x3560]
//   XREF to: Stack[-0x2a0] (DATA)
// 0040efbc: PUSH EAX
// 0040efbd: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0040efc3: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0040efc4: CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   XREF to: 004a00f0 (UNCONDITIONAL_CALL)
// 0040efc9: ADD ESP,0x1c
// 0040efcc: TEST EAX,EAX
// 0040efce: JZ 0x0040eef2
//   XREF to: 0040eef2 (CONDITIONAL_JUMP)
// 0040efd4: CMP ESI,dword ptr [EBX + 0xe8]
// 0040efda: JNZ 0x0040f00c
//   XREF to: 0040f00c (CONDITIONAL_JUMP)
// 0040efdc: MOV EDX,dword ptr [EBX + 0x68]
//   Label: LAB_0040efdc
// 0040efdf: MOV EAX,dword ptr [ESP + 0x37bc]
//   XREF to: Stack[-0x30] (READ)
// 0040efe6: MOV dword ptr [EDX],EAX
// 0040efe8: CMP dword ptr [EBX + 0x58],0x0
// 0040efec: JZ 0x0040effa
//   XREF to: 0040effa (CONDITIONAL_JUMP)
// 0040efee: PUSH EBP
// 0040efef: MOV EAX,dword ptr [EBP + 0x154]
// 0040eff5: CALL dword ptr [EAX]
// 0040eff7: ADD ESP,0x4
// 0040effa: MOV ESI,0x1
//   Label: LAB_0040effa
// 0040efff: MOV EAX,ESI
// 0040f001: ADD ESP,0x37dc
// 0040f007: POP EBP
// 0040f008: POP EDI
// 0040f009: POP ESI
// 0040f00a: POP EBX
// 0040f00b: RET
// 0040f00c: PUSH dword ptr [ESP + 0x37bc]
//   Label: LAB_0040f00c
//   XREF to: Stack[-0x30] (READ)
// 0040f013: PUSH EBP
// 0040f014: CALL dword ptr [EBX + 0xe8]
// 0040f01a: ADD ESP,0x8
// 0040f01d: TEST EAX,EAX
// 0040f01f: JNZ 0x0040efdc
//   XREF to: 0040efdc (CONDITIONAL_JUMP)
// 0040f021: JMP 0x0040efa1
//   XREF to: 0040efa1 (UNCONDITIONAL_JUMP)
// 0040f026: MOV EDX,dword ptr [EBX + 0x68]
//   Label: caseD_2
// 0040f029: MOV EAX,dword ptr [EDX]
// 0040f02b: MOV dword ptr [ESP + 0x37a4],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0040f032: LEA EAX,[EDX + 0x4]
// 0040f035: MOV EAX,dword ptr [EAX]
// 0040f037: MOV dword ptr [ESP + 0x37a8],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0040f03e: LEA EAX,[EDX + 0x8]
// 0040f041: MOV EAX,dword ptr [EAX]
// 0040f043: MOV dword ptr [ESP + 0x37ac],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0040f04a: XOR ESI,ESI
// 0040f04c: PUSH 0x1
//   Label: LAB_0040f04c
// 0040f04e: LEA EAX,[ESP + 0x37a8]
//   XREF to: Stack[-0x48] (DATA)
// 0040f055: PUSH EAX
// 0040f056: LEA EAX,[ESP + 0x3554]
//   XREF to: Stack[-0x2a0] (DATA)
// 0040f05d: PUSH EAX
// 0040f05e: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0040f064: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0040f065: CALL shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_004a0300
//   XREF to: 004a0300 (UNCONDITIONAL_CALL)
// 0040f06a: ADD ESP,0x10
// 0040f06d: TEST EAX,EAX
// 0040f06f: JZ 0x0040eef2
//   XREF to: 0040eef2 (CONDITIONAL_JUMP)
// 0040f075: CMP ESI,dword ptr [EBX + 0xe8]
// 0040f07b: JNZ 0x0040f0cc
//   XREF to: 0040f0cc (CONDITIONAL_JUMP)
// 0040f07d: LEA EAX,[ESP + 0x37a4]
//   Label: LAB_0040f07d
//   XREF to: Stack[-0x48] (DATA)
// 0040f084: MOV EDX,dword ptr [EBX + 0x68]
// 0040f087: CMP EDX,EAX
// 0040f089: JZ 0x0040f0a8
//   XREF to: 0040f0a8 (CONDITIONAL_JUMP)
// 0040f08b: MOV EAX,dword ptr [ESP + 0x37a4]
//   XREF to: Stack[-0x48] (DATA)
// 0040f092: MOV dword ptr [EDX],EAX
// 0040f094: MOV EAX,dword ptr [ESP + 0x37a8]
//   XREF to: Stack[-0x44] (READ)
// 0040f09b: MOV dword ptr [EDX + 0x4],EAX
// 0040f09e: MOV EAX,dword ptr [ESP + 0x37ac]
//   XREF to: Stack[-0x40] (READ)
// 0040f0a5: MOV dword ptr [EDX + 0x8],EAX
// 0040f0a8: CMP dword ptr [EBX + 0x58],0x0
//   Label: LAB_0040f0a8
// 0040f0ac: JZ 0x0040f0ba
//   XREF to: 0040f0ba (CONDITIONAL_JUMP)
// 0040f0ae: PUSH EBP
// 0040f0af: MOV EAX,dword ptr [EBP + 0x154]
// 0040f0b5: CALL dword ptr [EAX]
// 0040f0b7: ADD ESP,0x4
// 0040f0ba: MOV ESI,0x1
//   Label: LAB_0040f0ba
// 0040f0bf: MOV EAX,ESI
// 0040f0c1: ADD ESP,0x37dc
// 0040f0c7: POP EBP
// 0040f0c8: POP EDI
// 0040f0c9: POP ESI
// 0040f0ca: POP EBX
// 0040f0cb: RET
// 0040f0cc: MOV EAX,dword ptr [ESP + 0x37a4]
//   Label: LAB_0040f0cc
//   XREF to: Stack[-0x48] (READ)
// 0040f0d3: MOV dword ptr [ESP + 0x37b0],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0040f0da: MOV EAX,dword ptr [ESP + 0x37a8]
//   XREF to: Stack[-0x44] (READ)
// 0040f0e1: MOV dword ptr [ESP + 0x37b4],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0040f0e8: MOV EAX,dword ptr [ESP + 0x37ac]
//   XREF to: Stack[-0x40] (READ)
// 0040f0ef: MOV dword ptr [ESP + 0x37b8],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0040f0f6: LEA EAX,[ESP + 0x37b0]
//   XREF to: Stack[-0x3c] (DATA)
// 0040f0fd: PUSH EAX
// 0040f0fe: PUSH EBP
// 0040f0ff: CALL dword ptr [EBX + 0xe8]
// 0040f105: ADD ESP,0x8
// 0040f108: TEST EAX,EAX
// 0040f10a: JNZ 0x0040f07d
//   XREF to: 0040f07d (CONDITIONAL_JUMP)
// 0040f110: JMP 0x0040f04c
//   XREF to: 0040f04c (UNCONDITIONAL_JUMP)
// 0040f115: MOV EAX,dword ptr [EBX + 0x68]
//   Label: caseD_4
// 0040f118: CMP dword ptr [EAX],0x0
// 0040f11b: SETZ AL
// 0040f11e: MOV EDX,EAX
// 0040f120: MOV EAX,dword ptr [EBX + 0x68]
// 0040f123: AND EDX,0xff
// 0040f129: MOV ESI,0x1
// 0040f12e: MOV dword ptr [EAX],EDX
// 0040f130: MOV EAX,ESI
// 0040f132: ADD ESP,0x37dc
// 0040f138: POP EBP
// 0040f139: POP EDI
// 0040f13a: POP ESI
// 0040f13b: POP EBX
// 0040f13c: RET
// 0040f13d: LEA EDI,[ESP + 0x2d40]
//   Label: caseD_3
//   XREF to: Stack[-0xaac] (DATA)
// 0040f144: MOV ESI,dword ptr [EBX + 0x68]
// 0040f147: PUSH EDI
// 0040f148: MOV AL,byte ptr [ESI]
//   Label: LAB_0040f148
// 0040f14a: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xaac] (DATA)
// 0040f14c: CMP AL,0x0
// 0040f14e: JZ 0x0040f160
//   XREF to: 0040f160 (CONDITIONAL_JUMP)
// 0040f150: MOV AL,byte ptr [ESI + 0x1]
// 0040f153: ADD ESI,0x2
// 0040f156: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xaab] (WRITE)
// 0040f159: ADD EDI,0x2
// 0040f15c: CMP AL,0x0
// 0040f15e: JNZ 0x0040f148
//   XREF to: 0040f148 (CONDITIONAL_JUMP)
// 0040f160: POP EDI
//   Label: LAB_0040f160
// 0040f161: XOR ESI,ESI
// 0040f163: PUSH 0x1
//   Label: LAB_0040f163
// 0040f165: MOV EAX,dword ptr [EBX + 0x64]
// 0040f168: PUSH EAX
// 0040f169: LEA EAX,[ESP + 0x2d48]
//   XREF to: Stack[-0xaac] (DATA)
// 0040f170: PUSH EAX
// 0040f171: LEA EAX,[ESP + 0x3558]
//   XREF to: Stack[-0x2a0] (DATA)
// 0040f178: PUSH EAX
// 0040f179: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0040f17f: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0040f180: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 0040f185: ADD ESP,0x14
// 0040f188: TEST EAX,EAX
// 0040f18a: JZ 0x0040eef2
//   XREF to: 0040eef2 (CONDITIONAL_JUMP)
// 0040f190: CMP ESI,dword ptr [EBX + 0xe8]
// 0040f196: JNZ 0x0040f1e0
//   XREF to: 0040f1e0 (CONDITIONAL_JUMP)
// 0040f198: LEA ESI,[ESP + 0x2d40]
//   Label: LAB_0040f198
//   XREF to: Stack[-0xaac] (DATA)
// 0040f19f: MOV EDI,dword ptr [EBX + 0x68]
// 0040f1a2: PUSH EDI
// 0040f1a3: MOV AL,byte ptr [ESI]
//   Label: LAB_0040f1a3
//   XREF to: Stack[-0xaac] (DATA)
// 0040f1a5: MOV byte ptr [EDI],AL
// 0040f1a7: CMP AL,0x0
// 0040f1a9: JZ 0x0040f1bb
//   XREF to: 0040f1bb (CONDITIONAL_JUMP)
// 0040f1ab: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0xaab] (READ)
// 0040f1ae: ADD ESI,0x2
// 0040f1b1: MOV byte ptr [EDI + 0x1],AL
// 0040f1b4: ADD EDI,0x2
// 0040f1b7: CMP AL,0x0
// 0040f1b9: JNZ 0x0040f1a3
//   XREF to: 0040f1a3 (CONDITIONAL_JUMP)
// 0040f1bb: POP EDI
//   Label: LAB_0040f1bb
// 0040f1bc: CMP dword ptr [EBX + 0x58],0x0
// 0040f1c0: JZ 0x0040f1ce
//   XREF to: 0040f1ce (CONDITIONAL_JUMP)
// 0040f1c2: PUSH EBP
// 0040f1c3: MOV EAX,dword ptr [EBP + 0x154]
// 0040f1c9: CALL dword ptr [EAX]
// 0040f1cb: ADD ESP,0x4
// 0040f1ce: MOV ESI,0x1
//   Label: LAB_0040f1ce
// 0040f1d3: MOV EAX,ESI
// 0040f1d5: ADD ESP,0x37dc
// 0040f1db: POP EBP
// 0040f1dc: POP EDI
// 0040f1dd: POP ESI
// 0040f1de: POP EBX
// 0040f1df: RET
// 0040f1e0: LEA EAX,[ESP + 0x2d40]
//   Label: LAB_0040f1e0
//   XREF to: Stack[-0xaac] (DATA)
// 0040f1e7: PUSH EAX
// 0040f1e8: PUSH EBP
// 0040f1e9: CALL dword ptr [EBX + 0xe8]
// 0040f1ef: ADD ESP,0x8
// 0040f1f2: TEST EAX,EAX
// 0040f1f4: JNZ 0x0040f198
//   XREF to: 0040f198 (CONDITIONAL_JUMP)
// 0040f1f6: JMP 0x0040f163
//   XREF to: 0040f163 (UNCONDITIONAL_JUMP)
// 0040f1fb: MOV EAX,dword ptr [EBX + 0x68]
//   Label: caseD_5
// 0040f1fe: MOV EAX,dword ptr [EAX]
// 0040f200: MOV dword ptr [ESP + 0x37c4],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0040f207: PUSH 0x1
// 0040f209: MOV EDX,dword ptr [EBX + 0xe8]
// 0040f20f: PUSH EDX
// 0040f210: LEA EAX,[EBX + 0x84]
// 0040f216: PUSH EAX
// 0040f217: MOV ECX,dword ptr [EBX + 0x5c]
// 0040f21a: PUSH ECX
// 0040f21b: LEA EAX,[ESP + 0x37d4]
//   XREF to: Stack[-0x28] (DATA)
// 0040f222: PUSH EAX
// 0040f223: LEA EAX,[ESP + 0x3560]
//   XREF to: Stack[-0x2a0] (DATA)
// 0040f22a: PUSH EAX
// 0040f22b: PUSH EBP
// 0040f22c: MOV ESI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 0040f232: PUSH ESI
//   XREF to: 02f33740 (DATA)
// 0040f233: CALL core_msnedit.cpp_RunNoneFunctorForCancelAndElse_FUN_0053cad0
//   XREF to: 0053cad0 (UNCONDITIONAL_CALL)
// 0040f238: ADD ESP,0x20
// 0040f23b: TEST EAX,EAX
// 0040f23d: JZ 0x0040eef2
//   XREF to: 0040eef2 (CONDITIONAL_JUMP)
// 0040f243: MOV EDX,dword ptr [EBX + 0x68]
// 0040f246: MOV EAX,dword ptr [ESP + 0x37c4]
//   XREF to: Stack[-0x28] (READ)
// 0040f24d: MOV dword ptr [EDX],EAX
// 0040f24f: CMP dword ptr [EBX + 0x58],0x0
// 0040f253: JNZ 0x0040f267
//   XREF to: 0040f267 (CONDITIONAL_JUMP)
// 0040f255: MOV ESI,0x1
// 0040f25a: MOV EAX,ESI
// 0040f25c: ADD ESP,0x37dc
// 0040f262: POP EBP
// 0040f263: POP EDI
// 0040f264: POP ESI
// 0040f265: POP EBX
// 0040f266: RET
// 0040f267: PUSH EBP
//   Label: LAB_0040f267
// 0040f268: MOV EAX,dword ptr [EBP + 0x154]
// 0040f26e: CALL dword ptr [EAX]
// 0040f270: ADD ESP,0x4
// 0040f273: MOV ESI,0x1
// 0040f278: MOV EAX,ESI
// 0040f27a: ADD ESP,0x37dc
// 0040f280: POP EBP
// 0040f281: POP EDI
// 0040f282: POP ESI
// 0040f283: POP EBX
// 0040f284: RET
// 0040f285: MOV EAX,dword ptr [EBX + 0x68]
//   Label: caseD_6
// 0040f288: ADD EAX,0x78
// 0040f28b: PUSH EAX
// 0040f28c: PUSH EBP
// 0040f28d: PUSH 0x614570
//   XREF to: 00614570 (DATA)
// 0040f292: LEA EAX,[ESP + 0x3558]
//   XREF to: Stack[-0x2a0] (DATA)
// 0040f299: PUSH EAX
// 0040f29a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0040f29f: ADD ESP,0x10
// 0040f2a2: MOV ESI,dword ptr [EBX + 0x68]
// 0040f2a5: LEA EDI,[ESP + 0x2f98]
//   XREF to: Stack[-0x854] (DATA)
// 0040f2ac: ADD ESI,0x78
// 0040f2af: PUSH EDI
// 0040f2b0: MOV AL,byte ptr [ESI]
//   Label: LAB_0040f2b0
// 0040f2b2: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x854] (DATA)
// 0040f2b4: CMP AL,0x0
// 0040f2b6: JZ 0x0040f2c8
//   XREF to: 0040f2c8 (CONDITIONAL_JUMP)
// 0040f2b8: MOV AL,byte ptr [ESI + 0x1]
// 0040f2bb: ADD ESI,0x2
// 0040f2be: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x853] (WRITE)
// 0040f2c1: ADD EDI,0x2
// 0040f2c4: CMP AL,0x0
// 0040f2c6: JNZ 0x0040f2b0
//   XREF to: 0040f2b0 (CONDITIONAL_JUMP)
// 0040f2c8: POP EDI
//   Label: LAB_0040f2c8
// 0040f2c9: MOV EAX,ESP
// 0040f2cb: PUSH EAX
// 0040f2cc: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0040f2d1: ADD ESP,0x4
// 0040f2d4: PUSH 0x6145a1
//   XREF to: 006145a1 (DATA)
// 0040f2d9: PUSH 0x6145a7
//   XREF to: 006145a7 (DATA)
// 0040f2de: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x37ec] (DATA)
// 0040f2e2: PUSH EAX
// 0040f2e3: CALL shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0
//   XREF to: 004a35b0 (UNCONDITIONAL_CALL)
// 0040f2e8: ADD ESP,0xc
// 0040f2eb: MOV EAX,ESP
// 0040f2ed: PUSH EAX
// 0040f2ee: CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
//   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)
// 0040f2f3: MOV EAX,dword ptr [EBX + 0x5c]
// 0040f2f6: ADD ESP,0x4
// 0040f2f9: TEST EAX,EAX
// 0040f2fb: JNZ 0x0040f3af
//   XREF to: 0040f3af (CONDITIONAL_JUMP)
// 0040f301: MOV EDI,0xffffffff
//   Label: LAB_0040f301
// 0040f306: PUSH 0x0
//   Label: LAB_0040f306
// 0040f308: PUSH EDI
// 0040f309: LEA EAX,[ESP + 0x3554]
//   XREF to: Stack[-0x2a0] (DATA)
// 0040f310: PUSH EAX
// 0040f311: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x37ec] (DATA)
// 0040f315: PUSH EAX
// 0040f316: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0040f31b: ADD ESP,0x10
// 0040f31e: MOV ESI,EAX
// 0040f320: TEST EAX,EAX
// 0040f322: JL 0x0040f41f
//   XREF to: 0040f41f (CONDITIONAL_JUMP)
// 0040f328: CMP dword ptr [EBX + 0x5c],0x0
// 0040f32c: JZ 0x0040f3c6
//   XREF to: 0040f3c6 (CONDITIONAL_JUMP)
// 0040f332: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x37ec] (DATA)
// 0040f335: ADD EDX,EDI
// 0040f337: CMP EAX,EDX
// 0040f339: JNZ 0x0040f3c6
//   XREF to: 0040f3c6 (CONDITIONAL_JUMP)
// 0040f33f: XOR DH,DH
// 0040f341: MOV byte ptr [ESP + 0x2f98],DH
//   XREF to: Stack[-0x854] (WRITE)
// 0040f348: CMP dword ptr [EBX + 0xe8],0x0
//   Label: LAB_0040f348
// 0040f34f: JZ 0x0040f367
//   XREF to: 0040f367 (CONDITIONAL_JUMP)
// 0040f351: LEA EAX,[ESP + 0x2f98]
//   XREF to: Stack[-0x854] (DATA)
// 0040f358: PUSH EAX
// 0040f359: PUSH EBP
// 0040f35a: CALL dword ptr [EBX + 0xe8]
// 0040f360: ADD ESP,0x8
// 0040f363: TEST EAX,EAX
// 0040f365: JZ 0x0040f306
//   XREF to: 0040f306 (CONDITIONAL_JUMP)
// 0040f367: LEA EAX,[ESP + 0x2f98]
//   Label: LAB_0040f367
//   XREF to: Stack[-0x854] (DATA)
// 0040f36e: PUSH EAX
// 0040f36f: MOV ESI,dword ptr [EBX + 0x68]
// 0040f372: PUSH ESI
// 0040f373: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 0040f378: MOV EDI,dword ptr [EBX + 0x58]
// 0040f37b: ADD ESP,0x8
// 0040f37e: TEST EDI,EDI
// 0040f380: JZ 0x0040f38e
//   XREF to: 0040f38e (CONDITIONAL_JUMP)
// 0040f382: PUSH EBP
// 0040f383: MOV EAX,dword ptr [EBP + 0x154]
// 0040f389: CALL dword ptr [EAX]
// 0040f38b: ADD ESP,0x4
// 0040f38e: PUSH 0x0
//   Label: LAB_0040f38e
// 0040f390: LEA EAX,[ESP + 0x4]
// 0040f394: PUSH EAX
// 0040f395: MOV ESI,0x1
// 0040f39a: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0040f39f: ADD ESP,0x8
// 0040f3a2: MOV EAX,ESI
// 0040f3a4: ADD ESP,0x37dc
// 0040f3aa: POP EBP
// 0040f3ab: POP EDI
// 0040f3ac: POP ESI
// 0040f3ad: POP EBX
// 0040f3ae: RET
// 0040f3af: PUSH 0x6145ae
//   Label: LAB_0040f3af
//   XREF to: 006145ae (DATA)
// 0040f3b4: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x37ec] (DATA)
// 0040f3b8: PUSH EAX
// 0040f3b9: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0040f3be: ADD ESP,0x8
// 0040f3c1: JMP 0x0040f301
//   XREF to: 0040f301 (UNCONDITIONAL_JUMP)
// 0040f3c6: PUSH 0x0
//   Label: LAB_0040f3c6
// 0040f3c8: PUSH ESI
// 0040f3c9: LEA EAX,[ESP + 0x1f48]
//   XREF to: Stack[-0x18ac] (DATA)
// 0040f3d0: PUSH EAX
// 0040f3d1: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x37ec] (DATA)
// 0040f3d5: PUSH EAX
// 0040f3d6: CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   XREF to: 004a2f80 (UNCONDITIONAL_CALL)
// 0040f3db: ADD ESP,0x10
// 0040f3de: PUSH 0x1
// 0040f3e0: PUSH ESI
// 0040f3e1: LEA EAX,[ESP + 0x2948]
//   XREF to: Stack[-0xeac] (DATA)
// 0040f3e8: PUSH EAX
// 0040f3e9: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x37ec] (DATA)
// 0040f3ed: PUSH EAX
// 0040f3ee: CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   XREF to: 004a2f80 (UNCONDITIONAL_CALL)
// 0040f3f3: ADD ESP,0x10
// 0040f3f6: LEA EAX,[ESP + 0x2940]
//   XREF to: Stack[-0xeac] (DATA)
// 0040f3fd: PUSH EAX
// 0040f3fe: LEA EAX,[ESP + 0x1f44]
//   XREF to: Stack[-0x18ac] (DATA)
// 0040f405: PUSH EAX
// 0040f406: PUSH 0x0
// 0040f408: PUSH 0x0
// 0040f40a: LEA EAX,[ESP + 0x2fa8]
//   XREF to: Stack[-0x854] (DATA)
// 0040f411: PUSH EAX
// 0040f412: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 0040f417: ADD ESP,0x14
// 0040f41a: JMP 0x0040f348
//   XREF to: 0040f348 (UNCONDITIONAL_JUMP)
// 0040f41f: PUSH 0x0
//   Label: LAB_0040f41f
// 0040f421: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x37ec] (DATA)
// 0040f425: PUSH EAX
// 0040f426: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0040f42b: ADD ESP,0x8
// 0040f42e: XOR ESI,ESI
// 0040f430: MOV EAX,ESI
// 0040f432: ADD ESP,0x37dc
// 0040f438: POP EBP
// 0040f439: POP EDI
// 0040f43a: POP ESI
// 0040f43b: POP EBX
// 0040f43c: RET
// 0040f43d: MOV EAX,dword ptr [EBX + 0x68]
//   Label: caseD_7
// 0040f440: ADD EAX,0x2260
// 0040f445: PUSH EAX
// 0040f446: PUSH EBP
// 0040f447: PUSH 0x6145b5
//   XREF to: 006145b5 (DATA)
// 0040f44c: LEA EAX,[ESP + 0x3558]
//   XREF to: Stack[-0x2a0] (DATA)
// 0040f453: PUSH EAX
// 0040f454: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0040f459: ADD ESP,0x10
// 0040f45c: MOV ESI,dword ptr [EBX + 0x68]
// 0040f45f: LEA EDI,[ESP + 0x32a4]
//   XREF to: Stack[-0x548] (DATA)
// 0040f466: ADD ESI,0x2260
// 0040f46c: PUSH EDI
// 0040f46d: MOV AL,byte ptr [ESI]
//   Label: LAB_0040f46d
// 0040f46f: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x548] (DATA)
// 0040f471: CMP AL,0x0
// 0040f473: JZ 0x0040f485
//   XREF to: 0040f485 (CONDITIONAL_JUMP)
// 0040f475: MOV AL,byte ptr [ESI + 0x1]
// 0040f478: ADD ESI,0x2
// 0040f47b: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x547] (WRITE)
// 0040f47e: ADD EDI,0x2
// 0040f481: CMP AL,0x0
// 0040f483: JNZ 0x0040f46d
//   XREF to: 0040f46d (CONDITIONAL_JUMP)
// 0040f485: POP EDI
//   Label: LAB_0040f485
// 0040f486: LEA EAX,[ESP + 0xaf8]
//   XREF to: Stack[-0x2cf4] (DATA)
// 0040f48d: PUSH EAX
// 0040f48e: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0040f493: ADD ESP,0x4
// 0040f496: PUSH 0x6145e6
//   XREF to: 006145e6 (DATA)
// 0040f49b: PUSH 0x6145ec
//   XREF to: 006145ec (DATA)
// 0040f4a0: LEA EAX,[ESP + 0xb00]
//   XREF to: Stack[-0x2cf4] (DATA)
// 0040f4a7: PUSH EAX
// 0040f4a8: CALL shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0
//   XREF to: 004a35b0 (UNCONDITIONAL_CALL)
// 0040f4ad: ADD ESP,0xc
// 0040f4b0: LEA EAX,[ESP + 0xaf8]
//   XREF to: Stack[-0x2cf4] (DATA)
// 0040f4b7: PUSH EAX
// 0040f4b8: CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
//   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)
// 0040f4bd: MOV EDI,dword ptr [EBX + 0x5c]
// 0040f4c0: ADD ESP,0x4
// 0040f4c3: TEST EDI,EDI
// 0040f4c5: JNZ 0x0040f583
//   XREF to: 0040f583 (CONDITIONAL_JUMP)
// 0040f4cb: MOV EDI,0xffffffff
//   Label: LAB_0040f4cb
// 0040f4d0: PUSH 0x0
//   Label: LAB_0040f4d0
// 0040f4d2: PUSH EDI
// 0040f4d3: LEA EAX,[ESP + 0x3554]
//   XREF to: Stack[-0x2a0] (DATA)
// 0040f4da: PUSH EAX
// 0040f4db: LEA EAX,[ESP + 0xb04]
//   XREF to: Stack[-0x2cf4] (DATA)
// 0040f4e2: PUSH EAX
// 0040f4e3: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0040f4e8: ADD ESP,0x10
// 0040f4eb: MOV ESI,EAX
// 0040f4ed: TEST EAX,EAX
// 0040f4ef: JL 0x0040f5fc
//   XREF to: 0040f5fc (CONDITIONAL_JUMP)
// 0040f4f5: CMP dword ptr [EBX + 0x5c],0x0
// 0040f4f9: JZ 0x0040f59d
//   XREF to: 0040f59d (CONDITIONAL_JUMP)
// 0040f4ff: MOV EDX,dword ptr [ESP + 0xaf8]
//   XREF to: Stack[-0x2cf4] (READ)
// 0040f506: ADD EDX,EDI
// 0040f508: CMP EAX,EDX
// 0040f50a: JNZ 0x0040f59d
//   XREF to: 0040f59d (CONDITIONAL_JUMP)
// 0040f510: XOR DL,DL
// 0040f512: MOV byte ptr [ESP + 0x32a4],DL
//   XREF to: Stack[-0x548] (WRITE)
// 0040f519: CMP dword ptr [EBX + 0xe8],0x0
//   Label: LAB_0040f519
// 0040f520: JZ 0x0040f538
//   XREF to: 0040f538 (CONDITIONAL_JUMP)
// 0040f522: LEA EAX,[ESP + 0x32a4]
//   XREF to: Stack[-0x548] (DATA)
// 0040f529: PUSH EAX
// 0040f52a: PUSH EBP
// 0040f52b: CALL dword ptr [EBX + 0xe8]
// 0040f531: ADD ESP,0x8
// 0040f534: TEST EAX,EAX
// 0040f536: JZ 0x0040f4d0
//   XREF to: 0040f4d0 (CONDITIONAL_JUMP)
// 0040f538: LEA EAX,[ESP + 0x32a4]
//   Label: LAB_0040f538
//   XREF to: Stack[-0x548] (DATA)
// 0040f53f: PUSH EAX
// 0040f540: MOV ESI,dword ptr [EBX + 0x68]
// 0040f543: PUSH ESI
// 0040f544: CALL core_skeleton.cpp_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 0040f549: MOV EDI,dword ptr [EBX + 0x58]
// 0040f54c: ADD ESP,0x8
// 0040f54f: TEST EDI,EDI
// 0040f551: JZ 0x0040f55f
//   XREF to: 0040f55f (CONDITIONAL_JUMP)
// 0040f553: PUSH EBP
// 0040f554: MOV EAX,dword ptr [EBP + 0x154]
// 0040f55a: CALL dword ptr [EAX]
// 0040f55c: ADD ESP,0x4
// 0040f55f: PUSH 0x0
//   Label: LAB_0040f55f
// 0040f561: LEA EAX,[ESP + 0xafc]
// 0040f568: PUSH EAX
// 0040f569: MOV ESI,0x1
// 0040f56e: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0040f573: ADD ESP,0x8
// 0040f576: MOV EAX,ESI
// 0040f578: ADD ESP,0x37dc
// 0040f57e: POP EBP
// 0040f57f: POP EDI
// 0040f580: POP ESI
// 0040f581: POP EBX
// 0040f582: RET
// 0040f583: PUSH 0x6145f3
//   Label: LAB_0040f583
//   XREF to: 006145f3 (DATA)
// 0040f588: LEA EAX,[ESP + 0xafc]
//   XREF to: Stack[-0x2cf4] (DATA)
// 0040f58f: PUSH EAX
// 0040f590: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0040f595: ADD ESP,0x8
// 0040f598: JMP 0x0040f4cb
//   XREF to: 0040f4cb (UNCONDITIONAL_JUMP)
// 0040f59d: PUSH 0x0
//   Label: LAB_0040f59d
// 0040f59f: PUSH ESI
// 0040f5a0: LEA EAX,[ESP + 0x2548]
//   XREF to: Stack[-0x12ac] (DATA)
// 0040f5a7: PUSH EAX
// 0040f5a8: LEA EAX,[ESP + 0xb04]
//   XREF to: Stack[-0x2cf4] (DATA)
// 0040f5af: PUSH EAX
// 0040f5b0: CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   XREF to: 004a2f80 (UNCONDITIONAL_CALL)
// 0040f5b5: ADD ESP,0x10
// 0040f5b8: PUSH 0x1
// 0040f5ba: PUSH ESI
// 0040f5bb: LEA EAX,[ESP + 0x1d48]
//   XREF to: Stack[-0x1aac] (DATA)
// 0040f5c2: PUSH EAX
// 0040f5c3: LEA EAX,[ESP + 0xb04]
//   XREF to: Stack[-0x2cf4] (DATA)
// 0040f5ca: PUSH EAX
// 0040f5cb: CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   XREF to: 004a2f80 (UNCONDITIONAL_CALL)
// 0040f5d0: ADD ESP,0x10
// 0040f5d3: LEA EAX,[ESP + 0x1d40]
//   XREF to: Stack[-0x1aac] (DATA)
// 0040f5da: PUSH EAX
// 0040f5db: LEA EAX,[ESP + 0x2544]
//   XREF to: Stack[-0x12ac] (DATA)
// 0040f5e2: PUSH EAX
// 0040f5e3: PUSH 0x0
// 0040f5e5: PUSH 0x0
// 0040f5e7: LEA EAX,[ESP + 0x32b4]
//   XREF to: Stack[-0x548] (DATA)
// 0040f5ee: PUSH EAX
// 0040f5ef: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 0040f5f4: ADD ESP,0x14
// 0040f5f7: JMP 0x0040f519
//   XREF to: 0040f519 (UNCONDITIONAL_JUMP)
// 0040f5fc: PUSH 0x0
//   Label: LAB_0040f5fc
// 0040f5fe: LEA EAX,[ESP + 0xafc]
//   XREF to: Stack[-0x2cf4] (DATA)
// 0040f605: PUSH EAX
// 0040f606: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0040f60b: ADD ESP,0x8
// 0040f60e: XOR ESI,ESI
// 0040f610: MOV EAX,ESI
// 0040f612: ADD ESP,0x37dc
// 0040f618: POP EBP
// 0040f619: POP EDI
// 0040f61a: POP ESI
// 0040f61b: POP EBX
// 0040f61c: RET
// 0040f61d: LEA EAX,[ESP + 0x354c]
//   Label: caseD_8
//   XREF to: Stack[-0x2a0] (DATA)
// 0040f624: PUSH EAX
// 0040f625: MOV ESI,dword ptr [EBX + 0x68]
// 0040f628: PUSH ESI
// 0040f629: CALL core_sound.cpp_FUN_005b3de0
//   XREF to: 005b3de0 (UNCONDITIONAL_CALL)
// 0040f62e: ADD ESP,0x8
// 0040f631: MOV ESI,EAX
// 0040f633: MOV EAX,ESI
// 0040f635: ADD ESP,0x37dc
// 0040f63b: POP EBP
// 0040f63c: POP EDI
// 0040f63d: POP ESI
// 0040f63e: POP EBX
// 0040f63f: RET
// 0040f640: LEA EAX,[ESP + 0x3a8]
//   Label: caseD_9
//   XREF to: Stack[-0x3444] (DATA)
// 0040f647: PUSH EAX
// 0040f648: XOR ESI,ESI
// 0040f64a: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0040f64f: ADD ESP,0x4
// 0040f652: PUSH ESI
//   Label: LAB_0040f652
// 0040f653: CALL core_ground.cpp_getGroundTypeName_FUN_004eed80
//   XREF to: 004eed80 (UNCONDITIONAL_CALL)
// 0040f658: ADD ESP,0x4
// 0040f65b: PUSH EAX
// 0040f65c: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x3444] (DATA)
// 0040f663: PUSH EAX
// 0040f664: INC ESI
// 0040f665: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0040f66a: ADD ESP,0x8
// 0040f66d: CMP ESI,0xe
// 0040f670: JL 0x0040f652
//   XREF to: 0040f652 (CONDITIONAL_JUMP)
// 0040f672: MOV EAX,dword ptr [EBX + 0x68]
// 0040f675: PUSH 0x0
// 0040f677: MOV EDI,dword ptr [EAX]
// 0040f679: PUSH EDI
// 0040f67a: LEA EAX,[ESP + 0x3554]
//   XREF to: Stack[-0x2a0] (DATA)
// 0040f681: PUSH EAX
// 0040f682: LEA EAX,[ESP + 0x3b4]
//   XREF to: Stack[-0x3444] (DATA)
// 0040f689: PUSH EAX
// 0040f68a: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0040f68f: ADD ESP,0x10
// 0040f692: TEST EAX,EAX
// 0040f694: JL 0x0040f6d1
//   XREF to: 0040f6d1 (CONDITIONAL_JUMP)
// 0040f696: MOV EDX,dword ptr [EBX + 0x68]
// 0040f699: MOV dword ptr [EDX],EAX
// 0040f69b: CMP dword ptr [EBX + 0x58],0x0
// 0040f69f: JZ 0x0040f6ad
//   XREF to: 0040f6ad (CONDITIONAL_JUMP)
// 0040f6a1: PUSH EBP
// 0040f6a2: MOV EAX,dword ptr [EBP + 0x154]
// 0040f6a8: CALL dword ptr [EAX]
// 0040f6aa: ADD ESP,0x4
// 0040f6ad: PUSH 0x0
//   Label: LAB_0040f6ad
// 0040f6af: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x3444] (DATA)
// 0040f6b6: PUSH EAX
// 0040f6b7: MOV ESI,0x1
// 0040f6bc: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0040f6c1: ADD ESP,0x8
// 0040f6c4: MOV EAX,ESI
// 0040f6c6: ADD ESP,0x37dc
// 0040f6cc: POP EBP
// 0040f6cd: POP EDI
// 0040f6ce: POP ESI
// 0040f6cf: POP EBX
// 0040f6d0: RET
// 0040f6d1: PUSH 0x0
//   Label: LAB_0040f6d1
// 0040f6d3: LEA EAX,[ESP + 0x3ac]
//   XREF to: Stack[-0x3444] (DATA)
// 0040f6da: PUSH EAX
// 0040f6db: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0040f6e0: ADD ESP,0x8
// 0040f6e3: XOR ESI,ESI
// 0040f6e5: MOV EAX,ESI
// 0040f6e7: ADD ESP,0x37dc
// 0040f6ed: POP EBP
// 0040f6ee: POP EDI
// 0040f6ef: POP ESI
// 0040f6f0: POP EBX
// 0040f6f1: RET
// 0040f6f2: LEA EDI,[ESP + 0x309c]
//   Label: caseD_a
//   XREF to: Stack[-0x750] (DATA)
// 0040f6f9: MOV ESI,dword ptr [EBX + 0x68]
// 0040f6fc: PUSH EDI
// 0040f6fd: MOV AL,byte ptr [ESI]
//   Label: LAB_0040f6fd
// 0040f6ff: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x750] (DATA)
// 0040f701: CMP AL,0x0
// 0040f703: JZ 0x0040f715
//   XREF to: 0040f715 (CONDITIONAL_JUMP)
// 0040f705: MOV AL,byte ptr [ESI + 0x1]
// 0040f708: ADD ESI,0x2
// 0040f70b: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x74f] (WRITE)
// 0040f70e: ADD EDI,0x2
// 0040f711: CMP AL,0x0
// 0040f713: JNZ 0x0040f6fd
//   XREF to: 0040f6fd (CONDITIONAL_JUMP)
// 0040f715: POP EDI
//   Label: LAB_0040f715
// 0040f716: LEA EAX,[ESP + 0x750]
//   XREF to: Stack[-0x309c] (DATA)
// 0040f71d: PUSH EAX
// 0040f71e: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0040f723: ADD ESP,0x4
// 0040f726: LEA EAX,[EBX + 0x84]
// 0040f72c: PUSH EAX
// 0040f72d: LEA EAX,[EBX + 0x70]
// 0040f730: PUSH EAX
// 0040f731: LEA EAX,[ESP + 0x758]
//   XREF to: Stack[-0x309c] (DATA)
// 0040f738: PUSH EAX
// 0040f739: CALL shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0
//   XREF to: 004a35b0 (UNCONDITIONAL_CALL)
// 0040f73e: ADD ESP,0xc
// 0040f741: LEA EAX,[ESP + 0x750]
//   XREF to: Stack[-0x309c] (DATA)
// 0040f748: PUSH EAX
// 0040f749: CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
//   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)
// 0040f74e: MOV ECX,dword ptr [EBX + 0x5c]
// 0040f751: ADD ESP,0x4
// 0040f754: TEST ECX,ECX
// 0040f756: JNZ 0x0040f823
//   XREF to: 0040f823 (CONDITIONAL_JUMP)
// 0040f75c: MOV EDI,0xffffffff
//   Label: LAB_0040f75c
// 0040f761: PUSH 0x0
//   Label: LAB_0040f761
// 0040f763: PUSH EDI
// 0040f764: LEA EAX,[ESP + 0x3554]
//   XREF to: Stack[-0x2a0] (DATA)
// 0040f76b: PUSH EAX
// 0040f76c: LEA EAX,[ESP + 0x75c]
//   XREF to: Stack[-0x309c] (DATA)
// 0040f773: PUSH EAX
// 0040f774: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0040f779: ADD ESP,0x10
// 0040f77c: MOV ESI,EAX
// 0040f77e: TEST EAX,EAX
// 0040f780: JL 0x0040f89c
//   XREF to: 0040f89c (CONDITIONAL_JUMP)
// 0040f786: CMP dword ptr [EBX + 0x5c],0x0
// 0040f78a: JZ 0x0040f83d
//   XREF to: 0040f83d (CONDITIONAL_JUMP)
// 0040f790: MOV EDX,dword ptr [ESP + 0x750]
//   XREF to: Stack[-0x309c] (READ)
// 0040f797: ADD EDX,EDI
// 0040f799: CMP EAX,EDX
// 0040f79b: JNZ 0x0040f83d
//   XREF to: 0040f83d (CONDITIONAL_JUMP)
// 0040f7a1: XOR AH,DH
// 0040f7a3: MOV byte ptr [ESP + 0x309c],AH
//   XREF to: Stack[-0x750] (WRITE)
// 0040f7aa: CMP dword ptr [EBX + 0xe8],0x0
//   Label: LAB_0040f7aa
// 0040f7b1: JZ 0x0040f7c9
//   XREF to: 0040f7c9 (CONDITIONAL_JUMP)
// 0040f7b3: LEA EAX,[ESP + 0x309c]
//   XREF to: Stack[-0x750] (DATA)
// 0040f7ba: PUSH EAX
// 0040f7bb: PUSH EBP
// 0040f7bc: CALL dword ptr [EBX + 0xe8]
// 0040f7c2: ADD ESP,0x8
// 0040f7c5: TEST EAX,EAX
// 0040f7c7: JZ 0x0040f761
//   XREF to: 0040f761 (CONDITIONAL_JUMP)
// 0040f7c9: LEA ESI,[ESP + 0x309c]
//   Label: LAB_0040f7c9
//   XREF to: Stack[-0x750] (DATA)
// 0040f7d0: MOV EDI,dword ptr [EBX + 0x68]
// 0040f7d3: PUSH EDI
// 0040f7d4: MOV AL,byte ptr [ESI]
//   Label: LAB_0040f7d4
//   XREF to: Stack[-0x750] (DATA)
// 0040f7d6: MOV byte ptr [EDI],AL
// 0040f7d8: CMP AL,0x0
// 0040f7da: JZ 0x0040f7ec
//   XREF to: 0040f7ec (CONDITIONAL_JUMP)
// 0040f7dc: MOV AL,byte ptr [ESI + 0x1]
// 0040f7df: ADD ESI,0x2
// 0040f7e2: MOV byte ptr [EDI + 0x1],AL
// 0040f7e5: ADD EDI,0x2
// 0040f7e8: CMP AL,0x0
// 0040f7ea: JNZ 0x0040f7d4
//   XREF to: 0040f7d4 (CONDITIONAL_JUMP)
// 0040f7ec: POP EDI
//   Label: LAB_0040f7ec
// 0040f7ed: CMP dword ptr [EBX + 0x58],0x0
// 0040f7f1: JZ 0x0040f7ff
//   XREF to: 0040f7ff (CONDITIONAL_JUMP)
// 0040f7f3: PUSH EBP
// 0040f7f4: MOV EAX,dword ptr [EBP + 0x154]
// 0040f7fa: CALL dword ptr [EAX]
// 0040f7fc: ADD ESP,0x4
// 0040f7ff: PUSH 0x0
//   Label: LAB_0040f7ff
// 0040f801: LEA EAX,[ESP + 0x754]
// 0040f808: PUSH EAX
// 0040f809: MOV ESI,0x1
// 0040f80e: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0040f813: ADD ESP,0x8
// 0040f816: MOV EAX,ESI
// 0040f818: ADD ESP,0x37dc
// 0040f81e: POP EBP
// 0040f81f: POP EDI
// 0040f820: POP ESI
// 0040f821: POP EBX
// 0040f822: RET
// 0040f823: PUSH 0x6145fa
//   Label: LAB_0040f823
//   XREF to: 006145fa (DATA)
// 0040f828: LEA EAX,[ESP + 0x754]
//   XREF to: Stack[-0x309c] (DATA)
// 0040f82f: PUSH EAX
// 0040f830: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0040f835: ADD ESP,0x8
// 0040f838: JMP 0x0040f75c
//   XREF to: 0040f75c (UNCONDITIONAL_JUMP)
// 0040f83d: PUSH 0x0
//   Label: LAB_0040f83d
// 0040f83f: PUSH ESI
// 0040f840: LEA EAX,[ESP + 0x2b48]
//   XREF to: Stack[-0xcac] (DATA)
// 0040f847: PUSH EAX
// 0040f848: LEA EAX,[ESP + 0x75c]
//   XREF to: Stack[-0x309c] (DATA)
// 0040f84f: PUSH EAX
// 0040f850: CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   XREF to: 004a2f80 (UNCONDITIONAL_CALL)
// 0040f855: ADD ESP,0x10
// 0040f858: PUSH 0x1
// 0040f85a: PUSH ESI
// 0040f85b: LEA EAX,[ESP + 0x2748]
//   XREF to: Stack[-0x10ac] (DATA)
// 0040f862: PUSH EAX
// 0040f863: LEA EAX,[ESP + 0x75c]
//   XREF to: Stack[-0x309c] (DATA)
// 0040f86a: PUSH EAX
// 0040f86b: CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   XREF to: 004a2f80 (UNCONDITIONAL_CALL)
// 0040f870: ADD ESP,0x10
// 0040f873: LEA EAX,[ESP + 0x2740]
//   XREF to: Stack[-0x10ac] (DATA)
// 0040f87a: PUSH EAX
// 0040f87b: LEA EAX,[ESP + 0x2b44]
//   XREF to: Stack[-0xcac] (DATA)
// 0040f882: PUSH EAX
// 0040f883: PUSH 0x0
// 0040f885: PUSH 0x0
// 0040f887: LEA EAX,[ESP + 0x30ac]
//   XREF to: Stack[-0x750] (DATA)
// 0040f88e: PUSH EAX
// 0040f88f: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 0040f894: ADD ESP,0x14
// 0040f897: JMP 0x0040f7aa
//   XREF to: 0040f7aa (UNCONDITIONAL_JUMP)
// 0040f89c: PUSH 0x0
//   Label: LAB_0040f89c
// 0040f89e: LEA EAX,[ESP + 0x754]
//   XREF to: Stack[-0x309c] (DATA)
// 0040f8a5: PUSH EAX
// 0040f8a6: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0040f8ab: ADD ESP,0x8
// 0040f8ae: XOR ESI,ESI
// 0040f8b0: MOV EAX,ESI
// 0040f8b2: ADD ESP,0x37dc
// 0040f8b8: POP EBP
// 0040f8b9: POP EDI
// 0040f8ba: POP ESI
// 0040f8bb: POP EBX
// 0040f8bc: RET
// 0040f8bd: LEA EDI,[ESP + 0x3740]
//   Label: caseD_b
//   XREF to: Stack[-0xac] (DATA)
// 0040f8c4: MOV ESI,dword ptr [EBX + 0x68]
// 0040f8c7: PUSH EDI
// 0040f8c8: MOV AL,byte ptr [ESI]
//   Label: LAB_0040f8c8
// 0040f8ca: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xac] (DATA)
// 0040f8cc: CMP AL,0x0
// 0040f8ce: JZ 0x0040f8e0
//   XREF to: 0040f8e0 (CONDITIONAL_JUMP)
// 0040f8d0: MOV AL,byte ptr [ESI + 0x1]
// 0040f8d3: ADD ESI,0x2
// 0040f8d6: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xab] (WRITE)
// 0040f8d9: ADD EDI,0x2
// 0040f8dc: CMP AL,0x0
// 0040f8de: JNZ 0x0040f8c8
//   XREF to: 0040f8c8 (CONDITIONAL_JUMP)
// 0040f8e0: POP EDI
//   Label: LAB_0040f8e0
// 0040f8e1: PUSH 0x1
//   Label: LAB_0040f8e1
// 0040f8e3: PUSH 0x64
// 0040f8e5: LEA EAX,[ESP + 0x3748]
//   XREF to: Stack[-0xac] (DATA)
// 0040f8ec: PUSH EAX
// 0040f8ed: LEA EAX,[ESP + 0x3558]
//   XREF to: Stack[-0x2a0] (DATA)
// 0040f8f4: PUSH EAX
// 0040f8f5: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0040f8fa: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0040f8fb: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 0040f900: ADD ESP,0x14
// 0040f903: TEST EAX,EAX
// 0040f905: JZ 0x0040eef2
//   XREF to: 0040eef2 (CONDITIONAL_JUMP)
// 0040f90b: LEA EAX,[ESP + 0x3740]
//   XREF to: Stack[-0xac] (DATA)
// 0040f912: PUSH EAX
// 0040f913: MOV EDX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 0040f919: PUSH EDX
//   XREF to: 02d05310 (DATA)
// 0040f91a: CALL core_event.cpp_FUN_004add00
//   XREF to: 004add00 (UNCONDITIONAL_CALL)
// 0040f91f: ADD ESP,0x8
// 0040f922: TEST EAX,EAX
// 0040f924: JZ 0x0040f938
//   XREF to: 0040f938 (CONDITIONAL_JUMP)
// 0040f926: PUSH EAX
// 0040f927: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0040f92d: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0040f92e: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0040f933: ADD ESP,0x8
// 0040f936: JMP 0x0040f8e1
//   XREF to: 0040f8e1 (UNCONDITIONAL_JUMP)
// 0040f938: LEA ESI,[ESP + 0x3740]
//   Label: LAB_0040f938
//   XREF to: Stack[-0xac] (DATA)
// 0040f93f: MOV EDI,dword ptr [EBX + 0x68]
// 0040f942: PUSH EDI
// 0040f943: MOV AL,byte ptr [ESI]
//   Label: LAB_0040f943
//   XREF to: Stack[-0xac] (DATA)
// 0040f945: MOV byte ptr [EDI],AL
// 0040f947: CMP AL,0x0
// 0040f949: JZ 0x0040f95b
//   XREF to: 0040f95b (CONDITIONAL_JUMP)
// 0040f94b: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0xab] (READ)
// 0040f94e: ADD ESI,0x2
// 0040f951: MOV byte ptr [EDI + 0x1],AL
// 0040f954: ADD EDI,0x2
// 0040f957: CMP AL,0x0
// 0040f959: JNZ 0x0040f943
//   XREF to: 0040f943 (CONDITIONAL_JUMP)
// 0040f95b: POP EDI
//   Label: LAB_0040f95b
// 0040f95c: CMP dword ptr [EBX + 0x58],0x0
// 0040f960: JZ 0x0040f96e
//   XREF to: 0040f96e (CONDITIONAL_JUMP)
// 0040f962: PUSH EBP
// 0040f963: MOV EAX,dword ptr [EBP + 0x154]
// 0040f969: CALL dword ptr [EAX]
// 0040f96b: ADD ESP,0x4
// 0040f96e: MOV ESI,0x1
//   Label: LAB_0040f96e
// 0040f973: MOV EAX,ESI
// 0040f975: ADD ESP,0x37dc
// 0040f97b: POP EBP
// 0040f97c: POP EDI
// 0040f97d: POP ESI
// 0040f97e: POP EBX
// 0040f97f: RET
// 0040f980: LEA EDI,[ESP + 0x36dc]
//   Label: caseD_c
//   XREF to: Stack[-0x110] (DATA)
// 0040f987: MOV ESI,dword ptr [EBX + 0x68]
// 0040f98a: PUSH EDI
// 0040f98b: MOV AL,byte ptr [ESI]
//   Label: LAB_0040f98b
// 0040f98d: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x110] (DATA)
// 0040f98f: CMP AL,0x0
// 0040f991: JZ 0x0040f9a3
//   XREF to: 0040f9a3 (CONDITIONAL_JUMP)
// 0040f993: MOV AL,byte ptr [ESI + 0x1]
// 0040f996: ADD ESI,0x2
// 0040f999: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x10f] (WRITE)
// 0040f99c: ADD EDI,0x2
// 0040f99f: CMP AL,0x0
// 0040f9a1: JNZ 0x0040f98b
//   XREF to: 0040f98b (CONDITIONAL_JUMP)
// 0040f9a3: POP EDI
//   Label: LAB_0040f9a3
// 0040f9a4: PUSH 0x1
//   Label: LAB_0040f9a4
// 0040f9a6: PUSH 0x64
// 0040f9a8: LEA EAX,[ESP + 0x36e4]
//   XREF to: Stack[-0x110] (DATA)
// 0040f9af: PUSH EAX
// 0040f9b0: LEA EAX,[ESP + 0x3558]
//   XREF to: Stack[-0x2a0] (DATA)
// 0040f9b7: PUSH EAX
// 0040f9b8: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0040f9be: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0040f9bf: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 0040f9c4: ADD ESP,0x14
// 0040f9c7: TEST EAX,EAX
// 0040f9c9: JZ 0x0040eef2
//   XREF to: 0040eef2 (CONDITIONAL_JUMP)
// 0040f9cf: LEA EAX,[ESP + 0x36dc]
//   XREF to: Stack[-0x110] (DATA)
// 0040f9d6: PUSH EAX
// 0040f9d7: MOV ECX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 0040f9dd: PUSH ECX
//   XREF to: 02d05310 (DATA)
// 0040f9de: CALL core_event.cpp_FUN_004add40
//   XREF to: 004add40 (UNCONDITIONAL_CALL)
// 0040f9e3: ADD ESP,0x8
// 0040f9e6: TEST EAX,EAX
// 0040f9e8: JZ 0x0040f9fc
//   XREF to: 0040f9fc (CONDITIONAL_JUMP)
// 0040f9ea: PUSH EAX
// 0040f9eb: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0040f9f1: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0040f9f2: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0040f9f7: ADD ESP,0x8
// 0040f9fa: JMP 0x0040f9a4
//   XREF to: 0040f9a4 (UNCONDITIONAL_JUMP)
// 0040f9fc: LEA ESI,[ESP + 0x36dc]
//   Label: LAB_0040f9fc
//   XREF to: Stack[-0x110] (DATA)
// 0040fa03: MOV EDI,dword ptr [EBX + 0x68]
// 0040fa06: PUSH EDI
// 0040fa07: MOV AL,byte ptr [ESI]
//   Label: LAB_0040fa07
//   XREF to: Stack[-0x110] (DATA)
// 0040fa09: MOV byte ptr [EDI],AL
// 0040fa0b: CMP AL,0x0
// 0040fa0d: JZ 0x0040fa1f
//   XREF to: 0040fa1f (CONDITIONAL_JUMP)
// 0040fa0f: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x10f] (READ)
// 0040fa12: ADD ESI,0x2
// 0040fa15: MOV byte ptr [EDI + 0x1],AL
// 0040fa18: ADD EDI,0x2
// 0040fa1b: CMP AL,0x0
// 0040fa1d: JNZ 0x0040fa07
//   XREF to: 0040fa07 (CONDITIONAL_JUMP)
// 0040fa1f: POP EDI
//   Label: LAB_0040fa1f
// 0040fa20: CMP dword ptr [EBX + 0x58],0x0
// 0040fa24: JZ 0x0040fa32
//   XREF to: 0040fa32 (CONDITIONAL_JUMP)
// 0040fa26: PUSH EBP
// 0040fa27: MOV EAX,dword ptr [EBP + 0x154]
// 0040fa2d: CALL dword ptr [EAX]
// 0040fa2f: ADD ESP,0x4
// 0040fa32: MOV ESI,0x1
//   Label: LAB_0040fa32
// 0040fa37: MOV EAX,ESI
// 0040fa39: ADD ESP,0x37dc
// 0040fa3f: POP EBP
// 0040fa40: POP EDI
// 0040fa41: POP ESI
// 0040fa42: POP EBX
// 0040fa43: RET
// 0040fa44: LEA EAX,[ESP + 0x15f0]
//   Label: caseD_d
//   XREF to: Stack[-0x21fc] (DATA)
// 0040fa4b: PUSH EAX
// 0040fa4c: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0040fa51: ADD ESP,0x4
// 0040fa54: MOV ESI,dword ptr [EBX + 0x68]
// 0040fa57: PUSH ESI
// 0040fa58: MOV EDI,0xffffffff
// 0040fa5d: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 0040fa62: ADD ESP,0x4
// 0040fa65: MOV EDX,dword ptr [EAX + 0x964]
// 0040fa6b: XOR ESI,ESI
// 0040fa6d: MOV dword ptr [ESP + 0x37d4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0040fa74: MOV dword ptr [ESP + 0x37cc],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 0040fa7b: TEST EDX,EDX
// 0040fa7d: JLE 0x0040fb18
//   XREF to: 0040fb18 (CONDITIONAL_JUMP)
// 0040fa83: LEA EDX,[EAX + 0x4]
// 0040fa86: LEA EDI,[EAX + 0x968]
// 0040fa8c: MOV dword ptr [ESP + 0x37d0],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0040fa93: MOV dword ptr [ESP + 0x37c8],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0040fa9a: MOV EAX,dword ptr [ESP + 0x37c8]
//   Label: LAB_0040fa9a
//   XREF to: Stack[-0x24] (READ)
// 0040faa1: IMUL EAX,dword ptr [EAX + 0x98c],0x1e
// 0040faa8: ADD EAX,dword ptr [ESP + 0x37d0]
//   XREF to: Stack[-0x1c] (READ)
// 0040faaf: PUSH EAX
// 0040fab0: PUSH EDI
// 0040fab1: PUSH 0x614601
//   XREF to: 00614601 (DATA)
// 0040fab6: LEA EAX,[ESP + 0x2e78]
//   XREF to: Stack[-0x980] (DATA)
// 0040fabd: PUSH EAX
// 0040fabe: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0040fac3: ADD ESP,0x10
// 0040fac6: LEA EAX,[ESP + 0x2e6c]
//   XREF to: Stack[-0x980] (DATA)
// 0040facd: PUSH EAX
// 0040face: LEA EAX,[ESP + 0x15f4]
//   XREF to: Stack[-0x21fc] (DATA)
// 0040fad5: PUSH EAX
// 0040fad6: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0040fadb: ADD ESP,0x8
// 0040fade: MOV EAX,dword ptr [EBX + 0x68]
// 0040fae1: PUSH EAX
// 0040fae2: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0040fae7: ADD ESP,0x4
// 0040faea: CMP EAX,EDI
// 0040faec: JNZ 0x0040faf5
//   XREF to: 0040faf5 (CONDITIONAL_JUMP)
// 0040faee: MOV dword ptr [ESP + 0x37cc],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 0040faf5: ADD dword ptr [ESP + 0x37c8],0x54c
//   Label: LAB_0040faf5
//   XREF to: Stack[-0x24] (READ_WRITE)
// 0040fb00: MOV EAX,dword ptr [ESP + 0x37d4]
//   XREF to: Stack[-0x18] (READ)
// 0040fb07: INC ESI
// 0040fb08: MOV EDX,dword ptr [EAX + 0x964]
// 0040fb0e: ADD EDI,0x54c
// 0040fb14: CMP ESI,EDX
// 0040fb16: JL 0x0040fa9a
//   XREF to: 0040fa9a (CONDITIONAL_JUMP)
// 0040fb18: PUSH 0x0
//   Label: LAB_0040fb18
// 0040fb1a: MOV ECX,dword ptr [ESP + 0x37d0]
//   XREF to: Stack[-0x20] (READ)
// 0040fb21: PUSH ECX
// 0040fb22: LEA EAX,[ESP + 0x3554]
//   XREF to: Stack[-0x2a0] (DATA)
// 0040fb29: PUSH EAX
// 0040fb2a: LEA EAX,[ESP + 0x15fc]
//   XREF to: Stack[-0x21fc] (DATA)
// 0040fb31: PUSH EAX
// 0040fb32: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0040fb37: ADD ESP,0x10
// 0040fb3a: TEST EAX,EAX
// 0040fb3c: JL 0x0040fb84
//   XREF to: 0040fb84 (CONDITIONAL_JUMP)
// 0040fb3e: PUSH 0x0
// 0040fb40: PUSH EAX
// 0040fb41: MOV ESI,dword ptr [EBX + 0x68]
// 0040fb44: PUSH ESI
// 0040fb45: CALL core_motion.cpp_CMotionController_FUN_0052dde0
//   XREF to: 0052dde0 (UNCONDITIONAL_CALL)
// 0040fb4a: MOV EDI,dword ptr [EBX + 0x58]
// 0040fb4d: ADD ESP,0xc
// 0040fb50: TEST EDI,EDI
// 0040fb52: JZ 0x0040fb60
//   XREF to: 0040fb60 (CONDITIONAL_JUMP)
// 0040fb54: PUSH EBP
// 0040fb55: MOV EAX,dword ptr [EBP + 0x154]
// 0040fb5b: CALL dword ptr [EAX]
// 0040fb5d: ADD ESP,0x4
// 0040fb60: PUSH 0x0
//   Label: LAB_0040fb60
// 0040fb62: LEA EAX,[ESP + 0x15f4]
//   XREF to: Stack[-0x21fc] (DATA)
// 0040fb69: PUSH EAX
// 0040fb6a: MOV ESI,0x1
// 0040fb6f: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0040fb74: ADD ESP,0x8
// 0040fb77: MOV EAX,ESI
// 0040fb79: ADD ESP,0x37dc
// 0040fb7f: POP EBP
// 0040fb80: POP EDI
// 0040fb81: POP ESI
// 0040fb82: POP EBX
// 0040fb83: RET
// 0040fb84: PUSH 0x0
//   Label: LAB_0040fb84
// 0040fb86: LEA EAX,[ESP + 0x15f4]
//   XREF to: Stack[-0x21fc] (DATA)
// 0040fb8d: PUSH EAX
// 0040fb8e: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0040fb93: ADD ESP,0x8
// 0040fb96: XOR ESI,ESI
// 0040fb98: MOV EAX,ESI
// 0040fb9a: ADD ESP,0x37dc
// 0040fba0: POP EBP
// 0040fba1: POP EDI
// 0040fba2: POP ESI
// 0040fba3: POP EBX
// 0040fba4: RET
// 0040fba5: LEA EAX,[ESP + 0xea0]
//   Label: caseD_e
//   XREF to: Stack[-0x294c] (DATA)
// 0040fbac: PUSH EAX
// 0040fbad: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0040fbb2: ADD ESP,0x4
// 0040fbb5: PUSH 0x614607
//   XREF to: 00614607 (DATA)
// 0040fbba: PUSH 0x61460d
//   XREF to: 0061460d (DATA)
// 0040fbbf: LEA EAX,[ESP + 0xea8]
//   XREF to: Stack[-0x294c] (DATA)
// 0040fbc6: PUSH EAX
// 0040fbc7: CALL shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0
//   XREF to: 004a35b0 (UNCONDITIONAL_CALL)
// 0040fbcc: ADD ESP,0xc
// 0040fbcf: LEA EAX,[ESP + 0xea0]
//   XREF to: Stack[-0x294c] (DATA)
// 0040fbd6: PUSH EAX
// 0040fbd7: CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
//   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)
// 0040fbdc: MOV ECX,dword ptr [EBX + 0x68]
// 0040fbdf: MOV EAX,dword ptr [EBX + 0x5c]
// 0040fbe2: MOV EDI,dword ptr [ECX]
// 0040fbe4: ADD ESP,0x4
// 0040fbe7: CMP EAX,EDI
// 0040fbe9: JL 0x0040fce3
//   XREF to: 0040fce3 (CONDITIONAL_JUMP)
// 0040fbef: PUSH EBP
// 0040fbf0: PUSH ESI
// 0040fbf1: PUSH 0x61464b
//   XREF to: 0061464b (DATA)
// 0040fbf6: LEA EAX,[ESP + 0x3558]
//   XREF to: Stack[-0x2a0] (DATA)
// 0040fbfd: PUSH EAX
// 0040fbfe: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0040fc03: ADD ESP,0x10
// 0040fc06: PUSH 0x0
//   Label: LAB_0040fc06
// 0040fc08: PUSH -0x1
// 0040fc0a: LEA EAX,[ESP + 0x3554]
//   XREF to: Stack[-0x2a0] (DATA)
// 0040fc11: PUSH EAX
// 0040fc12: LEA EAX,[ESP + 0xeac]
//   XREF to: Stack[-0x294c] (DATA)
// 0040fc19: PUSH EAX
// 0040fc1a: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0040fc1f: MOV ESI,EAX
// 0040fc21: ADD ESP,0x10
// 0040fc24: TEST EAX,EAX
// 0040fc26: JL 0x0040fd71
//   XREF to: 0040fd71 (CONDITIONAL_JUMP)
// 0040fc2c: PUSH 0x0
// 0040fc2e: PUSH EAX
// 0040fc2f: LEA EAX,[ESP + 0x2148]
//   XREF to: Stack[-0x16ac] (DATA)
// 0040fc36: PUSH EAX
// 0040fc37: LEA EAX,[ESP + 0xeac]
//   XREF to: Stack[-0x294c] (DATA)
// 0040fc3e: PUSH EAX
// 0040fc3f: CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   XREF to: 004a2f80 (UNCONDITIONAL_CALL)
// 0040fc44: ADD ESP,0x10
// 0040fc47: PUSH 0x1
// 0040fc49: PUSH ESI
// 0040fc4a: LEA EAX,[ESP + 0x2348]
//   XREF to: Stack[-0x14ac] (DATA)
// 0040fc51: PUSH EAX
// 0040fc52: LEA EAX,[ESP + 0xeac]
//   XREF to: Stack[-0x294c] (DATA)
// 0040fc59: PUSH EAX
// 0040fc5a: CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   XREF to: 004a2f80 (UNCONDITIONAL_CALL)
// 0040fc5f: ADD ESP,0x10
// 0040fc62: LEA EAX,[ESP + 0x2340]
//   XREF to: Stack[-0x14ac] (DATA)
// 0040fc69: PUSH EAX
// 0040fc6a: LEA EAX,[ESP + 0x2144]
//   XREF to: Stack[-0x16ac] (DATA)
// 0040fc71: PUSH EAX
// 0040fc72: PUSH 0x0
// 0040fc74: PUSH 0x0
// 0040fc76: LEA EAX,[ESP + 0x31b0]
//   XREF to: Stack[-0x64c] (DATA)
// 0040fc7d: PUSH EAX
// 0040fc7e: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 0040fc83: MOV EDI,dword ptr [EBX + 0x68]
// 0040fc86: MOV EAX,dword ptr [EBX + 0x5c]
// 0040fc89: MOV EDX,dword ptr [EDI]
// 0040fc8b: ADD ESP,0x14
// 0040fc8e: CMP EAX,EDX
// 0040fc90: JGE 0x0040fd5e
//   XREF to: 0040fd5e (CONDITIONAL_JUMP)
// 0040fc96: MOV EAX,dword ptr [ESP + 0xea0]
//   XREF to: Stack[-0x294c] (READ)
// 0040fc9d: DEC EAX
// 0040fc9e: CMP ESI,EAX
// 0040fca0: JNZ 0x0040fd24
//   XREF to: 0040fd24 (CONDITIONAL_JUMP)
// 0040fca6: MOV ECX,dword ptr [EBX + 0x5c]
// 0040fca9: PUSH ECX
// 0040fcaa: PUSH EDI
// 0040fcab: CALL core_cloth.cpp_CClothList_remove_FUN_0043c170
//   XREF to: 0043c170 (UNCONDITIONAL_CALL)
// 0040fcb0: ADD ESP,0x8
//   Label: LAB_0040fcb0
// 0040fcb3: PUSH EBP
//   Label: LAB_0040fcb3
// 0040fcb4: MOV EAX,dword ptr [EBP + 0x154]
// 0040fcba: CALL dword ptr [EAX]
// 0040fcbc: ADD ESP,0x4
// 0040fcbf: PUSH 0x0
// 0040fcc1: LEA EAX,[ESP + 0xea4]
// 0040fcc8: PUSH EAX
// 0040fcc9: MOV ESI,0x1
// 0040fcce: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0040fcd3: ADD ESP,0x8
// 0040fcd6: MOV EAX,ESI
// 0040fcd8: ADD ESP,0x37dc
// 0040fcde: POP EBP
// 0040fcdf: POP EDI
// 0040fce0: POP ESI
// 0040fce1: POP EBX
// 0040fce2: RET
// 0040fce3: MOV EDX,EAX
//   Label: LAB_0040fce3
// 0040fce5: SHL EAX,0x2
// 0040fce8: ADD EAX,EDX
// 0040fcea: ADD ECX,0x4
// 0040fced: SHL EAX,0x3
// 0040fcf0: ADD EAX,ECX
// 0040fcf2: PUSH EAX
// 0040fcf3: PUSH EBP
// 0040fcf4: PUSH ESI
// 0040fcf5: PUSH 0x614614
//   XREF to: 00614614 (DATA)
// 0040fcfa: LEA EAX,[ESP + 0x355c]
//   XREF to: Stack[-0x2a0] (DATA)
// 0040fd01: PUSH EAX
// 0040fd02: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0040fd07: ADD ESP,0x14
// 0040fd0a: PUSH 0x61463c
//   XREF to: 0061463c (DATA)
// 0040fd0f: LEA EAX,[ESP + 0xea4]
//   XREF to: Stack[-0x294c] (DATA)
// 0040fd16: PUSH EAX
// 0040fd17: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0040fd1c: ADD ESP,0x8
// 0040fd1f: JMP 0x0040fc06
//   XREF to: 0040fc06 (UNCONDITIONAL_JUMP)
// 0040fd24: MOV EDX,dword ptr [EBX + 0x5c]
//   Label: LAB_0040fd24
// 0040fd27: LEA EAX,[EDX*0x4 + 0x0]
// 0040fd2e: ADD EAX,EDX
// 0040fd30: ADD EDI,0x4
// 0040fd33: SHL EAX,0x3
// 0040fd36: LEA ESI,[ESP + 0x31a0]
//   XREF to: Stack[-0x64c] (DATA)
// 0040fd3d: ADD EDI,EAX
// 0040fd3f: PUSH EDI
// 0040fd40: MOV AL,byte ptr [ESI]
//   Label: LAB_0040fd40
//   XREF to: Stack[-0x64c] (DATA)
// 0040fd42: MOV byte ptr [EDI],AL
// 0040fd44: CMP AL,0x0
// 0040fd46: JZ 0x0040fd58
//   XREF to: 0040fd58 (CONDITIONAL_JUMP)
// 0040fd48: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x64b] (READ)
// 0040fd4b: ADD ESI,0x2
// 0040fd4e: MOV byte ptr [EDI + 0x1],AL
// 0040fd51: ADD EDI,0x2
// 0040fd54: CMP AL,0x0
// 0040fd56: JNZ 0x0040fd40
//   XREF to: 0040fd40 (CONDITIONAL_JUMP)
// 0040fd58: POP EDI
//   Label: LAB_0040fd58
// 0040fd59: JMP 0x0040fcb3
//   XREF to: 0040fcb3 (UNCONDITIONAL_JUMP)
// 0040fd5e: LEA EAX,[ESP + 0x31a0]
//   Label: LAB_0040fd5e
//   XREF to: Stack[-0x64c] (DATA)
// 0040fd65: PUSH EAX
// 0040fd66: PUSH EDI
// 0040fd67: CALL core_cloth.cpp_CClothList_add_FUN_0043c0f0
//   XREF to: 0043c0f0 (UNCONDITIONAL_CALL)
// 0040fd6c: JMP 0x0040fcb0
//   XREF to: 0040fcb0 (UNCONDITIONAL_JUMP)
// 0040fd71: PUSH 0x0
//   Label: LAB_0040fd71
// 0040fd73: LEA EAX,[ESP + 0xea4]
//   XREF to: Stack[-0x294c] (DATA)
// 0040fd7a: PUSH EAX
// 0040fd7b: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0040fd80: ADD ESP,0x8
// 0040fd83: XOR ESI,ESI
// 0040fd85: MOV EAX,ESI
// 0040fd87: ADD ESP,0x37dc
// 0040fd8d: POP EBP
// 0040fd8e: POP EDI
// 0040fd8f: POP ESI
// 0040fd90: POP EBX
// 0040fd91: RET
// 0040fd92: MOV ECX,dword ptr [EBX + 0x68]
//   Label: caseD_10
// 0040fd95: MOV EAX,dword ptr [EBX + 0x5c]
// 0040fd98: CMP EAX,dword ptr [ECX]
// 0040fd9a: JGE 0x0040fe27
//   XREF to: 0040fe27 (CONDITIONAL_JUMP)
// 0040fda0: MOV EDX,EAX
// 0040fda2: SHL EAX,0x2
// 0040fda5: SUB EAX,EDX
// 0040fda7: SHL EAX,0x3
// 0040fdaa: ADD EAX,EDX
// 0040fdac: SHL EAX,0x2
// 0040fdaf: LEA EDX,[ECX + 0x1f8]
// 0040fdb5: ADD EDX,EAX
// 0040fdb7: ADD ECX,0x4
// 0040fdba: PUSH EDX
// 0040fdbb: ADD EAX,ECX
// 0040fdbd: PUSH EAX
// 0040fdbe: PUSH 0x614673
//   XREF to: 00614673 (DATA)
// 0040fdc3: LEA EAX,[ESP + 0x33b4]
//   XREF to: Stack[-0x444] (DATA)
// 0040fdca: PUSH EAX
// 0040fdcb: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0040fdd0: ADD ESP,0x10
// 0040fdd3: PUSH 0x1
//   Label: LAB_0040fdd3
// 0040fdd5: PUSH 0xdc
// 0040fdda: LEA EAX,[ESP + 0x33b0]
//   XREF to: Stack[-0x444] (DATA)
// 0040fde1: PUSH EAX
// 0040fde2: LEA EAX,[ESP + 0x3558]
//   XREF to: Stack[-0x2a0] (DATA)
// 0040fde9: PUSH EAX
// 0040fdea: MOV EBP,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0040fdf0: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 0040fdf1: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 0040fdf6: ADD ESP,0x14
// 0040fdf9: TEST EAX,EAX
// 0040fdfb: JZ 0x0040eef2
//   XREF to: 0040eef2 (CONDITIONAL_JUMP)
// 0040fe01: CMP byte ptr [ESP + 0x33a8],0x0
//   XREF to: Stack[-0x444] (READ)
// 0040fe09: JNZ 0x0040fe5b
//   XREF to: 0040fe5b (CONDITIONAL_JUMP)
// 0040fe0b: MOV EAX,dword ptr [EBX + 0x68]
// 0040fe0e: MOV EDX,dword ptr [EBX + 0x5c]
// 0040fe11: CMP EDX,dword ptr [EAX]
// 0040fe13: JL 0x0040fe4f
//   XREF to: 0040fe4f (CONDITIONAL_JUMP)
// 0040fe15: MOV ESI,0x1
//   Label: LAB_0040fe15
// 0040fe1a: MOV EAX,ESI
// 0040fe1c: ADD ESP,0x37dc
// 0040fe22: POP EBP
// 0040fe23: POP EDI
// 0040fe24: POP ESI
// 0040fe25: POP EBX
// 0040fe26: RET
// 0040fe27: MOV ESI,0x614660
//   Label: LAB_0040fe27
//   XREF to: 00614660 (DATA)
// 0040fe2c: LEA EDI,[ESP + 0x33a8]
//   XREF to: Stack[-0x444] (DATA)
// 0040fe33: PUSH EDI
// 0040fe34: MOV AL,byte ptr [ESI]
//   Label: LAB_0040fe34
//   XREF to: 00614660 (READ)
//   XREF to: 00614662 (READ)
// 0040fe36: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x444] (DATA)
// 0040fe38: CMP AL,0x0
// 0040fe3a: JZ 0x0040fe4c
//   XREF to: 0040fe4c (CONDITIONAL_JUMP)
// 0040fe3c: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00614661 (READ)
//   XREF to: 00614663 (READ)
// 0040fe3f: ADD ESI,0x2
// 0040fe42: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x443] (WRITE)
// 0040fe45: ADD EDI,0x2
// 0040fe48: CMP AL,0x0
// 0040fe4a: JNZ 0x0040fe34
//   XREF to: 0040fe34 (CONDITIONAL_JUMP)
// 0040fe4c: POP EDI
//   Label: LAB_0040fe4c
// 0040fe4d: JMP 0x0040fdd3
//   XREF to: 0040fdd3 (UNCONDITIONAL_JUMP)
// 0040fe4f: PUSH EDX
//   Label: LAB_0040fe4f
// 0040fe50: PUSH EAX
// 0040fe51: CALL core_event.cpp_CRuleList_remove_FUN_004b17c0
//   XREF to: 004b17c0 (UNCONDITIONAL_CALL)
// 0040fe56: ADD ESP,0x8
// 0040fe59: JMP 0x0040fe15
//   XREF to: 0040fe15 (UNCONDITIONAL_JUMP)
// 0040fe5b: PUSH 0x61467c
//   Label: LAB_0040fe5b
//   XREF to: 0061467c (DATA)
// 0040fe60: LEA EAX,[ESP + 0x33ac]
//   XREF to: Stack[-0x444] (DATA)
// 0040fe67: PUSH EAX
// 0040fe68: CALL crt_string.c_strstr_FUN_005fedd0
//   XREF to: 005fedd0 (UNCONDITIONAL_CALL)
// 0040fe6d: ADD ESP,0x8
// 0040fe70: MOV EBP,EAX
// 0040fe72: TEST EAX,EAX
// 0040fe74: JZ 0x0040ff1a
//   XREF to: 0040ff1a (CONDITIONAL_JUMP)
// 0040fe7a: LEA ESI,[ESP + 0x33a8]
//   XREF to: Stack[-0x444] (DATA)
// 0040fe81: LEA EDI,[ESP + 0x3614]
//   XREF to: Stack[-0x1d8] (DATA)
// 0040fe88: MOV byte ptr [EAX],0x0
// 0040fe8b: PUSH EDI
// 0040fe8c: MOV AL,byte ptr [ESI]
//   Label: LAB_0040fe8c
//   XREF to: Stack[-0x444] (DATA)
// 0040fe8e: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x1d8] (DATA)
// 0040fe90: CMP AL,0x0
// 0040fe92: JZ 0x0040fea4
//   XREF to: 0040fea4 (CONDITIONAL_JUMP)
// 0040fe94: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x443] (READ)
// 0040fe97: ADD ESI,0x2
// 0040fe9a: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x1d7] (WRITE)
// 0040fe9d: ADD EDI,0x2
// 0040fea0: CMP AL,0x0
// 0040fea2: JNZ 0x0040fe8c
//   XREF to: 0040fe8c (CONDITIONAL_JUMP)
// 0040fea4: POP EDI
//   Label: LAB_0040fea4
// 0040fea5: LEA EDI,[ESP + 0x3614]
//   XREF to: Stack[-0x1d8] (DATA)
// 0040feac: LEA ESI,[ESP + 0x3614]
//   XREF to: Stack[-0x1d8] (DATA)
// 0040feb3: SUB ECX,ECX
// 0040feb5: DEC ECX
// 0040feb6: XOR EAX,EAX
// 0040feb8: SCASB.REPNE ES:EDI
// 0040feba: NOT ECX
// 0040febc: DEC ECX
// 0040febd: MOV EAX,ECX
// 0040febf: MOV EDI,ECX
// 0040fec1: TEST ECX,ECX
// 0040fec3: JLE 0x0040fee3
//   XREF to: 0040fee3 (CONDITIONAL_JUMP)
// 0040fec5: LEA EDX,[ESP + 0x3614]
//   XREF to: Stack[-0x1d8] (DATA)
// 0040fecc: LEA EAX,[ECX + EDX*0x1]
// 0040fecf: MOV DL,byte ptr [EAX + -0x1]
//   Label: LAB_0040fecf
// 0040fed2: INC DL
// 0040fed4: AND EDX,0xff
// 0040feda: TEST byte ptr [EDX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 0040fee1: JNZ 0x0040ff32
//   XREF to: 0040ff32 (CONDITIONAL_JUMP)
// 0040fee3: LEA EAX,[ESI + EDI*0x1]
//   Label: LAB_0040fee3
//   XREF to: Stack[-0x1d8] (DATA)
// 0040fee6: MOV byte ptr [EAX],0x0
//   XREF to: Stack[-0x1d8] (DATA)
// 0040fee9: LEA EAX,[ESI + 0x1]
//   XREF to: Stack[-0x1d7] (DATA)
// 0040feec: MOV dword ptr [ESP + 0x37d8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0040fef3: MOV AL,byte ptr [ESI]
//   Label: LAB_0040fef3
//   XREF to: Stack[-0x1d8] (DATA)
// 0040fef5: INC AL
// 0040fef7: AND EAX,0xff
// 0040fefc: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 0040ff03: JZ 0x0040ff3a
//   XREF to: 0040ff3a (CONDITIONAL_JUMP)
// 0040ff05: PUSH EDI
// 0040ff06: MOV EAX,dword ptr [ESP + 0x37dc]
//   XREF to: Stack[-0x14] (READ)
// 0040ff0d: PUSH EAX
// 0040ff0e: PUSH ESI
// 0040ff0f: DEC EDI
// 0040ff10: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 0040ff15: ADD ESP,0xc
// 0040ff18: JMP 0x0040fef3
//   XREF to: 0040fef3 (UNCONDITIONAL_JUMP)
// 0040ff1a: PUSH 0x61467f
//   Label: LAB_0040ff1a
//   XREF to: 0061467f (DATA)
// 0040ff1f: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 0040ff24: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0040ff25: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0040ff2a: ADD ESP,0x8
// 0040ff2d: JMP 0x0040fdd3
//   XREF to: 0040fdd3 (UNCONDITIONAL_JUMP)
// 0040ff32: DEC EDI
//   Label: LAB_0040ff32
// 0040ff33: DEC EAX
// 0040ff34: TEST EDI,EDI
// 0040ff36: JG 0x0040fecf
//   XREF to: 0040fecf (CONDITIONAL_JUMP)
// 0040ff38: JMP 0x0040fee3
//   XREF to: 0040fee3 (UNCONDITIONAL_JUMP)
// 0040ff3a: LEA EDI,[ESP + 0x3678]
//   Label: LAB_0040ff3a
//   XREF to: Stack[-0x174] (DATA)
// 0040ff41: LEA ESI,[EBP + 0x2]
// 0040ff44: MOV byte ptr [EBP],0x3d
// 0040ff48: PUSH EDI
// 0040ff49: MOV AL,byte ptr [ESI]
//   Label: LAB_0040ff49
// 0040ff4b: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x174] (DATA)
// 0040ff4d: CMP AL,0x0
// 0040ff4f: JZ 0x0040ff61
//   XREF to: 0040ff61 (CONDITIONAL_JUMP)
// 0040ff51: MOV AL,byte ptr [ESI + 0x1]
// 0040ff54: ADD ESI,0x2
// 0040ff57: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x173] (WRITE)
// 0040ff5a: ADD EDI,0x2
// 0040ff5d: CMP AL,0x0
// 0040ff5f: JNZ 0x0040ff49
//   XREF to: 0040ff49 (CONDITIONAL_JUMP)
// 0040ff61: POP EDI
//   Label: LAB_0040ff61
// 0040ff62: LEA EDI,[ESP + 0x3678]
//   XREF to: Stack[-0x174] (DATA)
// 0040ff69: LEA ESI,[ESP + 0x3678]
//   XREF to: Stack[-0x174] (DATA)
// 0040ff70: SUB ECX,ECX
// 0040ff72: DEC ECX
// 0040ff73: XOR EAX,EAX
// 0040ff75: SCASB.REPNE ES:EDI
// 0040ff77: NOT ECX
// 0040ff79: DEC ECX
// 0040ff7a: MOV EDI,ECX
// 0040ff7c: TEST ECX,ECX
// 0040ff7e: JLE 0x0040ff9d
//   XREF to: 0040ff9d (CONDITIONAL_JUMP)
// 0040ff80: LEA EAX,[ESP + 0x3678]
//   XREF to: Stack[-0x174] (DATA)
// 0040ff87: ADD EAX,ECX
// 0040ff89: MOV DL,byte ptr [EAX + -0x1]
//   Label: LAB_0040ff89
//   XREF to: Stack[-0x175] (READ)
// 0040ff8c: INC DL
// 0040ff8e: AND EDX,0xff
// 0040ff94: TEST byte ptr [EDX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 0040ff9b: JNZ 0x0040ffc6
//   XREF to: 0040ffc6 (CONDITIONAL_JUMP)
// 0040ff9d: LEA EAX,[ESI + EDI*0x1]
//   Label: LAB_0040ff9d
//   XREF to: Stack[-0x174] (DATA)
// 0040ffa0: LEA EBP,[ESI + 0x1]
//   XREF to: Stack[-0x173] (DATA)
// 0040ffa3: MOV byte ptr [EAX],0x0
//   XREF to: Stack[-0x174] (DATA)
// 0040ffa6: MOV AL,byte ptr [ESI]
//   Label: LAB_0040ffa6
//   XREF to: Stack[-0x174] (DATA)
// 0040ffa8: INC AL
// 0040ffaa: AND EAX,0xff
// 0040ffaf: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 0040ffb6: JZ 0x0040ffce
//   XREF to: 0040ffce (CONDITIONAL_JUMP)
// 0040ffb8: PUSH EDI
// 0040ffb9: PUSH EBP
// 0040ffba: PUSH ESI
// 0040ffbb: DEC EDI
// 0040ffbc: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 0040ffc1: ADD ESP,0xc
// 0040ffc4: JMP 0x0040ffa6
//   XREF to: 0040ffa6 (UNCONDITIONAL_JUMP)
// 0040ffc6: DEC EDI
//   Label: LAB_0040ffc6
// 0040ffc7: DEC EAX
// 0040ffc8: TEST EDI,EDI
// 0040ffca: JG 0x0040ff89
//   XREF to: 0040ff89 (CONDITIONAL_JUMP)
// 0040ffcc: JMP 0x0040ff9d
//   XREF to: 0040ff9d (UNCONDITIONAL_JUMP)
// 0040ffce: LEA EAX,[ESP + 0x3614]
//   Label: LAB_0040ffce
//   XREF to: Stack[-0x1d8] (DATA)
// 0040ffd5: PUSH EAX
// 0040ffd6: MOV EDX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 0040ffdc: PUSH EDX
//   XREF to: 02d05310 (DATA)
// 0040ffdd: CALL core_event.cpp_FUN_004add00
//   XREF to: 004add00 (UNCONDITIONAL_CALL)
// 0040ffe2: ADD ESP,0x8
// 0040ffe5: TEST EAX,EAX
// 0040ffe7: JZ 0x0040fffe
//   XREF to: 0040fffe (CONDITIONAL_JUMP)
// 0040ffe9: PUSH EAX
// 0040ffea: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0040fff0: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0040fff1: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0040fff6: ADD ESP,0x8
// 0040fff9: JMP 0x0040fdd3
//   XREF to: 0040fdd3 (UNCONDITIONAL_JUMP)
// 004100ee: LEA EAX,[ESP + 0x1998]
//   Label: caseD_f
//   XREF to: Stack[-0x1e54] (DATA)
// 004100f5: PUSH EAX
// 004100f6: MOV EBP,0xffffffff
// 004100fb: XOR ESI,ESI
// 004100fd: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 00410102: MOV ECX,dword ptr [EBX + 0x5c]
// 00410105: ADD ESP,0x4
// 00410108: TEST ECX,ECX
// 0041010a: JLE 0x00410142
//   XREF to: 00410142 (CONDITIONAL_JUMP)
// 0041010c: XOR EDI,EDI
// 0041010e: MOV EAX,dword ptr [EBX + 0x60]
//   Label: LAB_0041010e
// 00410111: MOV ECX,dword ptr [EDI + EAX*0x1]
// 00410114: PUSH ECX
// 00410115: LEA EAX,[ESP + 0x199c]
//   XREF to: Stack[-0x1e54] (DATA)
// 0041011c: PUSH EAX
// 0041011d: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00410122: MOV EAX,dword ptr [EBX + 0x68]
// 00410125: MOV EDX,dword ptr [EBX + 0x60]
// 00410128: MOV EAX,dword ptr [EAX]
// 0041012a: MOV ECX,dword ptr [EDX + EDI*0x1 + 0x4]
// 0041012e: ADD ESP,0x8
// 00410131: CMP EAX,ECX
// 00410133: JNZ 0x00410137
//   XREF to: 00410137 (CONDITIONAL_JUMP)
// 00410135: MOV EBP,ESI
// 00410137: INC ESI
//   Label: LAB_00410137
// 00410138: MOV EAX,dword ptr [EBX + 0x5c]
// 0041013b: ADD EDI,0x8
// 0041013e: CMP ESI,EAX
// 00410140: JL 0x0041010e
//   XREF to: 0041010e (CONDITIONAL_JUMP)
// 00410142: CMP dword ptr [EBX + 0x5c],0x2
//   Label: LAB_00410142
// 00410146: JNZ 0x00410184
//   XREF to: 00410184 (CONDITIONAL_JUMP)
// 00410148: TEST EBP,EBP
// 0041014a: JL 0x00410184
//   XREF to: 00410184 (CONDITIONAL_JUMP)
// 0041014c: MOV EAX,0x1
// 00410151: SUB EAX,EBP
// 00410153: MOV EDX,dword ptr [EBX + 0x60]
// 00410156: SHL EAX,0x3
// 00410159: ADD EAX,EDX
//   Label: LAB_00410159
// 0041015b: MOV EDX,dword ptr [EBX + 0x68]
// 0041015e: MOV EAX,dword ptr [EAX + 0x4]
// 00410161: MOV dword ptr [EDX],EAX
// 00410163: PUSH 0x0
//   Label: LAB_00410163
// 00410165: LEA EAX,[ESP + 0x199c]
//   XREF to: Stack[-0x1e54] (DATA)
// 0041016c: PUSH EAX
// 0041016d: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00410172: ADD ESP,0x8
// 00410175: XOR ESI,ESI
// 00410177: MOV EAX,ESI
// 00410179: ADD ESP,0x37dc
// 0041017f: POP EBP
// 00410180: POP EDI
// 00410181: POP ESI
// 00410182: POP EBX
// 00410183: RET
// 00410184: PUSH 0x0
//   Label: LAB_00410184
// 00410186: PUSH EBP
// 00410187: LEA EAX,[ESP + 0x3554]
//   XREF to: Stack[-0x2a0] (DATA)
// 0041018e: PUSH EAX
// 0041018f: LEA EAX,[ESP + 0x19a4]
//   XREF to: Stack[-0x1e54] (DATA)
// 00410196: PUSH EAX
// 00410197: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0041019c: ADD ESP,0x10
// 0041019f: TEST EAX,EAX
// 004101a1: JL 0x00410163
//   XREF to: 00410163 (CONDITIONAL_JUMP)
// 004101a3: SHL EAX,0x3
// 004101a6: MOV EDX,dword ptr [EBX + 0x60]
// 004101a9: JMP 0x00410159
//   XREF to: 00410159 (UNCONDITIONAL_JUMP)
// 004101ab: XOR ESI,ESI
//   Label: caseD_12
// 004101ad: MOV EBP,0x6146b4
//   XREF to: 006146b4 (DATA)
// 004101b2: LEA EAX,[ESP + 0x1248]
//   Label: LAB_004101b2
//   XREF to: Stack[-0x25a4] (DATA)
// 004101b9: PUSH EAX
// 004101ba: XOR EDI,EDI
// 004101bc: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 004101c1: ADD ESP,0x4
// 004101c4: MOV EAX,dword ptr [EBX + 0x68]
//   Label: LAB_004101c4
// 004101c7: MOV EDX,dword ptr [EDI + 0x66e30c]
//   XREF to: 0066e30c (READ)
//   XREF to: 0066e314 (READ)
// 004101cd: TEST dword ptr [EAX],EDX
// 004101cf: JZ 0x00410265
//   XREF to: 00410265 (CONDITIONAL_JUMP)
// 004101d5: MOV EAX,0x6146ad
//   XREF to: 006146ad (DATA)
// 004101da: PUSH EAX
//   Label: LAB_004101da
//   XREF to: 006146ad (DATA)
//   XREF to: 006146b4 (DATA)
// 004101db: MOV ECX,dword ptr [EDI + 0x66e310]
//   XREF to: 006146f5 (PARAM)
//   XREF to: 0066e310 (READ)
//   XREF to: 0066e318 (READ)
// 004101e1: PUSH ECX
//   XREF to: 006146f5 (DATA)
//   XREF to: 006146fc (DATA)
// 004101e2: PUSH 0x6146bd
//   XREF to: 006146bd (DATA)
// 004101e7: LEA EAX,[ESP + 0x3490]
//   XREF to: Stack[-0x368] (DATA)
// 004101ee: PUSH EAX
// 004101ef: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004101f4: ADD ESP,0x10
// 004101f7: LEA EAX,[ESP + 0x3484]
//   XREF to: Stack[-0x368] (DATA)
// 004101fe: PUSH EAX
// 004101ff: LEA EAX,[ESP + 0x124c]
//   XREF to: Stack[-0x25a4] (DATA)
// 00410206: PUSH EAX
// 00410207: ADD EDI,0x8
// 0041020a: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0041020f: ADD ESP,0x8
// 00410212: CMP EDI,0x10
// 00410215: JNZ 0x004101c4
//   XREF to: 004101c4 (CONDITIONAL_JUMP)
// 00410217: PUSH 0x0
// 00410219: PUSH ESI
// 0041021a: LEA EAX,[ESP + 0x3554]
//   XREF to: Stack[-0x2a0] (DATA)
// 00410221: PUSH EAX
// 00410222: LEA EAX,[ESP + 0x1254]
//   XREF to: Stack[-0x25a4] (DATA)
// 00410229: PUSH EAX
// 0041022a: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0041022f: ADD ESP,0x10
// 00410232: MOV ESI,EAX
// 00410234: TEST EAX,EAX
// 00410236: JL 0x0041026c
//   XREF to: 0041026c (CONDITIONAL_JUMP)
// 00410238: LEA EDX,[EAX*0x8 + 0x0]
// 0041023f: MOV EAX,dword ptr [EBX + 0x68]
// 00410242: MOV EDX,dword ptr [EDX + 0x66e30c]
//   XREF to: 0066e30c (DATA)
// 00410248: MOV EDI,dword ptr [EAX]
// 0041024a: XOR EDI,EDX
// 0041024c: PUSH 0x0
// 0041024e: MOV dword ptr [EAX],EDI
// 00410250: LEA EAX,[ESP + 0x124c]
//   XREF to: Stack[-0x25a4] (DATA)
// 00410257: PUSH EAX
// 00410258: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0041025d: ADD ESP,0x8
// 00410260: JMP 0x004101b2
//   XREF to: 004101b2 (UNCONDITIONAL_JUMP)
// 00410265: MOV EAX,EBP
//   Label: LAB_00410265
// 00410267: JMP 0x004101da
//   XREF to: 004101da (UNCONDITIONAL_JUMP)
// 0041026c: PUSH 0x0
//   Label: LAB_0041026c
// 0041026e: LEA EAX,[ESP + 0x124c]
//   XREF to: Stack[-0x25a4] (DATA)
// 00410275: PUSH EAX
// 00410276: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0041027b: ADD ESP,0x8
// 0041027e: XOR ESI,ESI
// 00410280: MOV EAX,ESI
// 00410282: ADD ESP,0x37dc
// 00410288: POP EBP
// 00410289: POP EDI
// 0041028a: POP ESI
// 0041028b: POP EBX
// 0041028c: RET
// 0041028d: PUSH EBX
//   Label: caseD_11
// 0041028e: PUSH EBP
// 0041028f: CALL dword ptr [EBX + 0xe8]
// 00410295: ADD ESP,0x8
// 00410298: TEST EAX,EAX
// 0041029a: JZ 0x0040eef2
//   XREF to: 0040eef2 (CONDITIONAL_JUMP)
// 004102a0: CMP dword ptr [EBX + 0x58],0x0
// 004102a4: JNZ 0x004102b8
//   XREF to: 004102b8 (CONDITIONAL_JUMP)
// 004102a6: MOV ESI,0x1
// 004102ab: MOV EAX,ESI
// 004102ad: ADD ESP,0x37dc
// 004102b3: POP EBP
// 004102b4: POP EDI
// 004102b5: POP ESI
// 004102b6: POP EBX
// 004102b7: RET
// 004102b8: PUSH EBP
//   Label: LAB_004102b8
// 004102b9: MOV EAX,dword ptr [EBP + 0x154]
// 004102bf: CALL dword ptr [EAX]
// 004102c1: ADD ESP,0x4
// 004102c4: MOV ESI,0x1
// 004102c9: MOV EAX,ESI
// 004102cb: ADD ESP,0x37dc
// 004102d1: POP EBP
// 004102d2: POP EDI
// 004102d3: POP ESI
// 004102d4: POP EBX
// 004102d5: RET
// 004102d6: MOV EDI,dword ptr [EBX]
//   Label: default
// 004102d8: PUSH EDI
// 004102d9: MOV ECX,0x6146c3
//   XREF to: 006146c3 (PARAM)
// 004102de: MOV ESI,0x119f
// 004102e3: PUSH 0x6146d5
//   XREF to: 006146d5 (DATA)
// 004102e8: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004102ee: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 004102f4: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004102f9: ADD ESP,0x8
// 004102fc: XOR ESI,ESI
// 004102fe: MOV EAX,ESI
// 00410300: ADD ESP,0x37dc
// 00410306: POP EBP
// 00410307: POP EDI
// 00410308: POP ESI
// 00410309: POP EBX
// 0041030a: RET
// 0041030b: PUSH EBP
//   Label: LAB_0041030b
// 0041030c: LEA ESI,[EBX + 0x4]
// 0041030f: PUSH ESI
// 00410310: PUSH 0x614560
//   XREF to: 00614560 (DATA)
// 00410315: LEA EAX,[ESP + 0x3558]
//   XREF to: Stack[-0x2a0] (DATA)
// 0041031c: PUSH EAX
// 0041031d: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00410322: MOV EAX,dword ptr [EBX]
// 00410324: ADD ESP,0x10
// 00410327: CMP EAX,0x12
// 0041032a: JA 0x004102d6
//   XREF to: 004102d6 (CONDITIONAL_JUMP)
// 0041032c: JMP dword ptr [EAX*0x4 + 0x40ee84]
//   Label: switchD
//   XREF to: 0040ef01 (COMPUTED_JUMP)
//   XREF to: 0040ef93 (COMPUTED_JUMP)
//   XREF to: 0040f026 (COMPUTED_JUMP)
//   XREF to: 0040f115 (COMPUTED_JUMP)
//   XREF to: 0040f13d (COMPUTED_JUMP)
//   XREF to: 0040f1fb (COMPUTED_JUMP)
//   XREF to: 0040f285 (COMPUTED_JUMP)
//   XREF to: 0040f43d (COMPUTED_JUMP)
//   XREF to: 0040f61d (COMPUTED_JUMP)
//   XREF to: 0040f640 (COMPUTED_JUMP)
//   XREF to: 0040f6f2 (COMPUTED_JUMP)
//   XREF to: 0040f8bd (COMPUTED_JUMP)
//   XREF to: 0040f980 (COMPUTED_JUMP)
//   XREF to: 0040fa44 (COMPUTED_JUMP)
//   XREF to: 0040fba5 (COMPUTED_JUMP)
//   XREF to: 0040fd92 (COMPUTED_JUMP)
//   XREF to: 004100ee (COMPUTED_JUMP)
//   XREF to: 004101ab (COMPUTED_JUMP)
//   XREF to: 0041028d (COMPUTED_JUMP)
//   XREF to: 0040ee84 (DATA)
