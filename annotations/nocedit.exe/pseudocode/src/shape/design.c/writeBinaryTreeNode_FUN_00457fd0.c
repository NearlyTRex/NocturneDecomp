// Name: shape_design.c_writeBinaryTreeNode_FUN_00457fd0
// Address: 00457fd0
// Address Range: [[00457fd0, 00458093]]
// Convention: __cdecl
// Signature: void shape_design.c_writeBinaryTreeNode_FUN_00457fd0(STreeNode * node, FILE * file, int depth)
// Cross-references:
//   shape_design.c_exportModelToMDL_FUN_00459e80 (00459e80) at 0045a1d9 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_d_d_0061a882
//   TerminatedCString s_d_d_f_f_f_f_0061a88c
// Function calls:
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void __cdecl shape_design_c_writeBinaryTreeNode_FUN_00457fd0(STreeNode *node,FILE *file,int depth)

{
  if (node != (STreeNode *)0x0) {
    if (node->node_type == 0) {
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d,%d,%d\n");
    }
    else {
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file,"%d,%d,%f,%f,%f,%f\n",depth,node->node_type,(double)node->data1,
                 (double)node->data2,(double)node->data3,(double)node->data4);
      shape_design_c_writeBinaryTreeNode_FUN_00457fd0(node->left_child,file,depth * 2);
      shape_design_c_writeBinaryTreeNode_FUN_00457fd0(node->right_child,file,depth * 2 + 1);
    }
  }
  return;
}


// Assembly code:
// 00457fd0: PUSH EBX
//   Label: shape_design.c_writeBinaryTreeNode_FUN_00457fd0
// 00457fd1: PUSH ESI
// 00457fd2: PUSH EDI
// 00457fd3: PUSH EBP
// 00457fd4: MOV EBP,ESP
// 00457fd6: SUB ESP,0x0
// 00457fdc: CMP dword ptr [EBP + 0x14],0x0
//   XREF to: Stack[0x4] (READ)
// 00457fe0: JZ 0x0045808f
//   XREF to: 0045808f (CONDITIONAL_JUMP)
// 00457fe6: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00457fe9: CMP dword ptr [EAX + 0x8],0x0
// 00457fed: JNZ 0x00458013
//   XREF to: 00458013 (CONDITIONAL_JUMP)
// 00457fef: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00457ff2: PUSH dword ptr [EAX + 0xc]
// 00457ff5: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00457ff8: PUSH dword ptr [EAX + 0x8]
// 00457ffb: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00457ffe: PUSH EAX
// 00457fff: MOV EAX,0x61a882
//   XREF to: 0061a882 (DATA)
// 00458004: PUSH EAX
//   XREF to: 0061a882 (DATA)
// 00458005: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00458008: PUSH EAX
// 00458009: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045800e: ADD ESP,0x14
// 00458011: JMP 0x0045808f
//   XREF to: 0045808f (UNCONDITIONAL_JUMP)
// 00458013: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00458013
//   XREF to: Stack[0x4] (READ)
// 00458016: FLD float ptr [EAX + 0x18]
// 00458019: SUB ESP,0x8
// 0045801c: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0045801f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00458022: FLD float ptr [EAX + 0x14]
// 00458025: SUB ESP,0x8
// 00458028: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0045802b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045802e: FLD float ptr [EAX + 0x10]
// 00458031: SUB ESP,0x8
// 00458034: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 00458037: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045803a: FLD float ptr [EAX + 0xc]
// 0045803d: SUB ESP,0x8
// 00458040: FSTP double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 00458043: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00458046: PUSH dword ptr [EAX + 0x8]
// 00458049: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0045804c: PUSH EAX
// 0045804d: MOV EAX,0x61a88c
//   XREF to: 0061a88c (DATA)
// 00458052: PUSH EAX
//   XREF to: 0061a88c (DATA)
// 00458053: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00458056: PUSH EAX
// 00458057: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045805c: ADD ESP,0x30
// 0045805f: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00458062: ADD EAX,EAX
// 00458064: PUSH EAX
// 00458065: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00458068: PUSH EAX
// 00458069: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045806c: PUSH dword ptr [EAX]
// 0045806e: CALL shape_design.c_writeBinaryTreeNode_FUN_00457fd0
//   XREF to: 00457fd0 (UNCONDITIONAL_CALL)
// 00458073: ADD ESP,0xc
// 00458076: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00458079: ADD EAX,EAX
// 0045807b: INC EAX
// 0045807c: PUSH EAX
// 0045807d: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00458080: PUSH EAX
// 00458081: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00458084: PUSH dword ptr [EAX + 0x4]
// 00458087: CALL shape_design.c_writeBinaryTreeNode_FUN_00457fd0
//   XREF to: 00457fd0 (UNCONDITIONAL_CALL)
// 0045808c: ADD ESP,0xc
// 0045808f: POP EBP
//   Label: LAB_0045808f
// 00458090: POP EDI
// 00458091: POP ESI
// 00458092: POP EBX
// 00458093: RET
