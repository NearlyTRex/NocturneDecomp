// Name: shape_design.c_parseSpatialTreeFromFile_FUN_004580a0
// Address: 004580a0
// Address Range: [[004580a0, 0045816b]]
// Convention: __cdecl
// Signature: STreeNode * shape_design.c_parseSpatialTreeFromFile_FUN_004580a0(FILE * file)

#include "nocturne.h"

STreeNode * __cdecl shape_design_c_parseSpatialTreeFromFile_FUN_004580a0(FILE *file)

{
  STreeNode *pSVar1;
  int extraout_EAX;
  STreeNode *pSVar2;
  BADSPACEBASE *in_ESP;
  double dVar3;
  byte local_2c [4];
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_24 = crt_stdio_c_fscanf_FUN_005fe7c0
                       (file,"%d,%d,%f,%f,%f,%f\n",local_2c,&local_28,&local_20,&local_1c,&local_18
                        ,&local_14);
  if ((local_24 == 0) || (local_24 == -1)) {
    file = (FILE *)0x0;
  }
  else {
    pSVar1 = shape_design_c_allocateSpatialTreeNode_FUN_00457ed0();
    pSVar1->node_type = local_28;
    if (local_24 == 3) {
      file = (FILE *)pSVar1;
      dVar3 = crt_math_c_round_FUN_005fe6b0((double)local_20);
      *(int *)(extraout_EAX + 0xc) = (int)ROUND(dVar3);
    }
    else {
      pSVar1->data1 = local_20;
      pSVar1->data2 = local_1c;
      pSVar1->data3 = local_18;
      pSVar1->data4 = local_14;
      pSVar2 = shape_design_c_parseSpatialTreeFromFile_FUN_004580a0(file);
      pSVar1->left_child = pSVar2;
      pSVar1 = shape_design_c_parseSpatialTreeFromFile_FUN_004580a0(file);
      ((STreeNode *)file)->right_child = pSVar1;
    }
  }
  return (STreeNode *)file;
}
