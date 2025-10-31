// Name: engine_pod.cpp_CPodFile_cleanup_FUN_00550090
// Address: 00550090
// Address Range: [[00550090, 0055013b]]
// Convention: __cdecl
// Signature: void engine_pod.cpp_CPodFile_cleanup_FUN_00550090(CPodFile * this_ptr)
// Cross-references:
//   engine_pod.cpp_CPodFile_dtor_FUN_0054f610 (0054f610) at 0054f616 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 (0054f650) at 0054f66b [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_computeAndStoreCRC_FUN_00551000 (00551000) at 00551075 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_pod_cpp_00640339
//   TerminatedCString s_engine_pod_cpp_0064034b
// Function calls:
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPodFile_cleanup_FUN_00550090(CPodFile *this_ptr)

{
  this_ptr->file_count = 0;
  if (this_ptr->directory_entries != (CPodDirectoryEntry *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->directory_entries,"..\\engine\\pod.cpp",0x268);
    this_ptr->directory_entries = (CPodDirectoryEntry *)0x0;
  }
  this_ptr->dependency_count = 0;
  this_ptr->audit_count = 0;
  if (this_ptr->file_data_buffer != (char *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->file_data_buffer,"..\\engine\\pod.cpp",0x277);
    this_ptr->file_data_buffer = (char *)0x0;
  }
  this_ptr->pod_format_version = 0;
  this_ptr->description[0] = '\0';
  this_ptr->author_info[0] = '\0';
  this_ptr->copyright_info[0] = '\0';
  this_ptr->mount_priority = 1000;
  this_ptr->format_flags = 1000;
  this_ptr->filename[0] = '\0';
  return;
}


// Assembly code:
// 00550090: PUSH EBX
//   Label: engine_pod.cpp_CPodFile_cleanup_FUN_00550090
// 00550091: PUSH ESI
// 00550092: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00550096: MOV EDX,dword ptr [EBX + 0x414]
// 0055009c: MOV dword ptr [EBX + 0x410],0x0
// 005500a6: TEST EDX,EDX
// 005500a8: JNZ 0x005500fe
//   XREF to: 005500fe (CONDITIONAL_JUMP)
// 005500aa: MOV dword ptr [EBX + 0x424],0x0
//   Label: LAB_005500aa
// 005500b4: MOV ESI,dword ptr [EBX + 0x418]
// 005500ba: MOV dword ptr [EBX + 0x41c],0x0
// 005500c4: TEST ESI,ESI
// 005500c6: JNZ 0x0055011d
//   XREF to: 0055011d (CONDITIONAL_JUMP)
// 005500c8: MOV dword ptr [EBX],0x0
//   Label: LAB_005500c8
// 005500ce: MOV byte ptr [EBX + 0x108],0x0
// 005500d5: MOV byte ptr [EBX + 0x208],0x0
// 005500dc: MOV byte ptr [EBX + 0x308],0x0
// 005500e3: MOV dword ptr [EBX + 0x408],0x3e8
// 005500ed: MOV dword ptr [EBX + 0x40c],0x3e8
// 005500f7: MOV byte ptr [EBX + 0x4],0x0
// 005500fb: POP ESI
// 005500fc: POP EBX
// 005500fd: RET
// 005500fe: PUSH 0x268
//   Label: LAB_005500fe
// 00550103: PUSH 0x640339
//   XREF to: 00640339 (DATA)
// 00550108: PUSH EDX
// 00550109: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0055010e: ADD ESP,0xc
// 00550111: MOV dword ptr [EBX + 0x414],0x0
// 0055011b: JMP 0x005500aa
//   XREF to: 005500aa (UNCONDITIONAL_JUMP)
// 0055011d: PUSH 0x277
//   Label: LAB_0055011d
// 00550122: PUSH 0x64034b
//   XREF to: 0064034b (DATA)
// 00550127: PUSH ESI
// 00550128: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0055012d: ADD ESP,0xc
// 00550130: MOV dword ptr [EBX + 0x418],0x0
// 0055013a: JMP 0x005500c8
//   XREF to: 005500c8 (UNCONDITIONAL_JUMP)
