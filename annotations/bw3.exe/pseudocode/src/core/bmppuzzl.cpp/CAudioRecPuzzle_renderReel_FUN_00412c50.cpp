// Name: core_bmppuzzl.cpp_CAudioRecPuzzle_renderReel_FUN_00412c50
// Address: 00412c50
// Address Range: [[00412c50, 00412ed0]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_renderReel_FUN_00412c50(CAudioRecPuzzle *this_ptr,int param_2,int param_3,float param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bmppuzzl_cpp_CAudioRecPuzzle_renderReel_FUN_00412c50(CAudioRecPuzzle *this_ptr,int param_2,int param_3,float param_4,int param_5)

{
  CDemonSet *pCVar1;
  CKeyFramedModel *pCVar2;
  int iVar3;
  int width;
  CBoundingBox3D *pCVar4;
  float *pfVar5;
  byte bVar6;
  float afStackY_1040 [1007];
  CDemonRenderer *this_ptr_00;
  CKeyFramedModelInstance *this_ptr_01;
  CVector3f *euler_angles;
  CVector3f *translation;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  float fStack_40;
  float afStack_3c [4];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  CVector3f CStack_1c;
  
  pCVar1 = g_CDemonSetPtr;
  bVar6 = 0;
  width = 0xfc;
  if (0x280 < DAT_005fba18) {
    param_2 = (param_2 * 0x280) / DAT_005fba18;
    param_3 = (param_3 * 0x1e0) / DAT_005fba1c;
    width = (int)(0x27600 / (longlong)DAT_005fba18);
  }
  g_CDemonSetPtr->rendering_mode = 1;
  (pCVar1->light_direction).x = -0x482b;
  (pCVar1->light_direction).y = -0x482b;
  (pCVar1->light_direction).z = 0x482b;
  pCVar1->ambient_base_quick = 32000;
  engine_special_cpp_fillDepthRegion_FUN_00560ec2
            (param_2,param_2 + width + -1,param_3,param_3 + width + -1);
  this_ptr_01 = &this_ptr->reel_model;
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(this_ptr_01);
  pCVar4 = pCVar2->frame_bounds;
  pfVar5 = &stack0xffffff90;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = (pCVar4->min).x;
    pCVar4 = (CBoundingBox3D *)((int)pCVar4 + (uint)bVar6 * -8 + 4);
    pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
  }
  engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0046d2f0
            (DAT_005f2afc,param_2,param_3,width,width);
  CStack_4c.z = -2.0;
  CStack_4c.x = 0.0;
  CStack_4c.y = 0.0;
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
            (DAT_005f2afc,&CStack_4c);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0046d090(DAT_005f2afc,36.0);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046cc10
            (DAT_005f2afc,(CVector3f *)&DAT_02cfd900);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,(CVector3f *)&DAT_02cfd900);
  afStack_3c[2] = fStack_70 + fStack_64;
  afStack_3c[3] = fStack_6c + fStack_60;
  fStack_2c = fStack_68 + fStack_5c;
  fStack_28 = fStack_70 + fStack_64;
  afStack_3c[(uint)bVar6 * -2 + 6] = afStack_3c[(uint)bVar6 * -2 + 3];
  afStack_3c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
       afStack_3c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
  translation = (CVector3f *)0x0;
  CStack_1c.z = param_4;
  euler_angles = &CStack_1c;
  _DAT_01c6e24c = 0;
  fStack_40 = fStack_28 * _DAT_005b67c6;
  afStack_3c[0] = fStack_24 * _DAT_005b67c6;
  afStack_3c[1] = fStack_20 * _DAT_005b67c6;
  CStack_58.x = fStack_28 * _DAT_005b67c6;
  *(float *)((int)&CStack_58 + (uint)bVar6 * -8 + 4) = afStack_3c[(uint)bVar6 * -2];
  this_ptr_00 = DAT_005f2afc;
  *(float *)((int)&CStack_58 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       afStack_3c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (this_ptr_00,euler_angles,translation);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (DAT_005f2afc,(CVector3f *)&DAT_02cfd900,&CStack_58);
  if (param_5 == 0) {
    this_ptr_01 = &this_ptr->reel_shadow_model;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(this_ptr_01,0.0,-1);
  engine_drender_cpp_pop_FUN_0046d080();
  engine_drender_cpp_pop_FUN_0046d080();
  engine_drender_cpp_popViewport_FUN_0046d320();
  g_CDemonSetPtr->rendering_mode = 0;
  return;
}
