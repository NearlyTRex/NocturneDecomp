// Name: core_curtain.cpp_FUN_0044b060
// Address: 0044b060
// Address Range: [[0044b060, 0044b332]]
// Convention: unknown
// Signature: undefined core_curtain.cpp_FUN_0044b060()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_other_curtain.cpp_FUN_0044b060(uint param_1) */

int core_curtain_cpp_FUN_0044b060(void)

{
  bool bVar1;
  CDemonRenderer *this_ptr;
  CBoundingBox3D *pCVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  SMRGLHeaderPrimitive *primitive_array;
  SMRGLPrimitiveQuad *primitive_array_00;
  CDemonActor *in_stack_00000004;
  float in_stack_ffffffd4;
  float in_stack_ffffffd8;
  int in_stack_ffffffdc;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  pCVar2 = (*in_stack_00000004->vtable->getBoundingBox)
                     (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffc4);
  iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(pCVar2);
  this_ptr = g_CDemonRendererPtr2;
  if (iVar3 == 0) goto LAB_0044b320;
  in_stack_00000004[0x4ba].previous_transform_state.dirty_flags = 1;
  iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(this_ptr);
  if (((iVar4 != 0) && (in_stack_00000004[1].location.position.z != 0.0)) &&
     (in_stack_00000004[0x4ba].field25_0x144 == 0)) {
    pCVar2 = (*in_stack_00000004->vtable->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffe4);
    core_box_cpp_CBoundingBox3D_render_FUN_004210b0
              (pCVar2,(int)in_stack_ffffffd4,(int)in_stack_ffffffd8,in_stack_ffffffdc);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
    return 1;
  }
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr2,(int)in_stack_00000004[1].location.position.y);
  iVar4 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,(SMRGLTextureBasic *)(in_stack_00000004[1].actor_name + 0xc));
  piVar6 = (int *)(in_stack_00000004[1].create_event + 0x38);
  piVar5 = &in_stack_00000004[0x152].field17_0x104;
  if (0 < *(int *)(in_stack_00000004[1].create_event + 0x34)) {
    do {
      *piVar5 = (int)ROUND((float)*piVar6 * _DAT_0065c4c0);
      ((CVector3i *)(piVar5 + 1))->x = (int)ROUND((float)piVar6[1] * _DAT_0065c4c0);
      piVar5[2] = (int)ROUND((float)piVar6[2] * _DAT_0065c4c0);
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 0x1d;
      piVar5 = piVar5 + 3;
    } while (iVar4 < *(int *)(in_stack_00000004[1].create_event + 0x34));
  }
  core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0
            (g_CDemonSetPtr,*(int *)(in_stack_00000004[1].create_event + 0x34),
             &in_stack_00000004[0x152].field17_0x104);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,1);
  bVar1 = 0 < g_RelativeZ;
  if (in_stack_00000004[1].location.position.z == 0.0) {
    bVar1 = true;
LAB_0044b1a4:
    primitive_array = (SMRGLHeaderPrimitive *)&in_stack_00000004[0x175].field11_0xdc;
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,*(int *)(in_stack_00000004[1].create_event + 0x34),
               in_stack_00000004[0x152].is_transparent * in_stack_00000004[0x152].field16_0x100 * 2,
               (SInputFace *)primitive_array,(int)&in_stack_00000004[0x152].field17_0x104,4,0);
    if ((int)in_stack_00000004[1].location.position.y < 0xfde9) {
      for (iVar4 = 0;
          iVar4 < in_stack_00000004[0x152].is_transparent * in_stack_00000004[0x152].field16_0x100 *
                  2; iVar4 = iVar4 + 1) {
        engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
                  (g_CDemonRendererPtr2,primitive_array);
        primitive_array = primitive_array + 3;
      }
    }
    else {
      core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
                (g_CDemonSetPtr,(SMRGLPrimitiveQuad *)primitive_array,
                 in_stack_00000004[0x152].is_transparent * in_stack_00000004[0x152].field16_0x100 *
                 2,-1);
    }
  }
  else if (g_RelativeZ < 0) goto LAB_0044b1a4;
  if (bVar1) {
    primitive_array_00 = (SMRGLPrimitiveQuad *)(in_stack_00000004[0x318].orient_matrix.m + 2);
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,*(int *)(in_stack_00000004[1].create_event + 0x34),
               in_stack_00000004[0x152].is_transparent * in_stack_00000004[0x152].field16_0x100 * 2,
               (SInputFace *)primitive_array_00,(int)&in_stack_00000004[0x152].field17_0x104,4,0);
    if ((int)in_stack_00000004[1].location.position.y < 0xfde9) {
      for (iVar4 = 0;
          iVar4 < in_stack_00000004[0x152].is_transparent * in_stack_00000004[0x152].field16_0x100 *
                  2; iVar4 = iVar4 + 1) {
        engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
                  (g_CDemonRendererPtr2,&primitive_array_00->base);
        primitive_array_00 = primitive_array_00 + 1;
      }
    }
    else {
      core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
                (g_CDemonSetPtr,primitive_array_00,
                 in_stack_00000004[0x152].is_transparent * in_stack_00000004[0x152].field16_0x100 *
                 2,-1);
    }
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
LAB_0044b320:
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return iVar3;
}
