// Name: shape_design.c_writeSpatialTree_FUN_0045a200
// Address: 0045a200
// Address Range: [[0045a200, 0045a310]]
// Convention: __cdecl
// Signature: void shape_design.c_writeSpatialTree_FUN_0045a200(STreeNode * node, FILE * output_file, int node_index)
// Globals:
//   TerminatedCString s_MODEL_d_0061ae20
//   TerminatedCString s_JUMP_s_0061ae2a
//   TerminatedCString s_ORDER_d_d_d_d_MODEL_d_MO_0061ae35
//   float g_BSPScalingFactor = 65535
//   SModelPartName[500] g_ModelPartNames
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void __cdecl
shape_design_c_writeSpatialTree_FUN_0045a200(STreeNode *node,FILE *output_file,int node_index)

{
  undefined4 extraout_EDX;
  double dVar1;
  
  if (node != (STreeNode *)0x0) {
    crt_stdio_c_fprintf_FUN_005fe6d0(output_file,"MODEL%d:\n",node_index);
    if (node->node_type == 0) {
      crt_stdio_c_fprintf_FUN_005fe6d0
                (output_file,"\tJUMP\t%s\n\n",g_ModelPartNames + (int)node->data1);
    }
    else {
      dVar1 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,node));
      dVar1 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)((ulonglong)dVar1 >> 0x20),node));
      dVar1 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)((ulonglong)dVar1 >> 0x20),node));
      crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)((ulonglong)dVar1 >> 0x20),node));
      crt_stdio_c_fprintf_FUN_005fe6d0
                (output_file,"\tORDER\t%d,%d,%d,%d,MODEL%d,MODEL%d\n\n",node_index * 2 + 1);
      shape_design_c_writeSpatialTree_FUN_0045a200(node->left_child,output_file,node_index * 2);
      shape_design_c_writeSpatialTree_FUN_0045a200(node->right_child,output_file,node_index * 2 + 1)
      ;
    }
  }
  return;
}


// Assembly code:
// 0045a200: PUSH EBX
//   Label: shape_design.c_writeSpatialTree_FUN_0045a200
// 0045a201: PUSH ESI
// 0045a202: PUSH EDI
// 0045a203: PUSH EBP
// 0045a204: MOV EBP,ESP
// 0045a206: SUB ESP,0x10
// 0045a20c: CMP dword ptr [EBP + 0x14],0x0
//   XREF to: Stack[0x4] (READ)
// 0045a210: JZ 0x0045a30a
//   XREF to: 0045a30a (CONDITIONAL_JUMP)
// 0045a216: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0045a219: PUSH EAX
// 0045a21a: MOV EAX,0x61ae20
//   XREF to: 0061ae20 (DATA)
// 0045a21f: PUSH EAX
//   XREF to: 0061ae20 (DATA)
// 0045a220: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0045a223: PUSH EAX
// 0045a224: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045a229: ADD ESP,0xc
// 0045a22c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045a22f: CMP dword ptr [EAX + 0x8],0x0
// 0045a233: JNZ 0x0045a25b
//   XREF to: 0045a25b (CONDITIONAL_JUMP)
// 0045a235: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045a238: IMUL EAX,dword ptr [EAX + 0xc],0x14
// 0045a23c: MOV EDX,0x1e50190
//   XREF to: 01e50190 (DATA)
// 0045a241: ADD EAX,EDX
// 0045a243: PUSH EAX
// 0045a244: MOV EAX,0x61ae2a
//   XREF to: 0061ae2a (DATA)
// 0045a249: PUSH EAX
//   XREF to: 0061ae2a (DATA)
// 0045a24a: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0045a24d: PUSH EAX
// 0045a24e: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045a253: ADD ESP,0xc
// 0045a256: JMP 0x0045a30a
//   XREF to: 0045a30a (UNCONDITIONAL_JUMP)
// 0045a25b: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0045a25b
//   XREF to: Stack[0x4] (READ)
// 0045a25e: FLD float ptr [EAX + 0xc]
// 0045a261: FMUL float ptr [0x0061ae5a]
//   XREF to: 0061ae5a (READ)
// 0045a267: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045a26c: FISTP dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 0045a26f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045a272: FLD float ptr [EAX + 0x10]
// 0045a275: FMUL float ptr [0x0061ae5a]
//   XREF to: 0061ae5a (READ)
// 0045a27b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045a280: FISTP dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0045a283: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045a286: FLD float ptr [EAX + 0x14]
// 0045a289: FMUL float ptr [0x0061ae5a]
//   XREF to: 0061ae5a (READ)
// 0045a28f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045a294: FISTP dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 0045a297: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045a29a: FLD float ptr [EAX + 0x18]
// 0045a29d: FMUL float ptr [0x0061ae5a]
//   XREF to: 0061ae5a (READ)
// 0045a2a3: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0045a2a8: FISTP dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 0045a2ab: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0045a2ae: ADD EAX,EAX
// 0045a2b0: PUSH EAX
// 0045a2b1: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0045a2b4: ADD EAX,EAX
// 0045a2b6: INC EAX
// 0045a2b7: PUSH EAX
// 0045a2b8: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045a2bb: PUSH EAX
// 0045a2bc: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045a2bf: PUSH EAX
// 0045a2c0: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045a2c3: PUSH EAX
// 0045a2c4: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045a2c7: PUSH EAX
// 0045a2c8: MOV EAX,0x61ae35
//   XREF to: 0061ae35 (DATA)
// 0045a2cd: PUSH EAX
//   XREF to: 0061ae35 (DATA)
// 0045a2ce: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0045a2d1: PUSH EAX
// 0045a2d2: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0045a2d7: ADD ESP,0x20
// 0045a2da: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0045a2dd: ADD EAX,EAX
// 0045a2df: PUSH EAX
// 0045a2e0: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0045a2e3: PUSH EAX
// 0045a2e4: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045a2e7: PUSH dword ptr [EAX]
// 0045a2e9: CALL shape_design.c_writeSpatialTree_FUN_0045a200
//   XREF to: 0045a200 (UNCONDITIONAL_CALL)
// 0045a2ee: ADD ESP,0xc
// 0045a2f1: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0045a2f4: ADD EAX,EAX
// 0045a2f6: INC EAX
// 0045a2f7: PUSH EAX
// 0045a2f8: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0045a2fb: PUSH EAX
// 0045a2fc: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045a2ff: PUSH dword ptr [EAX + 0x4]
// 0045a302: CALL shape_design.c_writeSpatialTree_FUN_0045a200
//   XREF to: 0045a200 (UNCONDITIONAL_CALL)
// 0045a307: ADD ESP,0xc
// 0045a30a: MOV ESP,EBP
//   Label: LAB_0045a30a
// 0045a30c: POP EBP
// 0045a30d: POP EDI
// 0045a30e: POP ESI
// 0045a30f: POP EBX
// 0045a310: RET
