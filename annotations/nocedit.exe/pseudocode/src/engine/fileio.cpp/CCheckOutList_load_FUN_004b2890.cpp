// Name: engine_fileio.cpp_CCheckOutList_load_FUN_004b2890
// Address: 004b2890
// Address Range: [[004b2890, 004b2a53]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CCheckOutList_load_FUN_004b2890(CCheckOutList * this_ptr)
// Cross-references:
//   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 (004b3920) at 004b396d [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 (004b5030) at 004b5078 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50 (004b3f50) at 004b3f9f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004ba819 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b8868 [UNCONDITIONAL_CALL]
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
//   TerminatedCString s_rt_00626293
//   TerminatedCString s_Can_t_access_s_00626296
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   char[264] g_VersionControlDirectory
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_errno.c_errno_FUN_00601450
//   crt_stdio.c_setvbuf_FUN_00601490
//   engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   engine_dosio.c_makePath_FUN_00481f50
//   engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60
//   engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

int __cdecl engine_fileio_cpp_CCheckOutList_load_FUN_004b2890(CCheckOutList *this_ptr)

{
  char cVar1;
  FILE *stream_ptr;
  int *piVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  byte bVar7;
  CCheckOutList *in_stack_0000001c;
  char acStack_110 [4];
  char acStack_10c [252];
  char *pcVar6;
  
  bVar7 = 0;
  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(this_ptr);
  if (g_VersionControlDirectory[0] == '\0') {
    return 1;
  }
  if (g_VersionControlDirectory[0] == '\0') {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0xdd;
    core_main_c_displayErrorAndQuit_FUN_00506f10("versionControlDirectory not set!");
  }
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80
            (g_VersionControlDirectory,&stack0xfffffff4,acStack_110);
  engine_dosio_c_makePath_FUN_00481f50
            (&stack0xfffffde8,&stack0xfffffff8,acStack_10c,(char *)0x0,(char *)0x0);
  pcVar4 = "checkout.txt";
  iVar3 = -1;
  pcVar6 = &stack0xfffffde8;
  do {
    pcVar5 = pcVar6;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
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
  iVar3 = 0;
  do {
    stream_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (&stack0xfffffdf4,(char *)0x0,"rt","..\\engine\\fileio.cpp",
                            0x153);
    if (stream_ptr != (FILE *)0x0) {
      crt_stdio_c_setvbuf_FUN_00601490(stream_ptr,(char *)0x0,0,0x400);
      goto LAB_004b295b;
    }
    piVar2 = (int *)crt_errno_c_errno_FUN_00601450();
    if (*piVar2 != 6) break;
    iVar3 = iVar3 + 1;
    (*Sleep)(500);
  } while (iVar3 < 10);
  stream_ptr = (FILE *)0x0;
LAB_004b295b:
  if (stream_ptr != (FILE *)0x0) {
    iVar3 = engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60
                      (in_stack_0000001c,(FILE **)&stack0x00000000);
    if (this_ptr != (CCheckOutList *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)this_ptr,"..\\engine\\fileio.cpp",0xc4);
    }
    return iVar3;
  }
  piVar2 = (int *)crt_errno_c_errno_FUN_00601450();
  if (*piVar2 == 1) {
    return 1;
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Can't access %s.");
  return 0;
}


// Assembly code:
// 004b2890: PUSH EBX
//   Label: engine_fileio.cpp_CCheckOutList_load_FUN_004b2890
// 004b2891: PUSH ESI
// 004b2892: PUSH EDI
// 004b2893: PUSH EBP
// 004b2894: SUB ESP,0x20c
// 004b289a: MOV EDX,dword ptr [ESP + 0x220]
//   XREF to: Stack[0x4] (READ)
// 004b28a1: PUSH EDX
// 004b28a2: CALL engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
//   XREF to: 004b2860 (UNCONDITIONAL_CALL)
// 004b28a7: MOV AH,byte ptr [0x02d12ac8]
//   XREF to: 02d12ac8 (READ)
// 004b28ad: ADD ESP,0x4
// 004b28b0: TEST AH,AH
// 004b28b2: JZ 0x004b29b8
//   XREF to: 004b29b8 (CONDITIONAL_JUMP)
// 004b28b8: MOV EDI,ESP
// 004b28ba: JZ 0x004b29c8
//   XREF to: 004b29c8 (CONDITIONAL_JUMP)
// 004b28c0: LEA EAX,[ESP + 0x104]
//   Label: LAB_004b28c0
//   XREF to: Stack[-0x118] (DATA)
// 004b28c7: PUSH EAX
// 004b28c8: LEA EAX,[ESP + 0x20c]
//   XREF to: Stack[-0x14] (DATA)
// 004b28cf: PUSH EAX
// 004b28d0: PUSH 0x2d12ac8
//   XREF to: 02d12ac8 (DATA)
// 004b28d5: CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   XREF to: 00481f80 (UNCONDITIONAL_CALL)
// 004b28da: ADD ESP,0xc
// 004b28dd: PUSH 0x0
// 004b28df: PUSH 0x0
// 004b28e1: LEA EAX,[ESP + 0x10c]
//   XREF to: Stack[-0x118] (DATA)
// 004b28e8: PUSH EAX
// 004b28e9: LEA EAX,[ESP + 0x214]
//   XREF to: Stack[-0x14] (DATA)
// 004b28f0: PUSH EAX
// 004b28f1: PUSH EDI
// 004b28f2: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004b28f7: ADD ESP,0x14
// 004b28fa: MOV ESI,0x626096
//   XREF to: 00626096 (DATA)
// 004b28ff: PUSH EDI
// 004b2900: SUB ECX,ECX
// 004b2902: DEC ECX
// 004b2903: MOV AL,0x0
// 004b2905: SCASB.REPNE ES:EDI
// 004b2907: DEC EDI
// 004b2908: MOV AL,byte ptr [ESI]
//   Label: LAB_004b2908
//   XREF to: 00626096 (READ)
//   XREF to: 00626098 (READ)
// 004b290a: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x21c] (DATA)
// 004b290c: CMP AL,0x0
// 004b290e: JZ 0x004b2920
//   XREF to: 004b2920 (CONDITIONAL_JUMP)
// 004b2910: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00626097 (READ)
//   XREF to: 00626099 (READ)
// 004b2913: ADD ESI,0x2
// 004b2916: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x21b] (WRITE)
// 004b2919: ADD EDI,0x2
// 004b291c: CMP AL,0x0
// 004b291e: JNZ 0x004b2908
//   XREF to: 004b2908 (CONDITIONAL_JUMP)
// 004b2920: POP EDI
//   Label: LAB_004b2920
// 004b2921: MOV EDI,ESP
// 004b2923: XOR ESI,ESI
// 004b2925: PUSH 0x153
//   Label: LAB_004b2925
// 004b292a: PUSH 0x626129
//   XREF to: 00626129 (DATA)
// 004b292f: PUSH 0x626293
//   XREF to: 00626293 (DATA)
// 004b2934: PUSH 0x0
// 004b2936: PUSH EDI
// 004b2937: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004b293c: MOV EBX,EAX
// 004b293e: ADD ESP,0x14
// 004b2941: TEST EAX,EAX
// 004b2943: JZ 0x004b29f0
//   XREF to: 004b29f0 (CONDITIONAL_JUMP)
// 004b2949: PUSH 0x400
// 004b294e: PUSH 0x0
// 004b2950: PUSH 0x0
// 004b2952: PUSH EAX
// 004b2953: CALL crt_stdio.c_setvbuf_FUN_00601490
//   XREF to: 00601490 (UNCONDITIONAL_CALL)
// 004b2958: ADD ESP,0x10
// 004b295b: MOV dword ptr [ESP + 0x204],EBX
//   Label: LAB_004b295b
//   XREF to: Stack[-0x18] (WRITE)
// 004b2962: TEST EBX,EBX
// 004b2964: JZ 0x004b2a17
//   XREF to: 004b2a17 (CONDITIONAL_JUMP)
// 004b296a: LEA EAX,[ESP + 0x204]
//   XREF to: Stack[-0x18] (DATA)
// 004b2971: PUSH EAX
// 004b2972: MOV EAX,dword ptr [ESP + 0x224]
//   XREF to: Stack[0x4] (READ)
// 004b2979: PUSH EAX
// 004b297a: CALL engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60
//   XREF to: 004b2a60 (UNCONDITIONAL_CALL)
// 004b297f: ADD ESP,0x8
// 004b2982: MOV EDX,dword ptr [ESP + 0x204]
//   XREF to: Stack[-0x18] (READ)
// 004b2989: MOV EBX,EAX
// 004b298b: TEST EDX,EDX
// 004b298d: JZ 0x004b29ab
//   XREF to: 004b29ab (CONDITIONAL_JUMP)
// 004b298f: PUSH 0xc4
// 004b2994: PUSH 0x62604b
//   XREF to: 0062604b (DATA)
// 004b2999: PUSH EDX
// 004b299a: XOR ESI,ESI
// 004b299c: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b29a1: ADD ESP,0xc
// 004b29a4: MOV dword ptr [ESP + 0x204],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 004b29ab: MOV EAX,EBX
//   Label: LAB_004b29ab
// 004b29ad: ADD ESP,0x20c
// 004b29b3: POP EBP
// 004b29b4: POP EDI
// 004b29b5: POP ESI
// 004b29b6: POP EBX
// 004b29b7: RET
// 004b29b8: MOV EAX,0x1
//   Label: LAB_004b29b8
// 004b29bd: ADD ESP,0x20c
// 004b29c3: POP EBP
// 004b29c4: POP EDI
// 004b29c5: POP ESI
// 004b29c6: POP EBX
// 004b29c7: RET
// 004b29c8: MOV ECX,0x626060
//   Label: LAB_004b29c8
//   XREF to: 00626060 (DATA)
// 004b29cd: MOV EBX,0xdd
// 004b29d2: PUSH 0x626075
//   XREF to: 00626075 (DATA)
// 004b29d7: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004b29dd: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 004b29e3: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b29e8: ADD ESP,0x4
// 004b29eb: JMP 0x004b28c0
//   XREF to: 004b28c0 (UNCONDITIONAL_JUMP)
// 004b29f0: CALL crt_errno.c_errno_FUN_00601450
//   Label: LAB_004b29f0
//   XREF to: 00601450 (UNCONDITIONAL_CALL)
// 004b29f5: CMP dword ptr [EAX],0x6
// 004b29f8: JNZ 0x004b2a10
//   XREF to: 004b2a10 (CONDITIONAL_JUMP)
// 004b29fa: PUSH 0x1f4
// 004b29ff: INC ESI
// 004b2a00: CALL dword ptr CS:[0x611644]
//   XREF to: 00611644 (READ)
// 004b2a07: CMP ESI,0xa
// 004b2a0a: JL 0x004b2925
//   XREF to: 004b2925 (CONDITIONAL_JUMP)
// 004b2a10: XOR EBX,EBX
//   Label: LAB_004b2a10
// 004b2a12: JMP 0x004b295b
//   XREF to: 004b295b (UNCONDITIONAL_JUMP)
// 004b2a17: CALL crt_errno.c_errno_FUN_00601450
//   Label: LAB_004b2a17
//   XREF to: 00601450 (UNCONDITIONAL_CALL)
// 004b2a1c: MOV EDI,dword ptr [EAX]
// 004b2a1e: CMP EDI,0x1
// 004b2a21: JNZ 0x004b2a30
//   XREF to: 004b2a30 (CONDITIONAL_JUMP)
// 004b2a23: MOV EAX,EDI
// 004b2a25: ADD ESP,0x20c
// 004b2a2b: POP EBP
// 004b2a2c: POP EDI
// 004b2a2d: POP ESI
// 004b2a2e: POP EBX
// 004b2a2f: RET
// 004b2a30: MOV EAX,ESP
//   Label: LAB_004b2a30
// 004b2a32: PUSH EAX
// 004b2a33: PUSH 0x626296
//   XREF to: 00626296 (DATA)
// 004b2a38: MOV EBP,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b2a3e: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 004b2a3f: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b2a44: ADD ESP,0xc
// 004b2a47: XOR EAX,EAX
// 004b2a49: ADD ESP,0x20c
// 004b2a4f: POP EBP
// 004b2a50: POP EDI
// 004b2a51: POP ESI
// 004b2a52: POP EBX
// 004b2a53: RET
