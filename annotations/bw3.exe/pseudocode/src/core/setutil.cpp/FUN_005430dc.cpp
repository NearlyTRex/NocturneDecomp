// Name: core_setutil.cpp_FUN_005430dc
// Address: 005430dc
// Address Range: [[005430dc, 00543370]]
// Convention: unknown
// Signature: void core_setutil_cpp_FUN_005430dc(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_setutil_cpp_FUN_005430dc(int param_1)

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
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,(CVector3f *)(param_1 + 0x104));
  iStack_c = 0;
  iStack_18 = 0;
  do {
    iVar4 = -4;
    iVar2 = iStack_18 + -0xc0;
    do {
      fVar5 = (float10)iStack_c * (float10)_DAT_005d1152 * (float10)_DAT_005d1156 *
              (float10)_DAT_005d115a;
      fVar6 = (float10)fsin(fVar5);
      fVar5 = (float10)fcos(fVar5);
      fVar7 = (float10)*(float *)(param_1 + 0x11d4) * (float10)_DAT_005d114a;
      fVar8 = (float10)iVar4 * (float10)_DAT_005d1162 * (float10)_DAT_005d1156 *
              (float10)_DAT_005d116a;
      fVar9 = (float10)fcos(fVar8);
      fVar8 = (float10)fsin(fVar8);
      fStack_3c = (float)(fVar5 * fVar7 * fVar9);
      fStack_44 = (float)(fVar6 * fVar7 * fVar9);
      fStack_40 = (float)(fVar8 * fVar7);
      iStack_50 = (int)ROUND(fStack_44 * _DAT_005e3d18);
      iStack_4c = (int)ROUND(fStack_40 * _DAT_005e3d18);
      iStack_48 = (int)ROUND(fStack_3c * _DAT_005e3d18);
      iStack_8 = iVar4;
      engine_special_cpp_FUN_005632a3
                ((SProjectedVertex *)(*(int *)DAT_005f2afc + iVar2),(CVector3i *)&iStack_50);
      pCVar1 = DAT_005f2afc;
      *(uint *)(iVar2 + 0x18 + *(int *)DAT_005f2afc) = 0x800000;
      *(uint *)(iVar2 + 0x1c + *(int *)pCVar1) = 0x800000;
      fVar5 = (float10)*(float *)(param_1 + 0x11c4) * (float10)_DAT_005d1172;
      iVar3 = *(int *)pCVar1;
      round();
      iStack_8 = (int)ROUND(fVar5);
      *(int *)(iVar2 + 0x20 + iVar3) = iStack_8;
      iVar3 = *extraout_EDX;
      fVar5 = (float10)*(float *)(param_1 + 0x11c8) * (float10)_DAT_005d1172;
      round();
      iStack_8 = (int)ROUND(fVar5);
      *(int *)(iVar3 + iVar2 + 0x24) = iStack_8;
      fVar5 = (float10)*(float *)(param_1 + 0x11cc) * (float10)_DAT_005d1172;
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
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (this_ptr,(SMRGLTextureBasic *)&DAT_0060409c);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,0x4000);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
  uStack_74 = 4;
  uStack_64 = 0;
  uStack_68 = 0;
  uStack_6c = 0;
  uStack_70 = 0;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,1);
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
      engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046c730(DAT_005f2afc,aSStack_78);
    } while (iVar3 < 4);
    iStack_10 = iStack_10 + 10;
    iStack_14 = iStack_14 + 10;
  } while (iStack_10 != 0xa0);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046d460(DAT_005f2afc,0);
  return;
}
