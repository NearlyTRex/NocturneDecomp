// Name: shape_design.c_traverseSpatialTree_FUN_004616f0
// Address: 004616f0
// Address Range: [[004616f0, 004617bd]]
// Convention: __cdecl
// Signature: void shape_design.c_traverseSpatialTree_FUN_004616f0(SSpatialTreeNode * tree_node)

#include "nocturne.h"

void __cdecl shape_design_c_traverseSpatialTree_FUN_004616f0(SSpatialTreeNode *tree_node)

{
  if (tree_node != (SSpatialTreeNode *)0x0) {
    if (tree_node->children_present == 0) {
      shape_design_c_renderPolygonsByPart_FUN_004616a0(tree_node->part_id);
    }
    else if ((float)g_RelativeZ * (float)0.00390625 * tree_node->plane_normal_y +
             (float)g_RelativeY * (float)0.00390625 * tree_node->plane_normal_x +
             (float)g_RelativeX * (float)0.00390625 * (float)tree_node->part_id <=
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
