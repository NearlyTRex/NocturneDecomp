// Name: shape_design.c_writeBinaryTreeNode_FUN_00457fd0
// Address: 00457fd0
// Address Range: [[00457fd0, 00458093]]
// Convention: __cdecl
// Signature: void shape_design.c_writeBinaryTreeNode_FUN_00457fd0(STreeNode * node, FILE * file, int depth)

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
