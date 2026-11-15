// Name: core_flies.cpp_CFlies_renderOpaque_FUN_004addd0
// Address: 004addd0
// Address Range: [[004addd0, 004ae1fd]]
// Convention: __cdecl
// Signature: int __cdecl core_flies_cpp_CFlies_renderOpaque_FUN_004addd0(CFlies *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_flies_cpp_CFlies_renderOpaque_FUN_004addd0(CFlies *this_ptr)

{
  short *psVar1;
  CDemonRenderer *pCVar2;
  SFly *pSVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  float *out_basis;
  SRenderVertex *pSVar8;
  SRenderVertex *vertices;
  uint *puVar9;
  SRenderVertex *pSVar10;
  byte bVar11;
  double dVar12;
  float afStackY_1028 [980];
  byte auStack_c0 [120];
  int iStack_48;
  int iStack_44;
  float fStack_40;
  float afStack_3c [2];
  CVector3f CStack_34;
  int iStack_24;
  int iStack_20;
  SFly *pSStack_1c;
  int iStack_14;
  
  bVar11 = 0;
  iVar4 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  if (iVar4 != 0) {
    return 0;
  }
  this_ptr->is_visible = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar7 = (uint *)(auStack_c0 + 0x48);
  puVar9 = (uint *)(auStack_c0 + 0x60);
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
    puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
  }
  iStack_24 = core_box_cpp_FUN_0041daf0(auStack_c0 + 0x60);
  iVar4 = _DAT_01d1a0dc;
  if (iStack_24 != 0) {
    this_ptr->is_visible = 1;
    if (iVar4 == 0) {
      out_basis = (float *)0x1d1a124;
      iVar4 = 0;
      do {
        iVar6 = iVar4 + 1;
        iStack_14 = iVar4;
        core_spline_cpp_computeSplineBasis_FUN_00567630
                  (out_basis,((float)iVar4 + (float)_DAT_005c1c61) * (float)_DAT_005c1c51,0.0);
        out_basis = out_basis + 8;
        iVar4 = iVar6;
      } while (iVar6 < 0x40);
      _DAT_01d1a0dc = 1;
    }
    pCVar2 = DAT_005f2afc;
    if (_DAT_01c6cee8 == 0) {
      engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0046d3d0(DAT_005f2afc,0,0,0);
      uVar5 = _DAT_01c6e24c >> 8;
      _DAT_01d1a11c = uVar5 | uVar5 << 8 | uVar5 << 0x10;
      _DAT_01d1a120 = _DAT_01d1a11c ^ 0xffffff;
    }
    else {
      auStack_c0._4_4_ = 3;
      auStack_c0._20_4_ = 0;
      auStack_c0._16_4_ = 0;
      auStack_c0._12_4_ = 0;
      auStack_c0._8_4_ = 0;
      auStack_c0._24_4_ = 0;
      auStack_c0._28_4_ = 0x800000;
      auStack_c0._32_4_ = 0x800000;
      auStack_c0._40_4_ = 0x800000;
      auStack_c0._44_4_ = 0x800000;
      auStack_c0._52_4_ = 0x800000;
      auStack_c0._56_4_ = 0x800000;
      auStack_c0._36_4_ = 1;
      auStack_c0._48_4_ = 2;
      DAT_005f2afc->vertex_buffer_ptr->r = 0;
      pCVar2->vertex_buffer_ptr->g = 0;
      pCVar2->vertex_buffer_ptr->b = 0;
      pCVar2->vertex_buffer_ptr[1].r = 0;
      pCVar2->vertex_buffer_ptr[1].g = 0;
      pCVar2->vertex_buffer_ptr[1].b = 0;
      pCVar2->vertex_buffer_ptr[2].r = 0;
      pCVar2->vertex_buffer_ptr[2].g = 0;
      iVar4 = _DAT_01c6e24c;
      pCVar2->vertex_buffer_ptr[2].b = 0;
      iVar4 = 0xffff - iVar4;
      pCVar2->vertex_buffer_ptr->a = iVar4;
      pCVar2->vertex_buffer_ptr[1].a = iVar4;
      pCVar2->vertex_buffer_ptr[2].a = iVar4;
      engine_texture_cpp_ensureTextureLoaded_FUN_0056aa10((SMRGLTextureBasic *)0x5fe8c8);
    }
    iStack_20 = 0;
    if (0 < this_ptr->fly_count) {
      pSStack_1c = this_ptr->flies;
      do {
        pSVar3 = pSStack_1c;
        dVar12 = round((double)(pSStack_1c->t * _DAT_005c1c59));
        pSStack_1c = (SFly *)(int)ROUND(dVar12);
        if ((int)pSStack_1c < 0) {
          pSStack_1c = (SFly *)0x0;
        }
        else if (0x3f < (int)pSStack_1c) {
          pSStack_1c = (SFly *)0x3f;
        }
        core_spline_cpp_evaluateSplinePoint3D_FUN_00567860
                  ((float *)((int)pSStack_1c * 0x20 + 0x1d1a124),pSVar3->control_points,
                   pSVar3->control_points + 1,pSVar3->control_points + 2,pSVar3->control_points + 3,
                   &CStack_34);
        fStack_40 = CStack_34.x;
        afStack_3c[(uint)bVar11 * -2] = *(float *)((int)&CStack_34 + (uint)bVar11 * -8 + 4);
        afStack_3c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             *(float *)((int)&CStack_34 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        auStack_c0._116_4_ = (uint)ROUND(fStack_40 * _DAT_005e0400);
        iStack_48 = (int)ROUND(afStack_3c[0] * _DAT_005e0400);
        iStack_44 = (int)ROUND(afStack_3c[1] * _DAT_005e0400);
        engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                  (&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,
                   (CVector3i *)(auStack_c0 + 0x74));
        pCVar2 = DAT_005f2afc;
        vertices = DAT_005f2afc->vertex_buffer_ptr;
        if ((int)((vertices->projected_vertex).screen_x & -0x80000000) == 0) {
          iVar6 = (vertices->projected_vertex).screen_y >> 0x10;
          iVar4 = (vertices->projected_vertex).screen_x >> 0x10;
          if (_DAT_01c6cee8 == 0) {
            engine_prim_c_replaceWWithDepth_FUN_00515a80(vertices,1);
            if ((((-1 < iVar4) && (iVar4 < DAT_005fba18)) && (-1 < iVar6)) && (iVar6 < DAT_005fba1c)
               ) {
              core_flies_cpp_drawFlyPixel_FUN_004add00
                        (iVar4,iVar6,(vertices->projected_vertex).transformed_z);
            }
          }
          else if ((iVar4 < DAT_005fba18 + -1) && (iVar6 < DAT_005fba1c + -1)) {
            *(ushort *)&(vertices->projected_vertex).screen_x = 0;
            *(ushort *)&(vertices->projected_vertex).screen_y = 0;
            pSVar8 = vertices;
            pSVar10 = pCVar2->vertex_buffer_ptr + 1;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              (pSVar10->projected_vertex).transformed_x = (pSVar8->projected_vertex).transformed_x;
              pSVar8 = (SRenderVertex *)((int)pSVar8 + (uint)bVar11 * -8 + 4);
              pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar11 * -2 + 1) * 4);
            }
            pSVar8 = pCVar2->vertex_buffer_ptr + 2;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              (pSVar8->projected_vertex).transformed_x = (vertices->projected_vertex).transformed_x;
              vertices = (SRenderVertex *)((int)vertices + (uint)bVar11 * -8 + 4);
              pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar11 * -2 + 1) * 4);
            }
            psVar1 = (short *)((int)&pCVar2->vertex_buffer_ptr[1].projected_vertex.screen_x + 2);
            *psVar1 = *psVar1 + 1;
            *(short *)((int)&pCVar2->vertex_buffer_ptr[2].projected_vertex.screen_y + 2) =
                 *(short *)((int)&pCVar2->vertex_buffer_ptr[2].projected_vertex.screen_y + 2) + 1;
            engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0
                      (pCVar2,(SMRGLPrimitivePoly *)auStack_c0,999);
          }
        }
        pSStack_1c = (SFly *)((int)pSStack_1c + 0x34);
        iStack_20 = iStack_20 + 1;
      } while (iStack_20 < this_ptr->fly_count);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(&this_ptr->base);
  return iStack_24;
}
