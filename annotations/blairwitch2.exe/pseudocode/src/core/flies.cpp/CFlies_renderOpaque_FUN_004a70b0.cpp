// Name: core_flies.cpp_CFlies_renderOpaque_FUN_004a70b0
// Address: 004a70b0
// Address Range: [[004a70b0, 004a74dd]]
// Convention: __cdecl
// Signature: int __cdecl core_flies_cpp_CFlies_renderOpaque_FUN_004a70b0(CFlies *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_flies_cpp_CFlies_renderOpaque_FUN_004a70b0(CFlies *this_ptr)

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
  float afStackY_1024 [980];
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
  uint auStack_60 [6];
  CVector3i CStack_48;
  float fStack_3c;
  float afStack_38 [5];
  int iStack_24;
  int iStack_20;
  SFly *pSStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar10 = 0;
  iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if (iVar2 != 0) {
    return 0;
  }
  this_ptr->is_visible = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar5 = auStack_78;
  puVar8 = auStack_60;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
  }
  iStack_24 = core_box_cpp_FUN_0041a840(auStack_60);
  iVar2 = _DAT_01caf5ec;
  if (iStack_24 != 0) {
    this_ptr->is_visible = 1;
    if (iVar2 == 0) {
      out_basis = (float *)0x1caf634;
      iVar2 = 0;
      do {
        iVar4 = iVar2 + 1;
        iStack_14 = iVar2;
        core_spline_cpp_FUN_00561310
                  (out_basis,((float)iVar2 + (float)_DAT_005d66f9) * (float)_DAT_005d66e9,0.0);
        out_basis = out_basis + 8;
        iVar2 = iVar4;
      } while (iVar4 < 0x40);
      _DAT_01caf5ec = 1;
    }
    pCVar1 = DAT_0060b280;
    if (_DAT_01c37788 == 0) {
      engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0046b7f0(DAT_0060b280,0,0,0);
      uVar3 = _DAT_01c38aec >> 8;
      _DAT_01caf62c = uVar3 | uVar3 << 8 | uVar3 << 0x10;
      _DAT_01caf630 = _DAT_01caf62c ^ 0xffffff;
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
      *(uint *)(DAT_0060b280->vertex_buffer_ptr + 0x20) = 0;
      *(uint *)(pCVar1->vertex_buffer_ptr + 0x24) = 0;
      *(uint *)(pCVar1->vertex_buffer_ptr + 0x28) = 0;
      *(uint *)(pCVar1->vertex_buffer_ptr + 0x50) = 0;
      *(uint *)(pCVar1->vertex_buffer_ptr + 0x54) = 0;
      *(uint *)(pCVar1->vertex_buffer_ptr + 0x58) = 0;
      *(uint *)(pCVar1->vertex_buffer_ptr + 0x80) = 0;
      *(uint *)(pCVar1->vertex_buffer_ptr + 0x84) = 0;
      iVar2 = _DAT_01c38aec;
      *(uint *)(pCVar1->vertex_buffer_ptr + 0x88) = 0;
      iVar2 = 0xffff - iVar2;
      *(int *)(pCVar1->vertex_buffer_ptr + 0x2c) = iVar2;
      *(int *)(pCVar1->vertex_buffer_ptr + 0x5c) = iVar2;
      *(int *)(pCVar1->vertex_buffer_ptr + 0x8c) = iVar2;
      engine_texture_cpp_FUN_00574e00(0x616378);
    }
    iStack_20 = 0;
    if (0 < this_ptr->fly_count) {
      pSStack_1c = this_ptr->flies;
      do {
        fVar11 = (float10)*(float *)pSStack_1c * (float10)_DAT_005d66f1;
        iVar2 = round();
        iStack_18 = (int)ROUND(fVar11);
        if (iStack_18 < 0) {
          iStack_18 = 0;
        }
        else if (0x3f < iStack_18) {
          iStack_18 = 0x3f;
        }
        core_spline_cpp_FUN_00561540
                  (iStack_18 * 0x20 + 0x1caf634,iVar2 + 4,iVar2 + 0x10,iVar2 + 0x1c,iVar2 + 0x28);
        fStack_3c = afStack_38[2];
        afStack_38[(uint)bVar10 * -2] = afStack_38[(uint)bVar10 * -2 + 3];
        afStack_38[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_38[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        CStack_48.x = (int)ROUND(fStack_3c * _DAT_005f7060);
        CStack_48.y = (int)ROUND(afStack_38[0] * _DAT_005f7060);
        CStack_48.z = (int)ROUND(afStack_38[1] * _DAT_005f7060);
        engine_special_cpp_FUN_0055d723
                  ((SProjectedVertex *)DAT_0060b280->vertex_buffer_ptr,&CStack_48);
        pCVar1 = DAT_0060b280;
        pSVar7 = DAT_0060b280->vertex_buffer_ptr;
        if (((byte)pSVar7[0x13] & 0x80) == 0) {
          iVar4 = *(int *)(pSVar7 + 0x14) >> 0x10;
          iVar2 = *(int *)(pSVar7 + 0x10) >> 0x10;
          if (_DAT_01c37788 == 0) {
            engine_prim_c_replaceWWithDepth_FUN_0051c720(pSVar7,1);
            if ((((-1 < iVar2) && (iVar2 < DAT_006141b8)) && (-1 < iVar4)) && (iVar4 < DAT_006141bc)
               ) {
              core_flies_cpp_drawFlyPixel_FUN_004a6fe0(iVar2,iVar4,*(int *)(pSVar7 + 8));
            }
          }
          else if ((iVar2 < DAT_006141b8 + -1) && (iVar4 < DAT_006141bc + -1)) {
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
            engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00(pCVar1,aSStack_c0,999)
            ;
          }
        }
        pSStack_1c = pSStack_1c + 1;
        iStack_20 = iStack_20 + 1;
      } while (iStack_20 < this_ptr->fly_count);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
  return iStack_24;
}
