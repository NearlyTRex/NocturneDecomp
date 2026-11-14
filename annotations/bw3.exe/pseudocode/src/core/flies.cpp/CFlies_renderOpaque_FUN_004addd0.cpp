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
  int iVar3;
  uint uVar4;
  int iVar5;
  SMRGLVertex *pSVar6;
  float *out_basis;
  SRenderVertex *pSVar7;
  SRenderVertex *vertices;
  SMRGLVertex *pSVar8;
  SRenderVertex *pSVar9;
  byte bVar10;
  float10 fVar11;
  float afStackY_1030 [982];
  SMRGLPrimitivePoly SStack_c0;
  float fStack_48;
  float afStack_44 [8];
  int iStack_24;
  int iStack_20;
  SFly *pSStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar10 = 0;
  iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  if (iVar3 != 0) {
    return 0;
  }
  this_ptr->is_visible = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  pSVar6 = SStack_c0.vertices + 4;
  pSVar8 = SStack_c0.vertices + 6;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    pSVar8->vertex_index = pSVar6->vertex_index;
    pSVar6 = (SMRGLVertex *)((int)pSVar6 + ((uint)bVar10 * -2 + 1) * 4);
    pSVar8 = (SMRGLVertex *)((int)pSVar8 + ((uint)bVar10 * -2 + 1) * 4);
  }
  iStack_24 = core_box_cpp_FUN_0041daf0(SStack_c0.vertices + 6);
  iVar3 = _DAT_01d1a0dc;
  if (iStack_24 != 0) {
    this_ptr->is_visible = 1;
    if (iVar3 == 0) {
      out_basis = (float *)0x1d1a124;
      iVar3 = 0;
      do {
        iVar5 = iVar3 + 1;
        iStack_14 = iVar3;
        core_spline_cpp_FUN_00567630
                  (out_basis,((float)iVar3 + (float)_DAT_005c1c61) * (float)_DAT_005c1c51,0.0);
        out_basis = out_basis + 8;
        iVar3 = iVar5;
      } while (iVar5 < 0x40);
      _DAT_01d1a0dc = 1;
    }
    pCVar2 = DAT_005f2afc;
    if (_DAT_01c6cee8 == 0) {
      engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0046d3d0(DAT_005f2afc,0,0,0);
      uVar4 = _DAT_01c6e24c >> 8;
      _DAT_01d1a11c = uVar4 | uVar4 << 8 | uVar4 << 0x10;
      _DAT_01d1a120 = _DAT_01d1a11c ^ 0xffffff;
    }
    else {
      SStack_c0.base.base.count = 3;
      SStack_c0.base.surface_normal.D.i = 0;
      SStack_c0.base.surface_normal.C.i = 0;
      SStack_c0.base.surface_normal.B.i = 0;
      SStack_c0.base.surface_normal.A.i = 0;
      SStack_c0.vertices[0].vertex_index = 0;
      SStack_c0.vertices[0].texture_u = 0x800000;
      SStack_c0.vertices[0].texture_v = 0x800000;
      SStack_c0.vertices[1].texture_u = 0x800000;
      SStack_c0.vertices[1].texture_v = 0x800000;
      SStack_c0.vertices[2].texture_u = 0x800000;
      SStack_c0.vertices[2].texture_v = 0x800000;
      SStack_c0.vertices[1].vertex_index = 1;
      SStack_c0.vertices[2].vertex_index = 2;
      DAT_005f2afc->vertex_buffer_ptr->r = 0;
      pCVar2->vertex_buffer_ptr->g = 0;
      pCVar2->vertex_buffer_ptr->b = 0;
      pCVar2->vertex_buffer_ptr[1].r = 0;
      pCVar2->vertex_buffer_ptr[1].g = 0;
      pCVar2->vertex_buffer_ptr[1].b = 0;
      pCVar2->vertex_buffer_ptr[2].r = 0;
      pCVar2->vertex_buffer_ptr[2].g = 0;
      iVar3 = _DAT_01c6e24c;
      pCVar2->vertex_buffer_ptr[2].b = 0;
      iVar3 = 0xffff - iVar3;
      pCVar2->vertex_buffer_ptr->a = iVar3;
      pCVar2->vertex_buffer_ptr[1].a = iVar3;
      pCVar2->vertex_buffer_ptr[2].a = iVar3;
      engine_texture_cpp_FUN_0056aa10(0x5fe8c8);
    }
    iStack_20 = 0;
    if (0 < this_ptr->fly_count) {
      pSStack_1c = this_ptr->flies;
      do {
        fVar11 = (float10)pSStack_1c->t * (float10)_DAT_005c1c59;
        iVar3 = round();
        iStack_18 = (int)ROUND(fVar11);
        if (iStack_18 < 0) {
          iStack_18 = 0;
        }
        else if (0x3f < iStack_18) {
          iStack_18 = 0x3f;
        }
        core_spline_cpp_FUN_00567860
                  (iStack_18 * 0x20 + 0x1d1a124,iVar3 + 4,iVar3 + 0x10,iVar3 + 0x1c,iVar3 + 0x28);
        fStack_48 = afStack_44[2];
        afStack_44[(uint)bVar10 * -2] = afStack_44[(uint)bVar10 * -2 + 3];
        afStack_44[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_44[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        fStack_48 = (float)(int)ROUND(fStack_48 * _DAT_005e0400);
        afStack_44[0] = (float)(int)ROUND(afStack_44[0] * _DAT_005e0400);
        afStack_44[1] = (float)(int)ROUND(afStack_44[1] * _DAT_005e0400);
        engine_special_cpp_FUN_005632a3
                  (&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,
                   (CVector3i *)(SStack_c0.vertices + 7));
        pCVar2 = DAT_005f2afc;
        vertices = DAT_005f2afc->vertex_buffer_ptr;
        if ((int)((vertices->projected_vertex).screen_x & -0x80000000) == 0) {
          iVar5 = (vertices->projected_vertex).screen_y >> 0x10;
          iVar3 = (vertices->projected_vertex).screen_x >> 0x10;
          if (_DAT_01c6cee8 == 0) {
            engine_prim_c_replaceWWithDepth_FUN_00515a80(vertices,1);
            if ((((-1 < iVar3) && (iVar3 < DAT_005fba18)) && (-1 < iVar5)) && (iVar5 < DAT_005fba1c)
               ) {
              core_flies_cpp_drawFlyPixel_FUN_004add00
                        (iVar3,iVar5,(vertices->projected_vertex).transformed_z);
            }
          }
          else if ((iVar3 < DAT_005fba18 + -1) && (iVar5 < DAT_005fba1c + -1)) {
            *(ushort *)&(vertices->projected_vertex).screen_x = 0;
            *(ushort *)&(vertices->projected_vertex).screen_y = 0;
            pSVar7 = vertices;
            pSVar9 = pCVar2->vertex_buffer_ptr + 1;
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              (pSVar9->projected_vertex).transformed_x = (pSVar7->projected_vertex).transformed_x;
              pSVar7 = (SRenderVertex *)((int)pSVar7 + (uint)bVar10 * -8 + 4);
              pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar10 * -2 + 1) * 4);
            }
            pSVar7 = pCVar2->vertex_buffer_ptr + 2;
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              (pSVar7->projected_vertex).transformed_x = (vertices->projected_vertex).transformed_x;
              vertices = (SRenderVertex *)((int)vertices + (uint)bVar10 * -8 + 4);
              pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar10 * -2 + 1) * 4);
            }
            psVar1 = (short *)((int)&pCVar2->vertex_buffer_ptr[1].projected_vertex.screen_x + 2);
            *psVar1 = *psVar1 + 1;
            *(short *)((int)&pCVar2->vertex_buffer_ptr[2].projected_vertex.screen_y + 2) =
                 *(short *)((int)&pCVar2->vertex_buffer_ptr[2].projected_vertex.screen_y + 2) + 1;
            engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0(pCVar2,&SStack_c0,999)
            ;
          }
        }
        pSStack_1c = pSStack_1c + 1;
        iStack_20 = iStack_20 + 1;
      } while (iStack_20 < this_ptr->fly_count);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(&this_ptr->base);
  return iStack_24;
}
