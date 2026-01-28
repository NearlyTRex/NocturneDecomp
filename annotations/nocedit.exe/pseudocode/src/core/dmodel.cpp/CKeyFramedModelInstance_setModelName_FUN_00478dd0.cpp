// Name: core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
// Address: 00478dd0
// Address Range: [[00478dd0, 00478e0c]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 (CKeyFramedModelInstance *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
          (CKeyFramedModelInstance *this_ptr,char *filename)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = this_ptr->model_name;
  do {
    cVar1 = *filename;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  this_ptr->model_ptr = (CKeyFramedModel *)0x0;
  core_dmodel_cpp_CKeyFramedModelInstance_init_FUN_00478d00(this_ptr);
  return;
}
