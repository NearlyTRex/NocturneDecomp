// Name: core_skeledit.cpp_FUN_00592690
// Address: 00592690
// Address Range: [[00592690, 00595f23]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00592690()

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

uint core_skeledit_cpp_FUN_00592690(void)

{
  char cVar1;
  CEditorTools *this_ptr;
  CBoneStructure *this_ptr_00;
  FILE *pFVar2;
  int iVar3;
  int iVar4;
  int extraout_EAX;
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
  float fVar15;
  CQuaternion4f *pCVar16;
  BADSPACEBASE *in_ESP;
  char *pcVar17;
  int *piVar18;
  SMotionTransition *dest;
  float *pfVar19;
  float *pfVar20;
  CMatrix3x4f *pCVar21;
  CQuaternion4f *pCVar22;
  bool bVar23;
  byte bVar24;
  double dVar25;
  CSkeleton *in_stack_0000000c;
  char *in_stack_00000010;
  ulonglong uVar26;
  CBoneStructure *in_stack_fffeeb96;
  uint in_stack_fffeeb9a;
  uint in_stack_fffeeb9e;
  uint in_stack_fffeeba2;
  uint in_stack_fffeeba6;
  int iStack_decc;
  char acStack_dec8 [32];
  int aiStack_dea8 [6793];
  int iStack_7484;
  CMatrix3x4f aCStack_742c [381];
  CPickList CStack_2ca0;
  int aiStack_28f8 [120];
  int aiStack_2718 [120];
  int aiStack_2538 [120];
  char acStack_2358 [400];
  char local_21c8 [6];
  char acStack_21c2 [294];
  char local_209c [2];
  char local_209a [15];
  byte abStack_208b [283];
  char acStack_1f70 [260];
  char acStack_1e6c [260];
  char acStack_1d68 [256];
  char acStack_1c68 [256];
  char acStack_1b68 [256];
  char acStack_1a68 [112];
  float afStack_19f8 [36];
  char acStack_1968 [256];
  char acStack_1868 [256];
  char acStack_1768 [256];
  char acStack_1668 [256];
  char acStack_1568 [256];
  char acStack_1468 [256];
  char acStack_1368 [256];
  char acStack_1268 [100];
  float afStack_1204 [39];
  char acStack_1168 [256];
  char acStack_1068 [256];
  char acStack_f68 [256];
  char acStack_e68 [256];
  char acStack_d68 [256];
  char acStack_c68 [256];
  char acStack_b68 [200];
  char acStack_aa0 [200];
  char acStack_9d8 [200];
  char acStack_910 [199];
  char acStack_849 [201];
  byte auStack_780 [100];
  byte auStack_71c [100];
  byte auStack_6b8 [100];
  byte auStack_654 [100];
  byte auStack_5f0 [100];
  byte auStack_58c [100];
  byte auStack_528 [100];
  byte auStack_4c4 [100];
  byte auStack_460 [52];
  CMatrix3x4f CStack_42c;
  CMatrix3x4f CStack_3fc;
  CMatrix3x4f CStack_3cc;
  CMatrix3x4f CStack_39c;
  float afStack_36c [12];
  float afStack_33c [12];
  float afStack_30c [12];
  CQuaternion4f aCStack_2dc [3];
  byte auStack_2ac [40];
  byte auStack_284 [40];
  byte auStack_25c [32];
  byte auStack_23c [32];
  float fStack_21c;
  float afStack_218 [7];
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  CVector3f local_1d8;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  CVector3f local_1b4;
  CMatrix3x3f CStack_1a8;
  CVector3f local_184;
  CMatrix3x3f local_178;
  CVector3f local_154;
  CVector3f local_148;
  float local_13c;
  float local_138;
  float local_134;
  CVector3f local_130;
  double local_124;
  double local_11c;
  FILE *local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  int local_100;
  char *local_fc;
  char *local_f8;
  char *local_f4;
  SMotion *local_f0;
  int local_ec;
  int local_e8;
  SMotion *local_e4;
  char *local_e0;
  int local_dc;
  uint local_d8;
  uint local_d4;
  FILE *local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  int local_c0;
  int local_bc;
  CBoneStructure *local_b8;
  byte local_b0 [24];
  float local_98;
  SMotionTransition *local_94;
  float local_90;
  float local_8c;
  float local_88;
  float *local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  uint local_6c;
  int local_68;
  float local_64;
  int local_60;
  int local_5c;
  uint local_58;
  int local_54;
  byte local_50 [28];
  float local_34;
  int local_30;
  float local_2c;
  float local_24;
  char local_20 [4];
  char local_1c [4];
  char local_18 [4];
  char local_14 [4];
  char local_10 [4];
  char acStack_c [4];
  
  bVar24 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x11418);
  core_skeleton_cpp_CSkeleton_free_FUN_00599a50(in_stack_0000000c);
  pFVar2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (in_stack_00000010,(char *)0x0,"rt","..\\core\\skeledit.cpp",
                      0x103c);
  local_114 = pFVar2;
  if (pFVar2 == (FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s");
    return 0;
  }
  local_110 = 0.0;
  iVar13 = 1;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Reading state list from %s");
  do {
    iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar13 = iVar13 + -1, 0 < iVar13));
  local_10c = 0.0;
  crt_stdio_c_fscanf_FUN_005fe7c0(local_114,"%d\n");
  if (0x50 < (int)local_10c) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x104a;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("%s has %d states, max is %d",in_stack_00000010,local_10c);
  }
  pFVar2 = local_114;
  iVar13 = 1;
  do {
    iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar13 = iVar13 + -1, 0 < iVar13));
  (in_stack_0000000c->motion_list).state_count = 0;
  if ((in_stack_0000000c->motion_list).state_count < (int)local_10c) {
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0(local_114,"%s\n");
      if ((in_stack_0000000c->motion_list).state_names[(in_stack_0000000c->motion_list).state_count]
          [0] == '/') {
        pcVar11 = "State name begins with '/', state count is probably wrong in %s";
        goto LAB_005927df;
      }
      iVar13 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0
                         (&in_stack_0000000c->motion_list);
      if (-1 < iVar13) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Duplicate state %s in %s",
                   (in_stack_0000000c->motion_list).state_names +
                   (in_stack_0000000c->motion_list).state_count);
        goto LAB_005927ee;
      }
      iVar13 = (in_stack_0000000c->motion_list).state_count + 1;
      (in_stack_0000000c->motion_list).state_count = iVar13;
    } while (iVar13 < (int)local_10c);
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Reading home pose filename");
  pFVar2 = local_114;
  iVar3 = 1;
  pcVar11 = "(file error)";
  pcVar17 = acStack_1e6c;
  for (iVar13 = 0x41; iVar13 != 0; iVar13 = iVar13 + -1) {
    *(uint *)pcVar17 = *(uint *)pcVar11;
    pcVar11 = pcVar11 + ((uint)bVar24 * -2 + 1) * 4;
    pcVar17 = pcVar17 + ((uint)bVar24 * -2 + 1) * 4;
  }
  do {
    iVar13 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
    if (iVar13 < 0) break;
  } while ((iVar13 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  iVar13 = crt_stdio_c_fscanf_FUN_005fe7c0(local_114,"\"%[^\"]\"\n");
  if (iVar13 == 1) {
    crt_string_c_splitpath_FUN_005ff178(acStack_1e6c,local_10,acStack_1068,acStack_f68,acStack_1168)
    ;
    if ((acStack_1068[0] == '\0') && (local_10[0] == '\0')) {
      crt_string_c_splitpath_FUN_005ff178
                (in_stack_00000010,local_10,acStack_1068,(char *)0x0,(char *)0x0);
      crt_file_c_makepath_FUN_005febfc(acStack_1e6c,local_10,acStack_1068,acStack_f68,acStack_1168);
    }
    crt_string_c_splitpath_FUN_005ff178(acStack_1e6c,local_1c,acStack_1368,acStack_e68,acStack_1768)
    ;
    if (acStack_1768[0] == '\0') {
      crt_file_c_makepath_FUN_005febfc
                (acStack_1e6c,local_1c,acStack_1368,acStack_e68,"pos");
    }
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Reading bone heirarchy and building reorientation matrices from %s");
    core_skeledit_cpp_CBoneStructure_importBON_FUN_0058a3d0
              ((CBoneStructure *)acStack_1e6c,(char *)in_stack_fffeeb96);
    core_skeledit_cpp_FUN_0058aeb0();
    pFVar2 = local_114;
    iVar13 = 1;
    core_skeledit_cpp_FUN_00595f30();
    do {
      iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
      if (iVar3 < 0) break;
    } while ((iVar3 != 10) || (iVar13 = iVar13 + -1, 0 < iVar13));
    local_108 = (float)crt_stdio_c_ftell_FUN_00601560(local_114);
    this_ptr = g_CEditorToolsPtr;
    local_104 = 0.0;
    (in_stack_0000000c->motion_list).motion_count = 0;
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (this_ptr,"Pass 1: Building list of animation files and getting total frame count");
    local_fc = (char *)0x0;
    DAT_03670b5c = 0;
    local_f8 = (char *)0x1869f;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_2ca0);
    local_100 = 0;
    local_f0 = (in_stack_0000000c->motion_list).motions;
LAB_00592a67:
    do {
      iVar13 = local_100;
      local_c0 = core_skeledit_cpp_readNonEmptyLine_FUN_005895f0
                           ((char *)local_114,(FILE *)0x0,(int)in_stack_fffeeb96);
      if (((local_c0 == 0) ||
          (iVar3 = crt_string_c_strnicmp_FUN_005ff070(local_21c8,"animation",9), iVar3 == 0
          )) && (iVar13 != 0)) {
        local_f4 = &DAT_0365caf8 + (in_stack_0000000c->motion_list).motion_count * 0x104;
        pCVar7 = (CBoneStructure *)
                 shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (local_f4,(char *)0x0,"rt","..\\core\\skeledit.cpp",0x10a4);
        if (pCVar7 == (CBoneStructure *)0x0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Can't open %s mentioned in %s",local_f4);
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,in_stack_fffeeb9e,
                     in_stack_fffeeba2,in_stack_fffeeba6);
          goto LAB_005927ee;
        }
        iVar13 = 1;
        do {
          iVar3 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)pCVar7);
          if (iVar3 < 0) break;
        } while ((iVar3 != 10) || (iVar13 = iVar13 + -1, 0 < iVar13));
        crt_stdio_c_fscanf_FUN_005fe7c0((FILE *)pCVar7,"%d\n");
        core_skeledit_cpp_CBoneStructure_readBONheader_FUN_0058a4a0
                  (pCVar7,(FILE *)local_50,&in_stack_fffeeb96->bone_count);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)pCVar7,"..\\core\\skeledit.cpp",0x10b8);
        if (0x1869e < (int)local_fc) {
          local_fc = (char *)(local_50._0_4_ + -1);
        }
        if (0x1869e < (int)local_f8) {
          local_f8 = (char *)(local_50._0_4_ + -1);
        }
        if ((((int)local_fc < 0) || ((int)local_f8 < (int)local_fc)) ||
           ((int)local_50._0_4_ <= (int)local_f8)) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Invalid frame start/end for animation %s in %s",local_f4);
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,in_stack_fffeeb9e,
                     in_stack_fffeeba2,in_stack_fffeeba6);
          goto LAB_005927ee;
        }
        iVar13 = core_skeledit_cpp_FUN_0058b200();
        if (iVar13 == 0) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_2ca0.base_strlist,local_f4);
        }
        iVar13 = (in_stack_0000000c->motion_list).motion_count;
        local_f0[iVar13].frame_start = (int)local_104;
        local_104 = (float)((int)local_104 + (int)(local_f8 + (1 - (int)local_fc)));
        local_f0[iVar13].frame_count = (int)(local_f8 + (1 - (int)local_fc));
        aiStack_28f8[(in_stack_0000000c->motion_list).motion_count] = (int)local_fc;
        local_100 = 0;
        (in_stack_0000000c->motion_list).motion_count =
             (in_stack_0000000c->motion_list).motion_count + 1;
        local_fc = (char *)0x0;
        local_f8 = (char *)0x1869f;
      }
      if (local_c0 == 0) {
        if ((in_stack_0000000c->motion_list).motion_count < 1) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0x1159;
          core_main_c_displayErrorAndQuit_FUN_00506f10("No motions defined in %s");
        }
        if (0 < CStack_2ca0.base_strlist.item_count) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_2ca0.base_strlist,acStack_1e6c);
          iVar13 = 0;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    (&CStack_2ca0.base_strlist,"(Dump this list to the clipboard)");
          while( true ) {
            crt_stdio_c_sprintf_FUN_005fdbd0(acStack_2358,"The following motions do not have the same skeleton\nheirarchy as the home pose file\n%s\nPress Enter to view heirarchy, or ESC when done viewing list.\n");
            iVar13 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                               (&CStack_2ca0,acStack_2358,iVar13,0);
            if (iVar13 < 0) break;
            if (iVar13 == CStack_2ca0.base_strlist.item_count + -1) {
              pcVar11 = &DAT_0366b650;
              for (iVar3 = 0; iVar3 < CStack_2ca0.base_strlist.item_count + -1; iVar3 = iVar3 + 1) {
                shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                          (&CStack_2ca0.base_strlist,iVar3);
                iVar4 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar11,"%s\r\n");
                pcVar11 = pcVar11 + iVar4;
              }
              shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0
                        (g_CEditorToolsPtr,&DAT_0366b650);
            }
            else {
              pCVar7 = (CBoneStructure *)
                       shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                                 (&CStack_2ca0.base_strlist,iVar13);
              core_skeledit_cpp_CBoneStructure_importBON_FUN_0058a3d0
                        (pCVar7,(char *)in_stack_fffeeb96);
              core_skeledit_cpp_FUN_0058afe0();
            }
          }
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,in_stack_fffeeb9e,
                     in_stack_fffeeba2,in_stack_fffeeba6);
          return 0;
        }
        core_skeleton_cpp_CSkeleton_allocMemory_FUN_00599910
                  (in_stack_0000000c,iStack_decc,(int)local_104);
        iVar13 = 0;
        if (0 < in_stack_0000000c->bone_count) {
          pcVar11 = acStack_dec8;
          local_50._8_4_ = in_stack_0000000c;
          pSVar9 = in_stack_0000000c->bone_list;
          do {
            pSVar10 = pSVar9 + 1;
            ((SBone *)(local_50._8_4_ + 0x2855c))->parent_index = aiStack_dea8[iVar13 * 0x21];
            iVar13 = iVar13 + 1;
            pcVar17 = pcVar11;
            do {
              cVar1 = *pcVar17;
              pSVar9->bone_name[0] = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar17[1];
              pcVar17 = pcVar17 + 2;
              pSVar9->bone_name[1] = cVar1;
              pSVar9 = (SBone *)(pSVar9->bone_name + 2);
            } while (cVar1 != '\0');
            pcVar11 = pcVar11 + 0x84;
            local_50._8_4_ = (CSkeleton *)(((CMotionList *)local_50._8_4_)->state_names[1] + 2);
            pSVar9 = pSVar10;
          } while (iVar13 < in_stack_0000000c->bone_count);
        }
        crt_stdio_c_fseek_FUN_005ffacc(local_114,(long)local_108,0);
        local_30 = 0;
        shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                  (g_CEditorToolsPtr,"Importing skeleton animation frames...");
        local_110 = 1.4013e-45;
        if (0 < (in_stack_0000000c->motion_list).motion_count) {
          local_50._24_4_ = (in_stack_0000000c->motion_list).motions;
          local_50._20_4_ = &DAT_0365caf8;
          local_34 = 0.0;
          do {
            local_e4 = (SMotion *)local_50._24_4_;
            local_e0 = (char *)local_50._20_4_;
            local_24 = local_104;
            shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                      (g_CEditorToolsPtr,(float)*(int *)(local_50._24_4_ + 0x60),
                       (float)(int)local_104);
            pFVar2 = local_114;
            do {
              iVar13 = core_skeledit_cpp_readNonEmptyLine_FUN_005895f0
                                 ((char *)pFVar2,(FILE *)&DAT_00000001,(int)in_stack_fffeeb96);
              if (iVar13 == 0) {
                g_CurrentFilename = "..\\core\\skeledit.cpp";
                g_CurrentLineNumber = 0x11a5;
                core_main_c_displayErrorAndQuit_FUN_00506f10("Error parsing file!");
              }
              iVar13 = crt_string_c_strnicmp_FUN_005ff070(local_209c,"animation",9);
              fVar15 = local_34;
            } while (iVar13 != 0);
            local_e4->transition_count = 0;
            local_e4->signal_count = 0;
            local_e4->fps = 30.0;
            local_e4->exit_forward_cmd = 1;
            local_e4->exit_forward_tween_time = 0.0;
            local_e4->exit_forward_set_new_state = 0;
            local_dc = 0;
            local_e4->exit_forward_from_frame = local_e4->frame_count;
            local_d8 = 4;
            local_e4->exit_forward_to_motion = local_30;
            local_d4 = 0;
            local_e4->exit_backward_to_frame = 0.0;
            local_24 = (float)(local_e4->frame_count + -1);
            local_e4->marker_count = 0;
            local_e4->exit_backward_to_motion = local_30;
            local_e4->exit_forward_to_frame = (float)(int)local_24;
            local_cc = -99999.0;
            local_1b8 = -99999.0;
            local_1bc = -99999.0;
            local_1c0 = -99999.0;
            local_c4 = 0.0;
            local_d0 = (FILE *)0x0;
            local_bc = 0;
            local_8c = (float)(local_e4->frame_count + -1);
            local_c8 = -99998.0;
            local_94 = local_e4->transitions;
            local_e8 = 0;
            local_84 = &local_e4->exit_forward_tween_time;
            local_13c = 0.0;
            local_138 = 0.0;
            local_b0._16_4_ = &local_e4->fps;
            pfVar19 = (float *)&DAT_00665968;
            pCVar21 = &CStack_42c;
            for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
              pCVar21->m[0].w = *pfVar19;
              pfVar19 = pfVar19 + (uint)bVar24 * -2 + 1;
              pCVar21 = (CMatrix3x4f *)((int)pCVar21 + ((uint)bVar24 * -2 + 1) * 4);
            }
            local_134 = 0.0;
            local_b0._12_4_ = fVar15;
            if (0 < *(int *)((int)aiStack_2718 + (int)fVar15)) {
              do {
                core_skeledit_cpp_readNonEmptyLine_FUN_005895f0
                          ((char *)local_114,(FILE *)&DAT_00000001,(int)in_stack_fffeeb96);
                iVar13 = crt_string_c_strnicmp_FUN_005ff070(local_209c,"fps",3);
                if (iVar13 == 0) {
                  pcVar11 = local_209a;
                  do {
                    pcVar11 = pcVar11 + 1;
                  } while ((g_CharacterClassificationTable[(byte)(*pcVar11 + 1)] & 2U) != 0);
                  iVar13 = crt_stdio_c_sscanf_FUN_0060013c(pcVar11,"%f");
                  if (iVar13 != 1) {
                    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                              (g_CEditorToolsPtr,"Error parsing \"fps\" statement for animation %s in %s:\n%s",local_e4,
                               in_stack_00000010);
                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                              (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,
                               in_stack_fffeeb9e,in_stack_fffeeba2,in_stack_fffeeba6);
                    goto LAB_005927ee;
                  }
                }
                else {
                  iVar13 = crt_string_c_strnicmp_FUN_005ff070(local_209c,"if",2);
                  if (iVar13 == 0) {
                    if (0x2c < local_e4->transition_count) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Too many transitions in animation %s in %s, max is %d",local_e4,
                                 in_stack_00000010);
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,
                                 in_stack_fffeeb9e,in_stack_fffeeba2,in_stack_fffeeba6);
                      goto LAB_005927ee;
                    }
                    local_b0._20_4_ = local_209a;
                    do {
                      local_b0._20_4_ = local_b0._20_4_ + 1;
                    } while ((g_CharacterClassificationTable[(byte)(*(char *)local_b0._20_4_ + 1)] &
                             2U) != 0);
                    local_98 = -NAN;
                    crt_stdio_c_sscanf_FUN_0060013c
                              ((char *)local_b0._20_4_,"%s %s%n",auStack_460,auStack_284);
                    if ((int)local_98 < 3) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Error parsing \"if\" statement for animation %s in %s:\n%s",local_e4,
                                 in_stack_00000010);
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,
                                 in_stack_fffeeb9e,in_stack_fffeeba2,in_stack_fffeeba6);
                      goto LAB_005927ee;
                    }
                    dest = local_94 + local_e4->transition_count;
                    crt_memory_c_memset_FUN_005fde40(dest,0,0x18);
                    iVar13 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0
                                       (&in_stack_0000000c->motion_list);
                    dest->desired_state = iVar13;
                    if (iVar13 < 0) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Invalid desired state \"%s\" in \"if\" statement for animation %s in %s:\n%s",auStack_460,
                                 local_e4,in_stack_00000010);
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,
                                 in_stack_fffeeb9e,in_stack_fffeeba2,in_stack_fffeeba6);
                      goto LAB_005927ee;
                    }
                    iVar13 = 0;
                    pSVar14 = local_e4;
                    if (0 < local_e4->transition_count) {
                      do {
                        if (dest->desired_state == pSVar14->transitions[0].desired_state) {
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Duplicate if %s's for animation %s in %s",
                                     auStack_460,local_e4);
                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                    (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,
                                     in_stack_fffeeb9e,in_stack_fffeeba2,in_stack_fffeeba6);
                          goto LAB_005927ee;
                        }
                        iVar13 = iVar13 + 1;
                        pSVar14 = (SMotion *)(pSVar14->motion_name + 0x18);
                      } while (iVar13 < local_e4->transition_count);
                    }
                    iVar13 = core_skeledit_cpp_FUN_005925c0();
                    dest->cmd = iVar13;
                    if (iVar13 == 0) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Invalid transition command in \"if %s\" statement for animation %s in %s:\n%s",auStack_460,
                                 local_e4,in_stack_00000010);
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,
                                 in_stack_fffeeb9e,in_stack_fffeeba2,in_stack_fffeeba6);
                      goto LAB_005927ee;
                    }
                    pcVar11 = (char *)(local_b0._20_4_ + (int)local_98);
                    while ((g_CharacterClassificationTable[(byte)(*pcVar11 + 1)] & 2U) != 0) {
                      pcVar11 = pcVar11 + 1;
                    }
                    local_98 = -NAN;
                    crt_stdio_c_sscanf_FUN_0060013c(pcVar11,"\"%[^\"]\"%n",acStack_910);
                    if ((int)local_98 < 0) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Error parsing \"if %s\" statement parms for animation %s in %s:\n%s",auStack_460,
                                 local_e4,in_stack_00000010);
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,
                                 in_stack_fffeeb9e,in_stack_fffeeba2,in_stack_fffeeba6);
                      goto LAB_005927ee;
                    }
                    crt_string_c_splitpath_FUN_005ff178
                              (acStack_910,(char *)0x0,(char *)0x0,acStack_aa0,(char *)0x0);
                    iVar13 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                                       (&in_stack_0000000c->motion_list);
                    dest->to_motion_number = iVar13;
                    if (iVar13 < 0) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Invalid destination animation for \"if %s\" statement for animation %s in %s:\n%s",auStack_460,
                                 local_e4,in_stack_00000010);
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,
                                 in_stack_fffeeb9e,in_stack_fffeeba2,in_stack_fffeeba6);
                      goto LAB_005927ee;
                    }
                    pcVar11 = pcVar11 + (int)local_98;
                    while ((g_CharacterClassificationTable[(byte)(*pcVar11 + 1)] & 2U) != 0) {
                      pcVar11 = pcVar11 + 1;
                    }
                    if (*pcVar11 == '[') {
                      local_98 = -NAN;
                      crt_stdio_c_sscanf_FUN_0060013c(pcVar11,"[ %[^]] ]%n",auStack_780);
                      if ((int)local_98 < 0) {
                        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                  (g_CEditorToolsPtr,"Can't parse destination frame number for \"if %s\" statement for animation %s in %s:\n%s",auStack_460
                                   ,local_e4,in_stack_00000010);
                        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                  (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,
                                   in_stack_fffeeb9e,in_stack_fffeeba2,in_stack_fffeeba6);
                        goto LAB_005927ee;
                      }
                      iVar13 = core_skeledit_cpp_FUN_00592520();
                      if (iVar13 == 0) {
                        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                  (g_CEditorToolsPtr,"Can't parse destination frame number for \"if %s\" statement for animation %s in %s:\n%s",auStack_460
                                   ,local_e4,in_stack_00000010);
                        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                  (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,
                                   in_stack_fffeeb9e,in_stack_fffeeba2,in_stack_fffeeba6);
                        goto LAB_005927ee;
                      }
                      local_24 = local_90;
                      dest->to_frame_number = (float)(int)local_90;
                      pcVar11 = pcVar11 + (int)local_98;
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
                      iVar13 = crt_string_c_strnicmp_FUN_005ff070(pcVar11,"over",4);
                      if (iVar13 == 0) {
                        local_98 = -NAN;
                        crt_stdio_c_sscanf_FUN_0060013c(pcVar11,"%*s%f%n",&dest->tween_time);
                        if ((int)local_98 < 0) {
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Can't parse tween time for \"if %s\" statement for animation %s in %s:\n%s",
                                     auStack_460,local_e4,in_stack_00000010);
                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                    (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,
                                     in_stack_fffeeb9e,in_stack_fffeeba2,in_stack_fffeeba6);
                          goto LAB_005927ee;
                        }
                        local_11c = (double)dest->tween_time;
                        if ((local_11c < 0.0) || (99 < local_11c)) {
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Invalid tween time for \"if %s\" statement for animation %s in %s:\n%s",
                                     auStack_460,local_e4,in_stack_00000010);
                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                    (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,
                                     in_stack_fffeeb9e,in_stack_fffeeba2,in_stack_fffeeba6);
                          goto LAB_005927ee;
                        }
                        pcVar11 = pcVar11 + (int)local_98;
                        while ((g_CharacterClassificationTable[(byte)(*pcVar11 + 1)] & 2U) != 0) {
                          pcVar11 = pcVar11 + 1;
                        }
                      }
                    }
                    iVar13 = crt_string_c_strnicmp_FUN_005ff070(pcVar11,"keepState",9);
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
                                (g_CEditorToolsPtr,"Extra parms in \"if %s\" statement for animation %s in %s:\n%s\nExtra parms: \"%s\"",auStack_460,
                                 local_e4,in_stack_00000010,local_209c);
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,
                                 in_stack_fffeeb9e,in_stack_fffeeba2,in_stack_fffeeba6);
                      goto LAB_005927ee;
                    }
                    local_e4->transition_count = local_e4->transition_count + 1;
                  }
                  else {
                    iVar13 = crt_string_c_strnicmp_FUN_005ff070(local_209c,"->",2);
                    if (iVar13 == 0) {
                      pcVar11 = local_209a;
                      while ((g_CharacterClassificationTable[(byte)(*pcVar11 + 1)] & 2U) != 0) {
                        pcVar11 = pcVar11 + 1;
                      }
                      iVar13 = crt_string_c_strnicmp_FUN_005ff070(pcVar11,"(loop)",6);
                      pcVar17 = pcVar11 + 6;
                      if (iVar13 == 0) {
                        local_e4->exit_forward_to_frame = 0.0;
                        local_e4->exit_forward_to_motion = local_30;
                        while ((g_CharacterClassificationTable[(byte)(*pcVar17 + 1)] & 2U) != 0) {
                          pcVar17 = pcVar17 + 1;
                        }
                      }
                      else {
                        iVar13 = crt_string_c_strnicmp_FUN_005ff070(pcVar11,"(stop)",6);
                        if (iVar13 == 0) {
                          local_e4->exit_forward_to_motion = local_30;
                          local_24 = (float)(local_e4->frame_count + -1);
                          local_e4->exit_forward_to_frame = (float)(int)local_24;
                          while ((g_CharacterClassificationTable[(byte)(*pcVar17 + 1)] & 2U) != 0) {
                            pcVar17 = pcVar17 + 1;
                          }
                        }
                        else {
                          local_5c = -1;
                          crt_stdio_c_sscanf_FUN_0060013c(pcVar11," \"%[^\"]\" %n",acStack_b68);
                          if (local_5c < 0) {
                            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                      (g_CEditorToolsPtr,"Error parsing \"->\" statement parms for animation %s in %s:\n%s",
                                       local_e4,in_stack_00000010);
                            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                      (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,
                                       in_stack_fffeeb9e,in_stack_fffeeba2,in_stack_fffeeba6);
                            goto LAB_005927ee;
                          }
                          crt_string_c_splitpath_FUN_005ff178
                                    (acStack_b68,(char *)0x0,(char *)0x0,acStack_9d8,(char *)0x0);
                          iVar13 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                                             (&in_stack_0000000c->motion_list);
                          local_e4->exit_forward_to_motion = iVar13;
                          if (iVar13 < 0) {
                            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                      (g_CEditorToolsPtr,"Invalid destination animation for \"->\" statement for animation %s in %s:\n%s",
                                       local_e4,in_stack_00000010);
                            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                      (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,
                                       in_stack_fffeeb9e,in_stack_fffeeba2,in_stack_fffeeba6);
                            goto LAB_005927ee;
                          }
                          pcVar17 = pcVar11 + local_5c;
                          while ((g_CharacterClassificationTable[(byte)(*pcVar17 + 1)] & 2U) != 0) {
                            pcVar17 = pcVar17 + 1;
                          }
                          if (*pcVar17 == '[') {
                            local_5c = -1;
                            crt_stdio_c_sscanf_FUN_0060013c(pcVar17,"[ %[^]] ]%n",auStack_5f0);
                            if (local_5c < 0) {
                              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                        (g_CEditorToolsPtr,"Can't parse destination frame number for \"->\" statement for animation %s in %s:\n%s",
                                         local_e4,in_stack_00000010);
                              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                        (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,
                                         in_stack_fffeeb9e,in_stack_fffeeba2,in_stack_fffeeba6);
                              goto LAB_005927ee;
                            }
                            iVar13 = core_skeledit_cpp_FUN_00592520();
                            if (iVar13 == 0) {
                              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                        (g_CEditorToolsPtr,"Can't parse destination frame number for \"->\" statement for animation %s in %s:\n%s",
                                         local_e4,in_stack_00000010);
                              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                        (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,
                                         in_stack_fffeeb9e,in_stack_fffeeba2,in_stack_fffeeba6);
                              goto LAB_005927ee;
                            }
                            local_24 = local_88;
                            local_e4->exit_forward_to_frame = (float)(int)local_88;
                            pcVar17 = pcVar17 + local_5c;
                            while ((g_CharacterClassificationTable[(byte)(*pcVar17 + 1)] & 2U) != 0)
                            {
                              pcVar17 = pcVar17 + 1;
                            }
                          }
                          else {
                            local_e4->exit_forward_to_frame = 0.0;
                          }
                          if (*pcVar17 != '\0') {
                            local_5c = -1;
                            crt_stdio_c_sscanf_FUN_0060013c(pcVar17,"%s%n",auStack_2ac);
                            if (local_5c < 1) {
                              g_CurrentFilename = "..\\core\\skeledit.cpp";
                              g_CurrentLineNumber = 0x129f;
                              core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze!");
                            }
                            iVar13 = core_skeledit_cpp_FUN_005925c0();
                            if (iVar13 != 0) {
                              local_e4->exit_forward_cmd = iVar13;
                              pcVar17 = pcVar17 + local_5c;
                              while ((g_CharacterClassificationTable[(byte)(*pcVar17 + 1)] & 2U) !=
                                     0) {
                                pcVar17 = pcVar17 + 1;
                              }
                              if (local_e4->exit_forward_cmd == 2) {
                                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                          (g_CEditorToolsPtr,"Invalid transition command in \"->\" statement for animation %s in %s:\n%s",
                                           local_e4,in_stack_00000010);
                                shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                          (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,
                                           in_stack_fffeeb9e,in_stack_fffeeba2,in_stack_fffeeba6);
                                goto LAB_005927ee;
                              }
                              local_e4->exit_forward_tween_time = 0.0;
                              switch(local_e4->exit_forward_cmd) {
                              case 3:
                              case 4:
                              case 5:
                              case 6:
                                iVar13 = crt_string_c_strnicmp_FUN_005ff070
                                                   (pcVar17,"over",4);
                                if (iVar13 == 0) {
                                  local_5c = -1;
                                  crt_stdio_c_sscanf_FUN_0060013c(pcVar17,"%*s%f%n",local_84)
                                  ;
                                  if (local_5c < 0) {
                                    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                              (g_CEditorToolsPtr,"Can't parse tween time for \"->\" statement for animation %s in %s:\n%s"
                                               ,local_e4,in_stack_00000010);
                                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                              (&CStack_2ca0,0,(uint)in_stack_fffeeb96,
                                               in_stack_fffeeb9a,in_stack_fffeeb9e,in_stack_fffeeba2
                                               ,in_stack_fffeeba6);
                                    goto LAB_005927ee;
                                  }
                                  local_124 = (double)local_e4->exit_forward_tween_time;
                                  if ((local_124 < 0.0) || (99 < local_124)) {
                                    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                              (g_CEditorToolsPtr,"Invalid tween time for \"->\" statement for animation %s in %s:\n%s"
                                               ,local_e4,in_stack_00000010);
                                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                              (&CStack_2ca0,0,(uint)in_stack_fffeeb96,
                                               in_stack_fffeeb9a,in_stack_fffeeb9e,in_stack_fffeeba2
                                               ,in_stack_fffeeba6);
                                    goto LAB_005927ee;
                                  }
                                  pcVar17 = pcVar17 + local_5c;
                                  while ((g_CharacterClassificationTable[(byte)(*pcVar17 + 1)] & 2U)
                                         != 0) {
                                    pcVar17 = pcVar17 + 1;
                                  }
                                  if ((local_e4->exit_forward_cmd == 5) ||
                                     (local_e4->exit_forward_cmd == 6)) {
                                    dVar25 = crt_math_c_round_FUN_005fe6b0
                                                       ((double)((float)local_e4->frame_count -
                                                                local_e4->exit_forward_tween_time *
                                                                local_e4->fps));
                                    *(int *)(extraout_EAX + 0x28) = (int)ROUND(dVar25);
                                    if (*(int *)(extraout_EAX + 0x28) < 0) {
                                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                (g_CEditorToolsPtr,
                                                 "Tween time for \"->\" statement is longer than animation time in animation %s in %s:\n%s",local_e4,
                                                 in_stack_00000010,local_209c);
                                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                (&CStack_2ca0,0,(uint)in_stack_fffeeb96,
                                                 in_stack_fffeeb9a,in_stack_fffeeb9e,
                                                 in_stack_fffeeba2,in_stack_fffeeba6);
                                      goto LAB_005927ee;
                                    }
                                  }
                                }
                              }
                            }
                            iVar13 = crt_string_c_strnicmp_FUN_005ff070
                                               (pcVar17,"keepState",9);
                            if (iVar13 == 0) {
                              local_e4->exit_forward_set_new_state = 1;
                              pcVar17 = pcVar17 + 9;
                              while ((g_CharacterClassificationTable[(byte)(*pcVar17 + 1)] & 2U) !=
                                     0) {
                                pcVar17 = pcVar17 + 1;
                              }
                            }
                            else {
                              local_e4->exit_forward_set_new_state = 0;
                            }
                          }
                        }
                      }
                      while ((g_CharacterClassificationTable[(byte)(*pcVar17 + 1)] & 2U) != 0) {
                        pcVar17 = pcVar17 + 1;
                      }
                      if (*pcVar17 != '\0') {
                        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                  (g_CEditorToolsPtr,"Extra parms in \"->\" statement for animation %s in %s:\n%s\nExtra parms: \"%s\"",local_e4,
                                   in_stack_00000010,local_209c);
                        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                  (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,
                                   in_stack_fffeeb9e,in_stack_fffeeba2,in_stack_fffeeba6);
                        goto LAB_005927ee;
                      }
                    }
                    else {
                      iVar13 = crt_string_c_strnicmp_FUN_005ff070(local_209c,"signal",6);
                      if (iVar13 == 0) {
                        pcVar11 = local_209a + 4;
                        while ((g_CharacterClassificationTable[(byte)(*pcVar11 + 1)] & 2U) != 0) {
                          pcVar11 = pcVar11 + 1;
                        }
                        if (0xe < local_e4->signal_count) {
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Too many signals in animation %s in %s, max is %d",local_e4,
                                     in_stack_00000010);
                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                    (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,
                                     in_stack_fffeeb9e,in_stack_fffeeba2,in_stack_fffeeba6);
                          goto LAB_005927ee;
                        }
                        iVar13 = crt_stdio_c_sscanf_FUN_0060013c(pcVar11,"%d %*s %s",&local_80)
                        ;
                        if (iVar13 != 2) {
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Error parsing \"signal\" statement for animation %s in %s:\n%s",local_e4,
                                     in_stack_00000010);
                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                    (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,
                                     in_stack_fffeeb9e,in_stack_fffeeba2,in_stack_fffeeba6);
                          goto LAB_005927ee;
                        }
                        iVar13 = core_skeledit_cpp_FUN_00592520();
                        if (iVar13 == 0) {
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Invalid frame number in \"signal\" statement for animation %s in %s:\n%s",local_e4,
                                     in_stack_00000010);
                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                    (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,
                                     in_stack_fffeeb9e,in_stack_fffeeba2,in_stack_fffeeba6);
                          goto LAB_005927ee;
                        }
                        if (local_80 == 0) {
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Signal value cannot be 0 in \"signal\" statement for animation %s in %s:\n%s",local_e4,
                                     in_stack_00000010);
                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                    (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,
                                     in_stack_fffeeb9e,in_stack_fffeeba2,in_stack_fffeeba6);
                          goto LAB_005927ee;
                        }
                        local_e4->signals[local_e4->signal_count].value = local_80;
                        local_e4->signals[local_e4->signal_count].frame_number = local_7c;
                        local_e4->signal_count = local_e4->signal_count + 1;
                      }
                      else {
                        iVar13 = crt_string_c_strnicmp_FUN_005ff070(local_209c,"reverse",7)
                        ;
                        if (iVar13 == 0) {
                          local_dc = 1;
                        }
                        else {
                          iVar13 = crt_string_c_strnicmp_FUN_005ff070
                                             (local_209c,"filename",5);
                          if ((iVar13 != 0) &&
                             (iVar13 = crt_string_c_strnicmp_FUN_005ff070
                                                 (local_209c,"frames",6), iVar13 != 0)) {
                            iVar13 = crt_string_c_strnicmp_FUN_005ff070
                                               (local_209c,"cancel",6);
                            if (iVar13 == 0) {
                              pbVar5 = (byte *)(local_209a + 4);
                              while ((g_CharacterClassificationTable[(byte)(*pbVar5 + 1)] & 2U) != 0
                                    ) {
                                pbVar5 = pbVar5 + 1;
                              }
                              local_d8 = 0;
                              pcVar11 = crt_string_c_strstr_FUN_005fedd0
                                                  ((char *)pbVar5,"none");
                              if (pcVar11 == (char *)0x0) {
                                while (*pbVar5 != 0) {
                                  uVar6 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar5);
                                  if (uVar6 < 0x50) {
                                    if (uVar6 < 0x42) goto LAB_005949a6;
                                    if (uVar6 < 0x43) {
                                      local_d4 = local_d4 | 4;
                                      goto LAB_005949a6;
                                    }
                                    if (uVar6 == 0x48) {
                                      local_d4 = local_d4 | 2;
                                      goto LAB_005949a6;
                                    }
                                    pbVar5 = pbVar5 + 1;
                                  }
                                  else {
                                    if (uVar6 < 0x51) {
                                      local_d4 = local_d4 | 1;
                                    }
                                    else if (uVar6 < 0x59) {
                                      if (uVar6 == 0x58) {
                                        local_d8 = local_d8 | 1;
                                      }
                                    }
                                    else if (uVar6 < 0x5a) {
                                      local_d8 = local_d8 | 2;
                                    }
                                    else if (uVar6 == 0x5a) {
                                      local_d8 = local_d8 | 4;
                                    }
LAB_005949a6:
                                    pbVar5 = pbVar5 + 1;
                                  }
                                }
                              }
                            }
                            else {
                              iVar13 = crt_string_c_strnicmp_FUN_005ff070
                                                 (local_209c,"bias",4);
                              if (iVar13 == 0) {
                                pcVar11 = local_209a + 2;
                                while ((g_CharacterClassificationTable[(byte)(*pcVar11 + 1)] & 2U)
                                       != 0) {
                                  pcVar11 = pcVar11 + 1;
                                }
                                local_78 = -1;
                                crt_stdio_c_sscanf_FUN_0060013c
                                          (pcVar11,"frame %s to \"%[^\"]\" frame %s%n",auStack_528,
                                           auStack_654,auStack_58c);
                                iVar13 = DAT_03670b5c;
                                if (local_78 < 0xf) {
                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                            (g_CEditorToolsPtr,"Can't parse \"bias\" statement for animation %s in %s:%s",
                                             local_e4,in_stack_00000010);
                                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                            (&CStack_2ca0,0,(uint)in_stack_fffeeb96,
                                             in_stack_fffeeb9a,in_stack_fffeeb9e,in_stack_fffeeba2,
                                             in_stack_fffeeba6);
                                  goto LAB_005927ee;
                                }
                                (&DAT_03670b60)[DAT_03670b5c * 4] = local_30;
                                iVar3 = core_skeledit_cpp_FUN_00592520();
                                if (iVar3 == 0) {
                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                            (g_CEditorToolsPtr,"Can't parse frame to bias in \"bias\" statement for animation %s in %s:%s",
                                             local_e4,in_stack_00000010);
                                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                            (&CStack_2ca0,0,(uint)in_stack_fffeeb96,
                                             in_stack_fffeeb9a,in_stack_fffeeb9e,in_stack_fffeeba2,
                                             in_stack_fffeeba6);
                                  goto LAB_005927ee;
                                }
                                iVar3 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                                                  (&in_stack_0000000c->motion_list);
                                (&DAT_03670b68)[iVar13 * 4] = iVar3;
                                if (iVar3 < 0) {
                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                            (g_CEditorToolsPtr,"Invalid reference motion \"%s\" in \"bias\" statement for animation %s in %s:%s",
                                             auStack_654,local_e4,in_stack_00000010);
                                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                            (&CStack_2ca0,0,(uint)in_stack_fffeeb96,
                                             in_stack_fffeeb9a,in_stack_fffeeb9e,in_stack_fffeeba2,
                                             in_stack_fffeeba6);
                                  goto LAB_005927ee;
                                }
                                if (iVar3 == local_30) {
                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                            (g_CEditorToolsPtr,"Reference motion is same as motion to bias in \"bias\" statement for animation %s in %s:%s",
                                             local_e4,in_stack_00000010);
                                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                            (&CStack_2ca0,0,(uint)in_stack_fffeeb96,
                                             in_stack_fffeeb9a,in_stack_fffeeb9e,in_stack_fffeeba2,
                                             in_stack_fffeeba6);
                                  goto LAB_005927ee;
                                }
                                iVar13 = core_skeledit_cpp_FUN_00592520();
                                if (iVar13 == 0) {
                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                            (g_CEditorToolsPtr,"Can't parse frame to bias in \"bias\" statement for animation %s in %s:%s",
                                             local_e4,in_stack_00000010);
                                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                            (&CStack_2ca0,0,(uint)in_stack_fffeeb96,
                                             in_stack_fffeeb9a,in_stack_fffeeb9e,in_stack_fffeeba2,
                                             in_stack_fffeeba6);
                                  goto LAB_005927ee;
                                }
                                DAT_03670b5c = DAT_03670b5c + 1;
                              }
                              else {
                                iVar13 = crt_string_c_strnicmp_FUN_005ff070
                                                   (local_209c,"markers",7);
                                if (iVar13 == 0) {
                                  if (0 < local_e4->marker_count) {
                                    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                              (g_CEditorToolsPtr,"Multiple \"markers\" statements for animation %s in %s"
                                               ,local_e4);
                                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                              (&CStack_2ca0,0,(uint)in_stack_fffeeb96,
                                               in_stack_fffeeb9a,in_stack_fffeeb9e,in_stack_fffeeba2
                                               ,in_stack_fffeeba6);
                                    goto LAB_005927ee;
                                  }
                                  pcVar11 = local_209a + 5;
                                  while ((g_CharacterClassificationTable[(byte)(*pcVar11 + 1)] & 2U)
                                         != 0) {
                                    pcVar11 = pcVar11 + 1;
                                  }
                                  cVar1 = *pcVar11;
                                  while (cVar1 != '\0') {
                                    local_74 = -1;
                                    crt_stdio_c_sscanf_FUN_0060013c
                                              (pcVar11,"%d%n",&local_70);
                                    if (local_74 < 0) {
                                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                (g_CEditorToolsPtr,
                                                 "Can't parse \"markers\" statement for animation %s in %s:\n%s",local_e4,
                                                 in_stack_00000010);
                                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                (&CStack_2ca0,0,(uint)in_stack_fffeeb96,
                                                 in_stack_fffeeb9a,in_stack_fffeeb9e,
                                                 in_stack_fffeeba2,in_stack_fffeeba6);
                                      goto LAB_005927ee;
                                    }
                                    if ((local_70 < 1) || (local_e4->frame_count <= local_70)) {
                                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                (g_CEditorToolsPtr,
                                                 "Can't place marker at invalid frame number %d for animation %s in %s:\n%s",local_70,
                                                 local_e4,in_stack_00000010);
                                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                (&CStack_2ca0,0,(uint)in_stack_fffeeb96,
                                                 in_stack_fffeeb9a,in_stack_fffeeb9e,
                                                 in_stack_fffeeba2,in_stack_fffeeba6);
                                      goto LAB_005927ee;
                                    }
                                    if (9 < local_e4->marker_count) {
                                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                (g_CEditorToolsPtr,
                                                 "Too many markers in animation %s in %s:\n%s",local_e4,
                                                 in_stack_00000010);
                                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                (&CStack_2ca0,0,(uint)in_stack_fffeeb96,
                                                 in_stack_fffeeb9a,in_stack_fffeeb9e,
                                                 in_stack_fffeeba2,in_stack_fffeeba6);
                                      goto LAB_005927ee;
                                    }
                                    if ((0 < local_e4->marker_count) &&
                                       (local_70 <= local_e4->markers[local_e4->marker_count + -1]))
                                    {
                                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                (g_CEditorToolsPtr,
                                                 "Frame numbers are not strictly increasing in \"markers\" statement in animation %s in %s:\n%s",local_e4,
                                                 in_stack_00000010);
                                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                (&CStack_2ca0,0,(uint)in_stack_fffeeb96,
                                                 in_stack_fffeeb9a,in_stack_fffeeb9e,
                                                 in_stack_fffeeba2,in_stack_fffeeba6);
                                      goto LAB_005927ee;
                                    }
                                    local_e4->markers[local_e4->marker_count] = local_70;
                                    local_e4->marker_count = local_e4->marker_count + 1;
                                    pcVar11 = pcVar11 + local_74;
                                    while ((g_CharacterClassificationTable[(byte)(*pcVar11 + 1)] &
                                           2U) != 0) {
                                      pcVar11 = pcVar11 + 1;
                                    }
                                    cVar1 = *pcVar11;
                                  }
                                }
                                else {
                                  iVar13 = crt_string_c_strnicmp_FUN_005ff070
                                                     (local_209c,"displace",8);
                                  if (iVar13 == 0) {
                                    pcVar11 = local_209a + 6;
                                    while ((g_CharacterClassificationTable[(byte)(*pcVar11 + 1)] &
                                           2U) != 0) {
                                      pcVar11 = pcVar11 + 1;
                                    }
                                    iVar13 = crt_stdio_c_sscanf_FUN_0060013c
                                                       (pcVar11,"%f,%f,%f",&local_13c,
                                                        &local_138);
                                    if (iVar13 != 3) {
                                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                (g_CEditorToolsPtr,
                                                 "Can't parse displacement vector in \"displace\" keyword in animation %s in %s\n:%s",local_e4,
                                                 in_stack_00000010);
                                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                (&CStack_2ca0,0,(uint)in_stack_fffeeb96,
                                                 in_stack_fffeeb9a,in_stack_fffeeb9e,
                                                 in_stack_fffeeba2,in_stack_fffeeba6);
                                      goto LAB_005927ee;
                                    }
                                  }
                                  else {
                                    iVar13 = crt_string_c_strnicmp_FUN_005ff070
                                                       (local_209c,"totaldisplacement",0x11
                                                       );
                                    if (iVar13 == 0) {
                                      pbVar5 = abStack_208b;
LAB_00594f2a:
                                      do {
                                        str = pbVar5;
                                        pbVar5 = str + 1;
                                      } while ((g_CharacterClassificationTable[(byte)(*str + 1)] &
                                               2U) != 0);
                                      if (*str != 0) {
                                        local_6c = crt_ctype_c_toupper_FUN_005ff9e0((uint)*str);
                                        if (0x58 < local_6c) {
                                          if ((local_6c < 0x5a) || (local_6c < 0x5b)) {
LAB_0059507b:
                                            pbVar5 = str + 1;
                                            if (str[1] == 0x3a) {
                                              pbVar5 = str + 2;
                                            }
                                            if (*pbVar5 == 0x3d) {
                                              pbVar5 = pbVar5 + 1;
                                            }
                                            iVar13 = crt_string_c_strnicmp_FUN_005ff070
                                                               ((char *)pbVar5,"display",7)
                                            ;
                                            if (iVar13 == 0) {
                                              pbVar5 = pbVar5 + 7;
                                              local_64 = -99998.0;
                                            }
                                            else {
                                              local_60 = -1;
                                              crt_stdio_c_sscanf_FUN_0060013c
                                                        ((char *)pbVar5,"%f%n",&local_64);
                                              if (local_60 < 1) {
                                                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                          (g_CEditorToolsPtr,
                                                           "Can't parse \"totalDisplacement\" keyword in animation %s in %s\n:%s",
                                                           local_e4,in_stack_00000010);
                                                shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                          (&CStack_2ca0,0,(uint)in_stack_fffeeb96,
                                                           in_stack_fffeeb9a,in_stack_fffeeb9e,
                                                           in_stack_fffeeba2,in_stack_fffeeba6);
                                                goto LAB_005927ee;
                                              }
                                              pbVar5 = pbVar5 + local_60;
                                            }
                                            if (local_6c == 0x58) {
                                              local_1c0 = local_64;
                                            }
                                            if (local_6c == 0x59) {
                                              local_1bc = local_64;
                                            }
                                            if (local_6c == 0x5a) {
                                              local_1b8 = local_64;
                                            }
                                          }
                                          else {
                                            if (local_6c != 0x5b) goto LAB_0059518b;
                                            local_68 = -1;
                                            crt_stdio_c_sscanf_FUN_0060013c
                                                      ((char *)str,"[%[^- \t] - %[^] \t] ]%n",auStack_4c4,
                                                       auStack_6b8);
                                            if (((local_68 < 5) ||
                                                (iVar13 = core_skeledit_cpp_FUN_00592520(),
                                                iVar13 == 0)) ||
                                               (iVar13 = core_skeledit_cpp_FUN_00592520(),
                                               iVar13 == 0)) {
                                              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                        (g_CEditorToolsPtr,
                                                         "Can't parse frame range in \"totalDisplacement\" keyword in animation %s in %s\n:%s",
                                                         local_e4,in_stack_00000010);
                                              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                        (&CStack_2ca0,0,(uint)in_stack_fffeeb96,
                                                         in_stack_fffeeb9a,in_stack_fffeeb9e,
                                                         in_stack_fffeeba2,in_stack_fffeeba6);
                                              goto LAB_005927ee;
                                            }
                                            if ((int)local_8c < (int)local_c4) {
                                              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                        (g_CEditorToolsPtr,
                                                         "Invalid frame range in \"totalDisplacement\" keyword in animation %s in %s\n:%s",
                                                         local_e4,in_stack_00000010);
                                              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                        (&CStack_2ca0,0,(uint)in_stack_fffeeb96,
                                                         in_stack_fffeeb9a,in_stack_fffeeb9e,
                                                         in_stack_fffeeba2,in_stack_fffeeba6);
                                              goto LAB_005927ee;
                                            }
                                            pbVar5 = str + local_68;
                                          }
                                          goto LAB_00594f2a;
                                        }
                                        if (0x2b < local_6c) {
                                          if (local_6c < 0x2d) goto LAB_00594f2a;
                                          if (local_6c == 0x58) goto LAB_0059507b;
                                        }
LAB_0059518b:
                                        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                  (g_CEditorToolsPtr,
                                                   "Can't parse \"totalDisplacement\" keyword in animation %s in %s\n:%s",local_e4,
                                                   in_stack_00000010);
                                        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                  (&CStack_2ca0,0,(uint)in_stack_fffeeb96,
                                                   in_stack_fffeeb9a,in_stack_fffeeb9e,
                                                   in_stack_fffeeba2,in_stack_fffeeba6);
                                        goto LAB_005927ee;
                                      }
                                      crt_stdio_c_sscanf_FUN_0060013c
                                                ((char *)str,"%f,%f,%f",&local_13c,&local_138)
                                      ;
                                    }
                                    else {
                                      iVar13 = crt_string_c_strnicmp_FUN_005ff070
                                                         (local_209c,"flipXZ",6);
                                      if (iVar13 == 0) {
                                        local_d0 = (FILE *)&DAT_00000001;
                                      }
                                      else {
                                        iVar13 = crt_string_c_strnicmp_FUN_005ff070
                                                           (local_209c,"rotate",6);
                                        if (iVar13 != 0) {
                                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                    (g_CEditorToolsPtr,
                                                     "Invalid keyword for animation %s in %s:\n%s",local_e4,
                                                     in_stack_00000010);
                                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                    (&CStack_2ca0,0,(uint)in_stack_fffeeb96,
                                                     in_stack_fffeeb9a,in_stack_fffeeb9e,
                                                     in_stack_fffeeba2,in_stack_fffeeba6);
                                          goto LAB_005927ee;
                                        }
                                        if (local_bc != 0) {
                                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                    (g_CEditorToolsPtr,
                                                     "Multiple \"rotate\" keywords used in animation %s in %s",local_e4);
                                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                    (&CStack_2ca0,0,(uint)in_stack_fffeeb96,
                                                     in_stack_fffeeb9a,in_stack_fffeeb9e,
                                                     in_stack_fffeeba2,in_stack_fffeeba6);
                                          goto LAB_005927ee;
                                        }
                                        pcVar11 = local_209a + 4;
                                        while ((g_CharacterClassificationTable[(byte)(*pcVar11 + 1)]
                                               & 2U) != 0) {
                                          pcVar11 = pcVar11 + 1;
                                        }
                                        iVar13 = crt_stdio_c_sscanf_FUN_0060013c
                                                           (pcVar11,"%f,%f,%f",&local_154,
                                                            &local_154.z);
                                        if (iVar13 != 3) {
                                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                    (g_CEditorToolsPtr,
                                                     "Can't parse rotation PBH in \"rotate\" keyword in animation %s in %s\n:%s",local_e4,
                                                     in_stack_00000010);
                                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                    (&CStack_2ca0,0,(uint)in_stack_fffeeb96,
                                                     in_stack_fffeeb9a,in_stack_fffeeb9e,
                                                     in_stack_fffeeba2,in_stack_fffeeba6);
                                          goto LAB_005927ee;
                                        }
                                        local_154.x = local_154.x * 0.01745329f;
                                        local_154.y = local_154.y * 0.01745329f;
                                        local_154.z = local_154.z * 0.01745329f;
                                        local_bc = 1;
                                        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                                                  (&CStack_42c,&g_ZeroVector,&local_154);
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
                local_e8 = local_e8 + 1;
              } while (local_e8 < *(int *)((int)aiStack_2718 + local_b0._12_4_));
            }
            pcVar11 = local_e0;
            pCVar7 = (CBoneStructure *)
                     shape_memdbg_cpp_openFile_FUN_0050f7a0
                               (local_e0,(char *)0x0,"rt","..\\core\\skeledit.cpp",
                                0x13d8);
            local_b8 = pCVar7;
            if (pCVar7 == (CBoneStructure *)0x0) {
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Can't open %s mentioned in %s",pcVar11);
              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                        (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,in_stack_fffeeb9e,
                         in_stack_fffeeba2,in_stack_fffeeba6);
              goto LAB_005927ee;
            }
            iVar13 = 1;
            do {
              iVar3 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)pCVar7);
              this_ptr_00 = local_b8;
              if (iVar3 < 0) break;
            } while ((iVar3 != 10) || (iVar13 = iVar13 + -1, 0 < iVar13));
            crt_stdio_c_fscanf_FUN_005fe7c0((FILE *)local_b8,"%d\n");
            fVar15 = local_34;
            core_skeledit_cpp_CBoneStructure_readBONheader_FUN_0058a4a0
                      (this_ptr_00,(FILE *)local_b0,&in_stack_fffeeb96->bone_count);
            iVar13 = 0;
            if (0 < *(int *)((int)aiStack_28f8 + (int)fVar15)) {
              do {
                iVar13 = iVar13 + 1;
                core_skeledit_cpp_CBoneStructure_skipBONframe_FUN_0058abb0(local_b8);
                local_b0._0_4_ = local_b0._0_4_ + -1;
              } while (iVar13 < *(int *)((int)aiStack_28f8 + (int)fVar15));
            }
            local_b0._8_4_ = (streambuf *)0x0;
            local_2c = 0.0;
            local_b0._4_4_ = 1.4013e-45;
            if (-1 < local_e4->frame_count) {
              do {
                fVar15 = local_2c;
                local_24 = (float)(local_e4->frame_start + (int)local_2c);
                shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                          (g_CEditorToolsPtr,(float)(int)local_24,(float)(int)local_104);
                if ((int)local_b0._0_4_ < 1) {
                  if (fVar15 != (float)local_e4->frame_count) {
                    g_CurrentFilename = "..\\core\\skeledit.cpp";
                    g_CurrentLineNumber = 0x1408;
                    core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze!");
                  }
                  break;
                }
                local_b0._0_4_ = local_b0._0_4_ + -1;
                core_skeledit_cpp_CBoneStructure_readBONframe_FUN_0058aa10
                          (local_b8,local_d0,(int)in_stack_fffeeb96);
                iVar13 = local_bc;
                core_skeledit_cpp_CBoneStructure_fixupMatrices_FUN_0058adb0(in_stack_fffeeb96);
                if (iVar13 != 0) {
                  iVar13 = 0;
                  if (0 < iStack_7484) {
                    pfVar19 = (float *)aCStack_742c;
                    do {
                      iVar13 = iVar13 + 1;
                      core_xform_cpp_multiplyMatrix3x4InPlace_FUN_005f50c0
                                ((CMatrix3x4f *)pfVar19,&CStack_42c);
                      pfVar19 = pfVar19 + 0x21;
                    } while (iVar13 < iStack_7484);
                  }
                  core_skeledit_cpp_FUN_0058ac80();
                }
                core_skeledit_cpp_FUN_0058af40();
                if ((float)local_b0._4_4_ != 0.0) {
                  local_178.m[2].x = aCStack_742c[0].m[0].z;
                  local_178.m[2].y = aCStack_742c[0].m[1].z;
                  local_178.m[2].z = aCStack_742c[0].m[2].z;
                  if ((CVector3f *)&local_1f0 != local_178.m + 2) {
                    local_1f0 = aCStack_742c[0].m[0].z;
                    local_1ec = aCStack_742c[0].m[1].z;
                    local_1e8 = aCStack_742c[0].m[2].z;
                  }
                  pCVar8 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                                     ((CVector3f *)aCStack_742c,&CStack_1a8);
                  if (&local_1b4 != pCVar8) {
                    local_1b4.x = pCVar8->x;
                    local_1b4.y = pCVar8->y;
                    local_1b4.z = pCVar8->z;
                  }
                  local_b0._4_4_ = 0.0;
                }
                CStack_1a8.m[1].x = aCStack_742c[0].m[0].z;
                local_178.m[1].x = aCStack_742c[0].m[0].z - local_1f0;
                local_178.m[1].y = aCStack_742c[0].m[1].z - local_1ec;
                local_178.m[1].z = aCStack_742c[0].m[2].z - local_1e8;
                CStack_1a8.m[1].y = aCStack_742c[0].m[1].z;
                local_1d8.x = local_178.m[1].x + local_13c;
                local_1d8.y = local_178.m[1].y + local_138;
                local_1d8.z = local_178.m[1].z + local_134;
                CStack_1a8.m[1].z = aCStack_742c[0].m[2].z;
                if (local_e4->frame_count <= (int)local_2c) {
                  if (local_dc == 0) {
                    if (CStack_1a8.m + 2 != &local_1d8) {
                      CStack_1a8.m[2].x = local_1d8.x;
                      CStack_1a8.m[2].y = local_1d8.y;
                      CStack_1a8.m[2].z = local_1d8.z;
                    }
                    local_b0._8_4_ = &DAT_00000001;
                  }
                  break;
                }
                if (local_dc == 0) {
                  iVar13 = local_e4->frame_start + (int)local_2c;
                }
                else {
                  iVar13 = (local_e4->frame_start + local_e4->frame_count + -1) - (int)local_2c;
                }
                pCVar8 = in_stack_0000000c->frame_positions_1 + iVar13;
                if (pCVar8 != &local_1d8) {
                  pCVar8->x = local_1d8.x;
                  pCVar8->y = local_1d8.y;
                  pCVar8->z = local_1d8.z;
                }
                iVar3 = in_stack_0000000c->bone_count;
                pCVar16 = in_stack_0000000c->bone_angle_frames;
                if (local_d4 == 0) {
                  local_58 = local_d4;
                  if (0 < in_stack_0000000c->bone_count) {
                    local_50._16_4_ = aCStack_742c;
                    pCVar16 = pCVar16 + iVar3 * iVar13;
                    do {
                      core_xform_cpp_matrixToQuaternion_FUN_005f7420
                                ((CQuaternion4f *)local_50._16_4_,(CMatrix3x3f *)in_stack_fffeeb96);
                      pfVar19 = (float *)((int)pCVar16 + (uint)bVar24 * -8 + 4);
                      pCVar16->w = afStack_218[3];
                      pfVar20 = pfVar19 + (uint)bVar24 * -2 + 1;
                      *pfVar19 = afStack_218[(uint)bVar24 * -2 + 4];
                      *pfVar20 = afStack_218[(uint)bVar24 * -2 + (uint)bVar24 * -2 + 5];
                      pfVar20[(uint)bVar24 * -2 + 1] =
                           (afStack_218 + (uint)bVar24 * -2 + (uint)bVar24 * -2 + 5)
                           [(uint)bVar24 * -2 + 1];
                      local_58 = local_58 + 1;
                      local_50._16_4_ = &((CQuaternion4f *)(local_50._16_4_ + 0x80))->x;
                      pCVar16 = pCVar16 + 1;
                    } while ((int)local_58 < in_stack_0000000c->bone_count);
                  }
                }
                else {
                  core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                            ((CVector3f *)aCStack_742c,&local_178);
                  if ((local_d4 & 1) != 0) {
                    local_178.m[0].x = local_1b4.x;
                  }
                  if ((local_d4 & 2) != 0) {
                    local_178.m[0].y = local_1b4.y;
                  }
                  if ((local_d4 & 4) != 0) {
                    local_178.m[0].z = local_1b4.z;
                  }
                  local_148.x = 0.0;
                  local_148.y = 0.0;
                  local_148.z = 0.0;
                  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                            (&CStack_39c,&local_148,local_178.m);
                  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                            (aCStack_742c,&CStack_39c,(CMatrix3x4f *)in_stack_fffeeb96);
                  pfVar19 = afStack_33c;
                  pCVar21 = &CStack_3cc;
                  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                    pCVar21->m[0].w = *pfVar19;
                    pfVar19 = pfVar19 + (uint)bVar24 * -2 + 1;
                    pCVar21 = (CMatrix3x4f *)((int)pCVar21 + ((uint)bVar24 * -2 + 1) * 4);
                  }
                  uVar26 = CONCAT44 /* combine 2-byte values */(&CStack_3cc,0x595bff);
                  core_xform_cpp_inverse_FUN_005f6210(&CStack_3cc,(CMatrix3x4f *)in_stack_fffeeb96);
                  pfVar19 = afStack_36c;
                  pCVar21 = &CStack_3fc;
                  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                    pCVar21->m[0].w = *pfVar19;
                    pfVar19 = pfVar19 + (uint)bVar24 * -2 + 1;
                    pCVar21 = (CMatrix3x4f *)((int)pCVar21 + ((uint)bVar24 * -2 + 1) * 4);
                  }
                  local_54 = 0;
                  if (0 < in_stack_0000000c->bone_count) {
                    local_50._12_4_ = aCStack_742c;
                    pCVar16 = pCVar16 + iVar3 * iVar13;
                    do {
                      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                                ((CMatrix3x4f *)local_50._12_4_,&CStack_3fc,
                                 (CMatrix3x4f *)((ulonglong)uVar26 >> 0x20));
                      pfVar19 = afStack_30c;
                      pCVar22 = aCStack_2dc;
                      for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
                        pCVar22->w = *pfVar19;
                        pfVar19 = pfVar19 + (uint)bVar24 * -2 + 1;
                        pCVar22 = (CQuaternion4f *)((int)pCVar22 + ((uint)bVar24 * -2 + 1) * 4);
                      }
                      uVar26 = CONCAT44 /* combine 2-byte values */(aCStack_2dc,0x595c72);
                      core_xform_cpp_matrixToQuaternion_FUN_005f7420
                                (aCStack_2dc,(CMatrix3x3f *)in_stack_fffeeb96);
                      pfVar19 = (float *)((int)pCVar16 + (uint)bVar24 * -8 + 4);
                      pCVar16->w = fStack_21c;
                      pfVar20 = pfVar19 + (uint)bVar24 * -2 + 1;
                      *pfVar19 = afStack_218[(uint)bVar24 * -2];
                      *pfVar20 = afStack_218[(uint)bVar24 * -2 + (uint)bVar24 * -2 + 1];
                      pfVar20[(uint)bVar24 * -2 + 1] =
                           (afStack_218 + (uint)bVar24 * -2 + (uint)bVar24 * -2 + 1)
                           [(uint)bVar24 * -2 + 1];
                      local_54 = local_54 + 1;
                      local_50._12_4_ = &((CMatrix3x4f *)(local_50._12_4_ + 0x60))->m[2].x;
                      pCVar16 = pCVar16 + 1;
                    } while (local_54 < in_stack_0000000c->bone_count);
                  }
                }
                local_2c = (float)((int)local_2c + 1);
              } while ((int)local_2c <= local_e4->frame_count);
            }
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      ((FILE *)local_b8,"..\\core\\skeledit.cpp",0x147a);
            local_1fc = 0.0;
            local_1f8 = 0.0;
            local_1f4 = 0.0;
            iVar13 = 0;
            if (0 < local_e4->frame_count) {
              do {
                iVar3 = local_e4->frame_start + iVar13;
                if (iVar13 < local_e4->frame_count + -1) {
                  pCVar8 = in_stack_0000000c->frame_positions_1 + iVar3;
                  pCVar12 = in_stack_0000000c->frame_positions_1 + iVar3 + 1;
                  local_130.x = pCVar12->x - pCVar8->x;
                  local_130.y = pCVar12->y - pCVar8->y;
                  fVar15 = pCVar12->z - pCVar8->z;
                  pCVar8 = in_stack_0000000c->frame_positions_2 + iVar3;
                  local_130.z = fVar15;
                  if (pCVar8 != &local_130) {
                    pCVar8->x = local_130.x;
                    pCVar8->y = local_130.y;
LAB_00595723:
                    pCVar8->z = fVar15;
                  }
                }
                else if (iVar13 < 1) {
                  pCVar8 = in_stack_0000000c->frame_positions_2;
                  pCVar8[iVar3].z = 0.0;
                  pCVar8[iVar3].y = pCVar8[iVar3].z;
                  pCVar8[iVar3].x = pCVar8[iVar3].y;
                }
                else if ((streambuf *)local_b0._8_4_ == (streambuf *)0x0) {
                  pCVar8 = in_stack_0000000c->frame_positions_2 + iVar3;
                  pCVar12 = in_stack_0000000c->frame_positions_2 + iVar3 + -1;
                  if (pCVar8 != pCVar12) {
                    pCVar8->x = pCVar12->x;
                    pCVar8->y = pCVar12->y;
                    pCVar8->z = pCVar12->z;
                  }
                }
                else {
                  pCVar8 = in_stack_0000000c->frame_positions_1;
                  local_184.x = CStack_1a8.m[2].x - pCVar8[iVar3].x;
                  local_184.y = CStack_1a8.m[2].y - pCVar8[iVar3].y;
                  fVar15 = CStack_1a8.m[2].z - pCVar8[iVar3].z;
                  pCVar8 = in_stack_0000000c->frame_positions_2 + iVar3;
                  local_184.z = fVar15;
                  if (pCVar8 != &local_184) {
                    pCVar8->x = local_184.x;
                    pCVar8->y = local_184.y;
                    goto LAB_00595723;
                  }
                }
                if ((local_d8 & 1) == 0) {
                  in_stack_0000000c->frame_positions_2[iVar3].x = 0.0;
                }
                else {
                  in_stack_0000000c->frame_positions_1[iVar3].x = 0.0;
                  if (((int)local_c4 <= iVar13) && (iVar13 <= (int)local_8c)) {
                    local_1fc = local_1fc + in_stack_0000000c->frame_positions_2[iVar3].x;
                  }
                }
                if ((local_d8 & 2) == 0) {
                  in_stack_0000000c->frame_positions_2[iVar3].y = 0.0;
                }
                else {
                  in_stack_0000000c->frame_positions_1[iVar3].y = 0.0;
                  if (((int)local_c4 <= iVar13) && (iVar13 <= (int)local_8c)) {
                    local_1f8 = local_1f8 + in_stack_0000000c->frame_positions_2[iVar3].y;
                  }
                }
                if ((local_d8 & 4) == 0) {
                  in_stack_0000000c->frame_positions_2[iVar3].z = 0.0;
                }
                else {
                  in_stack_0000000c->frame_positions_1[iVar3].z = 0.0;
                  if (((int)local_c4 <= iVar13) && (iVar13 <= (int)local_8c)) {
                    local_1f4 = local_1f4 + in_stack_0000000c->frame_positions_2[iVar3].z;
                  }
                }
                iVar13 = iVar13 + 1;
              } while (iVar13 < local_e4->frame_count);
            }
            local_1e4 = 0.0;
            local_1e0 = 0.0;
            local_1dc = 0.0;
            if (local_1c0 == local_c8) {
              shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                        (g_CEditorToolsPtr,"Total displacement for animation %s on X-axis is %g",local_e4,
                         (double)local_1fc);
            }
            else if (local_1c0 != local_cc) {
              if ((local_d8 & 1) == 0) {
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Setting total displacement on an axis that wasn't canceled doesn't work yet!");
              }
              else {
                local_1e4 = local_1c0 - local_1fc;
              }
            }
            if (local_1bc == local_c8) {
              shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                        (g_CEditorToolsPtr,"Total displacement for animation %s on Y-axis is %g",local_e4,
                         (double)local_1f8);
            }
            else if (local_1bc != local_cc) {
              if ((local_d8 & 2) == 0) {
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Setting total displacement on an axis that wasn't canceled doesn't work yet!");
              }
              else {
                local_1e0 = local_1bc - local_1f8;
              }
            }
            if (local_1b8 == local_c8) {
              shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                        (g_CEditorToolsPtr,"Total displacement for animation %s on Z-axis is %g",local_e4,
                         (double)local_1f4);
            }
            else if (local_1b8 != local_cc) {
              if ((local_d8 & 4) == 0) {
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Setting total displacement on an axis that wasn't canceled doesn't work yet!");
              }
              else {
                local_1dc = local_1b8 - local_1f4;
              }
            }
            if (0.0 < SQRT(local_1dc * local_1dc + local_1e4 * local_1e4 + local_1e0 * local_1e0)) {
              local_24 = (float)(((int)local_8c - (int)local_c4) + 1);
              local_50._4_4_ = (uint)(int)local_24;
              fVar15 = 1.0 / (float)local_50._4_4_;
              local_1e4 = local_1e4 * fVar15;
              local_1e0 = local_1e0 * fVar15;
              local_1dc = local_1dc * fVar15;
              iVar13 = (int)local_c4 - (int)local_8c;
              bVar23 = local_c4 == local_8c;
              fVar15 = local_c4;
              while (bVar23 || SBORROW /* signed borrow */4((int)fVar15,(int)local_8c) != iVar13 < 0) {
                iVar13 = local_e4->frame_start + (int)fVar15;
                pCVar8 = in_stack_0000000c->frame_positions_2;
                pCVar8[iVar13].x = pCVar8[iVar13].x + local_1e4;
                pCVar8[iVar13].y = pCVar8[iVar13].y + local_1e0;
                fVar15 = (float)((int)fVar15 + 1);
                pCVar8[iVar13].z = pCVar8[iVar13].z + local_1dc;
                iVar13 = (int)fVar15 - (int)local_8c;
                bVar23 = iVar13 == 0;
              }
            }
            local_50._20_4_ = local_50._20_4_ + 0x104;
            local_50._24_4_ = local_50._24_4_ + 0x54c;
            local_34 = (float)((int)local_34 + 4);
            local_30 = local_30 + 1;
          } while (local_30 < (in_stack_0000000c->motion_list).motion_count);
        }
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_114,"..\\core\\skeledit.cpp",0x14ef);
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Biasing motions.");
        local_110 = 0.0;
        local_114 = (FILE *)0x0;
        crt_memory_c_memset_FUN_005fde40(aiStack_2538,0,0x1e0);
        if (0 < DAT_03670b5c) {
          iVar13 = 0;
          do {
            piVar18 = (int *)((int)&DAT_03670b60 + iVar13);
            iVar13 = iVar13 + 0x10;
            aiStack_2538[*piVar18] = 1;
          } while (iVar13 < DAT_03670b5c * 0x10);
        }
        iVar13 = 0;
        if (DAT_03670b5c < 1) {
LAB_00595eb8:
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Finished processing %s OK!");
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,in_stack_fffeeb9e,
                     in_stack_fffeeba2,in_stack_fffeeba6);
          return 1;
        }
        do {
          iVar3 = 0;
          if (0 < DAT_03670b5c) {
            iVar4 = 0;
            do {
              if ((-1 < *(int *)((int)&DAT_03670b60 + iVar4)) &&
                 (aiStack_2538[*(int *)((int)&DAT_03670b68 + iVar4)] == 0)) break;
              iVar4 = iVar4 + 0x10;
              iVar3 = iVar3 + 1;
            } while (iVar4 < DAT_03670b5c * 0x10);
          }
          if (DAT_03670b5c <= iVar3) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Cyclic bias detected in %s");
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                      (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,in_stack_fffeeb9e,
                       in_stack_fffeeba2,in_stack_fffeeba6);
            goto LAB_005927ee;
          }
          piVar18 = &DAT_03670b60 + iVar3 * 4;
          iVar4 = (in_stack_0000000c->motion_list).motions[*piVar18].frame_start +
                  (&DAT_03670b64)[iVar3 * 4];
          iVar3 = (in_stack_0000000c->motion_list).motions[(&DAT_03670b68)[iVar3 * 4]].frame_start +
                  (&DAT_03670b6c)[iVar3 * 4];
          pCVar8 = in_stack_0000000c->frame_positions_1;
          local_1cc = pCVar8[iVar3].x - pCVar8[iVar4].x;
          local_1c8 = pCVar8[iVar3].y - pCVar8[iVar4].y;
          local_1c4 = pCVar8[iVar3].z - pCVar8[iVar4].z;
          for (iVar3 = 0; iVar4 = DAT_03670b5c,
              iVar3 < (in_stack_0000000c->motion_list).motions[*piVar18].frame_count;
              iVar3 = iVar3 + 1) {
            iVar4 = (in_stack_0000000c->motion_list).motions[*piVar18].frame_start + iVar3;
            pCVar8 = in_stack_0000000c->frame_positions_1;
            pCVar8[iVar4].x = pCVar8[iVar4].x + local_1cc;
            pCVar8[iVar4].y = pCVar8[iVar4].y + local_1c8;
            pCVar8[iVar4].z = pCVar8[iVar4].z + local_1c4;
          }
          aiStack_2538[*piVar18] = 0;
          iVar13 = iVar13 + 1;
          *piVar18 = -1;
          if (iVar4 <= iVar13) goto LAB_00595eb8;
        } while( true );
      }
      iVar13 = crt_string_c_strnicmp_FUN_005ff070(local_21c8,"animation",9);
      if (iVar13 != 0) {
        iVar13 = crt_string_c_strnicmp_FUN_005ff070(local_21c8,"checkout",8);
        if (iVar13 == 0) {
          crt_stdio_c_sscanf_FUN_0060013c(acStack_21c2 + 2,"%s");
          uVar6 = 0xffffffff;
          pcVar11 = acStack_849 + 1;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar11 + (uint)bVar24 * -2 + 1;
          } while (cVar1 != '\0');
          n = ~uVar6 - 1;
          if (0 < (int)n) {
            pcVar11 = acStack_849 + ~uVar6;
            do {
              if ((g_CharacterClassificationTable[(byte)(pcVar11[-1] + 1)] & 2U) == 0) break;
              n = n - 1;
              pcVar11 = pcVar11 + -1;
            } while (0 < (int)n);
          }
          (acStack_849 + 1)[n] = '\0';
          while ((g_CharacterClassificationTable[(byte)(acStack_849[1] + 1)] & 2U) != 0) {
            crt_string_c_memmove_FUN_005fe5e0(acStack_849 + 1,acStack_849 + 2,n);
            n = n - 1;
          }
          pcVar11 = crt_env_c_getenv_FUN_006013f0("USERNAME");
          if (((pcVar11 == (char *)0x0) ||
              (iVar13 = crt_string_c_stricmp_FUN_005fe7f0(pcVar11,acStack_849 + 1), iVar13 != 0)) &&
             (iVar13 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                                 (g_CEditorToolsPtr,"User \"%s\" is currently working on this file.  Continue anyway?"),
             iVar13 == 0)) {
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                      (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,in_stack_fffeeb9e,
                       in_stack_fffeeba2,in_stack_fffeeba6);
            goto LAB_005927ee;
          }
        }
        else {
          if (local_100 == 0) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Expected animation keyword in %s but instead found this:\n%s",in_stack_00000010);
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                      (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,in_stack_fffeeb9e,
                       in_stack_fffeeba2,in_stack_fffeeba6);
            goto LAB_005927ee;
          }
          aiStack_2718[(in_stack_0000000c->motion_list).motion_count] =
               aiStack_2718[(in_stack_0000000c->motion_list).motion_count] + 1;
          pSVar14 = local_f0 + (in_stack_0000000c->motion_list).motion_count;
          iVar13 = (in_stack_0000000c->motion_list).motion_count;
          iVar3 = crt_string_c_strnicmp_FUN_005ff070(local_21c8,"filename",8);
          pcVar11 = &DAT_0365caf8 + iVar13 * 0x104;
          if (iVar3 == 0) {
            pcVar17 = acStack_21c2 + 2;
            while ((g_CharacterClassificationTable[(byte)(*pcVar17 + 1)] & 2U) != 0) {
              pcVar17 = pcVar17 + 1;
            }
            iVar13 = crt_stdio_c_sscanf_FUN_0060013c(pcVar17,"\"%[^\"]\"");
            if (iVar13 != 1) {
              g_CurrentFilename = "..\\core\\skeledit.cpp";
              g_CurrentLineNumber = 0x112f;
              core_main_c_displayErrorAndQuit_FUN_00506f10
                        ("Error parsing \"filename\" statement for animation %s in %s:\n%s",pcVar11,in_stack_00000010);
            }
            crt_string_c_splitpath_FUN_005ff178
                      (pcVar11,local_14,acStack_1468,acStack_1b68,acStack_c68);
            if ((acStack_1468[0] == '\0') && (local_14[0] == '\0')) {
              crt_string_c_splitpath_FUN_005ff178
                        (in_stack_00000010,local_14,acStack_1468,(char *)0x0,(char *)0x0);
              crt_file_c_makepath_FUN_005febfc
                        (pcVar11,local_14,acStack_1468,acStack_1b68,acStack_c68);
            }
            crt_string_c_splitpath_FUN_005ff178
                      (pcVar11,local_18,acStack_1a68,acStack_1968,acStack_d68);
            if (acStack_d68[0] == '\0') {
              crt_file_c_makepath_FUN_005febfc
                        (pcVar11,local_18,acStack_1a68,acStack_1968,"bon");
            }
            pFVar2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                               (pcVar11,(char *)0x0,"rt","..\\core\\skeledit.cpp",
                                0x1139);
            if (pFVar2 == (FILE *)0x0) {
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Can't open %s mentioned in %s",pcVar11);
              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                        (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,in_stack_fffeeb9e,
                         in_stack_fffeeba2,in_stack_fffeeba6);
              goto LAB_005927ee;
            }
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar2,"..\\core\\skeledit.cpp",0x113e);
          }
          else {
            iVar13 = crt_string_c_strnicmp_FUN_005ff070(local_21c8,"frames",6);
            if (iVar13 == 0) {
              pcVar11 = acStack_21c2;
              while ((g_CharacterClassificationTable[(byte)(*pcVar11 + 1)] & 2U) != 0) {
                pcVar11 = pcVar11 + 1;
              }
              local_ec = -1;
              crt_stdio_c_sscanf_FUN_0060013c(pcVar11," %[^-] - %s%n",auStack_23c,auStack_25c);
              if (local_ec < 3) {
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Error parsing \"frames\" statement for animation %s in %s:\n%s",pSVar14,
                           in_stack_00000010);
                shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                          (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,
                           in_stack_fffeeb9e,in_stack_fffeeba2,in_stack_fffeeba6);
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
      if (0x77 < (in_stack_0000000c->motion_list).motion_count) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Too many motions in %s, max is %d",in_stack_00000010);
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,in_stack_fffeeb9e,
                   in_stack_fffeeba2,in_stack_fffeeba6);
        goto LAB_005927ee;
      }
      iVar13 = crt_stdio_c_sscanf_FUN_0060013c(acStack_21c2 + 3," \"%[^\"]\" : %s",acStack_1f70);
      if (iVar13 != 2) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't parse %s.  I don't understand this line:\n%s",in_stack_00000010);
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,in_stack_fffeeb9e,
                   in_stack_fffeeba2,in_stack_fffeeba6);
        goto LAB_005927ee;
      }
      crt_string_c_splitpath_FUN_005ff178
                (acStack_1f70,local_20,acStack_1568,acStack_1668,acStack_1868);
      if ((acStack_1568[0] == '\0') && (local_20[0] == '\0')) {
        crt_string_c_splitpath_FUN_005ff178
                  (in_stack_00000010,local_20,acStack_1568,(char *)0x0,(char *)0x0);
        crt_file_c_makepath_FUN_005febfc
                  (acStack_1f70,local_20,acStack_1568,acStack_1668,acStack_1868);
      }
      crt_string_c_splitpath_FUN_005ff178
                (acStack_1f70,acStack_c,acStack_1d68,acStack_1c68,acStack_1268);
      if (acStack_1268[0] == '\0') {
        crt_file_c_makepath_FUN_005febfc
                  (acStack_1f70,acStack_c,acStack_1d68,acStack_1c68,"bon");
      }
      pSVar14 = local_f0 + (in_stack_0000000c->motion_list).motion_count;
      crt_memory_c_memset_FUN_005fde40(pSVar14,0,0x54c);
      crt_string_c_splitpath_FUN_005ff178
                (acStack_1f70,(char *)0x0,(char *)0x0,pSVar14->motion_name,(char *)0x0);
      iVar13 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0
                         (&in_stack_0000000c->motion_list);
      pSVar14->state_index = iVar13;
      if (iVar13 < 0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Invalid state %s for animation %s in %s",auStack_71c,acStack_1f70);
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,in_stack_fffeeb9e,
                   in_stack_fffeeba2,in_stack_fffeeba6);
        goto LAB_005927ee;
      }
      aiStack_2718[(in_stack_0000000c->motion_list).motion_count] = 0;
      pcVar11 = acStack_1f70;
      pcVar17 = &DAT_0365caf8 + (in_stack_0000000c->motion_list).motion_count * 0x104;
      do {
        cVar1 = *pcVar11;
        *pcVar17 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar17[1] = cVar1;
        pcVar17 = pcVar17 + 2;
      } while (cVar1 != '\0');
      local_100 = 1;
    } while( true );
  }
  pcVar11 = "Can't parse home pose filename from %s.  The state count is probably wrong.";
LAB_005927df:
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar11);
LAB_005927ee:
  if (local_110 != 0.0) {
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  }
  if (local_114 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_114,"..\\core\\skeledit.cpp",0x1052);
  }
  return 0;
LAB_00593749:
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Error parsing \"frames\" statement for animation %s in %s:\n%s",pSVar14,in_stack_00000010);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            (&CStack_2ca0,0,(uint)in_stack_fffeeb96,in_stack_fffeeb9a,in_stack_fffeeb9e,
             in_stack_fffeeba2,in_stack_fffeeba6);
  goto LAB_005927ee;
}
