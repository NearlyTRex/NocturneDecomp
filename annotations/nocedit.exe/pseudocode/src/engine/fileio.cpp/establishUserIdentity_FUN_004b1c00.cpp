// Name: engine_fileio.cpp_establishUserIdentity_FUN_004b1c00
// Address: 004b1c00
// Address Range: [[004b1c00, 004b1d3f]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_establishUserIdentity_FUN_004b1c00(void)
// Cross-references:
//   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 (004b3920) at 004b393a [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 (004b5030) at 004b5048 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50 (004b3f50) at 004b3f6f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004ba77b [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b8784 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b5bb3 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_USERNAME_00625ff5
//   TerminatedCString s_Enter_user_name_00625ffe
//   TerminatedCString s_You_must_enter_a_user_na_0062600e
//   TerminatedCString s_Name_contains_invalid_ch_0062602a
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   char[256] g_CharacterClassificationTable
//   CEditorTools g_CEditorToolsPtr
//   SVersionControlSession g_VersionControlSession
//   undefined4 DAT_02d12bd1
//   undefined4 DAT_02d12bd2
//   undefined4 DAT_02d12bd3
// Function calls:
//   crt_env.c_getenv_FUN_006013f0
//   crt_string.c_strncpy_FUN_00600f40
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   wincore_winrun.cpp_getComputerAndUserName_FUN_005f4140

#include "nocturne.h"

int __cdecl engine_fileio_cpp_establishUserIdentity_FUN_004b1c00(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  SVersionControlSession *pSVar4;
  BADSPACEBASE *in_ESP;
  char in_stack_fffffe00;
  
  if (g_VersionControlSession.primary_username[0] == '\0') {
    wincore_winrun_cpp_getComputerAndUserName_FUN_005f4140(&stack0xfffffdfc);
    if (in_stack_fffffe00 != '\0') {
      pcVar2 = &stack0xfffffe00;
      pSVar4 = &g_VersionControlSession;
      do {
        cVar1 = *pcVar2;
        pSVar4->primary_username[0] = cVar1;
        if (cVar1 == '\0') {
          return 1;
        }
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pSVar4->primary_username[1] = cVar1;
        pSVar4 = (SVersionControlSession *)(pSVar4->primary_username + 2);
      } while (cVar1 != '\0');
      return 1;
    }
    pcVar2 = crt_env_c_getenv_FUN_006013f0("USERNAME");
    if (pcVar2 != (char *)0x0) {
      crt_string_c_strncpy_FUN_00600f40(g_VersionControlSession.primary_username,pcVar2,0x1f);
      return 1;
    }
    while( true ) {
      while( true ) {
        iVar3 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,"Enter user name",
                           g_VersionControlSession.primary_username,0x20,1);
        if (iVar3 == 0) {
          g_VersionControlSession.primary_username[0] = '\0';
          return 0;
        }
        if (g_VersionControlSession.primary_username[0] != '\0') break;
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"You must enter a user name.");
      }
      pSVar4 = &g_VersionControlSession;
      if (g_VersionControlSession.primary_username[0] == '\0') break;
      while ((pSVar4->primary_username[0] == '_' ||
             ((g_CharacterClassificationTable[(byte)(pSVar4->primary_username[0] + 1)] & 0xe0U) != 0
             ))) {
        pcVar2 = pSVar4->primary_username;
        pSVar4 = (SVersionControlSession *)(pSVar4->primary_username + 1);
        if (pcVar2[1] == '\0') {
          return 1;
        }
      }
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Name contains invalid characters");
    }
  }
  return 1;
}


// Assembly code:
// 004b1c00: PUSH EBX
//   Label: engine_fileio.cpp_establishUserIdentity_FUN_004b1c00
// 004b1c01: SUB ESP,0x200
// 004b1c07: CMP byte ptr [0x02d12bd0],0x0
//   XREF to: 02d12bd0 (READ)
// 004b1c0e: JZ 0x004b1c1d
//   XREF to: 004b1c1d (CONDITIONAL_JUMP)
// 004b1c10: MOV EAX,0x1
//   Label: LAB_004b1c10
// 004b1c15: ADD ESP,0x200
// 004b1c1b: POP EBX
// 004b1c1c: RET
// 004b1c1d: MOV EAX,ESP
//   Label: LAB_004b1c1d
// 004b1c1f: PUSH EAX
// 004b1c20: CALL wincore_winrun.cpp_getComputerAndUserName_FUN_005f4140
//   XREF to: 005f4140 (UNCONDITIONAL_CALL)
// 004b1c25: ADD ESP,0x4
// 004b1c28: CMP byte ptr [ESP],0x0
//   XREF to: Stack[-0x204] (DATA)
// 004b1c2c: JNZ 0x004b1cc6
//   XREF to: 004b1cc6 (CONDITIONAL_JUMP)
// 004b1c32: PUSH 0x625ff5
//   XREF to: 00625ff5 (DATA)
// 004b1c37: CALL crt_env.c_getenv_FUN_006013f0
//   XREF to: 006013f0 (UNCONDITIONAL_CALL)
// 004b1c3c: ADD ESP,0x4
// 004b1c3f: TEST EAX,EAX
// 004b1c41: JNZ 0x004b1cfa
//   XREF to: 004b1cfa (CONDITIONAL_JUMP)
// 004b1c47: PUSH 0x1
//   Label: LAB_004b1c47
// 004b1c49: PUSH 0x20
// 004b1c4b: PUSH 0x2d12bd0
//   XREF to: 02d12bd0 (DATA)
// 004b1c50: PUSH 0x625ffe
//   XREF to: 00625ffe (DATA)
// 004b1c55: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b1c5b: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004b1c5c: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 004b1c61: ADD ESP,0x14
// 004b1c64: TEST EAX,EAX
// 004b1c66: JZ 0x004b1d17
//   XREF to: 004b1d17 (CONDITIONAL_JUMP)
// 004b1c6c: MOV BL,byte ptr [0x02d12bd0]
//   XREF to: 02d12bd0 (READ)
// 004b1c72: TEST BL,BL
// 004b1c74: JZ 0x004b1d27
//   XREF to: 004b1d27 (CONDITIONAL_JUMP)
// 004b1c7a: MOV EAX,0x2d12bd0
//   XREF to: 02d12bd0 (PARAM)
// 004b1c7f: MOV ECX,0x1
// 004b1c84: JZ 0x004b1ca8
//   XREF to: 004b1ca8 (CONDITIONAL_JUMP)
// 004b1c86: MOV DH,byte ptr [EAX]
//   Label: LAB_004b1c86
//   XREF to: 02d12bd0 (READ)
//   XREF to: 02d12bd1 (READ)
// 004b1c88: CMP DH,0x5f
// 004b1c8b: JZ 0x004b1ca0
//   XREF to: 004b1ca0 (CONDITIONAL_JUMP)
// 004b1c8d: MOV DL,DH
// 004b1c8f: INC DL
// 004b1c91: AND EDX,0xff
// 004b1c97: TEST byte ptr [EDX + 0x6849c4],0xe0
//   XREF to: 006849c4 (DATA)
// 004b1c9e: JZ 0x004b1cb0
//   XREF to: 004b1cb0 (CONDITIONAL_JUMP)
// 004b1ca0: MOV DL,byte ptr [EAX + 0x1]
//   Label: LAB_004b1ca0
//   XREF to: 02d12bd1 (READ)
//   XREF to: 02d12bd2 (READ)
// 004b1ca3: INC EAX
//   XREF to: 02d12bd1 (PARAM)
// 004b1ca4: TEST DL,DL
// 004b1ca6: JNZ 0x004b1c86
//   XREF to: 004b1c86 (CONDITIONAL_JUMP)
// 004b1ca8: TEST ECX,ECX
//   Label: LAB_004b1ca8
// 004b1caa: JNZ 0x004b1c10
//   XREF to: 004b1c10 (CONDITIONAL_JUMP)
// 004b1cb0: PUSH 0x62602a
//   Label: LAB_004b1cb0
//   XREF to: 0062602a (DATA)
// 004b1cb5: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b1cbb: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004b1cbc: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b1cc1: ADD ESP,0x8
// 004b1cc4: JMP 0x004b1c47
//   XREF to: 004b1c47 (UNCONDITIONAL_JUMP)
// 004b1cc6: PUSH EDI
//   Label: LAB_004b1cc6
// 004b1cc7: PUSH ESI
// 004b1cc8: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x204] (DATA)
// 004b1ccc: MOV EDI,0x2d12bd0
//   XREF to: 02d12bd0 (DATA)
// 004b1cd1: PUSH EDI
//   XREF to: 02d12bd0 (DATA)
// 004b1cd2: MOV AL,byte ptr [ESI]
//   Label: LAB_004b1cd2
//   XREF to: Stack[-0x204] (DATA)
// 004b1cd4: MOV byte ptr [EDI],AL
//   XREF to: 02d12bd0 (WRITE)
//   XREF to: 02d12bd2 (WRITE)
// 004b1cd6: CMP AL,0x0
// 004b1cd8: JZ 0x004b1cea
//   XREF to: 004b1cea (CONDITIONAL_JUMP)
// 004b1cda: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x203] (READ)
// 004b1cdd: ADD ESI,0x2
// 004b1ce0: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02d12bd1 (WRITE)
//   XREF to: 02d12bd3 (WRITE)
// 004b1ce3: ADD EDI,0x2
// 004b1ce6: CMP AL,0x0
// 004b1ce8: JNZ 0x004b1cd2
//   XREF to: 004b1cd2 (CONDITIONAL_JUMP)
// 004b1cea: POP EDI
//   Label: LAB_004b1cea
// 004b1ceb: MOV EAX,0x1
// 004b1cf0: POP ESI
// 004b1cf1: POP EDI
// 004b1cf2: ADD ESP,0x200
// 004b1cf8: POP EBX
// 004b1cf9: RET
// 004b1cfa: PUSH 0x1f
//   Label: LAB_004b1cfa
// 004b1cfc: PUSH EAX
// 004b1cfd: PUSH 0x2d12bd0
//   XREF to: 02d12bd0 (DATA)
// 004b1d02: CALL crt_string.c_strncpy_FUN_00600f40
//   XREF to: 00600f40 (UNCONDITIONAL_CALL)
// 004b1d07: MOV EAX,0x1
// 004b1d0c: ADD ESP,0xc
// 004b1d0f: ADD ESP,0x200
// 004b1d15: POP EBX
// 004b1d16: RET
// 004b1d17: XOR DH,DH
//   Label: LAB_004b1d17
// 004b1d19: MOV byte ptr [0x02d12bd0],DH
//   XREF to: 02d12bd0 (WRITE)
// 004b1d1f: ADD ESP,0x200
// 004b1d25: POP EBX
// 004b1d26: RET
// 004b1d27: PUSH 0x62600e
//   Label: LAB_004b1d27
//   XREF to: 0062600e (DATA)
// 004b1d2c: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b1d32: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004b1d33: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b1d38: ADD ESP,0x8
// 004b1d3b: JMP 0x004b1c47
//   XREF to: 004b1c47 (UNCONDITIONAL_JUMP)
