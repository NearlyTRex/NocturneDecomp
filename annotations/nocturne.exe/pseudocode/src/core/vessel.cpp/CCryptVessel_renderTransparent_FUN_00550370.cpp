// Name: core_vessel.cpp_CCryptVessel_renderTransparent_FUN_00550370
// Address: 00550370
// Address Range: [[00550370, 005504bf] [005504c1, 00550539]]
// Convention: __cdecl
// Signature: int __cdecl core_vessel_cpp_CCryptVessel_renderTransparent_FUN_00550370(CCryptVessel *this_ptr)

#include "nocturne.h"

int __cdecl core_vessel_cpp_CCryptVessel_renderTransparent_FUN_00550370(CCryptVessel *this_ptr)

{
  char cVar1;
  CKeyFramedModel *pCVar2;
  char *pcVar3;
  char *pcVar4;
  double dVar5;
  uint uVar6;
  CVector3f local_2c;
  CVector3f local_20;
  uint local_14;
  
  if (this_ptr->is_visible == 0) {
    return 0;
  }
  if (this_ptr->visual_type == 1) {
    core_flame_cpp_CFlame_renderTransparent_FUN_0048d5d0(&this_ptr->flame);
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (g_CDemonRenderer_PTR_005ae704,&(this_ptr->base).location.position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (g_CDemonRenderer_PTR_005ae704,&(this_ptr->base).orient.vec,(CVector3f *)0x0);
  local_20.x = 0.0;
  local_20.z = 0.0;
  local_20.y = this_ptr->spin_angle;
  local_2c.x = 0.0;
  local_2c.y = 2.2;
  local_2c.z = 0.0;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (g_CDemonRenderer_PTR_005ae704,&local_20,&local_2c);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
            (g_CDemonRenderer_PTR_005ae704,0xffff);
  if (this_ptr->visual_type == 2) {
    uVar6 = 0x5504fe;
    dVar5 = round((double)this_ptr->water_anim_timer);
    local_14 = (uint)ROUND(dVar5);
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->orb_model);
    _sprintf(pCVar2->texture_list[0].textures[0].texture_name,"BWATER%d.RAW",
               local_14 & 0xf,uVar6);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
              (g_CDemonRenderer_PTR_005ae704,48000);
  }
  else {
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->orb_model);
    pcVar3 = "MENUCLD2.RAW";
    pcVar4 = pCVar2->texture_list[0].textures[0].texture_name;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    if (this_ptr->visual_type == 0) {
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(g_CDemonRenderer_PTR_005ae704,1);
    }
    else {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
                (g_CDemonRenderer_PTR_005ae704,0x4000);
    }
  }
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
            (&this_ptr->orb_model,0.0,0x267);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(g_CDemonRenderer_PTR_005ae704,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(g_CDemonRenderer_PTR_005ae704);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(g_CDemonRenderer_PTR_005ae704);
  return 1;
}
