// Name: core_skeledit.cpp_FUN_00592690
// Address: 00592690
// Address Range: [[00592690, 00595f23]]
// Convention: __cdecl
// Signature: int __cdecl core_skeledit_cpp_FUN_00592690(void)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_skeledit_cpp_FUN_00592690(void)

{
  char cVar1;
  CEditorTools *this_ptr;
  CBoneStructure *this_ptr_00;
  _FILE *p_Var2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  CBoneStructure *pCVar7;
  CVector3f *pCVar8;
  SBone *pSVar9;
  SBone *pSVar10;
  SIZE_T n;
  char *pcVar11;
  CVector3f *pCVar12;
  int iVar13;
  SMotion *pSVar14;
  byte *str;
  float *pfVar15;
  float fVar16;
  CQuaternion4f *pCVar17;
  char *pcVar18;
  uint *puVar19;
  CMatrix3x4f *pCVar20;
  SMotionTransition *dest;
  uint *puVar21;
  uint *puVar22;
  CMatrix3x4f *pCVar23;
  CMatrix3x3f *pCVar24;
  bool bVar25;
  byte bVar26;
  double dVar27;
  CSkeleton *in_stack_00000004;
  char *in_stack_00000008;
  int *piVar28;
  CBoneStructure *in_stack_fffeec08;
  uint in_stack_fffeec0c;
  uint in_stack_fffeec10;
  uint in_stack_fffeec14;
  uint in_stack_fffeec18;
  int local_ded4;
  char local_ded0 [32];
  int aiStack_deb0 [6793];
  int local_748c;
  CMatrix3x4f local_7434 [381];
  CPickList local_2ca8;
  int aiStack_2900 [120];
  int aiStack_2720 [120];
  int local_2540 [120];
  char local_2360 [400];
  char local_21d0 [6];
  char local_21ca [294];
  char local_20a4 [2];
  char local_20a2 [15];
  byte local_2093 [283];
  char local_1f78 [260];
  char local_1e74 [260];
  char local_1d70 [256];
  char local_1c70 [256];
  char local_1b70 [256];
  char local_1a70 [112];
  uint auStack_1a00 [36];
  char local_1970 [256];
  char local_1870 [256];
  char local_1770 [256];
  char local_1670 [256];
  char local_1570 [256];
  char local_1470 [256];
  char local_1370 [256];
  char local_1270 [100];
  uint auStack_120c [39];
  char local_1170 [256];
  char local_1070 [256];
  char local_f70 [256];
  char local_e70 [256];
  char local_d70 [256];
  char local_c70 [256];
  char local_b70 [200];
  char local_aa8 [200];
  char local_9e0 [200];
  char local_918 [199];
  char acStack_851 [201];
  byte local_788 [100];
  byte local_724 [100];
  byte local_6c0 [100];
  byte local_65c [100];
  byte local_5f8 [100];
  byte local_594 [100];
  byte local_530 [100];
  byte local_4cc [100];
  byte local_468 [52];
  CMatrix3x4f local_434;
  CMatrix3x4f local_404;
  CMatrix3x4f local_3d4;
  CMatrix3x4f local_3a4;
  CMatrix3x4f local_374;
  CMatrix3x4f local_344;
  CMatrix3x4f local_314;
  CMatrix3x3f local_2e4;
  byte local_2b4 [40];
  byte local_28c [40];
  byte local_264 [32];
  byte local_244 [32];
  CQuaternion4f local_224;
  CQuaternion4f local_214;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  CVector3f local_1e0;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  CVector3f local_1bc;
  CVector3f local_1b0;
  float local_1a4;
  float local_1a0;
  float local_19c;
  CVector3f local_198;
  CVector3f local_18c;
  CVector3f local_180;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  CVector3f local_15c;
  CVector3f local_150;
  float local_144;
  float local_140;
  float local_13c;
  CVector3f local_138;
  double local_12c;
  double local_124;
  _FILE *local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  int local_108;
  char *local_104;
  char *local_100;
  char *local_fc;
  SMotion *local_f8;
  int local_f4;
  int local_f0;
  SMotion *local_ec;
  char *local_e8;
  int local_e4;
  uint local_e0;
  uint local_dc;
  _FILE *local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  int local_c8;
  int local_c4;
  CBoneStructure *local_c0;
  byte local_b8 [24];
  float local_a0;
  SMotionTransition *local_9c;
  float local_98;
  float local_94;
  float local_90;
  float *local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  uint local_74;
  int local_70;
  float local_6c;
  int local_68;
  int local_64;
  uint local_60;
  int local_5c;
  byte local_58 [28];
  float local_3c;
  int local_38;
  float local_34;
  float local_2c;
  char local_28 [4];
  char local_24 [4];
  char local_20 [4];
  char local_1c [4];
  char local_18 [4];
  char local_14 [4];
  
  bVar26 = 0;
  __STK(0x11418);
  core_skeleton_cpp_CSkeleton_free_FUN_00599a50(in_stack_00000004);
  p_Var2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (in_stack_00000008,(char *)0x0,"rt","..\\core\\skeledit.cpp",
                      0x103c);
  local_11c = p_Var2;
  if (p_Var2 == (_FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s");
    return 0;
  }
  local_118 = 0.0;
  iVar13 = 1;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Reading state list from %s");
  do {
    iVar3 = _fgetc(p_Var2);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar13 = iVar13 + -1, 0 < iVar13));
  local_114 = 0.0;
  _fscanf(local_11c,"%d\n");
  if (0x50 < (int)local_114) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x104a;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("%s has %d states, max is %d",in_stack_00000008,local_114);
  }
  p_Var2 = local_11c;
  iVar13 = 1;
  do {
    iVar3 = _fgetc(p_Var2);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar13 = iVar13 + -1, 0 < iVar13));
  (in_stack_00000004->motion_list).state_count = 0;
  if ((in_stack_00000004->motion_list).state_count < (int)local_114) {
    do {
      _fscanf(local_11c,"%s\n");
      if ((in_stack_00000004->motion_list).state_names[(in_stack_00000004->motion_list).state_count]
          [0] == '/') {
        pcVar11 = "State name begins with '/', state count is probably wrong in %s";
        goto LAB_005927df;
      }
      iVar13 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0
                         (&in_stack_00000004->motion_list);
      if (-1 < iVar13) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Duplicate state %s in %s",
                   (in_stack_00000004->motion_list).state_names +
                   (in_stack_00000004->motion_list).state_count);
        goto LAB_005927ee;
      }
      iVar13 = (in_stack_00000004->motion_list).state_count + 1;
      (in_stack_00000004->motion_list).state_count = iVar13;
    } while (iVar13 < (int)local_114);
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Reading home pose filename");
  p_Var2 = local_11c;
  iVar3 = 1;
  pcVar11 = "(file error)";
  pcVar18 = local_1e74;
  for (iVar13 = 0x41; iVar13 != 0; iVar13 = iVar13 + -1) {
    *(uint *)pcVar18 = *(uint *)pcVar11;
    pcVar11 = pcVar11 + ((uint)bVar26 * -2 + 1) * 4;
    pcVar18 = pcVar18 + ((uint)bVar26 * -2 + 1) * 4;
  }
  do {
    iVar13 = _fgetc(p_Var2);
    if (iVar13 < 0) break;
  } while ((iVar13 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  iVar13 = _fscanf(local_11c,"\"%[^\"]\"\n");
  if (iVar13 == 1) {
    splitpath(local_1e74,local_18,local_1070,local_f70,local_1170);
    if ((local_1070[0] == '\0') && (local_18[0] == '\0')) {
      splitpath
                (in_stack_00000008,local_18,local_1070,(char *)0x0,(char *)0x0);
      makepath(local_1e74,local_18,local_1070,local_f70,local_1170);
    }
    splitpath(local_1e74,local_24,local_1370,local_e70,local_1770);
    if (local_1770[0] == '\0') {
      makepath(local_1e74,local_24,local_1370,local_e70,"pos");
    }
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Reading bone heirarchy and building reorientation matrices from %s");
    core_skeledit_cpp_CBoneStructure_importBON_FUN_0058a3d0
              ((CBoneStructure *)local_1e74,(char *)in_stack_fffeec08);
    core_skeledit_cpp_FUN_0058aeb0();
    p_Var2 = local_11c;
    iVar13 = 1;
    core_skeledit_cpp_FUN_00595f30();
    do {
      iVar3 = _fgetc(p_Var2);
      if (iVar3 < 0) break;
    } while ((iVar3 != 10) || (iVar13 = iVar13 + -1, 0 < iVar13));
    local_110 = (float)_ftell(local_11c);
    this_ptr = g_CEditorToolsPtr;
    local_10c = 0.0;
    (in_stack_00000004->motion_list).motion_count = 0;
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (this_ptr,"Pass 1: Building list of animation files and getting total frame count");
    local_104 = (char *)0x0;
    DAT_03670b5c = 0;
    local_100 = (char *)0x1869f;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_2ca8);
    local_108 = 0;
    local_f8 = (in_stack_00000004->motion_list).motions;
LAB_00592a67:
    do {
      iVar13 = local_108;
      local_c8 = core_skeledit_cpp_readNonEmptyLine_FUN_005895f0
                           ((char *)local_11c,(_FILE *)0x0,(int)in_stack_fffeec08);
      if (((local_c8 == 0) ||
          (iVar3 = strnicmp(local_21d0,"animation",9), iVar3 == 0
          )) && (iVar13 != 0)) {
        local_fc = &DAT_0365caf8 + (in_stack_00000004->motion_list).motion_count * 0x104;
        pCVar7 = (CBoneStructure *)
                 shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (local_fc,(char *)0x0,"rt","..\\core\\skeledit.cpp",0x10a4);
        if (pCVar7 == (CBoneStructure *)0x0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Can't open %s mentioned in %s",local_fc);
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,in_stack_fffeec10,
                     in_stack_fffeec14,in_stack_fffeec18);
          goto LAB_005927ee;
        }
        iVar13 = 1;
        do {
          iVar3 = _fgetc((_FILE *)pCVar7);
          if (iVar3 < 0) break;
        } while ((iVar3 != 10) || (iVar13 = iVar13 + -1, 0 < iVar13));
        _fscanf((_FILE *)pCVar7,"%d\n");
        core_skeledit_cpp_CBoneStructure_readBONheader_FUN_0058a4a0
                  (pCVar7,(_FILE *)local_58,&in_stack_fffeec08->bone_count);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0((_FILE *)pCVar7,"..\\core\\skeledit.cpp",0x10b8)
        ;
        if (0x1869e < (int)local_104) {
          local_104 = (char *)(local_58._0_4_ + -1);
        }
        if (0x1869e < (int)local_100) {
          local_100 = (char *)(local_58._0_4_ + -1);
        }
        if ((((int)local_104 < 0) || ((int)local_100 < (int)local_104)) ||
           ((int)local_58._0_4_ <= (int)local_100)) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Invalid frame start/end for animation %s in %s",local_fc);
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,in_stack_fffeec10,
                     in_stack_fffeec14,in_stack_fffeec18);
          goto LAB_005927ee;
        }
        iVar13 = core_skeledit_cpp_FUN_0058b200();
        if (iVar13 == 0) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_2ca8.base,local_fc);
        }
        iVar13 = (in_stack_00000004->motion_list).motion_count;
        local_f8[iVar13].frame_start = (int)local_10c;
        local_10c = (float)((int)local_10c + (int)(local_100 + (1 - (int)local_104)));
        local_f8[iVar13].frame_count = (int)(local_100 + (1 - (int)local_104));
        aiStack_2900[(in_stack_00000004->motion_list).motion_count] = (int)local_104;
        local_108 = 0;
        (in_stack_00000004->motion_list).motion_count =
             (in_stack_00000004->motion_list).motion_count + 1;
        local_104 = (char *)0x0;
        local_100 = (char *)0x1869f;
      }
      if (local_c8 == 0) {
        if ((in_stack_00000004->motion_list).motion_count < 1) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0x1159;
          core_main_c_displayErrorAndQuit_FUN_00506f10("No motions defined in %s");
        }
        if (0 < local_2ca8.base.item_count) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_2ca8.base,local_1e74);
          iVar13 = 0;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    (&local_2ca8.base,"(Dump this list to the clipboard)");
          while( true ) {
            sprintf(local_2360,"The following motions do not have the same skeleton\nheirarchy as the home pose file\n%s\nPress Enter to view heirarchy, or ESC when done viewing list.\n");
            iVar13 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                               (&local_2ca8,local_2360,iVar13,0);
            if (iVar13 < 0) break;
            if (iVar13 == local_2ca8.base.item_count + -1) {
              pcVar11 = &DAT_0366b650;
              for (iVar3 = 0; iVar3 < local_2ca8.base.item_count + -1; iVar3 = iVar3 + 1) {
                shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_2ca8.base,iVar3);
                iVar4 = sprintf(pcVar11,"%s\r\n");
                pcVar11 = pcVar11 + iVar4;
              }
              shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0
                        (g_CEditorToolsPtr,&DAT_0366b650);
            }
            else {
              pCVar7 = (CBoneStructure *)
                       shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_2ca8.base,iVar13)
              ;
              core_skeledit_cpp_CBoneStructure_importBON_FUN_0058a3d0
                        (pCVar7,(char *)in_stack_fffeec08);
              core_skeledit_cpp_FUN_0058afe0();
            }
          }
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,in_stack_fffeec10,
                     in_stack_fffeec14,in_stack_fffeec18);
          return 0;
        }
        core_skeleton_cpp_CSkeleton_allocMemory_FUN_00599910
                  (in_stack_00000004,local_ded4,(int)local_10c);
        iVar13 = 0;
        if (0 < in_stack_00000004->bone_count) {
          pcVar11 = local_ded0;
          local_58._8_4_ = in_stack_00000004;
          pSVar9 = in_stack_00000004->bone_list;
          do {
            pSVar10 = pSVar9 + 1;
            ((SBone *)(local_58._8_4_ + 0x2855c))->parent_index = aiStack_deb0[iVar13 * 0x21];
            iVar13 = iVar13 + 1;
            pcVar18 = pcVar11;
            do {
              cVar1 = *pcVar18;
              pSVar9->bone_name[0] = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar18[1];
              pcVar18 = pcVar18 + 2;
              pSVar9->bone_name[1] = cVar1;
              pSVar9 = (SBone *)(pSVar9->bone_name + 2);
            } while (cVar1 != '\0');
            pcVar11 = pcVar11 + 0x84;
            local_58._8_4_ = (CSkeleton *)(((CMotionList *)local_58._8_4_)->state_names[1] + 2);
            pSVar9 = pSVar10;
          } while (iVar13 < in_stack_00000004->bone_count);
        }
        _fseek(local_11c,(long)local_110,0);
        local_38 = 0;
        shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                  (g_CEditorToolsPtr,"Importing skeleton animation frames...");
        local_118 = 1.4013e-45;
        if (0 < (in_stack_00000004->motion_list).motion_count) {
          local_58._24_4_ = (in_stack_00000004->motion_list).motions;
          local_58._20_4_ = &DAT_0365caf8;
          local_3c = 0.0;
          do {
            local_ec = (SMotion *)local_58._24_4_;
            local_e8 = (char *)local_58._20_4_;
            local_2c = local_10c;
            shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                      (g_CEditorToolsPtr,(float)*(int *)(local_58._24_4_ + 0x60),
                       (float)(int)local_10c);
            p_Var2 = local_11c;
            do {
              iVar13 = core_skeledit_cpp_readNonEmptyLine_FUN_005895f0
                                 ((char *)p_Var2,(_FILE *)0x1,(int)in_stack_fffeec08);
              if (iVar13 == 0) {
                g_CurrentFilename = "..\\core\\skeledit.cpp";
                g_CurrentLineNumber = 0x11a5;
                core_main_c_displayErrorAndQuit_FUN_00506f10("Error parsing file!");
              }
              iVar13 = strnicmp(local_20a4,"animation",9);
              fVar16 = local_3c;
            } while (iVar13 != 0);
            local_ec->transition_count = 0;
            local_ec->signal_count = 0;
            local_ec->fps = 30.0;
            local_ec->exit_forward_cmd = 1;
            local_ec->exit_forward_tween_time = 0.0;
            local_ec->exit_forward_set_new_state = 0;
            local_e4 = 0;
            local_ec->exit_forward_from_frame = local_ec->frame_count;
            local_e0 = 4;
            local_ec->exit_forward_to_motion = local_38;
            local_dc = 0;
            local_ec->exit_backward_to_frame = 0.0;
            local_2c = (float)(local_ec->frame_count + -1);
            local_ec->marker_count = 0;
            local_ec->exit_backward_to_motion = local_38;
            local_ec->exit_forward_to_frame = (float)(int)local_2c;
            local_d4 = -99999.0;
            local_1c0 = -99999.0;
            local_1c4 = -99999.0;
            local_1c8 = -99999.0;
            local_cc = 0.0;
            local_d8 = (_FILE *)0x0;
            local_c4 = 0;
            local_94 = (float)(local_ec->frame_count + -1);
            local_d0 = -99998.0;
            local_9c = local_ec->transitions;
            local_f0 = 0;
            local_8c = &local_ec->exit_forward_tween_time;
            local_144 = 0.0;
            local_140 = 0.0;
            local_b8._16_4_ = &local_ec->fps;
            pfVar15 = &1.0f;
            pCVar20 = &local_434;
            for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
              pCVar20->m[0].w = *pfVar15;
              pfVar15 = pfVar15 + (uint)bVar26 * -2 + 1;
              pCVar20 = (CMatrix3x4f *)((int)pCVar20 + ((uint)bVar26 * -2 + 1) * 4);
            }
            local_13c = 0.0;
            local_b8._12_4_ = fVar16;
            if (0 < *(int *)((int)aiStack_2720 + (int)fVar16)) {
              do {
                core_skeledit_cpp_readNonEmptyLine_FUN_005895f0
                          ((char *)local_11c,(_FILE *)0x1,(int)in_stack_fffeec08);
                iVar13 = strnicmp(local_20a4,"fps",3);
                if (iVar13 == 0) {
                  pcVar11 = local_20a2;
                  do {
                    pcVar11 = pcVar11 + 1;
                  } while ((g_CharacterClassificationTable[(byte)(*pcVar11 + 1)] & 2U) != 0);
                  iVar13 = sscanf(pcVar11,"%f");
                  if (iVar13 != 1) {
                    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                              (g_CEditorToolsPtr,"Error parsing \"fps\" statement for animation %s in %s:\n%s",local_ec,
                               in_stack_00000008);
                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                              (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,
                               in_stack_fffeec10,in_stack_fffeec14,in_stack_fffeec18);
                    goto LAB_005927ee;
                  }
                }
                else {
                  iVar13 = strnicmp(local_20a4,"if",2);
                  if (iVar13 == 0) {
                    if (0x2c < local_ec->transition_count) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Too many transitions in animation %s in %s, max is %d",local_ec,
                                 in_stack_00000008);
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,
                                 in_stack_fffeec10,in_stack_fffeec14,in_stack_fffeec18);
                      goto LAB_005927ee;
                    }
                    local_b8._20_4_ = local_20a2;
                    do {
                      local_b8._20_4_ = local_b8._20_4_ + 1;
                    } while ((g_CharacterClassificationTable[(byte)(*(char *)local_b8._20_4_ + 1)] &
                             2U) != 0);
                    local_a0 = -NAN;
                    sscanf
                              ((char *)local_b8._20_4_,"%s %s%n",local_468,local_28c);
                    if ((int)local_a0 < 3) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Error parsing \"if\" statement for animation %s in %s:\n%s",local_ec,
                                 in_stack_00000008);
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,
                                 in_stack_fffeec10,in_stack_fffeec14,in_stack_fffeec18);
                      goto LAB_005927ee;
                    }
                    dest = local_9c + local_ec->transition_count;
                    memset(dest,0,0x18);
                    iVar13 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0
                                       (&in_stack_00000004->motion_list);
                    dest->desired_state = iVar13;
                    if (iVar13 < 0) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Invalid desired state \"%s\" in \"if\" statement for animation %s in %s:\n%s",local_468,
                                 local_ec,in_stack_00000008);
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,
                                 in_stack_fffeec10,in_stack_fffeec14,in_stack_fffeec18);
                      goto LAB_005927ee;
                    }
                    iVar13 = 0;
                    pSVar14 = local_ec;
                    if (0 < local_ec->transition_count) {
                      do {
                        if (dest->desired_state == pSVar14->transitions[0].desired_state) {
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Duplicate if %s's for animation %s in %s",local_468
                                     ,local_ec);
                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                    (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,
                                     in_stack_fffeec10,in_stack_fffeec14,in_stack_fffeec18);
                          goto LAB_005927ee;
                        }
                        iVar13 = iVar13 + 1;
                        pSVar14 = (SMotion *)(pSVar14->motion_name + 0x18);
                      } while (iVar13 < local_ec->transition_count);
                    }
                    iVar13 = core_skeledit_cpp_FUN_005925c0();
                    dest->cmd = iVar13;
                    if (iVar13 == 0) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Invalid transition command in \"if %s\" statement for animation %s in %s:\n%s",local_468,
                                 local_ec,in_stack_00000008);
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,
                                 in_stack_fffeec10,in_stack_fffeec14,in_stack_fffeec18);
                      goto LAB_005927ee;
                    }
                    pcVar11 = (char *)(local_b8._20_4_ + (int)local_a0);
                    while ((g_CharacterClassificationTable[(byte)(*pcVar11 + 1)] & 2U) != 0) {
                      pcVar11 = pcVar11 + 1;
                    }
                    local_a0 = -NAN;
                    sscanf(pcVar11,"\"%[^\"]\"%n",local_918);
                    if ((int)local_a0 < 0) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Error parsing \"if %s\" statement parms for animation %s in %s:\n%s",local_468,
                                 local_ec,in_stack_00000008);
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,
                                 in_stack_fffeec10,in_stack_fffeec14,in_stack_fffeec18);
                      goto LAB_005927ee;
                    }
                    splitpath
                              (local_918,(char *)0x0,(char *)0x0,local_aa8,(char *)0x0);
                    iVar13 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                                       (&in_stack_00000004->motion_list);
                    dest->to_motion_number = iVar13;
                    if (iVar13 < 0) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Invalid destination animation for \"if %s\" statement for animation %s in %s:\n%s",local_468,
                                 local_ec,in_stack_00000008);
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,
                                 in_stack_fffeec10,in_stack_fffeec14,in_stack_fffeec18);
                      goto LAB_005927ee;
                    }
                    pcVar11 = pcVar11 + (int)local_a0;
                    while ((g_CharacterClassificationTable[(byte)(*pcVar11 + 1)] & 2U) != 0) {
                      pcVar11 = pcVar11 + 1;
                    }
                    if (*pcVar11 == '[') {
                      local_a0 = -NAN;
                      sscanf(pcVar11,"[ %[^]] ]%n",local_788);
                      if ((int)local_a0 < 0) {
                        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                  (g_CEditorToolsPtr,"Can't parse destination frame number for \"if %s\" statement for animation %s in %s:\n%s",local_468,
                                   local_ec,in_stack_00000008);
                        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                  (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,
                                   in_stack_fffeec10,in_stack_fffeec14,in_stack_fffeec18);
                        goto LAB_005927ee;
                      }
                      iVar13 = core_skeledit_cpp_FUN_00592520();
                      if (iVar13 == 0) {
                        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                  (g_CEditorToolsPtr,"Can't parse destination frame number for \"if %s\" statement for animation %s in %s:\n%s",local_468,
                                   local_ec,in_stack_00000008);
                        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                  (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,
                                   in_stack_fffeec10,in_stack_fffeec14,in_stack_fffeec18);
                        goto LAB_005927ee;
                      }
                      local_2c = local_98;
                      dest->to_frame_number = (float)(int)local_98;
                      pcVar11 = pcVar11 + (int)local_a0;
                      while ((g_CharacterClassificationTable[(byte)(*pcVar11 + 1)] & 2U) != 0) {
                        pcVar11 = pcVar11 + 1;
                      }
                    }
                    else {
                      dest->to_frame_number = 0.0;
                    }
                    dest->tween_time = 0.0;
                    switch(dest->cmd) {
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                      iVar13 = strnicmp(pcVar11,"over",4);
                      if (iVar13 == 0) {
                        local_a0 = -NAN;
                        sscanf(pcVar11,"%*s%f%n",&dest->tween_time);
                        if ((int)local_a0 < 0) {
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Can't parse tween time for \"if %s\" statement for animation %s in %s:\n%s",local_468
                                     ,local_ec,in_stack_00000008);
                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                    (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,
                                     in_stack_fffeec10,in_stack_fffeec14,in_stack_fffeec18);
                          goto LAB_005927ee;
                        }
                        local_124 = (double)dest->tween_time;
                        if ((local_124 < 0.0) || (99 < local_124)) {
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Invalid tween time for \"if %s\" statement for animation %s in %s:\n%s",local_468
                                     ,local_ec,in_stack_00000008);
                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                    (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,
                                     in_stack_fffeec10,in_stack_fffeec14,in_stack_fffeec18);
                          goto LAB_005927ee;
                        }
                        pcVar11 = pcVar11 + (int)local_a0;
                        while ((g_CharacterClassificationTable[(byte)(*pcVar11 + 1)] & 2U) != 0) {
                          pcVar11 = pcVar11 + 1;
                        }
                      }
                    }
                    iVar13 = strnicmp(pcVar11,"keepState",9);
                    if (iVar13 == 0) {
                      pcVar11 = pcVar11 + 9;
                      dest->set_new_state_as_desired = 1;
                      while ((g_CharacterClassificationTable[(byte)(*pcVar11 + 1)] & 2U) != 0) {
                        pcVar11 = pcVar11 + 1;
                      }
                    }
                    else {
                      dest->set_new_state_as_desired = 0;
                    }
                    while ((g_CharacterClassificationTable[(byte)(*pcVar11 + 1)] & 2U) != 0) {
                      pcVar11 = pcVar11 + 1;
                    }
                    if (*pcVar11 != '\0') {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Extra parms in \"if %s\" statement for animation %s in %s:\n%s\nExtra parms: \"%s\"",local_468,
                                 local_ec,in_stack_00000008,local_20a4);
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,
                                 in_stack_fffeec10,in_stack_fffeec14,in_stack_fffeec18);
                      goto LAB_005927ee;
                    }
                    local_ec->transition_count = local_ec->transition_count + 1;
                  }
                  else {
                    iVar13 = strnicmp(local_20a4,"->",2);
                    if (iVar13 == 0) {
                      pcVar11 = local_20a2;
                      while ((g_CharacterClassificationTable[(byte)(*pcVar11 + 1)] & 2U) != 0) {
                        pcVar11 = pcVar11 + 1;
                      }
                      iVar13 = strnicmp(pcVar11,"(loop)",6);
                      pcVar18 = pcVar11 + 6;
                      if (iVar13 == 0) {
                        local_ec->exit_forward_to_frame = 0.0;
                        local_ec->exit_forward_to_motion = local_38;
                        while ((g_CharacterClassificationTable[(byte)(*pcVar18 + 1)] & 2U) != 0) {
                          pcVar18 = pcVar18 + 1;
                        }
                      }
                      else {
                        iVar13 = strnicmp(pcVar11,"(stop)",6);
                        if (iVar13 == 0) {
                          local_ec->exit_forward_to_motion = local_38;
                          local_2c = (float)(local_ec->frame_count + -1);
                          local_ec->exit_forward_to_frame = (float)(int)local_2c;
                          while ((g_CharacterClassificationTable[(byte)(*pcVar18 + 1)] & 2U) != 0) {
                            pcVar18 = pcVar18 + 1;
                          }
                        }
                        else {
                          local_64 = -1;
                          sscanf(pcVar11," \"%[^\"]\" %n",local_b70);
                          if (local_64 < 0) {
                            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                      (g_CEditorToolsPtr,"Error parsing \"->\" statement parms for animation %s in %s:\n%s",
                                       local_ec,in_stack_00000008);
                            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                      (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,
                                       in_stack_fffeec10,in_stack_fffeec14,in_stack_fffeec18);
                            goto LAB_005927ee;
                          }
                          splitpath
                                    (local_b70,(char *)0x0,(char *)0x0,local_9e0,(char *)0x0);
                          iVar13 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                                             (&in_stack_00000004->motion_list);
                          local_ec->exit_forward_to_motion = iVar13;
                          if (iVar13 < 0) {
                            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                      (g_CEditorToolsPtr,"Invalid destination animation for \"->\" statement for animation %s in %s:\n%s",
                                       local_ec,in_stack_00000008);
                            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                      (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,
                                       in_stack_fffeec10,in_stack_fffeec14,in_stack_fffeec18);
                            goto LAB_005927ee;
                          }
                          pcVar18 = pcVar11 + local_64;
                          while ((g_CharacterClassificationTable[(byte)(*pcVar18 + 1)] & 2U) != 0) {
                            pcVar18 = pcVar18 + 1;
                          }
                          if (*pcVar18 == '[') {
                            local_64 = -1;
                            sscanf(pcVar18,"[ %[^]] ]%n",local_5f8);
                            if (local_64 < 0) {
                              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                        (g_CEditorToolsPtr,"Can't parse destination frame number for \"->\" statement for animation %s in %s:\n%s",
                                         local_ec,in_stack_00000008);
                              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                        (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,
                                         in_stack_fffeec10,in_stack_fffeec14,in_stack_fffeec18);
                              goto LAB_005927ee;
                            }
                            iVar13 = core_skeledit_cpp_FUN_00592520();
                            if (iVar13 == 0) {
                              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                        (g_CEditorToolsPtr,"Can't parse destination frame number for \"->\" statement for animation %s in %s:\n%s",
                                         local_ec,in_stack_00000008);
                              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                        (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,
                                         in_stack_fffeec10,in_stack_fffeec14,in_stack_fffeec18);
                              goto LAB_005927ee;
                            }
                            local_2c = local_90;
                            local_ec->exit_forward_to_frame = (float)(int)local_90;
                            pcVar18 = pcVar18 + local_64;
                            while ((g_CharacterClassificationTable[(byte)(*pcVar18 + 1)] & 2U) != 0)
                            {
                              pcVar18 = pcVar18 + 1;
                            }
                          }
                          else {
                            local_ec->exit_forward_to_frame = 0.0;
                          }
                          if (*pcVar18 != '\0') {
                            local_64 = -1;
                            sscanf(pcVar18,"%s%n",local_2b4);
                            if (local_64 < 1) {
                              g_CurrentFilename = "..\\core\\skeledit.cpp";
                              g_CurrentLineNumber = 0x129f;
                              core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze!");
                            }
                            iVar13 = core_skeledit_cpp_FUN_005925c0();
                            if (iVar13 != 0) {
                              local_ec->exit_forward_cmd = iVar13;
                              pcVar18 = pcVar18 + local_64;
                              while ((g_CharacterClassificationTable[(byte)(*pcVar18 + 1)] & 2U) !=
                                     0) {
                                pcVar18 = pcVar18 + 1;
                              }
                              if (local_ec->exit_forward_cmd == 2) {
                                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                          (g_CEditorToolsPtr,"Invalid transition command in \"->\" statement for animation %s in %s:\n%s",
                                           local_ec,in_stack_00000008);
                                shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                          (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,
                                           in_stack_fffeec10,in_stack_fffeec14,in_stack_fffeec18);
                                goto LAB_005927ee;
                              }
                              local_ec->exit_forward_tween_time = 0.0;
                              switch(local_ec->exit_forward_cmd) {
                              case 3:
                              case 4:
                              case 5:
                              case 6:
                                iVar13 = strnicmp
                                                   (pcVar18,"over",4);
                                if (iVar13 == 0) {
                                  piVar28 = &local_64;
                                  local_64 = -1;
                                  sscanf(pcVar18,"%*s%f%n",local_8c)
                                  ;
                                  pSVar14 = local_ec;
                                  if (local_64 < 0) {
                                    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                              (g_CEditorToolsPtr,"Can't parse tween time for \"->\" statement for animation %s in %s:\n%s"
                                               ,local_ec,in_stack_00000008);
                                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                              (&local_2ca8,0,(uint)in_stack_fffeec08,
                                               in_stack_fffeec0c,in_stack_fffeec10,in_stack_fffeec14
                                               ,in_stack_fffeec18);
                                    goto LAB_005927ee;
                                  }
                                  local_12c = (double)local_ec->exit_forward_tween_time;
                                  if ((local_12c < 0.0) || (99 < local_12c)) {
                                    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                              (g_CEditorToolsPtr,"Invalid tween time for \"->\" statement for animation %s in %s:\n%s"
                                               ,local_ec,in_stack_00000008);
                                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                              (&local_2ca8,0,(uint)in_stack_fffeec08,
                                               in_stack_fffeec0c,in_stack_fffeec10,in_stack_fffeec14
                                               ,in_stack_fffeec18);
                                    goto LAB_005927ee;
                                  }
                                  pcVar18 = pcVar18 + local_64;
                                  while ((g_CharacterClassificationTable[(byte)(*pcVar18 + 1)] & 2U)
                                         != 0) {
                                    pcVar18 = pcVar18 + 1;
                                  }
                                  if ((local_ec->exit_forward_cmd == 5) ||
                                     (local_ec->exit_forward_cmd == 6)) {
                                    in_stack_fffeec08 = (CBoneStructure *)0x594670;
                                    dVar27 = round
                                                       ((double)((float)local_ec->frame_count -
                                                                local_ec->exit_forward_tween_time *
                                                                local_ec->fps));
                                    pSVar14->exit_forward_from_frame = (int)ROUND(dVar27);
                                    if (pSVar14->exit_forward_from_frame < 0) {
                                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                (g_CEditorToolsPtr,
                                                 "Tween time for \"->\" statement is longer than animation time in animation %s in %s:\n%s",local_ec,
                                                 in_stack_00000008,local_20a4);
                                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                (&local_2ca8,0,(uint)piVar28,(uint)in_stack_fffeec08
                                                 ,in_stack_fffeec0c,in_stack_fffeec10,
                                                 in_stack_fffeec14);
                                      goto LAB_005927ee;
                                    }
                                  }
                                }
                              }
                            }
                            iVar13 = strnicmp
                                               (pcVar18,"keepState",9);
                            if (iVar13 == 0) {
                              local_ec->exit_forward_set_new_state = 1;
                              pcVar18 = pcVar18 + 9;
                              while ((g_CharacterClassificationTable[(byte)(*pcVar18 + 1)] & 2U) !=
                                     0) {
                                pcVar18 = pcVar18 + 1;
                              }
                            }
                            else {
                              local_ec->exit_forward_set_new_state = 0;
                            }
                          }
                        }
                      }
                      while ((g_CharacterClassificationTable[(byte)(*pcVar18 + 1)] & 2U) != 0) {
                        pcVar18 = pcVar18 + 1;
                      }
                      if (*pcVar18 != '\0') {
                        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                  (g_CEditorToolsPtr,"Extra parms in \"->\" statement for animation %s in %s:\n%s\nExtra parms: \"%s\"",local_ec,
                                   in_stack_00000008,local_20a4);
                        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                  (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,
                                   in_stack_fffeec10,in_stack_fffeec14,in_stack_fffeec18);
                        goto LAB_005927ee;
                      }
                    }
                    else {
                      iVar13 = strnicmp(local_20a4,"signal",6);
                      if (iVar13 == 0) {
                        pcVar11 = local_20a2 + 4;
                        while ((g_CharacterClassificationTable[(byte)(*pcVar11 + 1)] & 2U) != 0) {
                          pcVar11 = pcVar11 + 1;
                        }
                        if (0xe < local_ec->signal_count) {
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Too many signals in animation %s in %s, max is %d",local_ec,
                                     in_stack_00000008);
                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                    (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,
                                     in_stack_fffeec10,in_stack_fffeec14,in_stack_fffeec18);
                          goto LAB_005927ee;
                        }
                        iVar13 = sscanf(pcVar11,"%d %*s %s",&local_88)
                        ;
                        if (iVar13 != 2) {
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Error parsing \"signal\" statement for animation %s in %s:\n%s",local_ec,
                                     in_stack_00000008);
                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                    (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,
                                     in_stack_fffeec10,in_stack_fffeec14,in_stack_fffeec18);
                          goto LAB_005927ee;
                        }
                        iVar13 = core_skeledit_cpp_FUN_00592520();
                        if (iVar13 == 0) {
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Invalid frame number in \"signal\" statement for animation %s in %s:\n%s",local_ec,
                                     in_stack_00000008);
                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                    (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,
                                     in_stack_fffeec10,in_stack_fffeec14,in_stack_fffeec18);
                          goto LAB_005927ee;
                        }
                        if (local_88 == 0) {
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Signal value cannot be 0 in \"signal\" statement for animation %s in %s:\n%s",local_ec,
                                     in_stack_00000008);
                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                    (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,
                                     in_stack_fffeec10,in_stack_fffeec14,in_stack_fffeec18);
                          goto LAB_005927ee;
                        }
                        local_ec->signals[local_ec->signal_count].value = local_88;
                        local_ec->signals[local_ec->signal_count].frame_number = local_84;
                        local_ec->signal_count = local_ec->signal_count + 1;
                      }
                      else {
                        iVar13 = strnicmp(local_20a4,"reverse",7)
                        ;
                        if (iVar13 == 0) {
                          local_e4 = 1;
                        }
                        else {
                          iVar13 = strnicmp
                                             (local_20a4,"filename",5);
                          if ((iVar13 != 0) &&
                             (iVar13 = strnicmp
                                                 (local_20a4,"frames",6), iVar13 != 0)) {
                            iVar13 = strnicmp
                                               (local_20a4,"cancel",6);
                            if (iVar13 == 0) {
                              pbVar5 = (byte *)(local_20a2 + 4);
                              while ((g_CharacterClassificationTable[(byte)(*pbVar5 + 1)] & 2U) != 0
                                    ) {
                                pbVar5 = pbVar5 + 1;
                              }
                              local_e0 = 0;
                              pcVar11 = strstr
                                                  ((char *)pbVar5,"none");
                              if (pcVar11 == (char *)0x0) {
                                while (*pbVar5 != 0) {
                                  uVar6 = toupper((uint)*pbVar5);
                                  if (uVar6 < 0x50) {
                                    if (uVar6 < 0x42) goto LAB_005949a6;
                                    if (uVar6 < 0x43) {
                                      local_dc = local_dc | 4;
                                      goto LAB_005949a6;
                                    }
                                    if (uVar6 == 0x48) {
                                      local_dc = local_dc | 2;
                                      goto LAB_005949a6;
                                    }
                                    pbVar5 = pbVar5 + 1;
                                  }
                                  else {
                                    if (uVar6 < 0x51) {
                                      local_dc = local_dc | 1;
                                    }
                                    else if (uVar6 < 0x59) {
                                      if (uVar6 == 0x58) {
                                        local_e0 = local_e0 | 1;
                                      }
                                    }
                                    else if (uVar6 < 0x5a) {
                                      local_e0 = local_e0 | 2;
                                    }
                                    else if (uVar6 == 0x5a) {
                                      local_e0 = local_e0 | 4;
                                    }
LAB_005949a6:
                                    pbVar5 = pbVar5 + 1;
                                  }
                                }
                              }
                            }
                            else {
                              iVar13 = strnicmp
                                                 (local_20a4,"bias",4);
                              if (iVar13 == 0) {
                                pcVar11 = local_20a2 + 2;
                                while ((g_CharacterClassificationTable[(byte)(*pcVar11 + 1)] & 2U)
                                       != 0) {
                                  pcVar11 = pcVar11 + 1;
                                }
                                local_80 = -1;
                                sscanf
                                          (pcVar11,"frame %s to \"%[^\"]\" frame %s%n",local_530,
                                           local_65c,local_594);
                                iVar13 = DAT_03670b5c;
                                if (local_80 < 0xf) {
                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                            (g_CEditorToolsPtr,"Can't parse \"bias\" statement for animation %s in %s:%s",
                                             local_ec,in_stack_00000008);
                                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                            (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c
                                             ,in_stack_fffeec10,in_stack_fffeec14,in_stack_fffeec18)
                                  ;
                                  goto LAB_005927ee;
                                }
                                (&DAT_03670b60)[DAT_03670b5c * 4] = local_38;
                                iVar3 = core_skeledit_cpp_FUN_00592520();
                                if (iVar3 == 0) {
                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                            (g_CEditorToolsPtr,"Can't parse frame to bias in \"bias\" statement for animation %s in %s:%s",
                                             local_ec,in_stack_00000008);
                                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                            (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c
                                             ,in_stack_fffeec10,in_stack_fffeec14,in_stack_fffeec18)
                                  ;
                                  goto LAB_005927ee;
                                }
                                iVar3 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                                                  (&in_stack_00000004->motion_list);
                                (&DAT_03670b68)[iVar13 * 4] = iVar3;
                                if (iVar3 < 0) {
                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                            (g_CEditorToolsPtr,"Invalid reference motion \"%s\" in \"bias\" statement for animation %s in %s:%s",
                                             local_65c,local_ec,in_stack_00000008);
                                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                            (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c
                                             ,in_stack_fffeec10,in_stack_fffeec14,in_stack_fffeec18)
                                  ;
                                  goto LAB_005927ee;
                                }
                                if (iVar3 == local_38) {
                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                            (g_CEditorToolsPtr,"Reference motion is same as motion to bias in \"bias\" statement for animation %s in %s:%s",
                                             local_ec,in_stack_00000008);
                                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                            (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c
                                             ,in_stack_fffeec10,in_stack_fffeec14,in_stack_fffeec18)
                                  ;
                                  goto LAB_005927ee;
                                }
                                iVar13 = core_skeledit_cpp_FUN_00592520();
                                if (iVar13 == 0) {
                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                            (g_CEditorToolsPtr,"Can't parse frame to bias in \"bias\" statement for animation %s in %s:%s",
                                             local_ec,in_stack_00000008);
                                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                            (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c
                                             ,in_stack_fffeec10,in_stack_fffeec14,in_stack_fffeec18)
                                  ;
                                  goto LAB_005927ee;
                                }
                                DAT_03670b5c = DAT_03670b5c + 1;
                              }
                              else {
                                iVar13 = strnicmp
                                                   (local_20a4,"markers",7);
                                if (iVar13 == 0) {
                                  if (0 < local_ec->marker_count) {
                                    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                              (g_CEditorToolsPtr,"Multiple \"markers\" statements for animation %s in %s"
                                               ,local_ec);
                                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                              (&local_2ca8,0,(uint)in_stack_fffeec08,
                                               in_stack_fffeec0c,in_stack_fffeec10,in_stack_fffeec14
                                               ,in_stack_fffeec18);
                                    goto LAB_005927ee;
                                  }
                                  pcVar11 = local_20a2 + 5;
                                  while ((g_CharacterClassificationTable[(byte)(*pcVar11 + 1)] & 2U)
                                         != 0) {
                                    pcVar11 = pcVar11 + 1;
                                  }
                                  cVar1 = *pcVar11;
                                  while (cVar1 != '\0') {
                                    local_7c = -1;
                                    sscanf
                                              (pcVar11,"%d%n",&local_78);
                                    if (local_7c < 0) {
                                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                (g_CEditorToolsPtr,
                                                 "Can't parse \"markers\" statement for animation %s in %s:\n%s",local_ec,
                                                 in_stack_00000008);
                                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                (&local_2ca8,0,(uint)in_stack_fffeec08,
                                                 in_stack_fffeec0c,in_stack_fffeec10,
                                                 in_stack_fffeec14,in_stack_fffeec18);
                                      goto LAB_005927ee;
                                    }
                                    if ((local_78 < 1) || (local_ec->frame_count <= local_78)) {
                                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                (g_CEditorToolsPtr,
                                                 "Can't place marker at invalid frame number %d for animation %s in %s:\n%s",local_78,
                                                 local_ec,in_stack_00000008);
                                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                (&local_2ca8,0,(uint)in_stack_fffeec08,
                                                 in_stack_fffeec0c,in_stack_fffeec10,
                                                 in_stack_fffeec14,in_stack_fffeec18);
                                      goto LAB_005927ee;
                                    }
                                    if (9 < local_ec->marker_count) {
                                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                (g_CEditorToolsPtr,
                                                 "Too many markers in animation %s in %s:\n%s",local_ec,
                                                 in_stack_00000008);
                                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                (&local_2ca8,0,(uint)in_stack_fffeec08,
                                                 in_stack_fffeec0c,in_stack_fffeec10,
                                                 in_stack_fffeec14,in_stack_fffeec18);
                                      goto LAB_005927ee;
                                    }
                                    if ((0 < local_ec->marker_count) &&
                                       (local_78 <= local_ec->markers[local_ec->marker_count + -1]))
                                    {
                                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                (g_CEditorToolsPtr,
                                                 "Frame numbers are not strictly increasing in \"markers\" statement in animation %s in %s:\n%s",local_ec,
                                                 in_stack_00000008);
                                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                (&local_2ca8,0,(uint)in_stack_fffeec08,
                                                 in_stack_fffeec0c,in_stack_fffeec10,
                                                 in_stack_fffeec14,in_stack_fffeec18);
                                      goto LAB_005927ee;
                                    }
                                    local_ec->markers[local_ec->marker_count] = local_78;
                                    local_ec->marker_count = local_ec->marker_count + 1;
                                    pcVar11 = pcVar11 + local_7c;
                                    while ((g_CharacterClassificationTable[(byte)(*pcVar11 + 1)] &
                                           2U) != 0) {
                                      pcVar11 = pcVar11 + 1;
                                    }
                                    cVar1 = *pcVar11;
                                  }
                                }
                                else {
                                  iVar13 = strnicmp
                                                     (local_20a4,"displace",8);
                                  if (iVar13 == 0) {
                                    pcVar11 = local_20a2 + 6;
                                    while ((g_CharacterClassificationTable[(byte)(*pcVar11 + 1)] &
                                           2U) != 0) {
                                      pcVar11 = pcVar11 + 1;
                                    }
                                    iVar13 = sscanf
                                                       (pcVar11,"%f,%f,%f",&local_144,
                                                        &local_140);
                                    if (iVar13 != 3) {
                                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                (g_CEditorToolsPtr,
                                                 "Can't parse displacement vector in \"displace\" keyword in animation %s in %s\n:%s",local_ec,
                                                 in_stack_00000008);
                                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                (&local_2ca8,0,(uint)in_stack_fffeec08,
                                                 in_stack_fffeec0c,in_stack_fffeec10,
                                                 in_stack_fffeec14,in_stack_fffeec18);
                                      goto LAB_005927ee;
                                    }
                                  }
                                  else {
                                    iVar13 = strnicmp
                                                       (local_20a4,"totaldisplacement",0x11
                                                       );
                                    if (iVar13 == 0) {
                                      pbVar5 = local_2093;
LAB_00594f2a:
                                      do {
                                        str = pbVar5;
                                        pbVar5 = str + 1;
                                      } while ((g_CharacterClassificationTable[(byte)(*str + 1)] &
                                               2U) != 0);
                                      if (*str != 0) {
                                        local_74 = toupper((uint)*str);
                                        if (0x58 < local_74) {
                                          if ((local_74 < 0x5a) || (local_74 < 0x5b)) {
LAB_0059507b:
                                            pbVar5 = str + 1;
                                            if (str[1] == 0x3a) {
                                              pbVar5 = str + 2;
                                            }
                                            if (*pbVar5 == 0x3d) {
                                              pbVar5 = pbVar5 + 1;
                                            }
                                            iVar13 = strnicmp
                                                               ((char *)pbVar5,"display",7)
                                            ;
                                            if (iVar13 == 0) {
                                              pbVar5 = pbVar5 + 7;
                                              local_6c = -99998.0;
                                            }
                                            else {
                                              local_68 = -1;
                                              sscanf
                                                        ((char *)pbVar5,"%f%n",&local_6c);
                                              if (local_68 < 1) {
                                                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                          (g_CEditorToolsPtr,
                                                           "Can't parse \"totalDisplacement\" keyword in animation %s in %s\n:%s",
                                                           local_ec,in_stack_00000008);
                                                shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                          (&local_2ca8,0,(uint)in_stack_fffeec08,
                                                           in_stack_fffeec0c,in_stack_fffeec10,
                                                           in_stack_fffeec14,in_stack_fffeec18);
                                                goto LAB_005927ee;
                                              }
                                              pbVar5 = pbVar5 + local_68;
                                            }
                                            if (local_74 == 0x58) {
                                              local_1c8 = local_6c;
                                            }
                                            if (local_74 == 0x59) {
                                              local_1c4 = local_6c;
                                            }
                                            if (local_74 == 0x5a) {
                                              local_1c0 = local_6c;
                                            }
                                          }
                                          else {
                                            if (local_74 != 0x5b) goto LAB_0059518b;
                                            local_70 = -1;
                                            sscanf
                                                      ((char *)str,"[%[^- \t] - %[^] \t] ]%n",local_4cc,local_6c0)
                                            ;
                                            if (((local_70 < 5) ||
                                                (iVar13 = core_skeledit_cpp_FUN_00592520(),
                                                iVar13 == 0)) ||
                                               (iVar13 = core_skeledit_cpp_FUN_00592520(),
                                               iVar13 == 0)) {
                                              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                        (g_CEditorToolsPtr,
                                                         "Can't parse frame range in \"totalDisplacement\" keyword in animation %s in %s\n:%s",
                                                         local_ec,in_stack_00000008);
                                              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                        (&local_2ca8,0,(uint)in_stack_fffeec08,
                                                         in_stack_fffeec0c,in_stack_fffeec10,
                                                         in_stack_fffeec14,in_stack_fffeec18);
                                              goto LAB_005927ee;
                                            }
                                            if ((int)local_94 < (int)local_cc) {
                                              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                        (g_CEditorToolsPtr,
                                                         "Invalid frame range in \"totalDisplacement\" keyword in animation %s in %s\n:%s",
                                                         local_ec,in_stack_00000008);
                                              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                        (&local_2ca8,0,(uint)in_stack_fffeec08,
                                                         in_stack_fffeec0c,in_stack_fffeec10,
                                                         in_stack_fffeec14,in_stack_fffeec18);
                                              goto LAB_005927ee;
                                            }
                                            pbVar5 = str + local_70;
                                          }
                                          goto LAB_00594f2a;
                                        }
                                        if (0x2b < local_74) {
                                          if (local_74 < 0x2d) goto LAB_00594f2a;
                                          if (local_74 == 0x58) goto LAB_0059507b;
                                        }
LAB_0059518b:
                                        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                  (g_CEditorToolsPtr,
                                                   "Can't parse \"totalDisplacement\" keyword in animation %s in %s\n:%s",local_ec,
                                                   in_stack_00000008);
                                        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                  (&local_2ca8,0,(uint)in_stack_fffeec08,
                                                   in_stack_fffeec0c,in_stack_fffeec10,
                                                   in_stack_fffeec14,in_stack_fffeec18);
                                        goto LAB_005927ee;
                                      }
                                      sscanf
                                                ((char *)str,"%f,%f,%f",&local_144,&local_140)
                                      ;
                                    }
                                    else {
                                      iVar13 = strnicmp
                                                         (local_20a4,"flipXZ",6);
                                      if (iVar13 == 0) {
                                        local_d8 = (_FILE *)0x1;
                                      }
                                      else {
                                        iVar13 = strnicmp
                                                           (local_20a4,"rotate",6);
                                        if (iVar13 != 0) {
                                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                    (g_CEditorToolsPtr,
                                                     "Invalid keyword for animation %s in %s:\n%s",local_ec,
                                                     in_stack_00000008);
                                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                    (&local_2ca8,0,(uint)in_stack_fffeec08,
                                                     in_stack_fffeec0c,in_stack_fffeec10,
                                                     in_stack_fffeec14,in_stack_fffeec18);
                                          goto LAB_005927ee;
                                        }
                                        if (local_c4 != 0) {
                                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                    (g_CEditorToolsPtr,
                                                     "Multiple \"rotate\" keywords used in animation %s in %s",local_ec);
                                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                    (&local_2ca8,0,(uint)in_stack_fffeec08,
                                                     in_stack_fffeec0c,in_stack_fffeec10,
                                                     in_stack_fffeec14,in_stack_fffeec18);
                                          goto LAB_005927ee;
                                        }
                                        pcVar11 = local_20a2 + 4;
                                        while ((g_CharacterClassificationTable[(byte)(*pcVar11 + 1)]
                                               & 2U) != 0) {
                                          pcVar11 = pcVar11 + 1;
                                        }
                                        iVar13 = sscanf
                                                           (pcVar11,"%f,%f,%f",&local_15c,
                                                            &local_15c.z);
                                        if (iVar13 != 3) {
                                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                    (g_CEditorToolsPtr,
                                                     "Can't parse rotation PBH in \"rotate\" keyword in animation %s in %s\n:%s",local_ec,
                                                     in_stack_00000008);
                                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                    (&local_2ca8,0,(uint)in_stack_fffeec08,
                                                     in_stack_fffeec0c,in_stack_fffeec10,
                                                     in_stack_fffeec14,in_stack_fffeec18);
                                          goto LAB_005927ee;
                                        }
                                        local_15c.x = local_15c.x * 0.01745329f;
                                        local_15c.y = local_15c.y * 0.01745329f;
                                        local_15c.z = local_15c.z * 0.01745329f;
                                        local_c4 = 1;
                                        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                                                  (&local_434,&g_ZeroVector,&local_15c);
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                local_f0 = local_f0 + 1;
              } while (local_f0 < *(int *)((int)aiStack_2720 + local_b8._12_4_));
            }
            pcVar11 = local_e8;
            pCVar7 = (CBoneStructure *)
                     shape_memdbg_cpp_openFile_FUN_0050f7a0
                               (local_e8,(char *)0x0,"rt","..\\core\\skeledit.cpp",
                                0x13d8);
            local_c0 = pCVar7;
            if (pCVar7 == (CBoneStructure *)0x0) {
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Can't open %s mentioned in %s",pcVar11);
              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                        (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,in_stack_fffeec10,
                         in_stack_fffeec14,in_stack_fffeec18);
              goto LAB_005927ee;
            }
            iVar13 = 1;
            do {
              iVar3 = _fgetc((_FILE *)pCVar7);
              this_ptr_00 = local_c0;
              if (iVar3 < 0) break;
            } while ((iVar3 != 10) || (iVar13 = iVar13 + -1, 0 < iVar13));
            _fscanf((_FILE *)local_c0,"%d\n");
            fVar16 = local_3c;
            core_skeledit_cpp_CBoneStructure_readBONheader_FUN_0058a4a0
                      (this_ptr_00,(_FILE *)local_b8,&in_stack_fffeec08->bone_count);
            iVar13 = 0;
            if (0 < *(int *)((int)aiStack_2900 + (int)fVar16)) {
              do {
                iVar13 = iVar13 + 1;
                core_skeledit_cpp_CBoneStructure_skipBONframe_FUN_0058abb0(local_c0);
                local_b8._0_4_ = local_b8._0_4_ + -1;
              } while (iVar13 < *(int *)((int)aiStack_2900 + (int)fVar16));
            }
            local_b8._8_4_ = (streambuf *)0x0;
            local_34 = 0.0;
            local_b8._4_4_ = 1.4013e-45;
            if (-1 < local_ec->frame_count) {
              do {
                fVar16 = local_34;
                local_2c = (float)(local_ec->frame_start + (int)local_34);
                shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                          (g_CEditorToolsPtr,(float)(int)local_2c,(float)(int)local_10c);
                if ((int)local_b8._0_4_ < 1) {
                  if (fVar16 != (float)local_ec->frame_count) {
                    g_CurrentFilename = "..\\core\\skeledit.cpp";
                    g_CurrentLineNumber = 0x1408;
                    core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze!");
                  }
                  break;
                }
                local_b8._0_4_ = local_b8._0_4_ + -1;
                core_skeledit_cpp_CBoneStructure_readBONframe_FUN_0058aa10
                          (local_c0,local_d8,(int)in_stack_fffeec08);
                iVar13 = local_c4;
                core_skeledit_cpp_CBoneStructure_fixupMatrices_FUN_0058adb0(in_stack_fffeec08);
                if (iVar13 != 0) {
                  iVar13 = 0;
                  if (0 < local_748c) {
                    pfVar15 = (float *)local_7434;
                    do {
                      iVar13 = iVar13 + 1;
                      core_xform_cpp_multiplyMatrix3x4InPlace_FUN_005f50c0
                                ((CMatrix3x4f *)pfVar15,&local_434);
                      pfVar15 = pfVar15 + 0x21;
                    } while (iVar13 < local_748c);
                  }
                  core_skeledit_cpp_FUN_0058ac80();
                }
                core_skeledit_cpp_FUN_0058af40();
                if ((float)local_b8._4_4_ != 0.0) {
                  local_168 = local_7434[0].m[0].z;
                  local_164 = local_7434[0].m[1].z;
                  local_160 = local_7434[0].m[2].z;
                  if (&local_1f8 != &local_168) {
                    local_1f8 = local_7434[0].m[0].z;
                    local_1f4 = local_7434[0].m[1].z;
                    local_1f0 = local_7434[0].m[2].z;
                  }
                  pCVar8 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                                     ((CMatrix3x3f *)local_7434,&local_1b0);
                  if (&local_1bc != pCVar8) {
                    local_1bc.x = pCVar8->x;
                    local_1bc.y = pCVar8->y;
                    local_1bc.z = pCVar8->z;
                  }
                  local_b8._4_4_ = 0.0;
                }
                local_1a4 = local_7434[0].m[0].z;
                local_174 = local_7434[0].m[0].z - local_1f8;
                local_170 = local_7434[0].m[1].z - local_1f4;
                local_16c = local_7434[0].m[2].z - local_1f0;
                local_1a0 = local_7434[0].m[1].z;
                local_1e0.x = local_174 + local_144;
                local_1e0.y = local_170 + local_140;
                local_1e0.z = local_16c + local_13c;
                local_19c = local_7434[0].m[2].z;
                if (local_ec->frame_count <= (int)local_34) {
                  if (local_e4 == 0) {
                    if (&local_198 != &local_1e0) {
                      local_198.x = local_1e0.x;
                      local_198.y = local_1e0.y;
                      local_198.z = local_1e0.z;
                    }
                    local_b8._8_4_ = (streambuf *)0x1;
                  }
                  break;
                }
                if (local_e4 == 0) {
                  iVar13 = local_ec->frame_start + (int)local_34;
                }
                else {
                  iVar13 = (local_ec->frame_start + local_ec->frame_count + -1) - (int)local_34;
                }
                pCVar8 = in_stack_00000004->frame_positions_1 + iVar13;
                if (pCVar8 != &local_1e0) {
                  pCVar8->x = local_1e0.x;
                  pCVar8->y = local_1e0.y;
                  pCVar8->z = local_1e0.z;
                }
                iVar3 = in_stack_00000004->bone_count;
                pCVar17 = in_stack_00000004->bone_angle_frames;
                if (local_dc == 0) {
                  local_60 = local_dc;
                  if (0 < in_stack_00000004->bone_count) {
                    local_58._16_4_ = local_7434;
                    pCVar17 = pCVar17 + iVar3 * iVar13;
                    do {
                      core_xform_cpp_matrixToQuaternion_FUN_005f7420
                                ((CMatrix3x3f *)local_58._16_4_,&local_214);
                      puVar21 = (uint *)((int)pCVar17 + (uint)bVar26 * -8 + 4);
                      pCVar17->w = local_214.w;
                      puVar22 = puVar21 + (uint)bVar26 * -2 + 1;
                      puVar19 = (uint *)
                                ((int)&local_214 + (uint)bVar26 * -8 + (uint)bVar26 * -8 + 8);
                      *puVar21 = *(uint *)((int)&local_214 + (uint)bVar26 * -8 + 4);
                      *puVar22 = *puVar19;
                      puVar22[(uint)bVar26 * -2 + 1] = puVar19[(uint)bVar26 * -2 + 1];
                      local_60 = local_60 + 1;
                      local_58._16_4_ = &((CMatrix3x4f *)(local_58._16_4_ + 0x60))->m[2].x;
                      pCVar17 = pCVar17 + 1;
                    } while ((int)local_60 < in_stack_00000004->bone_count);
                  }
                }
                else {
                  core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                            ((CMatrix3x3f *)local_7434,&local_180);
                  if ((local_dc & 1) != 0) {
                    local_180.x = local_1bc.x;
                  }
                  if ((local_dc & 2) != 0) {
                    local_180.y = local_1bc.y;
                  }
                  if ((local_dc & 4) != 0) {
                    local_180.z = local_1bc.z;
                  }
                  local_150.x = 0.0;
                  local_150.y = 0.0;
                  local_150.z = 0.0;
                  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                            (&local_3a4,&local_150,&local_180);
                  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(local_7434,&local_3a4,&local_344);
                  pCVar20 = &local_344;
                  pCVar23 = &local_3d4;
                  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                    pCVar23->m[0].w = pCVar20->m[0].w;
                    pCVar20 = (CMatrix3x4f *)((int)pCVar20 + ((uint)bVar26 * -2 + 1) * 4);
                    pCVar23 = (CMatrix3x4f *)((int)pCVar23 + ((uint)bVar26 * -2 + 1) * 4);
                  }
                  core_xform_cpp_inverse_FUN_005f6210(&local_3d4,&local_374);
                  pCVar20 = &local_374;
                  pCVar23 = &local_404;
                  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                    pCVar23->m[0].w = pCVar20->m[0].w;
                    pCVar20 = (CMatrix3x4f *)((int)pCVar20 + ((uint)bVar26 * -2 + 1) * 4);
                    pCVar23 = (CMatrix3x4f *)((int)pCVar23 + ((uint)bVar26 * -2 + 1) * 4);
                  }
                  local_5c = 0;
                  if (0 < in_stack_00000004->bone_count) {
                    local_58._12_4_ = local_7434;
                    pCVar17 = pCVar17 + iVar3 * iVar13;
                    do {
                      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                                ((CMatrix3x4f *)local_58._12_4_,&local_404,&local_314);
                      pCVar20 = &local_314;
                      pCVar24 = &local_2e4;
                      for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
                        pCVar24->m[0].x = pCVar20->m[0].w;
                        pCVar20 = (CMatrix3x4f *)((int)pCVar20 + ((uint)bVar26 * -2 + 1) * 4);
                        pCVar24 = (CMatrix3x3f *)((int)pCVar24 + ((uint)bVar26 * -2 + 1) * 4);
                      }
                      core_xform_cpp_matrixToQuaternion_FUN_005f7420(&local_2e4,&local_224);
                      puVar21 = (uint *)((int)pCVar17 + (uint)bVar26 * -8 + 4);
                      pCVar17->w = local_224.w;
                      puVar22 = puVar21 + (uint)bVar26 * -2 + 1;
                      puVar19 = (uint *)
                                ((int)&local_224 + (uint)bVar26 * -8 + (uint)bVar26 * -8 + 8);
                      *puVar21 = *(uint *)((int)&local_224 + (uint)bVar26 * -8 + 4);
                      *puVar22 = *puVar19;
                      puVar22[(uint)bVar26 * -2 + 1] = puVar19[(uint)bVar26 * -2 + 1];
                      local_5c = local_5c + 1;
                      local_58._12_4_ = &((CMatrix3x4f *)(local_58._12_4_ + 0x60))->m[2].x;
                      pCVar17 = pCVar17 + 1;
                    } while (local_5c < in_stack_00000004->bone_count);
                  }
                }
                local_34 = (float)((int)local_34 + 1);
              } while ((int)local_34 <= local_ec->frame_count);
            }
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      ((_FILE *)local_c0,"..\\core\\skeledit.cpp",0x147a);
            local_204 = 0.0;
            local_200 = 0.0;
            local_1fc = 0.0;
            iVar13 = 0;
            if (0 < local_ec->frame_count) {
              do {
                iVar3 = local_ec->frame_start + iVar13;
                if (iVar13 < local_ec->frame_count + -1) {
                  pCVar8 = in_stack_00000004->frame_positions_1 + iVar3;
                  pCVar12 = in_stack_00000004->frame_positions_1 + iVar3 + 1;
                  local_138.x = pCVar12->x - pCVar8->x;
                  local_138.y = pCVar12->y - pCVar8->y;
                  fVar16 = pCVar12->z - pCVar8->z;
                  pCVar8 = in_stack_00000004->frame_positions_2 + iVar3;
                  local_138.z = fVar16;
                  if (pCVar8 != &local_138) {
                    pCVar8->x = local_138.x;
                    pCVar8->y = local_138.y;
LAB_00595723:
                    pCVar8->z = fVar16;
                  }
                }
                else if (iVar13 < 1) {
                  pCVar8 = in_stack_00000004->frame_positions_2;
                  pCVar8[iVar3].z = 0.0;
                  pCVar8[iVar3].y = pCVar8[iVar3].z;
                  pCVar8[iVar3].x = pCVar8[iVar3].y;
                }
                else if ((streambuf *)local_b8._8_4_ == (streambuf *)0x0) {
                  pCVar8 = in_stack_00000004->frame_positions_2 + iVar3;
                  pCVar12 = in_stack_00000004->frame_positions_2 + iVar3 + -1;
                  if (pCVar8 != pCVar12) {
                    pCVar8->x = pCVar12->x;
                    pCVar8->y = pCVar12->y;
                    pCVar8->z = pCVar12->z;
                  }
                }
                else {
                  pCVar8 = in_stack_00000004->frame_positions_1;
                  local_18c.x = local_198.x - pCVar8[iVar3].x;
                  local_18c.y = local_198.y - pCVar8[iVar3].y;
                  fVar16 = local_198.z - pCVar8[iVar3].z;
                  pCVar8 = in_stack_00000004->frame_positions_2 + iVar3;
                  local_18c.z = fVar16;
                  if (pCVar8 != &local_18c) {
                    pCVar8->x = local_18c.x;
                    pCVar8->y = local_18c.y;
                    goto LAB_00595723;
                  }
                }
                if ((local_e0 & 1) == 0) {
                  in_stack_00000004->frame_positions_2[iVar3].x = 0.0;
                }
                else {
                  in_stack_00000004->frame_positions_1[iVar3].x = 0.0;
                  if (((int)local_cc <= iVar13) && (iVar13 <= (int)local_94)) {
                    local_204 = local_204 + in_stack_00000004->frame_positions_2[iVar3].x;
                  }
                }
                if ((local_e0 & 2) == 0) {
                  in_stack_00000004->frame_positions_2[iVar3].y = 0.0;
                }
                else {
                  in_stack_00000004->frame_positions_1[iVar3].y = 0.0;
                  if (((int)local_cc <= iVar13) && (iVar13 <= (int)local_94)) {
                    local_200 = local_200 + in_stack_00000004->frame_positions_2[iVar3].y;
                  }
                }
                if ((local_e0 & 4) == 0) {
                  in_stack_00000004->frame_positions_2[iVar3].z = 0.0;
                }
                else {
                  in_stack_00000004->frame_positions_1[iVar3].z = 0.0;
                  if (((int)local_cc <= iVar13) && (iVar13 <= (int)local_94)) {
                    local_1fc = local_1fc + in_stack_00000004->frame_positions_2[iVar3].z;
                  }
                }
                iVar13 = iVar13 + 1;
              } while (iVar13 < local_ec->frame_count);
            }
            local_1ec = 0.0;
            local_1e8 = 0.0;
            local_1e4 = 0.0;
            if (local_1c8 == local_d0) {
              shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                        (g_CEditorToolsPtr,"Total displacement for animation %s on X-axis is %g",local_ec,
                         (double)local_204);
            }
            else if (local_1c8 != local_d4) {
              if ((local_e0 & 1) == 0) {
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Setting total displacement on an axis that wasn't canceled doesn't work yet!");
              }
              else {
                local_1ec = local_1c8 - local_204;
              }
            }
            if (local_1c4 == local_d0) {
              shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                        (g_CEditorToolsPtr,"Total displacement for animation %s on Y-axis is %g",local_ec,
                         (double)local_200);
            }
            else if (local_1c4 != local_d4) {
              if ((local_e0 & 2) == 0) {
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Setting total displacement on an axis that wasn't canceled doesn't work yet!");
              }
              else {
                local_1e8 = local_1c4 - local_200;
              }
            }
            if (local_1c0 == local_d0) {
              shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                        (g_CEditorToolsPtr,"Total displacement for animation %s on Z-axis is %g",local_ec,
                         (double)local_1fc);
            }
            else if (local_1c0 != local_d4) {
              if ((local_e0 & 4) == 0) {
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Setting total displacement on an axis that wasn't canceled doesn't work yet!");
              }
              else {
                local_1e4 = local_1c0 - local_1fc;
              }
            }
            if (0.0 < SQRT(local_1e4 * local_1e4 + local_1ec * local_1ec + local_1e8 * local_1e8)) {
              local_2c = (float)(((int)local_94 - (int)local_cc) + 1);
              local_58._4_4_ = (uint)(int)local_2c;
              fVar16 = 1.0 / (float)local_58._4_4_;
              local_1ec = local_1ec * fVar16;
              local_1e8 = local_1e8 * fVar16;
              local_1e4 = local_1e4 * fVar16;
              iVar13 = (int)local_cc - (int)local_94;
              bVar25 = local_cc == local_94;
              fVar16 = local_cc;
              while (bVar25 || SBORROW4((int)fVar16,(int)local_94) != iVar13 < 0) {
                iVar13 = local_ec->frame_start + (int)fVar16;
                pCVar8 = in_stack_00000004->frame_positions_2;
                pCVar8[iVar13].x = pCVar8[iVar13].x + local_1ec;
                pCVar8[iVar13].y = pCVar8[iVar13].y + local_1e8;
                fVar16 = (float)((int)fVar16 + 1);
                pCVar8[iVar13].z = pCVar8[iVar13].z + local_1e4;
                iVar13 = (int)fVar16 - (int)local_94;
                bVar25 = iVar13 == 0;
              }
            }
            local_58._20_4_ = local_58._20_4_ + 0x104;
            local_58._24_4_ = local_58._24_4_ + 0x54c;
            local_3c = (float)((int)local_3c + 4);
            local_38 = local_38 + 1;
          } while (local_38 < (in_stack_00000004->motion_list).motion_count);
        }
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_11c,"..\\core\\skeledit.cpp",0x14ef);
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Biasing motions.");
        local_118 = 0.0;
        local_11c = (_FILE *)0x0;
        memset(local_2540,0,0x1e0);
        if (0 < DAT_03670b5c) {
          iVar13 = 0;
          do {
            piVar28 = (int *)((int)&DAT_03670b60 + iVar13);
            iVar13 = iVar13 + 0x10;
            local_2540[*piVar28] = 1;
          } while (iVar13 < DAT_03670b5c * 0x10);
        }
        iVar13 = 0;
        if (DAT_03670b5c < 1) {
LAB_00595eb8:
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Finished processing %s OK!");
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,in_stack_fffeec10,
                     in_stack_fffeec14,in_stack_fffeec18);
          return 1;
        }
        do {
          iVar3 = 0;
          if (0 < DAT_03670b5c) {
            iVar4 = 0;
            do {
              if ((-1 < *(int *)((int)&DAT_03670b60 + iVar4)) &&
                 (local_2540[*(int *)((int)&DAT_03670b68 + iVar4)] == 0)) break;
              iVar4 = iVar4 + 0x10;
              iVar3 = iVar3 + 1;
            } while (iVar4 < DAT_03670b5c * 0x10);
          }
          if (DAT_03670b5c <= iVar3) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Cyclic bias detected in %s");
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                      (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,in_stack_fffeec10,
                       in_stack_fffeec14,in_stack_fffeec18);
            goto LAB_005927ee;
          }
          piVar28 = &DAT_03670b60 + iVar3 * 4;
          iVar4 = (in_stack_00000004->motion_list).motions[*piVar28].frame_start +
                  (&DAT_03670b64)[iVar3 * 4];
          iVar3 = (in_stack_00000004->motion_list).motions[(&DAT_03670b68)[iVar3 * 4]].frame_start +
                  (&DAT_03670b6c)[iVar3 * 4];
          pCVar8 = in_stack_00000004->frame_positions_1;
          local_1d4 = pCVar8[iVar3].x - pCVar8[iVar4].x;
          local_1d0 = pCVar8[iVar3].y - pCVar8[iVar4].y;
          local_1cc = pCVar8[iVar3].z - pCVar8[iVar4].z;
          for (iVar3 = 0; iVar4 = DAT_03670b5c,
              iVar3 < (in_stack_00000004->motion_list).motions[*piVar28].frame_count;
              iVar3 = iVar3 + 1) {
            iVar4 = (in_stack_00000004->motion_list).motions[*piVar28].frame_start + iVar3;
            pCVar8 = in_stack_00000004->frame_positions_1;
            pCVar8[iVar4].x = pCVar8[iVar4].x + local_1d4;
            pCVar8[iVar4].y = pCVar8[iVar4].y + local_1d0;
            pCVar8[iVar4].z = pCVar8[iVar4].z + local_1cc;
          }
          local_2540[*piVar28] = 0;
          iVar13 = iVar13 + 1;
          *piVar28 = -1;
          if (iVar4 <= iVar13) goto LAB_00595eb8;
        } while( true );
      }
      iVar13 = strnicmp(local_21d0,"animation",9);
      if (iVar13 != 0) {
        iVar13 = strnicmp(local_21d0,"checkout",8);
        if (iVar13 == 0) {
          sscanf(local_21ca + 2,"%s");
          uVar6 = 0xffffffff;
          pcVar11 = acStack_851 + 1;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar11 + (uint)bVar26 * -2 + 1;
          } while (cVar1 != '\0');
          n = ~uVar6 - 1;
          if (0 < (int)n) {
            pcVar11 = acStack_851 + ~uVar6;
            do {
              if ((g_CharacterClassificationTable[(byte)(pcVar11[-1] + 1)] & 2U) == 0) break;
              n = n - 1;
              pcVar11 = pcVar11 + -1;
            } while (0 < (int)n);
          }
          (acStack_851 + 1)[n] = '\0';
          while ((g_CharacterClassificationTable[(byte)(acStack_851[1] + 1)] & 2U) != 0) {
            memmove(acStack_851 + 1,acStack_851 + 2,n);
            n = n - 1;
          }
          pcVar11 = getenv("USERNAME");
          if (((pcVar11 == (char *)0x0) ||
              (iVar13 = stricmp(pcVar11,acStack_851 + 1), iVar13 != 0)) &&
             (iVar13 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                                 (g_CEditorToolsPtr,"User \"%s\" is currently working on this file.  Continue anyway?"),
             iVar13 == 0)) {
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                      (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,in_stack_fffeec10,
                       in_stack_fffeec14,in_stack_fffeec18);
            goto LAB_005927ee;
          }
        }
        else {
          if (local_108 == 0) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Expected animation keyword in %s but instead found this:\n%s",in_stack_00000008);
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                      (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,in_stack_fffeec10,
                       in_stack_fffeec14,in_stack_fffeec18);
            goto LAB_005927ee;
          }
          aiStack_2720[(in_stack_00000004->motion_list).motion_count] =
               aiStack_2720[(in_stack_00000004->motion_list).motion_count] + 1;
          pSVar14 = local_f8 + (in_stack_00000004->motion_list).motion_count;
          iVar13 = (in_stack_00000004->motion_list).motion_count;
          iVar3 = strnicmp(local_21d0,"filename",8);
          pcVar11 = &DAT_0365caf8 + iVar13 * 0x104;
          if (iVar3 == 0) {
            pcVar18 = local_21ca + 2;
            while ((g_CharacterClassificationTable[(byte)(*pcVar18 + 1)] & 2U) != 0) {
              pcVar18 = pcVar18 + 1;
            }
            iVar13 = sscanf(pcVar18,"\"%[^\"]\"");
            if (iVar13 != 1) {
              g_CurrentFilename = "..\\core\\skeledit.cpp";
              g_CurrentLineNumber = 0x112f;
              core_main_c_displayErrorAndQuit_FUN_00506f10
                        ("Error parsing \"filename\" statement for animation %s in %s:\n%s",pcVar11,in_stack_00000008);
            }
            splitpath(pcVar11,local_1c,local_1470,local_1b70,local_c70);
            if ((local_1470[0] == '\0') && (local_1c[0] == '\0')) {
              splitpath
                        (in_stack_00000008,local_1c,local_1470,(char *)0x0,(char *)0x0);
              makepath(pcVar11,local_1c,local_1470,local_1b70,local_c70);
            }
            splitpath(pcVar11,local_20,local_1a70,local_1970,local_d70);
            if (local_d70[0] == '\0') {
              makepath
                        (pcVar11,local_20,local_1a70,local_1970,"bon");
            }
            p_Var2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                               (pcVar11,(char *)0x0,"rt","..\\core\\skeledit.cpp",
                                0x1139);
            if (p_Var2 == (_FILE *)0x0) {
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Can't open %s mentioned in %s",pcVar11);
              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                        (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,in_stack_fffeec10,
                         in_stack_fffeec14,in_stack_fffeec18);
              goto LAB_005927ee;
            }
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var2,"..\\core\\skeledit.cpp",0x113e);
          }
          else {
            iVar13 = strnicmp(local_21d0,"frames",6);
            if (iVar13 == 0) {
              pcVar11 = local_21ca;
              while ((g_CharacterClassificationTable[(byte)(*pcVar11 + 1)] & 2U) != 0) {
                pcVar11 = pcVar11 + 1;
              }
              local_f4 = -1;
              sscanf(pcVar11," %[^-] - %s%n",local_244,local_264);
              if (local_f4 < 3) {
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Error parsing \"frames\" statement for animation %s in %s:\n%s",pSVar14,
                           in_stack_00000008);
                shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                          (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,in_stack_fffeec10
                           ,in_stack_fffeec14,in_stack_fffeec18);
                goto LAB_005927ee;
              }
              iVar13 = core_skeledit_cpp_FUN_00592520();
              if ((iVar13 == 0) || (iVar13 = core_skeledit_cpp_FUN_00592520(), iVar13 == 0))
              goto LAB_00593749;
            }
          }
        }
        goto LAB_00592a67;
      }
      if (0x77 < (in_stack_00000004->motion_list).motion_count) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Too many motions in %s, max is %d",in_stack_00000008);
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,in_stack_fffeec10,
                   in_stack_fffeec14,in_stack_fffeec18);
        goto LAB_005927ee;
      }
      iVar13 = sscanf(local_21ca + 3," \"%[^\"]\" : %s",local_1f78);
      if (iVar13 != 2) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't parse %s.  I don't understand this line:\n%s",in_stack_00000008);
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,in_stack_fffeec10,
                   in_stack_fffeec14,in_stack_fffeec18);
        goto LAB_005927ee;
      }
      splitpath(local_1f78,local_28,local_1570,local_1670,local_1870);
      if ((local_1570[0] == '\0') && (local_28[0] == '\0')) {
        splitpath
                  (in_stack_00000008,local_28,local_1570,(char *)0x0,(char *)0x0);
        makepath(local_1f78,local_28,local_1570,local_1670,local_1870);
      }
      splitpath(local_1f78,local_14,local_1d70,local_1c70,local_1270);
      if (local_1270[0] == '\0') {
        makepath(local_1f78,local_14,local_1d70,local_1c70,"bon");
      }
      pSVar14 = local_f8 + (in_stack_00000004->motion_list).motion_count;
      memset(pSVar14,0,0x54c);
      splitpath
                (local_1f78,(char *)0x0,(char *)0x0,pSVar14->motion_name,(char *)0x0);
      iVar13 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0
                         (&in_stack_00000004->motion_list);
      pSVar14->state_index = iVar13;
      if (iVar13 < 0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Invalid state %s for animation %s in %s",local_724,local_1f78);
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,in_stack_fffeec10,
                   in_stack_fffeec14,in_stack_fffeec18);
        goto LAB_005927ee;
      }
      aiStack_2720[(in_stack_00000004->motion_list).motion_count] = 0;
      pcVar11 = local_1f78;
      pcVar18 = &DAT_0365caf8 + (in_stack_00000004->motion_list).motion_count * 0x104;
      do {
        cVar1 = *pcVar11;
        *pcVar18 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar18[1] = cVar1;
        pcVar18 = pcVar18 + 2;
      } while (cVar1 != '\0');
      local_108 = 1;
    } while( true );
  }
  pcVar11 = "Can't parse home pose filename from %s.  The state count is probably wrong.";
LAB_005927df:
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar11);
LAB_005927ee:
  if (local_118 != 0.0) {
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  }
  if (local_11c != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_11c,"..\\core\\skeledit.cpp",0x1052);
  }
  return 0;
LAB_00593749:
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Error parsing \"frames\" statement for animation %s in %s:\n%s",pSVar14,in_stack_00000008);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            (&local_2ca8,0,(uint)in_stack_fffeec08,in_stack_fffeec0c,in_stack_fffeec10,
             in_stack_fffeec14,in_stack_fffeec18);
  goto LAB_005927ee;
}
