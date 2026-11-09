// Name: core_backgnd.cpp_CBackgroundActor_ctor_FUN_0040f330
// Address: 0040f330
// Address Range: [[0040f330, 0040f391]]
// Convention: unknown
// Signature: CBackgroundActor * core_backgnd_cpp_CBackgroundActor_ctor_FUN_0040f330(CBackgroundActor *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CBackgroundActor * core_backgnd_cpp_CBackgroundActor_ctor_FUN_0040f330(CBackgroundActor *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408790((CDemonActor *)this_ptr);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                          ((CKeyFramedModelInstance *)&pCVar1[1].field_0x4);
  *(byte **)&this_ptr_00[-1].field_0x174 = &g_CBackgroundActorVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (this_ptr_00,"candle.kfm");
  *(uint *)(this_ptr_00 + 1) = 0;
  *(uint *)&this_ptr_00[1].field_0x4 = 0;
  *(uint *)&this_ptr_00[-1].field_0x178 = 1;
  return (CBackgroundActor *)&this_ptr_00[-2].field_0x40;
}
