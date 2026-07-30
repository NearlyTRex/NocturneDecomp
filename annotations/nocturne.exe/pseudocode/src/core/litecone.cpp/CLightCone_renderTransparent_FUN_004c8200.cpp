// Name: core_litecone.cpp_CLightCone_renderTransparent_FUN_004c8200
// Address: 004c8200
// Address Range: [[004c8200, 004c8288]]
// Convention: unknown
// Signature: int core_litecone_cpp_CLightCone_renderTransparent_FUN_004c8200(CDemonActor *param_1)

#include "nocturne.h"

int core_litecone_cpp_CLightCone_renderTransparent_FUN_004c8200(CDemonActor *param_1)

{
  int iVar1;
  CBoundingBox3D *this_ptr;
  CBoundingBox3D local_1c;
  
  if (*(int *)(param_1[1].actor_name + 8) != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
    if (iVar1 == 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
      this_ptr = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_1c);
      iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
      if (iVar1 != 0) {
        core_dlight_cpp_renderConeLightGeometry_FUN_00451b70
                  (&(param_1->location).position,&(param_1->orient).vec,
                   *(float *)param_1[1].actor_name,*(float *)(param_1[1].actor_name + 4));
      }
      return iVar1;
    }
  }
  return 0;
}
