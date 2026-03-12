// Name: shape_design.c_parseSpatialTreeFromFile_FUN_004580a0
// Address: 004580a0
// Address Range: [[004580a0, 0045816b]]
// Convention: __cdecl
// Signature: STreeNode * __cdecl shape_design_c_parseSpatialTreeFromFile_FUN_004580a0(_FILE *file)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

STreeNode * __cdecl shape_design_c_parseSpatialTreeFromFile_FUN_004580a0(_FILE *file)

{
  STreeNode *pSVar1;
  STreeNode *pSVar2;
  STreeNode *local_34;
  byte local_2c [4];
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_24 = _fscanf(file,"%d,%d,%f,%f,%f,%f\n",local_2c,&local_28,&local_20,&local_1c,&local_18
                        ,&local_14);
  if ((local_24 == 0) || (local_24 == -1)) {
    local_34 = (STreeNode *)0x0;
  }
  else {
    local_34 = shape_design_c_allocateSpatialTreeNode_FUN_00457ed0();
    local_34->node_type = local_28;
    if (local_24 == 3) {
      local_34->data1 = (float)(int)ROUND(ROUND(local_20));
    }
    else {
      local_34->data1 = local_20;
      local_34->data2 = local_1c;
      local_34->data3 = local_18;
      local_34->data4 = local_14;
      pSVar1 = shape_design_c_parseSpatialTreeFromFile_FUN_004580a0(file);
      local_34->left_child = pSVar1;
      pSVar2 = shape_design_c_parseSpatialTreeFromFile_FUN_004580a0(file);
      local_34->right_child = pSVar2;
    }
  }
  return local_34;
}
