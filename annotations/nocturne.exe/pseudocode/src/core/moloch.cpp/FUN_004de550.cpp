// Name: core_moloch.cpp_FUN_004de550
// Address: 004de550
// Address Range: [[004de550, 004de675]]
// Convention: unknown
// Signature: int core_moloch_cpp_FUN_004de550(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_moloch_cpp_FUN_004de550(CCharacter *param_1)

{
  CMorph *this_ptr;
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  int iVar2;
  CBoundingBox3D local_1c;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_004613b0(DAT_005ae704);
  if (iVar1 == 0) {
    param_1->was_rendered_opaque = 0;
  }
  if (param_1->render_active == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&param_1->base);
    this_ptr_00 = (*((param_1->base).vtable._ub)->getBoundingBox)(&param_1->base,&local_1c);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
    if (iVar1 != 0) {
      iVar2 = param_1[2].flames[0x2a].burn_hero;
      param_1->was_rendered_opaque = 1;
      if (iVar2 == 0) {
        core_charactr_cpp_CCharacter_renderCharacter_FUN_00425c20(param_1);
      }
      else {
        this_ptr = (CMorph *)(param_1[2].flames[0x2b].base.create_event + 0x3c);
        core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340(this_ptr,0,&param_1->model,0);
        core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340
                  (this_ptr,1,(CDeformableModelInstance *)(param_1[2].flames[0x1d].on_event + 4),0);
        core_morph_cpp_CMorph_render_FUN_004e0820
                  (this_ptr,(float)param_1[2].flames[0x2a].burn_enemy / _DAT_005a0ab8);
      }
      if (_DAT_01cd4318 != 0) {
        iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
        if (iVar2 == 0) {
          core_motion_cpp_CMotionController_render_FUN_004e22b0
                    (&(param_1->model).motion_controller,&param_1->base);
          (*((param_1->base).vtable._ub)->renderTargetPoints)(&param_1->base);
        }
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&param_1->base);
    return iVar1;
  }
  return 0;
}
