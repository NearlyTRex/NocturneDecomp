// Name: core_boxactor.cpp_CLightActor_dtor_FUN_0041d7b0
// Address: 0041d7b0
// Address Range: [[0041d7b0, 0041d824]]
// Convention: __cdecl
// Signature: CLightActor * __cdecl core_boxactor_cpp_CLightActor_dtor_FUN_0041d7b0(CLightActor *this_ptr,uint flags)

#include "nocturne.h"

CLightActor * __cdecl core_boxactor_cpp_CLightActor_dtor_FUN_0041d7b0(CLightActor *this_ptr,uint flags)

{
  CDemonLight *pCVar1;
  CBox *pCVar2;
  CLightActor *pCVar3;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CLightActorTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_dlight_cpp_CDemonLight_dtor_FUN_00449d30((CDemonLight *)&this_ptr->field_0x7d8,0);
  pCVar2 = core_box_cpp_CBox_dtor_FUN_005b1c70((CBox *)&pCVar1[-1].field_0x2cc8,0);
  pCVar3 = (CLightActor *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930((CDemonActor *)(pCVar2 + -0x4f0),1);
  if ((flags & 2) == 0) {
    return pCVar3;
  }
  FUN_005b7fdc(pCVar3);
  return pCVar3;
}
