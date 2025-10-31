// Name: engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
// Address: 004b35a0
// Address Range: [[004b35a0, 004b391c]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0(CCheckOutItem * this_ptr, void * unused_param)
// Cross-references:
//   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 (004b3920) at 004b3ec3 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b456e [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_revert_FUN_004b41c0 (004b41c0) at 004b41fe [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bb44c [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004badd4 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0 (004bc2b0) at 004bc337 [UNCONDITIONAL_CALL]
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
//   TerminatedCString s_engine_fileio_cpp_006266f4
//   TerminatedCString s_removeCheckOutBookkeepin_00626709
//   TerminatedCString s_Logging_on_as_version_co_0062673b
//   TerminatedCString s_Marking_s_as_no_longer_c_00626761
//   TerminatedCString s_r_t_00626785
//   TerminatedCString s_Can_t_access_s_00626789
//   TerminatedCString s_Tried_to_undo_checkout_o_0062679a
//   TerminatedCString s_Out_of_memory_Restart_th_00626836
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   char[264] g_VersionControlDirectory
//   SVersionControlSession g_VersionControlSession
//   undefined4 g_VersionControlSession.network_username[0]
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_errno.c_errno_FUN_00601450
//   crt_stdio.c_setvbuf_FUN_00601490
//   engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   engine_dosio.c_makePath_FUN_00481f50
//   engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
//   engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60
//   engine_fileio.cpp_CCheckOutList_remove_FUN_004b2d70
//   engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0
//   engine_fileio.cpp_logOffVersionControl_FUN_004b2830
//   engine_fileio.cpp_logOnAsVersionControlUser_FUN_004b2770
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004b38da) */

int __cdecl
engine_fileio_cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
          (CCheckOutItem *this_ptr,void *unused_param)

{
  char cVar1;
  void *filename;
  int iVar2;
  CCheckOutItem *stream_ptr;
  int *piVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  byte bVar7;
  FILE *in_stack_0000000c;
  int in_stack_00000010;
  char acStack_114 [4];
  char acStack_110 [248];
  undefined4 local_18;
  char *pcVar6;
  
  filename = unused_param;
  bVar7 = 0;
  local_18 = 0;
  if (g_VersionControlSession.primary_username[0] == '\0') {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0x402;
    core_main_c_displayErrorAndQuit_FUN_00506f10("removeCheckOutBookkeeping - don't know user name!");
  }
  if (g_VersionControlSession.network_username[0] != '\0') {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Logging on as version control user...");
    iVar2 = engine_fileio_cpp_logOnAsVersionControlUser_FUN_004b2770();
    if (iVar2 == 0) goto LAB_004b36da;
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Marking %s as no longer checked out");
  if (g_VersionControlDirectory[0] == '\0') {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xdd;
    core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
  }
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80
            (g_VersionControlDirectory,&stack0xfffffff8,acStack_114);
  engine_dosio_c_makePath_FUN_00481f50
            (&stack0xfffffde4,&stack0xfffffffc,acStack_110,(char *)0x0,(char *)0x0);
  pcVar4 = "checkout.txt";
  iVar2 = -1;
  pcVar6 = &stack0xfffffde4;
  do {
    pcVar5 = pcVar6;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar5 = pcVar6 + (uint)bVar7 * -2 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar5;
  } while (cVar1 != '\0');
  pcVar5 = pcVar5 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  iVar2 = 0;
  do {
    stream_ptr = (CCheckOutItem *)
                 shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (&stack0xfffffdf0,(char *)0x0,"r+t","..\\engine\\fileio.cpp"
                            ,0x153);
    if (stream_ptr != (CCheckOutItem *)0x0) {
      crt_stdio_c_setvbuf_FUN_00601490((FILE *)stream_ptr,(char *)0x0,0,0x400);
      goto LAB_004b36b4;
    }
    piVar3 = (int *)crt_errno_c_errno_FUN_00601450();
    if (*piVar3 != 6) break;
    iVar2 = iVar2 + 1;
    (*Sleep)(500);
  } while (iVar2 < 10);
  stream_ptr = (CCheckOutItem *)0x0;
LAB_004b36b4:
  this_ptr = stream_ptr;
  if (stream_ptr == (CCheckOutItem *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't access %s.");
  }
  else {
    iVar2 = engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60
                      ((CCheckOutList *)&stack0xfffffffc,(FILE **)&this_ptr);
    if (iVar2 == 0) {
      engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x00000000);
    }
    else {
      iVar2 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60
                        ((CCheckOutList *)&stack0x00000000,(char *)filename);
      if (iVar2 < 0) {
        if (in_stack_0000000c != (FILE *)0x0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0
                    (in_stack_0000000c,"..\\engine\\fileio.cpp",0xc4);
          in_stack_00000010 = 0;
        }
        engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
        shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                  (g_CEditorToolsPtr,"Tried to undo checkout on %s, but you didn't have the file checked out!\nThis should never happen.\nPlease leave this on your screen and show this to Fletch.");
        engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x00000010);
        return 1;
      }
      iVar2 = engine_fileio_cpp_CCheckOutList_remove_FUN_004b2d70((CCheckOutList *)&this_ptr,iVar2);
      if (iVar2 == 0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Out of memory...Restart the application NOW.\nBetter yet, reboot the computer.");
      }
      else {
        iVar2 = engine_fileio_cpp_CCheckOutList_write_FUN_004b2eb0
                          ((CCheckOutList *)&stack0xfffffff8,(FILE **)&stack0x00000000);
        if (iVar2 != 0) {
          if (this_ptr != (CCheckOutItem *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      ((FILE *)this_ptr,"..\\engine\\fileio.cpp",0xc4);
            unused_param = (void *)0x0;
          }
          engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
          engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&this_ptr);
          return 1;
        }
      }
      engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x00000000);
    }
  }
LAB_004b36da:
  if (in_stack_0000000c != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_0000000c,"..\\engine\\fileio.cpp",0xc4);
    in_stack_0000000c = (FILE *)0x0;
  }
  engine_fileio_cpp_logOffVersionControl_FUN_004b2830();
  return 0;
}


// Assembly code:
// 004b35a0: PUSH EBX
//   Label: engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0
// 004b35a1: PUSH ESI
// 004b35a2: PUSH EDI
// 004b35a3: PUSH EBP
// 004b35a4: SUB ESP,0x214
// 004b35aa: MOV EBP,dword ptr [ESP + 0x22c]
//   XREF to: Stack[0x8] (READ)
// 004b35b1: XOR EDX,EDX
// 004b35b3: MOV AH,byte ptr [0x02d12bd0]
//   XREF to: 02d12bd0 (READ)
// 004b35b9: MOV dword ptr [ESP + 0x20c],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 004b35c0: TEST AH,AH
// 004b35c2: JZ 0x004b3715
//   XREF to: 004b3715 (CONDITIONAL_JUMP)
// 004b35c8: CMP byte ptr [0x02d12bf8],0x0
//   Label: LAB_004b35c8
//   XREF to: 02d12bf8 (READ)
// 004b35cf: JZ 0x004b35f2
//   XREF to: 004b35f2 (CONDITIONAL_JUMP)
// 004b35d1: PUSH 0x62673b
//   XREF to: 0062673b (DATA)
// 004b35d6: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b35dc: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004b35dd: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004b35e2: ADD ESP,0x8
// 004b35e5: CALL engine_fileio.cpp_logOnAsVersionControlUser_FUN_004b2770
//   XREF to: 004b2770 (UNCONDITIONAL_CALL)
// 004b35ea: TEST EAX,EAX
// 004b35ec: JZ 0x004b36da
//   XREF to: 004b36da (CONDITIONAL_JUMP)
// 004b35f2: PUSH EBP
//   Label: LAB_004b35f2
// 004b35f3: PUSH 0x626761
//   XREF to: 00626761 (DATA)
// 004b35f8: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b35fe: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004b35ff: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004b3604: LEA EDI,[ESP + 0xc]
//   XREF to: Stack[-0x224] (DATA)
// 004b3608: MOV DH,byte ptr [0x02d12ac8]
//   XREF to: 02d12ac8 (READ)
// 004b360e: ADD ESP,0xc
// 004b3611: TEST DH,DH
// 004b3613: JZ 0x004b373d
//   XREF to: 004b373d (CONDITIONAL_JUMP)
// 004b3619: LEA EAX,[ESP + 0x104]
//   Label: LAB_004b3619
//   XREF to: Stack[-0x120] (DATA)
// 004b3620: PUSH EAX
// 004b3621: LEA EAX,[ESP + 0x214]
//   XREF to: Stack[-0x14] (DATA)
// 004b3628: PUSH EAX
// 004b3629: PUSH 0x2d12ac8
//   XREF to: 02d12ac8 (DATA)
// 004b362e: CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   XREF to: 00481f80 (UNCONDITIONAL_CALL)
// 004b3633: ADD ESP,0xc
// 004b3636: PUSH 0x0
// 004b3638: PUSH 0x0
// 004b363a: LEA EAX,[ESP + 0x10c]
//   XREF to: Stack[-0x120] (DATA)
// 004b3641: PUSH EAX
// 004b3642: LEA EAX,[ESP + 0x21c]
//   XREF to: Stack[-0x14] (DATA)
// 004b3649: PUSH EAX
// 004b364a: PUSH EDI
// 004b364b: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004b3650: ADD ESP,0x14
// 004b3653: MOV ESI,0x626096
//   XREF to: 00626096 (DATA)
// 004b3658: PUSH EDI
// 004b3659: SUB ECX,ECX
// 004b365b: DEC ECX
// 004b365c: MOV AL,0x0
// 004b365e: SCASB.REPNE ES:EDI
// 004b3660: DEC EDI
// 004b3661: MOV AL,byte ptr [ESI]
//   Label: LAB_004b3661
//   XREF to: 00626096 (READ)
//   XREF to: 00626098 (READ)
// 004b3663: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x224] (DATA)
// 004b3665: CMP AL,0x0
// 004b3667: JZ 0x004b3679
//   XREF to: 004b3679 (CONDITIONAL_JUMP)
// 004b3669: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00626097 (READ)
//   XREF to: 00626099 (READ)
// 004b366c: ADD ESI,0x2
// 004b366f: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x223] (WRITE)
// 004b3672: ADD EDI,0x2
// 004b3675: CMP AL,0x0
// 004b3677: JNZ 0x004b3661
//   XREF to: 004b3661 (CONDITIONAL_JUMP)
// 004b3679: POP EDI
//   Label: LAB_004b3679
// 004b367a: MOV EDI,ESP
// 004b367c: XOR ESI,ESI
// 004b367e: PUSH 0x153
//   Label: LAB_004b367e
// 004b3683: PUSH 0x626129
//   XREF to: 00626129 (DATA)
// 004b3688: PUSH 0x626785
//   XREF to: 00626785 (DATA)
// 004b368d: PUSH 0x0
// 004b368f: PUSH EDI
// 004b3690: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004b3695: MOV EBX,EAX
// 004b3697: ADD ESP,0x14
// 004b369a: TEST EAX,EAX
// 004b369c: JZ 0x004b3764
//   XREF to: 004b3764 (CONDITIONAL_JUMP)
// 004b36a2: PUSH 0x400
// 004b36a7: PUSH 0x0
// 004b36a9: PUSH 0x0
// 004b36ab: PUSH EAX
// 004b36ac: CALL crt_stdio.c_setvbuf_FUN_00601490
//   XREF to: 00601490 (UNCONDITIONAL_CALL)
// 004b36b1: ADD ESP,0x10
// 004b36b4: MOV dword ptr [ESP + 0x20c],EBX
//   Label: LAB_004b36b4
//   XREF to: Stack[-0x18] (WRITE)
// 004b36bb: TEST EBX,EBX
// 004b36bd: JNZ 0x004b378b
//   XREF to: 004b378b (CONDITIONAL_JUMP)
// 004b36c3: MOV EAX,ESP
// 004b36c5: PUSH EAX
// 004b36c6: PUSH 0x626789
//   XREF to: 00626789 (DATA)
// 004b36cb: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
//   XREF to: 02cf1cd4 (PARAM)
// 004b36d1: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004b36d2: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b36d7: ADD ESP,0xc
// 004b36da: MOV ESI,dword ptr [ESP + 0x20c]
//   Label: LAB_004b36da
//   XREF to: Stack[-0x18] (READ)
// 004b36e1: TEST ESI,ESI
// 004b36e3: JZ 0x004b3701
//   XREF to: 004b3701 (CONDITIONAL_JUMP)
// 004b36e5: PUSH 0xc4
// 004b36ea: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b36ef: PUSH ESI
// 004b36f0: XOR EBP,EBP
// 004b36f2: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b36f7: ADD ESP,0xc
// 004b36fa: MOV dword ptr [ESP + 0x20c],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 004b3701: CALL engine_fileio.cpp_logOffVersionControl_FUN_004b2830
//   Label: LAB_004b3701
//   XREF to: 004b2830 (UNCONDITIONAL_CALL)
// 004b3706: XOR EBX,EBX
// 004b3708: MOV EAX,EBX
// 004b370a: ADD ESP,0x214
//   Label: LAB_004b370a
// 004b3710: POP EBP
// 004b3711: POP EDI
// 004b3712: POP ESI
// 004b3713: POP EBX
// 004b3714: RET
// 004b3715: MOV ECX,0x6266f4
//   Label: LAB_004b3715
//   XREF to: 006266f4 (DATA)
// 004b371a: MOV EBX,0x402
// 004b371f: PUSH 0x626709
//   XREF to: 00626709 (DATA)
// 004b3724: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004b372a: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 004b3730: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b3735: ADD ESP,0x4
// 004b3738: JMP 0x004b35c8
//   XREF to: 004b35c8 (UNCONDITIONAL_JUMP)
// 004b373d: MOV EAX,0x626060
//   Label: LAB_004b373d
//   XREF to: 00626060 (DATA)
// 004b3742: MOV EDX,0xdd
// 004b3747: PUSH 0x626075
//   XREF to: 00626075 (DATA)
// 004b374c: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 004b3751: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 004b3757: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b375c: ADD ESP,0x4
// 004b375f: JMP 0x004b3619
//   XREF to: 004b3619 (UNCONDITIONAL_JUMP)
// 004b3764: CALL crt_errno.c_errno_FUN_00601450
//   Label: LAB_004b3764
//   XREF to: 00601450 (UNCONDITIONAL_CALL)
// 004b3769: CMP dword ptr [EAX],0x6
// 004b376c: JNZ 0x004b3784
//   XREF to: 004b3784 (CONDITIONAL_JUMP)
// 004b376e: PUSH 0x1f4
// 004b3773: INC ESI
// 004b3774: CALL dword ptr CS:[0x611644]
//   XREF to: 00611644 (READ)
// 004b377b: CMP ESI,0xa
// 004b377e: JL 0x004b367e
//   XREF to: 004b367e (CONDITIONAL_JUMP)
// 004b3784: XOR EBX,EBX
//   Label: LAB_004b3784
// 004b3786: JMP 0x004b36b4
//   XREF to: 004b36b4 (UNCONDITIONAL_JUMP)
// 004b378b: LEA EAX,[ESP + 0x20c]
//   Label: LAB_004b378b
//   XREF to: Stack[-0x18] (DATA)
// 004b3792: PUSH EAX
// 004b3793: LEA EAX,[ESP + 0x208]
//   XREF to: Stack[-0x20] (DATA)
// 004b379a: XOR EBX,EBX
// 004b379c: PUSH EAX
// 004b379d: MOV dword ptr [ESP + 0x20c],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 004b37a4: MOV dword ptr [ESP + 0x210],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 004b37ab: CALL engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60
//   XREF to: 004b2a60 (UNCONDITIONAL_CALL)
// 004b37b0: ADD ESP,0x8
// 004b37b3: TEST EAX,EAX
// 004b37b5: JZ 0x004b3859
//   XREF to: 004b3859 (CONDITIONAL_JUMP)
// 004b37bb: PUSH EBP
// 004b37bc: LEA EAX,[ESP + 0x208]
//   XREF to: Stack[-0x20] (DATA)
// 004b37c3: PUSH EAX
// 004b37c4: CALL engine_fileio.cpp_CCheckOutList_findEntry_FUN_004b2e60
//   XREF to: 004b2e60 (UNCONDITIONAL_CALL)
// 004b37c9: ADD ESP,0x8
// 004b37cc: TEST EAX,EAX
// 004b37ce: JL 0x004b386e
//   XREF to: 004b386e (CONDITIONAL_JUMP)
// 004b37d4: PUSH EAX
// 004b37d5: LEA EAX,[ESP + 0x208]
//   XREF to: Stack[-0x20] (DATA)
// 004b37dc: PUSH EAX
// 004b37dd: CALL engine_fileio.cpp_CCheckOutList_remove_FUN_004b2d70
//   XREF to: 004b2d70 (UNCONDITIONAL_CALL)
// 004b37e2: ADD ESP,0x8
// 004b37e5: TEST EAX,EAX
// 004b37e7: JZ 0x004b38cf
//   XREF to: 004b38cf (CONDITIONAL_JUMP)
// 004b37ed: LEA EAX,[ESP + 0x20c]
//   XREF to: Stack[-0x18] (DATA)
// 004b37f4: PUSH EAX
// 004b37f5: LEA EAX,[ESP + 0x208]
//   XREF to: Stack[-0x20] (DATA)
// 004b37fc: PUSH EAX
// 004b37fd: CALL engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0
//   XREF to: 004b2eb0 (UNCONDITIONAL_CALL)
// 004b3802: ADD ESP,0x8
// 004b3805: TEST EAX,EAX
// 004b3807: JZ 0x004b3908
//   XREF to: 004b3908 (CONDITIONAL_JUMP)
// 004b380d: MOV ECX,dword ptr [ESP + 0x20c]
//   XREF to: Stack[-0x18] (READ)
// 004b3814: TEST ECX,ECX
// 004b3816: JZ 0x004b3832
//   XREF to: 004b3832 (CONDITIONAL_JUMP)
// 004b3818: PUSH 0xc4
// 004b381d: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b3822: PUSH ECX
// 004b3823: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b3828: ADD ESP,0xc
// 004b382b: MOV dword ptr [ESP + 0x20c],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 004b3832: CALL engine_fileio.cpp_logOffVersionControl_FUN_004b2830
//   Label: LAB_004b3832
//   XREF to: 004b2830 (UNCONDITIONAL_CALL)
// 004b3837: LEA EAX,[ESP + 0x204]
//   XREF to: Stack[-0x20] (DATA)
// 004b383e: PUSH EAX
// 004b383f: MOV EBX,0x1
// 004b3844: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004b3849: ADD ESP,0x4
// 004b384c: MOV EAX,EBX
// 004b384e: ADD ESP,0x214
// 004b3854: POP EBP
// 004b3855: POP EDI
// 004b3856: POP ESI
// 004b3857: POP EBX
// 004b3858: RET
// 004b3859: LEA EAX,[ESP + 0x204]
//   Label: LAB_004b3859
//   XREF to: Stack[-0x20] (DATA)
// 004b3860: PUSH EAX
// 004b3861: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004b3866: ADD ESP,0x4
// 004b3869: JMP 0x004b36da
//   XREF to: 004b36da (UNCONDITIONAL_JUMP)
// 004b386e: MOV EDI,dword ptr [ESP + 0x20c]
//   Label: LAB_004b386e
//   XREF to: Stack[-0x18] (READ)
// 004b3875: TEST EDI,EDI
// 004b3877: JZ 0x004b3893
//   XREF to: 004b3893 (CONDITIONAL_JUMP)
// 004b3879: PUSH 0xc4
// 004b387e: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b3883: PUSH EDI
// 004b3884: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b3889: ADD ESP,0xc
// 004b388c: MOV dword ptr [ESP + 0x20c],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 004b3893: CALL engine_fileio.cpp_logOffVersionControl_FUN_004b2830
//   Label: LAB_004b3893
//   XREF to: 004b2830 (UNCONDITIONAL_CALL)
// 004b3898: PUSH EBP
// 004b3899: PUSH 0x62679a
//   XREF to: 0062679a (DATA)
// 004b389e: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b38a4: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004b38a5: CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
//   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)
// 004b38aa: ADD ESP,0xc
// 004b38ad: LEA EAX,[ESP + 0x204]
//   XREF to: Stack[-0x20] (DATA)
// 004b38b4: PUSH EAX
// 004b38b5: MOV EBX,0x1
// 004b38ba: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004b38bf: ADD ESP,0x4
// 004b38c2: MOV EAX,EBX
// 004b38c4: ADD ESP,0x214
// 004b38ca: POP EBP
// 004b38cb: POP EDI
// 004b38cc: POP ESI
// 004b38cd: POP EBX
// 004b38ce: RET
// 004b38cf: MOV EDI,dword ptr [ESP + 0x20c]
//   Label: LAB_004b38cf
//   XREF to: Stack[-0x18] (READ)
// 004b38d6: TEST EDI,EDI
// 004b38d8: JZ 0x004b38f4
//   XREF to: 004b38f4 (CONDITIONAL_JUMP)
// 004b38da: PUSH 0xc4
// 004b38df: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b38e4: PUSH EDI
// 004b38e5: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b38ea: ADD ESP,0xc
// 004b38ed: MOV dword ptr [ESP + 0x20c],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 004b38f4: PUSH 0x626836
//   Label: LAB_004b38f4
//   XREF to: 00626836 (DATA)
// 004b38f9: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b38ff: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004b3900: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b3905: ADD ESP,0x8
// 004b3908: LEA EAX,[ESP + 0x204]
//   Label: LAB_004b3908
//   XREF to: Stack[-0x20] (DATA)
// 004b390f: PUSH EAX
// 004b3910: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004b3915: ADD ESP,0x4
// 004b3918: JMP 0x004b36da
//   XREF to: 004b36da (UNCONDITIONAL_JUMP)
