// Name: engine_pod.cpp_CPod_mount_FUN_00550a10
// Address: 00550a10
// Address Range: [[00550a10, 00550aea]]
// Convention: __cdecl
// Signature: void engine_pod.cpp_CPod_mount_FUN_00550a10(CPod * this_ptr, char * pod_filename)
// Globals:
//   TerminatedCString s_engine_pod_cpp_0064069f
//   TerminatedCString s_Too_many_POD_files_at_on_006406b1
//   TerminatedCString s_engine_pod_cpp_006406ce
//   TerminatedCString s_engine_pod_cpp_006406e0
//   TerminatedCString s_Out_of_memory_006406f2
//   TerminatedCString s_engine_pod_cpp_00640701
//   TerminatedCString s_Can_t_mount_s_00640713
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
//   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_mount_FUN_00550a10(CPod *this_ptr,char *pod_filename)

{
  CPodFile *this_ptr_00;
  int iVar1;
  char *in_stack_00000014;
  undefined4 in_stack_00000018;
  
  if (99 < this_ptr->pod_file_count) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 0x39a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many .POD files at once!");
  }
  this_ptr_00 = (CPodFile *)
                shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x42c,"..\\engine\\pod.cpp",0x39f);
  if (this_ptr_00 != (CPodFile *)0x0) {
    this_ptr_00 = engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0(this_ptr_00);
  }
  this_ptr->pod_files[this_ptr->pod_file_count] = this_ptr_00;
  if (this_ptr->pod_files[this_ptr->pod_file_count] == (CPodFile *)0x0) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 0x3a0;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  iVar1 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650
                    (this_ptr->pod_files[this_ptr->pod_file_count],in_stack_00000014);
  if (iVar1 != 0) {
    this_ptr->pod_file_count = this_ptr->pod_file_count + 1;
    return;
  }
  g_CurrentFilename = "..\\engine\\pod.cpp";
  g_CurrentLineNumber = 0x3a1;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Can't mount %s",in_stack_00000018);
  this_ptr->pod_file_count = this_ptr->pod_file_count + 1;
  return;
}


// Assembly code:
// 00550a10: PUSH EBX
//   Label: engine_pod.cpp_CPod_mount_FUN_00550a10
// 00550a11: PUSH ESI
// 00550a12: PUSH EBP
// 00550a13: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00550a17: CMP dword ptr [EBX],0x64
// 00550a1a: JGE 0x00550a93
//   XREF to: 00550a93 (CONDITIONAL_JUMP)
// 00550a20: PUSH 0x39f
//   Label: LAB_00550a20
// 00550a25: PUSH 0x6406ce
//   XREF to: 006406ce (DATA)
// 00550a2a: PUSH 0x42c
// 00550a2f: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00550a34: ADD ESP,0xc
// 00550a37: TEST EAX,EAX
// 00550a39: JZ 0x00550a44
//   XREF to: 00550a44 (CONDITIONAL_JUMP)
// 00550a3b: PUSH EAX
// 00550a3c: CALL engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
//   XREF to: 0054f5a0 (UNCONDITIONAL_CALL)
// 00550a41: ADD ESP,0x4
// 00550a44: MOV EDX,dword ptr [EBX]
//   Label: LAB_00550a44
// 00550a46: MOV dword ptr [EBX + EDX*0x4 + 0x4],EAX
// 00550a4a: MOV EAX,dword ptr [EBX]
// 00550a4c: CMP dword ptr [EBX + EAX*0x4 + 0x4],0x0
// 00550a51: JNZ 0x00550a75
//   XREF to: 00550a75 (CONDITIONAL_JUMP)
// 00550a53: MOV EBP,0x6406e0
//   XREF to: 006406e0 (DATA)
// 00550a58: MOV EAX,0x3a0
// 00550a5d: PUSH 0x6406f2
//   XREF to: 006406f2 (DATA)
// 00550a62: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00550a68: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00550a6d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00550a72: ADD ESP,0x4
// 00550a75: MOV EDX,dword ptr [ESP + 0x14]
//   Label: LAB_00550a75
//   XREF to: Stack[0x8] (READ)
// 00550a79: MOV EAX,dword ptr [EBX]
// 00550a7b: PUSH EDX
// 00550a7c: MOV ECX,dword ptr [EBX + EAX*0x4 + 0x4]
// 00550a80: PUSH ECX
// 00550a81: CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
//   XREF to: 0054f650 (UNCONDITIONAL_CALL)
// 00550a86: ADD ESP,0x8
// 00550a89: TEST EAX,EAX
// 00550a8b: JZ 0x00550abb
//   XREF to: 00550abb (CONDITIONAL_JUMP)
// 00550a8d: INC dword ptr [EBX]
// 00550a8f: POP EBP
// 00550a90: POP ESI
// 00550a91: POP EBX
// 00550a92: RET
// 00550a93: MOV ECX,0x64069f
//   Label: LAB_00550a93
//   XREF to: 0064069f (PARAM)
// 00550a98: MOV ESI,0x39a
// 00550a9d: PUSH 0x6406b1
//   XREF to: 006406b1 (DATA)
// 00550aa2: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00550aa8: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00550aae: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00550ab3: ADD ESP,0x4
// 00550ab6: JMP 0x00550a20
//   XREF to: 00550a20 (UNCONDITIONAL_JUMP)
// 00550abb: PUSH EDI
//   Label: LAB_00550abb
// 00550abc: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00550ac0: PUSH EBP
// 00550ac1: MOV ESI,0x640701
//   XREF to: 00640701 (DATA)
// 00550ac6: MOV EDI,0x3a1
// 00550acb: PUSH 0x640713
//   XREF to: 00640713 (DATA)
// 00550ad0: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00550ad6: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00550adc: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00550ae1: ADD ESP,0x8
// 00550ae4: POP EDI
// 00550ae5: INC dword ptr [EBX]
// 00550ae7: POP EBP
// 00550ae8: POP ESI
// 00550ae9: POP EBX
// 00550aea: RET
