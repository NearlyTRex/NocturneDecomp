// Name: core_skeledit.cpp_FUN_00592690
// Address: 00592690
// Address Range: [[00592690, 00595f23]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00592690()

#include "nocturne.h"

uint core_skeledit_cpp_FUN_00592690(void)

{
  char cVar1;
  CBoneStructure *this_ptr;
  FILE *pFVar2;
  int iVar3;
  char *str;
  int iVar4;
  int extraout_EAX;
  byte *pbVar5;
  CBoneStructure *pCVar6;
  CVector3f *pCVar7;
  SBone *pSVar8;
  SBone *pSVar9;
  SIZE_T n;
  CVector3f *pCVar10;
  int iVar11;
  SMotion *pSVar12;
  byte *str_00;
  float fVar13;
  CQuaternion4f *pCVar14;
  BADSPACEBASE *in_ESP;
  float *pfVar15;
  char *pcVar16;
  SMotionTransition *dest;
  float *pfVar17;
  float *pfVar18;
  CMatrix3x4f *pCVar19;
  CQuaternion4f *pCVar20;
  bool bVar21;
  byte bVar22;
  double dVar23;
  CSkeleton *in_stack_0000000c;
  char *in_stack_00000010;
  CPickList *this_ptr_00;
  uint d4;
  uint d5;
  ulonglong uVar24;
  CMatrix3x3f *matrix_ptr;
  char *pcVar25;
  uint uVar26;
  int *piVar27;
  byte *puVar28;
  char *pcVar29;
  CEditorTools *pCVar30;
  uint in_stack_fffeeba2;
  uint in_stack_fffeeba6;
  uint in_stack_fffeebaa;
  uint in_stack_fffeebae;
  uint in_stack_fffeebb2;
  uint in_stack_fffeebb6;
  uint in_stack_fffeebba;
  int iStack_decc;
  char acStack_dec8 [32];
  int aiStack_dea8 [6793];
  int aiStack_7484 [22];
  byte auStack_742c [28];
  float fStack_7410;
  float fStack_7400;
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
  float afStack_1e6c [65];
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
  CMatrix3x3f aCStack_910 [5];
  char acStack_849 [101];
  byte auStack_7e4 [100];
  byte auStack_780 [100];
  byte auStack_71c [200];
  byte auStack_654 [200];
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
  CQuaternion4f aCStack_2dc [5];
  byte auStack_284 [72];
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
  byte local_154 [8];
  float local_14c;
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
  int local_fc;
  int local_f8;
  char *local_f4;
  SMotion *local_f0;
  int local_ec;
  int local_e8;
  SMotion *local_e4;
  char *local_e0;
  int local_dc;
  uint local_d8;
  float local_d4;
  FILE *local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  int local_c0;
  int local_bc;
  CBoneStructure *local_b8;
  float local_b4;
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
  byte local_60 [20];
  float local_4c;
  CSkeleton *local_48;
  float *local_44;
  CQuaternion4f *local_40;
  char *local_3c;
  SMotion *local_38;
  float local_34;
  int local_30;
  float local_2c;
  byte local_28 [4];
  float local_24;
  char local_20 [4];
  char local_1c [4];
  char local_18 [4];
  char local_14 [4];
  char local_10 [4];
  char acStack_c [4];
  
  bVar22 = 0;
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
  iVar11 = 1;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Reading state list from %s");
  do {
    iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar11 = iVar11 + -1, 0 < iVar11));
  local_10c = 0.0;
  crt_stdio_c_fscanf_FUN_005fe7c0(local_114,"%d\n");
  if (0x50 < (int)local_10c) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x104a;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("%s has %d states, max is %d",in_stack_00000010,local_10c);
  }
  pFVar2 = local_114;
  iVar11 = 1;
  do {
    iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar11 = iVar11 + -1, 0 < iVar11));
  (in_stack_0000000c->motion_list).state_count = 0;
  if ((in_stack_0000000c->motion_list).state_count < (int)local_10c) {
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0
                (local_114,"%s\n",
                 (in_stack_0000000c->motion_list).state_names +
                 (in_stack_0000000c->motion_list).state_count);
      if ((in_stack_0000000c->motion_list).state_names[(in_stack_0000000c->motion_list).state_count]
          [0] == '/') {
        pcVar29 = "State name begins with '/', state count is probably wrong in %s";
        goto LAB_005927df;
      }
      iVar11 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0
                         (&in_stack_0000000c->motion_list);
      if (-1 < iVar11) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Duplicate state %s in %s");
        goto LAB_005927ee;
      }
      iVar11 = (in_stack_0000000c->motion_list).state_count + 1;
      (in_stack_0000000c->motion_list).state_count = iVar11;
    } while (iVar11 < (int)local_10c);
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Reading home pose filename");
  pFVar2 = local_114;
  iVar3 = 1;
  pfVar15 = (float *)"(file error)";
  pfVar17 = afStack_1e6c;
  for (iVar11 = 0x41; iVar11 != 0; iVar11 = iVar11 + -1) {
    *pfVar17 = *pfVar15;
    pfVar15 = pfVar15 + (uint)bVar22 * -2 + 1;
    pfVar17 = pfVar17 + (uint)bVar22 * -2 + 1;
  }
  do {
    iVar11 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
    if (iVar11 < 0) break;
  } while ((iVar11 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  pfVar15 = afStack_1e6c;
  pcVar29 = "\"%[^\"]\"\n";
  iVar11 = crt_stdio_c_fscanf_FUN_005fe7c0(local_114,"\"%[^\"]\"\n");
  if (iVar11 == 1) {
    pfVar17 = afStack_1e6c;
    crt_string_c_splitpath_FUN_005ff178
              ((char *)pfVar17,local_10,acStack_1068,acStack_f68,acStack_1168);
    if ((acStack_1068[0] == '\0') && (local_10[0] == '\0')) {
      crt_string_c_splitpath_FUN_005ff178
                (in_stack_00000010,local_10,acStack_1068,(char *)0x0,(char *)0x0);
      crt_file_c_makepath_FUN_005febfc
                ((char *)afStack_1e6c,local_10,acStack_1068,acStack_f68,acStack_1168);
    }
    crt_string_c_splitpath_FUN_005ff178
              ((char *)afStack_1e6c,local_1c,acStack_1368,acStack_e68,acStack_1768);
    if (acStack_1768[0] == '\0') {
      crt_file_c_makepath_FUN_005febfc
                ((char *)afStack_1e6c,local_1c,acStack_1368,acStack_e68,"pos");
    }
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Reading bone heirarchy and building reorientation matrices from %s");
    core_skeledit_cpp_CBoneStructure_importBON_FUN_0058a3d0
              ((CBoneStructure *)afStack_1e6c,(char *)pfVar17);
    core_skeledit_cpp_FUN_0058aeb0();
    pFVar2 = local_114;
    iVar11 = 1;
    core_skeledit_cpp_FUN_00595f30();
    do {
      iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
      if (iVar3 < 0) break;
    } while ((iVar3 != 10) || (iVar11 = iVar11 + -1, 0 < iVar11));
    local_108 = (float)crt_stdio_c_ftell_FUN_00601560(local_114);
    pCVar30 = g_CEditorToolsPtr;
    local_104 = 0.0;
    (in_stack_0000000c->motion_list).motion_count = 0;
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (pCVar30,"Pass 1: Building list of animation files and getting total frame count");
    local_fc = 0;
    DAT_03670b5c = 0;
    local_f8 = 99999;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_2ca0);
    local_100 = 0;
    local_f0 = (in_stack_0000000c->motion_list).motions;
LAB_00592a67:
    do {
      iVar11 = local_100;
      pcVar25 = (char *)0x0;
      local_c0 = core_skeledit_cpp_readNonEmptyLine_FUN_005895f0
                           ((char *)local_114,(FILE *)0x0,(int)pcVar29);
      if (local_c0 == 0) {
LAB_00592ea4:
        if (iVar11 != 0) {
          local_f4 = &DAT_0365caf8 + (in_stack_0000000c->motion_list).motion_count * 0x104;
          pCVar6 = (CBoneStructure *)
                   shape_memdbg_cpp_openFile_FUN_0050f7a0
                             (local_f4,(char *)0x0,"rt","..\\core\\skeledit.cpp",0x10a4
                             );
          if (pCVar6 == (CBoneStructure *)0x0) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Can't open %s mentioned in %s",local_f4,
                       in_stack_00000010);
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                      (&CStack_2ca0,0,(uint)pcVar25,(uint)pcVar29,(uint)pfVar15,in_stack_fffeeba2,
                       in_stack_fffeeba6);
            goto LAB_005927ee;
          }
          iVar11 = 1;
          do {
            iVar3 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)pCVar6);
            if (iVar3 < 0) break;
          } while ((iVar3 != 10) || (iVar11 = iVar11 + -1, 0 < iVar11));
          crt_stdio_c_fscanf_FUN_005fe7c0((FILE *)pCVar6,"%d\n",local_28);
          core_skeledit_cpp_CBoneStructure_readBONheader_FUN_0058a4a0
                    (pCVar6,(FILE *)(local_60 + 0x10),(int *)pcVar25);
          shape_memdbg_cpp_closeFile_FUN_0050f9b0
                    ((FILE *)pCVar6,"..\\core\\skeledit.cpp",0x10b8);
          if (0x1869e < local_fc) {
            local_fc = local_60._16_4_ + -1;
          }
          if (0x1869e < local_f8) {
            local_f8 = local_60._16_4_ + -1;
          }
          if (((local_fc < 0) || (local_f8 < local_fc)) || ((int)local_60._16_4_ <= local_f8)) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Invalid frame start/end for animation %s in %s",local_f4,
                       in_stack_00000010);
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                      (&CStack_2ca0,0,(uint)pcVar25,(uint)pcVar29,(uint)pfVar15,in_stack_fffeeba2,
                       in_stack_fffeeba6);
            goto LAB_005927ee;
          }
          iVar11 = core_skeledit_cpp_FUN_0058b200();
          if (iVar11 == 0) {
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_2ca0.base_strlist,local_f4);
          }
          iVar11 = (in_stack_0000000c->motion_list).motion_count;
          local_f0[iVar11].frame_start = (int)local_104;
          local_f8 = local_f8 + (1 - local_fc);
          local_104 = (float)((int)local_104 + local_f8);
          local_f0[iVar11].frame_count = local_f8;
          aiStack_28f8[(in_stack_0000000c->motion_list).motion_count] = local_fc;
          local_100 = 0;
          (in_stack_0000000c->motion_list).motion_count =
               (in_stack_0000000c->motion_list).motion_count + 1;
          local_fc = 0;
          local_f8 = 99999;
        }
      }
      else {
        pcVar29 = (char *)0x9;
        pcVar25 = "animation";
        iVar3 = crt_string_c_strnicmp_FUN_005ff070(local_21c8,"animation",9);
        if (iVar3 == 0) goto LAB_00592ea4;
      }
      if (local_c0 == 0) {
        if ((in_stack_0000000c->motion_list).motion_count < 1) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0x1159;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("No motions defined in %s",in_stack_00000010);
        }
        if (0 < CStack_2ca0.base_strlist.item_count) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    (&CStack_2ca0.base_strlist,(char *)afStack_1e6c);
          uVar26 = 0;
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    (&CStack_2ca0.base_strlist,"(Dump this list to the clipboard)");
          while( true ) {
            crt_stdio_c_sprintf_FUN_005fdbd0
                      (acStack_2358,"The following motions do not have the same skeleton\nheirarchy as the home pose file\n%s\nPress Enter to view heirarchy, or ESC when done viewing list.\n",afStack_1e6c);
            d5 = 0;
            pcVar29 = acStack_2358;
            this_ptr_00 = &CStack_2ca0;
            d4 = uVar26;
            uVar26 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                               (this_ptr_00,pcVar29,uVar26,0);
            if ((int)uVar26 < 0) break;
            if (uVar26 == CStack_2ca0.base_strlist.item_count - 1U) {
              pcVar29 = &DAT_0366b650;
              for (iVar11 = 0; iVar11 < CStack_2ca0.base_strlist.item_count + -1;
                  iVar11 = iVar11 + 1) {
                pcVar16 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                                    (&CStack_2ca0.base_strlist,iVar11);
                iVar3 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar29,"%s\r\n",pcVar16);
                pcVar29 = pcVar29 + iVar3;
              }
              shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0
                        (g_CEditorToolsPtr,&DAT_0366b650);
            }
            else {
              pCVar6 = (CBoneStructure *)
                       shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                                 (&CStack_2ca0.base_strlist,uVar26);
              core_skeledit_cpp_CBoneStructure_importBON_FUN_0058a3d0(pCVar6,pcVar29);
              core_skeledit_cpp_FUN_0058afe0();
            }
          }
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&CStack_2ca0,0,(uint)this_ptr_00,(uint)pcVar29,d4,d5,(uint)pcVar25);
          return 0;
        }
        core_skeleton_cpp_CSkeleton_allocMemory_FUN_00599910
                  (in_stack_0000000c,iStack_decc,(int)local_104);
        iVar11 = 0;
        if (0 < in_stack_0000000c->bone_count) {
          pcVar25 = acStack_dec8;
          local_48 = in_stack_0000000c;
          pSVar8 = in_stack_0000000c->bone_list;
          do {
            pSVar9 = pSVar8 + 1;
            local_48->bone_list[0].parent_index = aiStack_dea8[iVar11 * 0x21];
            iVar11 = iVar11 + 1;
            pcVar16 = pcVar25;
            do {
              cVar1 = *pcVar16;
              pSVar8->bone_name[0] = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar16[1];
              pcVar16 = pcVar16 + 2;
              pSVar8->bone_name[1] = cVar1;
              pSVar8 = (SBone *)(pSVar8->bone_name + 2);
            } while (cVar1 != '\0');
            pcVar25 = pcVar25 + 0x84;
            local_48 = (CSkeleton *)((local_48->motion_list).state_names[1] + 2);
            pSVar8 = pSVar9;
          } while (iVar11 < in_stack_0000000c->bone_count);
        }
        crt_stdio_c_fseek_FUN_005ffacc(local_114,(long)local_108,0);
        local_30 = 0;
        shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                  (g_CEditorToolsPtr,"Importing skeleton animation frames...");
        local_110 = 1.4013e-45;
        if (0 < (in_stack_0000000c->motion_list).motion_count) {
          local_38 = (in_stack_0000000c->motion_list).motions;
          local_3c = &DAT_0365caf8;
          local_34 = 0.0;
          do {
            local_e4 = local_38;
            local_e0 = local_3c;
            local_24 = local_104;
            shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                      (g_CEditorToolsPtr,(float)local_38->frame_start,(float)(int)local_104);
            pFVar2 = local_114;
            do {
              iVar11 = core_skeledit_cpp_readNonEmptyLine_FUN_005895f0
                                 ((char *)pFVar2,(FILE *)&DAT_00000001,(int)pcVar29);
              if (iVar11 == 0) {
                g_CurrentFilename = "..\\core\\skeledit.cpp";
                g_CurrentLineNumber = 0x11a5;
                core_main_c_displayErrorAndQuit_FUN_00506f10("Error parsing file!");
              }
              pcVar29 = (char *)0x9;
              iVar11 = crt_string_c_strnicmp_FUN_005ff070(local_209c,"animation",9);
              fVar13 = local_34;
            } while (iVar11 != 0);
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
            local_d4 = 0.0;
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
            pfVar17 = (float *)&DAT_00665968;
            pCVar19 = &CStack_42c;
            for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
              pCVar19->m[0].w = *pfVar17;
              pfVar17 = pfVar17 + (uint)bVar22 * -2 + 1;
              pCVar19 = (CMatrix3x4f *)((int)pCVar19 + ((uint)bVar22 * -2 + 1) * 4);
            }
            local_134 = 0.0;
            local_b0._12_4_ = fVar13;
            if (0 < *(int *)((int)aiStack_2718 + (int)fVar13)) {
              do {
                uVar26 = 1;
                core_skeledit_cpp_readNonEmptyLine_FUN_005895f0
                          ((char *)local_114,(FILE *)&DAT_00000001,(int)pcVar29);
                iVar11 = crt_string_c_strnicmp_FUN_005ff070(local_209c,"fps",3);
                if (iVar11 == 0) {
                  pcVar25 = local_209a;
                  do {
                    pcVar25 = pcVar25 + 1;
                  } while ((g_CharacterClassificationTable[(byte)(*pcVar25 + 1)] & 2U) != 0);
                  iVar11 = crt_stdio_c_sscanf_FUN_0060013c(pcVar25,"%f",local_b0._16_4_);
                  if (iVar11 != 1) {
                    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                              (g_CEditorToolsPtr,"Error parsing \"fps\" statement for animation %s in %s:\n%s",local_e4,
                               in_stack_00000010);
                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                              (&CStack_2ca0,0,uVar26,(uint)pcVar29,(uint)pfVar15,in_stack_fffeeba2,
                               in_stack_fffeeba6);
                    goto LAB_005927ee;
                  }
                }
                else {
                  iVar11 = crt_string_c_strnicmp_FUN_005ff070(local_209c,"if",2);
                  if (iVar11 == 0) {
                    if (0x2c < local_e4->transition_count) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Too many transitions in animation %s in %s, max is %d",local_e4,
                                 in_stack_00000010,0x2d);
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                (&CStack_2ca0,0,uVar26,(uint)pcVar29,(uint)pfVar15,in_stack_fffeeba2
                                 ,in_stack_fffeeba6);
                      goto LAB_005927ee;
                    }
                    local_b0._20_4_ = local_209a;
                    do {
                      local_b0._20_4_ = local_b0._20_4_ + 1;
                    } while ((g_CharacterClassificationTable[(byte)(*(char *)local_b0._20_4_ + 1)] &
                             2U) != 0);
                    local_98 = -NAN;
                    crt_stdio_c_sscanf_FUN_0060013c
                              ((char *)local_b0._20_4_,"%s %s%n",auStack_460,auStack_284,
                               &local_98);
                    if ((int)local_98 < 3) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Error parsing \"if\" statement for animation %s in %s:\n%s",local_e4,
                                 in_stack_00000010);
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                (&CStack_2ca0,0,uVar26,(uint)pcVar29,(uint)pfVar15,in_stack_fffeeba2
                                 ,in_stack_fffeeba6);
                      goto LAB_005927ee;
                    }
                    dest = local_94 + local_e4->transition_count;
                    crt_memory_c_memset_FUN_005fde40(dest,0,0x18);
                    iVar11 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0
                                       (&in_stack_0000000c->motion_list);
                    dest->desired_state = iVar11;
                    if (iVar11 < 0) {
                      pcVar29 = local_209c;
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Invalid desired state \"%s\" in \"if\" statement for animation %s in %s:\n%s",auStack_460);
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                (&CStack_2ca0,0,(uint)in_stack_00000010,(uint)pcVar29,(uint)pfVar15,
                                 in_stack_fffeeba2,in_stack_fffeeba6);
                      goto LAB_005927ee;
                    }
                    iVar11 = 0;
                    pSVar12 = local_e4;
                    if (0 < local_e4->transition_count) {
                      do {
                        if (dest->desired_state == pSVar12->transitions[0].desired_state) {
                          pSVar12 = local_e4;
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Duplicate if %s's for animation %s in %s");
                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                    (&CStack_2ca0,0,(uint)pSVar12,(uint)in_stack_00000010,
                                     (uint)pfVar15,in_stack_fffeeba2,in_stack_fffeeba6);
                          goto LAB_005927ee;
                        }
                        iVar11 = iVar11 + 1;
                        pSVar12 = (SMotion *)(pSVar12->motion_name + 0x18);
                      } while (iVar11 < local_e4->transition_count);
                    }
                    iVar11 = core_skeledit_cpp_FUN_005925c0();
                    dest->cmd = iVar11;
                    if (iVar11 == 0) {
                      pcVar29 = local_209c;
                      pSVar12 = local_e4;
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Invalid transition command in \"if %s\" statement for animation %s in %s:\n%s");
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                (&CStack_2ca0,0,(uint)pSVar12,(uint)in_stack_00000010,(uint)pcVar29,
                                 in_stack_fffeeba2,in_stack_fffeeba6);
                      goto LAB_005927ee;
                    }
                    pcVar25 = (char *)(local_b0._20_4_ + (int)local_98);
                    while ((g_CharacterClassificationTable[(byte)(*pcVar25 + 1)] & 2U) != 0) {
                      pcVar25 = pcVar25 + 1;
                    }
                    local_98 = -NAN;
                    pfVar15 = &local_98;
                    pcVar29 = (char *)aCStack_910;
                    pcVar16 = "\"%[^\"]\"%n";
                    crt_stdio_c_sscanf_FUN_0060013c(pcVar25,"\"%[^\"]\"%n");
                    if ((int)local_98 < 0) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Error parsing \"if %s\" statement parms for animation %s in %s:\n%s",auStack_460,
                                 local_e4,in_stack_00000010);
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                (&CStack_2ca0,0,(uint)pcVar16,(uint)pcVar29,(uint)pfVar15,
                                 in_stack_fffeeba2,in_stack_fffeeba6);
                      goto LAB_005927ee;
                    }
                    crt_string_c_splitpath_FUN_005ff178
                              ((char *)aCStack_910,(char *)0x0,(char *)0x0,acStack_aa0,(char *)0x0);
                    iVar11 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                                       (&in_stack_0000000c->motion_list);
                    dest->to_motion_number = iVar11;
                    if (iVar11 < 0) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Invalid destination animation for \"if %s\" statement for animation %s in %s:\n%s",auStack_460,
                                 local_e4,in_stack_00000010);
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                (&CStack_2ca0,0,(uint)pcVar16,(uint)pcVar29,(uint)pfVar15,
                                 in_stack_fffeeba2,in_stack_fffeeba6);
                      goto LAB_005927ee;
                    }
                    pcVar25 = pcVar25 + (int)local_98;
                    while ((g_CharacterClassificationTable[(byte)(*pcVar25 + 1)] & 2U) != 0) {
                      pcVar25 = pcVar25 + 1;
                    }
                    if (*pcVar25 == '[') {
                      local_98 = -NAN;
                      crt_stdio_c_sscanf_FUN_0060013c(pcVar25,"[ %[^]] ]%n",auStack_780);
                      if ((int)local_98 < 0) {
                        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                  (g_CEditorToolsPtr,"Can't parse destination frame number for \"if %s\" statement for animation %s in %s:\n%s",auStack_460
                                   ,local_e4,in_stack_00000010);
                        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                  (&CStack_2ca0,0,(uint)pcVar16,(uint)pcVar29,(uint)pfVar15,
                                   in_stack_fffeeba2,in_stack_fffeeba6);
                        goto LAB_005927ee;
                      }
                      iVar11 = core_skeledit_cpp_FUN_00592520();
                      if (iVar11 == 0) {
                        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                  (g_CEditorToolsPtr,"Can't parse destination frame number for \"if %s\" statement for animation %s in %s:\n%s",auStack_460
                                   ,local_e4,in_stack_00000010);
                        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                  (&CStack_2ca0,0,(uint)pcVar16,(uint)pcVar29,(uint)pfVar15,
                                   in_stack_fffeeba2,in_stack_fffeeba6);
                        goto LAB_005927ee;
                      }
                      local_24 = local_90;
                      dest->to_frame_number = (float)(int)local_90;
                      pcVar25 = pcVar25 + (int)local_98;
                      while ((g_CharacterClassificationTable[(byte)(*pcVar25 + 1)] & 2U) != 0) {
                        pcVar25 = pcVar25 + 1;
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
                      iVar11 = crt_string_c_strnicmp_FUN_005ff070(pcVar25,"over",4);
                      if (iVar11 == 0) {
                        local_98 = -NAN;
                        crt_stdio_c_sscanf_FUN_0060013c(pcVar25,"%*s%f%n",&dest->tween_time);
                        if ((int)local_98 < 0) {
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Can't parse tween time for \"if %s\" statement for animation %s in %s:\n%s",
                                     auStack_460,local_e4,in_stack_00000010);
                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                    (&CStack_2ca0,0,(uint)pcVar16,(uint)pcVar29,(uint)pfVar15,
                                     in_stack_fffeeba2,in_stack_fffeeba6);
                          goto LAB_005927ee;
                        }
                        local_11c = (double)dest->tween_time;
                        if ((local_11c < 0.0) || (99 < local_11c)) {
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Invalid tween time for \"if %s\" statement for animation %s in %s:\n%s",
                                     auStack_460,local_e4,in_stack_00000010);
                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                    (&CStack_2ca0,0,(uint)pcVar16,(uint)pcVar29,(uint)pfVar15,
                                     in_stack_fffeeba2,in_stack_fffeeba6);
                          goto LAB_005927ee;
                        }
                        pcVar25 = pcVar25 + (int)local_98;
                        while ((g_CharacterClassificationTable[(byte)(*pcVar25 + 1)] & 2U) != 0) {
                          pcVar25 = pcVar25 + 1;
                        }
                      }
                    }
                    iVar11 = crt_string_c_strnicmp_FUN_005ff070(pcVar25,"keepState",9);
                    if (iVar11 == 0) {
                      pcVar25 = pcVar25 + 9;
                      dest->set_new_state_as_desired = 1;
                      while ((g_CharacterClassificationTable[(byte)(*pcVar25 + 1)] & 2U) != 0) {
                        pcVar25 = pcVar25 + 1;
                      }
                    }
                    else {
                      dest->set_new_state_as_desired = 0;
                    }
                    while ((g_CharacterClassificationTable[(byte)(*pcVar25 + 1)] & 2U) != 0) {
                      pcVar25 = pcVar25 + 1;
                    }
                    if (*pcVar25 != '\0') {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Extra parms in \"if %s\" statement for animation %s in %s:\n%s\nExtra parms: \"%s\"",auStack_460,
                                 local_e4,in_stack_00000010);
                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                (&CStack_2ca0,0,(uint)pcVar25,(uint)pcVar29,(uint)pfVar15,
                                 in_stack_fffeeba2,in_stack_fffeeba6);
                      goto LAB_005927ee;
                    }
                    local_e4->transition_count = local_e4->transition_count + 1;
                  }
                  else {
                    iVar11 = crt_string_c_strnicmp_FUN_005ff070(local_209c,"->",2);
                    if (iVar11 == 0) {
                      pcVar25 = local_209a;
                      while ((g_CharacterClassificationTable[(byte)(*pcVar25 + 1)] & 2U) != 0) {
                        pcVar25 = pcVar25 + 1;
                      }
                      iVar11 = crt_string_c_strnicmp_FUN_005ff070(pcVar25,"(loop)",6);
                      pcVar16 = pcVar25 + 6;
                      if (iVar11 == 0) {
                        local_e4->exit_forward_to_frame = 0.0;
                        local_e4->exit_forward_to_motion = local_30;
                        while ((g_CharacterClassificationTable[(byte)(*pcVar16 + 1)] & 2U) != 0) {
                          pcVar16 = pcVar16 + 1;
                        }
                      }
                      else {
                        iVar11 = crt_string_c_strnicmp_FUN_005ff070(pcVar25,"(stop)",6);
                        if (iVar11 == 0) {
                          local_e4->exit_forward_to_motion = local_30;
                          local_24 = (float)(local_e4->frame_count + -1);
                          local_e4->exit_forward_to_frame = (float)(int)local_24;
                          while ((g_CharacterClassificationTable[(byte)(*pcVar16 + 1)] & 2U) != 0) {
                            pcVar16 = pcVar16 + 1;
                          }
                        }
                        else {
                          local_60._4_4_ = -NAN;
                          crt_stdio_c_sscanf_FUN_0060013c
                                    (pcVar25," \"%[^\"]\" %n",acStack_b68,local_60 + 4);
                          if ((int)local_60._4_4_ < 0) {
                            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                      (g_CEditorToolsPtr,"Error parsing \"->\" statement parms for animation %s in %s:\n%s",
                                       local_e4,in_stack_00000010);
                            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                      (&CStack_2ca0,0,uVar26,(uint)pcVar29,(uint)pfVar15,
                                       in_stack_fffeeba2,in_stack_fffeeba6);
                            goto LAB_005927ee;
                          }
                          crt_string_c_splitpath_FUN_005ff178
                                    (acStack_b68,(char *)0x0,(char *)0x0,acStack_9d8,(char *)0x0);
                          iVar11 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                                             (&in_stack_0000000c->motion_list);
                          local_e4->exit_forward_to_motion = iVar11;
                          if (iVar11 < 0) {
                            pcVar25 = local_209c;
                            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                      (g_CEditorToolsPtr,"Invalid destination animation for \"->\" statement for animation %s in %s:\n%s",
                                       local_e4);
                            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                      (&CStack_2ca0,0,(uint)pcVar25,(uint)pcVar29,(uint)pfVar15,
                                       in_stack_fffeeba2,in_stack_fffeeba6);
                            goto LAB_005927ee;
                          }
                          pcVar16 = pcVar25 + local_60._4_4_;
                          while ((g_CharacterClassificationTable[(byte)(*pcVar16 + 1)] & 2U) != 0) {
                            pcVar16 = pcVar16 + 1;
                          }
                          if (*pcVar16 == '[') {
                            puVar28 = local_60 + 4;
                            local_60._4_4_ = -NAN;
                            crt_stdio_c_sscanf_FUN_0060013c(pcVar16,"[ %[^]] ]%n");
                            if ((int)local_60._4_4_ < 0) {
                              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                        (g_CEditorToolsPtr,"Can't parse destination frame number for \"->\" statement for animation %s in %s:\n%s",
                                         local_e4,in_stack_00000010);
                              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                        (&CStack_2ca0,0,(uint)puVar28,(uint)pcVar29,(uint)pfVar15,
                                         in_stack_fffeeba2,in_stack_fffeeba6);
                              goto LAB_005927ee;
                            }
                            iVar11 = core_skeledit_cpp_FUN_00592520();
                            if (iVar11 == 0) {
                              pcVar25 = local_209c;
                              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                        (g_CEditorToolsPtr,"Can't parse destination frame number for \"->\" statement for animation %s in %s:\n%s",
                                         local_e4);
                              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                        (&CStack_2ca0,0,(uint)pcVar25,(uint)pcVar29,(uint)pfVar15,
                                         in_stack_fffeeba2,in_stack_fffeeba6);
                              goto LAB_005927ee;
                            }
                            local_24 = local_88;
                            local_e4->exit_forward_to_frame = (float)(int)local_88;
                            pcVar16 = pcVar16 + local_60._4_4_;
                            while ((g_CharacterClassificationTable[(byte)(*pcVar16 + 1)] & 2U) != 0)
                            {
                              pcVar16 = pcVar16 + 1;
                            }
                          }
                          else {
                            local_e4->exit_forward_to_frame = 0.0;
                          }
                          if (*pcVar16 != '\0') {
                            puVar28 = local_60 + 4;
                            local_60._4_4_ = -NAN;
                            crt_stdio_c_sscanf_FUN_0060013c(pcVar16,"%s%n");
                            if ((int)local_60._4_4_ < 1) {
                              g_CurrentFilename = "..\\core\\skeledit.cpp";
                              g_CurrentLineNumber = 0x129f;
                              core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze!");
                            }
                            iVar11 = core_skeledit_cpp_FUN_005925c0();
                            if (iVar11 != 0) {
                              local_e4->exit_forward_cmd = iVar11;
                              pcVar16 = pcVar16 + local_60._4_4_;
                              while ((g_CharacterClassificationTable[(byte)(*pcVar16 + 1)] & 2U) !=
                                     0) {
                                pcVar16 = pcVar16 + 1;
                              }
                              if (local_e4->exit_forward_cmd == 2) {
                                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                          (g_CEditorToolsPtr,"Invalid transition command in \"->\" statement for animation %s in %s:\n%s",
                                           local_e4,in_stack_00000010,local_209c);
                                shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                          (&CStack_2ca0,0,(uint)puVar28,(uint)pcVar29,(uint)pfVar15,
                                           in_stack_fffeeba2,in_stack_fffeeba6);
                                goto LAB_005927ee;
                              }
                              local_e4->exit_forward_tween_time = 0.0;
                              switch(local_e4->exit_forward_cmd) {
                              case 3:
                              case 4:
                              case 5:
                              case 6:
                                iVar11 = crt_string_c_strnicmp_FUN_005ff070
                                                   (pcVar16,"over",4);
                                if (iVar11 == 0) {
                                  local_60._4_4_ = -NAN;
                                  crt_stdio_c_sscanf_FUN_0060013c
                                            (pcVar16,"%*s%f%n",local_84,local_60 + 4);
                                  if ((int)local_60._4_4_ < 0) {
                                    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                              (g_CEditorToolsPtr,"Can't parse tween time for \"->\" statement for animation %s in %s:\n%s"
                                               ,local_e4,in_stack_00000010);
                                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                              (&CStack_2ca0,0,(uint)puVar28,(uint)pcVar29,
                                               (uint)pfVar15,in_stack_fffeeba2,in_stack_fffeeba6);
                                    goto LAB_005927ee;
                                  }
                                  local_124 = (double)local_e4->exit_forward_tween_time;
                                  if ((local_124 < 0.0) || (99 < local_124)) {
                                    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                              (g_CEditorToolsPtr,"Invalid tween time for \"->\" statement for animation %s in %s:\n%s"
                                               ,local_e4,in_stack_00000010);
                                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                              (&CStack_2ca0,0,(uint)puVar28,(uint)pcVar29,
                                               (uint)pfVar15,in_stack_fffeeba2,in_stack_fffeeba6);
                                    goto LAB_005927ee;
                                  }
                                  pcVar16 = pcVar16 + local_60._4_4_;
                                  while ((g_CharacterClassificationTable[(byte)(*pcVar16 + 1)] & 2U)
                                         != 0) {
                                    pcVar16 = pcVar16 + 1;
                                  }
                                  if ((local_e4->exit_forward_cmd == 5) ||
                                     (local_e4->exit_forward_cmd == 6)) {
                                    dVar23 = crt_math_c_round_FUN_005fe6b0
                                                       ((double)((float)local_e4->frame_count -
                                                                local_e4->exit_forward_tween_time *
                                                                local_e4->fps));
                                    *(int *)(extraout_EAX + 0x28) = (int)ROUND(dVar23);
                                    if (*(int *)(extraout_EAX + 0x28) < 0) {
                                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                (g_CEditorToolsPtr,
                                                 "Tween time for \"->\" statement is longer than animation time in animation %s in %s:\n%s",local_e4,
                                                 in_stack_00000010,local_209c);
                                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                (&CStack_2ca0,0,(uint)puVar28,(uint)pcVar29,
                                                 (uint)pfVar15,in_stack_fffeeba2,in_stack_fffeeba6);
                                      goto LAB_005927ee;
                                    }
                                  }
                                }
                              }
                            }
                            iVar11 = crt_string_c_strnicmp_FUN_005ff070
                                               (pcVar16,"keepState",9);
                            if (iVar11 == 0) {
                              local_e4->exit_forward_set_new_state = 1;
                              pcVar16 = pcVar16 + 9;
                              while ((g_CharacterClassificationTable[(byte)(*pcVar16 + 1)] & 2U) !=
                                     0) {
                                pcVar16 = pcVar16 + 1;
                              }
                            }
                            else {
                              local_e4->exit_forward_set_new_state = 0;
                            }
                          }
                        }
                      }
                      while ((g_CharacterClassificationTable[(byte)(*pcVar16 + 1)] & 2U) != 0) {
                        pcVar16 = pcVar16 + 1;
                      }
                      if (*pcVar16 != '\0') {
                        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                  (g_CEditorToolsPtr,"Extra parms in \"->\" statement for animation %s in %s:\n%s\nExtra parms: \"%s\"",local_e4,
                                   in_stack_00000010);
                        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                  (&CStack_2ca0,0,(uint)pcVar16,(uint)pcVar29,(uint)pfVar15,
                                   in_stack_fffeeba2,in_stack_fffeeba6);
                        goto LAB_005927ee;
                      }
                    }
                    else {
                      iVar11 = crt_string_c_strnicmp_FUN_005ff070(local_209c,"signal",6);
                      if (iVar11 == 0) {
                        pcVar25 = local_209a + 4;
                        while ((g_CharacterClassificationTable[(byte)(*pcVar25 + 1)] & 2U) != 0) {
                          pcVar25 = pcVar25 + 1;
                        }
                        if (0xe < local_e4->signal_count) {
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Too many signals in animation %s in %s, max is %d",local_e4,
                                     in_stack_00000010,0xf);
                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                    (&CStack_2ca0,0,uVar26,(uint)pcVar29,(uint)pfVar15,
                                     in_stack_fffeeba2,in_stack_fffeeba6);
                          goto LAB_005927ee;
                        }
                        iVar11 = crt_stdio_c_sscanf_FUN_0060013c
                                           (pcVar25,"%d %*s %s",&local_80,auStack_7e4);
                        if (iVar11 != 2) {
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Error parsing \"signal\" statement for animation %s in %s:\n%s",local_e4,
                                     in_stack_00000010);
                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                    (&CStack_2ca0,0,uVar26,(uint)pcVar29,(uint)pfVar15,
                                     in_stack_fffeeba2,in_stack_fffeeba6);
                          goto LAB_005927ee;
                        }
                        iVar11 = core_skeledit_cpp_FUN_00592520();
                        if (iVar11 == 0) {
                          pcVar25 = local_209c;
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Invalid frame number in \"signal\" statement for animation %s in %s:\n%s",local_e4)
                          ;
                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                    (&CStack_2ca0,0,(uint)pcVar25,(uint)pcVar29,(uint)pfVar15,
                                     in_stack_fffeeba2,in_stack_fffeeba6);
                          goto LAB_005927ee;
                        }
                        if (local_80 == 0) {
                          pcVar25 = local_209c;
                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                    (g_CEditorToolsPtr,"Signal value cannot be 0 in \"signal\" statement for animation %s in %s:\n%s",local_e4)
                          ;
                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                    (&CStack_2ca0,0,(uint)pcVar25,(uint)pcVar29,(uint)pfVar15,
                                     in_stack_fffeeba2,in_stack_fffeeba6);
                          goto LAB_005927ee;
                        }
                        local_e4->signals[local_e4->signal_count].value = local_80;
                        local_e4->signals[local_e4->signal_count].frame_number = local_7c;
                        local_e4->signal_count = local_e4->signal_count + 1;
                      }
                      else {
                        iVar11 = crt_string_c_strnicmp_FUN_005ff070(local_209c,"reverse",7)
                        ;
                        if (iVar11 == 0) {
                          local_dc = 1;
                        }
                        else {
                          iVar11 = crt_string_c_strnicmp_FUN_005ff070
                                             (local_209c,"filename",5);
                          if ((iVar11 != 0) &&
                             (iVar11 = crt_string_c_strnicmp_FUN_005ff070
                                                 (local_209c,"frames",6), iVar11 != 0)) {
                            iVar11 = crt_string_c_strnicmp_FUN_005ff070
                                               (local_209c,"cancel",6);
                            if (iVar11 == 0) {
                              pbVar5 = (byte *)(local_209a + 4);
                              while ((g_CharacterClassificationTable[(byte)(*pbVar5 + 1)] & 2U) != 0
                                    ) {
                                pbVar5 = pbVar5 + 1;
                              }
                              local_d8 = 0;
                              pcVar25 = crt_string_c_strstr_FUN_005fedd0
                                                  ((char *)pbVar5,"none");
                              if (pcVar25 == (char *)0x0) {
                                while (*pbVar5 != 0) {
                                  uVar26 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar5);
                                  if (uVar26 < 0x50) {
                                    if (uVar26 < 0x42) goto LAB_005949a6;
                                    if (uVar26 < 0x43) {
                                      local_d4 = (float)((uint)local_d4 | 4);
                                      goto LAB_005949a6;
                                    }
                                    if (uVar26 == 0x48) {
                                      local_d4 = (float)((uint)local_d4 | 2);
                                      goto LAB_005949a6;
                                    }
                                    pbVar5 = pbVar5 + 1;
                                  }
                                  else {
                                    if (uVar26 < 0x51) {
                                      local_d4 = (float)((uint)local_d4 | 1);
                                    }
                                    else if (uVar26 < 0x59) {
                                      if (uVar26 == 0x58) {
                                        local_d8 = local_d8 | 1;
                                      }
                                    }
                                    else if (uVar26 < 0x5a) {
                                      local_d8 = local_d8 | 2;
                                    }
                                    else if (uVar26 == 0x5a) {
                                      local_d8 = local_d8 | 4;
                                    }
LAB_005949a6:
                                    pbVar5 = pbVar5 + 1;
                                  }
                                }
                              }
                            }
                            else {
                              iVar11 = crt_string_c_strnicmp_FUN_005ff070
                                                 (local_209c,"bias",4);
                              if (iVar11 == 0) {
                                pcVar25 = local_209a + 2;
                                while ((g_CharacterClassificationTable[(byte)(*pcVar25 + 1)] & 2U)
                                       != 0) {
                                  pcVar25 = pcVar25 + 1;
                                }
                                local_78 = -1;
                                crt_stdio_c_sscanf_FUN_0060013c
                                          (pcVar25,"frame %s to \"%[^\"]\" frame %s%n",auStack_528,
                                           auStack_654,auStack_58c,&local_78);
                                iVar11 = DAT_03670b5c;
                                if (local_78 < 0xf) {
                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                            (g_CEditorToolsPtr,"Can't parse \"bias\" statement for animation %s in %s:%s",
                                             local_e4,in_stack_00000010);
                                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                            (&CStack_2ca0,0,uVar26,(uint)pcVar29,(uint)pfVar15,
                                             in_stack_fffeeba2,in_stack_fffeeba6);
                                  goto LAB_005927ee;
                                }
                                (&DAT_03670b60)[DAT_03670b5c * 4] = local_30;
                                iVar3 = core_skeledit_cpp_FUN_00592520();
                                if (iVar3 == 0) {
                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                            (g_CEditorToolsPtr,"Can't parse frame to bias in \"bias\" statement for animation %s in %s:%s",
                                             local_e4,in_stack_00000010,local_209c);
                                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                            (&CStack_2ca0,0,uVar26,(uint)pcVar29,(uint)pfVar15,
                                             in_stack_fffeeba2,in_stack_fffeeba6);
                                  goto LAB_005927ee;
                                }
                                iVar3 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                                                  (&in_stack_0000000c->motion_list);
                                (&DAT_03670b68)[iVar11 * 4] = iVar3;
                                if (iVar3 < 0) {
                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                            (g_CEditorToolsPtr,"Invalid reference motion \"%s\" in \"bias\" statement for animation %s in %s:%s",
                                             auStack_654,local_e4,in_stack_00000010);
                                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                            (&CStack_2ca0,0,uVar26,(uint)pcVar29,(uint)pfVar15,
                                             in_stack_fffeeba2,in_stack_fffeeba6);
                                  goto LAB_005927ee;
                                }
                                if (iVar3 == local_30) {
                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                            (g_CEditorToolsPtr,"Reference motion is same as motion to bias in \"bias\" statement for animation %s in %s:%s",
                                             local_e4,in_stack_00000010);
                                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                            (&CStack_2ca0,0,uVar26,(uint)pcVar29,(uint)pfVar15,
                                             in_stack_fffeeba2,in_stack_fffeeba6);
                                  goto LAB_005927ee;
                                }
                                iVar11 = core_skeledit_cpp_FUN_00592520();
                                if (iVar11 == 0) {
                                  pcVar25 = local_209c;
                                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                            (g_CEditorToolsPtr,"Can't parse frame to bias in \"bias\" statement for animation %s in %s:%s",
                                             local_e4);
                                  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                            (&CStack_2ca0,0,(uint)pcVar25,(uint)pcVar29,
                                             (uint)pfVar15,in_stack_fffeeba2,in_stack_fffeeba6);
                                  goto LAB_005927ee;
                                }
                                DAT_03670b5c = DAT_03670b5c + 1;
                              }
                              else {
                                iVar11 = crt_string_c_strnicmp_FUN_005ff070
                                                   (local_209c,"markers",7);
                                if (iVar11 == 0) {
                                  if (0 < local_e4->marker_count) {
                                    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                              (g_CEditorToolsPtr,"Multiple \"markers\" statements for animation %s in %s"
                                               ,local_e4,in_stack_00000010);
                                    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                              (&CStack_2ca0,0,uVar26,(uint)pcVar29,(uint)pfVar15,
                                               in_stack_fffeeba2,in_stack_fffeeba6);
                                    goto LAB_005927ee;
                                  }
                                  pcVar25 = local_209a + 5;
                                  while ((g_CharacterClassificationTable[(byte)(*pcVar25 + 1)] & 2U)
                                         != 0) {
                                    pcVar25 = pcVar25 + 1;
                                  }
                                  cVar1 = *pcVar25;
                                  while (cVar1 != '\0') {
                                    piVar27 = &local_74;
                                    local_74 = -1;
                                    crt_stdio_c_sscanf_FUN_0060013c(pcVar25,"%d%n");
                                    if (local_74 < 0) {
                                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                (g_CEditorToolsPtr,
                                                 "Can't parse \"markers\" statement for animation %s in %s:\n%s",local_e4,
                                                 in_stack_00000010);
                                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                (&CStack_2ca0,0,(uint)piVar27,(uint)pcVar29,
                                                 (uint)pfVar15,in_stack_fffeeba2,in_stack_fffeeba6);
                                      goto LAB_005927ee;
                                    }
                                    if ((local_70 < 1) || (local_e4->frame_count <= local_70)) {
                                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                (g_CEditorToolsPtr,
                                                 "Can't place marker at invalid frame number %d for animation %s in %s:\n%s",local_70,
                                                 local_e4,in_stack_00000010);
                                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                (&CStack_2ca0,0,(uint)piVar27,(uint)pcVar29,
                                                 (uint)pfVar15,in_stack_fffeeba2,in_stack_fffeeba6);
                                      goto LAB_005927ee;
                                    }
                                    if (9 < local_e4->marker_count) {
                                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                (g_CEditorToolsPtr,
                                                 "Too many markers in animation %s in %s:\n%s",local_e4,
                                                 in_stack_00000010);
                                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                (&CStack_2ca0,0,(uint)piVar27,(uint)pcVar29,
                                                 (uint)pfVar15,in_stack_fffeeba2,in_stack_fffeeba6);
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
                                                (&CStack_2ca0,0,(uint)piVar27,(uint)pcVar29,
                                                 (uint)pfVar15,in_stack_fffeeba2,in_stack_fffeeba6);
                                      goto LAB_005927ee;
                                    }
                                    local_e4->markers[local_e4->marker_count] = local_70;
                                    local_e4->marker_count = local_e4->marker_count + 1;
                                    pcVar25 = pcVar25 + local_74;
                                    while ((g_CharacterClassificationTable[(byte)(*pcVar25 + 1)] &
                                           2U) != 0) {
                                      pcVar25 = pcVar25 + 1;
                                    }
                                    cVar1 = *pcVar25;
                                  }
                                }
                                else {
                                  iVar11 = crt_string_c_strnicmp_FUN_005ff070
                                                     (local_209c,"displace",8);
                                  if (iVar11 == 0) {
                                    pcVar25 = local_209a + 6;
                                    while ((g_CharacterClassificationTable[(byte)(*pcVar25 + 1)] &
                                           2U) != 0) {
                                      pcVar25 = pcVar25 + 1;
                                    }
                                    iVar11 = crt_stdio_c_sscanf_FUN_0060013c
                                                       (pcVar25,"%f,%f,%f",&local_13c,
                                                        &local_138,&local_134);
                                    if (iVar11 != 3) {
                                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                (g_CEditorToolsPtr,
                                                 "Can't parse displacement vector in \"displace\" keyword in animation %s in %s\n:%s",local_e4,
                                                 in_stack_00000010);
                                      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                (&CStack_2ca0,0,uVar26,(uint)pcVar29,(uint)pfVar15,
                                                 in_stack_fffeeba2,in_stack_fffeeba6);
                                      goto LAB_005927ee;
                                    }
                                  }
                                  else {
                                    iVar11 = crt_string_c_strnicmp_FUN_005ff070
                                                       (local_209c,"totaldisplacement",0x11
                                                       );
                                    if (iVar11 == 0) {
                                      pbVar5 = abStack_208b;
LAB_00594f2a:
                                      do {
                                        str_00 = pbVar5;
                                        pbVar5 = str_00 + 1;
                                      } while ((g_CharacterClassificationTable[(byte)(*str_00 + 1)]
                                               & 2U) != 0);
                                      if (*str_00 != 0) {
                                        local_6c = crt_ctype_c_toupper_FUN_005ff9e0((uint)*str_00);
                                        if (0x58 < local_6c) {
                                          if ((local_6c < 0x5a) || (local_6c < 0x5b)) {
LAB_0059507b:
                                            pbVar5 = str_00 + 1;
                                            if (str_00[1] == 0x3a) {
                                              pbVar5 = str_00 + 2;
                                            }
                                            if (*pbVar5 == 0x3d) {
                                              pbVar5 = pbVar5 + 1;
                                            }
                                            iVar11 = crt_string_c_strnicmp_FUN_005ff070
                                                               ((char *)pbVar5,"display",7)
                                            ;
                                            if (iVar11 == 0) {
                                              pbVar5 = pbVar5 + 7;
                                              local_64 = -99998.0;
                                            }
                                            else {
                                              local_60._0_4_ = -NAN;
                                              pcVar29 = local_60;
                                              pfVar17 = &local_64;
                                              crt_stdio_c_sscanf_FUN_0060013c
                                                        ((char *)pbVar5,"%f%n");
                                              if ((int)local_60._0_4_ < 1) {
                                                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                          (g_CEditorToolsPtr,
                                                           "Can't parse \"totalDisplacement\" keyword in animation %s in %s\n:%s",
                                                           local_e4,in_stack_00000010);
                                                shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                          (&CStack_2ca0,0,(uint)pfVar17,
                                                           (uint)pcVar29,(uint)pfVar15,
                                                           in_stack_fffeeba2,in_stack_fffeeba6);
                                                goto LAB_005927ee;
                                              }
                                              pbVar5 = pbVar5 + local_60._0_4_;
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
                                            piVar27 = &local_68;
                                            local_68 = -1;
                                            crt_stdio_c_sscanf_FUN_0060013c
                                                      ((char *)str_00,"[%[^- \t] - %[^] \t] ]%n",auStack_4c4);
                                            if (((local_68 < 5) ||
                                                (iVar11 = core_skeledit_cpp_FUN_00592520(),
                                                iVar11 == 0)) ||
                                               (iVar11 = core_skeledit_cpp_FUN_00592520(),
                                               iVar11 == 0)) {
                                              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                        (g_CEditorToolsPtr,
                                                         "Can't parse frame range in \"totalDisplacement\" keyword in animation %s in %s\n:%s",
                                                         local_e4,in_stack_00000010);
                                              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                        (&CStack_2ca0,0,(uint)piVar27,(uint)pcVar29,
                                                         (uint)pfVar15,in_stack_fffeeba2,
                                                         in_stack_fffeeba6);
                                              goto LAB_005927ee;
                                            }
                                            if ((int)local_8c < (int)local_c4) {
                                              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                        (g_CEditorToolsPtr,
                                                         "Invalid frame range in \"totalDisplacement\" keyword in animation %s in %s\n:%s",
                                                         local_e4,in_stack_00000010);
                                              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                        (&CStack_2ca0,0,(uint)piVar27,(uint)pcVar29,
                                                         (uint)pfVar15,in_stack_fffeeba2,
                                                         in_stack_fffeeba6);
                                              goto LAB_005927ee;
                                            }
                                            pbVar5 = str_00 + local_68;
                                          }
                                          goto LAB_00594f2a;
                                        }
                                        if (0x2b < local_6c) {
                                          if (local_6c < 0x2d) goto LAB_00594f2a;
                                          if (local_6c == 0x58) goto LAB_0059507b;
                                        }
LAB_0059518b:
                                        pcVar25 = local_209c;
                                        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                  (g_CEditorToolsPtr,
                                                   "Can't parse \"totalDisplacement\" keyword in animation %s in %s\n:%s",local_e4);
                                        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                  (&CStack_2ca0,0,(uint)pcVar25,(uint)pcVar29,
                                                   (uint)pfVar15,in_stack_fffeeba2,in_stack_fffeeba6
                                                  );
                                        goto LAB_005927ee;
                                      }
                                      crt_stdio_c_sscanf_FUN_0060013c
                                                ((char *)str_00,"%f,%f,%f",&local_13c,
                                                 &local_138);
                                    }
                                    else {
                                      iVar11 = crt_string_c_strnicmp_FUN_005ff070
                                                         (local_209c,"flipXZ",6);
                                      if (iVar11 == 0) {
                                        local_d0 = (FILE *)&DAT_00000001;
                                      }
                                      else {
                                        iVar11 = crt_string_c_strnicmp_FUN_005ff070
                                                           (local_209c,"rotate",6);
                                        if (iVar11 != 0) {
                                          pcVar29 = local_209c;
                                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                    (g_CEditorToolsPtr,
                                                     "Invalid keyword for animation %s in %s:\n%s");
                                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                    (&CStack_2ca0,0,(uint)in_stack_00000010,
                                                     (uint)pcVar29,(uint)pfVar15,in_stack_fffeeba2,
                                                     in_stack_fffeeba6);
                                          goto LAB_005927ee;
                                        }
                                        if (local_bc != 0) {
                                          pSVar12 = local_e4;
                                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                    (g_CEditorToolsPtr,
                                                     "Multiple \"rotate\" keywords used in animation %s in %s");
                                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                    (&CStack_2ca0,0,(uint)pSVar12,
                                                     (uint)in_stack_00000010,(uint)pfVar15,
                                                     in_stack_fffeeba2,in_stack_fffeeba6);
                                          goto LAB_005927ee;
                                        }
                                        pcVar25 = local_209a + 4;
                                        while ((g_CharacterClassificationTable[(byte)(*pcVar25 + 1)]
                                               & 2U) != 0) {
                                          pcVar25 = pcVar25 + 1;
                                        }
                                        pcVar29 = local_154 + 4;
                                        pfVar17 = &local_14c;
                                        iVar11 = crt_stdio_c_sscanf_FUN_0060013c
                                                           (pcVar25,"%f,%f,%f");
                                        if (iVar11 != 3) {
                                          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                                    (g_CEditorToolsPtr,
                                                     "Can't parse rotation PBH in \"rotate\" keyword in animation %s in %s\n:%s",local_e4,
                                                     in_stack_00000010);
                                          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                                                    (&CStack_2ca0,0,(uint)pfVar17,(uint)pcVar29,
                                                     (uint)pfVar15,in_stack_fffeeba2,
                                                     in_stack_fffeeba6);
                                          goto LAB_005927ee;
                                        }
                                        local_154._0_4_ = (float)local_154._0_4_ * 0.01745329f;
                                        local_154._4_4_ = (float)local_154._4_4_ * 0.01745329f;
                                        local_14c = local_14c * 0.01745329f;
                                        local_bc = 1;
                                        core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                                                  (&CStack_42c,&g_ZeroVector,(CVector3f *)local_154)
                                        ;
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
            pcVar29 = local_e0;
            pCVar6 = (CBoneStructure *)
                     shape_memdbg_cpp_openFile_FUN_0050f7a0
                               (local_e0,(char *)0x0,"rt","..\\core\\skeledit.cpp",
                                0x13d8);
            local_b8 = pCVar6;
            if (pCVar6 == (CBoneStructure *)0x0) {
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Can't open %s mentioned in %s");
              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                        (&CStack_2ca0,0,(uint)pcVar29,(uint)in_stack_00000010,(uint)pfVar15,
                         in_stack_fffeeba2,in_stack_fffeeba6);
              goto LAB_005927ee;
            }
            iVar11 = 1;
            do {
              iVar3 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)pCVar6);
              this_ptr = local_b8;
              if (iVar3 < 0) break;
            } while ((iVar3 != 10) || (iVar11 = iVar11 + -1, 0 < iVar11));
            pfVar15 = &local_b4;
            pcVar29 = "%d\n";
            pCVar6 = local_b8;
            crt_stdio_c_fscanf_FUN_005fe7c0((FILE *)local_b8,"%d\n");
            fVar13 = local_34;
            uVar24 = CONCAT44 /* combine 2-byte values */((FILE *)local_b0,this_ptr);
            core_skeledit_cpp_CBoneStructure_readBONheader_FUN_0058a4a0
                      (this_ptr,(FILE *)local_b0,&pCVar6->bone_count);
            iVar11 = 0;
            if (0 < *(int *)((int)aiStack_28f8 + (int)fVar13)) {
              do {
                uVar24 = CONCAT44 /* combine 2-byte values */((int)((ulonglong)uVar24 >> 0x20),local_b8);
                iVar11 = iVar11 + 1;
                core_skeledit_cpp_CBoneStructure_skipBONframe_FUN_0058abb0(local_b8);
                local_b0._0_4_ = local_b0._0_4_ + -1;
              } while (iVar11 < *(int *)((int)aiStack_28f8 + (int)fVar13));
            }
            local_b0._8_4_ = (streambuf *)0x0;
            local_2c = 0.0;
            local_b0._4_4_ = 1.4013e-45;
            if (-1 < local_e4->frame_count) {
              do {
                fVar13 = local_2c;
                iVar11 = (int)((ulonglong)uVar24 >> 0x20);
                local_24 = (float)(local_e4->frame_start + (int)local_2c);
                shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                          (g_CEditorToolsPtr,(float)(int)local_24,(float)(int)local_104);
                if ((int)local_b0._0_4_ < 1) {
                  if (fVar13 != (float)local_e4->frame_count) {
                    g_CurrentFilename = "..\\core\\skeledit.cpp";
                    g_CurrentLineNumber = 0x1408;
                    core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze!");
                  }
                  break;
                }
                local_b0._0_4_ = local_b0._0_4_ + -1;
                core_skeledit_cpp_CBoneStructure_readBONframe_FUN_0058aa10(local_b8,local_d0,iVar11)
                ;
                iVar11 = local_bc;
                core_skeledit_cpp_CBoneStructure_fixupMatrices_FUN_0058adb0(pCVar6);
                if (iVar11 != 0) {
                  iVar11 = 0;
                  if (0 < aiStack_7484[0]) {
                    pfVar17 = (float *)auStack_742c;
                    do {
                      iVar11 = iVar11 + 1;
                      core_xform_cpp_multiplyMatrix3x4InPlace_FUN_005f50c0
                                ((CMatrix3x4f *)pfVar17,&CStack_42c);
                      pfVar17 = pfVar17 + 0x21;
                    } while (iVar11 < aiStack_7484[0]);
                  }
                  core_skeledit_cpp_FUN_0058ac80();
                }
                pCVar6 = (CBoneStructure *)&stack0xffffc0a0;
                uVar24 = CONCAT44 /* combine 2-byte values */(aiStack_7484,0x595501);
                core_skeledit_cpp_FUN_0058af40();
                if ((float)local_b0._4_4_ != 0.0) {
                  local_178.m[2].x = (float)auStack_742c._12_4_;
                  local_178.m[2].y = fStack_7410;
                  local_178.m[2].z = fStack_7400;
                  if ((CVector3f *)&local_1f0 != local_178.m + 2) {
                    local_1f0 = (float)auStack_742c._12_4_;
                    local_1ec = fStack_7410;
                    local_1e8 = fStack_7400;
                  }
                  pcVar29 = (char *)&CStack_1a8;
                  pCVar6 = (CBoneStructure *)auStack_742c;
                  uVar24 = 0x59557a00000000;
                  pCVar7 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                                     ((CVector3f *)pCVar6,(CMatrix3x3f *)pcVar29);
                  if (&local_1b4 != pCVar7) {
                    local_1b4.x = pCVar7->x;
                    local_1b4.y = pCVar7->y;
                    local_1b4.z = pCVar7->z;
                  }
                  local_b0._4_4_ = 0.0;
                }
                CStack_1a8.m[1].x = (float)auStack_742c._12_4_;
                local_178.m[1].x = (float)auStack_742c._12_4_ - local_1f0;
                local_178.m[1].y = fStack_7410 - local_1ec;
                local_178.m[1].z = fStack_7400 - local_1e8;
                CStack_1a8.m[1].y = fStack_7410;
                local_1d8.x = local_178.m[1].x + local_13c;
                local_1d8.y = local_178.m[1].y + local_138;
                local_1d8.z = local_178.m[1].z + local_134;
                CStack_1a8.m[1].z = fStack_7400;
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
                  iVar11 = local_e4->frame_start + (int)local_2c;
                }
                else {
                  iVar11 = (local_e4->frame_start + local_e4->frame_count + -1) - (int)local_2c;
                }
                pCVar7 = in_stack_0000000c->frame_positions_1 + iVar11;
                if (pCVar7 != &local_1d8) {
                  pCVar7->x = local_1d8.x;
                  pCVar7->y = local_1d8.y;
                  pCVar7->z = local_1d8.z;
                }
                iVar3 = in_stack_0000000c->bone_count;
                pCVar14 = in_stack_0000000c->bone_angle_frames;
                if (local_d4 == 0.0) {
                  local_60._8_4_ = local_d4;
                  if (0 < in_stack_0000000c->bone_count) {
                    local_40 = (CQuaternion4f *)auStack_742c;
                    pCVar14 = pCVar14 + iVar3 * iVar11;
                    do {
                      matrix_ptr = (CMatrix3x3f *)((ulonglong)uVar24 >> 0x20);
                      uVar24 = CONCAT44 /* combine 2-byte values */(matrix_ptr,local_40);
                      core_xform_cpp_matrixToQuaternion_FUN_005f7420(local_40,matrix_ptr);
                      pfVar17 = (float *)((int)pCVar14 + (uint)bVar22 * -8 + 4);
                      pCVar14->w = afStack_218[3];
                      pfVar18 = pfVar17 + (uint)bVar22 * -2 + 1;
                      *pfVar17 = afStack_218[(uint)bVar22 * -2 + 4];
                      *pfVar18 = afStack_218[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 5];
                      pfVar18[(uint)bVar22 * -2 + 1] =
                           (afStack_218 + (uint)bVar22 * -2 + (uint)bVar22 * -2 + 5)
                           [(uint)bVar22 * -2 + 1];
                      local_60._8_4_ = local_60._8_4_ + 1;
                      local_40 = (CQuaternion4f *)&local_40[8].x;
                      pCVar14 = pCVar14 + 1;
                    } while ((int)local_60._8_4_ < in_stack_0000000c->bone_count);
                  }
                }
                else {
                  uVar24 = CONCAT44 /* combine 2-byte values */((int)((ulonglong)uVar24 >> 0x20),&local_178);
                  pCVar7 = (CVector3f *)auStack_742c;
                  core_xform_cpp_matrixToEulerAngles_FUN_005f5690(pCVar7,&local_178);
                  if (((uint)local_d4 & 1) != 0) {
                    local_178.m[0].x = local_1b4.x;
                  }
                  if (((uint)local_d4 & 2) != 0) {
                    local_178.m[0].y = local_1b4.y;
                  }
                  if (((uint)local_d4 & 4) != 0) {
                    local_178.m[0].z = local_1b4.z;
                  }
                  local_148.x = 0.0;
                  local_148.y = 0.0;
                  local_148.z = 0.0;
                  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                            (&CStack_39c,&local_148,local_178.m);
                  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                            ((CMatrix3x4f *)auStack_742c,&CStack_39c,(CMatrix3x4f *)pCVar7);
                  pfVar17 = afStack_33c;
                  pCVar19 = &CStack_3cc;
                  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                    pCVar19->m[0].w = *pfVar17;
                    pfVar17 = pfVar17 + (uint)bVar22 * -2 + 1;
                    pCVar19 = (CMatrix3x4f *)((int)pCVar19 + ((uint)bVar22 * -2 + 1) * 4);
                  }
                  core_xform_cpp_inverse_FUN_005f6210(&CStack_3cc,(CMatrix3x4f *)uVar24);
                  pfVar17 = afStack_36c;
                  pCVar19 = &CStack_3fc;
                  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                    pCVar19->m[0].w = *pfVar17;
                    pfVar17 = pfVar17 + (uint)bVar22 * -2 + 1;
                    pCVar19 = (CMatrix3x4f *)((int)pCVar19 + ((uint)bVar22 * -2 + 1) * 4);
                  }
                  local_60._12_4_ = 0.0;
                  if (0 < in_stack_0000000c->bone_count) {
                    local_44 = (float *)auStack_742c;
                    pCVar14 = pCVar14 + iVar3 * iVar11;
                    do {
                      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                                ((CMatrix3x4f *)local_44,&CStack_3fc,
                                 (CMatrix3x4f *)((ulonglong)uVar24 >> 0x20));
                      pfVar17 = afStack_30c;
                      pCVar20 = aCStack_2dc;
                      for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
                        pCVar20->w = *pfVar17;
                        pfVar17 = pfVar17 + (uint)bVar22 * -2 + 1;
                        pCVar20 = (CQuaternion4f *)((int)pCVar20 + ((uint)bVar22 * -2 + 1) * 4);
                      }
                      uVar24 = CONCAT44 /* combine 2-byte values */(aCStack_2dc,0x595c72);
                      core_xform_cpp_matrixToQuaternion_FUN_005f7420
                                (aCStack_2dc,(CMatrix3x3f *)pCVar6);
                      pfVar17 = (float *)((int)pCVar14 + (uint)bVar22 * -8 + 4);
                      pCVar14->w = fStack_21c;
                      pfVar18 = pfVar17 + (uint)bVar22 * -2 + 1;
                      *pfVar17 = afStack_218[(uint)bVar22 * -2];
                      *pfVar18 = afStack_218[(uint)bVar22 * -2 + (uint)bVar22 * -2 + 1];
                      pfVar18[(uint)bVar22 * -2 + 1] =
                           (afStack_218 + (uint)bVar22 * -2 + (uint)bVar22 * -2 + 1)
                           [(uint)bVar22 * -2 + 1];
                      local_60._12_4_ = local_60._12_4_ + 1;
                      local_44 = &((CMatrix3x4f *)((int)local_44 + 0x60))->m[2].x;
                      pCVar14 = pCVar14 + 1;
                    } while ((int)local_60._12_4_ < in_stack_0000000c->bone_count);
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
            iVar11 = 0;
            if (0 < local_e4->frame_count) {
              do {
                iVar3 = local_e4->frame_start + iVar11;
                if (iVar11 < local_e4->frame_count + -1) {
                  pCVar7 = in_stack_0000000c->frame_positions_1 + iVar3;
                  pCVar10 = in_stack_0000000c->frame_positions_1 + iVar3 + 1;
                  local_130.x = pCVar10->x - pCVar7->x;
                  local_130.y = pCVar10->y - pCVar7->y;
                  fVar13 = pCVar10->z - pCVar7->z;
                  pCVar7 = in_stack_0000000c->frame_positions_2 + iVar3;
                  local_130.z = fVar13;
                  if (pCVar7 != &local_130) {
                    pCVar7->x = local_130.x;
                    pCVar7->y = local_130.y;
LAB_00595723:
                    pCVar7->z = fVar13;
                  }
                }
                else if (iVar11 < 1) {
                  pCVar7 = in_stack_0000000c->frame_positions_2;
                  pCVar7[iVar3].z = 0.0;
                  pCVar7[iVar3].y = pCVar7[iVar3].z;
                  pCVar7[iVar3].x = pCVar7[iVar3].y;
                }
                else if ((streambuf *)local_b0._8_4_ == (streambuf *)0x0) {
                  pCVar7 = in_stack_0000000c->frame_positions_2 + iVar3;
                  pCVar10 = in_stack_0000000c->frame_positions_2 + iVar3 + -1;
                  if (pCVar7 != pCVar10) {
                    pCVar7->x = pCVar10->x;
                    pCVar7->y = pCVar10->y;
                    pCVar7->z = pCVar10->z;
                  }
                }
                else {
                  pCVar7 = in_stack_0000000c->frame_positions_1;
                  local_184.x = CStack_1a8.m[2].x - pCVar7[iVar3].x;
                  local_184.y = CStack_1a8.m[2].y - pCVar7[iVar3].y;
                  fVar13 = CStack_1a8.m[2].z - pCVar7[iVar3].z;
                  pCVar7 = in_stack_0000000c->frame_positions_2 + iVar3;
                  local_184.z = fVar13;
                  if (pCVar7 != &local_184) {
                    pCVar7->x = local_184.x;
                    pCVar7->y = local_184.y;
                    goto LAB_00595723;
                  }
                }
                if ((local_d8 & 1) == 0) {
                  in_stack_0000000c->frame_positions_2[iVar3].x = 0.0;
                }
                else {
                  in_stack_0000000c->frame_positions_1[iVar3].x = 0.0;
                  if (((int)local_c4 <= iVar11) && (iVar11 <= (int)local_8c)) {
                    local_1fc = local_1fc + in_stack_0000000c->frame_positions_2[iVar3].x;
                  }
                }
                if ((local_d8 & 2) == 0) {
                  in_stack_0000000c->frame_positions_2[iVar3].y = 0.0;
                }
                else {
                  in_stack_0000000c->frame_positions_1[iVar3].y = 0.0;
                  if (((int)local_c4 <= iVar11) && (iVar11 <= (int)local_8c)) {
                    local_1f8 = local_1f8 + in_stack_0000000c->frame_positions_2[iVar3].y;
                  }
                }
                if ((local_d8 & 4) == 0) {
                  in_stack_0000000c->frame_positions_2[iVar3].z = 0.0;
                }
                else {
                  in_stack_0000000c->frame_positions_1[iVar3].z = 0.0;
                  if (((int)local_c4 <= iVar11) && (iVar11 <= (int)local_8c)) {
                    local_1f4 = local_1f4 + in_stack_0000000c->frame_positions_2[iVar3].z;
                  }
                }
                iVar11 = iVar11 + 1;
              } while (iVar11 < local_e4->frame_count);
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
              local_4c = (float)(int)local_24;
              fVar13 = 1.0 / local_4c;
              local_1e4 = local_1e4 * fVar13;
              local_1e0 = local_1e0 * fVar13;
              local_1dc = local_1dc * fVar13;
              iVar11 = (int)local_c4 - (int)local_8c;
              bVar21 = local_c4 == local_8c;
              fVar13 = local_c4;
              while (bVar21 || SBORROW /* signed borrow */4((int)fVar13,(int)local_8c) != iVar11 < 0) {
                iVar11 = local_e4->frame_start + (int)fVar13;
                pCVar7 = in_stack_0000000c->frame_positions_2;
                pCVar7[iVar11].x = pCVar7[iVar11].x + local_1e4;
                pCVar7[iVar11].y = pCVar7[iVar11].y + local_1e0;
                fVar13 = (float)((int)fVar13 + 1);
                pCVar7[iVar11].z = pCVar7[iVar11].z + local_1dc;
                iVar11 = (int)fVar13 - (int)local_8c;
                bVar21 = iVar11 == 0;
              }
            }
            local_3c = local_3c + 0x104;
            local_38 = local_38 + 1;
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
          iVar11 = 0;
          do {
            piVar27 = (int *)((int)&DAT_03670b60 + iVar11);
            iVar11 = iVar11 + 0x10;
            aiStack_2538[*piVar27] = 1;
          } while (iVar11 < DAT_03670b5c * 0x10);
        }
        iVar11 = 0;
        if (DAT_03670b5c < 1) {
LAB_00595eb8:
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Finished processing %s OK!");
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&CStack_2ca0,0,in_stack_fffeebaa,in_stack_fffeebae,in_stack_fffeebb2,
                     in_stack_fffeebb6,in_stack_fffeebba);
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
            pcVar29 = "Cyclic bias detected in %s";
            uVar26 = 0x595f0b;
            pCVar30 = g_CEditorToolsPtr;
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Cyclic bias detected in %s");
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                      (&CStack_2ca0,0,uVar26,(uint)pCVar30,(uint)pcVar29,(uint)in_stack_00000010,
                       in_stack_fffeeba6);
            goto LAB_005927ee;
          }
          piVar27 = &DAT_03670b60 + iVar3 * 4;
          iVar4 = (in_stack_0000000c->motion_list).motions[*piVar27].frame_start +
                  (&DAT_03670b64)[iVar3 * 4];
          iVar3 = (in_stack_0000000c->motion_list).motions[(&DAT_03670b68)[iVar3 * 4]].frame_start +
                  (&DAT_03670b6c)[iVar3 * 4];
          pCVar7 = in_stack_0000000c->frame_positions_1;
          local_1cc = pCVar7[iVar3].x - pCVar7[iVar4].x;
          local_1c8 = pCVar7[iVar3].y - pCVar7[iVar4].y;
          local_1c4 = pCVar7[iVar3].z - pCVar7[iVar4].z;
          for (iVar3 = 0; iVar4 = DAT_03670b5c,
              iVar3 < (in_stack_0000000c->motion_list).motions[*piVar27].frame_count;
              iVar3 = iVar3 + 1) {
            iVar4 = (in_stack_0000000c->motion_list).motions[*piVar27].frame_start + iVar3;
            pCVar7 = in_stack_0000000c->frame_positions_1;
            pCVar7[iVar4].x = pCVar7[iVar4].x + local_1cc;
            pCVar7[iVar4].y = pCVar7[iVar4].y + local_1c8;
            pCVar7[iVar4].z = pCVar7[iVar4].z + local_1c4;
          }
          aiStack_2538[*piVar27] = 0;
          iVar11 = iVar11 + 1;
          *piVar27 = -1;
          if (iVar4 <= iVar11) goto LAB_00595eb8;
        } while( true );
      }
      iVar11 = crt_string_c_strnicmp_FUN_005ff070(local_21c8,"animation",9);
      if (iVar11 != 0) {
        iVar11 = crt_string_c_strnicmp_FUN_005ff070(local_21c8,"checkout",8);
        if (iVar11 == 0) {
          crt_stdio_c_sscanf_FUN_0060013c(acStack_21c2 + 2,"%s",acStack_849 + 1);
          uVar26 = 0xffffffff;
          pcVar25 = acStack_849 + 1;
          do {
            if (uVar26 == 0) break;
            uVar26 = uVar26 - 1;
            cVar1 = *pcVar25;
            pcVar25 = pcVar25 + (uint)bVar22 * -2 + 1;
          } while (cVar1 != '\0');
          n = ~uVar26 - 1;
          if (0 < (int)n) {
            pcVar25 = acStack_849 + ~uVar26;
            do {
              if ((g_CharacterClassificationTable[(byte)(pcVar25[-1] + 1)] & 2U) == 0) break;
              n = n - 1;
              pcVar25 = pcVar25 + -1;
            } while (0 < (int)n);
          }
          (acStack_849 + 1)[n] = '\0';
          while ((g_CharacterClassificationTable[(byte)(acStack_849[1] + 1)] & 2U) != 0) {
            crt_string_c_memmove_FUN_005fe5e0(acStack_849 + 1,acStack_849 + 2,n);
            n = n - 1;
          }
          pcVar25 = crt_env_c_getenv_FUN_006013f0("USERNAME");
          if ((pcVar25 == (char *)0x0) ||
             (iVar11 = crt_string_c_stricmp_FUN_005fe7f0(pcVar25,acStack_849 + 1), iVar11 != 0)) {
            pcVar25 = acStack_849 + 1;
            iVar11 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                               (g_CEditorToolsPtr,"User \"%s\" is currently working on this file.  Continue anyway?");
            if (iVar11 == 0) {
              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                        (&CStack_2ca0,0,(uint)pcVar25,(uint)pcVar29,(uint)pfVar15,in_stack_fffeeba2,
                         in_stack_fffeeba6);
              goto LAB_005927ee;
            }
          }
        }
        else {
          if (local_100 == 0) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Expected animation keyword in %s but instead found this:\n%s",in_stack_00000010,
                       local_21c8);
            shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                      (&CStack_2ca0,0,(uint)pcVar25,(uint)pcVar29,(uint)pfVar15,in_stack_fffeeba2,
                       in_stack_fffeeba6);
            goto LAB_005927ee;
          }
          aiStack_2718[(in_stack_0000000c->motion_list).motion_count] =
               aiStack_2718[(in_stack_0000000c->motion_list).motion_count] + 1;
          pSVar12 = local_f0 + (in_stack_0000000c->motion_list).motion_count;
          iVar11 = (in_stack_0000000c->motion_list).motion_count;
          iVar3 = crt_string_c_strnicmp_FUN_005ff070(local_21c8,"filename",8);
          pcVar16 = &DAT_0365caf8 + iVar11 * 0x104;
          if (iVar3 == 0) {
            str = acStack_21c2 + 2;
            while ((g_CharacterClassificationTable[(byte)(*str + 1)] & 2U) != 0) {
              str = str + 1;
            }
            iVar11 = crt_stdio_c_sscanf_FUN_0060013c(str,"\"%[^\"]\"");
            if (iVar11 != 1) {
              g_CurrentFilename = "..\\core\\skeledit.cpp";
              g_CurrentLineNumber = 0x112f;
              core_main_c_displayErrorAndQuit_FUN_00506f10
                        ("Error parsing \"filename\" statement for animation %s in %s:\n%s",pcVar16,in_stack_00000010);
            }
            crt_string_c_splitpath_FUN_005ff178
                      (pcVar16,local_14,acStack_1468,acStack_1b68,acStack_c68);
            if ((acStack_1468[0] == '\0') && (local_14[0] == '\0')) {
              crt_string_c_splitpath_FUN_005ff178
                        (in_stack_00000010,local_14,acStack_1468,(char *)0x0,(char *)0x0);
              crt_file_c_makepath_FUN_005febfc
                        (pcVar16,local_14,acStack_1468,acStack_1b68,acStack_c68);
            }
            crt_string_c_splitpath_FUN_005ff178
                      (pcVar16,local_18,acStack_1a68,acStack_1968,acStack_d68);
            if (acStack_d68[0] == '\0') {
              crt_file_c_makepath_FUN_005febfc
                        (pcVar16,local_18,acStack_1a68,acStack_1968,"bon");
            }
            pFVar2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                               (pcVar16,(char *)0x0,"rt","..\\core\\skeledit.cpp",
                                0x1139);
            if (pFVar2 == (FILE *)0x0) {
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Can't open %s mentioned in %s",pcVar16);
              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                        (&CStack_2ca0,0,(uint)pcVar25,(uint)pcVar29,(uint)pfVar15,in_stack_fffeeba2,
                         in_stack_fffeeba6);
              goto LAB_005927ee;
            }
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar2,"..\\core\\skeledit.cpp",0x113e);
          }
          else {
            iVar11 = crt_string_c_strnicmp_FUN_005ff070(local_21c8,"frames",6);
            if (iVar11 == 0) {
              pcVar25 = acStack_21c2;
              while ((g_CharacterClassificationTable[(byte)(*pcVar25 + 1)] & 2U) != 0) {
                pcVar25 = pcVar25 + 1;
              }
              piVar27 = &local_ec;
              local_ec = -1;
              crt_stdio_c_sscanf_FUN_0060013c(pcVar25," %[^-] - %s%n",auStack_23c);
              if (local_ec < 3) {
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Error parsing \"frames\" statement for animation %s in %s:\n%s",pSVar12,
                           in_stack_00000010);
                shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                          (&CStack_2ca0,0,(uint)piVar27,(uint)pcVar29,(uint)pfVar15,
                           in_stack_fffeeba2,in_stack_fffeeba6);
                goto LAB_005927ee;
              }
              iVar11 = core_skeledit_cpp_FUN_00592520();
              if ((iVar11 == 0) || (iVar11 = core_skeledit_cpp_FUN_00592520(), iVar11 == 0))
              goto LAB_00593749;
            }
          }
        }
        goto LAB_00592a67;
      }
      if (0x77 < (in_stack_0000000c->motion_list).motion_count) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Too many motions in %s, max is %d",in_stack_00000010,0x78);
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&CStack_2ca0,0,(uint)pcVar25,(uint)pcVar29,(uint)pfVar15,in_stack_fffeeba2,
                   in_stack_fffeeba6);
        goto LAB_005927ee;
      }
      iVar11 = crt_stdio_c_sscanf_FUN_0060013c
                         (acStack_21c2 + 3," \"%[^\"]\" : %s",acStack_1f70,auStack_71c);
      if (iVar11 != 2) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't parse %s.  I don't understand this line:\n%s",in_stack_00000010);
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&CStack_2ca0,0,(uint)pcVar25,(uint)pcVar29,(uint)pfVar15,in_stack_fffeeba2,
                   in_stack_fffeeba6);
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
      pSVar12 = local_f0 + (in_stack_0000000c->motion_list).motion_count;
      crt_memory_c_memset_FUN_005fde40(pSVar12,0,0x54c);
      crt_string_c_splitpath_FUN_005ff178
                (acStack_1f70,(char *)0x0,(char *)0x0,pSVar12->motion_name,(char *)0x0);
      iVar11 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0
                         (&in_stack_0000000c->motion_list);
      pSVar12->state_index = iVar11;
      if (iVar11 < 0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Invalid state %s for animation %s in %s",auStack_71c);
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&CStack_2ca0,0,(uint)in_stack_00000010,(uint)pcVar29,(uint)pfVar15,
                   in_stack_fffeeba2,in_stack_fffeeba6);
        goto LAB_005927ee;
      }
      aiStack_2718[(in_stack_0000000c->motion_list).motion_count] = 0;
      pcVar25 = acStack_1f70;
      pcVar16 = &DAT_0365caf8 + (in_stack_0000000c->motion_list).motion_count * 0x104;
      do {
        cVar1 = *pcVar25;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar25[1];
        pcVar25 = pcVar25 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      local_100 = 1;
    } while( true );
  }
  pcVar29 = "Can't parse home pose filename from %s.  The state count is probably wrong.";
LAB_005927df:
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,pcVar29);
LAB_005927ee:
  if (local_110 != 0.0) {
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  }
  if (local_114 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_114,"..\\core\\skeledit.cpp",0x1052);
  }
  return 0;
LAB_00593749:
  pcVar25 = local_21c8;
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Error parsing \"frames\" statement for animation %s in %s:\n%s",pSVar12);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            (&CStack_2ca0,0,(uint)pcVar25,(uint)pcVar29,(uint)pfVar15,in_stack_fffeeba2,
             in_stack_fffeeba6);
  goto LAB_005927ee;
}
