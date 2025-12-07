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
  float fVar2;
  CBoneStructure *pCVar3;
  int iVar4;
  char *pcVar5;
  FILE *file_ptr;
  CBoneStructure *pCVar6;
  int iVar7;
  CEditorTools *pCVar8;
  CVector3f *pCVar9;
  SBone *pSVar10;
  SBone *pSVar11;
  SIZE_T n;
  CVector3f *pCVar12;
  int iVar13;
  SMotion *pSVar14;
  float fVar15;
  CQuaternion4f *pCVar16;
  BADSPACEBASE *in_ESP;
  uint *puVar17;
  SMotionTransition *dest;
  byte *pbVar18;
  float *pfVar19;
  float *pfVar20;
  CMatrix3x4f *pCVar21;
  CMatrix3x4f *pCVar22;
  uint *puVar23;
  bool bVar24;
  byte bVar25;
  double dVar26;
  CSkeleton *in_stack_0000000c;
  char *in_stack_00000010;
  char *pcVar27;
  int *piVar28;
  uint d5;
  char *pcVar29;
  byte *d2;
  char *in_stack_fffeec40;
  char *pcVar30;
  char *pcVar31;
  byte *d5_00;
  char *matrix_ptr;
  uint uVar32;
  CSkeleton *str1;
  char *pcVar33;
  char *pcVar34;
  char *pcVar35;
  char *in_stack_fffeec58;
  char *in_stack_fffeec5c;
  float *in_stack_fffeec60;
  CMatrix3x4f *in_stack_fffeec64;
  CVector3f *in_stack_fffeec68;
  CVector3f *in_stack_fffeec6c;
  uint in_stack_fffeec70;
  uint in_stack_fffeec74;
  uint in_stack_fffeec78;
  uint in_stack_fffeec7c;
  uint in_stack_fffeec80;
  uint in_stack_fffeec84;
  uint in_stack_fffeec88;
  int iStack_decc;
  char acStack_dec8 [32];
  int aiStack_dea8 [6793];
  int iStack_7484;
  byte auStack_742c [28];
  float fStack_7410;
  float fStack_7400;
  CPickList CStack_2ca0;
  float afStack_28f8 [120];
  int aiStack_2718 [120];
  int aiStack_2538 [120];
  char acStack_2358 [400];
  float local_21c8;
  char acStack_21c2 [294];
  byte local_209c [3];
  byte local_2099 [4];
  char local_2095;
  float afStack_2094 [2];
  byte abStack_208b [283];
  uint uStack_1f70;
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
  float afStack_b68 [50];
  float afStack_aa0 [50];
  char acStack_9d8 [200];
  float afStack_910 [49];
  char acStack_849 [101];
  float afStack_7e4 [25];
  float afStack_780 [25];
  byte auStack_71c [400];
  float afStack_58c [25];
  float afStack_528 [63];
  CMatrix3x4f CStack_42c;
  CMatrix3x4f CStack_3fc;
  CMatrix3x4f CStack_3cc;
  CMatrix3x4f CStack_39c;
  float afStack_36c [12];
  float afStack_33c [12];
  uint auStack_30c [12];
  uint auStack_2dc [12];
  float afStack_2ac [20];
  byte auStack_25c [64];
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
  CVector3f local_1b4 [2];
  float local_19c;
  float local_198;
  float local_194;
  CVector3f local_190;
  CVector3f local_184;
  byte local_178 [40];
  float local_150;
  float local_14c;
  CVector3f local_148;
  float local_13c;
  float local_138;
  float local_134;
  CVector3f local_130;
  double local_124;
  double local_11c;
  CBoneStructure *local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  int local_100;
  char *local_fc;
  char *local_f8;
  char *local_f4;
  SMotion *local_f0;
  float local_ec;
  float local_e8;
  SMotion *local_e4;
  char *local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  FILE *local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  CBoneStructure *local_b8;
  byte local_b0 [24];
  float local_98;
  SMotionTransition *local_94;
  float local_90;
  byte local_8c [44];
  CVector3f local_60;
  float local_54;
  byte local_50 [28];
  float local_34;
  float local_30;
  float local_2c;
  float local_24;
  char local_20 [4];
  char local_1c [4];
  char local_18 [4];
  char local_14 [4];
  char local_10 [4];
  char acStack_c [4];
  
  bVar25 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x11418);
  core_skeleton_cpp_CSkeleton_free_FUN_00599a50(in_stack_0000000c);
  pCVar3 = (CBoneStructure *)
           shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (in_stack_00000010,(char *)0x0,"rt","..\\core\\skeledit.cpp",
                      0x103c);
  local_114 = pCVar3;
  if (pCVar3 == (CBoneStructure *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s");
    return 0;
  }
  local_110 = 0.0;
  iVar13 = 1;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Reading state list from %s");
  do {
    iVar4 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)pCVar3);
    if (iVar4 < 0) break;
  } while ((iVar4 != 10) || (iVar13 = iVar13 + -1, 0 < iVar13));
  local_10c = 0.0;
  crt_stdio_c_fscanf_FUN_005fe7c0((FILE *)local_114,"%d\n");
  if (0x50 < (int)local_10c) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x104a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("%s has %d states, max is %d");
  }
  pCVar3 = local_114;
  iVar13 = 1;
  do {
    iVar4 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)pCVar3);
    if (iVar4 < 0) break;
  } while ((iVar4 != 10) || (iVar13 = iVar13 + -1, 0 < iVar13));
  (in_stack_0000000c->motion_list).state_count = 0;
  if ((in_stack_0000000c->motion_list).state_count < (int)local_10c) {
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0((FILE *)0x5927ba,"%s\n");
      if ((in_stack_0000000c->motion_list).state_names[(in_stack_0000000c->motion_list).state_count]
          [0] == '/') {
        pcVar27 = "State name begins with '/', state count is probably wrong in %s";
        goto LAB_005927df;
      }
      iVar13 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0
                         (&in_stack_0000000c->motion_list);
      if (-1 < iVar13) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Duplicate state %s in %s");
        goto LAB_005927ee;
      }
      iVar13 = (in_stack_0000000c->motion_list).state_count + 1;
      (in_stack_0000000c->motion_list).state_count = iVar13;
    } while (iVar13 < (int)local_10c);
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Reading home pose filename");
  pCVar3 = local_114;
  iVar4 = 1;
  pcVar27 = "(file error)";
  pcVar30 = acStack_1e6c;
  for (iVar13 = 0x41; iVar13 != 0; iVar13 = iVar13 + -1) {
    *(uint *)pcVar30 = *(uint *)pcVar27;
    pcVar27 = pcVar27 + ((uint)bVar25 * -2 + 1) * 4;
    pcVar30 = pcVar30 + ((uint)bVar25 * -2 + 1) * 4;
  }
  do {
    iVar13 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)pCVar3);
    if (iVar13 < 0) break;
  } while ((iVar13 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  iVar13 = crt_stdio_c_fscanf_FUN_005fe7c0((FILE *)local_114,"\"%[^\"]\"\n");
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
              ((CBoneStructure *)acStack_1e6c,in_stack_fffeec40);
    core_skeledit_cpp_FUN_0058aeb0();
    pCVar3 = local_114;
    iVar13 = 1;
    pcVar27 = (char *)0x5929db;
    core_skeledit_cpp_FUN_00595f30();
    do {
      pcVar30 = (char *)0x5929e4;
      iVar4 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)pCVar3);
      if (iVar4 < 0) break;
    } while ((iVar4 != 10) || (iVar13 = iVar13 + -1, 0 < iVar13));
    local_108 = (float)crt_stdio_c_ftell_FUN_00601560((FILE *)local_114);
    pCVar8 = g_CEditorToolsPtr;
    local_104 = 0.0;
    (in_stack_0000000c->motion_list).motion_count = 0;
    d5_00 = (byte *)0x592a33;
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (pCVar8,"Pass 1: Building list of animation files and getting total frame count");
    local_fc = (char *)0x0;
    DAT_03670b5c = 0;
    local_f8 = (char *)0x1869f;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_2ca0);
    local_100 = 0;
    local_f0 = (in_stack_0000000c->motion_list).motions;
LAB_00592a67:
    iVar13 = local_100;
    pcVar35 = (char *)0x0;
    pcVar33 = (char *)&local_21c8;
    uVar32 = 0x592a7f;
    pCVar3 = local_114;
    local_c0 = (float)core_skeledit_cpp_readNonEmptyLine_FUN_005895f0
                                ((char *)local_114,(FILE *)0x0,(int)in_stack_fffeec58);
    if (local_c0 == 0.0) {
LAB_00592ea4:
      if (iVar13 != 0) {
        d5 = 0x10a4;
        pcVar31 = "..\\core\\skeledit.cpp";
        pcVar29 = "rt";
        piVar28 = (int *)0x0;
        local_f4 = &DAT_0365caf8 + (in_stack_0000000c->motion_list).motion_count * 0x104;
        pCVar6 = (CBoneStructure *)
                 shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (local_f4,(char *)0x0,"rt","..\\core\\skeledit.cpp",0x10a4);
        if (pCVar6 == (CBoneStructure *)0x0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Can't open %s mentioned in %s");
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&CStack_2ca0,0,(uint)piVar28,(uint)pcVar29,(uint)pcVar31,d5,(uint)pcVar27);
          goto LAB_005927ee;
        }
        iVar13 = 1;
        do {
          iVar4 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)pCVar6);
          if (iVar4 < 0) break;
        } while ((iVar4 != 10) || (iVar13 = iVar13 + -1, 0 < iVar13));
        crt_stdio_c_fscanf_FUN_005fe7c0((FILE *)pCVar6,"%d\n");
        core_skeledit_cpp_CBoneStructure_readBONheader_FUN_0058a4a0(pCVar6,(FILE *)local_50,piVar28)
        ;
        shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)pCVar6,"..\\core\\skeledit.cpp",0x10b8);
        if (0x1869e < (int)local_fc) {
          local_fc = (char *)(local_50._0_4_ + -1);
        }
        if (0x1869e < (int)local_f8) {
          local_f8 = (char *)(local_50._0_4_ + -1);
        }
        if ((((int)local_fc < 0) || ((int)local_f8 < (int)local_fc)) ||
           ((int)local_50._0_4_ <= (int)local_f8)) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Invalid frame start/end for animation %s in %s");
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&CStack_2ca0,0,d5,(uint)pcVar27,(uint)pcVar30,(uint)d5_00,uVar32);
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
        afStack_28f8[(in_stack_0000000c->motion_list).motion_count] = (float)local_fc;
        local_100 = 0;
        (in_stack_0000000c->motion_list).motion_count =
             (in_stack_0000000c->motion_list).motion_count + 1;
        local_fc = (char *)0x0;
        local_f8 = (char *)0x1869f;
      }
    }
    else {
      in_stack_fffeec58 = (char *)0x9;
      pcVar35 = "animation";
      pCVar3 = (CBoneStructure *)&local_21c8;
      pcVar33 = (char *)0x592aa0;
      iVar4 = crt_string_c_strnicmp_FUN_005ff070((char *)pCVar3,"animation",9);
      if (iVar4 == 0) goto LAB_00592ea4;
    }
    if (local_c0 == 0.0) {
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
            pcVar27 = &DAT_0366b650;
            for (iVar4 = 0; iVar4 < CStack_2ca0.base_strlist.item_count + -1; iVar4 = iVar4 + 1) {
              pcVar33 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                                  (&CStack_2ca0.base_strlist,iVar4);
              iVar7 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar27,"%s\r\n");
              pcVar27 = pcVar27 + iVar7;
            }
            shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0
                      (g_CEditorToolsPtr,&DAT_0366b650);
          }
          else {
            pCVar6 = (CBoneStructure *)
                     shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                               (&CStack_2ca0.base_strlist,iVar13);
            core_skeledit_cpp_CBoneStructure_importBON_FUN_0058a3d0(pCVar6,(char *)pCVar3);
            pcVar33 = &stack0xfffeec10;
            core_skeledit_cpp_FUN_0058afe0();
            pCVar3 = pCVar6;
          }
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&CStack_2ca0,0,(uint)pcVar33,(uint)pCVar3,(uint)pcVar35,(uint)in_stack_fffeec58,
                   (uint)in_stack_fffeec5c);
        return 0;
      }
      core_skeleton_cpp_CSkeleton_allocMemory_FUN_00599910
                (in_stack_0000000c,iStack_decc,(int)local_104);
      iVar13 = 0;
      if (0 < in_stack_0000000c->bone_count) {
        pcVar27 = acStack_dec8;
        local_50._8_4_ = in_stack_0000000c;
        pSVar10 = in_stack_0000000c->bone_list;
        do {
          pSVar11 = pSVar10 + 1;
          ((SBone *)(local_50._8_4_ + 0x2855c))->parent_index = aiStack_dea8[iVar13 * 0x21];
          iVar13 = iVar13 + 1;
          pcVar30 = pcVar27;
          do {
            cVar1 = *pcVar30;
            pSVar10->bone_name[0] = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar30[1];
            pcVar30 = pcVar30 + 2;
            pSVar10->bone_name[1] = cVar1;
            pSVar10 = (SBone *)(pSVar10->bone_name + 2);
          } while (cVar1 != '\0');
          pcVar27 = pcVar27 + 0x84;
          local_50._8_4_ = (CSkeleton *)(((CMotionList *)local_50._8_4_)->state_names[1] + 2);
          pSVar10 = pSVar11;
        } while (iVar13 < in_stack_0000000c->bone_count);
      }
      pcVar27 = (char *)0x592ba5;
      crt_stdio_c_fseek_FUN_005ffacc((FILE *)local_114,(long)local_108,0);
      local_30 = 0.0;
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
          pcVar30 = (char *)0x592c2b;
          shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                    (g_CEditorToolsPtr,(float)*(int *)(local_50._24_4_ + 0x60),(float)(int)local_104
                    );
          pCVar3 = local_114;
          do {
            pcVar31 = local_209c;
            pcVar29 = (char *)0x592c43;
            iVar13 = core_skeledit_cpp_readNonEmptyLine_FUN_005895f0
                               ((char *)pCVar3,(FILE *)&DAT_00000001,(int)pcVar33);
            if (iVar13 == 0) {
              g_CurrentFilename = "..\\core\\skeledit.cpp";
              g_CurrentLineNumber = 0x11a5;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Error parsing file!");
            }
            pcVar34 = (char *)0x9;
            pcVar33 = "animation";
            str1 = (CSkeleton *)local_209c;
            matrix_ptr = (char *)0x592c61;
            iVar13 = crt_string_c_strnicmp_FUN_005ff070((char *)str1,"animation",9);
            fVar15 = local_34;
          } while (iVar13 != 0);
          local_e4->transition_count = 0;
          local_e4->signal_count = 0;
          local_e4->fps = 30.0;
          local_e4->exit_forward_cmd = 1;
          local_e4->exit_forward_tween_time = 0.0;
          local_e4->exit_forward_set_new_state = 0;
          local_dc = 0.0;
          local_e4->exit_forward_from_frame = local_e4->frame_count;
          local_d8 = 5.60519e-45;
          local_e4->exit_forward_to_motion = (int)local_30;
          local_d4 = 0.0;
          local_e4->exit_backward_to_frame = 0.0;
          local_24 = (float)(local_e4->frame_count + -1);
          local_e4->marker_count = 0;
          local_e4->exit_backward_to_motion = (int)local_30;
          local_e4->exit_forward_to_frame = (float)(int)local_24;
          local_cc = -99999.0;
          local_1b8 = -99999.0;
          local_1bc = -99999.0;
          local_1c0 = -99999.0;
          local_c4 = 0.0;
          local_d0 = (FILE *)0x0;
          local_bc = 0.0;
          local_8c._0_4_ = local_e4->frame_count + -1;
          local_c8 = -99998.0;
          local_94 = local_e4->transitions;
          local_e8 = 0.0;
          local_8c._8_4_ = &local_e4->exit_forward_tween_time;
          local_13c = 0.0;
          local_138 = 0.0;
          local_b0._16_4_ = &local_e4->fps;
          pfVar19 = (float *)&DAT_00665968;
          pCVar22 = &CStack_42c;
          for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
            pCVar22->m[0].w = *pfVar19;
            pfVar19 = pfVar19 + (uint)bVar25 * -2 + 1;
            pCVar22 = (CMatrix3x4f *)((int)pCVar22 + ((uint)bVar25 * -2 + 1) * 4);
          }
          local_134 = 0.0;
          local_b0._12_4_ = fVar15;
          if (0 < *(int *)((int)aiStack_2718 + (int)fVar15)) {
            do {
              core_skeledit_cpp_readNonEmptyLine_FUN_005895f0
                        ((char *)local_114,(FILE *)&DAT_00000001,(int)pcVar27);
              iVar13 = crt_string_c_strnicmp_FUN_005ff070(local_209c,"fps",3);
              if (iVar13 == 0) {
                pcVar27 = "%f";
                pcVar5 = local_2099;
                while ((g_CharacterClassificationTable[(byte)(*pcVar5 + 1)] & 2U) != 0) {
                  pcVar5 = pcVar5 + 1;
                }
                iVar13 = crt_stdio_c_sscanf_FUN_0060013c(pcVar5,"%f");
                if (iVar13 != 1) {
                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                            (g_CEditorToolsPtr,"Error parsing \"fps\" statement for animation %s in %s:\n%s");
                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                            (&CStack_2ca0,0,(uint)pcVar31,(uint)matrix_ptr,(uint)str1,(uint)pcVar33,
                             (uint)pcVar34);
                  goto LAB_005927ee;
                }
              }
              else {
                iVar13 = crt_string_c_strnicmp_FUN_005ff070(local_209c,"if",2);
                if (iVar13 == 0) {
                  if (0x2c < local_e4->transition_count) {
                    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                              (g_CEditorToolsPtr,"Too many transitions in animation %s in %s, max is %d");
                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                              (&CStack_2ca0,0,(uint)pcVar31,(uint)matrix_ptr,(uint)str1,
                               (uint)pcVar33,(uint)pcVar34);
                    goto LAB_005927ee;
                  }
                  local_b0._20_4_ = local_2099;
                  while ((g_CharacterClassificationTable[(byte)(*(char *)local_b0._20_4_ + 1)] & 2U)
                         != 0) {
                    local_b0._20_4_ = local_b0._20_4_ + 1;
                  }
                  local_98 = -NAN;
                  crt_stdio_c_sscanf_FUN_0060013c((char *)local_b0._20_4_,"%s %s%n");
                  if ((int)local_98 < 3) {
                    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                              (g_CEditorToolsPtr,"Error parsing \"if\" statement for animation %s in %s:\n%s");
                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                              (&CStack_2ca0,0,(uint)matrix_ptr,(uint)str1,(uint)pcVar33,
                               (uint)pcVar34,(uint)pcVar35);
                    goto LAB_005927ee;
                  }
                  dest = local_94 + local_e4->transition_count;
                  pcVar27 = (char *)0x593bf7;
                  crt_memory_c_memset_FUN_005fde40(dest,0,0x18);
                  iVar13 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0
                                     (&in_stack_0000000c->motion_list);
                  dest->desired_state = iVar13;
                  if (iVar13 < 0) {
                    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                              (g_CEditorToolsPtr,"Invalid desired state \"%s\" in \"if\" statement for animation %s in %s:\n%s");
                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                              (&CStack_2ca0,0,(uint)pcVar33,(uint)pcVar34,(uint)pcVar35,
                               (uint)in_stack_fffeec58,(uint)in_stack_fffeec5c);
                    goto LAB_005927ee;
                  }
                  iVar13 = 0;
                  pSVar14 = local_e4;
                  if (0 < local_e4->transition_count) {
                    do {
                      if (dest->desired_state == pSVar14->transitions[0].desired_state) {
                        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                  (g_CEditorToolsPtr,"Duplicate if %s's for animation %s in %s");
                        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                  (&CStack_2ca0,0,(uint)pcVar33,(uint)pcVar34,(uint)pcVar35,
                                   (uint)in_stack_fffeec58,(uint)in_stack_fffeec5c);
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
                              (g_CEditorToolsPtr,"Invalid transition command in \"if %s\" statement for animation %s in %s:\n%s");
                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                              (&CStack_2ca0,0,(uint)pcVar34,(uint)pcVar35,(uint)in_stack_fffeec58,
                               (uint)in_stack_fffeec5c,(uint)in_stack_fffeec60);
                    goto LAB_005927ee;
                  }
                  pcVar34 = (char *)(local_b0._20_4_ + (int)local_98);
                  while ((g_CharacterClassificationTable[(byte)(*pcVar34 + 1)] & 2U) != 0) {
                    pcVar34 = pcVar34 + 1;
                  }
                  local_98 = -NAN;
                  crt_stdio_c_sscanf_FUN_0060013c(pcVar34,"\"%[^\"]\"%n");
                  if ((int)local_98 < 0) {
                    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                              (g_CEditorToolsPtr,"Error parsing \"if %s\" statement parms for animation %s in %s:\n%s");
                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                              (&CStack_2ca0,0,(uint)pcVar35,(uint)in_stack_fffeec58,
                               (uint)in_stack_fffeec5c,(uint)in_stack_fffeec60,
                               (uint)in_stack_fffeec64);
                    goto LAB_005927ee;
                  }
                  pcVar31 = (char *)0x0;
                  pcVar29 = (char *)afStack_910;
                  pcVar30 = (char *)0x593d7a;
                  crt_string_c_splitpath_FUN_005ff178
                            (pcVar29,(char *)0x0,(char *)0x0,(char *)afStack_aa0,(char *)0x0);
                  pcVar33 = (char *)afStack_aa0;
                  matrix_ptr = (char *)0x593d92;
                  str1 = in_stack_0000000c;
                  iVar13 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                                     (&in_stack_0000000c->motion_list);
                  dest->to_motion_number = iVar13;
                  if (iVar13 < 0) {
                    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                              (g_CEditorToolsPtr,"Invalid destination animation for \"if %s\" statement for animation %s in %s:\n%s");
                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                              (&CStack_2ca0,0,(uint)in_stack_fffeec5c,(uint)in_stack_fffeec60,
                               (uint)in_stack_fffeec64,(uint)in_stack_fffeec68,
                               (uint)in_stack_fffeec6c);
                    goto LAB_005927ee;
                  }
                  pfVar19 = (float *)(pcVar34 + (int)local_98);
                  while ((g_CharacterClassificationTable[(byte)(*(byte *)pfVar19 + 1)] & 2U) != 0) {
                    pfVar19 = (float *)((int)pfVar19 + 1);
                  }
                  if (*(byte *)pfVar19 == 0x5b) {
                    local_98 = -NAN;
                    matrix_ptr = (char *)0x593ed7;
                    crt_stdio_c_sscanf_FUN_0060013c((char *)pfVar19,"[ %[^]] ]%n");
                    if ((int)local_98 < 0) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Can't parse destination frame number for \"if %s\" statement for animation %s in %s:\n%s");
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                (&CStack_2ca0,0,(uint)in_stack_fffeec60,(uint)in_stack_fffeec64,
                                 (uint)in_stack_fffeec68,(uint)in_stack_fffeec6c,in_stack_fffeec70);
                      goto LAB_005927ee;
                    }
                    pcVar33 = (char *)afStack_780;
                    str1 = (CSkeleton *)0x593f07;
                    iVar13 = core_skeledit_cpp_FUN_00592520();
                    if (iVar13 == 0) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Can't parse destination frame number for \"if %s\" statement for animation %s in %s:\n%s");
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                (&CStack_2ca0,0,(uint)in_stack_fffeec64,(uint)in_stack_fffeec68,
                                 (uint)in_stack_fffeec6c,in_stack_fffeec70,in_stack_fffeec74);
                      goto LAB_005927ee;
                    }
                    local_24 = local_90;
                    dest->to_frame_number = (float)(int)local_90;
                    pfVar19 = (float *)((int)pfVar19 + (int)local_98);
                    while ((g_CharacterClassificationTable[(byte)(*(byte *)pfVar19 + 1)] & 2U) != 0)
                    {
                      pfVar19 = (float *)((int)pfVar19 + 1);
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
                    iVar13 = crt_string_c_strnicmp_FUN_005ff070((char *)pfVar19,"over",4);
                    if (iVar13 == 0) {
                      local_98 = -NAN;
                      str1 = (CSkeleton *)0x593fe1;
                      pcVar33 = (char *)pfVar19;
                      crt_stdio_c_sscanf_FUN_0060013c((char *)pfVar19,"%*s%f%n");
                      if ((int)local_98 < 0) {
                        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                  (g_CEditorToolsPtr,"Can't parse tween time for \"if %s\" statement for animation %s in %s:\n%s");
                        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                  (&CStack_2ca0,0,(uint)in_stack_fffeec64,(uint)in_stack_fffeec68,
                                   (uint)in_stack_fffeec6c,in_stack_fffeec70,in_stack_fffeec74);
                        goto LAB_005927ee;
                      }
                      local_11c = (double)dest->tween_time;
                      if ((local_11c < 0.0) || (99 < local_11c)) {
                        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                  (g_CEditorToolsPtr,"Invalid tween time for \"if %s\" statement for animation %s in %s:\n%s");
                        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                  (&CStack_2ca0,0,(uint)in_stack_fffeec64,(uint)in_stack_fffeec68,
                                   (uint)in_stack_fffeec6c,in_stack_fffeec70,in_stack_fffeec74);
                        goto LAB_005927ee;
                      }
                      pfVar19 = (float *)((int)pfVar19 + (int)local_98);
                      while ((g_CharacterClassificationTable[(byte)(*(byte *)pfVar19 + 1)] & 2U) !=
                             0) {
                        pfVar19 = (float *)((int)pfVar19 + 1);
                      }
                    }
                  }
                  in_stack_fffeec5c = (char *)0x9;
                  in_stack_fffeec58 = "keepState";
                  pcVar34 = (char *)0x593e8a;
                  pcVar35 = (char *)pfVar19;
                  iVar13 = crt_string_c_strnicmp_FUN_005ff070
                                     ((char *)pfVar19,"keepState",9);
                  if (iVar13 == 0) {
                    pfVar19 = (float *)((int)pfVar19 + 9);
                    dest->set_new_state_as_desired = 1;
                    while ((g_CharacterClassificationTable[(byte)(*(byte *)pfVar19 + 1)] & 2U) != 0)
                    {
                      pfVar19 = (float *)((int)pfVar19 + 1);
                    }
                  }
                  else {
                    dest->set_new_state_as_desired = 0;
                  }
                  while ((g_CharacterClassificationTable[(byte)(*(byte *)pfVar19 + 1)] & 2U) != 0) {
                    pfVar19 = (float *)((int)pfVar19 + 1);
                  }
                  if (*(byte *)pfVar19 != 0) {
                    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                              (g_CEditorToolsPtr,"Extra parms in \"if %s\" statement for animation %s in %s:\n%s\nExtra parms: \"%s\"");
                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                              (&CStack_2ca0,0,(uint)in_stack_fffeec68,(uint)in_stack_fffeec6c,
                               in_stack_fffeec70,in_stack_fffeec74,in_stack_fffeec78);
                    goto LAB_005927ee;
                  }
                  local_e4->transition_count = local_e4->transition_count + 1;
                }
                else {
                  iVar13 = crt_string_c_strnicmp_FUN_005ff070(local_209c,"->",2);
                  if (iVar13 == 0) {
                    pfVar19 = (float *)(local_209c + 2);
                    while ((g_CharacterClassificationTable[(byte)(*(char *)pfVar19 + 1)] & 2U) != 0)
                    {
                      pfVar19 = (float *)((int)pfVar19 + 1);
                    }
                    pcVar29 = (char *)0x6;
                    pcVar30 = "(loop)";
                    pcVar27 = (char *)0x59417a;
                    pcVar5 = (char *)pfVar19;
                    iVar13 = crt_string_c_strnicmp_FUN_005ff070((char *)pfVar19,"(loop)",6);
                    pCVar8 = (CEditorTools *)((int)pfVar19 + 6);
                    if (iVar13 == 0) {
                      local_e4->exit_forward_to_frame = 0.0;
                      local_e4->exit_forward_to_motion = (int)local_30;
                      while ((g_CharacterClassificationTable[(byte)(pCVar8->field0_0x0 + 1)] & 2U)
                             != 0) {
                        pCVar8 = pCVar8 + 1;
                      }
                    }
                    else {
                      pcVar31 = (char *)0x6;
                      pcVar29 = "(stop)";
                      pcVar5 = (char *)0x5941d7;
                      pcVar30 = (char *)pfVar19;
                      iVar13 = crt_string_c_strnicmp_FUN_005ff070((char *)pfVar19,"(stop)",6)
                      ;
                      if (iVar13 == 0) {
                        local_e4->exit_forward_to_motion = (int)local_30;
                        local_24 = (float)(local_e4->frame_count + -1);
                        local_e4->exit_forward_to_frame = (float)(int)local_24;
                        while ((g_CharacterClassificationTable[(byte)(pCVar8->field0_0x0 + 1)] & 2U)
                               != 0) {
                          pCVar8 = pCVar8 + 1;
                        }
                      }
                      else {
                        local_60.y = -NAN;
                        crt_stdio_c_sscanf_FUN_0060013c((char *)pfVar19," \"%[^\"]\" %n");
                        if ((int)local_60.y < 0) {
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Error parsing \"->\" statement parms for animation %s in %s:\n%s");
                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                    (&CStack_2ca0,0,(uint)pcVar34,(uint)pcVar35,
                                     (uint)in_stack_fffeec58,(uint)in_stack_fffeec5c,
                                     (uint)in_stack_fffeec60);
                          goto LAB_005927ee;
                        }
                        pcVar29 = (char *)0x0;
                        pcVar30 = (char *)afStack_b68;
                        pcVar5 = (char *)0x59424d;
                        crt_string_c_splitpath_FUN_005ff178
                                  (pcVar30,(char *)0x0,(char *)0x0,acStack_9d8,(char *)0x0);
                        pcVar33 = (char *)0x0;
                        str1 = (CSkeleton *)acStack_9d8;
                        pcVar31 = (char *)0x594265;
                        matrix_ptr = (char *)in_stack_0000000c;
                        iVar13 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                                           (&in_stack_0000000c->motion_list);
                        local_e4->exit_forward_to_motion = iVar13;
                        if (iVar13 < 0) {
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Invalid destination animation for \"->\" statement for animation %s in %s:\n%s");
                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                    (&CStack_2ca0,0,(uint)in_stack_fffeec58,(uint)in_stack_fffeec5c,
                                     (uint)in_stack_fffeec60,(uint)in_stack_fffeec64,
                                     (uint)in_stack_fffeec68);
                          goto LAB_005927ee;
                        }
                        pCVar8 = (CEditorTools *)((int)pfVar19 + (int)local_60.y);
                        while ((g_CharacterClassificationTable[(byte)(pCVar8->field0_0x0 + 1)] & 2U)
                               != 0) {
                          pCVar8 = pCVar8 + 1;
                        }
                        if (pCVar8->field0_0x0 == '[') {
                          local_60.y = -NAN;
                          pcVar31 = (char *)0x5943a6;
                          crt_stdio_c_sscanf_FUN_0060013c(&pCVar8->field0_0x0,"[ %[^]] ]%n");
                          if ((int)local_60.y < 0) {
                            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                      (g_CEditorToolsPtr,"Can't parse destination frame number for \"->\" statement for animation %s in %s:\n%s");
                            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                      (&CStack_2ca0,0,(uint)in_stack_fffeec5c,
                                       (uint)in_stack_fffeec60,(uint)in_stack_fffeec64,
                                       (uint)in_stack_fffeec68,(uint)in_stack_fffeec6c);
                            goto LAB_005927ee;
                          }
                          pcVar35 = &DAT_00000001;
                          pcVar34 = (char *)(in_stack_0000000c->motion_list).motions
                                            [local_e4->exit_forward_to_motion].frame_count;
                          pcVar33 = local_8c + 4;
                          str1 = (CSkeleton *)(auStack_71c + 300);
                          matrix_ptr = (char *)0x5943d9;
                          iVar13 = core_skeledit_cpp_FUN_00592520();
                          if (iVar13 == 0) {
                            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                      (g_CEditorToolsPtr,"Can't parse destination frame number for \"->\" statement for animation %s in %s:\n%s");
                            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                      (&CStack_2ca0,0,(uint)in_stack_fffeec60,
                                       (uint)in_stack_fffeec64,(uint)in_stack_fffeec68,
                                       (uint)in_stack_fffeec6c,in_stack_fffeec70);
                            goto LAB_005927ee;
                          }
                          local_24 = (float)local_8c._4_4_;
                          local_e4->exit_forward_to_frame = (float)(int)local_8c._4_4_;
                          pCVar8 = pCVar8 + (int)local_60.y;
                          while ((g_CharacterClassificationTable[(byte)(pCVar8->field0_0x0 + 1)] &
                                 2U) != 0) {
                            pCVar8 = pCVar8 + 1;
                          }
                        }
                        else {
                          local_e4->exit_forward_to_frame = 0.0;
                        }
                        if (pCVar8->field0_0x0 != '\0') {
                          local_60.y = -NAN;
                          crt_stdio_c_sscanf_FUN_0060013c(&pCVar8->field0_0x0,"%s%n");
                          if ((int)local_60.y < 1) {
                            g_CurrentFilename = "..\\core\\skeledit.cpp";
                            g_CurrentLineNumber = 0x129f;
                            core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze!");
                          }
                          pcVar5 = (char *)afStack_2ac;
                          pcVar27 = (char *)0x594358;
                          iVar13 = core_skeledit_cpp_FUN_005925c0();
                          if (iVar13 != 0) {
                            local_e4->exit_forward_cmd = iVar13;
                            pCVar8 = pCVar8 + (int)local_60.y;
                            while ((g_CharacterClassificationTable[(byte)(pCVar8->field0_0x0 + 1)] &
                                   2U) != 0) {
                              pCVar8 = pCVar8 + 1;
                            }
                            if (local_e4->exit_forward_cmd == 2) {
                              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                        (g_CEditorToolsPtr,"Invalid transition command in \"->\" statement for animation %s in %s:\n%s");
                              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                        (&CStack_2ca0,0,(uint)pcVar31,(uint)matrix_ptr,(uint)str1,
                                         (uint)pcVar33,(uint)pcVar34);
                              goto LAB_005927ee;
                            }
                            local_e4->exit_forward_tween_time = 0.0;
                            switch(local_e4->exit_forward_cmd) {
                            case 3:
                            case 4:
                            case 5:
                            case 6:
                              pcVar30 = &DAT_00000004;
                              pcVar5 = "over";
                              pcVar27 = &pCVar8->field0_0x0;
                              iVar13 = crt_string_c_strnicmp_FUN_005ff070
                                                 (&pCVar8->field0_0x0,"over",4);
                              if (iVar13 == 0) {
                                pcVar29 = (char *)&local_60.y;
                                pcVar5 = "%*s%f%n";
                                local_60.y = -NAN;
                                pcVar27 = &pCVar8->field0_0x0;
                                pcVar30 = (char *)local_8c._8_4_;
                                crt_stdio_c_sscanf_FUN_0060013c
                                          (&pCVar8->field0_0x0,"%*s%f%n");
                                pSVar14 = local_e4;
                                if ((int)local_60.y < 0) {
                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                            (g_CEditorToolsPtr,"Can't parse tween time for \"->\" statement for animation %s in %s:\n%s");
                                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                            (&CStack_2ca0,0,(uint)pcVar5,(uint)pcVar30,(uint)pcVar29
                                             ,(uint)pcVar31,(uint)matrix_ptr);
                                  goto LAB_005927ee;
                                }
                                local_124 = (double)local_e4->exit_forward_tween_time;
                                if ((local_124 < 0.0) || (99 < local_124)) {
                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                            (g_CEditorToolsPtr,"Invalid tween time for \"->\" statement for animation %s in %s:\n%s");
                                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                            (&CStack_2ca0,0,(uint)pcVar5,(uint)pcVar30,(uint)pcVar29
                                             ,(uint)pcVar31,(uint)matrix_ptr);
                                  goto LAB_005927ee;
                                }
                                pCVar8 = pCVar8 + (int)local_60.y;
                                while ((g_CharacterClassificationTable
                                        [(byte)(pCVar8->field0_0x0 + 1)] & 2U) != 0) {
                                  pCVar8 = pCVar8 + 1;
                                }
                                if ((local_e4->exit_forward_cmd == 5) ||
                                   (local_e4->exit_forward_cmd == 6)) {
                                  dVar26 = crt_math_c_round_FUN_005fe6b0
                                                     ((double)((float)local_e4->frame_count -
                                                              local_e4->exit_forward_tween_time *
                                                              local_e4->fps));
                                  pSVar14->exit_forward_from_frame = (int)ROUND(dVar26);
                                  if (pSVar14->exit_forward_from_frame < 0) {
                                    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                              (g_CEditorToolsPtr,"Tween time for \"->\" statement is longer than animation time in animation %s in %s:\n%s"
                                              );
                                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                              (&CStack_2ca0,0,(uint)pcVar27,(uint)pcVar5,
                                               (uint)pcVar30,(uint)pcVar29,(uint)pcVar31);
                                    goto LAB_005927ee;
                                  }
                                }
                              }
                            }
                          }
                          iVar13 = crt_string_c_strnicmp_FUN_005ff070
                                             (&pCVar8->field0_0x0,"keepState",9);
                          if (iVar13 == 0) {
                            local_e4->exit_forward_set_new_state = 1;
                            pCVar8 = pCVar8 + 9;
                            while ((g_CharacterClassificationTable[(byte)(pCVar8->field0_0x0 + 1)] &
                                   2U) != 0) {
                              pCVar8 = pCVar8 + 1;
                            }
                          }
                          else {
                            local_e4->exit_forward_set_new_state = 0;
                          }
                        }
                      }
                    }
                    while ((g_CharacterClassificationTable[(byte)(pCVar8->field0_0x0 + 1)] & 2U) !=
                           0) {
                      pCVar8 = pCVar8 + 1;
                    }
                    if (pCVar8->field0_0x0 != '\0') {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Extra parms in \"->\" statement for animation %s in %s:\n%s\nExtra parms: \"%s\"");
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                (&CStack_2ca0,0,(uint)pcVar5,(uint)pcVar30,(uint)pcVar29,
                                 (uint)pcVar31,(uint)matrix_ptr);
                      goto LAB_005927ee;
                    }
                  }
                  else {
                    pcVar27 = (char *)0x59472b;
                    iVar13 = crt_string_c_strnicmp_FUN_005ff070(local_209c,"signal",6);
                    if (iVar13 == 0) {
                      pcVar30 = local_2099 + 3;
                      while ((g_CharacterClassificationTable[(byte)(*pcVar30 + 1)] & 2U) != 0) {
                        pcVar30 = pcVar30 + 1;
                      }
                      if (0xe < local_e4->signal_count) {
                        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                  (g_CEditorToolsPtr,"Too many signals in animation %s in %s, max is %d");
                        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                  (&CStack_2ca0,0,(uint)str1,(uint)pcVar33,(uint)pcVar34,
                                   (uint)pcVar35,(uint)in_stack_fffeec58);
                        goto LAB_005927ee;
                      }
                      pcVar27 = (char *)0x5947a8;
                      iVar13 = crt_stdio_c_sscanf_FUN_0060013c(pcVar30,"%d %*s %s");
                      if (iVar13 != 2) {
                        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                  (g_CEditorToolsPtr,"Error parsing \"signal\" statement for animation %s in %s:\n%s");
                        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                  (&CStack_2ca0,0,(uint)pcVar33,(uint)pcVar34,(uint)pcVar35,
                                   (uint)in_stack_fffeec58,(uint)in_stack_fffeec5c);
                        goto LAB_005927ee;
                      }
                      matrix_ptr = (char *)0x0;
                      pcVar31 = (char *)local_e4->frame_count;
                      pcVar29 = local_8c + 0x10;
                      pcVar30 = (char *)afStack_7e4;
                      iVar13 = core_skeledit_cpp_FUN_00592520();
                      if (iVar13 == 0) {
                        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                  (g_CEditorToolsPtr,"Invalid frame number in \"signal\" statement for animation %s in %s:\n%s");
                        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                  (&CStack_2ca0,0,(uint)pcVar34,(uint)pcVar35,
                                   (uint)in_stack_fffeec58,(uint)in_stack_fffeec5c,
                                   (uint)in_stack_fffeec60);
                        goto LAB_005927ee;
                      }
                      if ((float)local_8c._12_4_ == 0.0) {
                        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                  (g_CEditorToolsPtr,"Signal value cannot be 0 in \"signal\" statement for animation %s in %s:\n%s");
                        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                  (&CStack_2ca0,0,(uint)pcVar34,(uint)pcVar35,
                                   (uint)in_stack_fffeec58,(uint)in_stack_fffeec5c,
                                   (uint)in_stack_fffeec60);
                        goto LAB_005927ee;
                      }
                      local_e4->signals[local_e4->signal_count].value = local_8c._12_4_;
                      local_e4->signals[local_e4->signal_count].frame_number = local_8c._16_4_;
                      local_e4->signal_count = local_e4->signal_count + 1;
                    }
                    else {
                      pcVar31 = (char *)0x7;
                      pcVar29 = "reverse";
                      pcVar30 = local_209c;
                      uVar32 = 0x5948d5;
                      iVar13 = crt_string_c_strnicmp_FUN_005ff070(pcVar30,"reverse",7);
                      if (iVar13 == 0) {
                        local_dc = 1.4013e-45;
                      }
                      else {
                        matrix_ptr = (char *)0x5;
                        pcVar31 = "filename";
                        pcVar29 = local_209c;
                        pcVar30 = (char *)0x5948fb;
                        iVar13 = crt_string_c_strnicmp_FUN_005ff070(pcVar29,"filename",5);
                        if (iVar13 != 0) {
                          str1 = (CSkeleton *)0x6;
                          matrix_ptr = "frames";
                          pcVar31 = local_209c;
                          pcVar29 = (char *)0x594919;
                          iVar13 = crt_string_c_strnicmp_FUN_005ff070(pcVar31,"frames",6);
                          if (iVar13 != 0) {
                            matrix_ptr = local_209c;
                            pcVar31 = (char *)0x594937;
                            iVar13 = crt_string_c_strnicmp_FUN_005ff070
                                               (matrix_ptr,"cancel",6);
                            if (iVar13 == 0) {
                              pfVar19 = (float *)(local_2099 + 3);
                              while ((g_CharacterClassificationTable[(byte)(*(byte *)pfVar19 + 1)] &
                                     2U) != 0) {
                                pfVar19 = (float *)((int)pfVar19 + 1);
                              }
                              pcVar34 = "none";
                              local_d8 = 0.0;
                              str1 = (CSkeleton *)0x594970;
                              pcVar33 = (char *)pfVar19;
                              pcVar5 = crt_string_c_strstr_FUN_005fedd0
                                                 ((char *)pfVar19,"none");
                              if (pcVar5 == (char *)0x0) {
LAB_00594985:
                                do {
                                  if (*(byte *)pfVar19 == 0) break;
                                  uVar32 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*(byte *)pfVar19);
                                  if (uVar32 < 0x50) {
                                    if (0x41 < uVar32) {
                                      if (uVar32 < 0x43) {
                                        local_d4 = (float)((uint)local_d4 | 4);
                                      }
                                      else {
                                        if (uVar32 != 0x48) {
                                          pfVar19 = (float *)((int)pfVar19 + 1);
                                          goto LAB_00594985;
                                        }
                                        local_d4 = (float)((uint)local_d4 | 2);
                                      }
                                    }
                                  }
                                  else if (uVar32 < 0x51) {
                                    local_d4 = (float)((uint)local_d4 | 1);
                                  }
                                  else if (uVar32 < 0x59) {
                                    if (uVar32 == 0x58) {
                                      local_d8 = (float)((uint)local_d8 | 1);
                                    }
                                  }
                                  else if (uVar32 < 0x5a) {
                                    local_d8 = (float)((uint)local_d8 | 2);
                                  }
                                  else if (uVar32 == 0x5a) {
                                    local_d8 = (float)((uint)local_d8 | 4);
                                  }
                                  pfVar19 = (float *)((int)pfVar19 + 1);
                                } while( true );
                              }
                            }
                            else {
                              matrix_ptr = (char *)0x5949fd;
                              iVar13 = crt_string_c_strnicmp_FUN_005ff070
                                                 (local_209c,"bias",4);
                              if (iVar13 == 0) {
                                pfVar19 = (float *)local_2099;
                                while (pcVar31 = (char *)((int)pfVar19 + 1),
                                      (g_CharacterClassificationTable
                                       [(byte)(*(char *)&((CBoneStructure *)pcVar31)->bone_count + 1
                                              )] & 2U) != 0) {
                                  pfVar19 = (float *)&((CBoneStructure *)pcVar31)->bone_count;
                                }
                                matrix_ptr = "frame %s to \"%[^\"]\" frame %s%n";
                                local_8c._20_4_ = -NAN;
                                pcVar29 = (char *)0x594a50;
                                crt_stdio_c_sscanf_FUN_0060013c
                                          (pcVar31,"frame %s to \"%[^\"]\" frame %s%n");
                                iVar13 = DAT_03670b5c;
                                if ((int)local_8c._20_4_ < 0xf) {
                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                            (g_CEditorToolsPtr,"Can't parse \"bias\" statement for animation %s in %s:%s");
                                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                            (&CStack_2ca0,0,(uint)in_stack_fffeec60,
                                             (uint)in_stack_fffeec64,(uint)in_stack_fffeec68,
                                             (uint)in_stack_fffeec6c,in_stack_fffeec70);
                                  goto LAB_005927ee;
                                }
                                (&DAT_03670b60)[DAT_03670b5c * 4] = local_30;
                                pcVar33 = (char *)afStack_528;
                                str1 = (CSkeleton *)0x594ac3;
                                iVar4 = core_skeledit_cpp_FUN_00592520();
                                if (iVar4 == 0) {
                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                            (g_CEditorToolsPtr,"Can't parse frame to bias in \"bias\" statement for animation %s in %s:%s");
                                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                            (&CStack_2ca0,0,(uint)in_stack_fffeec64,
                                             (uint)in_stack_fffeec68,(uint)in_stack_fffeec6c,
                                             in_stack_fffeec70,in_stack_fffeec74);
                                  goto LAB_005927ee;
                                }
                                fVar15 = (float)core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                                                          (&in_stack_0000000c->motion_list);
                                (&DAT_03670b68)[iVar13 * 4] = fVar15;
                                if ((int)fVar15 < 0) {
                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                            (g_CEditorToolsPtr,"Invalid reference motion \"%s\" in \"bias\" statement for animation %s in %s:%s");
                                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                            (&CStack_2ca0,0,(uint)in_stack_fffeec68,
                                             (uint)in_stack_fffeec6c,in_stack_fffeec70,
                                             in_stack_fffeec74,in_stack_fffeec78);
                                  goto LAB_005927ee;
                                }
                                if (fVar15 == local_30) {
                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                            (g_CEditorToolsPtr,"Reference motion is same as motion to bias in \"bias\" statement for animation %s in %s:%s");
                                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                            (&CStack_2ca0,0,(uint)in_stack_fffeec68,
                                             (uint)in_stack_fffeec6c,in_stack_fffeec70,
                                             in_stack_fffeec74,in_stack_fffeec78);
                                  goto LAB_005927ee;
                                }
                                in_stack_fffeec60 = (float *)0x0;
                                in_stack_fffeec5c =
                                     (char *)(in_stack_0000000c->motion_list).motions[(int)fVar15].
                                             frame_count;
                                in_stack_fffeec58 = (char *)(&DAT_03670b6c + iVar13 * 4);
                                pcVar35 = (char *)afStack_58c;
                                pcVar34 = (char *)0x594bd1;
                                iVar13 = core_skeledit_cpp_FUN_00592520();
                                if (iVar13 == 0) {
                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                            (g_CEditorToolsPtr,"Can't parse frame to bias in \"bias\" statement for animation %s in %s:%s");
                                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                            (&CStack_2ca0,0,(uint)in_stack_fffeec6c,
                                             in_stack_fffeec70,in_stack_fffeec74,in_stack_fffeec78,
                                             in_stack_fffeec7c);
                                  goto LAB_005927ee;
                                }
                                DAT_03670b5c = DAT_03670b5c + 1;
                              }
                              else {
                                pcVar35 = (char *)0x7;
                                pcVar34 = "markers";
                                pcVar33 = local_209c;
                                str1 = (CSkeleton *)0x594c32;
                                iVar13 = crt_string_c_strnicmp_FUN_005ff070
                                                   (pcVar33,"markers",7);
                                if (iVar13 == 0) {
                                  if (0 < local_e4->marker_count) {
                                    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                              (g_CEditorToolsPtr,"Multiple \"markers\" statements for animation %s in %s"
                                              );
                                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                              (&CStack_2ca0,0,(uint)in_stack_fffeec60,
                                               (uint)in_stack_fffeec64,(uint)in_stack_fffeec68,
                                               (uint)in_stack_fffeec6c,in_stack_fffeec70);
                                    goto LAB_005927ee;
                                  }
                                  pcVar5 = local_2099 + 4;
                                  while ((g_CharacterClassificationTable[(byte)(*pcVar5 + 1)] & 2U)
                                         != 0) {
                                    pcVar5 = pcVar5 + 1;
                                  }
                                  cVar1 = *pcVar5;
                                  while (cVar1 != '\0') {
                                    local_8c._24_4_ = -NAN;
                                    crt_stdio_c_sscanf_FUN_0060013c(pcVar5,"%d%n");
                                    if ((int)local_8c._24_4_ < 0) {
                                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                (g_CEditorToolsPtr,
                                                 "Can't parse \"markers\" statement for animation %s in %s:\n%s");
                                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                (&CStack_2ca0,0,uVar32,(uint)pcVar30,(uint)pcVar29,
                                                 (uint)pcVar31,(uint)matrix_ptr);
                                      goto LAB_005927ee;
                                    }
                                    if (((int)local_8c._28_4_ < 1) ||
                                       (local_e4->frame_count <= (int)local_8c._28_4_)) {
                                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                (g_CEditorToolsPtr,
                                                 "Can't place marker at invalid frame number %d for animation %s in %s:\n%s");
                                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                (&CStack_2ca0,0,uVar32,(uint)pcVar30,(uint)pcVar29,
                                                 (uint)pcVar31,(uint)matrix_ptr);
                                      goto LAB_005927ee;
                                    }
                                    if (9 < local_e4->marker_count) {
                                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                (g_CEditorToolsPtr,
                                                 "Too many markers in animation %s in %s:\n%s");
                                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                (&CStack_2ca0,0,uVar32,(uint)pcVar30,(uint)pcVar29,
                                                 (uint)pcVar31,(uint)matrix_ptr);
                                      goto LAB_005927ee;
                                    }
                                    if ((0 < local_e4->marker_count) &&
                                       ((int)local_8c._28_4_ <=
                                        local_e4->markers[local_e4->marker_count + -1])) {
                                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                (g_CEditorToolsPtr,
                                                 "Frame numbers are not strictly increasing in \"markers\" statement in animation %s in %s:\n%s");
                                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                (&CStack_2ca0,0,uVar32,(uint)pcVar30,(uint)pcVar29,
                                                 (uint)pcVar31,(uint)matrix_ptr);
                                      goto LAB_005927ee;
                                    }
                                    local_e4->markers[local_e4->marker_count] = local_8c._28_4_;
                                    local_e4->marker_count = local_e4->marker_count + 1;
                                    pcVar5 = pcVar5 + local_8c._24_4_;
                                    while ((g_CharacterClassificationTable[(byte)(*pcVar5 + 1)] & 2U
                                           ) != 0) {
                                      pcVar5 = pcVar5 + 1;
                                    }
                                    cVar1 = *pcVar5;
                                  }
                                }
                                else {
                                  pcVar33 = (char *)0x594e75;
                                  iVar13 = crt_string_c_strnicmp_FUN_005ff070
                                                     (local_209c,"displace",8);
                                  if (iVar13 == 0) {
                                    pcVar33 = local_2099 + 5;
                                    while ((g_CharacterClassificationTable[(byte)(*pcVar33 + 1)] &
                                           2U) != 0) {
                                      pcVar33 = (char *)((int)pcVar33 + 1);
                                    }
                                    in_stack_fffeec5c = (char *)&local_134;
                                    in_stack_fffeec58 = (char *)&local_138;
                                    pcVar35 = (char *)&local_13c;
                                    pcVar34 = "%f,%f,%f";
                                    str1 = (CSkeleton *)0x594ebc;
                                    iVar13 = crt_stdio_c_sscanf_FUN_0060013c
                                                       (pcVar33,"%f,%f,%f");
                                    if (iVar13 != 3) {
                                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                (g_CEditorToolsPtr,
                                                 "Can't parse displacement vector in \"displace\" keyword in animation %s in %s\n:%s");
                                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                (&CStack_2ca0,0,(uint)in_stack_fffeec68,
                                                 (uint)in_stack_fffeec6c,in_stack_fffeec70,
                                                 in_stack_fffeec74,in_stack_fffeec78);
                                      goto LAB_005927ee;
                                    }
                                  }
                                  else {
                                    pcVar34 = (char *)0x594f17;
                                    iVar13 = crt_string_c_strnicmp_FUN_005ff070
                                                       (local_209c,"totaldisplacement",0x11
                                                       );
                                    if (iVar13 == 0) {
                                      pbVar18 = abStack_208b;
LAB_00594f2a:
                                      do {
                                        pcVar34 = (char *)pbVar18;
                                        pbVar18 = (byte *)pcVar34 + 1;
                                      } while ((g_CharacterClassificationTable[(byte)(*pcVar34 + 1)]
                                               & 2U) != 0);
                                      if (*pcVar34 != 0) {
                                        local_8c._32_4_ =
                                             crt_ctype_c_toupper_FUN_005ff9e0((uint)(byte)*pcVar34);
                                        if (0x58 < (uint)local_8c._32_4_) {
                                          if (((uint)local_8c._32_4_ < 0x5a) ||
                                             ((uint)local_8c._32_4_ < 0x5b)) {
LAB_0059507b:
                                            pbVar18 = (byte *)pcVar34 + 1;
                                            if (((byte *)pcVar34)[1] == 0x3a) {
                                              pbVar18 = (byte *)pcVar34 + 2;
                                            }
                                            if (*pbVar18 == 0x3d) {
                                              pbVar18 = pbVar18 + 1;
                                            }
                                            in_stack_fffeec64 = (CMatrix3x4f *)0x7;
                                            iVar13 = crt_string_c_strnicmp_FUN_005ff070
                                                               ((char *)pbVar18,"display",7
                                                               );
                                            if (iVar13 == 0) {
                                              pbVar18 = pbVar18 + 7;
                                              local_8c._40_4_ = -99998.0;
                                            }
                                            else {
                                              local_60.x = -NAN;
                                              in_stack_fffeec68 = &local_60;
                                              in_stack_fffeec64 = (CMatrix3x4f *)(local_8c + 0x28);
                                              crt_stdio_c_sscanf_FUN_0060013c
                                                        ((char *)pbVar18,"%f%n");
                                              if ((int)local_60.x < 1) {
                                                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                          (g_CEditorToolsPtr,
                                                           "Can't parse \"totalDisplacement\" keyword in animation %s in %s\n:%s");
                                                shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                          (&CStack_2ca0,0,in_stack_fffeec74,
                                                           in_stack_fffeec78,in_stack_fffeec7c,
                                                           in_stack_fffeec80,in_stack_fffeec84);
                                                goto LAB_005927ee;
                                              }
                                              pbVar18 = pbVar18 + (int)local_60.x;
                                            }
                                            if ((float)local_8c._32_4_ == 1.23314e-43) {
                                              local_1c0 = (float)local_8c._40_4_;
                                            }
                                            if ((float)local_8c._32_4_ == 1.24716e-43) {
                                              local_1bc = (float)local_8c._40_4_;
                                            }
                                            if ((float)local_8c._32_4_ == 1.26117e-43) {
                                              local_1b8 = (float)local_8c._40_4_;
                                            }
                                          }
                                          else {
                                            if ((float)local_8c._32_4_ != 1.27518e-43)
                                            goto LAB_0059518b;
                                            local_8c._36_4_ = -NAN;
                                            crt_stdio_c_sscanf_FUN_0060013c(pcVar34,"[%[^- \t] - %[^] \t] ]%n");
                                            if (((int)local_8c._36_4_ < 5) ||
                                               (iVar13 = core_skeledit_cpp_FUN_00592520(),
                                               iVar13 == 0)) {
LAB_00594fab:
                                              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                        (g_CEditorToolsPtr,
                                                         "Can't parse frame range in \"totalDisplacement\" keyword in animation %s in %s\n:%s");
                                              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                        (&CStack_2ca0,0,in_stack_fffeec78,
                                                         in_stack_fffeec7c,in_stack_fffeec80,
                                                         in_stack_fffeec84,in_stack_fffeec88);
                                              goto LAB_005927ee;
                                            }
                                            in_stack_fffeec6c = (CVector3f *)0x0;
                                            in_stack_fffeec68 = (CVector3f *)local_e4->frame_count;
                                            in_stack_fffeec64 = (CMatrix3x4f *)local_8c;
                                            iVar13 = core_skeledit_cpp_FUN_00592520();
                                            if (iVar13 == 0) goto LAB_00594fab;
                                            if ((int)local_8c._0_4_ < (int)local_c4) {
                                              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                        (g_CEditorToolsPtr,
                                                         "Invalid frame range in \"totalDisplacement\" keyword in animation %s in %s\n:%s");
                                              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                        (&CStack_2ca0,0,(uint)in_stack_fffeec68,
                                                         (uint)in_stack_fffeec6c,in_stack_fffeec70,
                                                         in_stack_fffeec74,in_stack_fffeec78);
                                              goto LAB_005927ee;
                                            }
                                            pbVar18 = (byte *)pcVar34 + local_8c._36_4_;
                                          }
                                          goto LAB_00594f2a;
                                        }
                                        if (0x2b < (uint)local_8c._32_4_) {
                                          if ((uint)local_8c._32_4_ < 0x2d) goto LAB_00594f2a;
                                          if ((float)local_8c._32_4_ == 1.23314e-43)
                                          goto LAB_0059507b;
                                        }
LAB_0059518b:
                                        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                  (g_CEditorToolsPtr,
                                                   "Can't parse \"totalDisplacement\" keyword in animation %s in %s\n:%s");
                                        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                  (&CStack_2ca0,0,(uint)in_stack_fffeec6c,
                                                   in_stack_fffeec70,in_stack_fffeec74,
                                                   in_stack_fffeec78,in_stack_fffeec7c);
                                        goto LAB_005927ee;
                                      }
                                      in_stack_fffeec60 = &local_134;
                                      in_stack_fffeec5c = (char *)&local_138;
                                      in_stack_fffeec58 = (char *)&local_13c;
                                      pcVar35 = "%f,%f,%f";
                                      pcVar33 = (char *)0x594f71;
                                      crt_stdio_c_sscanf_FUN_0060013c(pcVar34,"%f,%f,%f");
                                    }
                                    else {
                                      in_stack_fffeec60 = (float *)0x6;
                                      in_stack_fffeec5c = "flipXZ";
                                      in_stack_fffeec58 = local_209c;
                                      pcVar35 = (char *)0x5951d9;
                                      iVar13 = crt_string_c_strnicmp_FUN_005ff070
                                                         (in_stack_fffeec58,"flipXZ",6);
                                      if (iVar13 == 0) {
                                        local_d0 = (FILE *)&DAT_00000001;
                                      }
                                      else {
                                        iVar13 = crt_string_c_strnicmp_FUN_005ff070
                                                           (local_209c,"rotate",6);
                                        if (iVar13 != 0) {
                                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                    (g_CEditorToolsPtr,
                                                     "Invalid keyword for animation %s in %s:\n%s");
                                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                    (&CStack_2ca0,0,in_stack_fffeec70,
                                                     in_stack_fffeec74,in_stack_fffeec78,
                                                     in_stack_fffeec7c,in_stack_fffeec80);
                                          goto LAB_005927ee;
                                        }
                                        if (local_bc != 0.0) {
                                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                    (g_CEditorToolsPtr,
                                                     "Multiple \"rotate\" keywords used in animation %s in %s");
                                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                    (&CStack_2ca0,0,in_stack_fffeec70,
                                                     in_stack_fffeec74,in_stack_fffeec78,
                                                     in_stack_fffeec7c,in_stack_fffeec80);
                                          goto LAB_005927ee;
                                        }
                                        in_stack_fffeec58 = local_2099 + 3;
                                        while ((g_CharacterClassificationTable
                                                [(byte)(*in_stack_fffeec58 + 1)] & 2U) != 0) {
                                          in_stack_fffeec58 = (char *)((int)in_stack_fffeec58 + 1);
                                        }
                                        in_stack_fffeec5c = "%f,%f,%f";
                                        pcVar35 = (char *)0x595281;
                                        iVar13 = crt_stdio_c_sscanf_FUN_0060013c
                                                           (in_stack_fffeec58,"%f,%f,%f");
                                        if (iVar13 != 3) {
                                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                    (g_CEditorToolsPtr,
                                                     "Can't parse rotation PBH in \"rotate\" keyword in animation %s in %s\n:%s");
                                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                    (&CStack_2ca0,0,in_stack_fffeec74,
                                                     in_stack_fffeec78,in_stack_fffeec7c,
                                                     in_stack_fffeec80,in_stack_fffeec84);
                                          goto LAB_005927ee;
                                        }
                                        local_178._36_4_ = (float)local_178._36_4_ * 0.01745329f;
                                        local_150 = local_150 * 0.01745329f;
                                        local_14c = local_14c * 0.01745329f;
                                        in_stack_fffeec6c = (CVector3f *)(local_178 + 0x24);
                                        local_bc = 1.4013e-45;
                                        in_stack_fffeec68 = &g_ZeroVector;
                                        in_stack_fffeec64 = &CStack_42c;
                                        in_stack_fffeec60 = (float *)0x595353;
                                        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                                                  (in_stack_fffeec64,&g_ZeroVector,in_stack_fffeec6c
                                                  );
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
              }
              local_e8 = (float)((int)local_e8 + 1);
            } while ((int)local_e8 < *(int *)((int)aiStack_2718 + local_b0._12_4_));
          }
          pCVar3 = (CBoneStructure *)
                   shape_memdbg_cpp_openFile_FUN_0050f7a0
                             (local_e0,(char *)0x0,"rt","..\\core\\skeledit.cpp",0x13d8
                             );
          local_b8 = pCVar3;
          if (pCVar3 == (CBoneStructure *)0x0) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Can't open %s mentioned in %s");
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                      (&CStack_2ca0,0,(uint)pcVar30,(uint)pcVar29,(uint)pcVar31,(uint)matrix_ptr,
                       (uint)str1);
            goto LAB_005927ee;
          }
          iVar13 = 1;
          do {
            iVar4 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)pCVar3);
            pCVar6 = local_b8;
            if (iVar4 < 0) break;
          } while ((iVar4 != 10) || (iVar13 = iVar13 + -1, 0 < iVar13));
          crt_stdio_c_fscanf_FUN_005fe7c0((FILE *)local_b8,"%d\n");
          fVar15 = local_34;
          core_skeledit_cpp_CBoneStructure_readBONheader_FUN_0058a4a0
                    (pCVar6,(FILE *)local_b0,(int *)pcVar29);
          iVar13 = 0;
          if (0 < *(int *)((int)afStack_28f8 + (int)fVar15)) {
            do {
              iVar13 = iVar13 + 1;
              core_skeledit_cpp_CBoneStructure_skipBONframe_FUN_0058abb0(local_b8);
              local_b0._0_4_ = local_b0._0_4_ + -1;
            } while (iVar13 < *(int *)((int)afStack_28f8 + (int)fVar15));
          }
          local_b0._8_4_ = (streambuf *)0x0;
          local_2c = 0.0;
          local_b0._4_4_ = 1.4013e-45;
          if (-1 < local_e4->frame_count) {
            do {
              fVar2 = local_2c;
              fVar15 = (float)(int)local_104;
              local_24 = (float)(local_e4->frame_start + (int)local_2c);
              shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                        (g_CEditorToolsPtr,(float)(int)local_24,fVar15);
              if ((int)local_b0._0_4_ < 1) {
                if (fVar2 != (float)local_e4->frame_count) {
                  g_CurrentFilename = "..\\core\\skeledit.cpp";
                  g_CurrentLineNumber = 0x1408;
                  core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze!");
                }
                break;
              }
              local_b0._0_4_ = local_b0._0_4_ + -1;
              core_skeledit_cpp_CBoneStructure_readBONframe_FUN_0058aa10
                        (local_b8,local_d0,(int)fVar15);
              fVar15 = local_bc;
              core_skeledit_cpp_CBoneStructure_fixupMatrices_FUN_0058adb0((CBoneStructure *)pcVar31)
              ;
              if (fVar15 != 0.0) {
                iVar13 = 0;
                if (0 < iStack_7484) {
                  pfVar19 = (float *)auStack_742c;
                  do {
                    iVar13 = iVar13 + 1;
                    core_xform_cpp_multiplyMatrix3x4InPlace_FUN_005f50c0
                              ((CMatrix3x4f *)pfVar19,&CStack_42c);
                    pfVar19 = pfVar19 + 0x21;
                  } while (iVar13 < iStack_7484);
                }
                core_skeledit_cpp_FUN_0058ac80();
              }
              pcVar31 = &stack0xffffc0a0;
              core_skeledit_cpp_FUN_0058af40();
              if ((float)local_b0._4_4_ != 0.0) {
                local_178._24_4_ = auStack_742c._12_4_;
                local_178._28_4_ = fStack_7410;
                local_178._32_4_ = fStack_7400;
                if (&local_1f0 != (float *)(local_178 + 0x18)) {
                  local_1f0 = (float)auStack_742c._12_4_;
                  local_1ec = fStack_7410;
                  local_1e8 = fStack_7400;
                }
                matrix_ptr = (char *)(local_1b4 + 1);
                pcVar31 = auStack_742c;
                pCVar9 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                                   ((CVector3f *)pcVar31,(CMatrix3x3f *)matrix_ptr);
                if (local_1b4 != pCVar9) {
                  local_1b4[0].x = pCVar9->x;
                  local_1b4[0].y = pCVar9->y;
                  local_1b4[0].z = pCVar9->z;
                }
                local_b0._4_4_ = 0.0;
              }
              local_19c = (float)auStack_742c._12_4_;
              local_178._12_4_ = (float)auStack_742c._12_4_ - local_1f0;
              local_178._16_4_ = fStack_7410 - local_1ec;
              local_178._20_4_ = fStack_7400 - local_1e8;
              local_198 = fStack_7410;
              local_1d8.x = (float)local_178._12_4_ + local_13c;
              local_1d8.y = (float)local_178._16_4_ + local_138;
              local_1d8.z = (float)local_178._20_4_ + local_134;
              local_194 = fStack_7400;
              if (local_e4->frame_count <= (int)local_2c) {
                if (local_dc == 0.0) {
                  if (&local_190 != &local_1d8) {
                    local_190.x = local_1d8.x;
                    local_190.y = local_1d8.y;
                    local_190.z = local_1d8.z;
                  }
                  local_b0._8_4_ = &DAT_00000001;
                }
                break;
              }
              if (local_dc == 0.0) {
                iVar13 = local_e4->frame_start + (int)local_2c;
              }
              else {
                iVar13 = (local_e4->frame_start + local_e4->frame_count + -1) - (int)local_2c;
              }
              pCVar9 = in_stack_0000000c->frame_positions_1 + iVar13;
              if (pCVar9 != &local_1d8) {
                pCVar9->x = local_1d8.x;
                pCVar9->y = local_1d8.y;
                pCVar9->z = local_1d8.z;
              }
              iVar4 = in_stack_0000000c->bone_count;
              pCVar16 = in_stack_0000000c->bone_angle_frames;
              if (local_d4 == 0.0) {
                local_60.z = local_d4;
                if (0 < in_stack_0000000c->bone_count) {
                  local_50._16_4_ = auStack_742c;
                  pCVar16 = pCVar16 + iVar4 * iVar13;
                  do {
                    core_xform_cpp_matrixToQuaternion_FUN_005f7420
                              ((CQuaternion4f *)local_50._16_4_,(CMatrix3x3f *)pcVar31);
                    pfVar19 = (float *)((int)pCVar16 + (uint)bVar25 * -8 + 4);
                    pCVar16->w = afStack_218[3];
                    pfVar20 = pfVar19 + (uint)bVar25 * -2 + 1;
                    *pfVar19 = afStack_218[(uint)bVar25 * -2 + 4];
                    *pfVar20 = afStack_218[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 5];
                    pfVar20[(uint)bVar25 * -2 + 1] =
                         (afStack_218 + (uint)bVar25 * -2 + (uint)bVar25 * -2 + 5)
                         [(uint)bVar25 * -2 + 1];
                    local_60.z = (float)((int)local_60.z + 1);
                    local_50._16_4_ = &((CQuaternion4f *)(local_50._16_4_ + 0x80))->x;
                    pCVar16 = pCVar16 + 1;
                  } while ((int)local_60.z < in_stack_0000000c->bone_count);
                }
              }
              else {
                pCVar22 = (CMatrix3x4f *)local_178;
                pCVar9 = (CVector3f *)auStack_742c;
                core_xform_cpp_matrixToEulerAngles_FUN_005f5690(pCVar9,(CMatrix3x3f *)pCVar22);
                if (((uint)local_d4 & 1) != 0) {
                  local_178._0_4_ = local_1b4[0].x;
                }
                if (((uint)local_d4 & 2) != 0) {
                  local_178._4_4_ = local_1b4[0].y;
                }
                if (((uint)local_d4 & 4) != 0) {
                  local_178._8_4_ = local_1b4[0].z;
                }
                local_148.x = 0.0;
                local_148.y = 0.0;
                local_148.z = 0.0;
                core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                          (&CStack_39c,&local_148,(CVector3f *)local_178);
                core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                          ((CMatrix3x4f *)auStack_742c,&CStack_39c,(CMatrix3x4f *)pCVar9);
                pfVar19 = afStack_33c;
                pCVar21 = &CStack_3cc;
                for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
                  pCVar21->m[0].w = *pfVar19;
                  pfVar19 = pfVar19 + (uint)bVar25 * -2 + 1;
                  pCVar21 = (CMatrix3x4f *)((int)pCVar21 + ((uint)bVar25 * -2 + 1) * 4);
                }
                core_xform_cpp_inverse_FUN_005f6210(&CStack_3cc,pCVar22);
                pfVar19 = afStack_36c;
                pCVar22 = &CStack_3fc;
                for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
                  pCVar22->m[0].w = *pfVar19;
                  pfVar19 = pfVar19 + (uint)bVar25 * -2 + 1;
                  pCVar22 = (CMatrix3x4f *)((int)pCVar22 + ((uint)bVar25 * -2 + 1) * 4);
                }
                local_54 = 0.0;
                if (0 < in_stack_0000000c->bone_count) {
                  local_50._12_4_ = auStack_742c;
                  pCVar16 = pCVar16 + iVar4 * iVar13;
                  do {
                    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                              ((CMatrix3x4f *)local_50._12_4_,&CStack_3fc,(CMatrix3x4f *)pcVar31);
                    pcVar31 = (char *)auStack_2dc;
                    puVar17 = auStack_30c;
                    puVar23 = auStack_2dc;
                    for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
                      *puVar23 = *puVar17;
                      puVar17 = puVar17 + (uint)bVar25 * -2 + 1;
                      puVar23 = puVar23 + (uint)bVar25 * -2 + 1;
                    }
                    core_xform_cpp_matrixToQuaternion_FUN_005f7420
                              ((CQuaternion4f *)pcVar31,(CMatrix3x3f *)matrix_ptr);
                    pfVar19 = (float *)((int)pCVar16 + (uint)bVar25 * -8 + 4);
                    pCVar16->w = fStack_21c;
                    pfVar20 = pfVar19 + (uint)bVar25 * -2 + 1;
                    *pfVar19 = afStack_218[(uint)bVar25 * -2];
                    *pfVar20 = afStack_218[(uint)bVar25 * -2 + (uint)bVar25 * -2 + 1];
                    pfVar20[(uint)bVar25 * -2 + 1] =
                         (afStack_218 + (uint)bVar25 * -2 + (uint)bVar25 * -2 + 1)
                         [(uint)bVar25 * -2 + 1];
                    local_54 = (float)((int)local_54 + 1);
                    local_50._12_4_ = &((CMatrix3x4f *)(local_50._12_4_ + 0x60))->m[2].x;
                    pCVar16 = pCVar16 + 1;
                  } while ((int)local_54 < in_stack_0000000c->bone_count);
                }
              }
              local_2c = (float)((int)local_2c + 1);
            } while ((int)local_2c <= local_e4->frame_count);
          }
          pcVar27 = (char *)0x59567c;
          shape_memdbg_cpp_closeFile_FUN_0050f9b0
                    ((FILE *)local_b8,"..\\core\\skeledit.cpp",0x147a);
          local_1fc = 0.0;
          local_1f8 = 0.0;
          local_1f4 = 0.0;
          iVar13 = 0;
          if (0 < local_e4->frame_count) {
            do {
              iVar4 = local_e4->frame_start + iVar13;
              if (iVar13 < local_e4->frame_count + -1) {
                pCVar9 = in_stack_0000000c->frame_positions_1 + iVar4;
                pCVar12 = in_stack_0000000c->frame_positions_1 + iVar4 + 1;
                local_130.x = pCVar12->x - pCVar9->x;
                local_130.y = pCVar12->y - pCVar9->y;
                fVar15 = pCVar12->z - pCVar9->z;
                pCVar9 = in_stack_0000000c->frame_positions_2 + iVar4;
                local_130.z = fVar15;
                if (pCVar9 != &local_130) {
                  pCVar9->x = local_130.x;
                  pCVar9->y = local_130.y;
LAB_00595723:
                  pCVar9->z = fVar15;
                }
              }
              else if (iVar13 < 1) {
                pCVar9 = in_stack_0000000c->frame_positions_2;
                pCVar9[iVar4].z = 0.0;
                pCVar9[iVar4].y = pCVar9[iVar4].z;
                pCVar9[iVar4].x = pCVar9[iVar4].y;
              }
              else if ((streambuf *)local_b0._8_4_ == (streambuf *)0x0) {
                pCVar9 = in_stack_0000000c->frame_positions_2 + iVar4;
                pCVar12 = in_stack_0000000c->frame_positions_2 + iVar4 + -1;
                if (pCVar9 != pCVar12) {
                  pCVar9->x = pCVar12->x;
                  pCVar9->y = pCVar12->y;
                  pCVar9->z = pCVar12->z;
                }
              }
              else {
                pCVar9 = in_stack_0000000c->frame_positions_1;
                local_184.x = local_190.x - pCVar9[iVar4].x;
                local_184.y = local_190.y - pCVar9[iVar4].y;
                fVar15 = local_190.z - pCVar9[iVar4].z;
                pCVar9 = in_stack_0000000c->frame_positions_2 + iVar4;
                local_184.z = fVar15;
                if (pCVar9 != &local_184) {
                  pCVar9->x = local_184.x;
                  pCVar9->y = local_184.y;
                  goto LAB_00595723;
                }
              }
              if (((uint)local_d8 & 1) == 0) {
                in_stack_0000000c->frame_positions_2[iVar4].x = 0.0;
              }
              else {
                in_stack_0000000c->frame_positions_1[iVar4].x = 0.0;
                if (((int)local_c4 <= iVar13) && (iVar13 <= (int)local_8c._0_4_)) {
                  local_1fc = local_1fc + in_stack_0000000c->frame_positions_2[iVar4].x;
                }
              }
              if (((uint)local_d8 & 2) == 0) {
                in_stack_0000000c->frame_positions_2[iVar4].y = 0.0;
              }
              else {
                in_stack_0000000c->frame_positions_1[iVar4].y = 0.0;
                if (((int)local_c4 <= iVar13) && (iVar13 <= (int)local_8c._0_4_)) {
                  local_1f8 = local_1f8 + in_stack_0000000c->frame_positions_2[iVar4].y;
                }
              }
              if (((uint)local_d8 & 4) == 0) {
                in_stack_0000000c->frame_positions_2[iVar4].z = 0.0;
              }
              else {
                in_stack_0000000c->frame_positions_1[iVar4].z = 0.0;
                if (((int)local_c4 <= iVar13) && (iVar13 <= (int)local_8c._0_4_)) {
                  local_1f4 = local_1f4 + in_stack_0000000c->frame_positions_2[iVar4].z;
                }
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 < local_e4->frame_count);
          }
          local_1e4 = 0.0;
          local_1e0 = 0.0;
          local_1dc = 0.0;
          if (local_1c0 == local_c8) {
            pcVar27 = &g_CEditorToolsPtr->field0_0x0;
            shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                      (g_CEditorToolsPtr,"Total displacement for animation %s on X-axis is %g");
          }
          else if (local_1c0 != local_cc) {
            if (((uint)local_d8 & 1) == 0) {
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Setting total displacement on an axis that wasn't canceled doesn't work yet!");
            }
            else {
              local_1e4 = local_1c0 - local_1fc;
            }
          }
          if (local_1bc == local_c8) {
            pcVar27 = (char *)0x595e36;
            shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                      (g_CEditorToolsPtr,"Total displacement for animation %s on Y-axis is %g");
          }
          else if (local_1bc != local_cc) {
            if (((uint)local_d8 & 2) == 0) {
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Setting total displacement on an axis that wasn't canceled doesn't work yet!");
            }
            else {
              local_1e0 = local_1bc - local_1f8;
            }
          }
          if (local_1b8 == local_c8) {
            pcVar27 = (char *)0x595e78;
            shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                      (g_CEditorToolsPtr,"Total displacement for animation %s on Z-axis is %g");
          }
          else if (local_1b8 != local_cc) {
            if (((uint)local_d8 & 4) == 0) {
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Setting total displacement on an axis that wasn't canceled doesn't work yet!");
            }
            else {
              local_1dc = local_1b8 - local_1f4;
            }
          }
          if (0.0 < SQRT(local_1dc * local_1dc + local_1e4 * local_1e4 + local_1e0 * local_1e0)) {
            local_24 = (float)((local_8c._0_4_ - (int)local_c4) + 1);
            local_50._4_4_ = (uint)(int)local_24;
            fVar15 = 1.0 / (float)local_50._4_4_;
            local_1e4 = local_1e4 * fVar15;
            local_1e0 = local_1e0 * fVar15;
            local_1dc = local_1dc * fVar15;
            iVar13 = (int)local_c4 - local_8c._0_4_;
            bVar24 = local_c4 == (float)local_8c._0_4_;
            fVar15 = local_c4;
            while (bVar24 || SBORROW /* signed borrow */4((int)fVar15,local_8c._0_4_) != iVar13 < 0) {
              iVar13 = local_e4->frame_start + (int)fVar15;
              pCVar9 = in_stack_0000000c->frame_positions_2;
              pCVar9[iVar13].x = pCVar9[iVar13].x + local_1e4;
              pCVar9[iVar13].y = pCVar9[iVar13].y + local_1e0;
              fVar15 = (float)((int)fVar15 + 1);
              pCVar9[iVar13].z = pCVar9[iVar13].z + local_1dc;
              iVar13 = (int)fVar15 - local_8c._0_4_;
              bVar24 = iVar13 == 0;
            }
          }
          local_50._20_4_ = local_50._20_4_ + 0x104;
          local_50._24_4_ = local_50._24_4_ + 0x54c;
          local_34 = (float)((int)local_34 + 4);
          local_30 = (float)((int)local_30 + 1);
        } while ((int)local_30 < (in_stack_0000000c->motion_list).motion_count);
      }
      shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)local_114,"..\\core\\skeledit.cpp",0x14ef)
      ;
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Biasing motions.");
      local_110 = 0.0;
      local_114 = (CBoneStructure *)0x0;
      crt_memory_c_memset_FUN_005fde40(aiStack_2538,0,0x1e0);
      if (0 < DAT_03670b5c) {
        iVar13 = 0;
        do {
          piVar28 = (int *)((int)&DAT_03670b60 + iVar13);
          iVar13 = iVar13 + 0x10;
          aiStack_2538[*piVar28] = 1;
        } while (iVar13 < DAT_03670b5c * 0x10);
      }
      iVar13 = 0;
      if (DAT_03670b5c < 1) {
LAB_00595eb8:
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Finished processing %s OK!");
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&CStack_2ca0,0,(uint)in_stack_fffeec5c,(uint)in_stack_fffeec60,
                   (uint)in_stack_fffeec64,(uint)in_stack_fffeec68,(uint)in_stack_fffeec6c);
        return 1;
      }
      do {
        iVar4 = 0;
        if (0 < DAT_03670b5c) {
          iVar7 = 0;
          do {
            if ((-1 < *(int *)((int)&DAT_03670b60 + iVar7)) &&
               (aiStack_2538[*(int *)((int)&DAT_03670b68 + iVar7)] == 0)) break;
            iVar7 = iVar7 + 0x10;
            iVar4 = iVar4 + 1;
          } while (iVar7 < DAT_03670b5c * 0x10);
        }
        if (DAT_03670b5c <= iVar4) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Cyclic bias detected in %s");
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&CStack_2ca0,0,(uint)in_stack_fffeec5c,(uint)in_stack_fffeec60,
                     (uint)in_stack_fffeec64,(uint)in_stack_fffeec68,(uint)in_stack_fffeec6c);
          goto LAB_005927ee;
        }
        piVar28 = &DAT_03670b60 + iVar4 * 4;
        iVar7 = (in_stack_0000000c->motion_list).motions[*piVar28].frame_start +
                (&DAT_03670b64)[iVar4 * 4];
        iVar4 = (in_stack_0000000c->motion_list).motions[(&DAT_03670b68)[iVar4 * 4]].frame_start +
                (&DAT_03670b6c)[iVar4 * 4];
        pCVar9 = in_stack_0000000c->frame_positions_1;
        local_1cc = pCVar9[iVar4].x - pCVar9[iVar7].x;
        local_1c8 = pCVar9[iVar4].y - pCVar9[iVar7].y;
        local_1c4 = pCVar9[iVar4].z - pCVar9[iVar7].z;
        for (iVar4 = 0; iVar7 = DAT_03670b5c,
            iVar4 < (in_stack_0000000c->motion_list).motions[*piVar28].frame_count;
            iVar4 = iVar4 + 1) {
          iVar7 = (in_stack_0000000c->motion_list).motions[*piVar28].frame_start + iVar4;
          pCVar9 = in_stack_0000000c->frame_positions_1;
          pCVar9[iVar7].x = pCVar9[iVar7].x + local_1cc;
          pCVar9[iVar7].y = pCVar9[iVar7].y + local_1c8;
          pCVar9[iVar7].z = pCVar9[iVar7].z + local_1c4;
        }
        aiStack_2538[*piVar28] = 0;
        iVar13 = iVar13 + 1;
        *piVar28 = -1;
        if (iVar7 <= iVar13) goto LAB_00595eb8;
      } while( true );
    }
    iVar13 = crt_string_c_strnicmp_FUN_005ff070((char *)&local_21c8,"animation",9);
    if (iVar13 == 0) {
      if (0x77 < (in_stack_0000000c->motion_list).motion_count) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Too many motions in %s, max is %d");
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&CStack_2ca0,0,(uint)d5_00,uVar32,(uint)pcVar33,(uint)pCVar3,(uint)pcVar35);
        goto LAB_005927ee;
      }
      d2 = auStack_71c;
      iVar13 = crt_stdio_c_sscanf_FUN_0060013c(acStack_21c2 + 3," \"%[^\"]\" : %s");
      if (iVar13 != 2) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't parse %s.  I don't understand this line:\n%s");
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&CStack_2ca0,0,(uint)d2,(uint)pcVar30,(uint)d5_00,uVar32,(uint)pcVar33);
        goto LAB_005927ee;
      }
      crt_string_c_splitpath_FUN_005ff178
                ((char *)&uStack_1f70,local_20,acStack_1568,acStack_1668,acStack_1868);
      if ((acStack_1568[0] == '\0') && (local_20[0] == '\0')) {
        crt_string_c_splitpath_FUN_005ff178
                  (in_stack_00000010,local_20,acStack_1568,(char *)0x0,(char *)0x0);
        crt_file_c_makepath_FUN_005febfc
                  ((char *)&uStack_1f70,local_20,acStack_1568,acStack_1668,acStack_1868);
      }
      crt_string_c_splitpath_FUN_005ff178
                ((char *)&uStack_1f70,acStack_c,acStack_1d68,acStack_1c68,acStack_1268);
      if (acStack_1268[0] == '\0') {
        crt_file_c_makepath_FUN_005febfc
                  ((char *)&uStack_1f70,acStack_c,acStack_1d68,acStack_1c68,"bon");
      }
      pSVar14 = local_f0 + (in_stack_0000000c->motion_list).motion_count;
      crt_memory_c_memset_FUN_005fde40(pSVar14,0,0x54c);
      pcVar30 = (char *)0x0;
      pcVar27 = (char *)&uStack_1f70;
      crt_string_c_splitpath_FUN_005ff178
                (pcVar27,(char *)0x0,(char *)0x0,pSVar14->motion_name,(char *)0x0);
      d5_00 = (byte *)0x5931fc;
      iVar13 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0
                         (&in_stack_0000000c->motion_list);
      pSVar14->state_index = iVar13;
      if (iVar13 < 0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Invalid state %s for animation %s in %s");
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&CStack_2ca0,0,(uint)in_stack_fffeec5c,(uint)in_stack_fffeec60,
                   (uint)in_stack_fffeec64,(uint)in_stack_fffeec68,(uint)in_stack_fffeec6c);
        goto LAB_005927ee;
      }
      aiStack_2718[(in_stack_0000000c->motion_list).motion_count] = 0;
      pcVar33 = (char *)&uStack_1f70;
      pcVar35 = &DAT_0365caf8 + (in_stack_0000000c->motion_list).motion_count * 0x104;
      do {
        cVar1 = *pcVar33;
        *pcVar35 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar33[1];
        pcVar33 = pcVar33 + 2;
        pcVar35[1] = cVar1;
        pcVar35 = pcVar35 + 2;
      } while (cVar1 != '\0');
      local_100 = 1;
      goto LAB_00592a67;
    }
    iVar13 = crt_string_c_strnicmp_FUN_005ff070((char *)&local_21c8,"checkout",8);
    if (iVar13 != 0) {
      if (local_100 == 0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Expected animation keyword in %s but instead found this:\n%s");
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&CStack_2ca0,0,uVar32,(uint)pcVar33,(uint)pCVar3,(uint)pcVar35,
                   (uint)in_stack_fffeec58);
        goto LAB_005927ee;
      }
      aiStack_2718[(in_stack_0000000c->motion_list).motion_count] =
           aiStack_2718[(in_stack_0000000c->motion_list).motion_count] + 1;
      iVar13 = (in_stack_0000000c->motion_list).motion_count;
      iVar4 = crt_string_c_strnicmp_FUN_005ff070((char *)&local_21c8,"filename",8);
      pcVar27 = &DAT_0365caf8 + iVar13 * 0x104;
      if (iVar4 == 0) {
        pcVar30 = acStack_21c2 + 2;
        while ((g_CharacterClassificationTable[(byte)(*pcVar30 + 1)] & 2U) != 0) {
          pcVar30 = pcVar30 + 1;
        }
        iVar13 = crt_stdio_c_sscanf_FUN_0060013c(pcVar30,"\"%[^\"]\"");
        if (iVar13 != 1) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0x112f;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Error parsing \"filename\" statement for animation %s in %s:\n%s");
        }
        crt_string_c_splitpath_FUN_005ff178(pcVar27,local_14,acStack_1468,acStack_1b68,acStack_c68);
        if ((acStack_1468[0] == '\0') && (local_14[0] == '\0')) {
          crt_string_c_splitpath_FUN_005ff178
                    (in_stack_00000010,local_14,acStack_1468,(char *)0x0,(char *)0x0);
          crt_file_c_makepath_FUN_005febfc(pcVar27,local_14,acStack_1468,acStack_1b68,acStack_c68);
        }
        crt_string_c_splitpath_FUN_005ff178(pcVar27,local_18,acStack_1a68,acStack_1968,acStack_d68);
        if (acStack_d68[0] == '\0') {
          crt_file_c_makepath_FUN_005febfc
                    (pcVar27,local_18,acStack_1a68,acStack_1968,"bon");
        }
        pcVar30 = (char *)0x0;
        file_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                             (pcVar27,(char *)0x0,"rt","..\\core\\skeledit.cpp",0x1139)
        ;
        if (file_ptr == (FILE *)0x0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Can't open %s mentioned in %s");
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&CStack_2ca0,0,(uint)in_stack_fffeec58,(uint)in_stack_fffeec5c,
                     (uint)in_stack_fffeec60,(uint)in_stack_fffeec64,(uint)in_stack_fffeec68);
          goto LAB_005927ee;
        }
        d5_00 = (byte *)0x5935de;
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\skeledit.cpp",0x113e);
      }
      else {
        d5_00 = (byte *)0x6;
        pcVar30 = "frames";
        pcVar27 = (char *)&local_21c8;
        iVar13 = crt_string_c_strnicmp_FUN_005ff070(pcVar27,"frames",6);
        if (iVar13 == 0) {
          pcVar27 = acStack_21c2;
          while ((g_CharacterClassificationTable[(byte)(*pcVar27 + 1)] & 2U) != 0) {
            pcVar27 = pcVar27 + 1;
          }
          local_ec = -NAN;
          crt_stdio_c_sscanf_FUN_0060013c(pcVar27," %[^-] - %s%n");
          if ((int)local_ec < 3) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Error parsing \"frames\" statement for animation %s in %s:\n%s");
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                      (&CStack_2ca0,0,(uint)pcVar35,(uint)in_stack_fffeec58,(uint)in_stack_fffeec5c,
                       (uint)in_stack_fffeec60,(uint)in_stack_fffeec64);
            goto LAB_005927ee;
          }
          pcVar27 = (char *)0x593720;
          iVar13 = core_skeledit_cpp_FUN_00592520();
          if (iVar13 != 0) {
            d5_00 = auStack_25c;
            pcVar30 = (char *)0x59373e;
            iVar13 = core_skeledit_cpp_FUN_00592520();
            if (iVar13 != 0) goto LAB_00592a67;
          }
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Error parsing \"frames\" statement for animation %s in %s:\n%s");
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&CStack_2ca0,0,(uint)in_stack_fffeec5c,(uint)in_stack_fffeec60,
                     (uint)in_stack_fffeec64,(uint)in_stack_fffeec68,(uint)in_stack_fffeec6c);
          goto LAB_005927ee;
        }
      }
      goto LAB_00592a67;
    }
    pcVar30 = acStack_849 + 1;
    pcVar27 = "%s";
    crt_stdio_c_sscanf_FUN_0060013c(acStack_21c2 + 2,"%s");
    uVar32 = 0xffffffff;
    pcVar33 = acStack_849 + 1;
    do {
      if (uVar32 == 0) break;
      uVar32 = uVar32 - 1;
      cVar1 = *pcVar33;
      pcVar33 = pcVar33 + (uint)bVar25 * -2 + 1;
    } while (cVar1 != '\0');
    n = ~uVar32 - 1;
    if (0 < (int)n) {
      pcVar33 = acStack_849 + ~uVar32;
      do {
        if ((g_CharacterClassificationTable[(byte)(pcVar33[-1] + 1)] & 2U) == 0) break;
        n = n - 1;
        pcVar33 = pcVar33 + -1;
      } while (0 < (int)n);
    }
    (acStack_849 + 1)[n] = '\0';
    while ((g_CharacterClassificationTable[(byte)(acStack_849[1] + 1)] & 2U) != 0) {
      d5_00 = (byte *)0x5933c4;
      crt_string_c_memmove_FUN_005fe5e0(acStack_849 + 1,acStack_849 + 2,n);
      n = n - 1;
    }
    pcVar33 = crt_env_c_getenv_FUN_006013f0("USERNAME");
    if (((pcVar33 != (char *)0x0) &&
        (iVar13 = crt_string_c_stricmp_FUN_005fe7f0(pcVar33,acStack_849 + 1), iVar13 == 0)) ||
       (iVar13 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                           (g_CEditorToolsPtr,"User \"%s\" is currently working on this file.  Continue anyway?"), iVar13 != 0))
    goto LAB_00592a67;
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&CStack_2ca0,0,(uint)in_stack_fffeec5c,(uint)in_stack_fffeec60,
               (uint)in_stack_fffeec64,(uint)in_stack_fffeec68,(uint)in_stack_fffeec6c);
  }
  else {
    pcVar27 = "Can't parse home pose filename from %s.  The state count is probably wrong.";
LAB_005927df:
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar27);
  }
LAB_005927ee:
  if (local_110 != 0.0) {
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  }
  if (local_114 != (CBoneStructure *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)local_114,"..\\core\\skeledit.cpp",0x1052);
  }
  return 0;
}
