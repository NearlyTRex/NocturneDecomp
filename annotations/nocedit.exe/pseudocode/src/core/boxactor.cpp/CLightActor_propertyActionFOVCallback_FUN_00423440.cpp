// Name: core_boxactor.cpp_CLightActor_propertyActionFOVCallback_FUN_00423440
// Address: 00423440
// Address Range: [[00423440, 004234da]]
// Convention: __cdecl
// Signature: int __cdecl core_boxactor_cpp_CLightActor_propertyActionFOVCallback_FUN_00423440 (CLightActor *this_ptr,CActorProperty *property,char *output_buffer)

#include "nocturne.h"

int __cdecl
core_boxactor_cpp_CLightActor_propertyActionFOVCallback_FUN_00423440
          (CLightActor *this_ptr,CActorProperty *property,char *output_buffer)

{
  CLightActor *pCVar1;
  int iVar1;
  char local_13c [300];
  float local_10;
  
  pCVar1 = (CLightActor *)
           core_actor_cpp_castToClassHash_FUN_0040c790
                     ((CDemonActor *)this_ptr,g_CLightActorClassInfo.name_hash);
  local_10 = pCVar1->light_fov;
  _sprintf(local_13c,"Enter FOV (mm) for CLightActor %s",this_ptr);
  iVar1 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                    (g_CEditorToolsPtr,local_13c,&local_10,1,1.0,9999.0,1);
  if (iVar1 == 0) {
    return 0;
  }
  pCVar1->light_fov = local_10;
  return 1;
}
