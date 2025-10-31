// Name: engine_pod.cpp_CPod_cleanup_FUN_00550c80
// Address: 00550c80
// Address Range: [[00550c80, 00550cdf]]
// Convention: __cdecl
// Signature: void engine_pod.cpp_CPod_cleanup_FUN_00550c80(CPod * this_ptr)
// Cross-references:
//   core_main.c_finalizeGameSystems_FUN_00508570 (00508570) at 00508819 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bb52c [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004baeb9 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 (004b6e10) at 004b71ce [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodMounts_FUN_004bcec0 (004bcec0) at 004bd147 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b6b68 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_undoCheckout_FUN_004bc2b0 (004bc2b0) at 004bc3f4 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_remountAllPods_FUN_004b5350 (004b5350) at 004b5376 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_dtor_FUN_005509b0 (005509b0) at 005509c7 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_pod_cpp_00640776
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
// Function calls:
//   engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_cleanup_FUN_00550c80(CPod *this_ptr)

{
  CPodFile *ptr;
  CPod *pCVar1;
  int iVar2;
  
  iVar2 = 0;
  pCVar1 = this_ptr;
  if (0 < this_ptr->pod_file_count) {
    do {
      g_CurrentDebugLine = 0x3f8;
      g_CurrentDebugFilename = "..\\engine\\pod.cpp";
      if (pCVar1->pod_files[0] != (CPodFile *)0x0) {
        ptr = engine_pod_cpp_CPodFile_dtor_FUN_0054f610(pCVar1->pod_files[0]);
        shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
      }
      pCVar1->pod_files[0] = (CPodFile *)0x0;
      iVar2 = iVar2 + 1;
      pCVar1 = (CPod *)pCVar1->pod_files;
    } while (iVar2 < this_ptr->pod_file_count);
  }
  this_ptr->pod_file_count = 0;
  return;
}


// Assembly code:
// 00550c80: PUSH EBX
//   Label: engine_pod.cpp_CPod_cleanup_FUN_00550c80
// 00550c81: PUSH ESI
// 00550c82: PUSH EDI
// 00550c83: PUSH EBP
// 00550c84: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00550c88: MOV EDX,dword ptr [EDI]
// 00550c8a: XOR ESI,ESI
// 00550c8c: TEST EDX,EDX
// 00550c8e: JLE 0x00550cbf
//   XREF to: 00550cbf (CONDITIONAL_JUMP)
// 00550c90: MOV EBP,0x640776
//   XREF to: 00640776 (DATA)
// 00550c95: MOV EBX,EDI
// 00550c97: MOV dword ptr [0x02f0d944],0x3f8
//   Label: LAB_00550c97
//   XREF to: 02f0d944 (WRITE)
// 00550ca1: MOV EAX,dword ptr [EBX + 0x4]
// 00550ca4: MOV dword ptr [0x0067d20c],EBP
//   XREF to: 0067d20c (WRITE)
// 00550caa: TEST EAX,EAX
// 00550cac: JNZ 0x00550cca
//   XREF to: 00550cca (CONDITIONAL_JUMP)
// 00550cae: MOV dword ptr [EBX + 0x4],0x0
//   Label: LAB_00550cae
// 00550cb5: INC ESI
// 00550cb6: MOV ECX,dword ptr [EDI]
// 00550cb8: ADD EBX,0x4
// 00550cbb: CMP ESI,ECX
// 00550cbd: JL 0x00550c97
//   XREF to: 00550c97 (CONDITIONAL_JUMP)
// 00550cbf: MOV dword ptr [EDI],0x0
//   Label: LAB_00550cbf
// 00550cc5: POP EBP
// 00550cc6: POP EDI
// 00550cc7: POP ESI
// 00550cc8: POP EBX
// 00550cc9: RET
// 00550cca: PUSH 0x0
//   Label: LAB_00550cca
// 00550ccc: PUSH EAX
// 00550ccd: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 00550cd2: ADD ESP,0x8
// 00550cd5: PUSH EAX
// 00550cd6: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00550cdb: ADD ESP,0x4
// 00550cde: JMP 0x00550cae
//   XREF to: 00550cae (UNCONDITIONAL_JUMP)
