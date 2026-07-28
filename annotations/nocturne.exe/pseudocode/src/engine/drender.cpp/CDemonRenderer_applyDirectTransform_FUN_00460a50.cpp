// Name: engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50
// Address: 00460a50
// Address Range: [[00460a50, 00460a9c]]
// Convention: unknown
// Signature: void engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50(undefined4 param_1,int *param_2,int *param_3)

#include "nocturne.h"

void engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00460a50(uint param_1,int *param_2,int *param_3)

{
  if (param_3 == (int *)0x0) {
    engine_matrix_c_matrixPushAndTransform_FUN_004cd380(*param_2,param_2[1],param_2[2],0,0,0);
    return;
  }
  engine_matrix_c_matrixPushAndTransform_FUN_004cd380
            (*param_2,param_2[1],param_2[2],*param_3,param_3[1],param_3[2]);
  return;
}
