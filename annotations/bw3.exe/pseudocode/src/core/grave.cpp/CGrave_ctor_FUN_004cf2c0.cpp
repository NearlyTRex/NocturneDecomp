// Name: core_grave.cpp_CGrave_ctor_FUN_004cf2c0
// Address: 004cf2c0
// Address Range: [[004cf2c0, 004cf343]]
// Convention: __cdecl
// Signature: CGrave * __cdecl core_grave_cpp_CGrave_ctor_FUN_004cf2c0(CGrave *this_ptr)

#include "nocturne.h"

CGrave * __cdecl core_grave_cpp_CGrave_ctor_FUN_004cf2c0(CGrave *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408600((CDemonActor *)this_ptr);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  *(byte **)&this_ptr_00[-1].field_0x178 = &g_CGraveVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(this_ptr_00,(char *)0x5c47b6);
  *(uint *)(this_ptr_00 + 1) = 0;
  *(uint *)&this_ptr_00[1].field_0x4 = 0x41f00000;
  *(uint *)&this_ptr_00[1].field_0x8 = 0;
  *(uint *)&this_ptr_00[1].field_0xc = 0;
  *(uint *)&this_ptr_00[1].field_0x10 = 1;
  this_ptr_00[1].field_0x14 = 0;
  this_ptr_00[1].field_0x78 = 0;
  return (CGrave *)&this_ptr_00[-1].field_0x24;
}
