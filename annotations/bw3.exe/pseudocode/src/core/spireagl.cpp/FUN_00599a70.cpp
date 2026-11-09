// Name: core_spireagl.cpp_FUN_00599a70
// Address: 00599a70
// Address Range: [[00599a70, 00599b14]]
// Convention: unknown
// Signature: undefined4 core_spireagl_cpp_FUN_00599a70(CDemonActor *param_1)

#include "nocturne.h"

uint core_spireagl_cpp_FUN_00599a70(CDemonActor *param_1)

{
  byte *this_ptr;
  
  if ((*(float *)&param_1[0x18c].field_0x80 <= 1.0) && (*(int *)&param_1[0x1b].field_0xb4 == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(param_1);
    if ((*(uint *)&param_1[0x18c].field_0x80 & 0x7fffffff) == 0) {
      core_charactr_cpp_FUN_0042d8e0(param_1);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(param_1);
      return 1;
    }
    this_ptr = &param_1[0x183].field_0x6c;
    core_morph_cpp_FUN_004fab90((CMorph *)this_ptr,0,(CDeformableModelInstance *)(param_1 + 1),0);
    core_morph_cpp_FUN_004fab90
              ((CMorph *)this_ptr,1,
               (CDeformableModelInstance *)(*(int *)&param_1[0x183].field_0x68 + 0x158),0);
    core_morph_cpp_CMorph_render_FUN_004fb0e0
              ((CMorph *)this_ptr,*(float *)&param_1[0x18c].field_0x80);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(param_1);
    return 1;
  }
  return 0;
}
