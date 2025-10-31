// Name: engine_palette.cpp_CPaletteManager_ctor_FUN_00544f10
// Address: 00544f10
// Address Range: [[00544f10, 00544f75]]
// Convention: __cdecl
// Signature: CPaletteManager * engine_palette.cpp_CPaletteManager_ctor_FUN_00544f10(CPaletteManager * this_ptr)
// Globals:
//   TerminatedCString s_engine_palette_cpp_0063e3ed
//   TerminatedCString s_engine_palette_cpp_0063e403
//   TerminatedCString s_The_very_same_person_who_0063e419
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0

#include "nocturne.h"

CPaletteManager * __cdecl
engine_palette_cpp_CPaletteManager_ctor_FUN_00544f10(CPaletteManager *this_ptr)

{
  void *pvVar1;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  this_ptr->field3_0xc = in_stack_00000008;
  this_ptr->field2_0x8 = in_stack_0000000c;
  pvVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     (in_stack_00000008 << 6,"..\\engine\\palette.cpp",0x2b);
  this_ptr->field1_0x4 = (int)pvVar1;
  if (pvVar1 != (void *)0x0) {
    this_ptr->field0_0x0 = 0;
    return this_ptr;
  }
  g_CurrentFilename = "..\\engine\\palette.cpp";
  g_CurrentLineNumber = 0x2c;
  core_main_c_displayErrorAndQuit_FUN_00506f10("The very same person who says not to allocate memory on a constructor did it here.");
  this_ptr->field0_0x0 = 0;
  return this_ptr;
}


// Assembly code:
// 00544f10: PUSH EBX
//   Label: engine_palette.cpp_CPaletteManager_ctor_FUN_00544f10
// 00544f11: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00544f15: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00544f19: PUSH 0x2b
// 00544f1b: MOV dword ptr [EBX + 0xc],EAX
// 00544f1e: PUSH 0x63e3ed
//   XREF to: 0063e3ed (DATA)
// 00544f23: SHL EAX,0x6
// 00544f26: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 00544f2a: PUSH EAX
// 00544f2b: MOV dword ptr [EBX + 0x8],EDX
// 00544f2e: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 00544f33: ADD ESP,0xc
// 00544f36: MOV dword ptr [EBX + 0x4],EAX
// 00544f39: TEST EAX,EAX
// 00544f3b: JZ 0x00544f47
//   XREF to: 00544f47 (CONDITIONAL_JUMP)
// 00544f3d: MOV EAX,EBX
// 00544f3f: MOV dword ptr [EBX],0x0
// 00544f45: POP EBX
// 00544f46: RET
// 00544f47: PUSH ESI
//   Label: LAB_00544f47
// 00544f48: MOV ECX,0x63e403
//   XREF to: 0063e403 (DATA)
// 00544f4d: MOV ESI,0x2c
// 00544f52: PUSH 0x63e419
//   XREF to: 0063e419 (DATA)
// 00544f57: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00544f5d: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00544f63: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00544f68: ADD ESP,0x4
// 00544f6b: POP ESI
// 00544f6c: MOV EAX,EBX
// 00544f6e: MOV dword ptr [EBX],0x0
// 00544f74: POP EBX
// 00544f75: RET
