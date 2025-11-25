// Name: shape_meshlod.cpp_CLodMesh_createNextLOD_FUN_00516f50
// Address: 00516f50
// Address Range: [[00516f50, 00516ff5]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_createNextLOD_FUN_00516f50(CLodMesh * this_ptr)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_00516d50 (00516d50) at 00516d9d [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_0051b8a0 (0051b8a0) at 0051b8ce [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_meshlod_cpp_00637675
//   TerminatedCString s_shape_meshlod_cpp_0063768a
//   TerminatedCString s_shape_meshlod_cpp_0063769f
//   TerminatedCString s_Out_of_memory_006376b4
//   char* g_CurrentDebugFilename = 0067d200
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   shape_memdbg.cpp_debugFree_FUN_0050f210
//   shape_meshlod.cpp_CLodMesh_copyFrom_FUN_0051a8c0
//   shape_meshlod.cpp_CLodMesh_ctor_FUN_00515840
//   shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_createNextLOD_FUN_00516f50(CLodMesh *this_ptr)

{
  CLodMesh *pCVar1;
  CLodMesh *in_stack_00000004;
  
  g_CurrentDebugLine = 0x55f;
  g_CurrentDebugFilename = "..\\shape\\meshlod.cpp";
  if (in_stack_00000004->next_lod != (CLodMesh *)0x0) {
    pCVar1 = shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(in_stack_00000004->next_lod);
    shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
  }
  pCVar1 = (CLodMesh *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x74,"..\\shape\\meshlod.cpp",0x560);
  if (pCVar1 != (CLodMesh *)0x0) {
    pCVar1 = shape_meshlod_cpp_CLodMesh_ctor_FUN_00515840(pCVar1);
  }
  in_stack_00000004->next_lod = pCVar1;
  if (pCVar1 != (CLodMesh *)0x0) {
    shape_meshlod_cpp_CLodMesh_copyFrom_FUN_0051a8c0(in_stack_00000004->next_lod,in_stack_00000004);
    return;
  }
  g_CurrentFilename = "..\\shape\\meshlod.cpp";
  g_CurrentLineNumber = 0x561;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  shape_meshlod_cpp_CLodMesh_copyFrom_FUN_0051a8c0(in_stack_00000004->next_lod,in_stack_00000004);
  return;
}


// Assembly code:
// 00516f50: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_createNextLOD_FUN_00516f50
// 00516f51: PUSH EBP
// 00516f52: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00516f56: MOV ECX,0x55f
// 00516f5b: MOV EDX,0x637675
//   XREF to: 00637675 (DATA)
// 00516f60: MOV EAX,dword ptr [EBX + 0x34]
// 00516f63: MOV dword ptr [0x02f0d944],ECX
//   XREF to: 02f0d944 (WRITE)
// 00516f69: MOV dword ptr [0x0067d20c],EDX
//   XREF to: 0067d20c (WRITE)
// 00516f6f: TEST EAX,EAX
// 00516f71: JNZ 0x00516fab
//   XREF to: 00516fab (CONDITIONAL_JUMP)
// 00516f73: PUSH 0x560
//   Label: LAB_00516f73
// 00516f78: PUSH 0x63768a
//   XREF to: 0063768a (DATA)
// 00516f7d: PUSH 0x74
// 00516f7f: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 00516f84: ADD ESP,0xc
// 00516f87: TEST EAX,EAX
// 00516f89: JZ 0x00516f94
//   XREF to: 00516f94 (CONDITIONAL_JUMP)
// 00516f8b: PUSH EAX
// 00516f8c: CALL shape_meshlod.cpp_CLodMesh_ctor_FUN_00515840
//   XREF to: 00515840 (UNCONDITIONAL_CALL)
// 00516f91: ADD ESP,0x4
// 00516f94: MOV dword ptr [EBX + 0x34],EAX
//   Label: LAB_00516f94
// 00516f97: TEST EAX,EAX
// 00516f99: JZ 0x00516fc1
//   XREF to: 00516fc1 (CONDITIONAL_JUMP)
// 00516f9b: PUSH EBX
// 00516f9c: MOV EAX,dword ptr [EBX + 0x34]
// 00516f9f: PUSH EAX
// 00516fa0: CALL shape_meshlod.cpp_CLodMesh_copyFrom_FUN_0051a8c0
//   XREF to: 0051a8c0 (UNCONDITIONAL_CALL)
// 00516fa5: ADD ESP,0x8
// 00516fa8: POP EBP
// 00516fa9: POP EBX
// 00516faa: RET
// 00516fab: PUSH 0x0
//   Label: LAB_00516fab
// 00516fad: PUSH EAX
// 00516fae: CALL shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950
//   XREF to: 00515950 (UNCONDITIONAL_CALL)
// 00516fb3: ADD ESP,0x8
// 00516fb6: PUSH EAX
// 00516fb7: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00516fbc: ADD ESP,0x4
// 00516fbf: JMP 0x00516f73
//   XREF to: 00516f73 (UNCONDITIONAL_JUMP)
// 00516fc1: PUSH EDI
//   Label: LAB_00516fc1
// 00516fc2: MOV EDI,0x63769f
//   XREF to: 0063769f (DATA)
// 00516fc7: MOV EBP,0x561
// 00516fcc: PUSH 0x6376b4
//   XREF to: 006376b4 (DATA)
// 00516fd1: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 00516fd7: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 00516fdd: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00516fe2: ADD ESP,0x4
// 00516fe5: POP EDI
// 00516fe6: PUSH EBX
// 00516fe7: MOV EAX,dword ptr [EBX + 0x34]
// 00516fea: PUSH EAX
// 00516feb: CALL shape_meshlod.cpp_CLodMesh_copyFrom_FUN_0051a8c0
//   XREF to: 0051a8c0 (UNCONDITIONAL_CALL)
// 00516ff0: ADD ESP,0x8
// 00516ff3: POP EBP
// 00516ff4: POP EBX
// 00516ff5: RET
