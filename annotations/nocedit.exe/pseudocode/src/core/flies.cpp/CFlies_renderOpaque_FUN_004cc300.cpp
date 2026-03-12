// Name: core_flies.cpp_CFlies_renderOpaque_FUN_004cc300
// Address: 004cc300
// Address Range: [[004cc300, 004cc6f2]]
// Convention: __cdecl
// Signature: int __cdecl core_flies_cpp_CFlies_renderOpaque_FUN_004cc300(CFlies *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl core_flies_cpp_CFlies_renderOpaque_FUN_004cc300(CFlies *this_ptr)

{
  float fVar1;
  CDemonRenderer *this_ptr_01;
  int iVar4;
  CBoundingBox3D *this_ptr_00;
  int iVar2;
  uint uVar5;
  int iVar3;
  int iVar6;
  float (*out_basis) [8];
  SRenderVertex *pSVar7;
  SRenderVertex *vertices;
  int screen_y;
  SRenderVertex *pSVar8;
  SRenderVertex *pSVar4;
  byte bVar9;
  SMRGLHeaderPrimitive SStack_a0;
  CBoundingBox3D local_58;
  CVector3f CStack_40;
  CVector3i CStack_34;
  int iStack_28;
  int iStack_24;
  SFly *pSStack_20;
  int iStack_1c;
  int iStack_18;
  CDemonRenderer *pCVar2;
  short *psVar1;
  float fVar3;
  
  bVar9 = 0;
  iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar4 != 0) {
    return 0;
  }
  this_ptr->is_visible = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_58);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  iVar3 = INT_02d7a7c0;
  if (iVar2 != 0) {
    this_ptr->is_visible = 1;
    if (iVar3 == 0) {
      out_basis = g_SplineBasisTable;
      iVar6 = 0;
      do {
        fVar1 = (float)iVar6;
        iVar6 = iVar6 + 1;
        core_spline_cpp_computeSplineBasis_FUN_005b90a0
                  (*out_basis,(fVar1 + (float)0.5) * (float)0.015625,0.0);
        out_basis = out_basis + 1;
      } while (iVar6 < 0x40);
      INT_02d7a7c0 = 1;
    }
    pCVar2 = g_CDemonRendererPtr2;
    if (g_UseExternalRenderer == 0) {
      engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970(g_CDemonRendererPtr2,0,0,0);
      uVar5 = (int)g_PerspectiveReciprocal >> 8;
      g_FlyBlendColor = uVar5 | uVar5 << 8 | uVar5 << 0x10;
      g_FlyInvBlendColor = g_FlyBlendColor ^ 0xffffff;
    }
    else {
      SStack_a0.base.count = 3;
      SStack_a0.surface_normal.D = 0;
      SStack_a0.surface_normal.C = 0;
      SStack_a0.surface_normal.B = 0;
      SStack_a0.surface_normal.A = 0;
      g_CDemonRendererPtr2->vertex_buffer_ptr->r = 0;
      pCVar2->vertex_buffer_ptr->g = 0;
      pCVar2->vertex_buffer_ptr->b = 0;
      pCVar2->vertex_buffer_ptr[1].r = 0;
      pCVar2->vertex_buffer_ptr[1].g = 0;
      pCVar2->vertex_buffer_ptr[1].b = 0;
      pCVar2->vertex_buffer_ptr[2].r = 0;
      pCVar2->vertex_buffer_ptr[2].g = 0;
      fVar3 = g_PerspectiveReciprocal;
      pCVar2->vertex_buffer_ptr[2].b = 0;
      iVar3 = 0xffff - (int)fVar3;
      pCVar2->vertex_buffer_ptr->a = iVar3;
      pCVar2->vertex_buffer_ptr[1].a = iVar3;
      pCVar2->vertex_buffer_ptr[2].a = iVar3;
      engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(&SMRGLTextureBasic_0067b514);
    }
    iStack_24 = 0;
    if (0 < this_ptr->fly_count) {
      pSStack_20 = this_ptr->flies;
      do {
        iStack_1c = (int)ROUND(ROUND(pSStack_20->t * 64.0f));
        if (iStack_1c < 0) {
          iStack_1c = 0;
        }
        else if (0x3f < iStack_1c) {
          iStack_1c = 0x3f;
        }
        core_spline_cpp_evaluateSplinePoint3D_FUN_005b92d0
                  (g_SplineBasisTable[iStack_1c],&CStack_40,pSStack_20->control_points,
                   pSStack_20->control_points + 1,pSStack_20->control_points + 2,
                   pSStack_20->control_points + 3);
        CStack_34.x = (int)ROUND(CStack_40.x * 256.0f);
        CStack_34.y = (int)ROUND(CStack_40.y * 256.0f);
        CStack_34.z = (int)ROUND(CStack_40.z * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&CStack_34);
        this_ptr_01 = g_CDemonRendererPtr2;
        vertices = g_CDemonRendererPtr2->vertex_buffer_ptr;
        if ((int)((vertices->projected_vertex).screen_x & -0x80000000) == 0) {
          screen_y = (vertices->projected_vertex).screen_y >> 0x10;
          iVar3 = (vertices->projected_vertex).screen_x >> 0x10;
          if (g_UseExternalRenderer == 0) {
            engine_prim_c_replaceWWithDepth_FUN_00552110(vertices,1);
            if ((((-1 < iVar3) && (iVar3 < g_WindowWidth)) && (-1 < screen_y)) &&
               (screen_y < g_WindowHeight)) {
              core_flies_cpp_drawFlyPixel_FUN_004cc230
                        (iVar3,screen_y,(vertices->projected_vertex).transformed_z);
            }
          }
          else if ((iVar3 < g_WindowWidth + -1) && (screen_y < g_WindowHeight + -1)) {
            *(ushort *)&(vertices->projected_vertex).screen_x = 0;
            *(ushort *)&(vertices->projected_vertex).screen_y = 0;
            pSVar7 = vertices;
            pSVar8 = this_ptr_01->vertex_buffer_ptr + 1;
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              pSVar8 = (SRenderVertex *)((int)pSVar8 + (uint)bVar9 * -8 + 4);
              pSVar7 = (SRenderVertex *)((int)pSVar7 + (uint)bVar9 * -8 + 4);
              (pSVar8->projected_vertex).transformed_x = (pSVar7->projected_vertex).transformed_x;
              pSVar7 = pSVar7;
              pSVar8 = pSVar8;
            }
            pSVar4 = this_ptr_01->vertex_buffer_ptr + 2;
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              vertices = (SRenderVertex *)((int)vertices + (uint)bVar9 * -8 + 4);
              (pSVar4->projected_vertex).transformed_x = (vertices->projected_vertex).transformed_x;
              vertices = vertices;
              pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar9 * -2 + 1) * 4);
            }
            psVar1 = (short *)((int)&this_ptr_01->vertex_buffer_ptr[1].projected_vertex.screen_x + 2
                              );
            *psVar1 = *psVar1 + 1;
            *(short *)((int)&this_ptr_01->vertex_buffer_ptr[2].projected_vertex.screen_y + 2) =
                 *(short *)((int)&this_ptr_01->vertex_buffer_ptr[2].projected_vertex.screen_y + 2) +
                 1;
            engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
                      (this_ptr_01,&SStack_a0,999);
          }
        }
        pSStack_20 = pSStack_20 + 1;
        iStack_24 = iStack_24 + 1;
      } while (iStack_24 < this_ptr->fly_count);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  return iVar2;
}
