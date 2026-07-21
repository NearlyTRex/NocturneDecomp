// Name: engine_2d.c_project3DPointClipped_FUN_00401df0
// Address: 00401df0
// Address Range: [[00401df0, 00401e23]]
// Convention: unknown
// Signature: void engine_2d_c_project3DPointClipped_FUN_00401df0(int param_1,int param_2,int param_3)

#include "nocturne.h"

void engine_2d_c_project3DPointClipped_FUN_00401df0(int param_1,int param_2,int param_3)

{
  if ((((0 < param_3) && (param_1 <= param_3)) && (-param_3 <= param_1)) &&
     ((param_2 <= param_3 && (-param_3 <= param_2)))) {
    engine_2d_c_project3DPointToScreen_FUN_00401da0(param_1,param_2,param_3);
    return;
  }
  return;
}
