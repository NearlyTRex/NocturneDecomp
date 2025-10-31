// Name: engine_dosio.c_findFileNormally_FUN_004817c0
// Address: 004817c0
// Address Range: [[004817c0, 00481874]]
// Convention: __cdecl
// Signature: int engine_dosio.c_findFileNormally_FUN_004817c0(SFoundFileInfo * info)
// Cross-references:
//   core_fileman.cpp_preprocessMusicFiles_FUN_004bd750 (004bd750) at 004bd7cf [UNCONDITIONAL_CALL]
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 00507b6d [DATA]
//   engine_dosio.c_findFile_FUN_00481760 (00481760) at 004817a1 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b4292 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bafcc [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0 (004b82a0) at 004b83a2 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 (004b76d0) at 004b78b9 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 (004b6e10) at 004b6fc9 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b89a6 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b613b [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220 (004b3220) at 004b335e [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650 (004bc650) at 004bc783 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 (0054f650) at 0054f68d [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_dismount_FUN_00550b90 (00550b90) at 00550bc7 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_io.c_stat_thunk_00600c18
//   engine_dosio.c_getFullPath_FUN_004820c0

#include "nocturne.h"

int __cdecl engine_dosio_c_findFileNormally_FUN_004817c0(SFoundFileInfo *info)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  char acStack_144 [278];
  uint local_2e;
  uint uStack_26;
  
  if ((info != (SFoundFileInfo *)0x0) && (info->found_path[0] != '\0')) {
    iVar2 = engine_dosio_c_getFullPath_FUN_004820c0(&stack0xfffffeb4,info->found_path);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = crt_io_c_stat_thunk_00600c18(&stack0xfffffeb8,(stat *)(acStack_144 + 0xfc));
    if (iVar2 == 0) {
      info->file_size = local_2e;
      info->file_offset = 0;
      pcVar3 = acStack_144;
      info->timestamp = uStack_26;
      pcVar4 = info->target_path;
      info->container_size = uStack_26;
      do {
        cVar1 = *pcVar3;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      info->is_archive = 0;
      return 1;
    }
  }
  return 0;
}


// Assembly code:
// 004817c0: PUSH EBX
//   Label: engine_dosio.c_findFileNormally_FUN_004817c0
// 004817c1: SUB ESP,0x148
// 004817c7: MOV EBX,dword ptr [ESP + 0x150]
//   XREF to: Stack[0x4] (READ)
// 004817ce: TEST EBX,EBX
// 004817d0: JZ 0x004817d7
//   XREF to: 004817d7 (CONDITIONAL_JUMP)
// 004817d2: CMP byte ptr [EBX],0x0
// 004817d5: JNZ 0x004817e1
//   XREF to: 004817e1 (CONDITIONAL_JUMP)
// 004817d7: XOR EAX,EAX
//   Label: LAB_004817d7
// 004817d9: ADD ESP,0x148
//   Label: LAB_004817d9
// 004817df: POP EBX
// 004817e0: RET
// 004817e1: PUSH EBX
//   Label: LAB_004817e1
// 004817e2: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x14c] (DATA)
// 004817e6: PUSH EAX
// 004817e7: CALL engine_dosio.c_getFullPath_FUN_004820c0
//   XREF to: 004820c0 (UNCONDITIONAL_CALL)
// 004817ec: ADD ESP,0x8
// 004817ef: TEST EAX,EAX
// 004817f1: JZ 0x004817d9
//   XREF to: 004817d9 (CONDITIONAL_JUMP)
// 004817f3: LEA EAX,[ESP + 0x100]
//   XREF to: Stack[-0x4c] (DATA)
// 004817fa: PUSH EAX
// 004817fb: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x14c] (DATA)
// 004817ff: PUSH EAX
// 00481800: CALL crt_io.c_stat_thunk_00600c18
//   XREF to: 00600c18 (UNCONDITIONAL_CALL)
// 00481805: ADD ESP,0x8
// 00481808: TEST EAX,EAX
// 0048180a: JNZ 0x004817d7
//   XREF to: 004817d7 (CONDITIONAL_JUMP)
// 0048180c: PUSH EDI
// 0048180d: PUSH ESI
// 0048180e: MOV EAX,dword ptr [ESP + 0x11e]
//   XREF to: Stack[-0x36] (READ)
// 00481815: MOV dword ptr [EBX + 0x204],EAX
// 0048181b: MOV EAX,dword ptr [ESP + 0x126]
//   XREF to: Stack[-0x2e] (READ)
// 00481822: MOV dword ptr [EBX + 0x200],0x0
// 0048182c: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x14c] (DATA)
// 00481830: MOV dword ptr [EBX + 0x20c],EAX
// 00481836: LEA EDI,[EBX + 0x100]
// 0048183c: MOV dword ptr [EBX + 0x210],EAX
// 00481842: PUSH EDI
// 00481843: MOV AL,byte ptr [ESI]
//   Label: LAB_00481843
//   XREF to: Stack[-0x14c] (DATA)
// 00481845: MOV byte ptr [EDI],AL
// 00481847: CMP AL,0x0
// 00481849: JZ 0x0048185b
//   XREF to: 0048185b (CONDITIONAL_JUMP)
// 0048184b: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x14b] (READ)
// 0048184e: ADD ESI,0x2
// 00481851: MOV byte ptr [EDI + 0x1],AL
// 00481854: ADD EDI,0x2
// 00481857: CMP AL,0x0
// 00481859: JNZ 0x00481843
//   XREF to: 00481843 (CONDITIONAL_JUMP)
// 0048185b: POP EDI
//   Label: LAB_0048185b
// 0048185c: MOV EAX,0x1
// 00481861: MOV dword ptr [EBX + 0x208],0x0
// 0048186b: POP ESI
// 0048186c: POP EDI
// 0048186d: ADD ESP,0x148
// 00481873: POP EBX
// 00481874: RET
