// Name: core_emitter.cpp_CEmitter_setup_FUN_004869b0
// Address: 004869b0
// Address Range: [[004869b0, 00486a73]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_setup_FUN_004869b0(CEmitter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_emitter_cpp_CEmitter_setup_FUN_004869b0(CEmitter *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408a80((CDemonActor *)this_ptr);
  *(uint *)&this_ptr->field_0x5c8 = *(uint *)&this_ptr->field_0x390;
  if (*(int *)&this_ptr->field_0x2b4 == 4) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
              ((CKeyFramedModelInstance *)&this_ptr->field_0x3a4);
  }
  if (*(int *)&this_ptr->field_0x2b4 == 0xb) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
              ((CKeyFramedModelInstance *)&this_ptr->field_0x3a4);
  }
  if (*(int *)&this_ptr->field_0x2b4 == 0xc) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
              ((CKeyFramedModelInstance *)&this_ptr->field_0x3a4);
  }
  if (*(int *)&this_ptr->field_0x2b4 == 0xd) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
              ((CKeyFramedModelInstance *)&this_ptr->field_0x3a4);
  }
  if (*(int *)&this_ptr->field_0x54c == 0) {
    *(uint *)&this_ptr->field_0x54c = *(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  }
  *(uint *)&this_ptr->field_0x5b8 = 0;
  *(uint *)&this_ptr->field_0x60c = 0;
  *(uint *)&this_ptr->field_0x610 = *(uint *)&this_ptr->field_0x2c4;
  return;
}
