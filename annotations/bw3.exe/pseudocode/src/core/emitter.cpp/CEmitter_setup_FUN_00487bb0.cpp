// Name: core_emitter.cpp_CEmitter_setup_FUN_00487bb0
// Address: 00487bb0
// Address Range: [[00487bb0, 00487c73]]
// Convention: __cdecl
// Signature: void __cdecl core_emitter_cpp_CEmitter_setup_FUN_00487bb0(CEmitter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_emitter_cpp_CEmitter_setup_FUN_00487bb0(CEmitter *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408890((CDemonActor *)this_ptr);
  *(uint *)&this_ptr->field_0x46c = *(uint *)&this_ptr->field_0x234;
  if (*(int *)&this_ptr->field_0x158 == 4) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
              ((CKeyFramedModelInstance *)&this_ptr->field_0x248);
  }
  if (*(int *)&this_ptr->field_0x158 == 0xb) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
              ((CKeyFramedModelInstance *)&this_ptr->field_0x248);
  }
  if (*(int *)&this_ptr->field_0x158 == 0xc) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
              ((CKeyFramedModelInstance *)&this_ptr->field_0x248);
  }
  if (*(int *)&this_ptr->field_0x158 == 0xd) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
              ((CKeyFramedModelInstance *)&this_ptr->field_0x248);
  }
  if (*(int *)&this_ptr->field_0x3f0 == 0) {
    *(uint *)&this_ptr->field_0x3f0 = *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
  }
  *(uint *)&this_ptr->field_0x45c = 0;
  *(uint *)&this_ptr->field_0x4b0 = 0;
  *(uint *)&this_ptr->field_0x4b4 = *(uint *)&this_ptr->field_0x168;
  return;
}
