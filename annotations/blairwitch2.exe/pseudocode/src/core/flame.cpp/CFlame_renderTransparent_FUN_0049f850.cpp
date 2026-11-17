// Name: core_flame.cpp_CFlame_renderTransparent_FUN_0049f850
// Address: 0049f850
// Address Range: [[0049f850, 004a01f3]]
// Convention: __cdecl
// Signature: int __cdecl core_flame_cpp_CFlame_renderTransparent_FUN_0049f850(CFlame *this_ptr)

#include "nocturne.h"

int __cdecl core_flame_cpp_CFlame_renderTransparent_FUN_0049f850(CFlame *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CDemonRenderer *this_ptr_00;
  int iVar4;
  SProjectedVertex *point;
  int unaff_EBP;
  uint *puVar5;
  int iVar6;
  int unaff_EDI;
  uint *puVar7;
  byte bVar8;
  double dVar9;
  UIntegerFloat aUStackY_10ac [973];
  int in_stack_fffffe94;
  CVector3i *rotation;
  UIntegerFloat UStack_160;
  UIntegerFloat UStack_15c;
  UIntegerFloat UStack_158;
  UIntegerFloat UStack_154;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  SMRGLHeaderPrimitive SStack_138;
  uint local_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint local_108 [2];
  CBoundingBox3D CStack_100;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  CVector3i CStack_dc;
  CVector3f CStack_d0;
  CVector3i CStack_c4;
  CVector3i CStack_b8;
  CVector3i CStack_ac;
  CVector3i CStack_a0;
  CVector3i CStack_94;
  CVector3i CStack_88;
  CVector3i CStack_7c;
  CVector3i CStack_70;
  CVector3f CStack_64;
  CVector3i CStack_58;
  CVector3i CStack_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  CVector3i CStack_34;
  CVector3f CStack_28;
  float fStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar8 = 0;
  if (((this_ptr->flame_state != 0) || (g_CDemonMission_PTR_00618170->is_in_editor != 0)) &&
     (iVar4 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960
                        (g_CDemonRenderer_PTR_0060b280), iVar4 == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(&this_ptr->base);
    if (this_ptr->do_visibility_check != 0) {
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
      puVar5 = &uStack_118;
      puVar7 = local_108;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
      }
      iVar4 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041a840(&CStack_100,in_stack_fffffe94);
      this_ptr->is_visible = iVar4;
    }
    if ((this_ptr->is_visible != 0) &&
       (fVar1 = (this_ptr->flame_size).y, fVar2 = (this_ptr->flame_size).x,
       fVar3 = (this_ptr->flame_size).z,
       1.0 < SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) * this_ptr->globe_scalar)) {
      core_set_cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00530750(g_CDemonSetPtr,&this_ptr->globe);
    }
    if ((this_ptr->is_visible != 0) && (this_ptr->which_flame != FLAME_TYPE_NONE)) {
      engine_drender_cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046b650
                (g_CDemonRenderer_PTR_0060b280,&CStack_88);
      rotation = (CVector3i *)0x0;
      CStack_58.x = CStack_88.x;
      *(uint *)((int)&CStack_58 + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_88 + (uint)bVar8 * -8 + 4);
      *(uint *)((int)&CStack_58 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&CStack_88 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      CStack_58.x = 0;
      CStack_58.y = 0;
      engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
                (g_CDemonRenderer_PTR_0060b280,&CStack_58,rotation);
      iStack_18 = 1;
      CStack_94.x = 0;
      CStack_94.y = 0;
      CStack_94.z = 0;
      engine_drender_cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046b650
                (g_CDemonRenderer_PTR_0060b280,&CStack_c4);
      CStack_58.x = CStack_c4.x;
      *(uint *)((int)&CStack_58 + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_c4 + (uint)bVar8 * -8 + 4);
      *(uint *)((int)&CStack_58 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&CStack_c4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      if ((0x2000 < CStack_58.x) || (CStack_58.x < -0x2000)) {
        iStack_18 = 3;
      }
      iVar4 = 0;
      if (0 < iStack_18) {
        do {
          engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
                    (g_CDemonRenderer_PTR_0060b280,&CStack_94,(CVector3i *)0x0);
          fStack_40 = (this_ptr->flame_size).x * 0.5f;
          fStack_3c = 0.0;
          fStack_38 = 0.0;
          CStack_dc.x = (int)ROUND(fStack_40 * 256.0f);
          CStack_dc.y = (int)ROUND(256.0f * 0.0);
          CStack_dc.z = (int)ROUND(256.0f * 0.0);
          engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                    (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr->projected_vertex,&CStack_dc)
          ;
          fStack_3c = (this_ptr->flame_size).y;
          CStack_b8.x = (int)ROUND(fStack_40 * 256.0f);
          CStack_b8.y = (int)ROUND(fStack_3c * 256.0f);
          CStack_b8.z = (int)ROUND(fStack_38 * 256.0f);
          engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                    (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[1].projected_vertex,
                     &CStack_b8);
          fStack_40 = -fStack_40;
          CStack_a0.x = (int)ROUND(fStack_40 * 256.0f);
          CStack_a0.y = (int)ROUND(fStack_3c * 256.0f);
          CStack_a0.z = (int)ROUND(fStack_38 * 256.0f);
          engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                    (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[2].projected_vertex,
                     &CStack_a0);
          fStack_3c = 0.0;
          CStack_70.x = (int)ROUND(fStack_40 * 256.0f);
          CStack_70.y = (int)ROUND(256.0f * 0.0);
          CStack_70.z = (int)ROUND(fStack_38 * 256.0f);
          engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                    (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[3].projected_vertex,
                     &CStack_70);
          (*((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)
                    (g_CurrentSceneCamera,&(this_ptr->base).location.position,
                     (SProjectedVertex *)0x0);
          g_SRenderVertex_ARRAY_00622014[0].a = 0xffff - g_PerspectiveReciprocal;
          if (unaff_EDI == 3) {
            g_SRenderVertex_ARRAY_00622014[0].a = g_SRenderVertex_ARRAY_00622014[0].a / 2;
          }
          if (this_ptr->which_flame == FLAME_TYPE_BODY) {
            g_SRenderVertex_ARRAY_00622014[0].a = g_SRenderVertex_ARRAY_00622014[0].a / 4;
          }
          if (this_ptr->which_flame == FLAME_TYPE_CANDLE) {
            g_SRenderVertex_ARRAY_00622014[0].a = g_SRenderVertex_ARRAY_00622014[0].a / 2;
          }
          g_SRenderVertex_ARRAY_00622014[0].r = 0xffff;
          g_SRenderVertex_ARRAY_00622014[0].g = 0xffff;
          g_SRenderVertex_ARRAY_00622014[0].b = 0xffff;
          g_SRenderVertex_ARRAY_00622014[1].r = 0xffff;
          g_SRenderVertex_ARRAY_00622014[1].g = 0xffff;
          g_SRenderVertex_ARRAY_00622014[1].b = 0xffff;
          g_SRenderVertex_ARRAY_00622014[2].r = 0xffff;
          g_SRenderVertex_ARRAY_00622014[2].g = 0xffff;
          g_SRenderVertex_ARRAY_00622014[2].b = 0xffff;
          g_SRenderVertex_ARRAY_00622014[3].r = 0xffff;
          g_SRenderVertex_ARRAY_00622014[3].g = 0xffff;
          g_SRenderVertex_ARRAY_00622014[3].b = 0xffff;
          if (this_ptr->texture_flip == 0) {
            g_SRenderVertex_ARRAY_00622014[0].u = 0x80000;
            g_SRenderVertex_ARRAY_00622014[1].u = 0x80000;
            g_SRenderVertex_ARRAY_00622014[2].u = 0xf80000;
            g_SRenderVertex_ARRAY_00622014[3].u = 0xf80000;
          }
          else {
            g_SRenderVertex_ARRAY_00622014[0].u = 0xf80000;
            g_SRenderVertex_ARRAY_00622014[1].u = 0xf80000;
            g_SRenderVertex_ARRAY_00622014[2].u = 0x80000;
            g_SRenderVertex_ARRAY_00622014[3].u = 0x80000;
          }
          g_SRenderVertex_ARRAY_00622014[3].v = 0xf80000;
          g_SRenderVertex_ARRAY_00622014[2].v = 0x80000;
          g_SRenderVertex_ARRAY_00622014[1].v = 0x80000;
          g_SRenderVertex_ARRAY_00622014[0].v = 0xf80000;
          UStack_160.f = 6.79469e-39;
          g_SRenderVertex_ARRAY_00622014[1].a = g_SRenderVertex_ARRAY_00622014[0].a;
          g_SRenderVertex_ARRAY_00622014[2].a = g_SRenderVertex_ARRAY_00622014[0].a;
          g_SRenderVertex_ARRAY_00622014[3].a = g_SRenderVertex_ARRAY_00622014[0].a;
          dVar9 = round((double)this_ptr->animation_time);
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
                    (g_CDemonRenderer_PTR_0060b280,
                     g_FlameFrameTextures + this_ptr->which_flame * 8 + (int)ROUND(dVar9) % 8);
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
                    (g_CDemonRenderer_PTR_0060b280,1);
          SStack_138.base.count = 4;
          SStack_138.surface_normal.D.i = 0;
          SStack_138.surface_normal.C.i = 0;
          SStack_138.surface_normal.B.i = 0;
          SStack_138.surface_normal.A.i = 0;
          uStack_118 = 2;
          local_120 = 0;
          uStack_11c = 1;
          uStack_114 = 3;
          engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
                    (g_CDemonRenderer_PTR_0060b280,&SStack_138);
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
                    (g_CDemonRenderer_PTR_0060b280,0);
          engine_drender_cpp_pop_FUN_0046b4a0();
          iVar4 = iVar4 + 1;
          CStack_88.y = CStack_88.y + 0x2aaa;
        } while (iVar4 < unaff_EBP);
      }
      engine_drender_cpp_pop_FUN_0046b4a0();
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
    if ((this_ptr->which_flame == FLAME_TYPE_CANDLE) &&
       (fStack_1c = (this_ptr->flame_size).y * (float)2, this_ptr->is_visible != 0))
    {
      engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_0046b670
                (g_CDemonRenderer_PTR_0060b280,&CStack_64);
      CStack_28.x = CStack_64.x;
      *(uint *)((int)&CStack_28 + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_64 + (uint)bVar8 * -8 + 4);
      *(uint *)((int)&CStack_28 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&CStack_64 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      CStack_d0.y = (this_ptr->flame_size).y * (float)0.5;
      CStack_d0.x = 0.0;
      CStack_d0.z = 0.0;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
                (g_CDemonRenderer_PTR_0060b280,&CStack_28,&CStack_d0);
      fStack_e8 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.98,1.02);
      fStack_e8 = fStack_e8 * fStack_1c;
      fStack_e0 = 0.0;
      CStack_4c.x = (int)ROUND(fStack_e8 * 256.0f);
      CStack_4c.y = (int)ROUND(fStack_e8 * 256.0f);
      CStack_4c.z = (int)ROUND(256.0f * 0.0);
      fStack_e4 = fStack_e8;
      engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr->projected_vertex,&CStack_4c);
      fStack_e8 = -fStack_e8;
      CStack_34.x = (int)ROUND(fStack_e8 * 256.0f);
      CStack_34.y = (int)ROUND(fStack_e4 * 256.0f);
      CStack_34.z = (int)ROUND(fStack_e0 * 256.0f);
      engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[1].projected_vertex,&CStack_34);
      fStack_e4 = -fStack_e4;
      CStack_ac.x = (int)ROUND(fStack_e8 * 256.0f);
      CStack_ac.y = (int)ROUND(fStack_e4 * 256.0f);
      CStack_ac.z = (int)ROUND(fStack_e0 * 256.0f);
      engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[2].projected_vertex,&CStack_ac);
      fStack_e8 = -fStack_e8;
      CStack_7c.x = (int)ROUND(fStack_e8 * 256.0f);
      CStack_7c.y = (int)ROUND(fStack_e4 * 256.0f);
      CStack_7c.z = (int)ROUND(fStack_e0 * 256.0f);
      engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[3].projected_vertex,&CStack_7c);
      iStack_14 = 0;
      do {
        point = (SProjectedVertex *)
                ((int)&(g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr->projected_vertex).
                       transformed_x + iStack_14);
        iVar4 = point->transformed_z;
        if (0x200 < iVar4) {
          iVar6 = iVar4 + -0x100;
          point->transformed_x =
               (int)(((longlong)point->transformed_x * (longlong)iVar6) / (longlong)iVar4);
          point->transformed_y =
               (int)(((longlong)point->transformed_y * (longlong)iVar6) / (longlong)iVar4);
          point->transformed_z = iVar6;
          engine_matrix_c_projectTransformedPoint_FUN_004e8eb0(point);
        }
        this_ptr_00 = g_CDemonRenderer_PTR_0060b280;
        iStack_14 = iStack_14 + 0x30;
      } while (iStack_14 != 0xc0);
      g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr->a = 0x4000;
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
      UStack_154.i = 0;
      UStack_158.i = 0;
      UStack_15c.i = 0;
      UStack_160.i = 0;
      uStack_150 = 0;
      uStack_148 = 2;
      uStack_144 = 3;
      uStack_14c = 1;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
                (this_ptr_00,&g_SMRGLTextureBasic_00615ae8);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(g_CDemonRenderer_PTR_0060b280,1);
      engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60
                (g_CDemonRenderer_PTR_0060b280,(SMRGLHeaderPrimitive *)&stack0xfffffe98,0x163);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(g_CDemonRenderer_PTR_0060b280,0);
      engine_drender_cpp_pop_FUN_0046b4a0();
    }
    return this_ptr->is_visible;
  }
  return 0;
}
