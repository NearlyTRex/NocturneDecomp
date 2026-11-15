// Name: core_flies.cpp_CFlies_renderOpaque_FUN_004a70b0
// Address: 004a70b0
// Address Range: [[004a70b0, 004a74dd]]
// Convention: __cdecl
// Signature: int __cdecl core_flies_cpp_CFlies_renderOpaque_FUN_004a70b0(CFlies *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_flies_cpp_CFlies_renderOpaque_FUN_004a70b0(CFlies *this_ptr)

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
  iVar4 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if (iVar4 != 0) {
    return 0;
  }
  this_ptr->is_visible = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar7 = (uint *)(auStack_c0 + 0x48);
  puVar9 = (uint *)(auStack_c0 + 0x60);
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
    puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
  }
  iStack_24 = core_box_cpp_FUN_0041a840(auStack_c0 + 0x60);
  iVar4 = _DAT_01caf5ec;
  if (iStack_24 != 0) {
    this_ptr->is_visible = 1;
    if (iVar4 == 0) {
      out_basis = (float *)0x1caf634;
      iVar4 = 0;
      do {
        iVar6 = iVar4 + 1;
        iStack_14 = iVar4;
        core_spline_cpp_computeSplineBasis_FUN_00561310
                  (out_basis,((float)iVar4 + (float)_DAT_005d66f9) * (float)_DAT_005d66e9,0.0);
        out_basis = out_basis + 8;
        iVar4 = iVar6;
      } while (iVar6 < 0x40);
      _DAT_01caf5ec = 1;
    }
    pCVar2 = DAT_0060b280;
    if (_DAT_01c37788 == 0) {
      engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0046b7f0(DAT_0060b280,0,0,0);
      uVar5 = _DAT_01c38aec >> 8;
      _DAT_01caf62c = uVar5 | uVar5 << 8 | uVar5 << 0x10;
      _DAT_01caf630 = _DAT_01caf62c ^ 0xffffff;
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
      DAT_0060b280->vertex_buffer_ptr->r = 0;
      pCVar2->vertex_buffer_ptr->g = 0;
      pCVar2->vertex_buffer_ptr->b = 0;
      pCVar2->vertex_buffer_ptr[1].r = 0;
      pCVar2->vertex_buffer_ptr[1].g = 0;
      pCVar2->vertex_buffer_ptr[1].b = 0;
      pCVar2->vertex_buffer_ptr[2].r = 0;
      pCVar2->vertex_buffer_ptr[2].g = 0;
      iVar4 = _DAT_01c38aec;
      pCVar2->vertex_buffer_ptr[2].b = 0;
      iVar4 = 0xffff - iVar4;
      pCVar2->vertex_buffer_ptr->a = iVar4;
      pCVar2->vertex_buffer_ptr[1].a = iVar4;
      pCVar2->vertex_buffer_ptr[2].a = iVar4;
      engine_texture_cpp_ensureTextureLoaded_FUN_00574e00((SMRGLTextureBasic *)0x616378);
    }
    iStack_20 = 0;
    if (0 < this_ptr->fly_count) {
      pSStack_1c = this_ptr->flies;
      do {
        pSVar3 = pSStack_1c;
        dVar12 = round((double)(pSStack_1c->t * _DAT_005d66f1));
        pSStack_1c = (SFly *)(int)ROUND(dVar12);
        if ((int)pSStack_1c < 0) {
          pSStack_1c = (SFly *)0x0;
        }
        else if (0x3f < (int)pSStack_1c) {
          pSStack_1c = (SFly *)0x3f;
        }
        core_spline_cpp_evaluateSplinePoint3D_FUN_00561540
                  ((float *)((int)pSStack_1c * 0x20 + 0x1caf634),pSVar3->control_points,
                   pSVar3->control_points + 1,pSVar3->control_points + 2,pSVar3->control_points + 3,
                   &CStack_34);
        fStack_40 = CStack_34.x;
        afStack_3c[(uint)bVar11 * -2] = *(float *)((int)&CStack_34 + (uint)bVar11 * -8 + 4);
        afStack_3c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             *(float *)((int)&CStack_34 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        auStack_c0._116_4_ = (uint)ROUND(fStack_40 * _DAT_005f7060);
        iStack_48 = (int)ROUND(afStack_3c[0] * _DAT_005f7060);
        iStack_44 = (int)ROUND(afStack_3c[1] * _DAT_005f7060);
        engine_special_cpp_transformAndProjectPoint_FUN_0055d723
                  (&DAT_0060b280->vertex_buffer_ptr->projected_vertex,
                   (CVector3i *)(auStack_c0 + 0x74));
        pCVar2 = DAT_0060b280;
        vertices = DAT_0060b280->vertex_buffer_ptr;
        if ((int)((vertices->projected_vertex).screen_x & -0x80000000) == 0) {
          iVar6 = (vertices->projected_vertex).screen_y >> 0x10;
          iVar4 = (vertices->projected_vertex).screen_x >> 0x10;
          if (_DAT_01c37788 == 0) {
            engine_prim_c_replaceWWithDepth_FUN_0051c720(vertices,1);
            if ((((-1 < iVar4) && (iVar4 < DAT_006141b8)) && (-1 < iVar6)) && (iVar6 < DAT_006141bc)
               ) {
              core_flies_cpp_drawFlyPixel_FUN_004a6fe0
                        (iVar4,iVar6,(vertices->projected_vertex).transformed_z);
            }
          }
          else if ((iVar4 < DAT_006141b8 + -1) && (iVar6 < DAT_006141bc + -1)) {
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
            engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00
                      (pCVar2,(SMRGLPrimitivePoly *)auStack_c0,999);
          }
        }
        pSStack_1c = (SFly *)((int)pSStack_1c + 0x34);
        iStack_20 = iStack_20 + 1;
      } while (iStack_20 < this_ptr->fly_count);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
  return iStack_24;
}
