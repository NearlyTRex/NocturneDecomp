// Name: core_vessel.cpp_CCryptVessel_renderTransparent_FUN_005e98b0
// Address: 005e98b0
// Address Range: [[005e98b0, 005e99ff] [005e9a01, 005e9a79]]
// Convention: __cdecl
// Signature: int __cdecl core_vessel_cpp_CCryptVessel_renderTransparent_FUN_005e98b0(CCryptVessel *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl core_vessel_cpp_CCryptVessel_renderTransparent_FUN_005e98b0(CCryptVessel *this_ptr)

{
  float fVar1;
  char cVar2;
  CKeyFramedModel *pCVar2;
  CKeyFramedModel *pCVar3;
  char *pcVar3;
  char *pcVar4;
  CVector3i local_20;
  uint local_14;
  
  if (this_ptr->is_visible == 0) {
    return 0;
  }
  if (this_ptr->visual_type == 1) {
    core_flame_cpp_CFlame_renderTransparent_FUN_004ca110(&this_ptr->flame);
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&(this_ptr->base).location.position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)&(this_ptr->base).orient.vec,(CVector3i *)0x0);
  local_20.x = 0;
  local_20.z = 0;
  local_20.y = (int)this_ptr->spin_angle;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,&local_20,(CVector3i *)&stack0xffffffd4);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0xffff);
  if (this_ptr->visual_type == 2) {
    fVar1 = this_ptr->water_anim_timer;
    pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->orb_model);
    _sprintf
              (pCVar3->texture_list[0].textures[0].texture_name,"BWATER%d.RAW",
               (int)ROUND(ROUND(fVar1)) & 0xf);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,48000);
  }
  else {
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->orb_model);
    pcVar3 = "MENUCLD2.RAW";
    pcVar4 = pCVar2->texture_list[0].textures[0].texture_name;
    do {
      cVar2 = *pcVar3;
      *pcVar4 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar2;
      pcVar4 = pcVar4 + 2;
    } while (cVar2 != '\0');
    if (this_ptr->visual_type == 0) {
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
    }
    else {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0x4000);
    }
  }
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            (&this_ptr->orb_model,0.0,0x267);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
  return 1;
}
