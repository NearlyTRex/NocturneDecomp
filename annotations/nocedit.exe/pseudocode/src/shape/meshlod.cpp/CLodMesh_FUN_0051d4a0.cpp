// Name: shape_meshlod.cpp_CLodMesh_FUN_0051d4a0
// Address: 0051d4a0
// Address Range: [[0051d4a0, 0051d51e]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_FUN_0051d4a0(CLodMesh * this_ptr)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_FUN_00516ba0 (00516ba0) at 00516ce4 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_meshlod_cpp_00638207
//   TerminatedCString s_shape_meshlod_cpp_0063821c
//   TerminatedCString s_out_of_memory_00638231
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_FUN_0051d4a0(CLodMesh *this_ptr)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 *in_stack_00000010;
  
  bVar4 = 0;
  iVar2 = this_ptr->lod_level_count + 1;
  this_ptr->lod_level_count = iVar2;
  pvVar1 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->lod_levels_ptr,iVar2 * 0xf0,"..\\shape\\meshlod.cpp",0x14a4);
  this_ptr->lod_levels_ptr = pvVar1;
  if (pvVar1 == (void *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x14a5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("out of memory");
  }
  puVar3 = (undefined4 *)((int)this_ptr->lod_levels_ptr + (this_ptr->lod_level_count + -1) * 0xf0);
  for (iVar2 = 0x3c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *in_stack_00000010;
    in_stack_00000010 = in_stack_00000010 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  return;
}


// Assembly code:
// 0051d4a0: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_FUN_0051d4a0
// 0051d4a1: PUSH ESI
// 0051d4a2: PUSH EDI
// 0051d4a3: PUSH EBP
// 0051d4a4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051d4a8: MOV EDX,dword ptr [EBX + 0x4c]
// 0051d4ab: INC EDX
// 0051d4ac: MOV dword ptr [EBX + 0x4c],EDX
// 0051d4af: SHL EDX,0x4
// 0051d4b2: MOV EAX,EDX
// 0051d4b4: PUSH 0x14a4
// 0051d4b9: SHL EAX,0x4
// 0051d4bc: PUSH 0x638207
//   XREF to: 00638207 (DATA)
// 0051d4c1: SUB EAX,EDX
// 0051d4c3: PUSH EAX
// 0051d4c4: MOV ECX,dword ptr [EBX + 0x50]
// 0051d4c7: PUSH ECX
// 0051d4c8: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 0051d4cd: ADD ESP,0x10
// 0051d4d0: MOV dword ptr [EBX + 0x50],EAX
// 0051d4d3: TEST EAX,EAX
// 0051d4d5: JZ 0x0051d4fa
//   XREF to: 0051d4fa (CONDITIONAL_JUMP)
// 0051d4d7: MOV EAX,dword ptr [EBX + 0x4c]
//   Label: LAB_0051d4d7
// 0051d4da: DEC EAX
// 0051d4db: SHL EAX,0x4
// 0051d4de: MOV ECX,0x3c
// 0051d4e3: MOV EDX,EAX
// 0051d4e5: SHL EAX,0x4
// 0051d4e8: MOV EDI,dword ptr [EBX + 0x50]
// 0051d4eb: SUB EAX,EDX
// 0051d4ed: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0051d4f1: ADD EDI,EAX
// 0051d4f3: MOVSD.REP ES:EDI,ESI
// 0051d4f5: POP EBP
// 0051d4f6: POP EDI
// 0051d4f7: POP ESI
// 0051d4f8: POP EBX
// 0051d4f9: RET
// 0051d4fa: MOV EDI,0x63821c
//   Label: LAB_0051d4fa
//   XREF to: 0063821c (DATA)
// 0051d4ff: MOV EBP,0x14a5
// 0051d504: PUSH 0x638231
//   XREF to: 00638231 (DATA)
// 0051d509: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0051d50f: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 0051d515: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0051d51a: ADD ESP,0x4
// 0051d51d: JMP 0x0051d4d7
//   XREF to: 0051d4d7 (UNCONDITIONAL_JUMP)
