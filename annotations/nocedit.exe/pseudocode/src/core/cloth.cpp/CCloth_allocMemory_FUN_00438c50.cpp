// Name: core_cloth.cpp_CCloth_allocMemory_FUN_00438c50
// Address: 00438c50
// Address Range: [[00438c50, 00438ca7]]
// Convention: __cdecl
// Signature: void core_cloth.cpp_CCloth_allocMemory_FUN_00438c50(CCloth * this_ptr)
// Cross-references:
//   core_cloth.cpp_CCloth_load_FUN_00438cf0 (00438cf0) at 00438f4a [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043dcc0 (0043dcc0) at 0043dd71 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_cloth_cpp_00618162
//   TerminatedCString s_core_cloth_cpp_00618174
//   TerminatedCString s_CCloth_allocMemory_Out_o_00618186
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_cloth.cpp_UnknownSomethingAndFreeMem_FUN_00438cb0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_allocMemory_FUN_00438c50(CCloth *this_ptr)

{
  void *pvVar1;
  
  core_cloth_cpp_UnknownSomethingAndFreeMem_FUN_00438cb0();
  pvVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     (*(int *)(this_ptr->padding_0x0 + 0x104) << 2,"..\\core\\cloth.cpp",0x76);
  *(void **)(this_ptr->padding_0x0 + 0x3fe3c) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\cloth.cpp";
  g_CurrentLineNumber = 0x77;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CCloth::allocMemory - Out of memory");
  return;
}


// Assembly code:
// 00438c50: PUSH EBX
//   Label: core_cloth.cpp_CCloth_allocMemory_FUN_00438c50
// 00438c51: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00438c55: PUSH EBX
// 00438c56: CALL core_cloth.cpp_UnknownSomethingAndFreeMem_FUN_00438cb0
//   XREF to: 00438cb0 (UNCONDITIONAL_CALL)
// 00438c5b: ADD ESP,0x4
// 00438c5e: PUSH 0x76
// 00438c60: MOV EAX,dword ptr [EBX + 0x104]
// 00438c66: PUSH 0x618162
//   XREF to: 00618162 (DATA)
// 00438c6b: SHL EAX,0x2
// 00438c6e: PUSH EAX
// 00438c6f: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 00438c74: ADD ESP,0xc
// 00438c77: MOV dword ptr [EBX + 0x3fe3c],EAX
// 00438c7d: TEST EAX,EAX
// 00438c7f: JZ 0x00438c83
//   XREF to: 00438c83 (CONDITIONAL_JUMP)
// 00438c81: POP EBX
// 00438c82: RET
// 00438c83: MOV ECX,0x618174
//   Label: LAB_00438c83
//   XREF to: 00618174 (PARAM)
// 00438c88: MOV EBX,0x77
// 00438c8d: PUSH 0x618186
//   XREF to: 00618186 (DATA)
// 00438c92: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00438c98: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00438c9e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00438ca3: ADD ESP,0x4
// 00438ca6: POP EBX
// 00438ca7: RET
