// Name: core_keyactor.cpp_CKeyActor_ctor_FUN_004fc510
// Address: 004fc510
// Address Range: [[004fc510, 004fc567]]
// Convention: __cdecl
// Signature: CKeyActor * __cdecl core_keyactor_cpp_CKeyActor_ctor_FUN_004fc510(CKeyActor *this_ptr)

#include "nocturne.h"

CKeyActor * __cdecl core_keyactor_cpp_CKeyActor_ctor_FUN_004fc510(CKeyActor *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004085c0((CDemonActor *)this_ptr);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  *(byte **)&this_ptr_00[-1].field_0x178 = &g_CKeyActorVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(this_ptr_00,"key1.kfm")
  ;
  *(uint *)(this_ptr_00 + 1) = 1;
  *(uint *)&this_ptr_00[1].field_0x4 = 0;
  return (CKeyActor *)&this_ptr_00[-1].field_0x24;
}
