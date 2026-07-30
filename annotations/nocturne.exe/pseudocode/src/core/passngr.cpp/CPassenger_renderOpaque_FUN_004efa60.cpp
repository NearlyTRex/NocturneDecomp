// Name: core_passngr.cpp_CPassenger_renderOpaque_FUN_004efa60
// Address: 004efa60
// Address Range: [[004efa60, 004efb2f]]
// Convention: unknown
// Signature: int core_passngr_cpp_CPassenger_renderOpaque_FUN_004efa60(CCharacter *param_1)

#include "nocturne.h"

int core_passngr_cpp_CPassenger_renderOpaque_FUN_004efa60(CCharacter *param_1)

{
  CMorph *this_ptr;
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  CBoundingBox3D local_1c;
  
  if ((*(float *)(param_1[2].flames[0x20].off_event + 0x38) <= 1.0) && (param_1->render_active == 0)
     ) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&param_1->base);
    this_ptr_00 = (*((param_1->base).vtable._ub)->getBoundingBox)(&param_1->base,&local_1c);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
    if (iVar1 != 0) {
      if ((*(uint *)(param_1[2].flames[0x20].off_event + 0x38) & 0x7fffffff) != 0) {
        this_ptr = (CMorph *)(param_1[2].flames[0x1c].base.create_event + 0x18);
        core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340(this_ptr,0,&param_1->model,0);
        core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340
                  (this_ptr,1,
                   (CDeformableModelInstance *)
                   (*(int *)(param_1[2].flames[0x1c].base.create_event + 0x14) + 0x150),0);
        core_morph_cpp_CMorph_render_FUN_004e0820
                  (this_ptr,*(float *)(param_1[2].flames[0x20].off_event + 0x38));
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&param_1->base);
        return iVar1;
      }
      core_charactr_cpp_CCharacter_renderCharacter_FUN_00425c20(param_1);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&param_1->base);
    return iVar1;
  }
  return 0;
}
