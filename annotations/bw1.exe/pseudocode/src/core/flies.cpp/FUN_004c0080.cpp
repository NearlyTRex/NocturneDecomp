// Name: core_flies.cpp_FUN_004c0080
// Address: 004c0080
// Address Range: [[004c0080, 004c04ad]]
// Convention: unknown
// Signature: int core_flies_cpp_FUN_004c0080(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_flies_cpp_FUN_004c0080(CDemonActor *param_1)

{
  CDemonRenderer *pCVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float *out_basis;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float10 fVar9;
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
  int iStack_48;
  int iStack_44;
  int iStack_40;
  float fStack_3c;
  float afStack_38 [5];
  int iStack_24;
  int iStack_20;
  float *pfStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar8 = 0;
  iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if (iVar2 != 0) {
    return 0;
  }
  *(uint *)&param_1[0x1f].field_0x74 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(param_1);
  (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
  puVar6 = auStack_78;
  puVar5 = auStack_60;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar6;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
  }
  iStack_24 = core_box_cpp_FUN_004207b0(auStack_60);
  iVar2 = _DAT_01cc8084;
  if (iStack_24 != 0) {
    *(uint *)&param_1[0x1f].field_0x74 = 1;
    if (iVar2 == 0) {
      out_basis = (float *)0x1cc80cc;
      iVar2 = 0;
      do {
        iVar4 = iVar2 + 1;
        iStack_14 = iVar2;
        core_spline_cpp_FUN_00583d60
                  (out_basis,((float)iVar2 + (float)_DAT_005e0772) * (float)_DAT_005e0762,0.0);
        out_basis = out_basis + 8;
        iVar2 = iVar4;
      } while (iVar4 < 0x40);
      _DAT_01cc8084 = 1;
    }
    pCVar1 = DAT_00612560;
    if (_DAT_01c50948 == 0) {
      engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_00483cf0(DAT_00612560,0,0,0);
      uVar3 = _DAT_01c51cac >> 8;
      _DAT_01cc80c4 = uVar3 | uVar3 << 8 | uVar3 << 0x10;
      _DAT_01cc80c8 = _DAT_01cc80c4 ^ 0xffffff;
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
      *(uint *)(*(int *)DAT_00612560 + 0x20) = 0;
      *(uint *)(*(int *)pCVar1 + 0x24) = 0;
      *(uint *)(*(int *)pCVar1 + 0x28) = 0;
      *(uint *)(*(int *)pCVar1 + 0x50) = 0;
      *(uint *)(*(int *)pCVar1 + 0x54) = 0;
      *(uint *)(*(int *)pCVar1 + 0x58) = 0;
      *(uint *)(*(int *)pCVar1 + 0x80) = 0;
      *(uint *)(*(int *)pCVar1 + 0x84) = 0;
      iVar2 = _DAT_01c51cac;
      *(uint *)(*(int *)pCVar1 + 0x88) = 0;
      iVar2 = 0xffff - iVar2;
      *(int *)(*(int *)pCVar1 + 0x2c) = iVar2;
      *(int *)(*(int *)pCVar1 + 0x5c) = iVar2;
      *(int *)(*(int *)pCVar1 + 0x8c) = iVar2;
      engine_texture_cpp_FUN_00597a20(0x61d828);
    }
    iStack_20 = 0;
    if (0 < *(int *)&param_1[1].field_0xc) {
      pfStack_1c = (float *)&param_1[1].field_0x10;
      do {
        fVar9 = (float10)*pfStack_1c * (float10)_DAT_005e076a;
        iVar2 = round();
        iStack_18 = (int)ROUND(fVar9);
        if (iStack_18 < 0) {
          iStack_18 = 0;
        }
        else if (0x3f < iStack_18) {
          iStack_18 = 0x3f;
        }
        core_spline_cpp_FUN_00583f90
                  (iStack_18 * 0x20 + 0x1cc80cc,iVar2 + 4,iVar2 + 0x10,iVar2 + 0x1c,iVar2 + 0x28);
        fStack_3c = afStack_38[2];
        afStack_38[(uint)bVar8 * -2] = afStack_38[(uint)bVar8 * -2 + 3];
        afStack_38[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             afStack_38[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
        iStack_48 = (int)ROUND(fStack_3c * _DAT_00600aa0);
        iStack_44 = (int)ROUND(afStack_38[0] * _DAT_00600aa0);
        iStack_40 = (int)ROUND(afStack_38[1] * _DAT_00600aa0);
        engine_special_cpp_FUN_00580173(*(SProjectedVertex **)DAT_00612560,(CVector3i *)&iStack_48);
        pCVar1 = DAT_00612560;
        puVar6 = *(uint **)DAT_00612560;
        if ((*(byte *)((int)puVar6 + 0x13) & 0x80) == 0) {
          iVar4 = (int)puVar6[5] >> 0x10;
          iVar2 = (int)puVar6[4] >> 0x10;
          if (_DAT_01c50948 == 0) {
            engine_prim_c_replaceWWithDepth_FUN_0053dd20(puVar6,1);
            if ((((-1 < iVar2) && (iVar2 < DAT_0061b498)) && (-1 < iVar4)) && (iVar4 < DAT_0061b49c)
               ) {
              core_flies_cpp_drawFlyPixel_FUN_004bffb0(iVar2,iVar4,puVar6[2]);
            }
          }
          else if ((iVar2 < DAT_0061b498 + -1) && (iVar4 < DAT_0061b49c + -1)) {
            *(ushort *)(puVar6 + 4) = 0;
            *(ushort *)(puVar6 + 5) = 0;
            puVar5 = puVar6;
            puVar7 = (uint *)(*(int *)pCVar1 + 0x30);
            for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar7 = *puVar5;
              puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
              puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
            }
            puVar5 = (uint *)(*(int *)pCVar1 + 0x60);
            for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar5 = *puVar6;
              puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
              puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
            }
            *(short *)(*(int *)pCVar1 + 0x42) = *(short *)(*(int *)pCVar1 + 0x42) + 1;
            *(short *)(*(int *)pCVar1 + 0x76) = *(short *)(*(int *)pCVar1 + 0x76) + 1;
            engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210(pCVar1,aSStack_c0,999)
            ;
          }
        }
        pfStack_1c = pfStack_1c + 0xd;
        iStack_20 = iStack_20 + 1;
      } while (iStack_20 < *(int *)&param_1[1].field_0xc);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(param_1);
  return iStack_24;
}
