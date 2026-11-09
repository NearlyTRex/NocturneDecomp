// Name: core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_0044ef20
// Address: 0044ef20
// Address Range: [[0044ef20, 0044f4c6]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_0044ef20(CDemonCamera *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *bbox_min ,CVector3f *bbox_max)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_0044ef20(CDemonCamera *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *bbox_min ,CVector3f *bbox_max)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  CVector3f *translation;
  int local_130;
  int local_12c;
  int local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  int local_10c;
  int local_108;
  int local_104;
  float local_100;
  float local_fc;
  float local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  int local_7c;
  int local_78;
  int local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  engine_matrix_c_matrixPush_FUN_0046d070();
  fVar4 = (float10)_DAT_005b9f5e;
  fVar5 = ((float10)*(float *)&this_ptr->field_0x4 - (float10)*(float *)position) * fVar4;
  fVar6 = ((float10)*(float *)&this_ptr->field_0x8 - (float10)*(float *)&position->field_0x4) *
          fVar4;
  fVar4 = ((float10)*(float *)&this_ptr->field_0xc - (float10)*(float *)&position->field_0x8) *
          fVar4;
  _DAT_01c6e2fc = *(uint *)&this_ptr->field_0x178;
  _DAT_01c6e300 = *(uint *)&this_ptr->field_0x17c;
  translation = (CVector3f *)0x0;
  _DAT_01c6e304 = *(uint *)&this_ptr->field_0x180;
  _DAT_01c6e308 = *(uint *)&this_ptr->field_0x184;
  _DAT_01c6e30c = round();
  _DAT_01c6e310 = round();
  _DAT_01c6e314 = round();
  _DAT_01c6e318 = *(uint *)&this_ptr->field_0x194;
  _DAT_01c6e2cc = (int)ROUND(fVar5);
  _DAT_01c6e31c = *(uint *)&this_ptr->field_0x198;
  _DAT_01c6e2d0 = (int)ROUND(fVar6);
  _DAT_01c6e2d4 = (int)ROUND(fVar4);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
            (DAT_005f2afc,orientation,translation);
  local_118 = *(float *)bbox_max;
  local_114 = *(float *)&bbox_min->field_0x4;
  local_110 = *(float *)&bbox_max->field_0x8;
  local_e8 = (int)ROUND(local_118 * _DAT_005ddfbc);
  local_e4 = (int)ROUND(local_114 * _DAT_005ddfbc);
  local_e0 = (int)ROUND(local_110 * _DAT_005ddfbc);
  local_6c = local_118;
  local_68 = local_114;
  local_54 = local_110;
  engine_special_cpp_FUN_005632a3
            ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x124e00),(CVector3i *)&local_e8);
  local_dc = *(float *)bbox_min;
  local_d8 = *(float *)&bbox_min->field_0x4;
  local_d4 = *(float *)&bbox_max->field_0x8;
  local_d0 = (int)ROUND(local_dc * _DAT_005ddfbc);
  local_cc = (int)ROUND(local_d8 * _DAT_005ddfbc);
  local_c8 = (int)ROUND(local_d4 * _DAT_005ddfbc);
  local_70 = local_dc;
  local_64 = local_d8;
  local_60 = local_d4;
  engine_special_cpp_FUN_005632a3
            ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x124e30),(CVector3i *)&local_d0);
  local_88 = *(float *)bbox_min;
  local_84 = *(float *)&bbox_min->field_0x4;
  local_80 = *(float *)&bbox_min->field_0x8;
  local_f4 = (int)ROUND(local_88 * _DAT_005ddfbc);
  local_f0 = (int)ROUND(local_84 * _DAT_005ddfbc);
  local_ec = (int)ROUND(local_80 * _DAT_005ddfbc);
  local_5c = local_88;
  local_4c = local_84;
  local_28 = local_80;
  engine_special_cpp_FUN_005632a3
            ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x124e60),(CVector3i *)&local_f4);
  local_124 = *(float *)bbox_max;
  local_120 = *(float *)&bbox_min->field_0x4;
  local_11c = *(float *)&bbox_min->field_0x8;
  local_10c = (int)ROUND(local_124 * _DAT_005ddfbc);
  local_108 = (int)ROUND(local_120 * _DAT_005ddfbc);
  local_104 = (int)ROUND(local_11c * _DAT_005ddfbc);
  local_58 = local_120;
  local_18 = local_124;
  local_14 = local_11c;
  engine_special_cpp_FUN_005632a3
            ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x124e90),(CVector3i *)&local_10c);
  local_a0 = *(float *)bbox_max;
  local_9c = *(float *)&bbox_max->field_0x4;
  local_98 = *(float *)&bbox_max->field_0x8;
  local_130 = (int)ROUND(local_a0 * _DAT_005ddfbc);
  local_12c = (int)ROUND(local_9c * _DAT_005ddfbc);
  local_128 = (int)ROUND(local_98 * _DAT_005ddfbc);
  local_50 = local_98;
  local_3c = local_a0;
  local_38 = local_9c;
  engine_special_cpp_FUN_005632a3
            ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x124ec0),(CVector3i *)&local_130);
  local_94 = *(float *)bbox_min;
  local_90 = *(float *)&bbox_max->field_0x4;
  local_8c = *(float *)&bbox_max->field_0x8;
  local_ac = (int)ROUND(local_94 * _DAT_005ddfbc);
  local_a8 = (int)ROUND(local_90 * _DAT_005ddfbc);
  local_a4 = (int)ROUND(local_8c * _DAT_005ddfbc);
  local_48 = local_94;
  local_44 = local_90;
  local_40 = local_8c;
  engine_special_cpp_FUN_005632a3
            ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x124ef0),(CVector3i *)&local_ac);
  local_100 = *(float *)bbox_min;
  local_fc = *(float *)&bbox_max->field_0x4;
  local_f8 = *(float *)&bbox_min->field_0x8;
  local_7c = (int)ROUND(local_100 * _DAT_005ddfbc);
  local_78 = (int)ROUND(local_fc * _DAT_005ddfbc);
  local_74 = (int)ROUND(local_f8 * _DAT_005ddfbc);
  local_24 = local_100;
  local_20 = local_fc;
  local_1c = local_f8;
  engine_special_cpp_FUN_005632a3
            ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x124f20),(CVector3i *)&local_7c);
  local_c4 = *(float *)bbox_max;
  local_c0 = *(float *)&bbox_max->field_0x4;
  local_bc = *(float *)&bbox_min->field_0x8;
  local_b8 = (int)ROUND(local_c4 * _DAT_005ddfbc);
  local_b4 = (int)ROUND(local_c0 * _DAT_005ddfbc);
  local_b0 = (int)ROUND(local_bc * _DAT_005ddfbc);
  local_34 = local_c4;
  local_30 = local_c0;
  local_2c = local_bc;
  engine_special_cpp_FUN_005632a3
            ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x124f50),(CVector3i *)&local_b8);
  uVar3 = 0xffffffff;
  iVar2 = 0x124e00;
  do {
    puVar1 = (uint *)(*(int *)DAT_005f2afc + 0x10 + iVar2);
    iVar2 = iVar2 + 0x30;
    uVar3 = uVar3 & *puVar1;
  } while (iVar2 != 1200000);
  iVar2 = 1;
  if (((uVar3 & 0x80000000) != 0) && ((char)uVar3 != '\0')) {
    iVar2 = 0;
  }
  engine_matrix_c_pop_FUN_0046d080();
  engine_matrix_c_pop_FUN_0046d080();
  return iVar2;
}
