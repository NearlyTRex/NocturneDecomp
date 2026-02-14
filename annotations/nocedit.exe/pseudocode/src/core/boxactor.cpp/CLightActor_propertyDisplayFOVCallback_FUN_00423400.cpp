// Name: core_boxactor.cpp_CLightActor_propertyDisplayFOVCallback_FUN_00423400
// Address: 00423400
// Address Range: [[00423400, 00423434]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CLightActor_propertyDisplayFOVCallback_FUN_00423400(CLightActor *this_ptr,CActorProperty *property,char *output_buffer)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CLightActor_propertyDisplayFOVCallback_FUN_00423400(CLightActor *this_ptr,CActorProperty *property,char *output_buffer)

{
  CLightActor *pCVar1;
  
  pCVar1 = (CLightActor *)
           core_actor_cpp_castToClassHash_FUN_0040c790
                     ((CDemonActor *)this_ptr,g_CLightActorClassInfo.name_hash);
  _sprintf
            (output_buffer,"%g mm",(double)(pCVar1->light).base.base.projection_scale);
  return;
}
