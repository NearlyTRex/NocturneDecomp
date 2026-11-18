// Name: core_flies.cpp_CFlies_renderOpaque_FUN_004addd0
// Address: 004addd0
// Address Range: [[004addd0, 004ae1fd]]
// Convention: __cdecl
// Signature: int __cdecl core_flies_cpp_CFlies_renderOpaque_FUN_004addd0(CFlies *this_ptr)

#include "nocturne.h"

int __cdecl core_flies_cpp_CFlies_renderOpaque_FUN_004addd0(CFlies *this_ptr)

{
  short *psVar1;
  float fVar2;
  CDemonRenderer *pCVar3;
  SFly *pSVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  float (*out_basis) [8];
  SRenderVertex *pSVar8;
  SRenderVertex *vertices;
  uint *puVar9;
  int screen_y;
  SRenderVertex *pSVar10;
  byte bVar11;
  double dVar12;
  float afStackY_1020 [980];
  int in_stack_ffffff44;
  byte auStack_b8 [116];
  CVector3i CStack_44;
  float fStack_38;
  float afStack_34 [2];
  CVector3f CStack_2c;
  int iStack_1c;
  int iStack_18;
  SFly *pSStack_14;
  
  bVar11 = 0;
  iVar5 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(g_CDemonRenderer_PTR_005f2afc)
  ;
  if (iVar5 != 0) {
    return 0;
  }
  this_ptr->is_visible = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar7 = (uint *)(auStack_b8 + 0x48);
  puVar9 = (uint *)(auStack_b8 + 0x58);
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
    puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
  }
  iStack_1c = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041daf0
                        ((CBoundingBox3D *)(auStack_b8 + 0x60),in_stack_ffffff44);
  iVar5 = g_FliesInitialized;
  if (iStack_1c != 0) {
    this_ptr->is_visible = 1;
    if (iVar5 == 0) {
      out_basis = g_SplineBasisTable;
      iVar5 = 0;
      do {
        fVar2 = (float)iVar5;
        iVar5 = iVar5 + 1;
        core_spline_cpp_computeSplineBasis_FUN_00567630
                  (*out_basis,(fVar2 + (float)0.5) * (float)0.015625,0.0);
        out_basis = out_basis + 1;
      } while (iVar5 < 0x40);
      g_FliesInitialized = 1;
    }
    pCVar3 = g_CDemonRenderer_PTR_005f2afc;
    if (g_INT_01c6cee8 == 0) {
      engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0046d3d0
                (g_CDemonRenderer_PTR_005f2afc,0,0,0);
      uVar6 = g_PerspectiveReciprocal >> 8;
      g_FlyBlendColor = uVar6 | uVar6 << 8 | uVar6 << 0x10;
      g_FlyInvBlendColor = g_FlyBlendColor ^ 0xffffff;
    }
    else {
      auStack_b8._4_4_ = 3;
      auStack_b8._20_4_ = 0;
      auStack_b8._16_4_ = 0;
      auStack_b8._12_4_ = 0;
      auStack_b8._8_4_ = 0;
      auStack_b8._24_4_ = 0;
      auStack_b8._28_4_ = 0x800000;
      auStack_b8._32_4_ = 0x800000;
      auStack_b8._40_4_ = 0x800000;
      auStack_b8._44_4_ = 0x800000;
      auStack_b8._52_4_ = 0x800000;
      auStack_b8._56_4_ = 0x800000;
      auStack_b8._36_4_ = 1;
      auStack_b8._48_4_ = 2;
      g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->r = 0;
      pCVar3->vertex_buffer_ptr->g = 0;
      pCVar3->vertex_buffer_ptr->b = 0;
      pCVar3->vertex_buffer_ptr[1].r = 0;
      pCVar3->vertex_buffer_ptr[1].g = 0;
      pCVar3->vertex_buffer_ptr[1].b = 0;
      pCVar3->vertex_buffer_ptr[2].r = 0;
      pCVar3->vertex_buffer_ptr[2].g = 0;
      iVar5 = g_PerspectiveReciprocal;
      pCVar3->vertex_buffer_ptr[2].b = 0;
      iVar5 = 0xffff - iVar5;
      pCVar3->vertex_buffer_ptr->a = iVar5;
      pCVar3->vertex_buffer_ptr[1].a = iVar5;
      pCVar3->vertex_buffer_ptr[2].a = iVar5;
      engine_texture_cpp_ensureTextureLoaded_FUN_0056aa10(&g_FliesTexture);
    }
    iStack_18 = 0;
    if (0 < this_ptr->fly_count) {
      pSStack_14 = this_ptr->flies;
      do {
        pSVar4 = pSStack_14;
        dVar12 = round((double)(pSStack_14->t * 64.0f));
        pSStack_14 = (SFly *)(int)ROUND(dVar12);
        if ((int)pSStack_14 < 0) {
          pSStack_14 = (SFly *)0x0;
        }
        else if (0x3f < (int)pSStack_14) {
          pSStack_14 = (SFly *)0x3f;
        }
        core_spline_cpp_evaluateSplinePoint3D_FUN_00567860
                  (g_SplineBasisTable[(int)pSStack_14],pSVar4->control_points,
                   pSVar4->control_points + 1,pSVar4->control_points + 2,pSVar4->control_points + 3,
                   &CStack_2c);
        fStack_38 = CStack_2c.x;
        afStack_34[(uint)bVar11 * -2] = *(float *)((int)&CStack_2c + (uint)bVar11 * -8 + 4);
        afStack_34[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             *(float *)((int)&CStack_2c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        CStack_44.x = (int)ROUND(fStack_38 * 256.0f);
        CStack_44.y = (int)ROUND(afStack_34[0] * 256.0f);
        CStack_44.z = (int)ROUND(afStack_34[1] * 256.0f);
        engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                  (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->projected_vertex,&CStack_44);
        pCVar3 = g_CDemonRenderer_PTR_005f2afc;
        vertices = g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr;
        if ((int)((vertices->projected_vertex).screen_x & -0x80000000) == 0) {
          screen_y = (vertices->projected_vertex).screen_y >> 0x10;
          iVar5 = (vertices->projected_vertex).screen_x >> 0x10;
          if (g_INT_01c6cee8 == 0) {
            engine_prim_c_replaceWWithDepth_FUN_00515a80(vertices,1);
            if ((((-1 < iVar5) && (iVar5 < g_INT_005fba18)) && (-1 < screen_y)) &&
               (screen_y < g_INT_005fba1c)) {
              core_flies_cpp_drawFlyPixel_FUN_004add00
                        (iVar5,screen_y,(vertices->projected_vertex).transformed_z);
            }
          }
          else if ((iVar5 < g_INT_005fba18 + -1) && (screen_y < g_INT_005fba1c + -1)) {
            *(ushort *)&(vertices->projected_vertex).screen_x = 0;
            *(ushort *)&(vertices->projected_vertex).screen_y = 0;
            pSVar8 = vertices;
            pSVar10 = pCVar3->vertex_buffer_ptr + 1;
            for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
              (pSVar10->projected_vertex).transformed_x = (pSVar8->projected_vertex).transformed_x;
              pSVar8 = (SRenderVertex *)((int)pSVar8 + (uint)bVar11 * -8 + 4);
              pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar11 * -2 + 1) * 4);
            }
            pSVar8 = pCVar3->vertex_buffer_ptr + 2;
            for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
              (pSVar8->projected_vertex).transformed_x = (vertices->projected_vertex).transformed_x;
              vertices = (SRenderVertex *)((int)vertices + (uint)bVar11 * -8 + 4);
              pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar11 * -2 + 1) * 4);
            }
            psVar1 = (short *)((int)&pCVar3->vertex_buffer_ptr[1].projected_vertex.screen_x + 2);
            *psVar1 = *psVar1 + 1;
            *(short *)((int)&pCVar3->vertex_buffer_ptr[2].projected_vertex.screen_y + 2) =
                 *(short *)((int)&pCVar3->vertex_buffer_ptr[2].projected_vertex.screen_y + 2) + 1;
            engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0
                      (pCVar3,(SMRGLPrimitivePoly *)auStack_b8,999);
          }
        }
        pSStack_14 = (SFly *)((int)pSStack_14 + 0x34);
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < this_ptr->fly_count);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(&this_ptr->base);
  return iStack_1c;
}
