// Name: shape_meshlod.cpp_CLodMesh_FUN_00519710
// Address: 00519710
// Address Range: [[00519710, 005197b6]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_FUN_00519710(CLodMesh * this_ptr)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_FUN_00516d50 (00516d50) at 00516de0 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0 (0051cdf0) at 0051d0c9 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Computing_initial_edge_c_006379ed
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   shape_meshlod.cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000
//   shape_meshlod.cpp_CLodMesh_FUN_00518910

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_FUN_00519710(CLodMesh *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < this_ptr->edge_count) {
    do {
      shape_meshlod_cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000(this_ptr,iVar2,1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < this_ptr->edge_count);
  }
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
            (g_CEditorToolsPtr,"Computing initial edge collapse costs...");
  iVar2 = 0;
  if (0 < this_ptr->edge_count) {
    do {
      shape_meshlod_cpp_CLodMesh_FUN_00518910(this_ptr);
      iVar1 = iVar2 + 1;
      iVar2 = iVar2 + 1;
      shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                (g_CEditorToolsPtr,(float)iVar1,(float)this_ptr->edge_count);
    } while (iVar2 < this_ptr->edge_count);
  }
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  return;
}


// Assembly code:
// 00519710: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_FUN_00519710
// 00519711: PUSH ESI
// 00519712: PUSH EDI
// 00519713: PUSH EBP
// 00519714: SUB ESP,0x4
// 00519717: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0051971b: PUSH EBX
// 0051971c: XOR ESI,ESI
// 0051971e: MOV EDX,dword ptr [EBX + 0x44]
// 00519721: ADD ESP,0x4
// 00519724: TEST EDX,EDX
// 00519726: JLE 0x00519740
//   XREF to: 00519740 (CONDITIONAL_JUMP)
// 00519728: PUSH 0x1
//   Label: LAB_00519728
// 0051972a: PUSH ESI
// 0051972b: PUSH EBX
// 0051972c: CALL shape_meshlod.cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000
//   XREF to: 00516000 (UNCONDITIONAL_CALL)
// 00519731: INC ESI
// 00519732: MOV ECX,dword ptr [EBX + 0x44]
// 00519735: ADD ESP,0xc
// 00519738: CMP ESI,ECX
// 0051973a: JL 0x00519728
//   XREF to: 00519728 (CONDITIONAL_JUMP)
// 0051973c: LEA EAX,[EAX]
// 00519740: PUSH 0x6379ed
//   Label: LAB_00519740
//   XREF to: 006379ed (DATA)
// 00519745: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0051974b: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0051974c: CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   XREF to: 004a0430 (UNCONDITIONAL_CALL)
// 00519751: ADD ESP,0x8
// 00519754: MOV EDI,dword ptr [EBX + 0x44]
// 00519757: XOR ESI,ESI
// 00519759: TEST EDI,EDI
// 0051975b: JLE 0x005197a0
//   XREF to: 005197a0 (CONDITIONAL_JUMP)
// 0051975d: PUSH ESI
//   Label: LAB_0051975d
// 0051975e: PUSH EBX
// 0051975f: CALL shape_meshlod.cpp_CLodMesh_FUN_00518910
//   XREF to: 00518910 (UNCONDITIONAL_CALL)
// 00519764: FILD dword ptr [EBX + 0x44]
// 00519767: ADD ESP,0x8
// 0051976a: LEA EAX,[ESI + 0x1]
// 0051976d: SUB ESP,0x4
// 00519770: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00519774: FSTP float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00519777: FILD dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 0051977b: SUB ESP,0x4
// 0051977e: MOV EBP,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00519784: FSTP float ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00519787: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 00519788: INC ESI
// 00519789: CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   XREF to: 004a0530 (UNCONDITIONAL_CALL)
// 0051978e: MOV EAX,dword ptr [EBX + 0x44]
// 00519791: ADD ESP,0xc
// 00519794: CMP ESI,EAX
// 00519796: JL 0x0051975d
//   XREF to: 0051975d (CONDITIONAL_JUMP)
// 00519798: LEA EAX,[EAX]
// 0051979e: MOV EDX,EDX
// 005197a0: MOV EDX,dword ptr [0x00678a60]
//   Label: LAB_005197a0
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005197a6: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 005197a7: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 005197ac: ADD ESP,0x4
// 005197af: ADD ESP,0x4
// 005197b2: POP EBP
// 005197b3: POP EDI
// 005197b4: POP ESI
// 005197b5: POP EBX
// 005197b6: RET
