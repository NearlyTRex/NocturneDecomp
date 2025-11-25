// Name: shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0
// Address: 00515ac0
// Address Range: [[00515ac0, 00515b93]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0(CLodMesh * this_ptr, int vertex_count, int tri_count, int submesh_count)
// Cross-references:
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c552 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_copyFrom_FUN_0051a8c0 (0051a8c0) at 0051a8d9 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_importFromEditorGlobals_FUN_0051b080 (0051b080) at 0051b0f4 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_parseS3DFileVariant_FUN_0051adf0 (0051adf0) at 0051aef3 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_parseS3DFile_FUN_0051aa60 (0051aa60) at 0051ab96 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_meshlod_cpp_0063740a
//   TerminatedCString s_shape_meshlod_cpp_0063741f
//   TerminatedCString s_shape_meshlod_cpp_00637434
//   TerminatedCString s_shape_meshlod_cpp_00637449
//   TerminatedCString s_No_mem_0063745e
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugCalloc_FUN_0050f350
//   shape_meshlod.cpp_CLodMesh_free_FUN_00515970

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_allocate_FUN_00515ac0
          (CLodMesh *this_ptr,int vertex_count,int tri_count,int submesh_count)

{
  CLodVert *pCVar1;
  CLodFace *pCVar2;
  SLodSubmesh *pSVar3;
  int in_stack_00000014;
  
  shape_meshlod_cpp_CLodMesh_free_FUN_00515970(this_ptr);
  this_ptr->max_vertex_count = tri_count;
  this_ptr->vertex_count = tri_count;
  this_ptr->max_tri_count = submesh_count;
  this_ptr->tri_count = submesh_count;
  this_ptr->submesh_count = in_stack_00000014;
  pCVar1 = (CLodVert *)
           shape_memdbg_cpp_debugCalloc_FUN_0050f350
                     (this_ptr->max_vertex_count,0x4c4,"..\\shape\\meshlod.cpp",0x231);
  this_ptr->vertex_data = pCVar1;
  pCVar2 = (CLodFace *)
           shape_memdbg_cpp_debugCalloc_FUN_0050f350
                     (this_ptr->max_tri_count,0x8c,"..\\shape\\meshlod.cpp",0x232);
  this_ptr->tri_data = pCVar2;
  pSVar3 = (SLodSubmesh *)
           shape_memdbg_cpp_debugCalloc_FUN_0050f350
                     (this_ptr->submesh_count,0x48,"..\\shape\\meshlod.cpp",0x233);
  this_ptr->submesh_data = pSVar3;
  if ((((this_ptr->max_vertex_count < 1) || (this_ptr->vertex_data != (CLodVert *)0x0)) &&
      ((this_ptr->max_tri_count < 1 || (this_ptr->tri_data != (CLodFace *)0x0)))) &&
     ((this_ptr->submesh_count < 1 || (this_ptr->submesh_data != (SLodSubmesh *)0x0)))) {
    return;
  }
  g_CurrentFilename = "..\\shape\\meshlod.cpp";
  g_CurrentLineNumber = 0x23a;
  core_main_c_displayErrorAndQuit_FUN_00506f10("No mem!");
  return;
}


// Assembly code:
// 00515ac0: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0
// 00515ac1: PUSH ESI
// 00515ac2: PUSH EDI
// 00515ac3: PUSH EBP
// 00515ac4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00515ac8: PUSH EBX
// 00515ac9: CALL shape_meshlod.cpp_CLodMesh_free_FUN_00515970
//   XREF to: 00515970 (UNCONDITIONAL_CALL)
// 00515ace: ADD ESP,0x4
// 00515ad1: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00515ad5: MOV dword ptr [EBX + 0x3c],EAX
// 00515ad8: PUSH 0x231
// 00515add: MOV dword ptr [EBX],EAX
// 00515adf: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 00515ae3: PUSH 0x63740a
//   XREF to: 0063740a (DATA)
// 00515ae8: MOV dword ptr [EBX + 0x40],EAX
// 00515aeb: PUSH 0x4c4
// 00515af0: MOV EDX,dword ptr [EBX + 0x3c]
// 00515af3: MOV dword ptr [EBX + 0x8],EAX
// 00515af6: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x10] (READ)
// 00515afa: PUSH EDX
// 00515afb: MOV dword ptr [EBX + 0x10],EAX
// 00515afe: CALL shape_memdbg.cpp_debugCalloc_FUN_0050f350
//   XREF to: 0050f350 (UNCONDITIONAL_CALL)
// 00515b03: ADD ESP,0x10
// 00515b06: PUSH 0x232
// 00515b0b: PUSH 0x63741f
//   XREF to: 0063741f (DATA)
// 00515b10: PUSH 0x8c
// 00515b15: MOV ECX,dword ptr [EBX + 0x40]
// 00515b18: PUSH ECX
// 00515b19: MOV dword ptr [EBX + 0x4],EAX
// 00515b1c: CALL shape_memdbg.cpp_debugCalloc_FUN_0050f350
//   XREF to: 0050f350 (UNCONDITIONAL_CALL)
// 00515b21: ADD ESP,0x10
// 00515b24: PUSH 0x233
// 00515b29: PUSH 0x637434
//   XREF to: 00637434 (DATA)
// 00515b2e: PUSH 0x48
// 00515b30: MOV ESI,dword ptr [EBX + 0x10]
// 00515b33: PUSH ESI
// 00515b34: MOV dword ptr [EBX + 0xc],EAX
// 00515b37: CALL shape_memdbg.cpp_debugCalloc_FUN_0050f350
//   XREF to: 0050f350 (UNCONDITIONAL_CALL)
// 00515b3c: ADD ESP,0x10
// 00515b3f: MOV EDI,dword ptr [EBX + 0x3c]
// 00515b42: MOV dword ptr [EBX + 0x14],EAX
// 00515b45: TEST EDI,EDI
// 00515b47: JLE 0x00515b4f
//   XREF to: 00515b4f (CONDITIONAL_JUMP)
// 00515b49: CMP dword ptr [EBX + 0x4],0x0
// 00515b4d: JZ 0x00515b6c
//   XREF to: 00515b6c (CONDITIONAL_JUMP)
// 00515b4f: CMP dword ptr [EBX + 0x40],0x0
//   Label: LAB_00515b4f
// 00515b53: JLE 0x00515b5b
//   XREF to: 00515b5b (CONDITIONAL_JUMP)
// 00515b55: CMP dword ptr [EBX + 0xc],0x0
// 00515b59: JZ 0x00515b6c
//   XREF to: 00515b6c (CONDITIONAL_JUMP)
// 00515b5b: CMP dword ptr [EBX + 0x10],0x0
//   Label: LAB_00515b5b
// 00515b5f: JLE 0x00515b67
//   XREF to: 00515b67 (CONDITIONAL_JUMP)
// 00515b61: CMP dword ptr [EBX + 0x14],0x0
// 00515b65: JZ 0x00515b6c
//   XREF to: 00515b6c (CONDITIONAL_JUMP)
// 00515b67: POP EBP
//   Label: LAB_00515b67
// 00515b68: POP EDI
// 00515b69: POP ESI
// 00515b6a: POP EBX
// 00515b6b: RET
// 00515b6c: MOV EDI,0x637449
//   Label: LAB_00515b6c
//   XREF to: 00637449 (DATA)
// 00515b71: MOV EBP,0x23a
// 00515b76: PUSH 0x63745e
//   XREF to: 0063745e (DATA)
// 00515b7b: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 00515b81: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 00515b87: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00515b8c: ADD ESP,0x4
// 00515b8f: POP EBP
// 00515b90: POP EDI
// 00515b91: POP ESI
// 00515b92: POP EBX
// 00515b93: RET
