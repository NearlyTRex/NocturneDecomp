// Name: core_setutil.cpp_FUN_0053be4c
// Address: 0053be4c
// Address Range: [[0053be4c, 0053c0e0]]
// Convention: unknown
// Signature: void core_setutil_cpp_FUN_0053be4c(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_setutil_cpp_FUN_0053be4c(int param_1)

{
  CDemonRenderer *pCVar1;
  int *extraout_EDX;
  int *extraout_EDX_00;
  CDemonRenderer *this_ptr;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  SMRGLHeaderPrimitive aSStack_78 [4];
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  if ((*(uint *)(param_1 + 0x11d4) & 0x7fffffff) == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,(CVector3f *)(param_1 + 0x104));
  iStack_c = 0;
  iStack_18 = 0;
  do {
    iVar4 = -4;
    iVar2 = iStack_18 + -0xc0;
    do {
      fVar5 = (float10)iStack_c * (float10)_DAT_005e64d9 * (float10)_DAT_005e64dd *
              (float10)_DAT_005e64e1;
      fVar6 = (float10)fsin(fVar5);
      fVar5 = (float10)fcos(fVar5);
      fVar7 = (float10)*(float *)(param_1 + 0x11d4) * (float10)_DAT_005e64d1;
      fVar8 = (float10)iVar4 * (float10)_DAT_005e64e9 * (float10)_DAT_005e64dd *
              (float10)_DAT_005e64f1;
      fVar9 = (float10)fcos(fVar8);
      fVar8 = (float10)fsin(fVar8);
      fStack_3c = (float)(fVar5 * fVar7 * fVar9);
      fStack_44 = (float)(fVar6 * fVar7 * fVar9);
      fStack_40 = (float)(fVar8 * fVar7);
      iStack_50 = (int)ROUND(fStack_44 * _DAT_005fb3c0);
      iStack_4c = (int)ROUND(fStack_40 * _DAT_005fb3c0);
      iStack_48 = (int)ROUND(fStack_3c * _DAT_005fb3c0);
      iStack_8 = iVar4;
      engine_special_cpp_FUN_0055d723
                ((SProjectedVertex *)(*(int *)DAT_0060b280 + iVar2),(CVector3i *)&iStack_50);
      pCVar1 = DAT_0060b280;
      *(uint *)(iVar2 + 0x18 + *(int *)DAT_0060b280) = 0x800000;
      *(uint *)(iVar2 + 0x1c + *(int *)pCVar1) = 0x800000;
      fVar5 = (float10)*(float *)(param_1 + 0x11c4) * (float10)_DAT_005e64f9;
      iVar3 = *(int *)pCVar1;
      round();
      iStack_8 = (int)ROUND(fVar5);
      *(int *)(iVar2 + 0x20 + iVar3) = iStack_8;
      iVar3 = *extraout_EDX;
      fVar5 = (float10)*(float *)(param_1 + 0x11c8) * (float10)_DAT_005e64f9;
      round();
      iStack_8 = (int)ROUND(fVar5);
      *(int *)(iVar3 + iVar2 + 0x24) = iStack_8;
      fVar5 = (float10)*(float *)(param_1 + 0x11cc) * (float10)_DAT_005e64f9;
      iVar3 = *extraout_EDX_00;
      round();
      iStack_8 = (int)ROUND(fVar5);
      iVar4 = iVar4 + 1;
      *(int *)(iVar2 + 0x28 + iVar3) = iStack_8;
      iVar2 = iVar2 + 0x30;
    } while (iVar4 < 5);
    iStack_c = iStack_c + 1;
    iStack_18 = iStack_18 + 0x1e0;
  } while (iStack_c < 0x11);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (this_ptr,(SMRGLTextureBasic *)0x61bb54);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0x4000);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  uStack_74 = 4;
  uStack_64 = 0;
  uStack_68 = 0;
  uStack_6c = 0;
  uStack_70 = 0;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,1);
  iStack_14 = 10;
  iStack_10 = 0;
  do {
    iVar4 = iStack_10;
    iVar2 = iStack_14;
    iVar3 = -4;
    do {
      iStack_60 = iVar4 + iVar3;
      iStack_5c = iVar2 + iVar3;
      iVar3 = iVar3 + 1;
      iStack_58 = iVar2 + iVar3;
      iStack_54 = iVar4 + iVar3;
      engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50(DAT_0060b280,aSStack_78);
    } while (iVar3 < 4);
    iStack_10 = iStack_10 + 10;
    iStack_14 = iStack_14 + 10;
  } while (iStack_10 != 0xa0);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,0);
  return;
}
