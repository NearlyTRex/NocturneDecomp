// Name: core_flame.cpp_CFlame_renderTransparent_FUN_004ca110
// Address: 004ca110
// Address Range: [[004ca110, 004ca626] [004ca64e, 004ca659] [004ca65d, 004ca70b] [004caa15, 004caa6f]]
// Convention: __cdecl
// Signature: int __cdecl core_flame_cpp_CFlame_renderTransparent_FUN_004ca110(CFlame *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl core_flame_cpp_CFlame_renderTransparent_FUN_004ca110(CFlame *this_ptr)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CDemonRenderer *this_ptr_00;
  int iVar5;
  CBoundingBox3D *this_ptr_01;
  SProjectedVertex *point;
  byte bVar6;
  uint auStackY_1088 [973];
  SMRGLHeaderPrimitive SStack_144;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  SMRGLHeaderPrimitive SStack_11c;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  CBoundingBox3D local_f4;
  CVector3i CStack_dc;
  CVector3i CStack_d0;
  CVector3i CStack_c4;
  CVector3i CStack_b8;
  CVector3i CStack_ac;
  CVector3i CStack_a0;
  CVector3i CStack_94;
  CVector3i CStack_88;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  CVector3i CStack_70;
  CVector3i CStack_64;
  CVector3i CStack_58;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  CVector3i CStack_40;
  CVector3i CStack_34;
  CVector3i CStack_28;
  float fStack_1c;
  int iStack_18;
  int iStack_14;
  float fStack_10;
  
  bVar6 = 0;
  if (((this_ptr->flame_state != 0) || (g_CDemonMissionPtr->is_in_editor != 0)) &&
     (iVar5 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar5 == 0)) {
    if ((g_CDemonMissionPtr->is_in_editor != 0) &&
       (this_ptr == (CFlame *)g_CDemonMissionPtr->selected_actor)) {
      core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0
                (&((CFlame *)g_CDemonMissionPtr->selected_actor)->globe);
    }
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
    if (this_ptr->do_visibility_check != 0) {
      this_ptr_01 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_f4);
      iVar5 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_01);
      this_ptr->is_visible = iVar5;
    }
    if ((this_ptr->is_visible != 0) &&
       (fVar2 = (this_ptr->flame_size).y, fVar3 = (this_ptr->flame_size).x,
       fVar4 = (this_ptr->flame_size).z,
       1.0 < SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) * this_ptr->globe_scalar)) {
      core_set_cpp_CDemonSet_addQueuedCoronaGlobe_FUN_0056d140(g_CDemonSetPtr,&this_ptr->globe);
    }
    if ((this_ptr->is_visible != 0) && (this_ptr->which_flame != 3)) {
      engine_drender_cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
                (g_CDemonRendererPtr2,&CStack_64);
      CStack_58.x = CStack_64.x;
      *(uint *)((int)&CStack_58 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_64 + (uint)bVar6 * -8 + 4);
      *(uint *)((int)&CStack_58 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_64 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      CStack_58.x = 0;
      CStack_58.y = 0;
      engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
                (g_CDemonRendererPtr2,&CStack_58,(CVector3i *)0x0);
      CStack_ac.x = 0;
      CStack_ac.y = 0;
      CStack_ac.z = 0;
      engine_drender_cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
                (g_CDemonRendererPtr2,&CStack_a0);
      iStack_18 = 1;
      CStack_58.x = CStack_a0.x;
      *(uint *)((int)&CStack_58 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_a0 + (uint)bVar6 * -8 + 4);
      *(uint *)((int)&CStack_58 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_a0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      if ((0x2000 < CStack_58.x) || (CStack_58.x < -0x2000)) {
        iStack_18 = 3;
      }
      iVar5 = 0;
      if (0 < iStack_18) {
        do {
          engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
                    (g_CDemonRendererPtr2,&CStack_ac,(CVector3i *)0x0);
          fStack_7c = (this_ptr->flame_size).x * 0.5f;
          fStack_78 = 0.0;
          fStack_74 = 0.0;
          CStack_dc.x = (int)ROUND(fStack_7c * 256.0f);
          CStack_dc.y = (int)ROUND(256.0f * 0.0);
          CStack_dc.z = (int)ROUND(256.0f * 0.0);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&CStack_dc);
          fStack_78 = (this_ptr->flame_size).y;
          CStack_d0.x = (int)ROUND(fStack_7c * 256.0f);
          CStack_d0.y = (int)ROUND(fStack_78 * 256.0f);
          CStack_d0.z = (int)ROUND(fStack_74 * 256.0f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&CStack_d0);
          fStack_7c = -fStack_7c;
          CStack_b8.x = (int)ROUND(fStack_7c * 256.0f);
          CStack_b8.y = (int)ROUND(fStack_78 * 256.0f);
          CStack_b8.z = (int)ROUND(fStack_74 * 256.0f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&CStack_b8);
          fStack_78 = 0.0;
          CStack_34.x = (int)ROUND(fStack_7c * 256.0f);
          CStack_34.y = (int)ROUND(256.0f * 0.0);
          CStack_34.z = (int)ROUND(fStack_74 * 256.0f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&CStack_34);
          (*((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)
                    (g_CurrentSceneCamera,&(this_ptr->base).location.position,0.0);
          g_RenderVertexBuffer[0].a = 0xffff - (int)g_PerspectiveReciprocal;
          if (iStack_18 == 3) {
            g_RenderVertexBuffer[0].a = g_RenderVertexBuffer[0].a / 2;
          }
          if (this_ptr->which_flame == 4) {
            g_RenderVertexBuffer[0].a = g_RenderVertexBuffer[0].a / 4;
          }
          if (this_ptr->which_flame == 1) {
            g_RenderVertexBuffer[0].a = g_RenderVertexBuffer[0].a / 2;
          }
          g_RenderVertexBuffer[0].r = 0xffff;
          g_RenderVertexBuffer[0].g = 0xffff;
          g_RenderVertexBuffer[0].b = 0xffff;
          g_RenderVertexBuffer[1].r = 0xffff;
          g_RenderVertexBuffer[1].g = 0xffff;
          g_RenderVertexBuffer[1].b = 0xffff;
          g_RenderVertexBuffer[2].r = 0xffff;
          g_RenderVertexBuffer[2].g = 0xffff;
          g_RenderVertexBuffer[2].b = 0xffff;
          g_RenderVertexBuffer[3].r = 0xffff;
          g_RenderVertexBuffer[3].g = 0xffff;
          g_RenderVertexBuffer[3].b = 0xffff;
          if (this_ptr->texture_flip == 0) {
            g_RenderVertexBuffer[0].u = 0x80000;
            g_RenderVertexBuffer[1].u = 0x80000;
            g_RenderVertexBuffer[2].u = 0xf80000;
            g_RenderVertexBuffer[3].u = 0xf80000;
          }
          else {
            g_RenderVertexBuffer[0].u = 0xf80000;
            g_RenderVertexBuffer[1].u = 0xf80000;
            g_RenderVertexBuffer[2].u = 0x80000;
            g_RenderVertexBuffer[3].u = 0x80000;
          }
          g_RenderVertexBuffer[3].v = 0xf80000;
          g_RenderVertexBuffer[2].v = 0x80000;
          g_RenderVertexBuffer[1].v = 0x80000;
          g_RenderVertexBuffer[0].v = 0xf80000;
          fStack_10 = (float)(int)ROUND(ROUND(this_ptr->animation_time));
          g_RenderVertexBuffer[1].a = g_RenderVertexBuffer[0].a;
          g_RenderVertexBuffer[2].a = g_RenderVertexBuffer[0].a;
          g_RenderVertexBuffer[3].a = g_RenderVertexBuffer[0].a;
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                    (g_CDemonRendererPtr2,
                     SMRGLTextureBasic_ARRAY_0067b100 +
                     this_ptr->which_flame * 8 + (int)fStack_10 % 8);
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
          SStack_11c.base.count = 4;
          SStack_11c.surface_normal.D = 0;
          SStack_11c.surface_normal.C = 0;
          SStack_11c.surface_normal.B = 0;
          SStack_11c.surface_normal.A = 0;
          uStack_fc = 2;
          uStack_104 = 0;
          uStack_100 = 1;
          uStack_f8 = 3;
          engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                    (g_CDemonRendererPtr2,&SStack_11c);
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
          iVar5 = iVar5 + 1;
          CStack_ac.z = CStack_ac.z + 0x2aaa;
        } while (iVar5 < iStack_18);
      }
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
    if ((this_ptr->which_flame == 1) &&
       (fStack_1c = (this_ptr->flame_size).y * (float)2, this_ptr->is_visible != 0)) {
      engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
                (g_CDemonRendererPtr2,(float *)&CStack_88);
      CStack_28.y = (int)((this_ptr->flame_size).y * (float)0.5);
      CStack_28.x = 0;
      CStack_28.z = 0;
      fStack_10 = (float)CStack_28.y;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr2,&CStack_88,&CStack_28);
      fStack_10 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.98,1.02);
      fStack_4c = fStack_10 * fStack_1c;
      fStack_44 = 0.0;
      CStack_c4.x = (int)ROUND(fStack_4c * 256.0f);
      CStack_c4.y = (int)ROUND(fStack_4c * 256.0f);
      CStack_c4.z = (int)ROUND(256.0f * 0.0);
      fStack_48 = fStack_4c;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&CStack_c4);
      fStack_4c = -fStack_4c;
      CStack_70.x = (int)ROUND(fStack_4c * 256.0f);
      CStack_70.y = (int)ROUND(fStack_48 * 256.0f);
      CStack_70.z = (int)ROUND(fStack_44 * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&CStack_70);
      fStack_48 = -fStack_48;
      CStack_94.x = (int)ROUND(fStack_4c * 256.0f);
      CStack_94.y = (int)ROUND(fStack_48 * 256.0f);
      CStack_94.z = (int)ROUND(fStack_44 * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&CStack_94);
      fStack_4c = -fStack_4c;
      CStack_40.x = (int)ROUND(fStack_4c * 256.0f);
      CStack_40.y = (int)ROUND(fStack_48 * 256.0f);
      CStack_40.z = (int)ROUND(fStack_44 * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&CStack_40);
      iStack_14 = 0;
      do {
        point = (SProjectedVertex *)
                ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x +
                iStack_14);
        iVar5 = point->transformed_z;
        if (0x200 < iVar5) {
          iVar1 = iVar5 + -0x100;
          point->transformed_x =
               (int)(((longlong)point->transformed_x * (longlong)iVar1) / (longlong)iVar5);
          point->transformed_y =
               (int)(((longlong)point->transformed_y * (longlong)iVar1) / (longlong)iVar5);
          point->transformed_z = iVar1;
          engine_matrix_c_projectTransformedPoint_FUN_0050cdc0(point);
        }
        this_ptr_00 = g_CDemonRendererPtr2;
        iStack_14 = iStack_14 + 0x30;
      } while (iStack_14 != 0xc0);
      g_CDemonRendererPtr2->vertex_buffer_ptr->a = 0x4000;
      this_ptr_00->vertex_buffer_ptr[1].a = 0x4000;
      this_ptr_00->vertex_buffer_ptr[2].a = 0x4000;
      this_ptr_00->vertex_buffer_ptr[3].a = 0x4000;
      this_ptr_00->vertex_buffer_ptr->u = 0x80000;
      this_ptr_00->vertex_buffer_ptr->v = 0xf80000;
      this_ptr_00->vertex_buffer_ptr[1].u = 0xf80000;
      this_ptr_00->vertex_buffer_ptr[1].v = 0xf80000;
      this_ptr_00->vertex_buffer_ptr[2].u = 0xf80000;
      this_ptr_00->vertex_buffer_ptr[2].v = 0x80000;
      this_ptr_00->vertex_buffer_ptr[3].u = 0x80000;
      this_ptr_00->vertex_buffer_ptr[3].v = 0x80000;
      SStack_144.base.count = 4;
      SStack_144.surface_normal.D = 0;
      SStack_144.surface_normal.C = 0;
      SStack_144.surface_normal.B = 0;
      SStack_144.surface_normal.A = 0;
      uStack_12c = 0;
      uStack_124 = 2;
      uStack_120 = 3;
      uStack_128 = 1;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (this_ptr_00,&SMRGLTextureBasic_0067b0c8);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
      engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                (g_CDemonRendererPtr2,&SStack_144,0x163);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    }
    return this_ptr->is_visible;
  }
  return 0;
}
