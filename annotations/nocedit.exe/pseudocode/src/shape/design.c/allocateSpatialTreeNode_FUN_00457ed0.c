// Name: shape_design.c_allocateSpatialTreeNode_FUN_00457ed0
// Address: 00457ed0
// Address Range: [[00457ed0, 00457efd]]
// Convention: __cdecl
// Signature: STreeNode * shape_design.c_allocateSpatialTreeNode_FUN_00457ed0(void)
// Cross-references:
//   shape_design.c_configureSpatialSplittingPlane_FUN_004617c0 (004617c0) at 004619f5 [UNCONDITIONAL_CALL]
//   shape_design.c_parseSpatialTreeFromFile_FUN_004580a0 (004580a0) at 004580ee [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_design_c_0061a856
// Function calls:
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250

#include "nocturne.h"

STreeNode * __cdecl shape_design_c_allocateSpatialTreeNode_FUN_00457ed0(void)

{
  STreeNode *pSVar1;
  
  pSVar1 = (STreeNode *)
           shape_memdbg_cpp_debugMalloc_FUN_0050f250(0x1c,"..\\shape\\design.c",0x166);
  return pSVar1;
}


// Assembly code:
// 00457ed0: PUSH EBX
//   Label: shape_design.c_allocateSpatialTreeNode_FUN_00457ed0
// 00457ed1: PUSH ESI
// 00457ed2: PUSH EDI
// 00457ed3: PUSH EBP
// 00457ed4: MOV EBP,ESP
// 00457ed6: SUB ESP,0x4
// 00457edc: PUSH 0x166
// 00457ee1: MOV EAX,0x61a856
//   XREF to: 0061a856 (PARAM)
// 00457ee6: PUSH EAX
//   XREF to: 0061a856 (DATA)
// 00457ee7: PUSH 0x1c
// 00457ee9: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 00457eee: ADD ESP,0xc
// 00457ef1: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00457ef4: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00457ef7: MOV ESP,EBP
// 00457ef9: POP EBP
// 00457efa: POP EDI
// 00457efb: POP ESI
// 00457efc: POP EBX
// 00457efd: RET
