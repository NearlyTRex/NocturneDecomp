// Name: core_bodypart.cpp_CBodyPart_renderTransparent_FUN_00416430
// Address: 00416430
// Address Range: [[00416430, 004164f4]]
// Convention: unknown
// Signature: undefined4 core_bodypart_cpp_CBodyPart_renderTransparent_FUN_00416430(CBodyPart *param_1)

#include "nocturne.h"

uint core_bodypart_cpp_CBodyPart_renderTransparent_FUN_00416430(CBodyPart *param_1)

{
  SBodyPartFire *pSVar1;
  int iVar2;
  
  if ((param_1->is_visible != 0) &&
     ((param_1->render_in_background < 2 || (param_1->fire_count != 0)))) {
    if (param_1->transparent_geometry_flag != 0) {
      g_CDemonSet_PTR_005be368->disable_directional_lighting = param_1->dont_use_normals;
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&param_1->base);
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
                (DAT_005ae704,param_1->render_alpha);
      core_bodypart_cpp_CBodyPart_renderGeometry_FUN_00416030(param_1,0x2e7);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&param_1->base);
      g_CDemonSet_PTR_005be368->disable_directional_lighting = 0;
    }
    iVar2 = 0;
    if (0 < param_1->fire_count) {
      pSVar1 = param_1->fires;
      do {
        core_flame_cpp_CFlame_renderTransparent_FUN_0048d5d0(&pSVar1->flame);
        iVar2 = iVar2 + 1;
        pSVar1 = (SBodyPartFire *)(&pSVar1->flame + 1);
      } while (iVar2 < param_1->fire_count);
    }
    return 1;
  }
  return 0;
}
