// Name: shape_design.c_parseSpatialTreeFromFile_FUN_004580a0
// Address: 004580a0
// Address Range: [[004580a0, 0045816b]]
// Convention: __cdecl
// Signature: STreeNode * shape_design.c_parseSpatialTreeFromFile_FUN_004580a0(FILE * file)

#include "nocturne.h"

STreeNode * __cdecl shape_design_c_parseSpatialTreeFromFile_FUN_004580a0(FILE *file)

{
  STreeNode *pSVar1;
  BADSPACEBASE *in_ESP;
  float10 fVar2;
  double dVar3;
  STreeNode *local_34;
  FILE *pFVar4;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_24 = crt_stdio_c_fscanf_FUN_005fe7c0
                       (file,"%d,%d,%f,%f,%f,%f\n",&stack0xffffffd4,&local_28,&local_20,&local_1c,
                        &local_18,&local_14);
  if ((local_24 == 0) || (local_24 == -1)) {
    local_34 = (STreeNode *)0x0;
  }
  else {
    pSVar1 = shape_design_c_allocateSpatialTreeNode_FUN_00457ed0();
    pSVar1->node_type = local_28;
    if (local_24 == 3) {
      fVar2 = (float10)local_20;
      local_34 = (STreeNode *)0x458110;
      dVar3 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(pSVar1,pSVar1));
      *(int *)(SUB84 /* extract 2-byte value */(dVar3,0) + 0xc) = (int)ROUND(fVar2);
    }
    else {
      pSVar1->data1 = local_20;
      pSVar1->data2 = local_1c;
      pSVar1->data3 = local_18;
      pSVar1->data4 = local_14;
      pFVar4 = file;
      pSVar1 = shape_design_c_parseSpatialTreeFromFile_FUN_004580a0(file);
      pFVar4->_ptr = (char *)pSVar1;
      local_34 = (STreeNode *)0x458153;
      pSVar1 = shape_design_c_parseSpatialTreeFromFile_FUN_004580a0(file);
      local_34->right_child = pSVar1;
    }
  }
  return local_34;
}
