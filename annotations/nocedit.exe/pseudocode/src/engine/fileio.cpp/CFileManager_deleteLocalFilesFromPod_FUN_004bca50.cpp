// Name: engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
// Address: 004bca50
// Address Range: [[004bca50, 004bcb64]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50(CFileManager * this_ptr, char * pod_filename)
// Cross-references:
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bb4f8 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0 (004bc2b0) at 004bc3bf [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Can_t_mount_s_to_delete__006291d4
//   TerminatedCString s_Deleting_local_files_006291fa
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   crt_io.c_deleteFile_FUN_005ff9d0
//   engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
//   engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
          (CFileManager *this_ptr,char *pod_filename)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  char *pcStack_1c;
  CPodDirectoryEntry *pCStack_18;
  char *pcStack_14;
  
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0((CPodFile *)&stack0xfffffbc8);
  iVar1 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650
                    ((CPodFile *)&stack0xfffffbcc,pod_filename);
  if (iVar1 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s to delete local files.");
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xfffffbd4);
    return 0;
  }
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
            (g_CEditorToolsPtr,"Deleting local files");
  iVar1 = 0;
  if (0 < (int)pcStack_1c) {
    iVar2 = 0;
    do {
      crt_io_c_deleteFile_FUN_005ff9d0(*(char **)((int)&pCStack_18->name_or_offset + iVar2));
      iVar1 = iVar1 + 1;
      shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                (g_CEditorToolsPtr,(float)iVar1,(float)(int)pCStack_18);
      iVar2 = iVar2 + 0x14;
    } while (iVar1 < (int)pcStack_14);
  }
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xfffffbe0);
  return 1;
}


// Assembly code:
// 004bca50: PUSH EBX
//   Label: engine_fileio.cpp_CFileManager_deleteLocalFilesFromPod_FUN_004bca50
// 004bca51: PUSH EBP
// 004bca52: SUB ESP,0x430
// 004bca58: MOV EBX,dword ptr [ESP + 0x440]
//   XREF to: Stack[0x8] (READ)
// 004bca5f: MOV EAX,ESP
// 004bca61: PUSH EAX
// 004bca62: CALL engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
//   XREF to: 0054f5a0 (UNCONDITIONAL_CALL)
// 004bca67: ADD ESP,0x4
// 004bca6a: PUSH EBX
// 004bca6b: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x438] (DATA)
// 004bca6f: PUSH EAX
// 004bca70: CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
//   XREF to: 0054f650 (UNCONDITIONAL_CALL)
// 004bca75: ADD ESP,0x8
// 004bca78: TEST EAX,EAX
// 004bca7a: JZ 0x004bcb35
//   XREF to: 004bcb35 (CONDITIONAL_JUMP)
// 004bca80: PUSH ESI
// 004bca81: PUSH 0x6291fa
//   XREF to: 006291fa (DATA)
// 004bca86: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bca8c: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004bca8d: CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   XREF to: 004a0430 (UNCONDITIONAL_CALL)
// 004bca92: ADD ESP,0x8
// 004bca95: MOV ESI,dword ptr [ESP + 0x414]
//   XREF to: Stack[-0x28] (READ)
// 004bca9c: XOR EBX,EBX
// 004bca9e: TEST ESI,ESI
// 004bcaa0: JLE 0x004bcb06
//   XREF to: 004bcb06 (CONDITIONAL_JUMP)
// 004bcaa2: PUSH EDI
// 004bcaa3: XOR ESI,ESI
// 004bcaa5: MOV EAX,dword ptr [ESP + 0x41c]
//   Label: LAB_004bcaa5
//   XREF to: Stack[-0x24] (READ)
// 004bcaac: MOV EDI,dword ptr [ESI + EAX*0x1]
// 004bcaaf: PUSH EDI
// 004bcab0: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 004bcab5: ADD ESP,0x4
// 004bcab8: MOV EAX,dword ptr [ESP + 0x418]
//   XREF to: Stack[-0x28] (READ)
// 004bcabf: MOV dword ptr [ESP + 0x434],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 004bcac6: INC EBX
// 004bcac7: FILD dword ptr [ESP + 0x434]
//   XREF to: Stack[-0xc] (READ)
// 004bcace: SUB ESP,0x4
// 004bcad1: MOV dword ptr [ESP + 0x438],EBX
//   XREF to: Stack[-0xc] (WRITE)
// 004bcad8: FSTP float ptr [ESP]
//   XREF to: Stack[-0x444] (DATA)
// 004bcadb: FILD dword ptr [ESP + 0x438]
//   XREF to: Stack[-0xc] (READ)
// 004bcae2: SUB ESP,0x4
// 004bcae5: MOV EBP,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bcaeb: FSTP float ptr [ESP]
//   XREF to: Stack[-0x448] (DATA)
// 004bcaee: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 004bcaef: CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   XREF to: 004a0530 (UNCONDITIONAL_CALL)
// 004bcaf4: ADD ESP,0xc
// 004bcaf7: MOV EAX,dword ptr [ESP + 0x418]
//   XREF to: Stack[-0x28] (READ)
// 004bcafe: ADD ESI,0x14
// 004bcb01: CMP EBX,EAX
// 004bcb03: JL 0x004bcaa5
//   XREF to: 004bcaa5 (CONDITIONAL_JUMP)
// 004bcb05: POP EDI
// 004bcb06: MOV EDX,dword ptr [0x00678a60]
//   Label: LAB_004bcb06
//   XREF to: 00678a60 (READ)
// 004bcb0c: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004bcb0d: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 004bcb12: ADD ESP,0x4
// 004bcb15: PUSH 0x0
// 004bcb17: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x438] (DATA)
// 004bcb1b: PUSH EAX
// 004bcb1c: MOV EBX,0x1
// 004bcb21: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 004bcb26: ADD ESP,0x8
// 004bcb29: POP ESI
// 004bcb2a: MOV EAX,EBX
// 004bcb2c: ADD ESP,0x430
// 004bcb32: POP EBP
// 004bcb33: POP EBX
// 004bcb34: RET
// 004bcb35: PUSH EBX
//   Label: LAB_004bcb35
// 004bcb36: PUSH 0x6291d4
//   XREF to: 006291d4 (DATA)
// 004bcb3b: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bcb41: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004bcb42: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004bcb47: ADD ESP,0xc
// 004bcb4a: XOR EBX,EBX
// 004bcb4c: PUSH EBX
// 004bcb4d: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x438] (DATA)
// 004bcb51: PUSH EAX
// 004bcb52: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 004bcb57: ADD ESP,0x8
// 004bcb5a: MOV EAX,EBX
// 004bcb5c: ADD ESP,0x430
// 004bcb62: POP EBP
// 004bcb63: POP EBX
// 004bcb64: RET
