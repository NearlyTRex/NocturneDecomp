// Name: core_flies.cpp_FUN_0048f490
// Address: 0048f490
// Address Range: [[0048f490, 0048f884]]
// Convention: unknown
// Signature: int core_flies_cpp_FUN_0048f490(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_flies_cpp_FUN_0048f490(int *param_1)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  float10 fVar12;
  int *apiStack_a4 [2];
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  byte local_58 [20];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_28;
  int iStack_24;
  float *pfStack_20;
  int iStack_18;
  
  bVar11 = 0;
  apiStack_a4[0] = DAT_005ae704;
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090();
  if (iVar3 != 0) {
    return 0;
  }
  apiStack_a4[0] = param_1;
  param_1[0xa85] = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20();
  apiStack_a4[0] = (int *)0x0;
  uVar4 = (**(code **)(param_1[0x53] + 0x14))(param_1,local_58);
  iStack_28 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar4);
  iVar3 = _DAT_01c70714;
  if (iStack_28 != 0) {
    param_1[0xa85] = 1;
    if (iVar3 == 0) {
      iVar7 = 0x1c7075c;
      iVar3 = 0;
      do {
        apiStack_a4[0] = (int *)0x0;
        iVar6 = iVar3 + 1;
        iStack_18 = iVar3;
        core_spline_cpp_computeSplineBasis_FUN_00533ce0
                  (iVar7,((float)iVar3 + (float)0.5) * (float)0.015625);
        iVar7 = iVar7 + 0x20;
        iVar3 = iVar6;
      } while (iVar6 < 0x40);
      _DAT_01c70714 = 1;
    }
    piVar1 = DAT_005ae704;
    if (_DAT_01c02594 == (int *)0x0) {
      apiStack_a4[0] = _DAT_01c02594;
      engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_00460f20(DAT_005ae704,0,0);
      uVar5 = _DAT_01c038f4 >> 8;
      _DAT_01c70754 = uVar5 | uVar5 << 8 | uVar5 << 0x10;
      _DAT_01c70758 = _DAT_01c70754 ^ 0xffffff;
    }
    else {
      uStack_9c = 3;
      uStack_8c = 0;
      uStack_90 = 0;
      uStack_94 = 0;
      uStack_98 = 0;
      uStack_88 = 0;
      uStack_84 = 0x800000;
      uStack_80 = 0x800000;
      uStack_78 = 0x800000;
      uStack_74 = 0x800000;
      uStack_6c = 0x800000;
      uStack_68 = 0x800000;
      uStack_7c = 1;
      uStack_70 = 2;
      *(uint *)(*DAT_005ae704 + 0x20) = 0;
      *(uint *)(*piVar1 + 0x24) = 0;
      *(uint *)(*piVar1 + 0x28) = 0;
      *(uint *)(*piVar1 + 0x50) = 0;
      *(uint *)(*piVar1 + 0x54) = 0;
      *(uint *)(*piVar1 + 0x58) = 0;
      *(uint *)(*piVar1 + 0x80) = 0;
      *(uint *)(*piVar1 + 0x84) = 0;
      iVar3 = _DAT_01c038f4;
      *(uint *)(*piVar1 + 0x88) = 0;
      iVar3 = 0xffff - iVar3;
      *(int *)(*piVar1 + 0x2c) = iVar3;
      *(int *)(*piVar1 + 0x5c) = iVar3;
      apiStack_a4[0] = (int *)&DAT_005b9214;
      *(int *)(*piVar1 + 0x8c) = iVar3;
      engine_texture_cpp_ensureTextureLoaded_FUN_00545920();
    }
    iStack_24 = 0;
    if (0 < param_1[0x57]) {
      pfStack_20 = (float *)(param_1 + 0x58);
      do {
        pfVar2 = pfStack_20;
        apiStack_a4[0] = (int *)0x48f676;
        fVar12 = (float10)round
                                    ((float10)*pfStack_20 * (float10)64.0f);
        pfStack_20 = (float *)(int)ROUND(fVar12);
        if ((int)pfStack_20 < 0) {
          pfStack_20 = (float *)0x0;
        }
        else if (0x3f < (int)pfStack_20) {
          pfStack_20 = (float *)0x3f;
        }
        core_spline_cpp_evaluateSplinePoint3D_FUN_00533f10
                  ((int)pfStack_20 * 0x20 + 0x1c7075c,&fStack_44,pfVar2 + 1,pfVar2 + 4,pfVar2 + 7,
                   pfVar2 + 10);
        iStack_38 = (int)ROUND(fStack_44 * _DAT_0059da10);
        iStack_34 = (int)ROUND(fStack_40 * _DAT_0059da10);
        iStack_30 = (int)ROUND(fStack_3c * _DAT_0059da10);
        engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704,&iStack_38);
        piVar1 = DAT_005ae704;
        puVar9 = (uint *)*DAT_005ae704;
        if ((*(byte *)((int)puVar9 + 0x13) & 0x80) == 0) {
          iVar7 = (int)puVar9[5] >> 0x10;
          iVar3 = (int)puVar9[4] >> 0x10;
          if (_DAT_01c02594 == (int *)0x0) {
            engine_prim_c_replaceWWithDepth_FUN_004f99d0(puVar9,1);
            if ((((-1 < iVar3) && (iVar3 < DAT_005b761c)) && (-1 < iVar7)) && (iVar7 < DAT_005b7620)
               ) {
              core_flies_cpp_drawFlyPixel_FUN_0048f3c0(iVar3,iVar7,puVar9[2]);
            }
          }
          else if ((iVar3 < DAT_005b761c + -1) && (iVar7 < DAT_005b7620 + -1)) {
            *(ushort *)(puVar9 + 4) = 0;
            *(ushort *)(puVar9 + 5) = 0;
            puVar8 = puVar9;
            puVar10 = (uint *)(*piVar1 + 0x30);
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar10 = *puVar8;
              puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
              puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
            }
            puVar8 = (uint *)(*piVar1 + 0x60);
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar8 = *puVar9;
              puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
              puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
            }
            *(short *)(*piVar1 + 0x42) = *(short *)(*piVar1 + 0x42) + 1;
            *(short *)(*piVar1 + 0x76) = *(short *)(*piVar1 + 0x76) + 1;
            engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460
                      (piVar1,apiStack_a4,999);
          }
        }
        iStack_24 = iStack_24 + 0x34;
        iStack_28 = iStack_28 + 1;
      } while (iStack_28 < param_1[0x57]);
    }
  }
  apiStack_a4[0] = param_1;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60();
  return iStack_28;
}
