// Name: core_filmreel.cpp_CFilmProjector_renderOpaque_FUN_004821d0
// Address: 004821d0
// Address Range: [[004821d0, 004822b3]]
// Convention: unknown
// Signature: int core_filmreel_cpp_CFilmProjector_renderOpaque_FUN_004821d0(CDemonActor *param_1)

#include "nocturne.h"

int core_filmreel_cpp_CFilmProjector_renderOpaque_FUN_004821d0(CDemonActor *param_1)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  CBoundingBox3D local_3c;
  CVector3f CStack_24;
  CVector3f CStack_18;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  this_ptr = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_3c);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
    return 0;
  }
  CStack_18.x = 0.0;
  CStack_18.z = param_1[2].previous_transform_state.position.z;
  CStack_18.y = 0.0;
  CStack_24.x = 0.0;
  CStack_24.z = 0.0;
  CStack_24.y = 2.0;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (DAT_005ae704,(CVector3f *)&DAT_02dd1184,&CStack_24);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (DAT_005ae704,&CStack_18,(CVector3f *)&DAT_02dd1184);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
            ((CKeyFramedModelInstance *)(param_1[1].create_event + 0x24),0.0,-1);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  return iVar1;
}
