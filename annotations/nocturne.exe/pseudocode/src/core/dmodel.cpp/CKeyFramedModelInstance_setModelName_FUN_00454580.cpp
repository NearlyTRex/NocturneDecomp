// Name: core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
// Address: 00454580
// Address Range: [[00454580, 004545bc]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(int param_1,char *param_2)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_1 + 0x78);
  do {
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  *(uint *)(param_1 + 0x178) = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_init_FUN_004544b0(param_1);
  return;
}
