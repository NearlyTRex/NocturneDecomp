// Name: core_dlight.cpp_FUN_0044b020
// Address: 0044b020
// Address Range: [[0044b020, 0044b04f] [0044b051, 0044b5a7]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_FUN_0044b020(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_FUN_0044b020(CDemonLight *this_ptr)

{
  longlong lVar1;
  float fVar2;
  CDemonRenderer *this_ptr_00;
  uint uVar3;
  byte bVar4;
  float10 fVar5;
  ulonglong uVar6;
  float afStackY_1094 [21];
  int aiStackY_1040 [975];
  CVector3f *translation;
  SMRGLHeaderPrimitive aSStack_f8 [4];
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8 [6];
  float local_90 [2];
  int local_88;
  int local_84;
  int local_80;
  float local_7c;
  float local_78;
  float local_74;
  CVector3f local_70;
  CVector3f local_64;
  int local_58;
  int aiStack_54 [2];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30 [2];
  float local_28;
  int local_24;
  float local_20;
  int local_18;
  
  bVar4 = 0;
  if (*(int *)&this_ptr->field_0x1cbc == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,(CVector3f *)&this_ptr->field_0x4);
  engine_matrix_c_FUN_0046b670(DAT_0060b280);
  translation = (CVector3f *)0x0;
  local_70._0_4_ = local_64._0_4_;
  *(uint *)((int)&local_70 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&local_64 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&local_70 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&local_64 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,&local_70,translation);
  engine_matrix_c_FUN_0046b5c0(DAT_0060b280);
  local_34 = local_58;
  local_30[(uint)bVar4 * -2] = aiStack_54[(uint)bVar4 * -2];
  local_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       aiStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  fVar2 = (float)_DAT_005cf467;
  local_18 = local_30[1];
  local_7c = (float)local_34 * fVar2;
  local_ac = *(float *)&this_ptr->field_0x4 - (float)local_34 * fVar2;
  local_78 = (float)local_30[0] * fVar2;
  local_74 = (float)local_30[1] * fVar2;
  local_a8[0] = *(float *)&this_ptr->field_0x8 - (float)local_30[0] * fVar2;
  local_a8[1] = *(float *)&this_ptr->field_0xc - (float)local_30[1] * fVar2;
  local_a8[5] = local_ac;
  local_90[(uint)bVar4 * -2] = local_a8[(uint)bVar4 * -2];
  local_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       local_a8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  if (local_a8 + 2 != local_a8 + 5) {
    local_a8[2] = local_a8[5];
    local_a8[3] = local_90[0];
    local_a8[4] = local_90[1];
  }
  local_b8 = *(float *)&this_ptr->field_0x18;
  local_b4 = *(float *)&this_ptr->field_0x24;
  local_b0 = *(float *)&this_ptr->field_0x30;
  local_20 = SQRT(local_a8[4] * local_a8[4] + local_a8[2] * local_a8[2] + local_a8[3] * local_a8[3])
  ;
  if (local_20 <= 0.0) {
    local_a8[3] = 0.0;
    local_a8[2] = 0.0;
    local_a8[4] = 0.0;
  }
  else {
    fVar2 = 1.0 / local_20;
    local_a8[2] = local_a8[2] * fVar2;
    local_a8[3] = local_a8[3] * fVar2;
    local_a8[4] = local_a8[4] * fVar2;
  }
  fVar5 = -((float10)local_a8[4] * (float10)local_b0 +
           (float10)local_a8[2] * (float10)local_b8 + (float10)local_a8[3] * (float10)local_b4) *
          (float10)*(float *)&this_ptr->field_0x2fac;
  local_28 = (float)fVar5;
  fVar5 = fVar5 * (float10)local_28 * (float10)local_28 * (float10)local_28 * (float10)_DAT_005cf46f
  ;
  uVar6 = round();
  local_24 = (int)ROUND(fVar5);
  lVar1 = (longlong)((int)((ulonglong)uVar6 >> 0x20) - (int)uVar6) * (longlong)local_24;
  uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  if (0.0 < local_28) {
    local_d0 = 0x3f800000;
    local_cc = 0x3f800000;
    local_c8 = 0xbf000000;
    local_40 = (int)ROUND(_DAT_005f5050 * 1.0);
    local_3c = (int)ROUND(_DAT_005f5050 * 1.0);
    local_38 = (int)ROUND(_DAT_005f5050 * -0.5);
    engine_special_cpp_FUN_0055d723(*(SProjectedVertex **)DAT_0060b280,(CVector3i *)&local_40);
    local_cc = 0x3f800000;
    local_d0 = 0xbf800000;
    local_c8 = 0xbf000000;
    local_c4 = (int)ROUND(_DAT_005f5050 * -1.0);
    local_c0 = (int)ROUND(_DAT_005f5050 * 1.0);
    local_bc = (int)ROUND(_DAT_005f5050 * -0.5);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x30),(CVector3i *)&local_c4);
    local_d0 = 0xbf800000;
    local_cc = 0xbf800000;
    local_c8 = 0xbf000000;
    local_88 = (int)ROUND(_DAT_005f5050 * -1.0);
    local_84 = (int)ROUND(_DAT_005f5050 * -1.0);
    local_80 = (int)ROUND(_DAT_005f5050 * -0.5);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x60),(CVector3i *)&local_88);
    local_d0 = 0x3f800000;
    local_c8 = 0xbf000000;
    local_cc = 0xbf800000;
    local_4c = (int)ROUND(_DAT_005f5050 * 1.0);
    local_48 = (int)ROUND(_DAT_005f5050 * -1.0);
    local_44 = (int)ROUND(_DAT_005f5050 * -0.5);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x90),(CVector3i *)&local_4c);
    this_ptr_00 = DAT_0060b280;
    *(uint *)(*(int *)DAT_0060b280 + 0x18) = 0xf80000;
    *(uint *)(*(int *)this_ptr_00 + 0x1c) = 0xf80000;
    *(uint *)(*(int *)this_ptr_00 + 0x2c) = uVar3;
    *(uint *)(*(int *)this_ptr_00 + 0x48) = 0x80000;
    *(uint *)(*(int *)this_ptr_00 + 0x4c) = 0xf80000;
    *(uint *)(*(int *)this_ptr_00 + 0x5c) = uVar3;
    *(uint *)(*(int *)this_ptr_00 + 0x78) = 0x80000;
    *(uint *)(*(int *)this_ptr_00 + 0x7c) = 0x80000;
    *(uint *)(*(int *)this_ptr_00 + 0x8c) = uVar3;
    *(uint *)(*(int *)this_ptr_00 + 0xa8) = 0xf80000;
    *(uint *)(*(int *)this_ptr_00 + 0xac) = 0x80000;
    *(uint *)(*(int *)this_ptr_00 + 0xbc) = uVar3;
    *(uint *)(*(int *)this_ptr_00 + 0x20) = 0xffff;
    *(uint *)(*(int *)this_ptr_00 + 0x24) = 0xffff;
    *(uint *)(*(int *)this_ptr_00 + 0x28) = 0xffff;
    *(uint *)(*(int *)this_ptr_00 + 0x50) = 0xffff;
    *(uint *)(*(int *)this_ptr_00 + 0x54) = 0xffff;
    *(uint *)(*(int *)this_ptr_00 + 0x58) = 0xffff;
    *(uint *)(*(int *)this_ptr_00 + 0x80) = 0xffff;
    *(uint *)(*(int *)this_ptr_00 + 0x84) = 0xffff;
    *(uint *)(*(int *)this_ptr_00 + 0x88) = 0xffff;
    *(uint *)(*(int *)this_ptr_00 + 0xb0) = 0xffff;
    *(uint *)(*(int *)this_ptr_00 + 0xb4) = 0xffff;
    *(uint *)(*(int *)this_ptr_00 + 0xb8) = 0xffff;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (this_ptr_00,(SMRGLTextureBasic *)&DAT_0060afe0);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
    local_f4 = 4;
    local_f0 = 0;
    local_ec = 0;
    local_e8 = 0xffff0001;
    local_e4 = 0xffff0001;
    local_e0 = 0;
    local_d4 = 3;
    local_dc = 1;
    local_d8 = 2;
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930(DAT_0060b280,aSStack_f8);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  engine_matrix_c_pop_FUN_0046b4a0();
  core_dlight_cpp_FUN_0044b960(this_ptr);
  return;
}
