// Name: shape_design.c_writeSpatialTree_FUN_0045a200
// Address: 0045a200
// Address Range: [[0045a200, 0045a310]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_writeSpatialTree_FUN_0045a200(STreeNode *node,_FILE *output_file,int node_index)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl shape_design_c_writeSpatialTree_FUN_0045a200(STreeNode *node,_FILE *output_file,int node_index)

{
  if (node != (STreeNode *)0x0) {
    _fprintf(output_file,"MODEL%d:\n",node_index);
    if (node->node_type == 0) {
      _fprintf(output_file,"\tJUMP\t%s\n\n",g_ModelPartNames + (int)node->data1);
    }
    else {
      _fprintf(output_file,"\tORDER\t%d,%d,%d,%d,MODEL%d,MODEL%d\n\n",
                 (int)ROUND(ROUND(node->data1 * 65535.0f)),
                 (int)ROUND(ROUND(node->data2 * 65535.0f)),
                 (int)ROUND(ROUND(node->data3 * 65535.0f)),
                 (int)ROUND(ROUND(node->data4 * 65535.0f)),node_index * 2 + 1,
                 node_index * 2);
      shape_design_c_writeSpatialTree_FUN_0045a200(node->left_child,output_file,node_index * 2);
      shape_design_c_writeSpatialTree_FUN_0045a200(node->right_child,output_file,node_index * 2 + 1)
      ;
    }
  }
  return;
}
