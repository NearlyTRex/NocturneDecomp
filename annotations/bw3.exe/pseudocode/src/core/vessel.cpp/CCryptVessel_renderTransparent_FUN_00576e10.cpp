// Name: core_vessel.cpp_CCryptVessel_renderTransparent_FUN_00576e10
// Address: 00576e10
// Address Range: [[00576e10, 00576f5f] [00576f61, 00576fd9]]
// Convention: __cdecl
// Signature: int __cdecl core_vessel_cpp_CCryptVessel_renderTransparent_FUN_00576e10(CCryptVessel *this_ptr)

#include "nocturne.h"

int __cdecl core_vessel_cpp_CCryptVessel_renderTransparent_FUN_00576e10(CCryptVessel *this_ptr)

{
  char cVar1;
  CKeyFramedModel *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  char *pcVar4;
  float10 fVar5;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  int iStack_14;
  
  if (this_ptr->is_visible == 0) {
    return 0;
  }
  if (this_ptr->visual_type == CRYPT_VESSEL_FIRE) {
    core_flame_cpp_CFlame_renderTransparent_FUN_004a6090(&this_ptr->flame);
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,&(this_ptr->base).location.position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (DAT_005f2afc,&(this_ptr->base).orient.vec,(CVector3f *)0x0);
  CStack_20.x = 0.0;
  CStack_20.z = 0.0;
  CStack_20.y = this_ptr->spin_angle;
  CStack_2c.x = 0.0;
  CStack_2c.y = 2.2;
  CStack_2c.z = 0.0;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (DAT_005f2afc,&CStack_20,&CStack_2c);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,0xffff);
  if (this_ptr->visual_type == CRYPT_VESSEL_WATER) {
    fVar5 = (float10)this_ptr->water_anim_timer;
    this_ptr_00 = (CKeyFramedModelInstance *)round();
    iStack_14 = (int)ROUND(fVar5);
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(this_ptr_00);
    _sprintf(pCVar2->texture_list[0].texture_name,"BWATER%d.RAW")
    ;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,48000);
  }
  else {
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(&this_ptr->orb_model);
    pcVar3 = "@MENUCLD2.RAW" + 1;
    pcVar4 = pCVar2->texture_list[0].texture_name;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    if (this_ptr->visual_type == CRYPT_VESSEL_AIR) {
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
    }
    else {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,0x4000);
    }
  }
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
            (&this_ptr->orb_model,0.0,0x267);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
  engine_matrix_c_pop_FUN_0046d080();
  engine_matrix_c_pop_FUN_0046d080();
  return 1;
}
