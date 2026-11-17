// Name: core_flies.cpp_CFlies_renderOpaque_FUN_0048f490
// Address: 0048f490
// Address Range: [[0048f490, 0048f884]]
// Convention: __cdecl
// Signature: int __cdecl core_flies_cpp_CFlies_renderOpaque_FUN_0048f490(CFlies *this_ptr)

#include "nocturne.h"

int __cdecl core_flies_cpp_CFlies_renderOpaque_FUN_0048f490(CFlies *this_ptr)

{
  short *psVar1;
  CDemonRenderer *pCVar2;
  SFly *pSVar3;
  int iVar4;
  CBoundingBox3D *this_ptr_00;
  uint uVar5;
  int iVar6;
  float (*out_basis) [8];
  SRenderVertex *pSVar7;
  SRenderVertex *vertices;
  SRenderVertex *pSVar8;
  byte bVar9;
  double dVar10;
  byte local_58 [24];
  float fStack_40;
  float fStack_3c;
  CVector3i CStack_38;
  int iStack_28;
  int iStack_24;
  SFly *pSStack_20;
  int iStack_18;
  
  bVar9 = 0;
  iVar4 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00461090(g_CDemonRenderer_PTR_005ae704)
  ;
  if (iVar4 != 0) {
    return 0;
  }
  this_ptr->is_visible = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                          (&this_ptr->base,(CBoundingBox3D *)local_58);
  iStack_28 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
  iVar4 = g_FliesInitialized;
  if (iStack_28 != 0) {
    this_ptr->is_visible = 1;
    if (iVar4 == 0) {
      out_basis = g_SplineBasisTable;
      iVar4 = 0;
      do {
        iVar6 = iVar4 + 1;
        iStack_18 = iVar4;
        core_spline_cpp_computeSplineBasis_FUN_00533ce0
                  (*out_basis,((float)iVar4 + (float)0.5) * (float)0.015625,0.0);
        out_basis = out_basis + 1;
        iVar4 = iVar6;
      } while (iVar6 < 0x40);
      g_FliesInitialized = 1;
    }
    pCVar2 = g_CDemonRenderer_PTR_005ae704;
    if (g_UseExternalRenderer == 0) {
      engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_00460f20
                (g_CDemonRenderer_PTR_005ae704,0,0,0);
      uVar5 = g_INT_01c038f4 >> 8;
      g_FlyBlendColor = uVar5 | uVar5 << 8 | uVar5 << 0x10;
      g_FlyInvBlendColor = g_FlyBlendColor ^ 0xffffff;
    }
    else {
      g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->r = 0;
      pCVar2->vertex_buffer_ptr->g = 0;
      pCVar2->vertex_buffer_ptr->b = 0;
      pCVar2->vertex_buffer_ptr[1].r = 0;
      pCVar2->vertex_buffer_ptr[1].g = 0;
      pCVar2->vertex_buffer_ptr[1].b = 0;
      pCVar2->vertex_buffer_ptr[2].r = 0;
      pCVar2->vertex_buffer_ptr[2].g = 0;
      iVar4 = g_INT_01c038f4;
      pCVar2->vertex_buffer_ptr[2].b = 0;
      iVar4 = 0xffff - iVar4;
      pCVar2->vertex_buffer_ptr->a = iVar4;
      pCVar2->vertex_buffer_ptr[1].a = iVar4;
      pCVar2->vertex_buffer_ptr[2].a = iVar4;
      engine_texture_cpp_ensureTextureLoaded_FUN_00545920(&g_FliesTexture);
    }
    iStack_24 = 0;
    if (0 < this_ptr->fly_count) {
      pSStack_20 = this_ptr->flies;
      do {
        pSVar3 = pSStack_20;
        dVar10 = round((double)(pSStack_20->t * 64.0f));
        pSStack_20 = (SFly *)(int)ROUND(dVar10);
        if ((int)pSStack_20 < 0) {
          pSStack_20 = (SFly *)0x0;
        }
        else if (0x3f < (int)pSStack_20) {
          pSStack_20 = (SFly *)0x3f;
        }
        core_spline_cpp_evaluateSplinePoint3D_FUN_00533f10
                  (g_SplineBasisTable[(int)pSStack_20],(CVector3f *)(local_58 + 0x14),
                   pSVar3->control_points,pSVar3->control_points + 1,pSVar3->control_points + 2,
                   pSVar3->control_points + 3);
        CStack_38.x = (int)ROUND((float)local_58._20_4_ * 256.0f);
        CStack_38.y = (int)ROUND(fStack_40 * 256.0f);
        CStack_38.z = (int)ROUND(fStack_3c * 256.0f);
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                  (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex,&CStack_38);
        pCVar2 = g_CDemonRenderer_PTR_005ae704;
        vertices = g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr;
        if ((int)((vertices->projected_vertex).screen_x & -0x80000000) == 0) {
          iVar6 = (vertices->projected_vertex).screen_y >> 0x10;
          iVar4 = (vertices->projected_vertex).screen_x >> 0x10;
          if (g_UseExternalRenderer == 0) {
            engine_prim_c_replaceWWithDepth_FUN_004f99d0(vertices,1);
            if ((((-1 < iVar4) && (iVar4 < g_WindowWidth)) && (-1 < iVar6)) &&
               (iVar6 < g_WindowHeight)) {
              core_flies_cpp_drawFlyPixel_FUN_0048f3c0
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
            engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460
                      (pCVar2,(SMRGLPrimitivePoly *)&stack0xffffff5c,999);
          }
        }
        iStack_24 = iStack_24 + 0x34;
        iStack_28 = iStack_28 + 1;
      } while (iStack_28 < this_ptr->fly_count);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(&this_ptr->base);
  return iStack_28;
}
