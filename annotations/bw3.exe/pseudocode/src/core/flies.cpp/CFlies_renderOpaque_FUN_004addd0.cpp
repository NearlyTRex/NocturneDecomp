// Name: core_flies.cpp_CFlies_renderOpaque_FUN_004addd0
// Address: 004addd0
// Address Range: [[004addd0, 004ae1fd]]
// Convention: __cdecl
// Signature: int __cdecl core_flies_cpp_CFlies_renderOpaque_FUN_004addd0(CFlies *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_flies_cpp_CFlies_renderOpaque_FUN_004addd0(CFlies *this_ptr)

{
  CDemonRenderer *pCVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  float *out_basis;
  SRenderVertex *pSVar6;
  SRenderVertex *pSVar7;
  uint *puVar8;
  SRenderVertex *pSVar9;
  byte bVar10;
  float10 fVar11;
  float afStackY_1030 [982];
  SMRGLPrimitivePoly aSStack_c0 [4];
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint auStack_78 [6];
  uint auStack_60 [3];
  CVector3i CStack_54;
  float fStack_48;
  float afStack_44 [8];
  int iStack_24;
  int iStack_20;
  SFly *pSStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar10 = 0;
  iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  if (iVar2 != 0) {
    return 0;
  }
  this_ptr->is_visible = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar5 = auStack_78;
  puVar8 = auStack_60;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
  }
  iStack_24 = core_box_cpp_FUN_0041daf0(auStack_60);
  iVar2 = _DAT_01d1a0dc;
  if (iStack_24 != 0) {
    this_ptr->is_visible = 1;
    if (iVar2 == 0) {
      out_basis = (float *)0x1d1a124;
      iVar2 = 0;
      do {
        iVar4 = iVar2 + 1;
        iStack_14 = iVar2;
        core_spline_cpp_FUN_00567630
                  (out_basis,((float)iVar2 + (float)_DAT_005c1c61) * (float)_DAT_005c1c51,0.0);
        out_basis = out_basis + 8;
        iVar2 = iVar4;
      } while (iVar4 < 0x40);
      _DAT_01d1a0dc = 1;
    }
    pCVar1 = DAT_005f2afc;
    if (_DAT_01c6cee8 == 0) {
      engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0046d3d0(DAT_005f2afc,0,0,0);
      uVar3 = _DAT_01c6e24c >> 8;
      _DAT_01d1a11c = uVar3 | uVar3 << 8 | uVar3 << 0x10;
      _DAT_01d1a120 = _DAT_01d1a11c ^ 0xffffff;
    }
    else {
      uStack_bc = 3;
      uStack_ac = 0;
      uStack_b0 = 0;
      uStack_b4 = 0;
      uStack_b8 = 0;
      uStack_a8 = 0;
      uStack_a4 = 0x800000;
      uStack_a0 = 0x800000;
      uStack_98 = 0x800000;
      uStack_94 = 0x800000;
      uStack_8c = 0x800000;
      uStack_88 = 0x800000;
      uStack_9c = 1;
      uStack_90 = 2;
      *(uint *)(DAT_005f2afc->vertex_buffer_ptr + 0x20) = 0;
      *(uint *)(pCVar1->vertex_buffer_ptr + 0x24) = 0;
      *(uint *)(pCVar1->vertex_buffer_ptr + 0x28) = 0;
      *(uint *)(pCVar1->vertex_buffer_ptr + 0x50) = 0;
      *(uint *)(pCVar1->vertex_buffer_ptr + 0x54) = 0;
      *(uint *)(pCVar1->vertex_buffer_ptr + 0x58) = 0;
      *(uint *)(pCVar1->vertex_buffer_ptr + 0x80) = 0;
      *(uint *)(pCVar1->vertex_buffer_ptr + 0x84) = 0;
      iVar2 = _DAT_01c6e24c;
      *(uint *)(pCVar1->vertex_buffer_ptr + 0x88) = 0;
      iVar2 = 0xffff - iVar2;
      *(int *)(pCVar1->vertex_buffer_ptr + 0x2c) = iVar2;
      *(int *)(pCVar1->vertex_buffer_ptr + 0x5c) = iVar2;
      *(int *)(pCVar1->vertex_buffer_ptr + 0x8c) = iVar2;
      engine_texture_cpp_FUN_0056aa10(0x5fe8c8);
    }
    iStack_20 = 0;
    if (0 < this_ptr->fly_count) {
      pSStack_1c = this_ptr->flies;
      do {
        fVar11 = (float10)pSStack_1c->t * (float10)_DAT_005c1c59;
        iVar2 = round();
        iStack_18 = (int)ROUND(fVar11);
        if (iStack_18 < 0) {
          iStack_18 = 0;
        }
        else if (0x3f < iStack_18) {
          iStack_18 = 0x3f;
        }
        core_spline_cpp_FUN_00567860
                  (iStack_18 * 0x20 + 0x1d1a124,iVar2 + 4,iVar2 + 0x10,iVar2 + 0x1c,iVar2 + 0x28);
        fStack_48 = afStack_44[2];
        afStack_44[(uint)bVar10 * -2] = afStack_44[(uint)bVar10 * -2 + 3];
        afStack_44[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_44[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        fStack_48 = (float)(int)ROUND(fStack_48 * _DAT_005e0400);
        afStack_44[0] = (float)(int)ROUND(afStack_44[0] * _DAT_005e0400);
        afStack_44[1] = (float)(int)ROUND(afStack_44[1] * _DAT_005e0400);
        engine_special_cpp_FUN_005632a3
                  ((SProjectedVertex *)DAT_005f2afc->vertex_buffer_ptr,&CStack_54);
        pCVar1 = DAT_005f2afc;
        pSVar7 = DAT_005f2afc->vertex_buffer_ptr;
        if (((byte)pSVar7[0x13] & 0x80) == 0) {
          iVar4 = *(int *)(pSVar7 + 0x14) >> 0x10;
          iVar2 = *(int *)(pSVar7 + 0x10) >> 0x10;
          if (_DAT_01c6cee8 == 0) {
            engine_prim_c_replaceWWithDepth_FUN_00515a80(pSVar7,1);
            if ((((-1 < iVar2) && (iVar2 < DAT_005fba18)) && (-1 < iVar4)) && (iVar4 < DAT_005fba1c)
               ) {
              core_flies_cpp_drawFlyPixel_FUN_004add00(iVar2,iVar4,*(int *)(pSVar7 + 8));
            }
          }
          else if ((iVar2 < DAT_005fba18 + -1) && (iVar4 < DAT_005fba1c + -1)) {
            *(ushort *)(pSVar7 + 0x10) = 0;
            *(ushort *)(pSVar7 + 0x14) = 0;
            pSVar6 = pSVar7;
            pSVar9 = pCVar1->vertex_buffer_ptr + 0x30;
            for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
              *(uint *)pSVar9 = *(uint *)pSVar6;
              pSVar6 = pSVar6 + ((uint)bVar10 * -2 + 1) * 4;
              pSVar9 = pSVar9 + ((uint)bVar10 * -2 + 1) * 4;
            }
            pSVar6 = pCVar1->vertex_buffer_ptr + 0x60;
            for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
              *(uint *)pSVar6 = *(uint *)pSVar7;
              pSVar7 = pSVar7 + ((uint)bVar10 * -2 + 1) * 4;
              pSVar6 = pSVar6 + ((uint)bVar10 * -2 + 1) * 4;
            }
            *(short *)(pCVar1->vertex_buffer_ptr + 0x42) =
                 *(short *)(pCVar1->vertex_buffer_ptr + 0x42) + 1;
            *(short *)(pCVar1->vertex_buffer_ptr + 0x76) =
                 *(short *)(pCVar1->vertex_buffer_ptr + 0x76) + 1;
            engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0046b8f0(pCVar1,aSStack_c0,999)
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
