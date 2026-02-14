// Name: core_curtain.cpp_CCurtain_FUN_0044b060
// Address: 0044b060
// Address Range: [[0044b060, 0044b332]]
// Convention: __cdecl
// Signature: int __cdecl core_curtain_cpp_CCurtain_FUN_0044b060(CCurtain *this_ptr)

#include "nocturne.h"

int __cdecl core_curtain_cpp_CCurtain_FUN_0044b060(CCurtain *this_ptr)

{
  bool bVar1;
  CDemonRenderer *this_ptr_00;
  CBoundingBox3D *pCVar2;
  int iVar3;
  char *pcVar4;
  SCurtainVertex *pSVar5;
  SMRGLPrimitiveQuad *pSVar6;
  float in_stack_ffffffc4;
  float in_stack_ffffffc8;
  float in_stack_ffffffcc;
  CBoundingBox3D CStack_24;
  int iStack_c;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  pCVar2 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                     (&this_ptr->base,(CBoundingBox3D *)&stack0xffffffc4);
  iStack_c = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(pCVar2);
  this_ptr_00 = g_CDemonRendererPtr2;
  if (iStack_c == 0) goto LAB_0044b320;
  this_ptr->unk6[0] = '\x01';
  this_ptr->unk6[1] = '\0';
  this_ptr->unk6[2] = '\0';
  this_ptr->unk6[3] = '\0';
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(this_ptr_00);
  if (((iVar3 != 0) && (this_ptr->cinched_top != 0)) && (*(int *)(this_ptr->unk6 + 4) == 0)) {
    pCVar2 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_24);
    core_box_cpp_CBoundingBox3D_render_FUN_004210b0
              (pCVar2,(int)in_stack_ffffffc4,(int)in_stack_ffffffc8,(int)in_stack_ffffffcc);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
    return 1;
  }
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr2,this_ptr->opacity);
  iVar3 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,(SMRGLTextureBasic *)this_ptr->unk1);
  pSVar5 = this_ptr->unk3;
  pcVar4 = this_ptr->unk4 + 0xc;
  if (0 < this_ptr->unk2) {
    do {
      *(int *)pcVar4 = (int)ROUND(*(float *)pSVar5->unk * 256.0f);
      *(int *)(pcVar4 + 4) = (int)ROUND(*(float *)(pSVar5->unk + 4) * 256.0f);
      *(int *)(pcVar4 + 8) = (int)ROUND(*(float *)(pSVar5->unk + 8) * 256.0f);
      iVar3 = iVar3 + 1;
      pSVar5 = pSVar5 + 1;
      pcVar4 = pcVar4 + 0xc;
    } while (iVar3 < this_ptr->unk2);
  }
  core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0
            (g_CDemonSetPtr,this_ptr->unk2,(int *)(this_ptr->unk4 + 0xc));
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,1);
  bVar1 = 0 < g_RelativeZ;
  if (this_ptr->cinched_top == 0) {
    bVar1 = true;
LAB_0044b1a4:
    pSVar6 = (SMRGLPrimitiveQuad *)(this_ptr->unk4 + 0x2eec);
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,this_ptr->unk2,
               *(int *)(this_ptr->unk4 + 4) * *(int *)(this_ptr->unk4 + 8) * 2,(SInputFace *)pSVar6,
               (int)(this_ptr->unk4 + 0xc),4,0);
    if (this_ptr->opacity < 0xfde9) {
      for (iVar3 = 0; iVar3 < *(int *)(this_ptr->unk4 + 4) * *(int *)(this_ptr->unk4 + 8) * 2;
          iVar3 = iVar3 + 1) {
        engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
                  (g_CDemonRendererPtr2,&pSVar6->base);
        pSVar6 = pSVar6 + 1;
      }
    }
    else {
      core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
                (g_CDemonSetPtr,pSVar6,
                 *(int *)(this_ptr->unk4 + 4) * *(int *)(this_ptr->unk4 + 8) * 2,-1);
    }
  }
  else if (g_RelativeZ < 0) goto LAB_0044b1a4;
  if (bVar1) {
    pSVar6 = (SMRGLPrimitiveQuad *)(this_ptr->unk4 + 0x2616c);
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,this_ptr->unk2,
               *(int *)(this_ptr->unk4 + 4) * *(int *)(this_ptr->unk4 + 8) * 2,(SInputFace *)pSVar6,
               (int)(this_ptr->unk4 + 0xc),4,0);
    if (this_ptr->opacity < 0xfde9) {
      for (iVar3 = 0; iVar3 < *(int *)(this_ptr->unk4 + 4) * *(int *)(this_ptr->unk4 + 8) * 2;
          iVar3 = iVar3 + 1) {
        engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
                  (g_CDemonRendererPtr2,&pSVar6->base);
        pSVar6 = pSVar6 + 1;
      }
    }
    else {
      core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
                (g_CDemonSetPtr,pSVar6,
                 *(int *)(this_ptr->unk4 + 4) * *(int *)(this_ptr->unk4 + 8) * 2,-1);
    }
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
LAB_0044b320:
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  return iStack_c;
}
