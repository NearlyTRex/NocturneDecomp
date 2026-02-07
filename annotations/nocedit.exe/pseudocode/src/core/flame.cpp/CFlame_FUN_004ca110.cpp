// Name: core_flame.cpp_CFlame_FUN_004ca110
// Address: 004ca110
// Address Range: [[004ca110, 004ca626] [004ca64e, 004ca659] [004ca65d, 004ca70b] [004caa15, 004caa6f]]
// Convention: __cdecl
// Signature: float __cdecl core_flame_cpp_CFlame_FUN_004ca110(CFlame *this_ptr)

#include "nocturne.h"

float __cdecl core_flame_cpp_CFlame_FUN_004ca110(CFlame *this_ptr)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  CDemonRenderer *this_ptr_00;
  int iVar6;
  CBoundingBox3D *this_ptr_01;
  SProjectedVertex *point;
  int unaff_EBP;
  byte bVar7;
  double dVar8;
  uint auStackY_1080 [973];
  SMRGLHeaderPrimitive SStack_13c;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  SMRGLHeaderPrimitive SStack_114;
  uint uStack_fc;
  uint uStack_f8;
  CBoundingBox3D local_f4;
  CVector3i CStack_d4;
  CVector3i CStack_c8;
  CVector3i CStack_bc;
  CVector3i CStack_b0;
  CVector3i CStack_a4;
  CVector3i CStack_98;
  CVector3i CStack_8c;
  CVector3i CStack_80;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  CVector3i CStack_68;
  CVector3i CStack_5c;
  CVector3i CStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  CVector3i CStack_38;
  CVector3i CStack_2c;
  CVector3i CStack_20;
  float fStack_14;
  int iStack_10;
  
  bVar7 = 0;
  if (((this_ptr->flame_state != 0) || (g_CDemonMissionPtr->is_in_editor != 0)) &&
     (iVar6 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar6 == 0)) {
    if ((g_CDemonMissionPtr->is_in_editor != 0) &&
       (this_ptr == (CFlame *)g_CDemonMissionPtr->selected_actor)) {
      core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_004715e0
                ((CDemonGlobe *)(((CFlame *)g_CDemonMissionPtr->selected_actor)->unk1 + 4));
    }
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
    if (*(int *)(this_ptr->unk4 + 8) != 0) {
      this_ptr_01 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_f4);
      iVar6 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_01);
      *(int *)this_ptr->unk4 = iVar6;
    }
    if ((*(int *)this_ptr->unk4 != 0) &&
       (fVar2 = (this_ptr->flame_size).y, fVar3 = (this_ptr->flame_size).x,
       fVar4 = (this_ptr->flame_size).z,
       1.0 < SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) * this_ptr->globe_scalar)) {
      core_set_cpp_CDemonSet_FUN_0056d140(g_CDemonSetPtr);
    }
    if ((*(int *)this_ptr->unk4 != 0) && (this_ptr->which_flame != 3)) {
      engine_drender_cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
                (g_CDemonRendererPtr2,&CStack_5c);
      CStack_50.x = CStack_5c.x;
      *(uint *)((int)&CStack_50 + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_5c + (uint)bVar7 * -8 + 4);
      *(uint *)((int)&CStack_50 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           *(uint *)((int)&CStack_5c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      CStack_50.x = 0;
      CStack_50.y = 0;
      engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
                (g_CDemonRendererPtr2,&CStack_50,(CVector3i *)0x0);
      CStack_a4.x = 0;
      CStack_a4.y = 0;
      CStack_a4.z = 0;
      engine_drender_cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
                (g_CDemonRendererPtr2,&CStack_98);
      iStack_10 = 1;
      CStack_50.x = CStack_98.x;
      *(uint *)((int)&CStack_50 + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_98 + (uint)bVar7 * -8 + 4);
      *(uint *)((int)&CStack_50 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           *(uint *)((int)&CStack_98 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      if ((0x2000 < CStack_50.x) || (CStack_50.x < -0x2000)) {
        iStack_10 = 3;
      }
      iVar6 = 0;
      if (0 < iStack_10) {
        do {
          engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
                    (g_CDemonRendererPtr2,&CStack_a4,(CVector3i *)0x0);
          fStack_74 = (this_ptr->flame_size).x * 0.5f;
          fStack_70 = 0.0;
          fStack_6c = 0.0;
          CStack_d4.x = (int)ROUND(fStack_74 * 256.0f);
          CStack_d4.y = (int)ROUND(256.0f * 0.0);
          CStack_d4.z = (int)ROUND(256.0f * 0.0);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&CStack_d4);
          fStack_70 = (this_ptr->flame_size).y;
          CStack_c8.x = (int)ROUND(fStack_74 * 256.0f);
          CStack_c8.y = (int)ROUND(fStack_70 * 256.0f);
          CStack_c8.z = (int)ROUND(fStack_6c * 256.0f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&CStack_c8);
          fStack_74 = -fStack_74;
          CStack_b0.x = (int)ROUND(fStack_74 * 256.0f);
          CStack_b0.y = (int)ROUND(fStack_70 * 256.0f);
          CStack_b0.z = (int)ROUND(fStack_6c * 256.0f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&CStack_b0);
          fStack_70 = 0.0;
          CStack_2c.x = (int)ROUND(fStack_74 * 256.0f);
          CStack_2c.y = (int)ROUND(256.0f * 0.0);
          CStack_2c.z = (int)ROUND(fStack_6c * 256.0f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&CStack_2c);
          (*((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)();
          g_RenderVertexBuffer[0].w_recip = (float)(0xffff - (int)g_PerspectiveReciprocal);
          if (unaff_EBP == 3) {
            g_RenderVertexBuffer[0].w_recip = (float)((int)g_RenderVertexBuffer[0].w_recip / 2);
          }
          if (this_ptr->which_flame == 4) {
            g_RenderVertexBuffer[0].w_recip = (float)((int)g_RenderVertexBuffer[0].w_recip / 4);
          }
          if (this_ptr->which_flame == 1) {
            g_RenderVertexBuffer[0].w_recip = (float)((int)g_RenderVertexBuffer[0].w_recip / 2);
          }
          g_RenderVertexBuffer[0].light = 9.18341e-41;
          g_RenderVertexBuffer[0].color = 0xffff;
          g_RenderVertexBuffer[0].fog = 9.18341e-41;
          g_RenderVertexBuffer[1].light = 9.18341e-41;
          g_RenderVertexBuffer[1].color = 0xffff;
          g_RenderVertexBuffer[1].fog = 9.18341e-41;
          g_RenderVertexBuffer[2].light = 9.18341e-41;
          g_RenderVertexBuffer[2].color = 0xffff;
          g_RenderVertexBuffer[2].fog = 9.18341e-41;
          g_RenderVertexBuffer[3].light = 9.18341e-41;
          g_RenderVertexBuffer[3].color = 0xffff;
          g_RenderVertexBuffer[3].fog = 9.18341e-41;
          if (*(int *)(this_ptr->unk4 + 4) == 0) {
            g_RenderVertexBuffer[0].u = 7.34684e-40;
            g_RenderVertexBuffer[1].u = 7.34684e-40;
            g_RenderVertexBuffer[2].u = 2.2775203e-38;
            g_RenderVertexBuffer[3].u = 2.2775203e-38;
          }
          else {
            g_RenderVertexBuffer[0].u = 2.2775203e-38;
            g_RenderVertexBuffer[1].u = 2.2775203e-38;
            g_RenderVertexBuffer[2].u = 7.34684e-40;
            g_RenderVertexBuffer[3].u = 7.34684e-40;
          }
          g_RenderVertexBuffer[3].v = 2.2775203e-38;
          g_RenderVertexBuffer[2].v = 7.34684e-40;
          g_RenderVertexBuffer[1].v = 7.34684e-40;
          g_RenderVertexBuffer[0].v = 2.2775203e-38;
          g_RenderVertexBuffer[1].w_recip = g_RenderVertexBuffer[0].w_recip;
          g_RenderVertexBuffer[2].w_recip = g_RenderVertexBuffer[0].w_recip;
          g_RenderVertexBuffer[3].w_recip = g_RenderVertexBuffer[0].w_recip;
          dVar8 = round((double)*(float *)this_ptr->unk1);
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                    (g_CDemonRendererPtr2,
                     &DAT_0067b100 + this_ptr->which_flame * 8 + (int)ROUND(dVar8) % 8);
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
          SStack_114.base.count = 4;
          SStack_114.surface_normal.D = 0;
          SStack_114.surface_normal.C = 0;
          SStack_114.surface_normal.B = 0;
          SStack_114.surface_normal.A = 0;
          local_f4.min.x = 2.8026e-45;
          uStack_fc = 0;
          uStack_f8 = 1;
          local_f4.min.y = 4.2039e-45;
          engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                    (g_CDemonRendererPtr2,&SStack_114);
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
          engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
          iVar6 = iVar6 + 1;
          CStack_a4.z = CStack_a4.z + 0x2aaa;
        } while (iVar6 < iStack_10);
      }
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
    if ((this_ptr->which_flame == 1) &&
       (fStack_14 = (this_ptr->flame_size).y * (float)2, *(int *)this_ptr->unk4 != 0))
    {
      engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
                (g_CDemonRendererPtr2,(float *)&CStack_80);
      CStack_20.y = (int)((this_ptr->flame_size).y * (float)0.5);
      CStack_20.x = 0;
      CStack_20.z = 0;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr2,&CStack_80,&CStack_20);
      fStack_44 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.98,1.02);
      fStack_44 = fStack_44 * fStack_14;
      fStack_3c = 0.0;
      CStack_bc.x = (int)ROUND(fStack_44 * 256.0f);
      CStack_bc.y = (int)ROUND(fStack_44 * 256.0f);
      CStack_bc.z = (int)ROUND(256.0f * 0.0);
      fStack_40 = fStack_44;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&CStack_bc);
      fStack_44 = -fStack_44;
      CStack_68.x = (int)ROUND(fStack_44 * 256.0f);
      CStack_68.y = (int)ROUND(fStack_40 * 256.0f);
      CStack_68.z = (int)ROUND(fStack_3c * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&CStack_68);
      fStack_40 = -fStack_40;
      CStack_8c.x = (int)ROUND(fStack_44 * 256.0f);
      CStack_8c.y = (int)ROUND(fStack_40 * 256.0f);
      CStack_8c.z = (int)ROUND(fStack_3c * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&CStack_8c);
      fStack_44 = -fStack_44;
      CStack_38.x = (int)ROUND(fStack_44 * 256.0f);
      CStack_38.y = (int)ROUND(fStack_40 * 256.0f);
      CStack_38.z = (int)ROUND(fStack_3c * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&CStack_38);
      iVar6 = 0;
      do {
        point = (SProjectedVertex *)
                ((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).transformed_x +
                iVar6);
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
        iVar6 = iVar6 + 0x30;
      } while (iVar6 != 0xc0);
      g_CDemonRendererPtr2->vertex_buffer_ptr->w_recip = 2.29589e-41;
      this_ptr_00->vertex_buffer_ptr[1].w_recip = 2.29589e-41;
      this_ptr_00->vertex_buffer_ptr[2].w_recip = 2.29589e-41;
      this_ptr_00->vertex_buffer_ptr[3].w_recip = 2.29589e-41;
      this_ptr_00->vertex_buffer_ptr->u = 7.34684e-40;
      this_ptr_00->vertex_buffer_ptr->v = 2.2775203e-38;
      this_ptr_00->vertex_buffer_ptr[1].u = 2.2775203e-38;
      this_ptr_00->vertex_buffer_ptr[1].v = 2.2775203e-38;
      this_ptr_00->vertex_buffer_ptr[2].u = 2.2775203e-38;
      this_ptr_00->vertex_buffer_ptr[2].v = 7.34684e-40;
      this_ptr_00->vertex_buffer_ptr[3].u = 7.34684e-40;
      this_ptr_00->vertex_buffer_ptr[3].v = 7.34684e-40;
      SStack_13c.base.count = 4;
      SStack_13c.surface_normal.D = 0;
      SStack_13c.surface_normal.C = 0;
      SStack_13c.surface_normal.B = 0;
      SStack_13c.surface_normal.A = 0;
      uStack_124 = 0;
      uStack_11c = 2;
      uStack_118 = 3;
      uStack_120 = 1;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(this_ptr_00,&DAT_0067b0c8);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
      engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                (g_CDemonRendererPtr2,&SStack_13c,0x163);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    }
    return *(float *)this_ptr->unk4;
  }
  return 0.0;
}
