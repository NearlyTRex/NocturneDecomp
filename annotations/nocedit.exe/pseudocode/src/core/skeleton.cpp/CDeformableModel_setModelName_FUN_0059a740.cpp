// Name: core_skeleton.cpp_CDeformableModel_setModelName_FUN_0059a740
// Address: 0059a740
// Address Range: [[0059a740, 0059a776]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModel_setModelName_FUN_0059a740(CDeformableModel * this_ptr, char * model_name)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModel_setModelName_FUN_0059a740
          (CDeformableModel *this_ptr,char *model_name)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = this_ptr->model_name;
  do {
    cVar1 = *model_name;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = model_name[1];
    model_name = model_name + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  this_ptr->skeleton_ptr = (CSkeleton *)0x0;
  return;
}
