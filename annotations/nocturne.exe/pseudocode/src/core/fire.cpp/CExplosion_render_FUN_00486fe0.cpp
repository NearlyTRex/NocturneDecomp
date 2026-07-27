// Name: core_fire.cpp_CExplosion_render_FUN_00486fe0
// Address: 00486fe0
// Address Range: [[00486fe0, 00487360]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CExplosion_render_FUN_00486fe0(int param_1)

#include "nocturne.h"

void __cdecl core_fire_cpp_CExplosion_render_FUN_00486fe0(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  uint uVar7;
  uint uVar8;
  uint uStack_98;
  int local_70;
  int local_6c;
  int local_68;
  byte local_5c [4];
  int local_58;
  int iStack_54;
  int iStack_50;
  int local_4c;
  int local_48;
  int local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_34;
  int local_30;
  int local_2c;
  float local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  if ((*(uint *)(param_1 + 0xc) & 0x7fffffff) == 0) {
    return;
  }
  uStack_98 = 0x487015;
  fVar4 = (float10)round
                             (((float10)1 - (float10)*(float *)(param_1 + 0xc)) *
                              (float10)27);
  local_20 = (int)ROUND(fVar4);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (DAT_005ae704,&DAT_005b858c + local_20 * 0x30);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(DAT_005ae704,param_1);
  engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0(DAT_005ae704,local_5c);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(DAT_005ae704,local_5c,0);
  fVar1 = *(float *)(param_1 + 0x10);
  fVar4 = (float10)5.5407092247005829e-315._0_4_;
  fVar5 = (float10)0.00390625;
  iVar2 = *(int *)(param_1 + 0x18);
  uVar8 = 0x4870a6;
  fVar6 = (float10)round
                             ((float10)*(float *)(param_1 + 0x10) * (float10)148 * fVar5
                             );
  uVar7 = 0x4870ad;
  fVar4 = (float10)round(-(float10)fVar1 * fVar4 * fVar5);
  local_1c = (int)ROUND(fVar6);
  local_20 = (int)ROUND(fVar4);
  if (iVar2 != 0) {
    local_1c = -local_1c;
    local_20 = -local_20;
  }
  local_18 = local_20;
  local_40 = (float)local_20;
  local_3c = *(float *)(param_1 + 0x10) * 5.5585177220918014e-315._0_4_ * (float)0.00390625;
  local_38 = 0.0;
  local_34 = (int)ROUND(local_40 * 256.0f);
  local_30 = (int)ROUND(local_3c * 256.0f);
  local_2c = (int)ROUND(256.0f * 0.0);
  local_24 = local_40;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704,&local_34,uVar7,uVar8);
  local_18 = local_1c;
  local_40 = (float)local_1c;
  local_58 = (int)ROUND(local_40 * 256.0f);
  iStack_54 = (int)ROUND(local_3c * 256.0f);
  iStack_50 = (int)ROUND(local_38 * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x30,&local_58);
  local_3c = -*(float *)(param_1 + 0x10) * (float)113 * (float)0.00390625;
  local_4c = (int)ROUND(local_40 * 256.0f);
  local_48 = (int)ROUND(local_3c * 256.0f);
  local_44 = (int)ROUND(local_38 * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x60,&local_4c);
  local_40 = local_24;
  local_70 = (int)ROUND(local_24 * 256.0f);
  local_6c = (int)ROUND(local_3c * 256.0f);
  local_68 = (int)ROUND(local_38 * 256.0f);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x90,&local_70);
  piVar3 = DAT_005ae704;
  *(uint *)(*DAT_005ae704 + 0x18) = 0x20000;
  *(uint *)(*piVar3 + 0x1c) = 0x20000;
  *(uint *)(*piVar3 + 0x48) = 0xfe0000;
  *(uint *)(*piVar3 + 0x4c) = 0x20000;
  *(uint *)(*piVar3 + 0x78) = 0xfe0000;
  *(uint *)(*piVar3 + 0x7c) = 0xfe0000;
  *(uint *)(*piVar3 + 0xa8) = 0x20000;
  *(uint *)(*piVar3 + 0xac) = 0xfe0000;
  *(uint *)(*piVar3 + 0x2c) = 0x8000;
  *(uint *)(*piVar3 + 0x5c) = 0x8000;
  *(uint *)(*piVar3 + 0x8c) = 0x8000;
  *(uint *)(*piVar3 + 0xbc) = 0x8000;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(piVar3,1);
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0(DAT_005ae704,&uStack_98,0x123)
  ;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
  return;
}
