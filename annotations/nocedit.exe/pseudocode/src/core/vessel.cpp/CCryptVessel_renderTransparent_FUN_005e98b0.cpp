// Name: core_vessel.cpp_CCryptVessel_renderTransparent_FUN_005e98b0
// Address: 005e98b0
// Address Range: [[005e98b0, 005e99ff] [005e9a01, 005e9a79]]
// Convention: __cdecl
// Signature: int __cdecl core_vessel_cpp_CCryptVessel_renderTransparent_FUN_005e98b0(CCryptVessel *this_ptr)

#include "nocturne.h"

int __cdecl core_vessel_cpp_CCryptVessel_renderTransparent_FUN_005e98b0(CCryptVessel *this_ptr)

{
  char cVar1;
  CKeyFramedModel *pCVar2;
  char *pcVar3;
  char *pcVar4;
  double dVar5;
  uint uVar6;
  CVector3i local_2c;
  CVector3i local_20;
  uint local_14;
  
  if (this_ptr->unk6 == 0) {
    return 0;
  }
  if (this_ptr->visual_type == 1) {
    core_flame_cpp_CFlame_renderTransparent_FUN_004ca110(&this_ptr->unk3);
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&(this_ptr->base).location.position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)&(this_ptr->base).orient.vec,(CVector3i *)0x0);
  local_20.x = 0;
  local_20.z = 0;
  local_20.y = this_ptr->unk4;
  local_2c.x = 0;
  local_2c.y = 0x400ccccd;
  local_2c.z = 0;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,&local_20,&local_2c);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0xffff);
  if (this_ptr->visual_type == 2) {
    uVar6 = 0x5e9a3e;
    dVar5 = round((double)this_ptr->unk7);
    local_14 = (uint)ROUND(dVar5);
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->unk5);
    _sprintf
              (pCVar2->texture_list[0].base.texture_name,"BWATER%d.RAW",local_14 & 0xf,
               uVar6);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,48000);
  }
  else {
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->unk5);
    pcVar3 = "MENUCLD2.RAW";
    pcVar4 = pCVar2->texture_list[0].base.texture_name;
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
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
    }
    else {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0x4000);
    }
  }
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            (&this_ptr->unk5,0.0,0x267);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return 1;
}
