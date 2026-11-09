// Name: core_dlight.cpp_FUN_0046498e
// Address: 0046498e
// Address Range: [[0046498e, 00465053]]
// Convention: unknown
// Signature: void core_dlight_cpp_FUN_0046498e(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dlight_cpp_FUN_0046498e(int param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  unkbyte10 Var8;
  float10 fVar9;
  ulonglong uVar10;
  float afStackY_109c [1000];
  CDemonRenderer *pCVar11;
  CVector3f *euler_angles;
  CVector3f *translation;
  float fStack_f0;
  int iStack_ec;
  SMRGLHeaderPrimitive aSStack_e8 [4];
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_54;
  int iStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  int iStack_34;
  int iStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  int iStack_1c;
  int iStack_18;
  
  bVar3 = 0;
  if (*(int *)(param_1 + 0x1cbc) != 0) {
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
              (DAT_00612560,(CVector3f *)(param_1 + 4));
    core_dirmat_cpp_FUN_0045f840(param_1 + 0x10);
    translation = (CVector3f *)0x0;
    euler_angles = &CStack_a8;
    CStack_a8._0_4_ = CStack_b4._0_4_;
    *(uint *)((int)&CStack_a8 + (uint)bVar3 * -8 + 4) =
         *(uint *)((int)&CStack_b4 + (uint)bVar3 * -8 + 4);
    pCVar11 = DAT_00612560;
    *(uint *)((int)&CStack_a8 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
         *(uint *)((int)&CStack_b4 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
              (pCVar11,euler_angles,translation);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (DAT_00612560,(SMRGLTextureBasic *)&DAT_006122a8);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,1);
    iStack_ec = 1;
    do {
      fVar4 = (float10)iStack_ec * ((float10)_DAT_005d9224 / (float10)*(float *)(param_1 + 0x38)) *
              (float10)_DAT_005d91f4;
      fStack_f0 = (float)fVar4;
      Var8 = fpatan(fVar4,(float10)1);
      fVar4 = (float10)fcos(Var8);
      iVar2 = 0;
      fStack_48 = (float)fVar4;
      do {
        fVar4 = (float10)iVar2 * (float10)_DAT_005d91fc * (float10)_DAT_005d9200 *
                (float10)_DAT_005d9204;
        fVar5 = (float10)fsin(fVar4);
        fVar9 = (float10)(iVar2 + 1) * (float10)_DAT_005d91fc * (float10)_DAT_005d9200 *
                (float10)_DAT_005d9204;
        fVar6 = (float10)fsin(fVar9);
        fVar4 = (float10)fcos(fVar4);
        fVar9 = (float10)fcos(fVar9);
        iStack_1c = *(int *)(param_1 + 0x1cc0) - (*(int *)(param_1 + 0x1cc0) >> 0x1f) >> 1;
        iStack_18 = *(int *)(param_1 + 0x1cc4) - (*(int *)(param_1 + 0x1cc4) >> 0x1f) >> 1;
        fVar7 = (float10)fStack_f0;
        fStack_38 = (float)(fVar4 * fVar7);
        fVar4 = (float10)iStack_18 - (float10)iStack_18 * (float10)fStack_38;
        round();
        iStack_54 = (int)ROUND(fVar4);
        fStack_3c = (float)(fVar5 * fVar7);
        fVar6 = fVar6 * fVar7;
        fVar4 = (float10)iStack_1c * (float10)fStack_3c + (float10)iStack_1c;
        fVar9 = fVar9 * fVar7;
        uVar10 = round();
        iStack_50 = (int)ROUND(fVar4);
        fStack_2c = (float)*(ushort *)
                            (*(int *)((int)((ulonglong)uVar10 >> 0x20) + 0x2f94) +
                            ((int)uVar10 + iStack_50) * 2) * (float)_DAT_005d920c;
        iVar1 = 0;
        fStack_44 = (float)fVar6;
        fStack_40 = (float)fVar9;
        fStack_28 = fStack_2c;
        do {
          fStack_4c = *(float *)(param_1 + 0x140);
          fStack_20 = (float)iVar1 * fStack_48 * fStack_4c * _DAT_005d9214;
          iStack_18 = iVar1 + 1;
          fStack_24 = (float)iStack_18 * fStack_48 * fStack_4c * _DAT_005d9214;
          fVar5 = ((float10)fStack_4c - (float10)fStack_20) * ((float10)1 / (float10)fStack_4c) *
                  (float10)_DAT_005d921c;
          fVar9 = ((float10)fStack_4c - (float10)fStack_24) * ((float10)1 / (float10)fStack_4c) *
                  (float10)_DAT_005d921c;
          fVar4 = (float10)fStack_20;
          round();
          round();
          iStack_30 = (int)ROUND(fVar5);
          iStack_34 = (int)ROUND(fVar9);
          fStack_94 = fStack_28;
          if (fVar4 < (float10)fStack_28) {
            fStack_94 = fStack_20;
          }
          fStack_9c = fStack_94 * fStack_3c;
          fStack_98 = fStack_94 * fStack_38;
          iStack_c0 = (int)ROUND(fStack_9c * _DAT_005febd0);
          iStack_bc = (int)ROUND(fStack_98 * _DAT_005febd0);
          iStack_b8 = (int)ROUND(fStack_94 * _DAT_005febd0);
          engine_special_cpp_FUN_00580173
                    (*(SProjectedVertex **)DAT_00612560,(CVector3i *)&iStack_c0);
          fStack_94 = fStack_2c;
          if (fStack_20 < fStack_2c) {
            fStack_94 = fStack_20;
          }
          fStack_9c = fStack_94 * fStack_44;
          fStack_98 = fStack_94 * fStack_40;
          iStack_90 = (int)ROUND(fStack_9c * _DAT_005febd0);
          iStack_8c = (int)ROUND(fStack_98 * _DAT_005febd0);
          iStack_88 = (int)ROUND(fStack_94 * _DAT_005febd0);
          engine_special_cpp_FUN_00580173
                    ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x30),(CVector3i *)&iStack_90);
          fStack_94 = fStack_2c;
          if (fStack_24 < fStack_2c) {
            fStack_94 = fStack_24;
          }
          fStack_9c = fStack_94 * fStack_44;
          fStack_98 = fStack_94 * fStack_40;
          iStack_84 = (int)ROUND(fStack_9c * _DAT_005febd0);
          iStack_80 = (int)ROUND(fStack_98 * _DAT_005febd0);
          iStack_7c = (int)ROUND(fStack_94 * _DAT_005febd0);
          engine_special_cpp_FUN_00580173
                    ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x60),(CVector3i *)&iStack_84);
          fStack_94 = fStack_28;
          if (fStack_24 < fStack_28) {
            fStack_94 = fStack_24;
          }
          fStack_9c = fStack_94 * fStack_3c;
          fStack_98 = fStack_94 * fStack_38;
          iStack_78 = (int)ROUND(fStack_9c * _DAT_005febd0);
          iStack_74 = (int)ROUND(fStack_98 * _DAT_005febd0);
          iStack_70 = (int)ROUND(fStack_94 * _DAT_005febd0);
          engine_special_cpp_FUN_00580173
                    ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x90),(CVector3i *)&iStack_78);
          pCVar11 = DAT_00612560;
          *(int *)(*(int *)DAT_00612560 + 0x2c) = iStack_30;
          *(uint *)(*(int *)pCVar11 + 0x28) = 0xffff;
          *(uint *)(*(int *)pCVar11 + 0x24) = 0xffff;
          *(uint *)(*(int *)pCVar11 + 0x20) = 0xffff;
          *(uint *)(*(int *)pCVar11 + 0x18) = 0xf80000;
          *(uint *)(*(int *)pCVar11 + 0x1c) = 0xf80000;
          *(int *)(*(int *)pCVar11 + 0x5c) = iStack_30;
          *(uint *)(*(int *)pCVar11 + 0x58) = 0xffff;
          *(uint *)(*(int *)pCVar11 + 0x54) = 0xffff;
          *(uint *)(*(int *)pCVar11 + 0x50) = 0xffff;
          *(uint *)(*(int *)pCVar11 + 0x48) = 0x80000;
          *(uint *)(*(int *)pCVar11 + 0x4c) = 0xf80000;
          *(int *)(*(int *)pCVar11 + 0x8c) = iStack_34;
          *(uint *)(*(int *)pCVar11 + 0x88) = 0xffff;
          *(uint *)(*(int *)pCVar11 + 0x84) = 0xffff;
          *(uint *)(*(int *)pCVar11 + 0x80) = 0xffff;
          *(uint *)(*(int *)pCVar11 + 0x78) = 0x80000;
          *(uint *)(*(int *)pCVar11 + 0x7c) = 0x80000;
          *(int *)(*(int *)pCVar11 + 0xbc) = iStack_34;
          *(uint *)(*(int *)pCVar11 + 0xb8) = 0xffff;
          *(uint *)(*(int *)pCVar11 + 0xb4) = 0xffff;
          *(uint *)(*(int *)pCVar11 + 0xb0) = 0xffff;
          *(uint *)(*(int *)pCVar11 + 0xa8) = 0xf80000;
          iVar1 = iVar1 + 1;
          *(uint *)(*(int *)pCVar11 + 0xac) = 0x80000;
          uStack_d4 = 0;
          uStack_d8 = 0;
          uStack_e4 = 4;
          uStack_dc = 0;
          uStack_cc = 1;
          uStack_e0 = 0;
          uStack_d0 = 0;
          uStack_c4 = 3;
          uStack_c8 = 2;
          engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30(pCVar11,aSStack_e8)
          ;
        } while (iVar1 < 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x10);
      iStack_ec = iStack_ec + 1;
    } while (iStack_ec < 0x10);
    engine_matrix_c_pop_FUN_004839a0();
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
    return;
  }
  return;
}
