// Name: shape_design.c_writeBinaryTreeNode_FUN_00457fd0
// Address: 00457fd0
// MANUAL RECONSTRUCTION
// Address Range: [[00457fd0, 00458093]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_writeBinaryTreeNode_FUN_00457fd0(STreeNode *node,_FILE *file,int depth)

#include "nocturne.h"

void __cdecl shape_design_c_writeBinaryTreeNode_FUN_00457fd0(STreeNode *node,_FILE *file,int depth)

{
  if (node != (STreeNode *)0x0) {
    if (node->node_type == 0) {
      _fprintf(file,"%d,%d,%d\n",depth,node->node_type,(node->data1)._i);
    }
    else {
      _fprintf(file,"%d,%d,%f,%f,%f,%f\n",depth,node->node_type,(double)(node->data1)._f,
                 (double)(node->data2)._f,(double)(node->data3)._f,(double)(node->data4)._f);
      shape_design_c_writeBinaryTreeNode_FUN_00457fd0(node->left_child,file,depth * 2);
      shape_design_c_writeBinaryTreeNode_FUN_00457fd0(node->right_child,file,depth * 2 + 1);
    }
  }
  return;
}
