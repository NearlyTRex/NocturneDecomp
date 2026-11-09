// Name: core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
// Address: 0044fd70
// Address Range: [[0044fd70, 0044fdac]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance *this_ptr,char *filename)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &this_ptr->field_0x78;
  do {
    cVar1 = *filename;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  *(uint *)&this_ptr->field_0x178 = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_init_FUN_0044fca0(this_ptr);
  return;
}
