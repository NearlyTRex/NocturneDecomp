// Name: shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920
// Address: 0051b920
// Address Range: [[0051b920, 0051bab5]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920(CLodMesh * this_ptr)
// Cross-references:
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058d366 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 (0051d990) at 0051dd4a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_meshlod_cpp_00637d58
//   TerminatedCString s_Can_t_call_LodMesh_getLO_00637d6d
//   double DOUBLE_00637db5 = 0.000100000000000000
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_LodReplayMode
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0
//   shape_meshlod.cpp_CLodMesh_collapseEdge_FUN_00517630
//   shape_meshlod.cpp_CLodMesh_compactFaces_FUN_0051b570
//   shape_meshlod.cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500
//   shape_meshlod.cpp_CLodMesh_copyFrom_FUN_0051a8c0
//   shape_meshlod.cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0
//   shape_meshlod.cpp_CLodMesh_markDegenerateFaces_FUN_00516b40
//   shape_meshlod.cpp_CLodMesh_markDuplicateFaces_FUN_00516a40
//   shape_meshlod.cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0
//   shape_meshlod.cpp_CLodMesh_scaleVertices_FUN_005165c0
//   shape_meshlod.cpp_CLodMesh_translateVertices_FUN_00516570
//   shape_meshlod.cpp_CLodMesh_weldVertices_FUN_0051a150

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_getLOD_FUN_0051b920(CLodMesh *this_ptr)

{
  CLodEdge *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  CLodMesh *pCVar7;
  CLodMesh *this_ptr_00;
  int iVar8;
  CBoundingBox3D *pCVar9;
  int unaff_EBX;
  int iVar10;
  BADSPACEBASE *in_ESP;
  int iVar11;
  float fStack00000008;
  CLodMesh *in_stack_0000000c;
  float fStack00000010;
  float fStack00000014;
  float in_stack_00000018;
  
  this_ptr_00 = in_stack_0000000c;
  pCVar7 = this_ptr;
  if ((this_ptr->next_lod == (CLodMesh *)0x0) || (this_ptr->lod_level_count < 1)) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0x1279;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't call LodMesh::getLOD until after simplify() has been called!");
  }
  shape_meshlod_cpp_CLodMesh_copyFrom_FUN_0051a8c0(in_stack_0000000c,pCVar7->next_lod);
  iVar11 = 0;
  iVar10 = 0;
  shape_meshlod_cpp_CLodMesh_buildEdges_FUN_00515ba0(in_stack_0000000c);
  g_LodReplayMode = 1;
  while( true ) {
    iVar8 = shape_meshlod_cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0(in_stack_0000000c);
    if ((iVar8 <= (int)in_stack_00000018) || (pCVar7->lod_level_count <= iVar11)) break;
    pCVar1 = pCVar7->lod_levels_ptr;
    iVar8 = iVar10 + -0x24;
    iVar5 = iVar10 + -0x18;
    iVar6 = iVar10 + -0x28;
    iVar10 = iVar10 + 0xf0;
    iVar11 = iVar11 + 1;
    shape_meshlod_cpp_CLodMesh_collapseEdge_FUN_00517630
              (in_stack_0000000c,*(int *)((int)pCVar1->adjacent_tri_indices + iVar6),
               *(int *)((int)pCVar1->adjacent_tri_indices + iVar8),
               *(float *)((int)pCVar1->adjacent_tri_indices + iVar5));
  }
  g_LodReplayMode = unaff_EBX;
  shape_meshlod_cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0(in_stack_0000000c);
  shape_meshlod_cpp_CLodMesh_markDuplicateFaces_FUN_00516a40(in_stack_0000000c);
  shape_meshlod_cpp_CLodMesh_markDegenerateFaces_FUN_00516b40(in_stack_0000000c);
  pCVar9 = shape_meshlod_cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500
                     (in_stack_0000000c,(CBoundingBox3D *)&stack0xffffffc8);
  fVar2 = (pCVar9->max).x - (pCVar9->min).x;
  fVar3 = (pCVar9->max).y - (pCVar9->min).y;
  fVar4 = (pCVar9->max).z - (pCVar9->min).z;
  shape_meshlod_cpp_CLodMesh_weldVertices_FUN_0051a150
            (in_stack_0000000c,
             SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3) * (float)DOUBLE_00637db5);
  shape_meshlod_cpp_CLodMesh_markDegenerateFaces_FUN_00516b40(in_stack_0000000c);
  shape_meshlod_cpp_CLodMesh_compactFaces_FUN_0051b570(in_stack_0000000c);
  shape_meshlod_cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0(in_stack_0000000c);
  in_stack_0000000c = (CLodMesh *)(1.0 / pCVar7->scale_factor);
  fStack00000010 = (float)in_stack_0000000c;
  fStack00000014 = (float)in_stack_0000000c;
  in_stack_00000018 = (float)in_stack_0000000c;
  shape_meshlod_cpp_CLodMesh_scaleVertices_FUN_005165c0(this_ptr_00,(CVector3f *)&stack0x0000000c);
  this_ptr = (CLodMesh *)-(pCVar7->center_offset).x;
  fStack00000008 = -(pCVar7->center_offset).y;
  in_stack_0000000c = (CLodMesh *)-(pCVar7->center_offset).z;
  shape_meshlod_cpp_CLodMesh_translateVertices_FUN_00516570(this_ptr_00,(CVector3f *)&this_ptr);
  return;
}


// Assembly code:
// 0051b920: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_getLOD_FUN_0051b920
// 0051b921: PUSH ESI
// 0051b922: PUSH EDI
// 0051b923: PUSH EBP
// 0051b924: SUB ESP,0x44
// 0051b927: MOV EBP,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 0051b92b: MOV EDI,dword ptr [ESP + 0x60]
//   XREF to: Stack[0xc] (READ)
// 0051b92f: CMP dword ptr [EBP + 0x34],0x0
// 0051b933: JZ 0x0051b99f
//   XREF to: 0051b99f (CONDITIONAL_JUMP)
// 0051b935: CMP dword ptr [EBP + 0x4c],0x1
// 0051b939: JL 0x0051b99f
//   XREF to: 0051b99f (CONDITIONAL_JUMP)
// 0051b93b: MOV EAX,dword ptr [EBP + 0x34]
//   Label: LAB_0051b93b
// 0051b93e: PUSH EAX
// 0051b93f: PUSH EDI
// 0051b940: CALL shape_meshlod.cpp_CLodMesh_copyFrom_FUN_0051a8c0
//   XREF to: 0051a8c0 (UNCONDITIONAL_CALL)
// 0051b945: ADD ESP,0x8
// 0051b948: PUSH EDI
// 0051b949: XOR ESI,ESI
// 0051b94b: XOR EBX,EBX
// 0051b94d: CALL shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0
//   XREF to: 00515ba0 (UNCONDITIONAL_CALL)
// 0051b952: MOV EAX,[0x02f33330]
//   XREF to: 02f33330 (READ)
// 0051b957: ADD ESP,0x4
// 0051b95a: MOV EDX,0x1
// 0051b95f: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0051b963: MOV dword ptr [0x02f33330],EDX
//   XREF to: 02f33330 (WRITE)
// 0051b969: PUSH EDI
//   Label: LAB_0051b969
// 0051b96a: CALL shape_meshlod.cpp_CLodMesh_countUnprocessedFaces_FUN_005164d0
//   XREF to: 005164d0 (UNCONDITIONAL_CALL)
// 0051b96f: ADD ESP,0x4
// 0051b972: CMP EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x8] (READ)
// 0051b976: JLE 0x0051b9c7
//   XREF to: 0051b9c7 (CONDITIONAL_JUMP)
// 0051b978: CMP ESI,dword ptr [EBP + 0x4c]
// 0051b97b: JGE 0x0051b9c7
//   XREF to: 0051b9c7 (CONDITIONAL_JUMP)
// 0051b97d: MOV EAX,dword ptr [EBP + 0x50]
// 0051b980: MOV EDX,dword ptr [EBX + EAX*0x1 + 0x4]
// 0051b984: PUSH dword ptr [EBX + EAX*0x1 + 0x10]
// 0051b988: PUSH EDX
// 0051b989: MOV ECX,dword ptr [EBX + EAX*0x1]
// 0051b98c: PUSH ECX
// 0051b98d: PUSH EDI
// 0051b98e: ADD EBX,0xf0
// 0051b994: INC ESI
// 0051b995: CALL shape_meshlod.cpp_CLodMesh_collapseEdge_FUN_00517630
//   XREF to: 00517630 (UNCONDITIONAL_CALL)
// 0051b99a: ADD ESP,0x10
// 0051b99d: JMP 0x0051b969
//   XREF to: 0051b969 (UNCONDITIONAL_JUMP)
// 0051b99f: MOV EBX,0x637d58
//   Label: LAB_0051b99f
//   XREF to: 00637d58 (PARAM)
// 0051b9a4: MOV ESI,0x1279
// 0051b9a9: PUSH 0x637d6d
//   XREF to: 00637d6d (DATA)
// 0051b9ae: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0051b9b4: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0051b9ba: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0051b9bf: ADD ESP,0x4
// 0051b9c2: JMP 0x0051b93b
//   XREF to: 0051b93b (UNCONDITIONAL_JUMP)
// 0051b9c7: MOV EAX,dword ptr [ESP + 0x40]
//   Label: LAB_0051b9c7
//   XREF to: Stack[-0x14] (READ)
// 0051b9cb: PUSH EDI
// 0051b9cc: MOV [0x02f33330],EAX
//   XREF to: 02f33330 (WRITE)
// 0051b9d1: CALL shape_meshlod.cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0
//   XREF to: 0051b3e0 (UNCONDITIONAL_CALL)
// 0051b9d6: ADD ESP,0x4
// 0051b9d9: PUSH EDI
// 0051b9da: CALL shape_meshlod.cpp_CLodMesh_markDuplicateFaces_FUN_00516a40
//   XREF to: 00516a40 (UNCONDITIONAL_CALL)
// 0051b9df: ADD ESP,0x4
// 0051b9e2: PUSH EDI
// 0051b9e3: CALL shape_meshlod.cpp_CLodMesh_markDegenerateFaces_FUN_00516b40
//   XREF to: 00516b40 (UNCONDITIONAL_CALL)
// 0051b9e8: ADD ESP,0x4
// 0051b9eb: MOV EAX,ESP
// 0051b9ed: PUSH EAX
// 0051b9ee: PUSH EDI
// 0051b9ef: CALL shape_meshlod.cpp_CLodMesh_computeVertexBoundingBox_FUN_00516500
//   XREF to: 00516500 (UNCONDITIONAL_CALL)
// 0051b9f4: LEA EBX,[EAX + 0xc]
// 0051b9f7: FLD float ptr [EBX]
// 0051b9f9: FSUB float ptr [EAX]
// 0051b9fb: ADD ESP,0x8
// 0051b9fe: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x3c] (WRITE)
// 0051ba02: FLD float ptr [EBX + 0x4]
// 0051ba05: FSUB float ptr [EAX + 0x4]
// 0051ba08: FST float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x38] (WRITE)
// 0051ba0c: FMUL float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x38] (READ)
// 0051ba10: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x3c] (READ)
// 0051ba14: FMUL ST0
// 0051ba16: FLD float ptr [EBX + 0x8]
// 0051ba19: FSUB float ptr [EAX + 0x8]
// 0051ba1c: FXCH
// 0051ba1e: FADDP ST2,ST0
// 0051ba20: FST float ptr [ESP + 0x20]
//   XREF to: Stack[-0x34] (WRITE)
// 0051ba24: FMUL float ptr [ESP + 0x20]
//   XREF to: Stack[-0x34] (READ)
// 0051ba28: FADDP
// 0051ba2a: FSQRT
// 0051ba2c: FMUL double ptr [0x00637db5]
//   XREF to: 00637db5 (READ)
// 0051ba32: SUB ESP,0x4
// 0051ba35: FSTP float ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0051ba38: PUSH EDI
// 0051ba39: CALL shape_meshlod.cpp_CLodMesh_weldVertices_FUN_0051a150
//   XREF to: 0051a150 (UNCONDITIONAL_CALL)
// 0051ba3e: ADD ESP,0x8
// 0051ba41: PUSH EDI
// 0051ba42: CALL shape_meshlod.cpp_CLodMesh_markDegenerateFaces_FUN_00516b40
//   XREF to: 00516b40 (UNCONDITIONAL_CALL)
// 0051ba47: ADD ESP,0x4
// 0051ba4a: PUSH EDI
// 0051ba4b: CALL shape_meshlod.cpp_CLodMesh_compactFaces_FUN_0051b570
//   XREF to: 0051b570 (UNCONDITIONAL_CALL)
// 0051ba50: ADD ESP,0x4
// 0051ba53: PUSH EDI
// 0051ba54: CALL shape_meshlod.cpp_CLodMesh_removeUnusedVertices_FUN_0051b3e0
//   XREF to: 0051b3e0 (UNCONDITIONAL_CALL)
// 0051ba59: FLD float ptr [EBP + 0x70]
// 0051ba5c: FLD1
// 0051ba5e: FDIVRP
// 0051ba60: ADD ESP,0x4
// 0051ba63: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x18] (WRITE)
// 0051ba67: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x18] (READ)
// 0051ba6b: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0051ba6f: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0051ba73: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0051ba77: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x24] (DATA)
// 0051ba7b: PUSH EAX
// 0051ba7c: PUSH EDI
// 0051ba7d: CALL shape_meshlod.cpp_CLodMesh_scaleVertices_FUN_005165c0
//   XREF to: 005165c0 (UNCONDITIONAL_CALL)
// 0051ba82: FLD float ptr [EBP + 0x64]
// 0051ba85: LEA EAX,[ESP + 0x2c]
//   XREF to: Stack[-0x30] (DATA)
// 0051ba89: ADD ESP,0x8
// 0051ba8c: FCHS
// 0051ba8e: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x30] (WRITE)
// 0051ba92: PUSH EAX
// 0051ba93: FLD float ptr [EBP + 0x68]
// 0051ba96: FCHS
// 0051ba98: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x2c] (WRITE)
// 0051ba9c: PUSH EDI
// 0051ba9d: FLD float ptr [EBP + 0x6c]
// 0051baa0: FCHS
// 0051baa2: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x28] (WRITE)
// 0051baa6: CALL shape_meshlod.cpp_CLodMesh_translateVertices_FUN_00516570
//   XREF to: 00516570 (UNCONDITIONAL_CALL)
// 0051baab: ADD ESP,0x8
// 0051baae: ADD ESP,0x44
// 0051bab1: POP EBP
// 0051bab2: POP EDI
// 0051bab3: POP ESI
// 0051bab4: POP EBX
// 0051bab5: RET
