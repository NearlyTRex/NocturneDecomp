// Name: core_box.cpp_CBoundingBox3D_computeFromPoints_FUN_0041d9d0
// Address: 0041d9d0
// Address Range: [[0041d9d0, 0041da9f]]
// Convention: unknown
// Signature: void core_box_cpp_CBoundingBox3D_computeFromPoints_FUN_0041d9d0(float *param_1,int param_2,float *param_3)

#include "nocturne.h"

void core_box_cpp_CBoundingBox3D_computeFromPoints_FUN_0041d9d0(float *param_1,int param_2,float *param_3)

{
  float *pfVar1;
  int iVar2;
  
  pfVar1 = param_1 + 3;
  if (pfVar1 != param_3) {
    *pfVar1 = *param_3;
    param_1[4] = param_3[1];
    param_1[5] = param_3[2];
  }
  if (param_1 != pfVar1) {
    *param_1 = *pfVar1;
    param_1[1] = param_1[4];
    param_1[2] = param_1[5];
  }
  iVar2 = 1;
  if (1 < param_2) {
    param_3 = param_3 + 3;
    do {
      while( true ) {
        if (*param_3 < *param_1) {
          *param_1 = *param_3;
        }
        else if (param_1[3] < *param_3) {
          param_1[3] = *param_3;
        }
        if (param_1[1] <= param_3[1]) {
          if (param_1[4] < param_3[1]) {
            param_1[4] = param_3[1];
          }
        }
        else {
          param_1[1] = param_3[1];
        }
        if (param_3[2] < param_1[2]) break;
        if (param_3[2] <= param_1[5]) goto LAB_0041da48;
        param_1[5] = param_3[2];
        iVar2 = iVar2 + 1;
        param_3 = param_3 + 3;
        if (param_2 <= iVar2) {
          return;
        }
      }
      param_1[2] = param_3[2];
LAB_0041da48:
      iVar2 = iVar2 + 1;
      param_3 = param_3 + 3;
    } while (iVar2 < param_2);
  }
  return;
}
