// Name: core_emitter.cpp_CEmitter_setup_FUN_0049f010
// Address: 0049f010
// Address Range: [[0049f010, 0049f0d3]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_setup_FUN_0049f010(CEmitter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_emitter_cpp_CEmitter_setup_FUN_0049f010(CEmitter *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408850((CDemonActor *)this_ptr);
  *(uint *)&this_ptr->field_0x46c = *(uint *)&this_ptr->field_0x234;
  if (*(int *)&this_ptr->field_0x158 == 4) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
              ((CKeyFramedModelInstance *)&this_ptr->field_0x248);
  }
  if (*(int *)&this_ptr->field_0x158 == 0xb) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
              ((CKeyFramedModelInstance *)&this_ptr->field_0x248);
  }
  if (*(int *)&this_ptr->field_0x158 == 0xc) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
              ((CKeyFramedModelInstance *)&this_ptr->field_0x248);
  }
  if (*(int *)&this_ptr->field_0x158 == 0xd) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
              ((CKeyFramedModelInstance *)&this_ptr->field_0x248);
  }
  if (*(int *)&this_ptr->field_0x3f0 == 0) {
    *(uint *)&this_ptr->field_0x3f0 = *(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  }
  *(uint *)&this_ptr->field_0x45c = 0;
  *(uint *)&this_ptr->field_0x4b0 = 0;
  *(uint *)&this_ptr->field_0x4b4 = *(uint *)&this_ptr->field_0x168;
  return;
}
