// Name: core_set.cpp_CDemonSet_loadStateInfo_FUN_0050e920
// Address: 0050e920
// Address Range: [[0050e920, 0050ea09]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_loadStateInfo_FUN_0050e920(int *param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_loadStateInfo_FUN_0050e920(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int local_1c;
  int local_18;
  int local_14;
  
  _fscanf(param_2,"%*[^\n]\n");
  _fscanf(param_2,"%d\n",&local_1c);
  if (local_1c != 1) {
    PTR_01cc4800 = "..\\core\\set.cpp";
    INT_01cc4804 = 0x12af;
    core_main_c_FUN_004c8440("Set saveState info is invalid version %d",local_1c);
  }
  _fscanf(param_2,"%*[^\n]\n");
  _fscanf(param_2,"%d\n",&local_18);
  if (*param_1 != local_18) {
    shape_edittool_cpp_FUN_0046fb40(0x01BCD074,"The set has changed since you saved you game last.\nThere might be problems with the virtual director.");
  }
  iVar1 = 0;
  piVar2 = param_1;
  if (0 < local_18) {
    do {
      _fscanf(param_2,"%d\n",&local_14);
      if (iVar1 < *param_1) {
        piVar2[0x68] = local_14;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x68;
    } while (iVar1 < local_18);
  }
  return;
}
