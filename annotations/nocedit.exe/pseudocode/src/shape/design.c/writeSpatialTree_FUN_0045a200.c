// Name: shape_design.c_writeSpatialTree_FUN_0045a200
// Address: 0045a200
// Address Range: [[0045a200, 0045a310]]
// Convention: __cdecl
// Signature: void shape_design.c_writeSpatialTree_FUN_0045a200(STreeNode * node, FILE * output_file, int node_index)

#include "nocturne.h"

void __cdecl
shape_design_c_writeSpatialTree_FUN_0045a200(STreeNode *node,FILE *output_file,int node_index)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  if (node != (STreeNode *)0x0) {
    crt_stdio_c_fprintf_FUN_005fe6d0(output_file,"MODEL%d:\n",node_index);
    if (node->node_type == 0) {
      crt_stdio_c_fprintf_FUN_005fe6d0
                (output_file,"\tJUMP\t%s\n\n",g_ModelPartNames + (int)node->data1);
    }
    else {
      dVar1 = crt_math_c_round_FUN_005fe6b0((double)(node->data1 * 65535f));
      iVar7 = (int)ROUND(dVar1);
      uVar6 = 0x45a280;
      dVar1 = crt_math_c_round_FUN_005fe6b0((double)(node->data2 * 65535f));
      uVar5 = 0x45a294;
      dVar2 = crt_math_c_round_FUN_005fe6b0((double)(node->data3 * 65535f));
      uVar4 = 0x45a2a8;
      dVar3 = crt_math_c_round_FUN_005fe6b0((double)(node->data4 * 65535f));
      crt_stdio_c_fprintf_FUN_005fe6d0
                (output_file,"\tORDER\t%d,%d,%d,%d,MODEL%d,MODEL%d\n\n",iVar7,(int)ROUND(dVar1),
                 (int)ROUND(dVar2),(int)ROUND(dVar3),node_index * 2 + 1,node_index * 2,uVar4,uVar5,
                 uVar6);
      shape_design_c_writeSpatialTree_FUN_0045a200(node->left_child,output_file,node_index * 2);
      shape_design_c_writeSpatialTree_FUN_0045a200(node->right_child,output_file,node_index * 2 + 1)
      ;
    }
  }
  return;
}
