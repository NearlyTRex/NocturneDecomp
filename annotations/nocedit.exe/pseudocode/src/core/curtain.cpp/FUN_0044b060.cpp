// Name: core_curtain.cpp_FUN_0044b060
// Address: 0044b060
// Address Range: [[0044b060, 0044b332]]
// Convention: unknown
// Signature: undefined core_curtain.cpp_FUN_0044b060()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_other_curtain.cpp_FUN_0044b060(uint param_1) */

uint core_curtain_cpp_FUN_0044b060(void)

{
  bool bVar1;
  CDemonRenderer *this_ptr;
  CBoundingBox3D *pCVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  SMRGLHeaderPrimitive *primitive_array;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  float unaff_ESI;
  SMRGLPrimitiveQuad *primitive_array_00;
  int unaff_retaddr;
  CDemonActor *in_stack_00000004;
  uint in_stack_00000034;
  float fStack_34;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  pCVar2 = (*in_stack_00000004->vtable->getBoundingBox)
                     (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffc8);
  iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(pCVar2);
  this_ptr = g_CDemonRendererPtr;
  if (iVar3 == 0) goto LAB_0044b320;
  in_stack_00000004[0x4ba].previous_transform_state.dirty_flags = 1;
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(this_ptr);
  if (((iVar3 != 0) && (in_stack_00000004[1].location.position.z != 0.0)) &&
     (in_stack_00000004[0x4ba].field25_0x144 == 0)) {
    pCVar2 = (*in_stack_00000004->vtable->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)&stack0xfffffffc);
    core_box_cpp_CBoundingBox3D_render_FUN_004210b0(pCVar2,unaff_EBP,(int)unaff_ESI,unaff_retaddr);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
    return 1;
  }
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr,(int)in_stack_00000004[1].location.position.y);
  iVar3 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,(SMRGLTextureBasic *)(in_stack_00000004[1].actor_name + 0xc));
  piVar5 = (int *)(in_stack_00000004[1].create_event + 0x38);
  piVar4 = &in_stack_00000004[0x152].field17_0x104;
  if (0 < *(int *)(in_stack_00000004[1].create_event + 0x34)) {
    do {
      *piVar4 = (int)ROUND((float)*piVar5 * _DAT_0065c4c0);
      ((CVector3i *)(piVar4 + 1))->x = (int)ROUND((float)piVar5[1] * _DAT_0065c4c0);
      piVar4[2] = (int)ROUND((float)piVar5[2] * _DAT_0065c4c0);
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 0x1d;
      piVar4 = piVar4 + 3;
    } while (iVar3 < *(int *)(in_stack_00000004[1].create_event + 0x34));
  }
  core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0
            (g_CDemonSetPtr,*(int *)(in_stack_00000004[1].create_event + 0x34),
             &in_stack_00000004[0x152].field17_0x104);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  bVar1 = 0 < g_RelativeZ;
  if (in_stack_00000004[1].location.position.z == 0.0) {
    bVar1 = true;
LAB_0044b1a4:
    primitive_array = (SMRGLHeaderPrimitive *)&in_stack_00000004[0x175].field11_0xdc;
    fStack_34 = 6.308613e-39;
    core_set_cpp_CDemonSet_lightVerticies_FUN_0056eac0
              (g_CDemonSetPtr,*(int *)(in_stack_00000004[1].create_event + 0x34),
               in_stack_00000004[0x152].is_transparent * in_stack_00000004[0x152].field16_0x100 * 2,
               (SInputFace *)primitive_array,(int)&in_stack_00000004[0x152].field17_0x104,4,0);
    if ((int)in_stack_00000004[1].location.position.y < 0xfde9) {
      for (iVar3 = 0;
          iVar3 < in_stack_00000004[0x152].is_transparent * in_stack_00000004[0x152].field16_0x100 *
                  2; iVar3 = iVar3 + 1) {
        engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
                  (g_CDemonRendererPtr,primitive_array);
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
      for (iVar3 = 0;
          iVar3 < in_stack_00000004[0x152].is_transparent * in_stack_00000004[0x152].field16_0x100 *
                  2; iVar3 = iVar3 + 1) {
        engine_drender_cpp_CDemonRenderer_renderEnhancedQualityVariant_FUN_0048bdc0
                  (g_CDemonRendererPtr,&primitive_array_00->base);
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
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
LAB_0044b320:
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return in_stack_00000034;
}
