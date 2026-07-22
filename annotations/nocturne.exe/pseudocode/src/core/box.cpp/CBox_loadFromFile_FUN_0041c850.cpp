// Name: core_box.cpp_CBox_loadFromFile_FUN_0041c850
// Address: 0041c850
// Address Range: [[0041c850, 0041c9db]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_loadFromFile_FUN_0041c850(int param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl core_box_cpp_CBox_loadFromFile_FUN_0041c850(int param_1,uint param_2)

{
  uint *puVar1;
  byte local_144 [256];
  byte local_44 [4];
  byte local_40 [4];
  byte local_3c [4];
  byte local_38 [12];
  byte local_2c [4];
  byte local_28 [4];
  byte local_24 [4];
  byte local_20 [4];
  byte local_1c [4];
  byte local_18 [4];
  uint local_14;
  byte local_10 [4];
  
  _fgets(local_144,0xff,param_2);
  _fscanf(param_2," %d\n",local_10);
  _fgets(local_144,0xff,param_2);
  _fscanf(param_2," %f,%f,%f\n",local_20,local_1c,local_18);
  _fscanf(param_2," %f,%f,%f\n",local_2c,local_24,local_28);
  _fscanf(param_2," %f,%f,%f\n",local_44,local_40,local_3c);
  _fscanf(param_2," %f\n",&local_14);
  core_box_cpp_CBox_setupCorners_FUN_0041a6e0(param_1,local_20,local_2c,local_44,local_14);
  _fscanf(param_2," %f,%f,%f\n",param_1 + 0x4c,param_1 + 0x50,param_1 + 0x54);
  _fscanf(param_2," %f,%f,%f\n",param_1 + 0x70,param_1 + 0x74,param_1 + 0x78);
  _fscanf(param_2," %d\n",param_1 + 0x254);
  puVar1 = (uint *)
           core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                     (param_1 + 0x18,local_38,param_1 + 0x4c);
  if ((uint *)(param_1 + 0x40) == puVar1) {
    return;
  }
  *(uint *)(param_1 + 0x40) = *puVar1;
  *(uint *)(param_1 + 0x44) = puVar1[1];
  *(uint *)(param_1 + 0x48) = puVar1[2];
  return;
}
