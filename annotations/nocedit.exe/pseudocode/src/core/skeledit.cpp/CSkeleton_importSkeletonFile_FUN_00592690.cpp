// Name: core_skeledit.cpp_CSkeleton_importSkeletonFile_FUN_00592690
// Address: 00592690
// Address Range: [[00592690, 00595f23] [00605062, 006050a5] [03fc20a8, 03fc21d9]]
// Convention: __cdecl
// Signature: int __cdecl core_skeledit_cpp_CSkeleton_importSkeletonFile_FUN_00592690(CSkeleton *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl core_skeledit_cpp_CSkeleton_importSkeletonFile_FUN_00592690(CSkeleton *this_ptr,char *filename)

{
  int *piVar1;
  char cVar2;
  CEditorTools *this_ptr_00;
  _FILE *file;
  _FILE *p_Var3;
  int iVar4;
  int iVar5;
  EMotionTransitionCmd EVar6;
  byte *pbVar7;
  uint uVar8;
  CVector3f *pCVar9;
  float fVar10;
  SBone *pSVar11;
  SBone *pSVar12;
  SIZE_T n;
  char *pcVar13;
  CVector3f *pCVar14;
  int iVar15;
  SMotion *pSVar16;
  byte *str;
  float *matrix_a;
  CQuaternion4f *pCVar17;
  char *pcVar18;
  CMatrix3x4f *pCVar19;
  char (*pacVar20) [260];
  SSkeleditBiasEntry *pSVar21;
  CMatrix3x4f *pCVar22;
  SMotionTransition *dest;
  bool bVar23;
  byte bVar24;
  byte auStack_113f8 [13608];
  char local_ded0 [32];
  int aiStack_deb0 [3392];
  byte local_a9b0 [13692];
  CMatrix3x4f local_7434 [281];
  CMatrix3x4f local_3f68 [100];
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
  char local_1a70 [256];
  char local_1970 [256];
  char local_1870 [256];
  char local_1770 [256];
  char local_1670 [256];
  char local_1570 [256];
  char local_1470 [256];
  char local_1370 [256];
  char local_1270 [256];
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
  char acStack_851 [101];
  char local_7ec [100];
  char local_788 [100];
  char local_724 [100];
  char local_6c0 [100];
  char local_65c [100];
  char local_5f8 [100];
  char local_594 [100];
  char local_530 [100];
  char local_4cc [100];
  char local_468 [52];
  CMatrix3x4f local_434;
  CMatrix3x4f local_404;
  CMatrix3x4f local_3d4;
  CMatrix3x4f local_3a4;
  CMatrix3x4f local_374;
  CMatrix3x4f local_344;
  CMatrix3x4f local_314;
  CMatrix3x3f local_2e4;
  char local_2b4 [40];
  char local_28c [40];
  char local_264 [32];
  char local_244 [32];
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
  int local_118;
  int local_114;
  long local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  char (*local_fc) [260];
  SMotion *local_f8;
  int local_f4;
  int local_f0;
  SMotion *local_ec;
  char (*local_e8) [260];
  int local_e4;
  uint local_e0;
  uint local_dc;
  int local_d8;
  float local_d4;
  float local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  _FILE *local_c0;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  float *local_a8;
  char *local_a4;
  int local_a0;
  SMotionTransition *local_9c;
  int local_98;
  int local_94;
  int local_90;
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
  int local_58;
  float local_54;
  CSkeleton *local_50;
  float *local_4c;
  float *local_48;
  char (*local_44) [260];
  SMotion *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_2c;
  char local_28 [4];
  char local_24 [4];
  char local_20 [4];
  char local_1c [4];
  char local_18 [4];
  char local_14 [4];
  
  bVar24 = 0;
  core_skeleton_cpp_CSkeleton_free_FUN_00599a50(this_ptr);
  p_Var3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (filename,(char *)0x0,"rt","..\\core\\skeledit.cpp",0x103c);
  local_11c = p_Var3;
  if (p_Var3 == (_FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s");
    return 0;
  }
  local_118 = 0;
  iVar15 = 1;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Reading state list from %s");
  do {
    iVar4 = _fgetc(p_Var3);
    if (iVar4 < 0) break;
  } while ((iVar4 != 10) || (iVar15 = iVar15 + -1, 0 < iVar15));
  local_114 = 0;
  _fscanf(local_11c,"%d\n");
  if (0x50 < local_114) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x104a;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("%s has %d states, max is %d",filename,local_114);
  }
  p_Var3 = local_11c;
  iVar15 = 1;
  do {
    iVar4 = _fgetc(p_Var3);
    if (iVar4 < 0) break;
  } while ((iVar4 != 10) || (iVar15 = iVar15 + -1, 0 < iVar15));
  (this_ptr->motion_list).state_count = 0;
  if ((this_ptr->motion_list).state_count < local_114) {
    do {
      _fscanf(local_11c,"%s\n");
      iVar15 = (this_ptr->motion_list).state_count;
      if ((this_ptr->motion_list).state_names[iVar15][0] == '/') {
        pcVar13 = "State name begins with '/', state count is probably wrong in %s";
        goto LAB_005927df;
      }
      iVar15 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0
                         (&this_ptr->motion_list,(this_ptr->motion_list).state_names[iVar15],0);
      if (-1 < iVar15) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Duplicate state %s in %s",
                   (this_ptr->motion_list).state_names + (this_ptr->motion_list).state_count);
        goto LAB_005927ee;
      }
      iVar15 = (this_ptr->motion_list).state_count + 1;
      (this_ptr->motion_list).state_count = iVar15;
    } while (iVar15 < local_114);
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Reading home pose filename");
  p_Var3 = local_11c;
  iVar4 = 1;
  pcVar13 = "(file error)";
  pcVar18 = local_1e74;
  for (iVar15 = 0x41; iVar15 != 0; iVar15 = iVar15 + -1) {
    *(uint *)pcVar18 = *(uint *)pcVar13;
    pcVar13 = pcVar13 + ((uint)bVar24 * -2 + 1) * 4;
    pcVar18 = pcVar18 + ((uint)bVar24 * -2 + 1) * 4;
  }
  do {
    iVar15 = _fgetc(p_Var3);
    if (iVar15 < 0) break;
  } while ((iVar15 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  iVar15 = _fscanf(local_11c,"\"%[^\"]\"\n");
  if (iVar15 == 1) {
    splitpath(local_1e74,local_18,local_1070,local_f70,local_1170);
    if ((local_1070[0] == '\0') && (local_18[0] == '\0')) {
      splitpath(filename,local_18,local_1070,(char *)0x0,(char *)0x0);
      makepath(local_1e74,local_18,local_1070,local_f70,local_1170);
    }
    splitpath(local_1e74,local_24,local_1370,local_e70,local_1770);
    if (local_1770[0] == '\0') {
      makepath(local_1e74,local_24,local_1370,local_e70,"pos");
    }
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Reading bone heirarchy and building reorientation matrices from %s");
    core_skeledit_cpp_CBoneStructure_importBON_FUN_0058a3d0
              ((CBoneStructure *)(auStack_113f8 + 0x3524),local_1e74);
    core_skeledit_cpp_CBoneStructure_extractInverseBindPose_FUN_0058aeb0
              ((CBoneStructure *)(auStack_113f8 + 0x3524),local_3f68);
    p_Var3 = local_11c;
    iVar15 = 1;
    core_skeledit_cpp_CSkeleton_extractBoneScales_FUN_00595f30
              (this_ptr,(CBoneStructure *)(auStack_113f8 + 0x3524));
    do {
      iVar4 = _fgetc(p_Var3);
      if (iVar4 < 0) break;
    } while ((iVar4 != 10) || (iVar15 = iVar15 + -1, 0 < iVar15));
    local_110 = _ftell(local_11c);
    this_ptr_00 = g_CEditorToolsPtr;
    local_10c = 0;
    (this_ptr->motion_list).motion_count = 0;
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (this_ptr_00,"Pass 1: Building list of animation files and getting total frame count");
    local_104 = 0;
    g_SkeleditBiasEntryCount = 0;
    local_100 = 99999;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_2ca8);
    local_108 = 0;
    local_f8 = (this_ptr->motion_list).motions;
LAB_00592a67:
    do {
      iVar15 = local_108;
      local_c8 = core_skeledit_cpp_readNonEmptyLine_FUN_005895f0(local_21d0,local_11c,0);
      if (((local_c8 == 0) ||
          (iVar4 = _strnicmp(local_21d0,"animation",9),
          iVar4 == 0)) && (iVar15 != 0)) {
        local_fc = g_MotionFilenames + (this_ptr->motion_list).motion_count;
        p_Var3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (*local_fc,(char *)0x0,"rt","..\\core\\skeledit.cpp",0x10a4)
        ;
        if (p_Var3 == (_FILE *)0x0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Can't open %s mentioned in %s",local_fc);
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
          goto LAB_005927ee;
        }
        iVar15 = 1;
        do {
          iVar4 = _fgetc(p_Var3);
          if (iVar4 < 0) break;
        } while ((iVar4 != 10) || (iVar15 = iVar15 + -1, 0 < iVar15));
        _fscanf(p_Var3,"%d\n");
        core_skeledit_cpp_CBoneStructure_readBONheader_FUN_0058a4a0
                  ((CBoneStructure *)local_a9b0,p_Var3,&local_58);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var3,"..\\core\\skeledit.cpp",0x10b8);
        if (0x1869e < local_104) {
          local_104 = local_58 + -1;
        }
        if (0x1869e < local_100) {
          local_100 = local_58 + -1;
        }
        if (((local_104 < 0) || (local_100 < local_104)) || (local_58 <= local_100)) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Invalid frame start/end for animation %s in %s",local_fc);
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
          goto LAB_005927ee;
        }
        iVar15 = core_skeledit_cpp_CBoneStructure_doesHierarchyMatch_FUN_0058b200
                           ((CBoneStructure *)(auStack_113f8 + 0x3524),(CBoneStructure *)local_a9b0)
        ;
        if (iVar15 == 0) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_2ca8.base,*local_fc);
        }
        iVar15 = (this_ptr->motion_list).motion_count;
        local_f8[iVar15].frame_start = local_10c;
        iVar4 = (local_100 - local_104) + 1;
        local_10c = local_10c + iVar4;
        local_f8[iVar15].frame_count = iVar4;
        aiStack_2900[(this_ptr->motion_list).motion_count] = local_104;
        local_108 = 0;
        (this_ptr->motion_list).motion_count = (this_ptr->motion_list).motion_count + 1;
        local_104 = 0;
        local_100 = 99999;
      }
      if (local_c8 == 0) {
        if ((this_ptr->motion_list).motion_count < 1) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0x1159;
          core_main_c_displayErrorAndQuit_FUN_00506f10("No motions defined in %s");
        }
        if (0 < local_2ca8.base.item_count) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_2ca8.base,local_1e74);
          iVar15 = 0;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    (&local_2ca8.base,"(Dump this list to the clipboard)");
          while( true ) {
            _sprintf(local_2360,"The following motions do not have the same skeleton\nheirarchy as the home pose file\n%s\nPress Enter to view heirarchy, or ESC when done viewing list.\n");
            iVar15 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                               (&local_2ca8,local_2360,iVar15,0);
            if (iVar15 < 0) break;
            if (iVar15 == local_2ca8.base.item_count + -1) {
              pcVar13 = g_SkeleditClipboardBuffer;
              for (iVar4 = 0; iVar4 < local_2ca8.base.item_count + -1; iVar4 = iVar4 + 1) {
                shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_2ca8.base,iVar4);
                iVar5 = _sprintf(pcVar13,"%s\r\n");
                pcVar13 = pcVar13 + iVar5;
              }
              shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0
                        (g_CEditorToolsPtr,g_SkeleditClipboardBuffer);
            }
            else {
              pcVar13 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                                  (&local_2ca8.base,iVar15);
              core_skeledit_cpp_CBoneStructure_importBON_FUN_0058a3d0
                        ((CBoneStructure *)auStack_113f8,pcVar13);
              core_skeledit_cpp_CBoneStructure_showBoneHierarchy_FUN_0058afe0
                        ((CBoneStructure *)auStack_113f8,pcVar13);
            }
          }
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
          return 0;
        }
        core_skeleton_cpp_CSkeleton_allocMemory_FUN_00599910
                  (this_ptr,auStack_113f8._13604_4_,local_10c);
        iVar15 = 0;
        if (0 < this_ptr->bone_count) {
          pcVar13 = local_ded0;
          local_50 = this_ptr;
          pSVar11 = this_ptr->bone_list;
          do {
            pSVar12 = pSVar11 + 1;
            local_50->bone_list[0].parent_index = aiStack_deb0[iVar15 * 0x21];
            iVar15 = iVar15 + 1;
            pcVar18 = pcVar13;
            do {
              cVar2 = *pcVar18;
              pSVar11->bone_name[0] = cVar2;
              if (cVar2 == '\0') break;
              cVar2 = pcVar18[1];
              pcVar18 = pcVar18 + 2;
              pSVar11->bone_name[1] = cVar2;
              pSVar11 = (SBone *)(pSVar11->bone_name + 2);
            } while (cVar2 != '\0');
            pcVar13 = pcVar13 + 0x84;
            local_50 = (CSkeleton *)((local_50->motion_list).state_names[1] + 2);
            pSVar11 = pSVar12;
          } while (iVar15 < this_ptr->bone_count);
        }
        _fseek(local_11c,local_110,0);
        local_38 = 0;
        shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                  (g_CEditorToolsPtr,"Importing skeleton animation frames...");
        local_118 = 1;
        if (0 < (this_ptr->motion_list).motion_count) {
          local_40 = (this_ptr->motion_list).motions;
          local_44 = g_MotionFilenames;
          local_3c = 0;
          do {
            local_ec = local_40;
            local_e8 = local_44;
            local_2c = local_10c;
            shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                      (g_CEditorToolsPtr,(float)local_40->frame_start,(float)local_10c);
            p_Var3 = local_11c;
            do {
              iVar15 = core_skeledit_cpp_readNonEmptyLine_FUN_005895f0(local_20a4,p_Var3,1);
              if (iVar15 == 0) {
                g_CurrentFilename = "..\\core\\skeledit.cpp";
                g_CurrentLineNumber = 0x11a5;
                core_main_c_displayErrorAndQuit_FUN_00506f10("Error parsing file!");
              }
              iVar4 = _strnicmp(local_20a4,"animation",9);
              iVar15 = local_3c;
            } while (iVar4 != 0);
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
            local_2c = local_ec->frame_count + -1;
            local_ec->marker_count = 0;
            local_ec->exit_backward_to_motion = local_38;
            local_ec->exit_forward_to_frame = (float)local_2c;
            local_d4 = -99999.0;
            local_1c0 = -99999.0;
            local_1c4 = -99999.0;
            local_1c8 = -99999.0;
            local_cc = 0;
            local_d8 = 0;
            local_c4 = 0;
            local_94 = local_ec->frame_count + -1;
            local_d0 = -99998.0;
            local_9c = local_ec->transitions;
            local_f0 = 0;
            local_8c = &local_ec->exit_forward_tween_time;
            local_144 = 0.0;
            local_140 = 0.0;
            local_a8 = &local_ec->fps;
            pCVar19 = &CMatrix3x4f_00665968;
            pCVar22 = &local_434;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              pCVar22->m[0].w = pCVar19->m[0].w;
              pCVar19 = (CMatrix3x4f *)((int)pCVar19 + ((uint)bVar24 * -2 + 1) * 4);
              pCVar22 = (CMatrix3x4f *)((int)pCVar22 + ((uint)bVar24 * -2 + 1) * 4);
            }
            local_13c = 0.0;
            local_ac = iVar15;
            if (0 < *(int *)((int)aiStack_2720 + iVar15)) {
              do {
                core_skeledit_cpp_readNonEmptyLine_FUN_005895f0(local_20a4,local_11c,1);
                iVar15 = _strnicmp(local_20a4,"fps",3);
                if (iVar15 == 0) {
                  pcVar13 = local_20a2;
                  do {
                    pcVar13 = pcVar13 + 1;
                  } while ((g_CharacterClassificationTable[(byte)(*pcVar13 + 1)] & 2) != 0);
                  iVar15 = sscanf(pcVar13,"%f");
                  if (iVar15 != 1) {
                    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                              (g_CEditorToolsPtr,"Error parsing \"fps\" statement for animation %s in %s:\n%s",local_ec,
                               filename);
                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                    goto LAB_005927ee;
                  }
                }
                else {
                  iVar15 = _strnicmp(local_20a4,"if",2);
                  if (iVar15 == 0) {
                    if (0x2c < local_ec->transition_count) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Too many transitions in animation %s in %s, max is %d",local_ec,
                                 filename);
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                      goto LAB_005927ee;
                    }
                    local_a4 = local_20a2;
                    do {
                      local_a4 = local_a4 + 1;
                    } while ((g_CharacterClassificationTable[(byte)(*local_a4 + 1)] & 2) != 0);
                    local_a0 = -1;
                    sscanf(local_a4,"%s %s%n",local_468,local_28c);
                    if (local_a0 < 3) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Error parsing \"if\" statement for animation %s in %s:\n%s",local_ec,
                                 filename);
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                      goto LAB_005927ee;
                    }
                    dest = local_9c + local_ec->transition_count;
                    memset(dest,0,0x18);
                    iVar15 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0
                                       (&this_ptr->motion_list,local_468,0);
                    dest->desired_state = iVar15;
                    if (iVar15 < 0) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Invalid desired state \"%s\" in \"if\" statement for animation %s in %s:\n%s",local_468,
                                 local_ec,filename);
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                      goto LAB_005927ee;
                    }
                    iVar15 = 0;
                    pSVar16 = local_ec;
                    if (0 < local_ec->transition_count) {
                      do {
                        if (dest->desired_state == pSVar16->transitions[0].desired_state) {
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Duplicate if %s's for animation %s in %s",local_468
                                     ,local_ec);
                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                          goto LAB_005927ee;
                        }
                        iVar15 = iVar15 + 1;
                        pSVar16 = (SMotion *)(pSVar16->motion_name + 0x18);
                      } while (iVar15 < local_ec->transition_count);
                    }
                    EVar6 = core_skeledit_cpp_parseTransitionType_FUN_005925c0(local_28c);
                    dest->cmd = EVar6;
                    if (EVar6 == MOTION_CMD_NONE) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Invalid transition command in \"if %s\" statement for animation %s in %s:\n%s",local_468,
                                 local_ec,filename);
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                      goto LAB_005927ee;
                    }
                    pcVar13 = local_a4 + local_a0;
                    while ((g_CharacterClassificationTable[(byte)(*pcVar13 + 1)] & 2) != 0) {
                      pcVar13 = pcVar13 + 1;
                    }
                    local_a0 = -1;
                    sscanf(pcVar13,"\"%[^\"]\"%n",local_918);
                    if (local_a0 < 0) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Error parsing \"if %s\" statement parms for animation %s in %s:\n%s",local_468,
                                 local_ec,filename);
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                      goto LAB_005927ee;
                    }
                    splitpath
                              (local_918,(char *)0x0,(char *)0x0,local_aa8,(char *)0x0);
                    iVar15 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                                       (&this_ptr->motion_list,local_aa8,0);
                    dest->to_motion_number = iVar15;
                    if (iVar15 < 0) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Invalid destination animation for \"if %s\" statement for animation %s in %s:\n%s",local_468,
                                 local_ec,filename);
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                      goto LAB_005927ee;
                    }
                    pcVar13 = pcVar13 + local_a0;
                    while ((g_CharacterClassificationTable[(byte)(*pcVar13 + 1)] & 2) != 0) {
                      pcVar13 = pcVar13 + 1;
                    }
                    if (*pcVar13 == '[') {
                      local_a0 = -1;
                      sscanf(pcVar13,"[ %[^]] ]%n",local_788);
                      if (local_a0 < 0) {
                        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                  (g_CEditorToolsPtr,"Can't parse destination frame number for \"if %s\" statement for animation %s in %s:\n%s",local_468,
                                   local_ec,filename);
                        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                        goto LAB_005927ee;
                      }
                      iVar15 = core_skeledit_cpp_parseBoneParentToken_FUN_00592520
                                         (local_788,&local_98,
                                          (this_ptr->motion_list).motions[dest->to_motion_number].
                                          frame_count,1);
                      if (iVar15 == 0) {
                        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                  (g_CEditorToolsPtr,"Can't parse destination frame number for \"if %s\" statement for animation %s in %s:\n%s",local_468,
                                   local_ec,filename);
                        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                        goto LAB_005927ee;
                      }
                      local_2c = local_98;
                      dest->to_frame_number = (float)local_98;
                      pcVar13 = pcVar13 + local_a0;
                      while ((g_CharacterClassificationTable[(byte)(*pcVar13 + 1)] & 2) != 0) {
                        pcVar13 = pcVar13 + 1;
                      }
                    }
                    else {
                      dest->to_frame_number = 0.0;
                    }
                    dest->tween_time = 0.0;
                    switch(dest->cmd) {
                    case MOTION_CMD_TWEEN:
                    case MOTION_CMD_TWEEN_ADVANCE:
                    case MOTION_CMD_TWEEN_ADVANCE_BOTH:
                    case MOTION_CMD_TWEEN_BIDIR:
                      iVar15 = _strnicmp(pcVar13,"over",4);
                      if (iVar15 == 0) {
                        local_a0 = -1;
                        sscanf(pcVar13,"%*s%f%n",&dest->tween_time);
                        if (local_a0 < 0) {
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Can't parse tween time for \"if %s\" statement for animation %s in %s:\n%s",local_468
                                     ,local_ec,filename);
                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                          goto LAB_005927ee;
                        }
                        local_124 = (double)dest->tween_time;
                        if ((local_124 < 0.0) || (99 < local_124)) {
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Invalid tween time for \"if %s\" statement for animation %s in %s:\n%s",local_468
                                     ,local_ec,filename);
                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                          goto LAB_005927ee;
                        }
                        pcVar13 = pcVar13 + local_a0;
                        while ((g_CharacterClassificationTable[(byte)(*pcVar13 + 1)] & 2) != 0) {
                          pcVar13 = pcVar13 + 1;
                        }
                      }
                    }
                    iVar15 = _strnicmp(pcVar13,"keepState",9);
                    if (iVar15 == 0) {
                      pcVar13 = pcVar13 + 9;
                      dest->set_new_state_as_desired = 1;
                      while ((g_CharacterClassificationTable[(byte)(*pcVar13 + 1)] & 2) != 0) {
                        pcVar13 = pcVar13 + 1;
                      }
                    }
                    else {
                      dest->set_new_state_as_desired = 0;
                    }
                    while ((g_CharacterClassificationTable[(byte)(*pcVar13 + 1)] & 2) != 0) {
                      pcVar13 = pcVar13 + 1;
                    }
                    if (*pcVar13 != '\0') {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Extra parms in \"if %s\" statement for animation %s in %s:\n%s\nExtra parms: \"%s\"",local_468,
                                 local_ec,filename,local_20a4);
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                      goto LAB_005927ee;
                    }
                    local_ec->transition_count = local_ec->transition_count + 1;
                  }
                  else {
                    iVar15 = _strnicmp(local_20a4,"->",2);
                    if (iVar15 == 0) {
                      pcVar13 = local_20a2;
                      while ((g_CharacterClassificationTable[(byte)(*pcVar13 + 1)] & 2) != 0) {
                        pcVar13 = pcVar13 + 1;
                      }
                      iVar15 = _strnicmp(pcVar13,"(loop)",6);
                      pcVar18 = pcVar13 + 6;
                      if (iVar15 == 0) {
                        local_ec->exit_forward_to_frame = 0.0;
                        local_ec->exit_forward_to_motion = local_38;
                        while ((g_CharacterClassificationTable[(byte)(*pcVar18 + 1)] & 2) != 0) {
                          pcVar18 = pcVar18 + 1;
                        }
                      }
                      else {
                        iVar15 = _strnicmp(pcVar13,"(stop)",6);
                        if (iVar15 == 0) {
                          local_ec->exit_forward_to_motion = local_38;
                          local_2c = local_ec->frame_count + -1;
                          local_ec->exit_forward_to_frame = (float)local_2c;
                          while ((g_CharacterClassificationTable[(byte)(*pcVar18 + 1)] & 2) != 0) {
                            pcVar18 = pcVar18 + 1;
                          }
                        }
                        else {
                          local_64 = -1;
                          sscanf(pcVar13," \"%[^\"]\" %n",local_b70);
                          if (local_64 < 0) {
                            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                      (g_CEditorToolsPtr,"Error parsing \"->\" statement parms for animation %s in %s:\n%s",
                                       local_ec,filename);
                            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                            goto LAB_005927ee;
                          }
                          splitpath
                                    (local_b70,(char *)0x0,(char *)0x0,local_9e0,(char *)0x0);
                          iVar15 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                                             (&this_ptr->motion_list,local_9e0,0);
                          local_ec->exit_forward_to_motion = iVar15;
                          if (iVar15 < 0) {
                            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                      (g_CEditorToolsPtr,"Invalid destination animation for \"->\" statement for animation %s in %s:\n%s",
                                       local_ec,filename);
                            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                            goto LAB_005927ee;
                          }
                          pcVar18 = pcVar13 + local_64;
                          while ((g_CharacterClassificationTable[(byte)(*pcVar18 + 1)] & 2) != 0) {
                            pcVar18 = pcVar18 + 1;
                          }
                          if (*pcVar18 == '[') {
                            local_64 = -1;
                            sscanf(pcVar18,"[ %[^]] ]%n",local_5f8);
                            if (local_64 < 0) {
                              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                        (g_CEditorToolsPtr,"Can't parse destination frame number for \"->\" statement for animation %s in %s:\n%s",
                                         local_ec,filename);
                              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                              goto LAB_005927ee;
                            }
                            iVar15 = core_skeledit_cpp_parseBoneParentToken_FUN_00592520
                                               (local_5f8,&local_90,
                                                (this_ptr->motion_list).motions
                                                [local_ec->exit_forward_to_motion].frame_count,1);
                            if (iVar15 == 0) {
                              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                        (g_CEditorToolsPtr,"Can't parse destination frame number for \"->\" statement for animation %s in %s:\n%s",
                                         local_ec,filename);
                              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                              goto LAB_005927ee;
                            }
                            local_2c = local_90;
                            local_ec->exit_forward_to_frame = (float)local_90;
                            pcVar18 = pcVar18 + local_64;
                            while ((g_CharacterClassificationTable[(byte)(*pcVar18 + 1)] & 2) != 0)
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
                            iVar15 = core_skeledit_cpp_parseTransitionType_FUN_005925c0(local_2b4);
                            if (iVar15 != 0) {
                              local_ec->exit_forward_cmd = iVar15;
                              pcVar18 = pcVar18 + local_64;
                              while ((g_CharacterClassificationTable[(byte)(*pcVar18 + 1)] & 2) != 0
                                    ) {
                                pcVar18 = pcVar18 + 1;
                              }
                              if (local_ec->exit_forward_cmd == 2) {
                                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                          (g_CEditorToolsPtr,"Invalid transition command in \"->\" statement for animation %s in %s:\n%s",
                                           local_ec,filename);
                                shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                                goto LAB_005927ee;
                              }
                              local_ec->exit_forward_tween_time = 0.0;
                              switch(local_ec->exit_forward_cmd) {
                              case 3:
                              case 4:
                              case 5:
                              case 6:
                                iVar15 = _strnicmp
                                                   (pcVar18,"over",4);
                                if (iVar15 == 0) {
                                  local_64 = -1;
                                  sscanf(pcVar18,"%*s%f%n",local_8c)
                                  ;
                                  if (local_64 < 0) {
                                    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                              (g_CEditorToolsPtr,"Can't parse tween time for \"->\" statement for animation %s in %s:\n%s"
                                               ,local_ec,filename);
                                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                                    goto LAB_005927ee;
                                  }
                                  local_12c = (double)local_ec->exit_forward_tween_time;
                                  if ((local_12c < 0.0) || (99 < local_12c)) {
                                    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                              (g_CEditorToolsPtr,"Invalid tween time for \"->\" statement for animation %s in %s:\n%s"
                                               ,local_ec,filename);
                                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                                    goto LAB_005927ee;
                                  }
                                  pcVar18 = pcVar18 + local_64;
                                  while ((g_CharacterClassificationTable[(byte)(*pcVar18 + 1)] & 2)
                                         != 0) {
                                    pcVar18 = pcVar18 + 1;
                                  }
                                  if (((local_ec->exit_forward_cmd == 5) ||
                                      (local_ec->exit_forward_cmd == 6)) &&
                                     (local_ec->exit_forward_from_frame =
                                           (int)ROUND(ROUND((float)local_ec->frame_count -
                                                            local_ec->exit_forward_tween_time *
                                                            local_ec->fps)),
                                     local_ec->exit_forward_from_frame < 0)) {
                                    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                              (g_CEditorToolsPtr,"Tween time for \"->\" statement is longer than animation time in animation %s in %s:\n%s"
                                               ,local_ec,filename);
                                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                                    goto LAB_005927ee;
                                  }
                                }
                              }
                            }
                            iVar15 = _strnicmp
                                               (pcVar18,"keepState",9);
                            if (iVar15 == 0) {
                              local_ec->exit_forward_set_new_state = 1;
                              pcVar18 = pcVar18 + 9;
                              while ((g_CharacterClassificationTable[(byte)(*pcVar18 + 1)] & 2) != 0
                                    ) {
                                pcVar18 = pcVar18 + 1;
                              }
                            }
                            else {
                              local_ec->exit_forward_set_new_state = 0;
                            }
                          }
                        }
                      }
                      while ((g_CharacterClassificationTable[(byte)(*pcVar18 + 1)] & 2) != 0) {
                        pcVar18 = pcVar18 + 1;
                      }
                      if (*pcVar18 != '\0') {
                        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                  (g_CEditorToolsPtr,"Extra parms in \"->\" statement for animation %s in %s:\n%s\nExtra parms: \"%s\"",local_ec,
                                   filename,local_20a4);
                        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                        goto LAB_005927ee;
                      }
                    }
                    else {
                      iVar15 = _strnicmp(local_20a4,"signal",6);
                      if (iVar15 == 0) {
                        pcVar13 = local_20a2 + 4;
                        while ((g_CharacterClassificationTable[(byte)(*pcVar13 + 1)] & 2) != 0) {
                          pcVar13 = pcVar13 + 1;
                        }
                        if (0xe < local_ec->signal_count) {
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Too many signals in animation %s in %s, max is %d",local_ec,
                                     filename);
                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                          goto LAB_005927ee;
                        }
                        iVar15 = sscanf(pcVar13,"%d %*s %s",&local_88)
                        ;
                        if (iVar15 != 2) {
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Error parsing \"signal\" statement for animation %s in %s:\n%s",local_ec,
                                     filename);
                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                          goto LAB_005927ee;
                        }
                        iVar15 = core_skeledit_cpp_parseBoneParentToken_FUN_00592520
                                           (local_7ec,&local_84,local_ec->frame_count,0);
                        if (iVar15 == 0) {
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Invalid frame number in \"signal\" statement for animation %s in %s:\n%s",local_ec,
                                     filename);
                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                          goto LAB_005927ee;
                        }
                        if (local_88 == 0) {
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Signal value cannot be 0 in \"signal\" statement for animation %s in %s:\n%s",local_ec,
                                     filename);
                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                          goto LAB_005927ee;
                        }
                        local_ec->signals[local_ec->signal_count].value = local_88;
                        local_ec->signals[local_ec->signal_count].frame_number = local_84;
                        local_ec->signal_count = local_ec->signal_count + 1;
                      }
                      else {
                        iVar15 = _strnicmp
                                           (local_20a4,"reverse",7);
                        if (iVar15 == 0) {
                          local_e4 = 1;
                        }
                        else {
                          iVar15 = _strnicmp
                                             (local_20a4,"filename",5);
                          if ((iVar15 != 0) &&
                             (iVar15 = _strnicmp
                                                 (local_20a4,"frames",6), iVar15 != 0)) {
                            iVar15 = _strnicmp
                                               (local_20a4,"cancel",6);
                            if (iVar15 == 0) {
                              pbVar7 = (byte *)(local_20a2 + 4);
                              while ((g_CharacterClassificationTable[(byte)(*pbVar7 + 1)] & 2) != 0)
                              {
                                pbVar7 = pbVar7 + 1;
                              }
                              local_e0 = 0;
                              pcVar13 = strstr
                                                  ((char *)pbVar7,"none");
                              if (pcVar13 == (char *)0x0) {
                                while (*pbVar7 != 0) {
                                  uVar8 = toupper((uint)*pbVar7);
                                  if (uVar8 < 0x50) {
                                    if (uVar8 < 0x42) goto LAB_005949a6;
                                    if (uVar8 < 0x43) {
                                      local_dc = local_dc | 4;
                                      goto LAB_005949a6;
                                    }
                                    if (uVar8 == 0x48) {
                                      local_dc = local_dc | 2;
                                      goto LAB_005949a6;
                                    }
                                    pbVar7 = pbVar7 + 1;
                                  }
                                  else {
                                    if (uVar8 < 0x51) {
                                      local_dc = local_dc | 1;
                                    }
                                    else if (uVar8 < 0x59) {
                                      if (uVar8 == 0x58) {
                                        local_e0 = local_e0 | 1;
                                      }
                                    }
                                    else if (uVar8 < 0x5a) {
                                      local_e0 = local_e0 | 2;
                                    }
                                    else if (uVar8 == 0x5a) {
                                      local_e0 = local_e0 | 4;
                                    }
LAB_005949a6:
                                    pbVar7 = pbVar7 + 1;
                                  }
                                }
                              }
                            }
                            else {
                              iVar15 = _strnicmp
                                                 (local_20a4,"bias",4);
                              if (iVar15 == 0) {
                                pcVar13 = local_20a2 + 2;
                                while ((g_CharacterClassificationTable[(byte)(*pcVar13 + 1)] & 2) !=
                                       0) {
                                  pcVar13 = pcVar13 + 1;
                                }
                                local_80 = -1;
                                sscanf
                                          (pcVar13,"frame %s to \"%[^\"]\" frame %s%n",local_530,
                                           local_65c,local_594);
                                iVar15 = g_SkeleditBiasEntryCount;
                                if (local_80 < 0xf) {
                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                            (g_CEditorToolsPtr,"Can't parse \"bias\" statement for animation %s in %s:%s",
                                             local_ec,filename);
                                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                                  goto LAB_005927ee;
                                }
                                g_SkeleditBiasEntries[g_SkeleditBiasEntryCount].motion_index =
                                     local_38;
                                iVar4 = core_skeledit_cpp_parseBoneParentToken_FUN_00592520
                                                  (local_530,
                                                   &g_SkeleditBiasEntries[iVar15].source_frame,
                                                   local_ec->frame_count,0);
                                if (iVar4 == 0) {
                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                            (g_CEditorToolsPtr,"Can't parse frame to bias in \"bias\" statement for animation %s in %s:%s",
                                             local_ec,filename);
                                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                                  goto LAB_005927ee;
                                }
                                iVar4 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                                                  (&this_ptr->motion_list,local_65c,0);
                                g_SkeleditBiasEntries[iVar15].ref_motion_index = iVar4;
                                if (iVar4 < 0) {
                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                            (g_CEditorToolsPtr,"Invalid reference motion \"%s\" in \"bias\" statement for animation %s in %s:%s",
                                             local_65c,local_ec,filename);
                                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                                  goto LAB_005927ee;
                                }
                                if (iVar4 == local_38) {
                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                            (g_CEditorToolsPtr,"Reference motion is same as motion to bias in \"bias\" statement for animation %s in %s:%s",
                                             local_ec,filename);
                                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                                  goto LAB_005927ee;
                                }
                                iVar15 = core_skeledit_cpp_parseBoneParentToken_FUN_00592520
                                                   (local_594,
                                                    &g_SkeleditBiasEntries[iVar15].ref_frame,
                                                    (this_ptr->motion_list).motions[iVar4].
                                                    frame_count,0);
                                if (iVar15 == 0) {
                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                            (g_CEditorToolsPtr,"Can't parse frame to bias in \"bias\" statement for animation %s in %s:%s",
                                             local_ec,filename);
                                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                                  goto LAB_005927ee;
                                }
                                g_SkeleditBiasEntryCount = g_SkeleditBiasEntryCount + 1;
                              }
                              else {
                                iVar15 = _strnicmp
                                                   (local_20a4,"markers",7);
                                if (iVar15 == 0) {
                                  if (0 < local_ec->marker_count) {
                                    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                              (g_CEditorToolsPtr,"Multiple \"markers\" statements for animation %s in %s"
                                               ,local_ec);
                                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                                    goto LAB_005927ee;
                                  }
                                  pcVar13 = local_20a2 + 5;
                                  while ((g_CharacterClassificationTable[(byte)(*pcVar13 + 1)] & 2)
                                         != 0) {
                                    pcVar13 = pcVar13 + 1;
                                  }
                                  cVar2 = *pcVar13;
                                  while (cVar2 != '\0') {
                                    local_7c = -1;
                                    sscanf
                                              (pcVar13,"%d%n",&local_78);
                                    if (local_7c < 0) {
                                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                (g_CEditorToolsPtr,
                                                 "Can't parse \"markers\" statement for animation %s in %s:\n%s",local_ec,
                                                 filename);
                                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                                      goto LAB_005927ee;
                                    }
                                    if ((local_78 < 1) || (local_ec->frame_count <= local_78)) {
                                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                (g_CEditorToolsPtr,
                                                 "Can't place marker at invalid frame number %d for animation %s in %s:\n%s",local_78,
                                                 local_ec,filename);
                                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                                      goto LAB_005927ee;
                                    }
                                    if (9 < local_ec->marker_count) {
                                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                (g_CEditorToolsPtr,
                                                 "Too many markers in animation %s in %s:\n%s",local_ec,
                                                 filename);
                                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                                      goto LAB_005927ee;
                                    }
                                    if ((0 < local_ec->marker_count) &&
                                       (local_78 <= local_ec->markers[local_ec->marker_count + -1]))
                                    {
                                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                (g_CEditorToolsPtr,
                                                 "Frame numbers are not strictly increasing in \"markers\" statement in animation %s in %s:\n%s",local_ec,
                                                 filename);
                                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                                      goto LAB_005927ee;
                                    }
                                    local_ec->markers[local_ec->marker_count] = local_78;
                                    local_ec->marker_count = local_ec->marker_count + 1;
                                    pcVar13 = pcVar13 + local_7c;
                                    while ((g_CharacterClassificationTable[(byte)(*pcVar13 + 1)] & 2
                                           ) != 0) {
                                      pcVar13 = pcVar13 + 1;
                                    }
                                    cVar2 = *pcVar13;
                                  }
                                }
                                else {
                                  iVar15 = _strnicmp
                                                     (local_20a4,"displace",8);
                                  if (iVar15 == 0) {
                                    pcVar13 = local_20a2 + 6;
                                    while ((g_CharacterClassificationTable[(byte)(*pcVar13 + 1)] & 2
                                           ) != 0) {
                                      pcVar13 = pcVar13 + 1;
                                    }
                                    iVar15 = sscanf
                                                       (pcVar13,"%f,%f,%f",&local_144,
                                                        &local_140);
                                    if (iVar15 != 3) {
                                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                (g_CEditorToolsPtr,
                                                 "Can't parse displacement vector in \"displace\" keyword in animation %s in %s\n:%s",local_ec,
                                                 filename);
                                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                                      goto LAB_005927ee;
                                    }
                                  }
                                  else {
                                    iVar15 = _strnicmp
                                                       (local_20a4,"totaldisplacement",0x11
                                                       );
                                    if (iVar15 == 0) {
                                      pbVar7 = local_2093;
LAB_00594f2a:
                                      do {
                                        str = pbVar7;
                                        pbVar7 = str + 1;
                                      } while ((g_CharacterClassificationTable[(byte)(*str + 1)] & 2
                                               ) != 0);
                                      if (*str != 0) {
                                        local_74 = toupper((uint)*str);
                                        if (0x58 < local_74) {
                                          if ((local_74 < 0x5a) || (local_74 < 0x5b)) {
LAB_0059507b:
                                            pbVar7 = str + 1;
                                            if (str[1] == 0x3a) {
                                              pbVar7 = str + 2;
                                            }
                                            if (*pbVar7 == 0x3d) {
                                              pbVar7 = pbVar7 + 1;
                                            }
                                            iVar15 = _strnicmp
                                                               ((char *)pbVar7,"display",7)
                                            ;
                                            if (iVar15 == 0) {
                                              pbVar7 = pbVar7 + 7;
                                              local_6c = -99998.0;
                                            }
                                            else {
                                              local_68 = -1;
                                              sscanf
                                                        ((char *)pbVar7,"%f%n",&local_6c);
                                              if (local_68 < 1) {
                                                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                          (g_CEditorToolsPtr,
                                                           "Can't parse \"totalDisplacement\" keyword in animation %s in %s\n:%s",
                                                           local_ec,filename);
                                                shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                          (&local_2ca8,0);
                                                goto LAB_005927ee;
                                              }
                                              pbVar7 = pbVar7 + local_68;
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
                                                (iVar15 = 
                                                  core_skeledit_cpp_parseBoneParentToken_FUN_00592520
                                                            (local_4cc,&local_cc,
                                                             local_ec->frame_count,0), iVar15 == 0))
                                               || (iVar15 = 
                                                  core_skeledit_cpp_parseBoneParentToken_FUN_00592520
                                                            (local_6c0,&local_94,
                                                             local_ec->frame_count,0), iVar15 == 0))
                                            {
                                              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                        (g_CEditorToolsPtr,
                                                         "Can't parse frame range in \"totalDisplacement\" keyword in animation %s in %s\n:%s",
                                                         local_ec,filename);
                                              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                        (&local_2ca8,0);
                                              goto LAB_005927ee;
                                            }
                                            if (local_94 < local_cc) {
                                              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                        (g_CEditorToolsPtr,
                                                         "Invalid frame range in \"totalDisplacement\" keyword in animation %s in %s\n:%s",
                                                         local_ec,filename);
                                              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                        (&local_2ca8,0);
                                              goto LAB_005927ee;
                                            }
                                            pbVar7 = str + local_70;
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
                                                   filename);
                                        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                  (&local_2ca8,0);
                                        goto LAB_005927ee;
                                      }
                                      sscanf
                                                ((char *)str,"%f,%f,%f",&local_144,&local_140)
                                      ;
                                    }
                                    else {
                                      iVar15 = _strnicmp
                                                         (local_20a4,"flipXZ",6);
                                      if (iVar15 == 0) {
                                        local_d8 = 1;
                                      }
                                      else {
                                        iVar15 = _strnicmp
                                                           (local_20a4,"rotate",6);
                                        if (iVar15 != 0) {
                                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                    (g_CEditorToolsPtr,
                                                     "Invalid keyword for animation %s in %s:\n%s",local_ec,
                                                     filename);
                                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                    (&local_2ca8,0);
                                          goto LAB_005927ee;
                                        }
                                        if (local_c4 != 0) {
                                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                    (g_CEditorToolsPtr,
                                                     "Multiple \"rotate\" keywords used in animation %s in %s",local_ec);
                                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                    (&local_2ca8,0);
                                          goto LAB_005927ee;
                                        }
                                        pcVar13 = local_20a2 + 4;
                                        while ((g_CharacterClassificationTable[(byte)(*pcVar13 + 1)]
                                               & 2) != 0) {
                                          pcVar13 = pcVar13 + 1;
                                        }
                                        iVar15 = sscanf
                                                           (pcVar13,"%f,%f,%f",&local_15c,
                                                            &local_15c.z);
                                        if (iVar15 != 3) {
                                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                    (g_CEditorToolsPtr,
                                                     "Can't parse rotation PBH in \"rotate\" keyword in animation %s in %s\n:%s",local_ec,
                                                     filename);
                                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                    (&local_2ca8,0);
                                          goto LAB_005927ee;
                                        }
                                        local_15c.x = local_15c.x * 0.01745329f;
                                        local_15c.y = local_15c.y * 0.01745329f;
                                        local_15c.z = local_15c.z * 0.01745329f;
                                        local_c4 = 1;
                                        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                                                  (&local_434,&g_ZeroVector.f,&local_15c);
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
              } while (local_f0 < *(int *)((int)aiStack_2720 + local_ac));
            }
            pacVar20 = local_e8;
            p_Var3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                               (*local_e8,(char *)0x0,"rt","..\\core\\skeledit.cpp",
                                0x13d8);
            local_c0 = p_Var3;
            if (p_Var3 == (_FILE *)0x0) {
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Can't open %s mentioned in %s",pacVar20);
              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
              goto LAB_005927ee;
            }
            iVar15 = 1;
            do {
              iVar4 = _fgetc(p_Var3);
              file = local_c0;
              if (iVar4 < 0) break;
            } while ((iVar4 != 10) || (iVar15 = iVar15 + -1, 0 < iVar15));
            _fscanf(local_c0,"%d\n");
            iVar15 = local_3c;
            core_skeledit_cpp_CBoneStructure_readBONheader_FUN_0058a4a0
                      ((CBoneStructure *)(local_a9b0 + 0x3524),file,&local_b8);
            iVar4 = 0;
            if (0 < *(int *)((int)aiStack_2900 + iVar15)) {
              do {
                iVar4 = iVar4 + 1;
                core_skeledit_cpp_CBoneStructure_skipBONframe_FUN_0058abb0
                          ((CBoneStructure *)(local_a9b0 + 0x3524),local_c0);
                local_b8 = local_b8 + -1;
              } while (iVar4 < *(int *)((int)aiStack_2900 + iVar15));
            }
            local_b0 = 0;
            local_34 = 0;
            local_b4 = 1;
            if (-1 < local_ec->frame_count) {
              do {
                iVar15 = local_34;
                local_2c = local_ec->frame_start + local_34;
                shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                          (g_CEditorToolsPtr,(float)local_2c,(float)local_10c);
                if (local_b8 < 1) {
                  if (iVar15 != local_ec->frame_count) {
                    g_CurrentFilename = "..\\core\\skeledit.cpp";
                    g_CurrentLineNumber = 0x1408;
                    core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze!");
                  }
                  break;
                }
                local_b8 = local_b8 + -1;
                core_skeledit_cpp_CBoneStructure_readBONframe_FUN_0058aa10
                          ((CBoneStructure *)(local_a9b0 + 0x3524),local_c0,local_d8);
                iVar15 = local_c4;
                core_skeledit_cpp_CBoneStructure_fixupMatrices_FUN_0058adb0
                          ((CBoneStructure *)(local_a9b0 + 0x3524));
                if (iVar15 != 0) {
                  iVar15 = 0;
                  if (0 < (int)local_a9b0._13604_4_) {
                    matrix_a = (float *)local_7434;
                    do {
                      iVar15 = iVar15 + 1;
                      core_xform_cpp_multiplyMatrix3x4InPlace_FUN_005f50c0
                                ((CMatrix3x4f *)matrix_a,&local_434);
                      matrix_a = matrix_a + 0x21;
                    } while (iVar15 < (int)local_a9b0._13604_4_);
                  }
                  core_skeledit_cpp_CBoneStructure_computeLocalMatrices_FUN_0058ac80
                            ((CBoneStructure *)(local_a9b0 + 0x3524));
                }
                core_skeledit_cpp_CBoneStructure_applyMatrixArray_FUN_0058af40
                          ((CBoneStructure *)(local_a9b0 + 0x3524),local_3f68);
                if (local_b4 != 0) {
                  local_168 = local_7434[0].m[0].z;
                  local_164 = local_7434[0].m[1].z;
                  local_160 = local_7434[0].m[2].z;
                  if (&local_1f8 != &local_168) {
                    local_1f8 = local_7434[0].m[0].z;
                    local_1f4 = local_7434[0].m[1].z;
                    local_1f0 = local_7434[0].m[2].z;
                  }
                  pCVar9 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                                     ((CMatrix3x3f *)local_7434,&local_1b0);
                  if (&local_1bc != pCVar9) {
                    local_1bc.x = pCVar9->x;
                    local_1bc.y = pCVar9->y;
                    local_1bc.z = pCVar9->z;
                  }
                  local_b4 = 0;
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
                if (local_ec->frame_count <= local_34) {
                  if (local_e4 == 0) {
                    if (&local_198 != &local_1e0) {
                      local_198.x = local_1e0.x;
                      local_198.y = local_1e0.y;
                      local_198.z = local_1e0.z;
                    }
                    local_b0 = 1;
                  }
                  break;
                }
                if (local_e4 == 0) {
                  iVar15 = local_ec->frame_start + local_34;
                }
                else {
                  iVar15 = (local_ec->frame_start + local_ec->frame_count + -1) - local_34;
                }
                pCVar9 = this_ptr->frame_positions_1 + iVar15;
                if (pCVar9 != &local_1e0) {
                  pCVar9->x = local_1e0.x;
                  pCVar9->y = local_1e0.y;
                  pCVar9->z = local_1e0.z;
                }
                iVar4 = this_ptr->bone_count;
                pCVar17 = this_ptr->bone_angle_frames;
                if (local_dc == 0) {
                  local_60 = local_dc;
                  if (0 < this_ptr->bone_count) {
                    local_48 = (float *)local_7434;
                    pCVar17 = pCVar17 + iVar4 * iVar15;
                    do {
                      core_xform_cpp_matrixToQuaternion_FUN_005f7420
                                ((CMatrix3x3f *)local_48,&local_214);
                      pCVar17->w = local_214.w;
                      pCVar17->x = local_214.x;
                      pCVar17->y = local_214.y;
                      pCVar17->z = local_214.z;
                      local_60 = local_60 + 1;
                      local_48 = &((CMatrix3x4f *)(local_48 + 0x18))->m[2].x;
                      pCVar17 = pCVar17 + 1;
                    } while ((int)local_60 < this_ptr->bone_count);
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
                  core_xform_cpp_inverse_FUN_005f6210(&local_3d4,&local_374);
                  local_5c = 0;
                  if (0 < this_ptr->bone_count) {
                    local_4c = (float *)local_7434;
                    pCVar17 = pCVar17 + iVar4 * iVar15;
                    do {
                      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                                ((CMatrix3x4f *)local_4c,&local_404,&local_314);
                      core_xform_cpp_matrixToQuaternion_FUN_005f7420(&local_2e4,&local_224);
                      pCVar17->w = local_224.w;
                      pCVar17->x = local_224.x;
                      pCVar17->y = local_224.y;
                      pCVar17->z = local_224.z;
                      local_5c = local_5c + 1;
                      local_4c = &((CMatrix3x4f *)((int)local_4c + 0x60))->m[2].x;
                      pCVar17 = pCVar17 + 1;
                    } while (local_5c < this_ptr->bone_count);
                  }
                }
                local_34 = local_34 + 1;
              } while (local_34 <= local_ec->frame_count);
            }
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_c0,"..\\core\\skeledit.cpp",0x147a);
            local_204 = 0.0;
            local_200 = 0.0;
            local_1fc = 0.0;
            iVar15 = 0;
            if (0 < local_ec->frame_count) {
              do {
                iVar4 = local_ec->frame_start + iVar15;
                if (iVar15 < local_ec->frame_count + -1) {
                  pCVar9 = this_ptr->frame_positions_1 + iVar4;
                  pCVar14 = this_ptr->frame_positions_1 + iVar4 + 1;
                  local_138.x = pCVar14->x - pCVar9->x;
                  local_138.y = pCVar14->y - pCVar9->y;
                  fVar10 = pCVar14->z - pCVar9->z;
                  pCVar9 = this_ptr->frame_positions_2 + iVar4;
                  local_138.z = fVar10;
                  if (pCVar9 != &local_138) {
                    pCVar9->x = local_138.x;
                    pCVar9->y = local_138.y;
LAB_00595723:
                    pCVar9->z = fVar10;
                  }
                }
                else if (iVar15 < 1) {
                  pCVar9 = this_ptr->frame_positions_2;
                  pCVar9[iVar4].z = 0.0;
                  pCVar9[iVar4].y = pCVar9[iVar4].z;
                  pCVar9[iVar4].x = pCVar9[iVar4].y;
                }
                else if (local_b0 == 0) {
                  pCVar9 = this_ptr->frame_positions_2 + iVar4;
                  pCVar14 = this_ptr->frame_positions_2 + iVar4 + -1;
                  if (pCVar9 != pCVar14) {
                    pCVar9->x = pCVar14->x;
                    pCVar9->y = pCVar14->y;
                    pCVar9->z = pCVar14->z;
                  }
                }
                else {
                  pCVar9 = this_ptr->frame_positions_1;
                  local_18c.x = local_198.x - pCVar9[iVar4].x;
                  local_18c.y = local_198.y - pCVar9[iVar4].y;
                  fVar10 = local_198.z - pCVar9[iVar4].z;
                  pCVar9 = this_ptr->frame_positions_2 + iVar4;
                  local_18c.z = fVar10;
                  if (pCVar9 != &local_18c) {
                    pCVar9->x = local_18c.x;
                    pCVar9->y = local_18c.y;
                    goto LAB_00595723;
                  }
                }
                if ((local_e0 & 1) == 0) {
                  this_ptr->frame_positions_2[iVar4].x = 0.0;
                }
                else {
                  this_ptr->frame_positions_1[iVar4].x = 0.0;
                  if ((local_cc <= iVar15) && (iVar15 <= local_94)) {
                    local_204 = local_204 + this_ptr->frame_positions_2[iVar4].x;
                  }
                }
                if ((local_e0 & 2) == 0) {
                  this_ptr->frame_positions_2[iVar4].y = 0.0;
                }
                else {
                  this_ptr->frame_positions_1[iVar4].y = 0.0;
                  if ((local_cc <= iVar15) && (iVar15 <= local_94)) {
                    local_200 = local_200 + this_ptr->frame_positions_2[iVar4].y;
                  }
                }
                if ((local_e0 & 4) == 0) {
                  this_ptr->frame_positions_2[iVar4].z = 0.0;
                }
                else {
                  this_ptr->frame_positions_1[iVar4].z = 0.0;
                  if ((local_cc <= iVar15) && (iVar15 <= local_94)) {
                    local_1fc = local_1fc + this_ptr->frame_positions_2[iVar4].z;
                  }
                }
                iVar15 = iVar15 + 1;
              } while (iVar15 < local_ec->frame_count);
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
              local_2c = (local_94 - local_cc) + 1;
              local_54 = (float)local_2c;
              fVar10 = 1.0 / local_54;
              local_1ec = local_1ec * fVar10;
              local_1e8 = local_1e8 * fVar10;
              local_1e4 = local_1e4 * fVar10;
              iVar15 = local_cc - local_94;
              bVar23 = local_cc == local_94;
              iVar4 = local_cc;
              while (bVar23 || SBORROW4(iVar4,local_94) != iVar15 < 0) {
                iVar15 = local_ec->frame_start + iVar4;
                pCVar9 = this_ptr->frame_positions_2;
                pCVar9[iVar15].x = pCVar9[iVar15].x + local_1ec;
                pCVar9[iVar15].y = pCVar9[iVar15].y + local_1e8;
                iVar4 = iVar4 + 1;
                pCVar9[iVar15].z = pCVar9[iVar15].z + local_1e4;
                iVar15 = iVar4 - local_94;
                bVar23 = iVar15 == 0;
              }
            }
            local_44 = local_44 + 1;
            local_40 = local_40 + 1;
            local_3c = local_3c + 4;
            local_38 = local_38 + 1;
          } while (local_38 < (this_ptr->motion_list).motion_count);
        }
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_11c,"..\\core\\skeledit.cpp",0x14ef);
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Biasing motions.");
        local_118 = 0;
        local_11c = (_FILE *)0x0;
        memset(local_2540,0,0x1e0);
        if (0 < g_SkeleditBiasEntryCount) {
          iVar15 = 0;
          do {
            piVar1 = (int *)((int)&g_SkeleditBiasEntries[0].motion_index + iVar15);
            iVar15 = iVar15 + 0x10;
            local_2540[*piVar1] = 1;
          } while (iVar15 < g_SkeleditBiasEntryCount * 0x10);
        }
        iVar15 = 0;
        if (g_SkeleditBiasEntryCount < 1) {
LAB_00595eb8:
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Finished processing %s OK!");
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
          return 1;
        }
        do {
          iVar4 = 0;
          if (0 < g_SkeleditBiasEntryCount) {
            iVar5 = 0;
            do {
              if ((-1 < *(int *)((int)&g_SkeleditBiasEntries[0].motion_index + iVar5)) &&
                 (local_2540[*(int *)((int)&g_SkeleditBiasEntries[0].ref_motion_index + iVar5)] == 0
                 )) break;
              iVar5 = iVar5 + 0x10;
              iVar4 = iVar4 + 1;
            } while (iVar5 < g_SkeleditBiasEntryCount * 0x10);
          }
          if (g_SkeleditBiasEntryCount <= iVar4) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Cyclic bias detected in %s");
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
            goto LAB_005927ee;
          }
          pSVar21 = g_SkeleditBiasEntries + iVar4;
          iVar5 = (this_ptr->motion_list).motions[pSVar21->motion_index].frame_start +
                  g_SkeleditBiasEntries[iVar4].source_frame;
          iVar4 = (this_ptr->motion_list).motions[g_SkeleditBiasEntries[iVar4].ref_motion_index].
                  frame_start + g_SkeleditBiasEntries[iVar4].ref_frame;
          pCVar9 = this_ptr->frame_positions_1;
          local_1d4 = pCVar9[iVar4].x - pCVar9[iVar5].x;
          local_1d0 = pCVar9[iVar4].y - pCVar9[iVar5].y;
          local_1cc = pCVar9[iVar4].z - pCVar9[iVar5].z;
          for (iVar4 = 0; iVar5 = g_SkeleditBiasEntryCount,
              iVar4 < (this_ptr->motion_list).motions[pSVar21->motion_index].frame_count;
              iVar4 = iVar4 + 1) {
            iVar5 = (this_ptr->motion_list).motions[pSVar21->motion_index].frame_start + iVar4;
            pCVar9 = this_ptr->frame_positions_1;
            pCVar9[iVar5].x = pCVar9[iVar5].x + local_1d4;
            pCVar9[iVar5].y = pCVar9[iVar5].y + local_1d0;
            pCVar9[iVar5].z = pCVar9[iVar5].z + local_1cc;
          }
          local_2540[pSVar21->motion_index] = 0;
          iVar15 = iVar15 + 1;
          pSVar21->motion_index = -1;
          if (iVar5 <= iVar15) goto LAB_00595eb8;
        } while( true );
      }
      iVar15 = _strnicmp(local_21d0,"animation",9);
      if (iVar15 != 0) {
        iVar15 = _strnicmp(local_21d0,"checkout",8);
        if (iVar15 == 0) {
          sscanf(local_21ca + 2,"%s");
          uVar8 = 0xffffffff;
          pcVar13 = acStack_851 + 1;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            cVar2 = *pcVar13;
            pcVar13 = pcVar13 + (uint)bVar24 * -2 + 1;
          } while (cVar2 != '\0');
          n = ~uVar8 - 1;
          if (0 < (int)n) {
            pcVar13 = acStack_851 + ~uVar8;
            do {
              if ((g_CharacterClassificationTable[(byte)(pcVar13[-1] + 1)] & 2) == 0) break;
              n = n - 1;
              pcVar13 = pcVar13 + -1;
            } while (0 < (int)n);
          }
          (acStack_851 + 1)[n] = '\0';
          while ((g_CharacterClassificationTable[(byte)(acStack_851[1] + 1)] & 2) != 0) {
            memmove(acStack_851 + 1,acStack_851 + 2,n);
            n = n - 1;
          }
          pcVar13 = getenv("USERNAME");
          if (((pcVar13 == (char *)0x0) ||
              (iVar15 = _stricmp(pcVar13,acStack_851 + 1), iVar15 != 0))
             && (iVar15 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                                    (g_CEditorToolsPtr,"User \"%s\" is currently working on this file.  Continue anyway?"),
                iVar15 == 0)) {
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
            goto LAB_005927ee;
          }
        }
        else {
          if (local_108 == 0) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Expected animation keyword in %s but instead found this:\n%s",filename);
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
            goto LAB_005927ee;
          }
          aiStack_2720[(this_ptr->motion_list).motion_count] =
               aiStack_2720[(this_ptr->motion_list).motion_count] + 1;
          pSVar16 = local_f8 + (this_ptr->motion_list).motion_count;
          iVar15 = (this_ptr->motion_list).motion_count;
          iVar4 = _strnicmp(local_21d0,"filename",8);
          pacVar20 = g_MotionFilenames + iVar15;
          if (iVar4 == 0) {
            pcVar13 = local_21ca + 2;
            while ((g_CharacterClassificationTable[(byte)(*pcVar13 + 1)] & 2) != 0) {
              pcVar13 = pcVar13 + 1;
            }
            iVar15 = sscanf(pcVar13,"\"%[^\"]\"");
            if (iVar15 != 1) {
              g_CurrentFilename = "..\\core\\skeledit.cpp";
              g_CurrentLineNumber = 0x112f;
              core_main_c_displayErrorAndQuit_FUN_00506f10
                        ("Error parsing \"filename\" statement for animation %s in %s:\n%s",pacVar20,filename);
            }
            splitpath(*pacVar20,local_1c,local_1470,local_1b70,local_c70);
            if ((local_1470[0] == '\0') && (local_1c[0] == '\0')) {
              splitpath
                        (filename,local_1c,local_1470,(char *)0x0,(char *)0x0);
              makepath(*pacVar20,local_1c,local_1470,local_1b70,local_c70);
            }
            splitpath(*pacVar20,local_20,local_1a70,local_1970,local_d70);
            if (local_d70[0] == '\0') {
              makepath
                        (*pacVar20,local_20,local_1a70,local_1970,"bon");
            }
            p_Var3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                               (*pacVar20,(char *)0x0,"rt","..\\core\\skeledit.cpp",
                                0x1139);
            if (p_Var3 == (_FILE *)0x0) {
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Can't open %s mentioned in %s",pacVar20);
              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
              goto LAB_005927ee;
            }
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var3,"..\\core\\skeledit.cpp",0x113e);
          }
          else {
            iVar15 = _strnicmp(local_21d0,"frames",6);
            if (iVar15 == 0) {
              pcVar13 = local_21ca;
              while ((g_CharacterClassificationTable[(byte)(*pcVar13 + 1)] & 2) != 0) {
                pcVar13 = pcVar13 + 1;
              }
              local_f4 = -1;
              sscanf(pcVar13," %[^-] - %s%n",local_244,local_264);
              if (local_f4 < 3) {
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Error parsing \"frames\" statement for animation %s in %s:\n%s",pSVar16,filename);
                shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
                goto LAB_005927ee;
              }
              iVar15 = core_skeledit_cpp_parseBoneParentToken_FUN_00592520
                                 (local_244,&local_104,100000,0);
              if ((iVar15 == 0) ||
                 (iVar15 = core_skeledit_cpp_parseBoneParentToken_FUN_00592520
                                     (local_264,&local_100,100000,0), iVar15 == 0))
              goto LAB_00593749;
            }
          }
        }
        goto LAB_00592a67;
      }
      if (0x77 < (this_ptr->motion_list).motion_count) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Too many motions in %s, max is %d",filename);
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
        goto LAB_005927ee;
      }
      iVar15 = sscanf(local_21ca + 3," \"%[^\"]\" : %s",local_1f78);
      if (iVar15 != 2) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't parse %s.  I don't understand this line:\n%s",filename);
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
        goto LAB_005927ee;
      }
      splitpath(local_1f78,local_28,local_1570,local_1670,local_1870);
      if ((local_1570[0] == '\0') && (local_28[0] == '\0')) {
        splitpath(filename,local_28,local_1570,(char *)0x0,(char *)0x0);
        makepath(local_1f78,local_28,local_1570,local_1670,local_1870);
      }
      splitpath(local_1f78,local_14,local_1d70,local_1c70,local_1270);
      if (local_1270[0] == '\0') {
        makepath(local_1f78,local_14,local_1d70,local_1c70,"bon");
      }
      pSVar16 = local_f8 + (this_ptr->motion_list).motion_count;
      memset(pSVar16,0,0x54c);
      splitpath
                (local_1f78,(char *)0x0,(char *)0x0,pSVar16->motion_name,(char *)0x0);
      iVar15 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0
                         (&this_ptr->motion_list,local_724,0);
      pSVar16->state_index = iVar15;
      if (iVar15 < 0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Invalid state %s for animation %s in %s",local_724,local_1f78);
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
        goto LAB_005927ee;
      }
      aiStack_2720[(this_ptr->motion_list).motion_count] = 0;
      pcVar13 = local_1f78;
      pcVar18 = g_MotionFilenames[(this_ptr->motion_list).motion_count];
      do {
        cVar2 = *pcVar13;
        *pcVar18 = cVar2;
        if (cVar2 == '\0') break;
        cVar2 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        pcVar18[1] = cVar2;
        pcVar18 = pcVar18 + 2;
      } while (cVar2 != '\0');
      local_108 = 1;
    } while( true );
  }
  pcVar13 = "Can't parse home pose filename from %s.  The state count is probably wrong.";
LAB_005927df:
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar13);
LAB_005927ee:
  if (local_118 != 0) {
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  }
  if (local_11c != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_11c,"..\\core\\skeledit.cpp",0x1052);
  }
  return 0;
LAB_00593749:
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Error parsing \"frames\" statement for animation %s in %s:\n%s",pSVar16,filename);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_2ca8,0);
  goto LAB_005927ee;
}
