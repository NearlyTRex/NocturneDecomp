// Name: core_path.cpp_FUN_00513950
// Address: 00513950
// Address Range: [[00513950, 00513d28]]
// Convention: unknown
// Signature: void core_path_cpp_FUN_00513950(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_path_cpp_FUN_00513950(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  CDemonRenderer *this_ptr;
  int iVar1;
  uint *extraout_EDX;
  int *extraout_EDX_00;
  int *extraout_EDX_01;
  byte bVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  ulonglong uVar8;
  int aiStackY_105c [3];
  float afStackY_1050 [3];
  int aiStackY_1044 [6];
  float afStackY_102c [1001];
  CVector3i *pCVar9;
  byte auStack_80 [12];
  int iStack_74;
  int aiStack_70 [2];
  float fStack_68;
  float afStack_64 [2];
  int iStack_5c;
  int aiStack_58 [2];
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  float fStack_44;
  float afStack_40 [4];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  bVar2 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if (iVar1 != 0) {
    return;
  }
  auStack_80._0_4_ =
       (float)*(int *)(param_1 + 0x24) * (float)g_CDemonRaytraceInstance._52_4_ +
       (float)g_CDemonRaytraceInstance._16_4_;
  auStack_80._4_4_ = 0;
  auStack_80._8_4_ =
       (float)*(int *)(param_1 + 0x2c) * (float)g_CDemonRaytraceInstance._60_4_ +
       (float)g_CDemonRaytraceInstance._24_4_;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,(CVector3f *)auStack_80);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)0x61b2d0);
  _DAT_01e613f4 = 4;
  _DAT_01e613f8 = 0;
  _DAT_01e613fc = 0;
  _DAT_01e61400 = 0;
  _DAT_01e61404 = 0;
  _DAT_01e61408 = 0;
  _DAT_01e61414 = 1;
  _DAT_01e61420 = 2;
  _DAT_01e6140c = 0x800000;
  _DAT_01e61410 = 0x800000;
  _DAT_01e61418 = 0x800000;
  _DAT_01e6141c = 0x800000;
  _DAT_01e61424 = 0x800000;
  _DAT_01e61428 = 0x800000;
  _DAT_01e61430 = 0x800000;
  _DAT_01e61434 = 0x800000;
  _DAT_01e6142c = 3;
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(DAT_0060b280,0);
  iStack_28 = param_2 << 8;
  iStack_24 = param_3 << 8;
  iStack_20 = param_4 << 8;
  iStack_74 = 0;
  iStack_30 = 0;
  iStack_2c = param_5 << 8;
  do {
    aiStack_70[1] = 0;
    iStack_1c = iStack_30 + param_1;
    do {
      if ((-1000 < *(int *)(iStack_1c + 0x9c70)) && (*(int *)(iStack_1c + 0x9c70) < 1000)) {
        fVar3 = (float10)_DAT_005e1841;
        fVar4 = (float10)(float)g_CDemonRaytraceInstance._20_4_ * fVar3;
        aiStack_70[0] = *(int *)(iStack_1c + 0x30);
        fStack_44 = (float)g_CDemonRaytraceInstance._52_4_ * _DAT_005e1839;
        iStack_5c = iStack_74;
        aiStack_58[(uint)bVar2 * -2] = aiStack_70[(uint)bVar2 * -2];
        aiStack_58[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
             aiStack_70[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
        afStack_40[0] = (float)g_CDemonRaytraceInstance._56_4_ * _DAT_005e1839;
        afStack_40[1] = (float)g_CDemonRaytraceInstance._60_4_ * _DAT_005e1839;
        iStack_18 = iStack_5c;
        fStack_68 = fStack_44;
        afStack_64[(uint)bVar2 * -2] = afStack_40[(uint)bVar2 * -2];
        afStack_64[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
             afStack_40[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
        fVar5 = (float10)iStack_18 * (float10)fStack_68;
        fVar6 = (float10)aiStack_58[0] * (float10)afStack_64[0];
        iStack_18 = aiStack_58[1];
        fVar7 = (float10)aiStack_58[1] * (float10)afStack_64[1];
        round();
        iStack_50 = (int)ROUND(fVar5);
        pCVar9 = (CVector3i *)&iStack_50;
        fVar6 = fVar6 + fVar4;
        round();
        fVar6 = fVar6 + fVar3;
        iStack_48 = (int)ROUND(fVar7);
        round();
        iStack_4c = (int)ROUND(fVar6);
        engine_special_cpp_FUN_0055d723((SProjectedVertex *)*extraout_EDX,pCVar9);
        iStack_18 = iStack_50;
        pCVar9 = (CVector3i *)&iStack_50;
        fVar3 = (float10)iStack_50 + (float10)fStack_68;
        round();
        iStack_50 = (int)ROUND(fVar3);
        engine_special_cpp_FUN_0055d723((SProjectedVertex *)(*extraout_EDX_00 + 0x30),pCVar9);
        iStack_18 = iStack_48;
        pCVar9 = (CVector3i *)&iStack_50;
        fVar3 = (float10)iStack_48 + (float10)afStack_64[1];
        round();
        iStack_48 = (int)ROUND(fVar3);
        engine_special_cpp_FUN_0055d723((SProjectedVertex *)(*extraout_EDX_01 + 0x60),pCVar9);
        iStack_18 = iStack_50;
        fVar3 = (float10)iStack_50 - (float10)fStack_68;
        uVar8 = round();
        iStack_50 = (int)ROUND(fVar3);
        engine_special_cpp_FUN_0055d723
                  ((SProjectedVertex *)(*(int *)uVar8 + 0x90),
                   (CVector3i *)((ulonglong)uVar8 >> 0x20));
        this_ptr = DAT_0060b280;
        *(int *)(*(int *)DAT_0060b280 + 0x20) = iStack_28;
        *(int *)(*(int *)this_ptr + 0x24) = iStack_24;
        *(int *)(*(int *)this_ptr + 0x28) = iStack_20;
        *(int *)(*(int *)this_ptr + 0x2c) = iStack_2c;
        *(int *)(*(int *)this_ptr + 0x50) = iStack_28;
        *(int *)(*(int *)this_ptr + 0x54) = iStack_24;
        *(int *)(*(int *)this_ptr + 0x58) = iStack_20;
        *(int *)(*(int *)this_ptr + 0x5c) = iStack_2c;
        *(int *)(*(int *)this_ptr + 0x80) = iStack_28;
        *(int *)(*(int *)this_ptr + 0x84) = iStack_24;
        *(int *)(*(int *)this_ptr + 0x88) = iStack_20;
        *(int *)(*(int *)this_ptr + 0x8c) = iStack_2c;
        *(int *)(*(int *)this_ptr + 0xb0) = iStack_28;
        *(int *)(*(int *)this_ptr + 0xb4) = iStack_24;
        *(int *)(*(int *)this_ptr + 0xb8) = iStack_20;
        *(int *)(*(int *)this_ptr + 0xbc) = iStack_2c;
        engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046aa00
                  (this_ptr,(SMRGLPrimitivePoly *)0x1e613f0);
      }
      aiStack_70[1] = aiStack_70[1] + 1;
      iStack_1c = iStack_1c + 400;
    } while (aiStack_70[1] < 100);
    iStack_74 = iStack_74 + 1;
    iStack_30 = iStack_30 + 4;
  } while (iStack_74 < 100);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(DAT_0060b280,1);
  return;
}
