// Name: core_mimic.cpp_FUN_004d5b20
// Address: 004d5b20
// Address Range: [[004d5b20, 004d5ba1]]
// Convention: unknown
// Signature: void core_mimic_cpp_FUN_004d5b20(CDemonActor *param_1,int param_2)

#include "nocturne.h"

void core_mimic_cpp_FUN_004d5b20(CDemonActor *param_1,int param_2)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  CBoundingBox3D local_1c;
  
  if (param_1[0x8f].platform_position_delta.x != 0.0) {
    if (param_2 != 0) {
      param_1[0x1b].create_event[0x1c] = '\x01';
      param_1[0x1b].create_event[0x1d] = '\0';
      param_1[0x1b].create_event[0x1e] = '\0';
      param_1[0x1b].create_event[0x1f] = '\0';
    }
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
    this_ptr = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_1c);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr);
    if (iVar1 != 0) {
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
                ((CDeformableModelInstance *)(param_1 + 1),-1,0xffffffff,1,0);
      core_cloth_cpp_CCloth_render_FUN_00437db0
                ((CCloth *)&param_1[0x90].platform_orientation_delta,(CDeformableModelInstance *)0x0
                );
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  }
  return;
}
