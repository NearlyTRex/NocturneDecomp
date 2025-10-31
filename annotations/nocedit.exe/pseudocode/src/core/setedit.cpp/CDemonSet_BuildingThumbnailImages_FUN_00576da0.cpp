// Name: core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0
// Address: 00576da0
// Address Range: [[00576da0, 00577113]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(CDemonSet * this_ptr)
// Cross-references:
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e2a4 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 00539193 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00584e70 (00584e70) at 00584ec2 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 (00584940) at 00584bae [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057f200 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00580745 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 (0057c5d0) at 0057c5e5 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_thm_006466e3
//   undefined4 DAT_006466e4
//   undefined4 DAT_006466e5
//   undefined4 DAT_006466e6
//   TerminatedCString s_rb_006466e8
//   TerminatedCString s_data_006466eb
//   TerminatedCString s_core_setedit_cpp_006466f0
//   TerminatedCString s_Building_thumbnail_image_00646704
//   TerminatedCString s_w_0064671e
//   TerminatedCString s_n_00646720
//   TerminatedCString s_e_00646722
//   TerminatedCString s_s_00646724
//   TerminatedCString s_b_s_p_d_p_p_d_p_00646726
//   TerminatedCString s_Can_t_open_the_following_00646727
//   TerminatedCString s_wb_00646753
//   TerminatedCString s_data_00646756
//   TerminatedCString s_core_setedit_cpp_0064675b
//   TerminatedCString s_Unable_to_write_thumbs_0064676f
//   TerminatedCString s_core_setedit_cpp_00646786
//   TerminatedCString s_zth_0064679a
//   undefined4 s_zth_0064679b
//   undefined4 s_th_0064679c
//   undefined4 s_h_0064679d
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_03365cc0
//   CPickList CPickList_03653fc0
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575f60
//   core_setdir.cpp_CDemonSet_writeThumbs_FUN_00575e40
//   core_setedit.cpp_CallToFreeSomeMemory_FUN_00580560
//   core_setedit.cpp_OpenSomethingBackdropThumbs_FUN_005769a0
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdio.c_fread_FUN_005fd990
//   crt_stdio.c_fwrite_FUN_005fdc00
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   shape_edittool.cpp_CPickList_clear_FUN_004a5770
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004a3d90
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(CDemonSet *this_ptr)

{
  char cVar1;
  FILE *pFVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int in_stack_00000008;
  int in_stack_0000000c;
  int *in_stack_00000014;
  int *in_stack_00000018;
  CDemonSet *in_stack_00000038;
  CDemonSet *in_stack_0000003c;
  char acStack_e0 [208];
  int *piVar8;
  
  core_setedit_cpp_CallToFreeSomeMemory_FUN_00580560(this_ptr);
  pcVar7 = &stack0xfffffeec;
  pcVar5 = &stack0xfffffeec;
  pcVar4 = (char *)(in_stack_00000008 + 0x14d0f0);
  do {
    cVar1 = *pcVar4;
    *pcVar7 = cVar1;
    pcVar6 = &stack0xfffffeec;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
    pcVar6 = &stack0xfffffeec;
  } while (cVar1 != '\0');
  do {
    pcVar7 = pcVar6;
    if (*pcVar6 == '.') goto LAB_00576dff;
    if (*pcVar6 == '\0') break;
    pcVar7 = pcVar6 + 1;
    if (*pcVar7 == '.') goto LAB_00576dff;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_00576dff:
  if (pcVar7 == (char *)0x0) {
    do {
      pcVar7 = pcVar5;
      if (*pcVar5 == '\0') goto LAB_00576e23;
      if (*pcVar5 == '\0') break;
      pcVar7 = pcVar5 + 1;
      if (*pcVar7 == '\0') goto LAB_00576e23;
      pcVar5 = pcVar5 + 2;
    } while (*pcVar7 != '\0');
    pcVar7 = (char *)0x0;
  }
LAB_00576e23:
  pcVar5 = ".thm";
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  if ((in_stack_0000000c == 0) &&
     (pFVar2 = engine_dosio_c_getFile_FUN_00481a50("data",&stack0xfffffeec,"rb"),
     pFVar2 != (FILE *)0x0)) {
    crt_stdio_c_fread_FUN_005fd990(&DAT_03365cc0,0x2ee000,1,pFVar2);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar2,"..\\core\\setedit.cpp",0x152);
    return;
  }
  crt_memory_c_memset_FUN_005fde40(&DAT_03365cc0,0,0x2ee000);
  shape_edittool_cpp_CPickList_clear_FUN_004a5770(&CPickList_03653fc0);
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
            (g_CEditorToolsPtr,"Building thumbnail images");
  iVar3 = 0;
  piVar8 = in_stack_00000018;
  if (0 < *in_stack_00000018) {
    do {
      if (piVar8[0x51] != 0) {
        core_setedit_cpp_OpenSomethingBackdropThumbs_FUN_005769a0();
        core_setedit_cpp_OpenSomethingBackdropThumbs_FUN_005769a0();
        core_setedit_cpp_OpenSomethingBackdropThumbs_FUN_005769a0();
      }
      core_setedit_cpp_OpenSomethingBackdropThumbs_FUN_005769a0();
      shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                (g_CEditorToolsPtr,(float)iVar3,(float)*in_stack_00000014);
      piVar8 = (int *)(iVar3 + 0x1a4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *in_stack_00000018);
  }
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  if (0 < CPickList_03653fc0.base_strlist.item_count) {
    shape_edittool_cpp_CPickList_setCancelButtonText_FUN_004a3d90(&CPickList_03653fc0,(char *)0x0);
    shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
              (&CPickList_03653fc0,"Can't open the following background images.",-1,0);
  }
  shape_edittool_cpp_CPickList_clear_FUN_004a5770(&CPickList_03653fc0);
  pFVar2 = engine_dosio_c_getFile_FUN_00481a50("data",&stack0xffffff0c,"wb");
  if (pFVar2 == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x17d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to write thumbs");
  }
  crt_stdio_c_fwrite_FUN_005fdc00(&DAT_03365cc0,0x2ee000,1,pFVar2);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar2,"..\\core\\setedit.cpp",0x17f);
  pcVar7 = &stack0xffffff1c;
  core_setdir_cpp_CDemonSet_saveThumbs_FUN_00575f60(in_stack_00000038);
  pcVar4 = acStack_e0;
  pcVar5 = in_stack_00000038->geometry_filename;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    pcVar6 = acStack_e0;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
    pcVar6 = acStack_e0;
  } while (cVar1 != '\0');
  do {
    pcVar5 = pcVar6;
    if (*pcVar6 == '.') goto LAB_00577072;
    if (*pcVar6 == '\0') break;
    pcVar5 = pcVar6 + 1;
    if (*pcVar5 == '.') goto LAB_00577072;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar5 != '\0');
  pcVar5 = (char *)0x0;
LAB_00577072:
  if (pcVar5 == (char *)0x0) {
    do {
      pcVar5 = pcVar4;
      if (*pcVar4 == '\0') goto LAB_00577096;
      if (*pcVar4 == '\0') break;
      pcVar5 = pcVar4 + 1;
      if (*pcVar5 == '\0') goto LAB_00577096;
      pcVar4 = pcVar4 + 2;
    } while (*pcVar5 != '\0');
    pcVar5 = (char *)0x0;
  }
LAB_00577096:
  pcVar7 = ".zth";
  do {
    cVar1 = *pcVar7;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  core_setdir_cpp_CDemonSet_writeThumbs_FUN_00575e40(in_stack_0000003c,acStack_e0);
  return;
}


// Assembly code:
// 00576da0: PUSH EBX
//   Label: core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0
// 00576da1: PUSH ESI
// 00576da2: PUSH EDI
// 00576da3: PUSH EBP
// 00576da4: SUB ESP,0x108
// 00576daa: MOV EDX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0x4] (READ)
// 00576db1: PUSH EDX
// 00576db2: CALL core_setedit.cpp_CallToFreeSomeMemory_FUN_00580560
//   XREF to: 00580560 (UNCONDITIONAL_CALL)
// 00576db7: ADD ESP,0x4
// 00576dba: MOV ESI,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0x4] (READ)
// 00576dc1: MOV EDI,ESP
// 00576dc3: ADD ESI,0x14d0f0
// 00576dc9: MOV DL,0x2e
// 00576dcb: PUSH EDI
// 00576dcc: MOV AL,byte ptr [ESI]
//   Label: LAB_00576dcc
// 00576dce: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x118] (DATA)
// 00576dd0: CMP AL,0x0
// 00576dd2: JZ 0x00576de4
//   XREF to: 00576de4 (CONDITIONAL_JUMP)
// 00576dd4: MOV AL,byte ptr [ESI + 0x1]
// 00576dd7: ADD ESI,0x2
// 00576dda: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x117] (WRITE)
// 00576ddd: ADD EDI,0x2
// 00576de0: CMP AL,0x0
// 00576de2: JNZ 0x00576dcc
//   XREF to: 00576dcc (CONDITIONAL_JUMP)
// 00576de4: POP EDI
//   Label: LAB_00576de4
// 00576de5: MOV ESI,ESP
// 00576de7: MOV AL,byte ptr [ESI]
//   Label: LAB_00576de7
//   XREF to: Stack[-0x118] (DATA)
// 00576de9: CMP AL,DL
// 00576deb: JZ 0x00576dff
//   XREF to: 00576dff (CONDITIONAL_JUMP)
// 00576ded: CMP AL,0x0
// 00576def: JZ 0x00576dfd
//   XREF to: 00576dfd (CONDITIONAL_JUMP)
// 00576df1: INC ESI
// 00576df2: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x117] (DATA)
// 00576df4: CMP AL,DL
// 00576df6: JZ 0x00576dff
//   XREF to: 00576dff (CONDITIONAL_JUMP)
// 00576df8: INC ESI
// 00576df9: CMP AL,0x0
// 00576dfb: JNZ 0x00576de7
//   XREF to: 00576de7 (CONDITIONAL_JUMP)
// 00576dfd: SUB ESI,ESI
//   Label: LAB_00576dfd
// 00576dff: MOV EDI,ESI
//   Label: LAB_00576dff
// 00576e01: TEST ESI,ESI
// 00576e03: JNZ 0x00576e23
//   XREF to: 00576e23 (CONDITIONAL_JUMP)
// 00576e05: MOV ESI,ESP
// 00576e07: XOR DL,DL
// 00576e09: MOV AL,byte ptr [ESI]
//   Label: LAB_00576e09
//   XREF to: Stack[-0x118] (DATA)
// 00576e0b: CMP AL,DL
// 00576e0d: JZ 0x00576e21
//   XREF to: 00576e21 (CONDITIONAL_JUMP)
// 00576e0f: CMP AL,0x0
// 00576e11: JZ 0x00576e1f
//   XREF to: 00576e1f (CONDITIONAL_JUMP)
// 00576e13: INC ESI
// 00576e14: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x117] (DATA)
// 00576e16: CMP AL,DL
// 00576e18: JZ 0x00576e21
//   XREF to: 00576e21 (CONDITIONAL_JUMP)
// 00576e1a: INC ESI
// 00576e1b: CMP AL,0x0
// 00576e1d: JNZ 0x00576e09
//   XREF to: 00576e09 (CONDITIONAL_JUMP)
// 00576e1f: SUB ESI,ESI
//   Label: LAB_00576e1f
// 00576e21: MOV EDI,ESI
//   Label: LAB_00576e21
// 00576e23: MOV ESI,0x6466e3
//   Label: LAB_00576e23
//   XREF to: 006466e3 (DATA)
// 00576e28: MOV ECX,dword ptr [ESP + 0x120]
//   XREF to: Stack[0x8] (READ)
// 00576e2f: PUSH EDI
// 00576e30: MOV AL,byte ptr [ESI]
//   Label: LAB_00576e30
//   XREF to: 006466e3 (READ)
//   XREF to: 006466e5 (READ)
// 00576e32: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x117] (DATA)
// 00576e34: CMP AL,0x0
// 00576e36: JZ 0x00576e48
//   XREF to: 00576e48 (CONDITIONAL_JUMP)
// 00576e38: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006466e4 (READ)
//   XREF to: 006466e6 (READ)
// 00576e3b: ADD ESI,0x2
// 00576e3e: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x115] (WRITE)
// 00576e41: ADD EDI,0x2
// 00576e44: CMP AL,0x0
// 00576e46: JNZ 0x00576e30
//   XREF to: 00576e30 (CONDITIONAL_JUMP)
// 00576e48: POP EDI
//   Label: LAB_00576e48
// 00576e49: TEST ECX,ECX
// 00576e4b: JNZ 0x00576e6e
//   XREF to: 00576e6e (CONDITIONAL_JUMP)
// 00576e4d: PUSH 0x6466e8
//   XREF to: 006466e8 (DATA)
// 00576e52: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x118] (DATA)
// 00576e56: PUSH EAX
// 00576e57: PUSH 0x6466eb
//   XREF to: 006466eb (DATA)
// 00576e5c: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00576e61: MOV EBX,EAX
// 00576e63: ADD ESP,0xc
// 00576e66: TEST EAX,EAX
// 00576e68: JNZ 0x005770d3
//   XREF to: 005770d3 (CONDITIONAL_JUMP)
// 00576e6e: PUSH 0x2ee000
//   Label: LAB_00576e6e
// 00576e73: PUSH 0x0
// 00576e75: PUSH 0x3365cc0
//   XREF to: 03365cc0 (DATA)
// 00576e7a: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00576e7f: ADD ESP,0xc
// 00576e82: PUSH 0x3653fc0
//   XREF to: 03653fc0 (DATA)
// 00576e87: CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770
//   XREF to: 004a5770 (UNCONDITIONAL_CALL)
// 00576e8c: ADD ESP,0x4
// 00576e8f: PUSH 0x646704
//   XREF to: 00646704 (DATA)
// 00576e94: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00576e9a: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 00576e9b: CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   XREF to: 004a0430 (UNCONDITIONAL_CALL)
// 00576ea0: ADD ESP,0x8
// 00576ea3: MOV EAX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0x4] (READ)
// 00576eaa: XOR ESI,ESI
// 00576eac: MOV EDI,dword ptr [EAX]
// 00576eae: XOR EBX,EBX
// 00576eb0: TEST EDI,EDI
// 00576eb2: JLE 0x00576f70
//   XREF to: 00576f70 (CONDITIONAL_JUMP)
// 00576eb8: LEA EDI,[EAX + 0x4]
// 00576ebb: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00576ec2: MOV EAX,dword ptr [ESP + 0x100]
//   Label: LAB_00576ec2
//   XREF to: Stack[-0x18] (READ)
// 00576ec9: MOV EDX,dword ptr [EAX + 0x144]
// 00576ecf: LEA EBP,[ESI + 0x1]
// 00576ed2: TEST EDX,EDX
// 00576ed4: JZ 0x00577106
//   XREF to: 00577106 (CONDITIONAL_JUMP)
// 00576eda: PUSH ESI
// 00576edb: PUSH 0x64671e
//   XREF to: 0064671e (DATA)
// 00576ee0: PUSH EDI
// 00576ee1: CALL core_setedit.cpp_OpenSomethingBackdropThumbs_FUN_005769a0
//   XREF to: 005769a0 (UNCONDITIONAL_CALL)
// 00576ee6: ADD ESP,0xc
// 00576ee9: PUSH EBP
// 00576eea: PUSH 0x646720
//   XREF to: 00646720 (DATA)
// 00576eef: PUSH EDI
// 00576ef0: CALL core_setedit.cpp_OpenSomethingBackdropThumbs_FUN_005769a0
//   XREF to: 005769a0 (UNCONDITIONAL_CALL)
// 00576ef5: ADD ESP,0xc
// 00576ef8: LEA ESI,[EBP + 0x1]
// 00576efb: PUSH ESI
// 00576efc: PUSH 0x646722
//   XREF to: 00646722 (DATA)
// 00576f01: PUSH EDI
// 00576f02: CALL core_setedit.cpp_OpenSomethingBackdropThumbs_FUN_005769a0
//   XREF to: 005769a0 (UNCONDITIONAL_CALL)
// 00576f07: ADD ESP,0xc
// 00576f0a: INC ESI
// 00576f0b: PUSH ESI
// 00576f0c: PUSH 0x646724
//   XREF to: 00646724 (DATA)
// 00576f11: PUSH EDI
// 00576f12: INC ESI
// 00576f13: CALL core_setedit.cpp_OpenSomethingBackdropThumbs_FUN_005769a0
//   Label: LAB_00576f13
//   XREF to: 005769a0 (UNCONDITIONAL_CALL)
// 00576f18: ADD ESP,0xc
// 00576f1b: MOV EAX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0x4] (READ)
// 00576f22: SUB ESP,0x4
// 00576f25: FILD dword ptr [EAX]
// 00576f27: MOV dword ptr [ESP + 0x108],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 00576f2e: FSTP float ptr [ESP]
//   XREF to: Stack[-0x11c] (DATA)
// 00576f31: FILD dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x14] (READ)
// 00576f38: SUB ESP,0x4
// 00576f3b: MOV EBP,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00576f41: FSTP float ptr [ESP]
//   XREF to: Stack[-0x120] (DATA)
// 00576f44: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 00576f45: CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   XREF to: 004a0530 (UNCONDITIONAL_CALL)
// 00576f4a: ADD ESP,0xc
// 00576f4d: ADD dword ptr [ESP + 0x100],0x1a4
//   XREF to: Stack[-0x18] (READ_WRITE)
// 00576f58: MOV EAX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0x4] (READ)
// 00576f5f: INC EBX
// 00576f60: MOV EDX,dword ptr [EAX]
// 00576f62: ADD EDI,0x1a4
// 00576f68: CMP EBX,EDX
// 00576f6a: JL 0x00576ec2
//   XREF to: 00576ec2 (CONDITIONAL_JUMP)
// 00576f70: MOV ECX,dword ptr [0x00678a60]
//   Label: LAB_00576f70
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00576f76: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00576f77: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 00576f7c: MOV EAX,[0x03653fc0]
//   XREF to: 03653fc0 (READ)
// 00576f81: ADD ESP,0x4
// 00576f84: TEST EAX,EAX
// 00576f86: JLE 0x00576fad
//   XREF to: 00576fad (CONDITIONAL_JUMP)
// 00576f88: PUSH 0x0
// 00576f8a: PUSH 0x3653fc0
//   XREF to: 03653fc0 (DATA)
// 00576f8f: CALL shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004a3d90
//   XREF to: 004a3d90 (UNCONDITIONAL_CALL)
// 00576f94: ADD ESP,0x8
// 00576f97: PUSH 0x0
// 00576f99: PUSH -0x1
// 00576f9b: PUSH 0x646727
//   XREF to: 00646727 (DATA)
// 00576fa0: PUSH 0x3653fc0
//   XREF to: 03653fc0 (DATA)
// 00576fa5: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 00576faa: ADD ESP,0x10
// 00576fad: PUSH 0x3653fc0
//   Label: LAB_00576fad
//   XREF to: 03653fc0 (DATA)
// 00576fb2: CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770
//   XREF to: 004a5770 (UNCONDITIONAL_CALL)
// 00576fb7: ADD ESP,0x4
// 00576fba: PUSH 0x646753
//   XREF to: 00646753 (DATA)
// 00576fbf: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x118] (DATA)
// 00576fc3: PUSH EAX
// 00576fc4: PUSH 0x646756
//   XREF to: 00646756 (DATA)
// 00576fc9: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00576fce: ADD ESP,0xc
// 00576fd1: MOV EBX,EAX
// 00576fd3: TEST EAX,EAX
// 00576fd5: JNZ 0x00576ffa
//   XREF to: 00576ffa (CONDITIONAL_JUMP)
// 00576fd7: MOV ESI,0x64675b
//   XREF to: 0064675b (DATA)
// 00576fdc: MOV EDI,0x17d
// 00576fe1: PUSH 0x64676f
//   XREF to: 0064676f (DATA)
// 00576fe6: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00576fec: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00576ff2: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00576ff7: ADD ESP,0x4
// 00576ffa: PUSH EBX
//   Label: LAB_00576ffa
// 00576ffb: PUSH 0x1
// 00576ffd: PUSH 0x2ee000
// 00577002: PUSH 0x3365cc0
//   XREF to: 03365cc0 (DATA)
// 00577007: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0057700c: ADD ESP,0x10
// 0057700f: PUSH 0x17f
// 00577014: PUSH 0x646786
//   XREF to: 00646786 (DATA)
// 00577019: PUSH EBX
// 0057701a: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0057701f: ADD ESP,0xc
// 00577022: MOV EBP,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0x4] (READ)
// 00577029: PUSH EBP
// 0057702a: LEA EDI,[ESP + 0x4]
//   XREF to: Stack[-0x118] (DATA)
// 0057702e: CALL core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575f60
//   XREF to: 00575f60 (UNCONDITIONAL_CALL)
// 00577033: ADD ESP,0x4
// 00577036: LEA ESI,[EBP + 0x14d0f0]
// 0057703c: MOV DL,0x2e
// 0057703e: PUSH EDI
// 0057703f: MOV AL,byte ptr [ESI]
//   Label: LAB_0057703f
// 00577041: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x118] (DATA)
// 00577043: CMP AL,0x0
// 00577045: JZ 0x00577057
//   XREF to: 00577057 (CONDITIONAL_JUMP)
// 00577047: MOV AL,byte ptr [ESI + 0x1]
// 0057704a: ADD ESI,0x2
// 0057704d: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x117] (WRITE)
// 00577050: ADD EDI,0x2
// 00577053: CMP AL,0x0
// 00577055: JNZ 0x0057703f
//   XREF to: 0057703f (CONDITIONAL_JUMP)
// 00577057: POP EDI
//   Label: LAB_00577057
// 00577058: MOV ESI,ESP
// 0057705a: MOV AL,byte ptr [ESI]
//   Label: LAB_0057705a
//   XREF to: Stack[-0x118] (DATA)
// 0057705c: CMP AL,DL
// 0057705e: JZ 0x00577072
//   XREF to: 00577072 (CONDITIONAL_JUMP)
// 00577060: CMP AL,0x0
// 00577062: JZ 0x00577070
//   XREF to: 00577070 (CONDITIONAL_JUMP)
// 00577064: INC ESI
// 00577065: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x117] (DATA)
// 00577067: CMP AL,DL
// 00577069: JZ 0x00577072
//   XREF to: 00577072 (CONDITIONAL_JUMP)
// 0057706b: INC ESI
// 0057706c: CMP AL,0x0
// 0057706e: JNZ 0x0057705a
//   XREF to: 0057705a (CONDITIONAL_JUMP)
// 00577070: SUB ESI,ESI
//   Label: LAB_00577070
// 00577072: MOV EDI,ESI
//   Label: LAB_00577072
// 00577074: TEST ESI,ESI
// 00577076: JNZ 0x00577096
//   XREF to: 00577096 (CONDITIONAL_JUMP)
// 00577078: MOV ESI,ESP
// 0057707a: XOR DL,DL
// 0057707c: MOV AL,byte ptr [ESI]
//   Label: LAB_0057707c
//   XREF to: Stack[-0x118] (DATA)
// 0057707e: CMP AL,DL
// 00577080: JZ 0x00577094
//   XREF to: 00577094 (CONDITIONAL_JUMP)
// 00577082: CMP AL,0x0
// 00577084: JZ 0x00577092
//   XREF to: 00577092 (CONDITIONAL_JUMP)
// 00577086: INC ESI
// 00577087: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x117] (DATA)
// 00577089: CMP AL,DL
// 0057708b: JZ 0x00577094
//   XREF to: 00577094 (CONDITIONAL_JUMP)
// 0057708d: INC ESI
// 0057708e: CMP AL,0x0
// 00577090: JNZ 0x0057707c
//   XREF to: 0057707c (CONDITIONAL_JUMP)
// 00577092: SUB ESI,ESI
//   Label: LAB_00577092
// 00577094: MOV EDI,ESI
//   Label: LAB_00577094
// 00577096: MOV ESI,0x64679a
//   Label: LAB_00577096
//   XREF to: 0064679a (DATA)
// 0057709b: PUSH EDI
// 0057709c: MOV AL,byte ptr [ESI]
//   Label: LAB_0057709c
//   XREF to: 0064679a (READ)
//   XREF to: 0064679c (READ)
// 0057709e: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x117] (DATA)
// 005770a0: CMP AL,0x0
// 005770a2: JZ 0x005770b4
//   XREF to: 005770b4 (CONDITIONAL_JUMP)
// 005770a4: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0064679b (READ)
//   XREF to: 0064679d (READ)
// 005770a7: ADD ESI,0x2
// 005770aa: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x114] (WRITE)
// 005770ad: ADD EDI,0x2
// 005770b0: CMP AL,0x0
// 005770b2: JNZ 0x0057709c
//   XREF to: 0057709c (CONDITIONAL_JUMP)
// 005770b4: POP EDI
//   Label: LAB_005770b4
// 005770b5: MOV EAX,ESP
// 005770b7: PUSH EAX
// 005770b8: MOV EAX,dword ptr [ESP + 0x120]
//   XREF to: Stack[0x4] (READ)
// 005770bf: PUSH EAX
// 005770c0: CALL core_setdir.cpp_CDemonSet_writeThumbs_FUN_00575e40
//   XREF to: 00575e40 (UNCONDITIONAL_CALL)
// 005770c5: ADD ESP,0x8
// 005770c8: ADD ESP,0x108
// 005770ce: POP EBP
// 005770cf: POP EDI
// 005770d0: POP ESI
// 005770d1: POP EBX
// 005770d2: RET
// 005770d3: PUSH EAX
//   Label: LAB_005770d3
// 005770d4: PUSH 0x1
// 005770d6: PUSH 0x2ee000
// 005770db: PUSH 0x3365cc0
//   XREF to: 03365cc0 (DATA)
// 005770e0: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 005770e5: ADD ESP,0x10
// 005770e8: PUSH 0x152
// 005770ed: PUSH 0x6466f0
//   XREF to: 006466f0 (DATA)
// 005770f2: PUSH EBX
// 005770f3: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 005770f8: ADD ESP,0xc
// 005770fb: ADD ESP,0x108
// 00577101: POP EBP
// 00577102: POP EDI
// 00577103: POP ESI
// 00577104: POP EBX
// 00577105: RET
// 00577106: PUSH ESI
//   Label: LAB_00577106
// 00577107: PUSH 0x646726
//   XREF to: 00646726 (DATA)
// 0057710c: PUSH EDI
// 0057710d: MOV ESI,EBP
// 0057710f: JMP 0x00576f13
//   XREF to: 00576f13 (UNCONDITIONAL_JUMP)
