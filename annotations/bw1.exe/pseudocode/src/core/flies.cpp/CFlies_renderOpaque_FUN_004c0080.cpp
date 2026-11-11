// Name: core_flies.cpp_CFlies_renderOpaque_FUN_004c0080
// Address: 004c0080
// Address Range: [[004c0080, 004c04ad]]
// Convention: __cdecl
// Signature: int __cdecl core_flies_cpp_CFlies_renderOpaque_FUN_004c0080(CFlies *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_flies_cpp_CFlies_renderOpaque_FUN_004c0080(CFlies *this_ptr)

{
  short *psVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  SMRGLVertex *pSVar6;
  float *out_basis;
  SRenderVertex *pSVar7;
  SRenderVertex *pSVar8;
  SMRGLVertex *pSVar9;
  SRenderVertex *pSVar10;
  byte bVar11;
  float10 fVar12;
  float afStackY_1024 [980];
  SMRGLPrimitivePoly SStack_c0;
  CVector3i CStack_48;
  float fStack_3c;
  float afStack_38 [5];
  int iStack_24;
  int iStack_20;
  SFly *pSStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar11 = 0;
  iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if (iVar3 != 0) {
    return 0;
  }
  this_ptr->is_visible = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  pSVar6 = SStack_c0.vertices + 4;
  pSVar9 = SStack_c0.vertices + 6;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    pSVar9->vertex_index = pSVar6->vertex_index;
    pSVar6 = (SMRGLVertex *)((int)pSVar6 + ((uint)bVar11 * -2 + 1) * 4);
    pSVar9 = (SMRGLVertex *)((int)pSVar9 + ((uint)bVar11 * -2 + 1) * 4);
  }
  iStack_24 = core_box_cpp_FUN_004207b0(SStack_c0.vertices + 6);
  iVar3 = _DAT_01cc8084;
  if (iStack_24 != 0) {
    this_ptr->is_visible = 1;
    if (iVar3 == 0) {
      out_basis = (float *)0x1cc80cc;
      iVar3 = 0;
      do {
        iVar5 = iVar3 + 1;
        iStack_14 = iVar3;
        core_spline_cpp_FUN_00583d60
                  (out_basis,((float)iVar3 + (float)_DAT_005e0772) * (float)_DAT_005e0762,0.0);
        out_basis = out_basis + 8;
        iVar3 = iVar5;
      } while (iVar5 < 0x40);
      _DAT_01cc8084 = 1;
    }
    pCVar2 = DAT_00612560;
    if (_DAT_01c50948 == 0) {
      engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_00483cf0(DAT_00612560,0,0,0);
      uVar4 = _DAT_01c51cac >> 8;
      _DAT_01cc80c4 = uVar4 | uVar4 << 8 | uVar4 << 0x10;
      _DAT_01cc80c8 = _DAT_01cc80c4 ^ 0xffffff;
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
      DAT_00612560->vertex_buffer_ptr->r = 0;
      pCVar2->vertex_buffer_ptr->g = 0;
      pCVar2->vertex_buffer_ptr->b = 0;
      pCVar2->vertex_buffer_ptr[1].r = 0;
      pCVar2->vertex_buffer_ptr[1].g = 0;
      pCVar2->vertex_buffer_ptr[1].b = 0;
      pCVar2->vertex_buffer_ptr[2].r = 0;
      pCVar2->vertex_buffer_ptr[2].g = 0;
      iVar3 = _DAT_01c51cac;
      pCVar2->vertex_buffer_ptr[2].b = 0;
      iVar3 = 0xffff - iVar3;
      pCVar2->vertex_buffer_ptr->a = iVar3;
      pCVar2->vertex_buffer_ptr[1].a = iVar3;
      pCVar2->vertex_buffer_ptr[2].a = iVar3;
      engine_texture_cpp_FUN_00597a20(0x61d828);
    }
    iStack_20 = 0;
    if (0 < this_ptr->fly_count) {
      pSStack_1c = this_ptr->flies;
      do {
        fVar12 = (float10)pSStack_1c->t * (float10)_DAT_005e076a;
        iVar3 = round();
        iStack_18 = (int)ROUND(fVar12);
        if (iStack_18 < 0) {
          iStack_18 = 0;
        }
        else if (0x3f < iStack_18) {
          iStack_18 = 0x3f;
        }
        core_spline_cpp_FUN_00583f90
                  (iStack_18 * 0x20 + 0x1cc80cc,iVar3 + 4,iVar3 + 0x10,iVar3 + 0x1c,iVar3 + 0x28);
        fStack_3c = afStack_38[2];
        afStack_38[(uint)bVar11 * -2] = afStack_38[(uint)bVar11 * -2 + 3];
        afStack_38[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             afStack_38[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
        CStack_48.x = (int)ROUND(fStack_3c * _DAT_00600aa0);
        CStack_48.y = (int)ROUND(afStack_38[0] * _DAT_00600aa0);
        CStack_48.z = (int)ROUND(afStack_38[1] * _DAT_00600aa0);
        engine_special_cpp_FUN_00580173
                  (&DAT_00612560->vertex_buffer_ptr->projected_vertex,&CStack_48);
        pCVar2 = DAT_00612560;
        pSVar8 = DAT_00612560->vertex_buffer_ptr;
        if ((int)((pSVar8->projected_vertex).screen_x & -0x80000000) == 0) {
          iVar5 = (pSVar8->projected_vertex).screen_y >> 0x10;
          iVar3 = (pSVar8->projected_vertex).screen_x >> 0x10;
          if (_DAT_01c50948 == 0) {
            engine_prim_c_replaceWWithDepth_FUN_0053dd20(pSVar8,1);
            if ((((-1 < iVar3) && (iVar3 < DAT_0061b498)) && (-1 < iVar5)) && (iVar5 < DAT_0061b49c)
               ) {
              core_flies_cpp_drawFlyPixel_FUN_004bffb0
                        (iVar3,iVar5,(pSVar8->projected_vertex).transformed_z);
            }
          }
          else if ((iVar3 < DAT_0061b498 + -1) && (iVar5 < DAT_0061b49c + -1)) {
            *(ushort *)&(pSVar8->projected_vertex).screen_x = 0;
            *(ushort *)&(pSVar8->projected_vertex).screen_y = 0;
            pSVar7 = pSVar8;
            pSVar10 = pCVar2->vertex_buffer_ptr + 1;
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              (pSVar10->projected_vertex).transformed_x = (pSVar7->projected_vertex).transformed_x;
              pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar11 * -2 + 1) * 4);
              pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar11 * -2 + 1) * 4);
            }
            pSVar7 = pCVar2->vertex_buffer_ptr + 2;
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              (pSVar7->projected_vertex).transformed_x = (pSVar8->projected_vertex).transformed_x;
              pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar11 * -2 + 1) * 4);
              pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar11 * -2 + 1) * 4);
            }
            psVar1 = (short *)((int)&pCVar2->vertex_buffer_ptr[1].projected_vertex.screen_x + 2);
            *psVar1 = *psVar1 + 1;
            *(short *)((int)&pCVar2->vertex_buffer_ptr[2].projected_vertex.screen_y + 2) =
                 *(short *)((int)&pCVar2->vertex_buffer_ptr[2].projected_vertex.screen_y + 2) + 1;
            engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210(pCVar2,&SStack_c0,999)
            ;
          }
        }
        pSStack_1c = pSStack_1c + 1;
        iStack_20 = iStack_20 + 1;
      } while (iStack_20 < this_ptr->fly_count);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(&this_ptr->base);
  return iStack_24;
}
