// Name: engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920
// Address: 004b3920
// Address Range: [[004b3920, 004b3f43]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920(CCheckOutItem * this_ptr, char * filename)
// Globals:
//   Sleep* Sleep = 00212228
//   TerminatedCString s_engine_fileio_cpp_0062604b
//   TerminatedCString s_engine_fileio_cpp_00626060
//   TerminatedCString s_versionControlDirectory__00626075
//   TerminatedCString s_checkout_txt_00626096
//   undefined4 s_heckout.txt_00626097
//   undefined4 s_eckout.txt_00626098
//   undefined4 s_ckout.txt_00626099
//   TerminatedCString s_engine_fileio_cpp_00626129
//   TerminatedCString s_A_writable_copy_of_s_exi_0062654c
//   TerminatedCString s_You_already_have_s_check_00626884
//   TerminatedCString s_s_is_currently_checked_o_006268a4
//   TerminatedCString s_Logging_on_as_version_co_006268c6
//   TerminatedCString s_Marking_s_as_checked_out_006268ec
//   TerminatedCString s_r_t_00626909
//   TerminatedCString s_Can_t_access_s_0062690d
//   TerminatedCString s_You_already_have_s_check_0062691e
//   TerminatedCString s_s_is_currently_checked_o_0062693e
//   TerminatedCString s_Out_of_memory_Restart_th_00626960
//   TerminatedCString s_Getting_s_006269ae
//   TerminatedCString s_Clearing_read_only_bit_f_006269bc
//   TerminatedCString s_Error_turning_off_read_o_006269dd
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   char[264] g_VersionControlDirectory
//   SVersionControlSession g_VersionControlSession
//   undefined4 DAT_02d12bd1
//   undefined4 DAT_02d12bd2
//   undefined4 DAT_02d12bd3
//   undefined4 g_VersionControlSession.field1_0x20[0]
//   undefined4 g_VersionControlSession.field1_0x20[4]
//   undefined4 g_VersionControlSession.network_username[0]
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_errno.c_errno_FUN_00601450
//   crt_stdio.c_setvbuf_FUN_00601490
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   engine_dosio.c_getFileTimestamp_FUN_00481960
//   engine_dosio.c_makePath_FUN_00481f50
//   engine_dosio.c_setFileAttributes_FUN_004819f0
//   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
//   engine_fileio.cpp_CCheckOutList_add_FUN_004b2d00
//   engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
//   engine_fileio.cpp_CCheckOutList_load_FUN_004b2890
//   engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60
//   engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0
//   engine_fileio.cpp_establishUserIdentity_FUN_004b1c00
//   engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220
//   engine_fileio.cpp_logOffVersionControl_FUN_004b2830
//   engine_fileio.cpp_logOnAsVersionControlUser_FUN_004b2770
//   engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920
          (CCheckOutItem *this_ptr,char *filename)

{
  char cVar1;
  char *filename_00;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined3 extraout_var;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  char *pcVar7;
  char *pcVar8;
  SVersionControlSession *pSVar9;
  char *pcVar10;
  CCheckOutItem *pCVar11;
  byte bVar12;
  CCheckOutItem *in_stack_00000010;
  CCheckOutItem *in_stack_00000014;
  CCheckOutItem *in_stack_00000018;
  FILE *in_stack_0000001c;
  FILE *in_stack_00000020;
  undefined4 in_stack_00000024;
  int in_stack_00000038;
  CCheckOutItem *in_stack_0000003c;
  int in_stack_00000040;
  CCheckOutItem *in_stack_00000044;
  undefined4 in_stack_00000048;
  char *in_stack_0000004c;
  CCheckOutItem *in_stack_00000050;
  CEditorTools *in_stack_fffffacc;
  char *in_stack_fffffad0;
  CCheckOutItem CStack_35c;
  char acStack_10c [4];
  char acStack_108 [232];
  undefined1 local_20 [12];
  int local_14;
  
  filename_00 = filename;
  bVar12 = 0;
  local_20._4_4_ = (CCheckOutItem *)0x0;
  iVar3 = engine_fileio_cpp_establishUserIdentity_FUN_004b1c00();
  if (iVar3 == 0) {
    return -1;
  }
  local_20._0_4_ = 0;
  local_20._4_4_ = (CCheckOutItem *)0x0;
  iVar3 = engine_fileio_cpp_CCheckOutList_load_FUN_004b2890((CCheckOutList *)local_20);
  if (iVar3 == 0) {
    engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)(local_20 + 4));
    return 0;
  }
  iVar3 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60
                    ((CCheckOutList *)(local_20 + 4),filename_00);
  if (-1 < iVar3) {
    iVar5 = crt_string_c_stricmp_FUN_005fe7f0
                      ((char *)(local_14 + iVar3 * 0x168 + 0x104),
                       g_VersionControlSession.primary_username);
    iVar3 = unaff_EBP + iVar3 * 0x168;
    if (iVar5 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"You already have %s checked out",iVar3);
    }
    else {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"%s is currently checked out by %s",iVar3,iVar3 + 0x104);
    }
    engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0xfffffff0);
    return 0;
  }
  g_VersionControlSession.field1_0x20[0] = '\0';
  g_VersionControlSession.field1_0x20[1] = '\0';
  g_VersionControlSession.field1_0x20[2] = '\0';
  g_VersionControlSession.field1_0x20[3] = '\0';
  g_VersionControlSession.field1_0x20[4] = '\0';
  g_VersionControlSession.field1_0x20[5] = '\0';
  g_VersionControlSession.field1_0x20[6] = '\0';
  g_VersionControlSession.field1_0x20[7] = '\0';
  uVar4 = engine_dosio_c_getFileTimestamp_FUN_00481960((char *)0x0,filename_00);
  if (((int)uVar4 < 0) || ((uVar4 & 8) != 0)) {
    iVar3 = 1;
  }
  else {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xfffffa8c,"A writable copy of %s exists.  Replace it?",filename_00);
    iVar3 = engine_fileio_cpp_showOverwriteConfirmationDialog_FUN_004b2f90
                      ((int *)&stack0xfffffa90,g_VersionControlSession.field1_0x20 + 4);
  }
  if (iVar3 < 1) {
    engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0xfffffff4);
    return iVar3;
  }
  if (g_VersionControlSession.network_username[0] == '\0') {
LAB_004b39fc:
    if (g_VersionControlDirectory[0] == '\0') {
      g_CurrentFilename = "..\\engine\\fileio.cpp";
      g_CurrentLineNumber = 0xdd;
      core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
    }
    engine_dosio_c_ensureTrailingSlash_FUN_00481f80
              (g_VersionControlDirectory,(char *)&this_ptr,acStack_10c);
    engine_dosio_c_makePath_FUN_00481f50
              (CStack_35c.value + 0x48,(char *)&filename,acStack_108,(char *)0x0,(char *)0x0);
    pcVar7 = "checkout.txt";
    iVar3 = -1;
    pcVar8 = CStack_35c.value + 0x48;
    do {
      pcVar10 = pcVar8;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar10 = pcVar8 + (uint)bVar12 * -2 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar1 = *pcVar7;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Marking %s as checked out...");
    iVar3 = 0;
    do {
      in_stack_00000010 =
           (CCheckOutItem *)
           shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (CStack_35c.value + 0x50,(char *)0x0,"r+t",
                      "..\\engine\\fileio.cpp",0x153);
      if (in_stack_00000010 != (CCheckOutItem *)0x0) {
        crt_stdio_c_setvbuf_FUN_00601490((FILE *)in_stack_00000010,(char *)0x0,0,0x400);
        goto LAB_004b3ac6;
      }
      piVar6 = (int *)crt_errno_c_errno_FUN_00601450();
      if (*piVar6 != 6) break;
      iVar3 = iVar3 + 1;
      (*Sleep)(500);
    } while (iVar3 < 10);
    in_stack_00000010 = (CCheckOutItem *)0x0;
LAB_004b3ac6:
    if (in_stack_00000010 == (CCheckOutItem *)0x0) {
LAB_004b3ae9:
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(in_stack_fffffacc,in_stack_fffffad0);
    }
    else {
      iVar3 = engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60
                        ((CCheckOutList *)&filename,(FILE **)&stack0x00000010);
      if (iVar3 == 0) {
        if (in_stack_00000014 != (CCheckOutItem *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0
                    ((FILE *)in_stack_00000014,"..\\engine\\fileio.cpp",0xc4);
          in_stack_00000044 = (CCheckOutItem *)0x0;
          goto LAB_004b3b18;
        }
      }
      else {
        iVar3 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60
                          ((CCheckOutList *)&stack0x0000000c,filename_00);
        if (iVar3 < 0) {
          pCVar11 = &CStack_35c;
          pcVar8 = filename_00;
          do {
            cVar1 = *pcVar8;
            pCVar11->name[0] = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar8[1];
            pcVar8 = pcVar8 + 2;
            pCVar11->name[1] = cVar1;
            pCVar11 = (CCheckOutItem *)(pCVar11->name + 2);
          } while (cVar1 != '\0');
          pSVar9 = &g_VersionControlSession;
          pcVar8 = CStack_35c.value;
          do {
            cVar1 = pSVar9->primary_username[0];
            *pcVar8 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pSVar9->primary_username[1];
            pSVar9 = (SVersionControlSession *)(pSVar9->primary_username + 2);
            pcVar8[1] = cVar1;
            pcVar8 = pcVar8 + 2;
          } while (cVar1 != '\0');
          iVar3 = engine_fileio_cpp_CCheckOutList_add_FUN_004b2d00
                            ((CCheckOutList *)&stack0x00000010,&CStack_35c);
          if (iVar3 == 0) {
            if (in_stack_0000001c != (FILE *)0x0) {
              shape_memdbg_cpp_closeFile_FUN_0050f9b0
                        (in_stack_0000001c,"..\\engine\\fileio.cpp",0xc4);
              in_stack_00000040 = 0;
            }
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Out of memory...Restart the application NOW.\nBetter yet, reboot the computer.");
          }
          else {
            iVar3 = engine_fileio_cpp_CCheckOutList_write_FUN_004b2eb0
                              ((CCheckOutList *)&stack0x00000014,&stack0x0000001c);
            if (iVar3 != 0) {
              if (in_stack_00000020 != (FILE *)0x0) {
                shape_memdbg_cpp_closeFile_FUN_0050f9b0
                          (in_stack_00000020,"..\\engine\\fileio.cpp",0xc4);
                in_stack_00000024 = 0;
              }
              engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
              shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                        (g_CEditorToolsPtr,"Getting %s...");
              iVar3 = engine_fileio_cpp_getLatestFileFromRepository_FUN_004b3220
                                (in_stack_0000004c,filename_00);
              if (iVar3 == 0) {
                engine_fileio_cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
                          (in_stack_00000050,filename_00);
              }
              shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                        (g_CEditorToolsPtr,"Clearing read-only bit for %s...");
              uVar4 = engine_dosio_c_getFileTimestamp_FUN_00481960((char *)0x0,filename_00);
              if (((((int)uVar4 < 0) || ((uVar4 & 8) == 0)) ||
                  (bVar2 = engine_dosio_c_setFileAttributes_FUN_004819f0
                                     (filename_00,(byte)uVar4 & 0xf7),
                  CONCAT31(extraout_var,bVar2) != 0)) && (-1 < (int)uVar4)) {
                engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860
                          ((CCheckOutList *)&stack0x00000038);
                return 1;
              }
              in_stack_fffffad0 = "Error turning off read-only bit for %s";
              in_stack_fffffacc = g_CEditorToolsPtr;
              goto LAB_004b3ae9;
            }
          }
        }
        else {
          if (in_stack_00000018 != (CCheckOutItem *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      ((FILE *)in_stack_00000018,"..\\engine\\fileio.cpp",0xc4);
            in_stack_0000003c = (CCheckOutItem *)0x0;
          }
          iVar3 = crt_string_c_stricmp_FUN_005fe7f0
                            ((char *)(in_stack_00000038 + iVar3 * 0x168 + 0x104),
                             g_VersionControlSession.primary_username);
          if (iVar3 == 0) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"You already have %s checked out");
            in_stack_00000048 = 0;
          }
          else {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"%s is currently checked out by %s");
            in_stack_00000048 = 0;
          }
        }
      }
    }
  }
  else {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Logging on as version control user...");
    iVar3 = engine_fileio_cpp_logOnAsVersionControlUser_FUN_004b2770();
    if (iVar3 != 0) goto LAB_004b39fc;
  }
  if (in_stack_00000044 != (CCheckOutItem *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0
              ((FILE *)in_stack_00000044,"..\\engine\\fileio.cpp",0xc4);
    in_stack_00000044 = (CCheckOutItem *)0x0;
  }
LAB_004b3b18:
  engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x00000040);
  return (int)in_stack_0000004c;
}


// Assembly code:
// 004b3920: PUSH EBX
//   Label: engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920
// 004b3921: PUSH ESI
// 004b3922: PUSH EDI
// 004b3923: PUSH EBP
// 004b3924: SUB ESP,0x574
// 004b392a: MOV EBP,dword ptr [ESP + 0x58c]
//   XREF to: Stack[0x8] (READ)
// 004b3931: XOR EDX,EDX
// 004b3933: MOV dword ptr [ESP + 0x568],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004b393a: CALL engine_fileio.cpp_establishUserIdentity_FUN_004b1c00
//   XREF to: 004b1c00 (UNCONDITIONAL_CALL)
// 004b393f: TEST EAX,EAX
// 004b3941: JNZ 0x004b3955
//   XREF to: 004b3955 (CONDITIONAL_JUMP)
// 004b3943: MOV EBP,0xffffffff
// 004b3948: MOV EAX,EBP
// 004b394a: ADD ESP,0x574
// 004b3950: POP EBP
// 004b3951: POP EDI
// 004b3952: POP ESI
// 004b3953: POP EBX
// 004b3954: RET
// 004b3955: LEA EAX,[ESP + 0x560]
//   Label: LAB_004b3955
//   XREF to: Stack[-0x24] (DATA)
// 004b395c: XOR ECX,ECX
// 004b395e: PUSH EAX
// 004b395f: MOV dword ptr [ESP + 0x564],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 004b3966: MOV dword ptr [ESP + 0x568],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 004b396d: CALL engine_fileio.cpp_CCheckOutList_load_FUN_004b2890
//   XREF to: 004b2890 (UNCONDITIONAL_CALL)
// 004b3972: ADD ESP,0x4
// 004b3975: TEST EAX,EAX
// 004b3977: JZ 0x004b3b41
//   XREF to: 004b3b41 (CONDITIONAL_JUMP)
// 004b397d: PUSH EBP
// 004b397e: LEA EAX,[ESP + 0x564]
//   XREF to: Stack[-0x24] (DATA)
// 004b3985: PUSH EAX
// 004b3986: CALL engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
//   XREF to: 004b2e60 (UNCONDITIONAL_CALL)
// 004b398b: ADD ESP,0x8
// 004b398e: TEST EAX,EAX
// 004b3990: JGE 0x004b3b60
//   XREF to: 004b3b60 (CONDITIONAL_JUMP)
// 004b3996: PUSH EBP
// 004b3997: XOR ESI,ESI
// 004b3999: PUSH ESI
// 004b399a: MOV dword ptr [0x02d12bf0],ESI
//   XREF to: 02d12bf0 (WRITE)
// 004b39a0: MOV dword ptr [0x02d12bf4],ESI
//   XREF to: 02d12bf4 (WRITE)
// 004b39a6: CALL engine_dosio.c_getFileTimestamp_FUN_00481960
//   XREF to: 00481960 (UNCONDITIONAL_CALL)
// 004b39ab: ADD ESP,0x8
// 004b39ae: TEST EAX,EAX
// 004b39b0: JL 0x004b39ba
//   XREF to: 004b39ba (CONDITIONAL_JUMP)
// 004b39b2: TEST AL,0x8
// 004b39b4: JZ 0x004b3bee
//   XREF to: 004b3bee (CONDITIONAL_JUMP)
// 004b39ba: MOV EAX,0x1
//   Label: LAB_004b39ba
// 004b39bf: TEST EAX,EAX
//   Label: LAB_004b39bf
// 004b39c1: JLE 0x004b3c18
//   XREF to: 004b3c18 (CONDITIONAL_JUMP)
// 004b39c7: MOV dword ptr [ESP + 0x56c],0xffffffff
//   XREF to: Stack[-0x18] (WRITE)
// 004b39d2: CMP byte ptr [0x02d12bf8],0x0
//   XREF to: 02d12bf8 (READ)
// 004b39d9: JZ 0x004b39fc
//   XREF to: 004b39fc (CONDITIONAL_JUMP)
// 004b39db: PUSH 0x6268c6
//   XREF to: 006268c6 (DATA)
// 004b39e0: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b39e6: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004b39e7: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004b39ec: ADD ESP,0x8
// 004b39ef: CALL engine_fileio.cpp_logOnAsVersionControlUser_FUN_004b2770
//   XREF to: 004b2770 (UNCONDITIONAL_CALL)
// 004b39f4: TEST EAX,EAX
// 004b39f6: JZ 0x004b3af1
//   XREF to: 004b3af1 (CONDITIONAL_JUMP)
// 004b39fc: MOV DL,byte ptr [0x02d12ac8]
//   Label: LAB_004b39fc
//   XREF to: 02d12ac8 (READ)
// 004b3a02: LEA EDI,[ESP + 0x35c]
//   XREF to: Stack[-0x228] (DATA)
// 004b3a09: TEST DL,DL
// 004b3a0b: JZ 0x004b3c37
//   XREF to: 004b3c37 (CONDITIONAL_JUMP)
// 004b3a11: LEA EAX,[ESP + 0x460]
//   Label: LAB_004b3a11
//   XREF to: Stack[-0x124] (DATA)
// 004b3a18: PUSH EAX
// 004b3a19: LEA EAX,[ESP + 0x574]
//   XREF to: Stack[-0x14] (DATA)
// 004b3a20: PUSH EAX
// 004b3a21: PUSH 0x2d12ac8
//   XREF to: 02d12ac8 (DATA)
// 004b3a26: CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   XREF to: 00481f80 (UNCONDITIONAL_CALL)
// 004b3a2b: ADD ESP,0xc
// 004b3a2e: PUSH 0x0
// 004b3a30: PUSH 0x0
// 004b3a32: LEA EAX,[ESP + 0x468]
//   XREF to: Stack[-0x124] (DATA)
// 004b3a39: PUSH EAX
// 004b3a3a: LEA EAX,[ESP + 0x57c]
//   XREF to: Stack[-0x14] (DATA)
// 004b3a41: PUSH EAX
// 004b3a42: PUSH EDI
// 004b3a43: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004b3a48: ADD ESP,0x14
// 004b3a4b: MOV ESI,0x626096
//   XREF to: 00626096 (DATA)
// 004b3a50: PUSH EDI
// 004b3a51: SUB ECX,ECX
// 004b3a53: DEC ECX
// 004b3a54: MOV AL,0x0
// 004b3a56: SCASB.REPNE ES:EDI
// 004b3a58: DEC EDI
// 004b3a59: MOV AL,byte ptr [ESI]
//   Label: LAB_004b3a59
//   XREF to: 00626096 (READ)
//   XREF to: 00626098 (READ)
// 004b3a5b: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x228] (DATA)
// 004b3a5d: CMP AL,0x0
// 004b3a5f: JZ 0x004b3a71
//   XREF to: 004b3a71 (CONDITIONAL_JUMP)
// 004b3a61: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00626097 (READ)
//   XREF to: 00626099 (READ)
// 004b3a64: ADD ESI,0x2
// 004b3a67: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x227] (WRITE)
// 004b3a6a: ADD EDI,0x2
// 004b3a6d: CMP AL,0x0
// 004b3a6f: JNZ 0x004b3a59
//   XREF to: 004b3a59 (CONDITIONAL_JUMP)
// 004b3a71: POP EDI
//   Label: LAB_004b3a71
// 004b3a72: PUSH EBP
// 004b3a73: PUSH 0x6268ec
//   XREF to: 006268ec (DATA)
// 004b3a78: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b3a7e: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004b3a7f: LEA EDI,[ESP + 0x368]
//   XREF to: Stack[-0x228] (DATA)
// 004b3a86: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004b3a8b: ADD ESP,0xc
// 004b3a8e: XOR ESI,ESI
// 004b3a90: PUSH 0x153
//   Label: LAB_004b3a90
// 004b3a95: PUSH 0x626129
//   XREF to: 00626129 (DATA)
// 004b3a9a: PUSH 0x626909
//   XREF to: 00626909 (DATA)
// 004b3a9f: PUSH 0x0
// 004b3aa1: PUSH EDI
// 004b3aa2: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004b3aa7: MOV EBX,EAX
// 004b3aa9: ADD ESP,0x14
// 004b3aac: TEST EAX,EAX
// 004b3aae: JZ 0x004b3c5f
//   XREF to: 004b3c5f (CONDITIONAL_JUMP)
// 004b3ab4: PUSH 0x400
// 004b3ab9: PUSH 0x0
// 004b3abb: PUSH 0x0
// 004b3abd: PUSH EAX
// 004b3abe: CALL crt_stdio.c_setvbuf_FUN_00601490
//   XREF to: 00601490 (UNCONDITIONAL_CALL)
// 004b3ac3: ADD ESP,0x10
// 004b3ac6: MOV dword ptr [ESP + 0x568],EBX
//   Label: LAB_004b3ac6
//   XREF to: Stack[-0x1c] (WRITE)
// 004b3acd: TEST EBX,EBX
// 004b3acf: JNZ 0x004b3c86
//   XREF to: 004b3c86 (CONDITIONAL_JUMP)
// 004b3ad5: LEA EAX,[ESP + 0x35c]
//   XREF to: Stack[-0x228] (DATA)
// 004b3adc: PUSH EAX
// 004b3add: PUSH 0x62690d
//   XREF to: 0062690d (DATA)
// 004b3ae2: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b3ae8: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004b3ae9: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   Label: LAB_004b3ae9
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b3aee: ADD ESP,0xc
// 004b3af1: MOV EDI,dword ptr [ESP + 0x568]
//   Label: LAB_004b3af1
//   XREF to: Stack[-0x1c] (READ)
// 004b3af8: TEST EDI,EDI
// 004b3afa: JZ 0x004b3b18
//   XREF to: 004b3b18 (CONDITIONAL_JUMP)
// 004b3afc: PUSH 0xc4
// 004b3b01: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b3b06: PUSH EDI
// 004b3b07: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b3b0c: ADD ESP,0xc
// 004b3b0f: XOR EAX,EAX
// 004b3b11: MOV dword ptr [ESP + 0x568],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004b3b18: CALL engine_fileio.cpp_logOffVersionControl_FUN_004b2830
//   Label: LAB_004b3b18
//   XREF to: 004b2830 (UNCONDITIONAL_CALL)
// 004b3b1d: LEA EAX,[ESP + 0x560]
//   XREF to: Stack[-0x24] (DATA)
// 004b3b24: PUSH EAX
// 004b3b25: MOV EBP,dword ptr [ESP + 0x570]
//   XREF to: Stack[-0x18] (READ)
// 004b3b2c: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004b3b31: ADD ESP,0x4
// 004b3b34: MOV EAX,EBP
// 004b3b36: ADD ESP,0x574
// 004b3b3c: POP EBP
// 004b3b3d: POP EDI
// 004b3b3e: POP ESI
// 004b3b3f: POP EBX
// 004b3b40: RET
// 004b3b41: LEA EAX,[ESP + 0x560]
//   Label: LAB_004b3b41
//   XREF to: Stack[-0x24] (DATA)
// 004b3b48: PUSH EAX
// 004b3b49: XOR EBP,EBP
// 004b3b4b: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004b3b50: ADD ESP,0x4
// 004b3b53: MOV EAX,EBP
// 004b3b55: ADD ESP,0x574
// 004b3b5b: POP EBP
// 004b3b5c: POP EDI
// 004b3b5d: POP ESI
// 004b3b5e: POP EBX
// 004b3b5f: RET
// 004b3b60: MOV EBX,EAX
//   Label: LAB_004b3b60
// 004b3b62: SHL EAX,0x2
// 004b3b65: SUB EAX,EBX
// 004b3b67: SHL EAX,0x3
// 004b3b6a: MOV ESI,EAX
// 004b3b6c: SHL ESI,0x4
// 004b3b6f: SUB ESI,EAX
// 004b3b71: MOV EAX,dword ptr [ESP + 0x564]
//   XREF to: Stack[-0x20] (READ)
// 004b3b78: ADD EAX,ESI
// 004b3b7a: PUSH 0x2d12bd0
//   XREF to: 02d12bd0 (DATA)
// 004b3b7f: ADD EAX,0x104
// 004b3b84: PUSH EAX
// 004b3b85: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004b3b8a: ADD ESP,0x8
// 004b3b8d: MOV EBX,EAX
// 004b3b8f: MOV EAX,dword ptr [ESP + 0x564]
//   XREF to: Stack[-0x20] (READ)
// 004b3b96: ADD EAX,ESI
// 004b3b98: TEST EBX,EBX
// 004b3b9a: JNZ 0x004b3bd0
//   XREF to: 004b3bd0 (CONDITIONAL_JUMP)
// 004b3b9c: PUSH EAX
// 004b3b9d: PUSH 0x626884
//   XREF to: 00626884 (DATA)
// 004b3ba2: MOV EBP,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b3ba8: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 004b3ba9: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b3bae: ADD ESP,0xc
// 004b3bb1: LEA EAX,[ESP + 0x560]
//   Label: LAB_004b3bb1
//   XREF to: Stack[-0x24] (DATA)
// 004b3bb8: PUSH EAX
// 004b3bb9: XOR EBP,EBP
// 004b3bbb: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004b3bc0: ADD ESP,0x4
// 004b3bc3: MOV EAX,EBP
// 004b3bc5: ADD ESP,0x574
// 004b3bcb: POP EBP
// 004b3bcc: POP EDI
// 004b3bcd: POP ESI
// 004b3bce: POP EBX
// 004b3bcf: RET
// 004b3bd0: LEA EBX,[EAX + 0x104]
//   Label: LAB_004b3bd0
// 004b3bd6: PUSH EBX
// 004b3bd7: PUSH EAX
// 004b3bd8: PUSH 0x6268a4
//   XREF to: 006268a4 (DATA)
// 004b3bdd: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b3be3: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004b3be4: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b3be9: ADD ESP,0x10
// 004b3bec: JMP 0x004b3bb1
//   XREF to: 004b3bb1 (UNCONDITIONAL_JUMP)
// 004b3bee: PUSH EBP
//   Label: LAB_004b3bee
// 004b3bef: PUSH 0x62654c
//   XREF to: 0062654c (DATA)
// 004b3bf4: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x584] (DATA)
// 004b3bf8: PUSH EAX
// 004b3bf9: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b3bfe: ADD ESP,0xc
// 004b3c01: PUSH 0x2d12bf4
//   XREF to: 02d12bf4 (DATA)
// 004b3c06: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x584] (DATA)
// 004b3c0a: PUSH EAX
// 004b3c0b: CALL engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90
//   XREF to: 004b2f90 (UNCONDITIONAL_CALL)
// 004b3c10: ADD ESP,0x8
// 004b3c13: JMP 0x004b39bf
//   XREF to: 004b39bf (UNCONDITIONAL_JUMP)
// 004b3c18: MOV EBP,EAX
//   Label: LAB_004b3c18
// 004b3c1a: LEA EAX,[ESP + 0x560]
//   XREF to: Stack[-0x24] (DATA)
// 004b3c21: PUSH EAX
// 004b3c22: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004b3c27: ADD ESP,0x4
// 004b3c2a: MOV EAX,EBP
// 004b3c2c: ADD ESP,0x574
// 004b3c32: POP EBP
// 004b3c33: POP EDI
// 004b3c34: POP ESI
// 004b3c35: POP EBX
// 004b3c36: RET
// 004b3c37: MOV ECX,0x626060
//   Label: LAB_004b3c37
//   XREF to: 00626060 (DATA)
// 004b3c3c: MOV EBX,0xdd
// 004b3c41: PUSH 0x626075
//   XREF to: 00626075 (DATA)
// 004b3c46: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004b3c4c: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 004b3c52: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b3c57: ADD ESP,0x4
// 004b3c5a: JMP 0x004b3a11
//   XREF to: 004b3a11 (UNCONDITIONAL_JUMP)
// 004b3c5f: CALL crt_errno.c_errno_FUN_00601450
//   Label: LAB_004b3c5f
//   XREF to: 00601450 (UNCONDITIONAL_CALL)
// 004b3c64: CMP dword ptr [EAX],0x6
// 004b3c67: JNZ 0x004b3c7f
//   XREF to: 004b3c7f (CONDITIONAL_JUMP)
// 004b3c69: PUSH 0x1f4
// 004b3c6e: INC ESI
// 004b3c6f: CALL dword ptr CS:[0x611644]
//   XREF to: 00611644 (READ)
// 004b3c76: CMP ESI,0xa
// 004b3c79: JL 0x004b3a90
//   XREF to: 004b3a90 (CONDITIONAL_JUMP)
// 004b3c7f: XOR EBX,EBX
//   Label: LAB_004b3c7f
// 004b3c81: JMP 0x004b3ac6
//   XREF to: 004b3ac6 (UNCONDITIONAL_JUMP)
// 004b3c86: LEA EAX,[ESP + 0x568]
//   Label: LAB_004b3c86
//   XREF to: Stack[-0x1c] (DATA)
// 004b3c8d: PUSH EAX
// 004b3c8e: LEA EAX,[ESP + 0x564]
//   XREF to: Stack[-0x24] (DATA)
// 004b3c95: PUSH EAX
// 004b3c96: CALL engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60
//   XREF to: 004b2a60 (UNCONDITIONAL_CALL)
// 004b3c9b: ADD ESP,0x8
// 004b3c9e: TEST EAX,EAX
// 004b3ca0: JNZ 0x004b3cd2
//   XREF to: 004b3cd2 (CONDITIONAL_JUMP)
// 004b3ca2: MOV ECX,dword ptr [ESP + 0x568]
//   XREF to: Stack[-0x1c] (READ)
// 004b3ca9: TEST ECX,ECX
// 004b3cab: JZ 0x004b3af1
//   XREF to: 004b3af1 (CONDITIONAL_JUMP)
// 004b3cb1: PUSH 0xc4
// 004b3cb6: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b3cbb: PUSH ECX
// 004b3cbc: XOR ESI,ESI
// 004b3cbe: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b3cc3: ADD ESP,0xc
// 004b3cc6: MOV dword ptr [ESP + 0x568],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 004b3ccd: JMP 0x004b3b18
//   XREF to: 004b3b18 (UNCONDITIONAL_JUMP)
// 004b3cd2: PUSH EBP
//   Label: LAB_004b3cd2
// 004b3cd3: LEA EAX,[ESP + 0x564]
//   XREF to: Stack[-0x24] (DATA)
// 004b3cda: PUSH EAX
// 004b3cdb: CALL engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
//   XREF to: 004b2e60 (UNCONDITIONAL_CALL)
// 004b3ce0: ADD ESP,0x8
// 004b3ce3: MOV EDI,EAX
// 004b3ce5: TEST EAX,EAX
// 004b3ce7: JL 0x004b3d9f
//   XREF to: 004b3d9f (CONDITIONAL_JUMP)
// 004b3ced: MOV ESI,dword ptr [ESP + 0x568]
//   XREF to: Stack[-0x1c] (READ)
// 004b3cf4: TEST ESI,ESI
// 004b3cf6: JZ 0x004b3d14
//   XREF to: 004b3d14 (CONDITIONAL_JUMP)
// 004b3cf8: PUSH 0xc4
// 004b3cfd: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b3d02: PUSH ESI
// 004b3d03: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b3d08: ADD ESP,0xc
// 004b3d0b: XOR EAX,EAX
// 004b3d0d: MOV dword ptr [ESP + 0x568],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004b3d14: LEA EAX,[EDI*0x4 + 0x0]
//   Label: LAB_004b3d14
// 004b3d1b: SUB EAX,EDI
// 004b3d1d: SHL EAX,0x3
// 004b3d20: MOV ESI,EAX
// 004b3d22: SHL ESI,0x4
// 004b3d25: SUB ESI,EAX
// 004b3d27: MOV EAX,dword ptr [ESP + 0x564]
//   XREF to: Stack[-0x20] (READ)
// 004b3d2e: ADD EAX,ESI
// 004b3d30: PUSH 0x2d12bd0
//   XREF to: 02d12bd0 (DATA)
// 004b3d35: ADD EAX,0x104
// 004b3d3a: PUSH EAX
// 004b3d3b: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004b3d40: ADD ESP,0x8
// 004b3d43: MOV EBX,EAX
// 004b3d45: MOV EAX,dword ptr [ESP + 0x564]
//   XREF to: Stack[-0x20] (READ)
// 004b3d4c: ADD EAX,ESI
// 004b3d4e: TEST EBX,EBX
// 004b3d50: JNZ 0x004b3d75
//   XREF to: 004b3d75 (CONDITIONAL_JUMP)
// 004b3d52: PUSH EAX
// 004b3d53: PUSH 0x62691e
//   XREF to: 0062691e (DATA)
// 004b3d58: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b3d5e: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004b3d5f: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b3d64: ADD ESP,0xc
// 004b3d67: XOR EBX,EBX
// 004b3d69: MOV dword ptr [ESP + 0x56c],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 004b3d70: JMP 0x004b3af1
//   XREF to: 004b3af1 (UNCONDITIONAL_JUMP)
// 004b3d75: LEA EBX,[EAX + 0x104]
//   Label: LAB_004b3d75
// 004b3d7b: PUSH EBX
// 004b3d7c: PUSH EAX
// 004b3d7d: PUSH 0x62693e
//   XREF to: 0062693e (DATA)
// 004b3d82: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b3d88: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004b3d89: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b3d8e: ADD ESP,0x10
// 004b3d91: XOR EBX,EBX
// 004b3d93: MOV dword ptr [ESP + 0x56c],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 004b3d9a: JMP 0x004b3af1
//   XREF to: 004b3af1 (UNCONDITIONAL_JUMP)
// 004b3d9f: LEA EDI,[ESP + 0x1f4]
//   Label: LAB_004b3d9f
//   XREF to: Stack[-0x390] (DATA)
// 004b3da6: MOV ESI,EBP
// 004b3da8: PUSH EDI
// 004b3da9: MOV AL,byte ptr [ESI]
//   Label: LAB_004b3da9
// 004b3dab: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x390] (DATA)
// 004b3dad: CMP AL,0x0
// 004b3daf: JZ 0x004b3dc1
//   XREF to: 004b3dc1 (CONDITIONAL_JUMP)
// 004b3db1: MOV AL,byte ptr [ESI + 0x1]
// 004b3db4: ADD ESI,0x2
// 004b3db7: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x38f] (WRITE)
// 004b3dba: ADD EDI,0x2
// 004b3dbd: CMP AL,0x0
// 004b3dbf: JNZ 0x004b3da9
//   XREF to: 004b3da9 (CONDITIONAL_JUMP)
// 004b3dc1: POP EDI
//   Label: LAB_004b3dc1
// 004b3dc2: MOV ESI,0x2d12bd0
//   XREF to: 02d12bd0 (DATA)
// 004b3dc7: LEA EDI,[ESP + 0x2f8]
//   XREF to: Stack[-0x28c] (DATA)
// 004b3dce: PUSH EDI
// 004b3dcf: MOV AL,byte ptr [ESI]
//   Label: LAB_004b3dcf
//   XREF to: 02d12bd0 (READ)
//   XREF to: 02d12bd2 (READ)
// 004b3dd1: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x28c] (DATA)
// 004b3dd3: CMP AL,0x0
// 004b3dd5: JZ 0x004b3de7
//   XREF to: 004b3de7 (CONDITIONAL_JUMP)
// 004b3dd7: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 02d12bd1 (READ)
//   XREF to: 02d12bd3 (READ)
// 004b3dda: ADD ESI,0x2
// 004b3ddd: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x28b] (WRITE)
// 004b3de0: ADD EDI,0x2
// 004b3de3: CMP AL,0x0
// 004b3de5: JNZ 0x004b3dcf
//   XREF to: 004b3dcf (CONDITIONAL_JUMP)
// 004b3de7: POP EDI
//   Label: LAB_004b3de7
// 004b3de8: LEA EAX,[ESP + 0x1f4]
//   XREF to: Stack[-0x390] (DATA)
// 004b3def: PUSH EAX
// 004b3df0: LEA EAX,[ESP + 0x564]
//   XREF to: Stack[-0x24] (DATA)
// 004b3df7: PUSH EAX
// 004b3df8: CALL engine_fileio.cpp_CCheckOutList_add_FUN_004b2d00
//   XREF to: 004b2d00 (UNCONDITIONAL_CALL)
// 004b3dfd: ADD ESP,0x8
// 004b3e00: TEST EAX,EAX
// 004b3e02: JNZ 0x004b3e44
//   XREF to: 004b3e44 (CONDITIONAL_JUMP)
// 004b3e04: MOV EDI,dword ptr [ESP + 0x568]
//   XREF to: Stack[-0x1c] (READ)
// 004b3e0b: TEST EDI,EDI
// 004b3e0d: JZ 0x004b3e2b
//   XREF to: 004b3e2b (CONDITIONAL_JUMP)
// 004b3e0f: PUSH 0xc4
// 004b3e14: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b3e19: PUSH EDI
// 004b3e1a: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b3e1f: ADD ESP,0xc
// 004b3e22: XOR EAX,EAX
// 004b3e24: MOV dword ptr [ESP + 0x568],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004b3e2b: PUSH 0x626960
//   Label: LAB_004b3e2b
//   XREF to: 00626960 (DATA)
// 004b3e30: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b3e36: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004b3e37: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b3e3c: ADD ESP,0x8
// 004b3e3f: JMP 0x004b3af1
//   XREF to: 004b3af1 (UNCONDITIONAL_JUMP)
// 004b3e44: LEA EAX,[ESP + 0x568]
//   Label: LAB_004b3e44
//   XREF to: Stack[-0x1c] (DATA)
// 004b3e4b: PUSH EAX
// 004b3e4c: LEA EAX,[ESP + 0x564]
//   XREF to: Stack[-0x24] (DATA)
// 004b3e53: PUSH EAX
// 004b3e54: CALL engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0
//   XREF to: 004b2eb0 (UNCONDITIONAL_CALL)
// 004b3e59: ADD ESP,0x8
// 004b3e5c: TEST EAX,EAX
// 004b3e5e: JZ 0x004b3af1
//   XREF to: 004b3af1 (CONDITIONAL_JUMP)
// 004b3e64: MOV ECX,dword ptr [ESP + 0x568]
//   XREF to: Stack[-0x1c] (READ)
// 004b3e6b: TEST ECX,ECX
// 004b3e6d: JZ 0x004b3e8b
//   XREF to: 004b3e8b (CONDITIONAL_JUMP)
// 004b3e6f: PUSH 0xc4
// 004b3e74: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b3e79: PUSH ECX
// 004b3e7a: XOR ESI,ESI
// 004b3e7c: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b3e81: ADD ESP,0xc
// 004b3e84: MOV dword ptr [ESP + 0x568],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 004b3e8b: CALL engine_fileio.cpp_logOffVersionControl_FUN_004b2830
//   Label: LAB_004b3e8b
//   XREF to: 004b2830 (UNCONDITIONAL_CALL)
// 004b3e90: PUSH EBP
// 004b3e91: PUSH 0x6269ae
//   XREF to: 006269ae (DATA)
// 004b3e96: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b3e9c: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004b3e9d: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004b3ea2: ADD ESP,0xc
// 004b3ea5: PUSH EBP
// 004b3ea6: MOV EAX,dword ptr [ESP + 0x58c]
//   XREF to: Stack[0x4] (READ)
// 004b3ead: PUSH EAX
// 004b3eae: CALL engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220
//   XREF to: 004b3220 (UNCONDITIONAL_CALL)
// 004b3eb3: ADD ESP,0x8
// 004b3eb6: TEST EAX,EAX
// 004b3eb8: JNZ 0x004b3ecb
//   XREF to: 004b3ecb (CONDITIONAL_JUMP)
// 004b3eba: PUSH EBP
// 004b3ebb: MOV EDX,dword ptr [ESP + 0x58c]
//   XREF to: Stack[0x4] (READ)
// 004b3ec2: PUSH EDX
// 004b3ec3: CALL engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
//   XREF to: 004b35a0 (UNCONDITIONAL_CALL)
// 004b3ec8: ADD ESP,0x8
// 004b3ecb: LEA EAX,[ESP + 0x35c]
//   Label: LAB_004b3ecb
//   XREF to: Stack[-0x228] (DATA)
// 004b3ed2: PUSH EAX
// 004b3ed3: PUSH 0x6269bc
//   XREF to: 006269bc (DATA)
// 004b3ed8: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b3ede: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004b3edf: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004b3ee4: ADD ESP,0xc
// 004b3ee7: PUSH EBP
// 004b3ee8: PUSH 0x0
// 004b3eea: CALL engine_dosio.c_getFileTimestamp_FUN_00481960
//   XREF to: 00481960 (UNCONDITIONAL_CALL)
// 004b3eef: ADD ESP,0x8
// 004b3ef2: MOV EBX,EAX
// 004b3ef4: TEST EAX,EAX
// 004b3ef6: JL 0x004b3f0c
//   XREF to: 004b3f0c (CONDITIONAL_JUMP)
// 004b3ef8: TEST AL,0x8
// 004b3efa: JZ 0x004b3f0c
//   XREF to: 004b3f0c (CONDITIONAL_JUMP)
// 004b3efc: AND AL,0xf7
// 004b3efe: PUSH EAX
// 004b3eff: PUSH EBP
// 004b3f00: CALL engine_dosio.c_setFileAttributes_FUN_004819f0
//   XREF to: 004819f0 (UNCONDITIONAL_CALL)
// 004b3f05: ADD ESP,0x8
// 004b3f08: TEST EAX,EAX
// 004b3f0a: JZ 0x004b3f32
//   XREF to: 004b3f32 (CONDITIONAL_JUMP)
// 004b3f0c: TEST EBX,EBX
//   Label: LAB_004b3f0c
// 004b3f0e: JL 0x004b3f32
//   XREF to: 004b3f32 (CONDITIONAL_JUMP)
// 004b3f10: LEA EAX,[ESP + 0x560]
//   XREF to: Stack[-0x24] (DATA)
// 004b3f17: PUSH EAX
// 004b3f18: MOV EBP,0x1
// 004b3f1d: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004b3f22: ADD ESP,0x4
// 004b3f25: MOV EAX,EBP
// 004b3f27: ADD ESP,0x574
// 004b3f2d: POP EBP
// 004b3f2e: POP EDI
// 004b3f2f: POP ESI
// 004b3f30: POP EBX
// 004b3f31: RET
// 004b3f32: PUSH EBP
//   Label: LAB_004b3f32
// 004b3f33: PUSH 0x6269dd
//   XREF to: 006269dd (DATA)
// 004b3f38: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b3f3e: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004b3f3f: JMP 0x004b3ae9
//   XREF to: 004b3ae9 (UNCONDITIONAL_JUMP)
