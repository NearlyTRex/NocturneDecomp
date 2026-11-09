// Name: core_ladder.cpp_CLadder_ctor_FUN_004df650
// Address: 004df650
// Address Range: [[004df650, 004df6f5]]
// Convention: __cdecl
// Signature: CLadder * __cdecl core_ladder_cpp_CLadder_ctor_FUN_004df650(CLadder *this_ptr)

#include "nocturne.h"

CLadder * __cdecl core_ladder_cpp_CLadder_ctor_FUN_004df650(CLadder *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408600((CDemonActor *)this_ptr);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  *(byte **)&this_ptr_00[-1].field_0x178 = &g_CLadderVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(this_ptr_00,(char *)0x5c6845);
  *(uint *)(this_ptr_00 + 1) = 0x40000000;
  *(uint *)&this_ptr_00[1].field_0x4 = 0x41200000;
  *(uint *)&this_ptr_00[1].field_0x8 = 0;
  *(uint *)&this_ptr_00[1].field_0xc = 0;
  *(uint *)&this_ptr_00[1].field_0x18 = 0;
  *(uint *)&this_ptr_00[1].field_0x14 = *(uint *)&this_ptr_00[1].field_0x18;
  *(uint *)&this_ptr_00[1].field_0x10 = *(uint *)&this_ptr_00[1].field_0x14;
  *(uint *)&this_ptr_00[1].field_0x24 = 0;
  *(uint *)&this_ptr_00[1].field_0x20 = *(uint *)&this_ptr_00[1].field_0x24;
  *(uint *)&this_ptr_00[1].field_0x1c = *(uint *)&this_ptr_00[1].field_0x20;
  *(uint *)&this_ptr_00[1].field_0x28 = 0;
  return (CLadder *)&this_ptr_00[-1].field_0x24;
}
