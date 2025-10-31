// Name: shape_design.c_traverseSpatialTree_FUN_004616f0
// Address: 004616f0
// Address Range: [[004616f0, 004617bd]]
// Convention: __cdecl
// Signature: void shape_design.c_traverseSpatialTree_FUN_004616f0(SSpatialTreeNode * tree_node)
// Globals:
//   double g_SpatialTreeScale = 0.00390625
//   int g_RelativeX
//   int g_RelativeY
//   int g_RelativeZ
// Function calls:
//   shape_design.c_renderPolygonsByPart_FUN_004616a0

#include "nocturne.h"

void __cdecl shape_design_c_traverseSpatialTree_FUN_004616f0(SSpatialTreeNode *tree_node)

{
  if (tree_node != (SSpatialTreeNode *)0x0) {
    if (tree_node->children_present == 0) {
      shape_design_c_renderPolygonsByPart_FUN_004616a0(tree_node->part_id);
    }
    else if ((float)g_RelativeZ * (float)g_SpatialTreeScale * tree_node->plane_normal_y +
             (float)g_RelativeY * (float)g_SpatialTreeScale * tree_node->plane_normal_x +
             (float)g_RelativeX * (float)g_SpatialTreeScale * (float)tree_node->part_id <=
             tree_node->plane_normal_z) {
      shape_design_c_traverseSpatialTree_FUN_004616f0(tree_node->child2);
      shape_design_c_traverseSpatialTree_FUN_004616f0(tree_node->child1);
    }
    else {
      shape_design_c_traverseSpatialTree_FUN_004616f0(tree_node->child1);
      shape_design_c_traverseSpatialTree_FUN_004616f0(tree_node->child2);
    }
  }
  return;
}


// Assembly code:
// 004616f0: PUSH EBX
//   Label: shape_design.c_traverseSpatialTree_FUN_004616f0
// 004616f1: PUSH ESI
// 004616f2: PUSH EDI
// 004616f3: PUSH EBP
// 004616f4: MOV EBP,ESP
// 004616f6: SUB ESP,0x10
// 004616fc: CMP dword ptr [EBP + 0x14],0x0
//   XREF to: Stack[0x4] (READ)
// 00461700: JZ 0x004617b7
//   XREF to: 004617b7 (CONDITIONAL_JUMP)
// 00461706: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461709: CMP dword ptr [EAX + 0x8],0x0
// 0046170d: JNZ 0x00461722
//   XREF to: 00461722 (CONDITIONAL_JUMP)
// 0046170f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461712: PUSH dword ptr [EAX + 0xc]
// 00461715: CALL shape_design.c_renderPolygonsByPart_FUN_004616a0
//   XREF to: 004616a0 (UNCONDITIONAL_CALL)
// 0046171a: ADD ESP,0x4
// 0046171d: JMP 0x004617b7
//   XREF to: 004617b7 (UNCONDITIONAL_JUMP)
// 00461722: FILD dword ptr [0x02d052b8]
//   Label: LAB_00461722
//   XREF to: 02d052b8 (READ)
// 00461728: FMUL double ptr [0x0061befe]
//   XREF to: 0061befe (READ)
// 0046172e: FSTP float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 00461731: FILD dword ptr [0x02d052bc]
//   XREF to: 02d052bc (READ)
// 00461737: FMUL double ptr [0x0061befe]
//   XREF to: 0061befe (READ)
// 0046173d: FSTP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 00461740: FILD dword ptr [0x02d052c0]
//   XREF to: 02d052c0 (READ)
// 00461746: FMUL double ptr [0x0061befe]
//   XREF to: 0061befe (READ)
// 0046174c: FSTP float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 0046174f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461752: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 00461755: FMUL float ptr [EAX + 0xc]
// 00461758: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046175b: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0046175e: FMUL float ptr [EAX + 0x10]
// 00461761: FADDP
// 00461763: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461766: FLD float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 00461769: FMUL float ptr [EAX + 0x14]
// 0046176c: FADDP
// 0046176e: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 00461771: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461774: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00461777: FCOMP float ptr [EAX + 0x18]
// 0046177a: FNSTSW AX
// 0046177c: SAHF
// 0046177d: JBE 0x0046179c
//   XREF to: 0046179c (CONDITIONAL_JUMP)
// 0046177f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00461782: PUSH dword ptr [EAX]
// 00461784: CALL shape_design.c_traverseSpatialTree_FUN_004616f0
//   XREF to: 004616f0 (UNCONDITIONAL_CALL)
// 00461789: ADD ESP,0x4
// 0046178c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046178f: PUSH dword ptr [EAX + 0x4]
// 00461792: CALL shape_design.c_traverseSpatialTree_FUN_004616f0
//   XREF to: 004616f0 (UNCONDITIONAL_CALL)
// 00461797: ADD ESP,0x4
// 0046179a: JMP 0x004617b7
//   XREF to: 004617b7 (UNCONDITIONAL_JUMP)
// 0046179c: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0046179c
//   XREF to: Stack[0x4] (READ)
// 0046179f: PUSH dword ptr [EAX + 0x4]
// 004617a2: CALL shape_design.c_traverseSpatialTree_FUN_004616f0
//   XREF to: 004616f0 (UNCONDITIONAL_CALL)
// 004617a7: ADD ESP,0x4
// 004617aa: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004617ad: PUSH dword ptr [EAX]
// 004617af: CALL shape_design.c_traverseSpatialTree_FUN_004616f0
//   XREF to: 004616f0 (UNCONDITIONAL_CALL)
// 004617b4: ADD ESP,0x4
// 004617b7: MOV ESP,EBP
//   Label: LAB_004617b7
// 004617b9: POP EBP
// 004617ba: POP EDI
// 004617bb: POP ESI
// 004617bc: POP EBX
// 004617bd: RET
