// Name: core_box.cpp_CBox_saveToFile_FUN_0041c9e0
// Address: 0041c9e0
// Address Range: [[0041c9e0, 0041cb32]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_saveToFile_FUN_0041c9e0(float *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void __cdecl core_box_cpp_CBox_saveToFile_FUN_0041c9e0(float *param_1,uint param_2,uint param_3)

{
  _fprintf();
  _fprintf(param_2,"%s%d\n",param_3,1);
  _fprintf();
  _fprintf(param_2,"%s%f,%f,%f\n",param_3,(double)*param_1,(double)param_1[1],
             (double)param_1[2]);
  _fprintf(param_2,"%s%f,%f,%f\n",param_3,(double)param_1[3],(double)param_1[5],
             (double)param_1[4]);
  _fprintf(param_2,"%s%f,%f,%f\n",param_3,(double)param_1[0x29],(double)param_1[0x2a],
             (double)param_1[0x2b]);
  _fprintf();
  _fprintf(param_2,"%s%f,%f,%f\n",param_3,(double)param_1[0x13],(double)param_1[0x14],
             (double)param_1[0x15]);
  _fprintf(param_2,"%s%f,%f,%f\n",param_3,(double)param_1[0x1c],(double)param_1[0x1d],
             (double)param_1[0x1e]);
  _fprintf(param_2,"%s%d\n",param_3,param_1[0x95]);
  return;
}
