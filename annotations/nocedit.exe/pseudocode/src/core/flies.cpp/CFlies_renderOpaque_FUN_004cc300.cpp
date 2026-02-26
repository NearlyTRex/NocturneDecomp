// Name: core_flies.cpp_CFlies_renderOpaque_FUN_004cc300
// Address: 004cc300
// Address Range: [[004cc300, 004cc6f2]]
// Convention: __cdecl
// Signature: int __cdecl core_flies_cpp_CFlies_renderOpaque_FUN_004cc300(CFlies *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl core_flies_cpp_CFlies_renderOpaque_FUN_004cc300(CFlies *this_ptr)

{
  short *psVar1;
  CDemonRenderer *pCVar2;
  float fVar3;
  int iVar4;
  CBoundingBox3D *this_ptr_00;
  uint uVar5;
  int iVar6;
  float (*out_basis) [8];
  SRenderVertex *pSVar7;
  SRenderVertex *vertices;
  SRenderVertex *pSVar8;
  byte bVar9;
  SMRGLHeaderPrimitive SStack_a0;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  CBoundingBox3D local_58;
  CVector3f CStack_40;
  CVector3i CStack_34;
  int iStack_28;
  int iStack_24;
  SFly *pSStack_20;
  int iStack_1c;
  int iStack_18;
  
  bVar9 = 0;
  iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar4 != 0) {
    return 0;
  }
  this_ptr->is_visible = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_58);
  iStack_28 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  iVar4 = INT_02d7a7c0;
  if (iStack_28 != 0) {
    this_ptr->is_visible = 1;
    if (iVar4 == 0) {
      out_basis = g_SplineBasisTable;
      iVar4 = 0;
      do {
        iVar6 = iVar4 + 1;
        iStack_18 = iVar4;
        core_spline_cpp_computeSplineBasis_FUN_005b90a0
                  (*out_basis,((float)iVar4 + (float)0.5) * (float)0.015625,0.0);
        out_basis = out_basis + 1;
        iVar4 = iVar6;
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
      uStack_88 = 0;
      uStack_84 = 0x800000;
      uStack_80 = 0x800000;
      uStack_78 = 0x800000;
      uStack_74 = 0x800000;
      uStack_6c = 0x800000;
      uStack_68 = 0x800000;
      uStack_7c = 1;
      uStack_70 = 2;
      g_CDemonRendererPtr2->vertex_buffer_ptr->z = 0;
      pCVar2->vertex_buffer_ptr->r = 0;
      pCVar2->vertex_buffer_ptr->g = 0;
      pCVar2->vertex_buffer_ptr[1].z = 0;
      pCVar2->vertex_buffer_ptr[1].r = 0;
      pCVar2->vertex_buffer_ptr[1].g = 0;
      pCVar2->vertex_buffer_ptr[2].z = 0;
      pCVar2->vertex_buffer_ptr[2].r = 0;
      fVar3 = g_PerspectiveReciprocal;
      pCVar2->vertex_buffer_ptr[2].g = 0;
      iVar4 = 0xffff - (int)fVar3;
      pCVar2->vertex_buffer_ptr->fog = iVar4;
      pCVar2->vertex_buffer_ptr[1].fog = iVar4;
      pCVar2->vertex_buffer_ptr[2].fog = iVar4;
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
        pCVar2 = g_CDemonRendererPtr2;
        vertices = g_CDemonRendererPtr2->vertex_buffer_ptr;
        if ((int)((vertices->projected_vertex).screen_x & -0x80000000) == 0) {
          iVar6 = (vertices->projected_vertex).screen_y >> 0x10;
          iVar4 = (vertices->projected_vertex).screen_x >> 0x10;
          if (g_UseExternalRenderer == 0) {
            engine_prim_c_replaceWWithDepth_FUN_00552110(vertices,1);
            if ((((-1 < iVar4) && (iVar4 < g_WindowWidth)) && (-1 < iVar6)) &&
               (iVar6 < g_WindowHeight)) {
              core_flies_cpp_drawFlyPixel_FUN_004cc230
                        (iVar4,iVar6,(vertices->projected_vertex).transformed_z);
            }
          }
          else if ((iVar4 < g_WindowWidth + -1) && (iVar6 < g_WindowHeight + -1)) {
            *(ushort *)&(vertices->projected_vertex).screen_x = 0;
            *(ushort *)&(vertices->projected_vertex).screen_y = 0;
            pSVar7 = vertices;
            pSVar8 = pCVar2->vertex_buffer_ptr + 1;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              (pSVar8->projected_vertex).transformed_x = (pSVar7->projected_vertex).transformed_x;
              pSVar7 = (SRenderVertex *)((int)pSVar7 + (uint)bVar9 * -8 + 4);
              pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar9 * -2 + 1) * 4);
            }
            pSVar7 = pCVar2->vertex_buffer_ptr + 2;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              (pSVar7->projected_vertex).transformed_x = (vertices->projected_vertex).transformed_x;
              vertices = (SRenderVertex *)((int)vertices + (uint)bVar9 * -8 + 4);
              pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar9 * -2 + 1) * 4);
            }
            psVar1 = (short *)((int)&pCVar2->vertex_buffer_ptr[1].projected_vertex.screen_x + 2);
            *psVar1 = *psVar1 + 1;
            *(short *)((int)&pCVar2->vertex_buffer_ptr[2].projected_vertex.screen_y + 2) =
                 *(short *)((int)&pCVar2->vertex_buffer_ptr[2].projected_vertex.screen_y + 2) + 1;
            engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
                      (pCVar2,&SStack_a0,999);
          }
        }
        pSStack_20 = pSStack_20 + 1;
        iStack_24 = iStack_24 + 1;
      } while (iStack_24 < this_ptr->fly_count);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  return iStack_28;
}
