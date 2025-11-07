// Name: shape_meshlod.cpp_CLodMesh_FUN_0051b330
// Address: 0051b330
// Address Range: [[0051b330, 0051b3d3]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_FUN_0051b330(CLodMesh * this_ptr)
// Cross-references:
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058d072 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_FUN_0051aa60 (0051aa60) at 0051ad12 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_FUN_0051adf0 (0051adf0) at 0051b066 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_FUN_0051b080 (0051b080) at 0051b27b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Computing_plane_equation_00637cce
//   double DOUBLE_00637ced = 0.000100000000000000
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_meshlod.cpp_CLodMesh_FUN_00516500
//   shape_meshlod.cpp_CLodMesh_FUN_00516a40
//   shape_meshlod.cpp_CLodMesh_FUN_00516b40
//   shape_meshlod.cpp_CLodMesh_FUN_005197c0
//   shape_meshlod.cpp_CLodMesh_FUN_0051a150
//   shape_meshlod.cpp_CLodMesh_FUN_0051b3e0
//   shape_meshlod.cpp_CLodMesh_FUN_0051b570

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_FUN_0051b330(CLodMesh *this_ptr)

{
  shape_meshlod_cpp_CLodMesh_FUN_00516500(this_ptr);
  shape_meshlod_cpp_CLodMesh_FUN_0051a150(this_ptr);
  shape_meshlod_cpp_CLodMesh_FUN_00516b40(this_ptr);
  shape_meshlod_cpp_CLodMesh_FUN_00516a40(this_ptr);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Computing plane equations...");
  shape_meshlod_cpp_CLodMesh_FUN_005197c0(this_ptr);
  shape_meshlod_cpp_CLodMesh_FUN_0051b570(this_ptr);
  shape_meshlod_cpp_CLodMesh_FUN_0051b3e0(this_ptr);
  return;
}


// Assembly code:
// 0051b330: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_FUN_0051b330
// 0051b331: SUB ESP,0x24
// 0051b334: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0051b338: MOV EAX,ESP
// 0051b33a: PUSH EAX
// 0051b33b: PUSH EBX
// 0051b33c: CALL shape_meshlod.cpp_CLodMesh_FUN_00516500
//   XREF to: 00516500 (UNCONDITIONAL_CALL)
// 0051b341: LEA EDX,[EAX + 0xc]
// 0051b344: FLD float ptr [EDX]
// 0051b346: FSUB float ptr [EAX]
// 0051b348: ADD ESP,0x8
// 0051b34b: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x10] (WRITE)
// 0051b34f: FLD float ptr [EDX + 0x4]
// 0051b352: FSUB float ptr [EAX + 0x4]
// 0051b355: FST float ptr [ESP + 0x1c]
//   XREF to: Stack[-0xc] (WRITE)
// 0051b359: FMUL float ptr [ESP + 0x1c]
//   XREF to: Stack[-0xc] (READ)
// 0051b35d: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x10] (READ)
// 0051b361: FMUL ST0
// 0051b363: FLD float ptr [EDX + 0x8]
// 0051b366: FSUB float ptr [EAX + 0x8]
// 0051b369: FXCH
// 0051b36b: FADDP ST2,ST0
// 0051b36d: FST float ptr [ESP + 0x20]
//   XREF to: Stack[-0x8] (WRITE)
// 0051b371: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[-0x8] (READ)
// 0051b375: FADDP
// 0051b377: FSQRT
// 0051b379: FMUL double ptr [0x00637ced]
//   XREF to: 00637ced (READ)
// 0051b37f: SUB ESP,0x4
// 0051b382: FSTP float ptr [ESP]
//   XREF to: Stack[-0x2c] (DATA)
// 0051b385: PUSH EBX
// 0051b386: CALL shape_meshlod.cpp_CLodMesh_FUN_0051a150
//   XREF to: 0051a150 (UNCONDITIONAL_CALL)
// 0051b38b: ADD ESP,0x8
// 0051b38e: PUSH EBX
// 0051b38f: CALL shape_meshlod.cpp_CLodMesh_FUN_00516b40
//   XREF to: 00516b40 (UNCONDITIONAL_CALL)
// 0051b394: ADD ESP,0x4
// 0051b397: PUSH EBX
// 0051b398: CALL shape_meshlod.cpp_CLodMesh_FUN_00516a40
//   XREF to: 00516a40 (UNCONDITIONAL_CALL)
// 0051b39d: ADD ESP,0x4
// 0051b3a0: PUSH 0x637cce
//   XREF to: 00637cce (DATA)
// 0051b3a5: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0051b3ab: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0051b3ac: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0051b3b1: ADD ESP,0x8
// 0051b3b4: PUSH EBX
// 0051b3b5: CALL shape_meshlod.cpp_CLodMesh_FUN_005197c0
//   XREF to: 005197c0 (UNCONDITIONAL_CALL)
// 0051b3ba: ADD ESP,0x4
// 0051b3bd: PUSH EBX
// 0051b3be: CALL shape_meshlod.cpp_CLodMesh_FUN_0051b570
//   XREF to: 0051b570 (UNCONDITIONAL_CALL)
// 0051b3c3: ADD ESP,0x4
// 0051b3c6: PUSH EBX
// 0051b3c7: CALL shape_meshlod.cpp_CLodMesh_FUN_0051b3e0
//   XREF to: 0051b3e0 (UNCONDITIONAL_CALL)
// 0051b3cc: ADD ESP,0x4
// 0051b3cf: ADD ESP,0x24
// 0051b3d2: POP EBX
// 0051b3d3: RET
