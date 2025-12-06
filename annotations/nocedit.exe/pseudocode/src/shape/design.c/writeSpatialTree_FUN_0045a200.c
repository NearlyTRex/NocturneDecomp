// Name: shape_design.c_writeSpatialTree_FUN_0045a200
// Address: 0045a200
// Address Range: [[0045a200, 0045a310]]
// Convention: __cdecl
// Signature: void shape_design.c_writeSpatialTree_FUN_0045a200(STreeNode * node, FILE * output_file, int node_index)

#include "nocturne.h"

void __cdecl
shape_design_c_writeSpatialTree_FUN_0045a200(STreeNode *node,FILE *output_file,int node_index)

{
  uint extraout_EDX;
  double dVar1;
  
  if (node != (STreeNode *)0x0) {
    crt_stdio_c_fprintf_FUN_005fe6d0(output_file,"MODEL%d:\n",node_index);
    if (node->node_type == 0) {
      crt_stdio_c_fprintf_FUN_005fe6d0
                (output_file,"\tJUMP\t%s\n\n",g_ModelPartNames + (int)node->data1);
    }
    else {
      dVar1 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,node));
      dVar1 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar1 >> 0x20),node));
      dVar1 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar1 >> 0x20),node));
      crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar1 >> 0x20),node));
      crt_stdio_c_fprintf_FUN_005fe6d0
                (output_file,"\tORDER\t%d,%d,%d,%d,MODEL%d,MODEL%d\n\n",node_index * 2 + 1);
      shape_design_c_writeSpatialTree_FUN_0045a200(node->left_child,output_file,node_index * 2);
      shape_design_c_writeSpatialTree_FUN_0045a200(node->right_child,output_file,node_index * 2 + 1)
      ;
    }
  }
  return;
}
