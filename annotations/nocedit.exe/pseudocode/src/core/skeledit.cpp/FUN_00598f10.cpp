// Name: core_skeledit.cpp_FUN_00598f10
// Address: 00598f10
// Address Range: [[00598f10, 00598fbb]]
// Convention: __cdecl
// Signature: void core_skeledit.cpp_FUN_00598f10(void)
// Globals:
//   TerminatedCString s_core_skeledit_cpp_0064e0d2
//   TerminatedCString s_core_skeledit_cpp_0064e0e7
//   TerminatedCString s_viewModel_out_of_memory_0064e0fc
//   TerminatedCString s_core_skeledit_cpp_0064e117
//   char* g_CurrentDebugFilename = 0067d200
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0
//   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
//   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
//   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void __cdecl core_skeledit_cpp_FUN_00598f10(void)

{
  CDeformableModelInstance *this_ptr;
  CDeformableModelInstance *in_stack_00000008;
  char *in_stack_00000014;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x20);
  this_ptr = (CDeformableModelInstance *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x22b4,"..\\core\\skeledit.cpp",0x1b79);
  if (this_ptr != (CDeformableModelInstance *)0x0) {
    this_ptr = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(this_ptr);
  }
  if (this_ptr == (CDeformableModelInstance *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x1b7a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("viewModel - out of memory!");
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(this_ptr,in_stack_00000014);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr);
  core_skeledit_cpp_CDeformableModelInstance_viewModel_FUN_005968b0(in_stack_00000008);
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0x1b7e;
  if (this_ptr == (CDeformableModelInstance *)0x0) {
    return;
  }
  (*((this_ptr->motion_controller).vtable)->dtor)(&this_ptr->motion_controller);
  return;
}


// Assembly code:
// 00598f10: PUSH 0x20
//   Label: core_skeledit.cpp_FUN_00598f10
// 00598f15: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 00598f1a: PUSH EBX
// 00598f1b: PUSH ESI
// 00598f1c: PUSH EDI
// 00598f1d: PUSH EBP
// 00598f1e: PUSH 0x1b79
// 00598f23: PUSH 0x64e0d2
//   XREF to: 0064e0d2 (DATA)
// 00598f28: PUSH 0x22b4
// 00598f2d: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00598f32: ADD ESP,0xc
// 00598f35: TEST EAX,EAX
// 00598f37: JNZ 0x00598fa1
//   XREF to: 00598fa1 (CONDITIONAL_JUMP)
// 00598f39: MOV EBX,EAX
//   Label: LAB_00598f39
// 00598f3b: TEST EAX,EAX
// 00598f3d: JNZ 0x00598f62
//   XREF to: 00598f62 (CONDITIONAL_JUMP)
// 00598f3f: MOV EDX,0x64e0e7
//   XREF to: 0064e0e7 (DATA)
// 00598f44: MOV ECX,0x1b7a
// 00598f49: PUSH 0x64e0fc
//   XREF to: 0064e0fc (DATA)
// 00598f4e: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00598f54: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00598f5a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00598f5f: ADD ESP,0x4
// 00598f62: MOV ESI,dword ptr [ESP + 0x14]
//   Label: LAB_00598f62
//   XREF to: Stack[0x4] (READ)
// 00598f66: PUSH ESI
// 00598f67: PUSH EBX
// 00598f68: CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 00598f6d: ADD ESP,0x8
// 00598f70: PUSH EBX
// 00598f71: CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 00598f76: ADD ESP,0x4
// 00598f79: PUSH EBX
// 00598f7a: MOV EDI,0x64e117
//   XREF to: 0064e117 (DATA)
// 00598f7f: MOV EBP,0x1b7e
// 00598f84: CALL core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0
//   XREF to: 005968b0 (UNCONDITIONAL_CALL)
// 00598f89: ADD ESP,0x4
// 00598f8c: MOV dword ptr [0x0067d20c],EDI
//   XREF to: 0067d20c (WRITE)
// 00598f92: MOV dword ptr [0x02f0d944],EBP
//   XREF to: 02f0d944 (WRITE)
// 00598f98: TEST EBX,EBX
// 00598f9a: JNZ 0x00598fac
//   XREF to: 00598fac (CONDITIONAL_JUMP)
// 00598f9c: POP EBP
// 00598f9d: POP EDI
// 00598f9e: POP ESI
// 00598f9f: POP EBX
// 00598fa0: RET
// 00598fa1: PUSH EAX
//   Label: LAB_00598fa1
// 00598fa2: CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
//   XREF to: 0059ddc0 (UNCONDITIONAL_CALL)
// 00598fa7: ADD ESP,0x4
// 00598faa: JMP 0x00598f39
//   XREF to: 00598f39 (UNCONDITIONAL_JUMP)
// 00598fac: PUSH 0x2
//   Label: LAB_00598fac
// 00598fae: MOV EAX,dword ptr [EBX + 0x50]
// 00598fb1: PUSH EBX
// 00598fb2: CALL dword ptr [EAX]
// 00598fb4: ADD ESP,0x8
// 00598fb7: POP EBP
// 00598fb8: POP EDI
// 00598fb9: POP ESI
// 00598fba: POP EBX
// 00598fbb: RET
