// Name: core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
// Address: 005478b0
// Address Range: [[005478b0, 00547904]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance *this_ptr,char *model_name)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance *this_ptr,char *model_name)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &this_ptr->field_0x2260;
  do {
    cVar1 = *model_name;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = model_name[1];
    model_name = model_name + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  *(uint *)&this_ptr->field_0x22b0 = 0;
  core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_00547440(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_00547460(this_ptr);
  *(uint *)&this_ptr->field_0x2230 = 0xffffffff;
  return;
}
