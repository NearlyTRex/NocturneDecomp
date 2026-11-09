// Name: core_dlight.cpp_FUN_00463820
// Address: 00463820
// Address Range: [[00463820, 0046384f] [00463851, 00463ddc]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_FUN_00463820(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_FUN_00463820(CDemonLight *this_ptr)

{
  longlong lVar1;
  float fVar2;
  CDemonRenderer *this_ptr_00;
  uint uVar3;
  byte bVar4;
  float10 fVar5;
  ulonglong uVar6;
  float afStackY_1094 [12];
  int aiStackY_1064 [15];
  float afStackY_1028 [969];
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
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  CVector3f local_ac;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90 [4];
  float local_80;
  int local_7c;
  int aiStack_78 [2];
  CVector3f local_70;
  int local_64;
  int local_60 [5];
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c [2];
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  int local_20;
  float local_1c;
  int local_18;
  
  bVar4 = 0;
  if (*(int *)&this_ptr->field_0x1cbc == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,(CVector3f *)&this_ptr->field_0x4);
  engine_matrix_c_FUN_00483b70(DAT_00612560);
  translation = (CVector3f *)0x0;
  local_ac._0_4_ = local_70._0_4_;
  *(uint *)((int)&local_ac + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&local_70 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&local_ac + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&local_70 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
            (DAT_00612560,&local_ac,translation);
  engine_matrix_c_FUN_00483ac0(DAT_00612560);
  local_64 = local_7c;
  local_60[(uint)bVar4 * -2] = aiStack_78[(uint)bVar4 * -2];
  local_60[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       aiStack_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  fVar2 = (float)_DAT_005d9184;
  local_18 = local_60[1];
  local_90[2] = (float)local_64 * fVar2;
  local_94 = *(float *)&this_ptr->field_0x4 - (float)local_64 * fVar2;
  local_90[3] = (float)local_60[0] * fVar2;
  local_80 = (float)local_60[1] * fVar2;
  local_90[0] = *(float *)&this_ptr->field_0x8 - (float)local_60[0] * fVar2;
  local_90[1] = *(float *)&this_ptr->field_0xc - (float)local_60[1] * fVar2;
  local_40 = local_94;
  local_3c[(uint)bVar4 * -2] = local_90[(uint)bVar4 * -2];
  local_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       local_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  if (&local_a0 != &local_40) {
    local_a0 = local_40;
    local_9c = local_3c[0];
    local_98 = local_3c[1];
  }
  local_4c = *(float *)&this_ptr->field_0x18;
  local_48 = *(float *)&this_ptr->field_0x24;
  local_44 = *(float *)&this_ptr->field_0x30;
  local_1c = SQRT(local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c);
  if (local_1c <= 0.0) {
    local_9c = 0.0;
    local_a0 = 0.0;
    local_98 = 0.0;
  }
  else {
    fVar2 = 1.0 / local_1c;
    local_a0 = local_a0 * fVar2;
    local_9c = local_9c * fVar2;
    local_98 = local_98 * fVar2;
  }
  fVar5 = -((float10)local_98 * (float10)local_44 +
           (float10)local_a0 * (float10)local_4c + (float10)local_9c * (float10)local_48);
  local_28 = (float)fVar5;
  fVar5 = fVar5 * (float10)local_28 * (float10)local_28 * (float10)local_28 * (float10)_DAT_005d918c
  ;
  uVar6 = round();
  local_20 = (int)ROUND(fVar5);
  lVar1 = (longlong)((int)((ulonglong)uVar6 >> 0x20) - (int)uVar6) * (longlong)local_20;
  uVar3 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  if (0.0 < local_28) {
    local_60[2] = 0x40000000;
    local_60[3] = 0x40000000;
    local_60[4] = 0xbf000000;
    local_d0 = (int)ROUND(_DAT_005febd0 * 2.0);
    local_cc = (int)ROUND(_DAT_005febd0 * 2.0);
    local_c8 = (int)ROUND(_DAT_005febd0 * -0.5);
    engine_special_cpp_FUN_00580173(*(SProjectedVertex **)DAT_00612560,(CVector3i *)&local_d0);
    local_60[3] = 0x40000000;
    local_60[2] = 0xc0000000;
    local_60[4] = 0xbf000000;
    local_b8 = (int)ROUND(_DAT_005febd0 * -2.0);
    local_b4 = (int)ROUND(_DAT_005febd0 * 2.0);
    local_b0 = (int)ROUND(_DAT_005febd0 * -0.5);
    engine_special_cpp_FUN_00580173
              ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x30),(CVector3i *)&local_b8);
    local_60[2] = 0xc0000000;
    local_60[3] = 0xc0000000;
    local_60[4] = 0xbf000000;
    local_c4 = (int)ROUND(_DAT_005febd0 * -2.0);
    local_c0 = (int)ROUND(_DAT_005febd0 * -2.0);
    local_bc = (int)ROUND(_DAT_005febd0 * -0.5);
    engine_special_cpp_FUN_00580173
              ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x60),(CVector3i *)&local_c4);
    local_60[2] = 0x40000000;
    local_60[4] = 0xbf000000;
    local_60[3] = 0xc0000000;
    local_34 = (int)ROUND(_DAT_005febd0 * 2.0);
    local_30 = (int)ROUND(_DAT_005febd0 * -2.0);
    local_2c = (int)ROUND(_DAT_005febd0 * -0.5);
    engine_special_cpp_FUN_00580173
              ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x90),(CVector3i *)&local_34);
    this_ptr_00 = DAT_00612560;
    *(uint *)(*(int *)DAT_00612560 + 0x18) = 0xf80000;
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
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (this_ptr_00,(SMRGLTextureBasic *)&DAT_006122c0);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,1);
    local_f4 = 4;
    local_f0 = 0;
    local_ec = 0;
    local_e8 = 0xffff0001;
    local_e4 = 0xfffe0002;
    local_e0 = 0;
    local_d4 = 3;
    local_dc = 1;
    local_d8 = 2;
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30(DAT_00612560,aSStack_f8);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
  engine_matrix_c_pop_FUN_004839a0();
  core_dlight_cpp_FUN_00464190(this_ptr);
  return;
}
