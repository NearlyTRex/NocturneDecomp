// Name: core_trap.cpp_CTrap_ctor_FUN_00576450
// Address: 00576450
// Address Range: [[00576450, 0057649d]]
// Convention: __cdecl
// Signature: CTrap * __cdecl core_trap_cpp_CTrap_ctor_FUN_00576450(CTrap *this_ptr)

#include "nocturne.h"

CTrap * __cdecl core_trap_cpp_CTrap_ctor_FUN_00576450(CTrap *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408790((CDemonActor *)this_ptr);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                          ((CKeyFramedModelInstance *)(pCVar1 + 1));
  *(byte **)&this_ptr_00[-1].field_0x178 = &g_CTrapVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (this_ptr_00,"beartrap.kfm");
  *(uint *)&this_ptr_00[1].field_0x4 = 0;
  return (CTrap *)&this_ptr_00[-2].field_0x44;
}
