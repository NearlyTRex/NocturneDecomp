// Name: unkafter_superopt.cpp_FUN_005a86a0
// Address: 005a86a0
// Address Range: [[005a86a0, 005a8c8d]]
// Convention: unknown
// Signature: int unkafter_superopt_cpp_FUN_005a86a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int unkafter_superopt_cpp_FUN_005a86a0(int param_1)

{
  SProjectedVertex *output;
  int iVar1;
  int iVar2;
  float fVar3;
  int extraout_EAX;
  int *extraout_EDX;
  int *extraout_EDX_00;
  int *extraout_EDX_01;
  int *extraout_EDX_02;
  int *extraout_EDX_03;
  int *extraout_EDX_04;
  int *extraout_EDX_05;
  int *extraout_EDX_06;
  int *extraout_EDX_07;
  int *extraout_EDX_08;
  int *extraout_EDX_09;
  int *extraout_EDX_10;
  CDemonRenderer *this_ptr;
  byte bVar4;
  float10 fVar5;
  float10 fVar6;
  float afStackY_106c [1004];
  CVector3i *rotation;
  float local_b0;
  SMRGLHeaderPrimitive aSStack_ac [4];
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint local_84;
  uint auStack_80 [2];
  int local_78;
  int local_74;
  int local_70;
  float local_6c;
  float local_68;
  uint local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  uint auStack_38 [2];
  int local_30;
  int local_2c;
  int local_28;
  int iStack_24;
  float fStack_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar4 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if (iVar1 == 0) {
    output = *(SProjectedVertex **)DAT_0060b280;
    local_48 = (int)ROUND(*(float *)(param_1 + 0x24) * _DAT_006002bc);
    local_44 = (int)ROUND(*(float *)(param_1 + 0x28) * _DAT_006002bc);
    local_40 = (int)ROUND(*(float *)(param_1 + 0x2c) * _DAT_006002bc);
    engine_special_cpp_FUN_0055d9ec(output,(CVector3i *)&local_48);
    iVar2 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0046cad0
                      (DAT_0060b280,(SRenderVertex *)output);
    iVar1 = 0;
    if (iVar2 != 0) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
                (DAT_0060b280,(CVector3f *)(param_1 + 0x24));
      engine_matrix_c_FUN_0046b650(DAT_0060b280);
      rotation = (CVector3i *)0x0;
      local_84 = local_3c;
      auStack_80[(uint)bVar4 * -2] = auStack_38[(uint)bVar4 * -2];
      auStack_80[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           auStack_38[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
                (DAT_0060b280,(CVector3i *)&local_84,rotation);
      local_18 = *(float *)(param_1 + 0x18);
      if (0.0 < *(float *)(param_1 + 8)) {
        local_18 = (*(float *)(param_1 + 0x1c) - local_18) *
                   (1.0 - *(float *)(param_1 + 8) / *(float *)(param_1 + 4)) + local_18;
      }
      local_6c = -local_18;
      local_68 = -local_18;
      local_64 = 0;
      local_54 = (int)ROUND(local_6c * _DAT_006002bc);
      local_50 = (int)ROUND(local_68 * _DAT_006002bc);
      local_4c = (int)ROUND(_DAT_006002bc * 0.0);
      local_b0 = local_18;
      local_1c = local_6c;
      local_14 = local_68;
      engine_special_cpp_FUN_0055d723(*(SProjectedVertex **)DAT_0060b280,(CVector3i *)&local_54);
      local_6c = local_b0;
      local_64 = 0;
      local_68 = local_14;
      local_30 = (int)ROUND(local_b0 * _DAT_006002bc);
      local_2c = (int)ROUND(local_14 * _DAT_006002bc);
      local_28 = (int)ROUND(_DAT_006002bc * 0.0);
      engine_special_cpp_FUN_0055d723
                ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x30),(CVector3i *)&local_30);
      local_6c = local_b0;
      local_68 = local_18;
      local_64 = 0;
      local_78 = (int)ROUND(local_b0 * _DAT_006002bc);
      local_74 = (int)ROUND(local_18 * _DAT_006002bc);
      local_70 = (int)ROUND(_DAT_006002bc * 0.0);
      engine_special_cpp_FUN_0055d723
                ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x60),(CVector3i *)&local_78);
      local_64 = 0;
      local_6c = local_1c;
      local_68 = local_18;
      local_60 = (int)ROUND(local_1c * _DAT_006002bc);
      local_5c = (int)ROUND(local_18 * _DAT_006002bc);
      local_58 = (int)ROUND(_DAT_006002bc * 0.0);
      engine_special_cpp_FUN_0055d723
                ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x90),(CVector3i *)&local_60);
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
                (DAT_0060b280,(SMRGLTextureBasic *)(&DAT_0061ec00 + *(int *)(param_1 + 0x20) * 0x18)
                );
      (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 4))(DAT_007bda74,param_1 + 0x24,0);
      iStack_24 = 0xffff - _DAT_01c38aec;
      fStack_20 = (*(float *)(param_1 + 0x10) - *(float *)(param_1 + 0xc)) *
                  (1.0 - *(float *)(param_1 + 8) / *(float *)(param_1 + 4)) +
                  *(float *)(param_1 + 0xc);
      fVar3 = (float)unkafter_superopt_cpp_FUN_005a8250(*(uint *)(param_1 + 0x54));
      local_14 = (float)iStack_24;
      fVar6 = (float10)iStack_24 * (float10)fVar3 * (float10)fStack_20;
      iVar1 = *(int *)DAT_0060b280;
      round();
      iStack_24 = (int)ROUND(fVar6);
      *(int *)(iVar1 + 0x2c) = iStack_24;
      *(int *)(*extraout_EDX + 0x5c) = iStack_24;
      *(int *)(*extraout_EDX + 0x8c) = iStack_24;
      *(int *)(*extraout_EDX + 0xbc) = iStack_24;
      fVar5 = (float10)_DAT_005f0833;
      fVar6 = (float10)*(float *)(param_1 + 0x48) * fVar5;
      iVar1 = *extraout_EDX;
      round();
      local_1c = (float)(int)ROUND(fVar6);
      *(float *)(iVar1 + 0x20) = local_1c;
      fVar6 = (float10)*(float *)(param_1 + 0x48) * fVar5;
      iVar1 = *extraout_EDX_00;
      round();
      local_1c = (float)(int)ROUND(fVar6);
      *(float *)(iVar1 + 0x50) = local_1c;
      fVar6 = (float10)*(float *)(param_1 + 0x48) * fVar5;
      iVar1 = *extraout_EDX_01;
      round();
      local_1c = (float)(int)ROUND(fVar6);
      *(float *)(iVar1 + 0x80) = local_1c;
      fVar6 = (float10)*(float *)(param_1 + 0x48) * fVar5;
      iVar1 = *extraout_EDX_02;
      round();
      local_1c = (float)(int)ROUND(fVar6);
      *(float *)(iVar1 + 0xb0) = local_1c;
      fVar5 = fVar5 * (float10)*(float *)(param_1 + 0x4c);
      iVar1 = *extraout_EDX_03;
      round();
      local_1c = (float)(int)ROUND(fVar5);
      *(float *)(iVar1 + 0x24) = local_1c;
      fVar5 = (float10)_DAT_005f0833;
      fVar6 = (float10)*(float *)(param_1 + 0x4c) * fVar5;
      iVar1 = *extraout_EDX_04;
      round();
      local_1c = (float)(int)ROUND(fVar6);
      *(float *)(iVar1 + 0x54) = local_1c;
      fVar6 = (float10)*(float *)(param_1 + 0x4c) * fVar5;
      iVar1 = *extraout_EDX_05;
      round();
      local_1c = (float)(int)ROUND(fVar6);
      *(float *)(iVar1 + 0x84) = local_1c;
      fVar6 = (float10)*(float *)(param_1 + 0x4c) * fVar5;
      iVar1 = *extraout_EDX_06;
      round();
      local_1c = (float)(int)ROUND(fVar6);
      *(float *)(iVar1 + 0xb4) = local_1c;
      fVar6 = (float10)*(float *)(param_1 + 0x50) * fVar5;
      iVar1 = *extraout_EDX_07;
      round();
      local_1c = (float)(int)ROUND(fVar6);
      *(float *)(iVar1 + 0x28) = local_1c;
      fVar6 = (float10)*(float *)(param_1 + 0x50) * fVar5;
      iVar1 = *extraout_EDX_08;
      round();
      local_1c = (float)(int)ROUND(fVar6);
      *(float *)(iVar1 + 0x58) = local_1c;
      fVar6 = (float10)*(float *)(param_1 + 0x50) * fVar5;
      iVar1 = *extraout_EDX_09;
      round();
      local_1c = (float)(int)ROUND(fVar6);
      *(float *)(iVar1 + 0x88) = local_1c;
      fVar5 = fVar5 * (float10)*(float *)(param_1 + 0x50);
      iVar1 = *extraout_EDX_10;
      round();
      local_1c = (float)(int)ROUND(fVar5);
      *(float *)(iVar1 + 0xb8) = local_1c;
      *(uint *)(*(int *)this_ptr + 0x18) = 0;
      *(uint *)(*(int *)this_ptr + 0x1c) = 0xff0000;
      *(uint *)(*(int *)this_ptr + 0x48) = 0xff0000;
      *(uint *)(*(int *)this_ptr + 0x4c) = 0xff0000;
      *(uint *)(*(int *)this_ptr + 0x78) = 0xff0000;
      *(uint *)(*(int *)this_ptr + 0x7c) = 0;
      *(uint *)(*(int *)this_ptr + 0xa8) = 0;
      *(uint *)(*(int *)this_ptr + 0xac) = 0;
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(this_ptr,1);
      uStack_a8 = 4;
      uStack_98 = 0;
      uStack_9c = 0;
      uStack_a0 = 0;
      uStack_a4 = 0;
      uStack_94 = 0;
      uStack_88 = 3;
      uStack_90 = 1;
      uStack_8c = 2;
      engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
                (DAT_0060b280,aSStack_ac);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
      engine_matrix_c_pop_FUN_0046b4a0();
      return extraout_EAX;
    }
  }
  return iVar1;
}
