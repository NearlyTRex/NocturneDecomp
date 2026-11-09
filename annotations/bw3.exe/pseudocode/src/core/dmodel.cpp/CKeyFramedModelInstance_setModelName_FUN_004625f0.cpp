// Name: core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
// Address: 004625f0
// Address Range: [[004625f0, 0046262c]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance *this_ptr,char *filename)

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
  core_dmodel_cpp_CKeyFramedModelInstance_init_FUN_00462520(this_ptr);
  return;
}
