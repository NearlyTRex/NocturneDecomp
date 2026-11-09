// Name: core_dcube.cpp_FUN_00445620
// Address: 00445620
// Address Range: [[00445620, 004459c5]]
// Convention: __cdecl
// Signature: uint __cdecl core_dcube_cpp_FUN_00445620(CDemonCubeTriangle *triangle,CVector3f *cylinder_center,float cylinder_radius,float *out_height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_dcube_cpp_FUN_00445620(CDemonCubeTriangle *triangle,CVector3f *cylinder_center,float cylinder_radius,float *out_height)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float local_7c;
  float local_78;
  float local_74;
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
  
  if (*(float *)(triangle + 0x10) <= (float)_DAT_005ce7f6) {
    fVar1 = **(float **)triangle - *(float *)cylinder_center;
    fVar9 = *(float *)(*(int *)triangle + 4);
    fVar2 = *(float *)(*(int *)triangle + 8) - *(float *)&cylinder_center->field_0x8;
    local_58 = **(float **)(triangle + 4) - *(float *)cylinder_center;
    local_54 = *(float *)(*(int *)(triangle + 4) + 4);
    local_50 = *(float *)(*(int *)(triangle + 4) + 8) - *(float *)&cylinder_center->field_0x8;
    local_64 = **(float **)(triangle + 8) - *(float *)cylinder_center;
    local_60 = *(float *)(*(int *)(triangle + 8) + 4);
    local_5c = *(float *)(*(int *)(triangle + 8) + 8) - *(float *)&cylinder_center->field_0x8;
    local_40 = fVar1;
    local_3c = fVar9;
    local_38 = fVar2;
    if (fVar9 < local_54) {
      if (&local_40 != &local_58) {
        local_40 = local_58;
        local_3c = local_54;
        local_38 = local_50;
      }
      local_34 = fVar1;
      local_30 = fVar9;
      local_2c = fVar2;
      if (&local_58 != &local_34) {
        local_58 = fVar1;
        local_54 = fVar9;
        local_50 = fVar2;
      }
    }
    fVar5 = local_38;
    fVar4 = local_3c;
    fVar3 = local_40;
    fVar2 = local_50;
    fVar1 = local_54;
    fVar9 = local_58;
    if (local_54 < local_60) {
      local_4c = local_58;
      local_48 = local_54;
      local_44 = local_50;
      if (&local_58 != &local_64) {
        local_58 = local_64;
        local_54 = local_60;
        local_50 = local_5c;
      }
      if (&local_64 != &local_4c) {
        local_64 = fVar9;
        local_60 = fVar1;
        local_5c = fVar2;
      }
    }
    if (local_60 <= *(float *)&cylinder_center->field_0x4) {
      if (local_3c < local_54) {
        local_7c = local_40;
        local_78 = local_3c;
        local_74 = local_38;
        if (&local_40 != &local_58) {
          local_40 = local_58;
          local_3c = local_54;
          local_38 = local_50;
        }
        if (&local_58 != &local_7c) {
          local_58 = fVar3;
          local_54 = fVar4;
          local_50 = fVar5;
        }
      }
      if (*out_height <= local_3c) {
        if (local_40 * local_40 + local_38 * local_38 < cylinder_radius * cylinder_radius) {
          *out_height = local_3c;
          return 1;
        }
        uVar6 = core_dcube_cpp_intersectVerticalCylinderSegment_FUN_004454b0
                          (&local_40,&local_58,cylinder_radius,out_height);
        uVar7 = core_dcube_cpp_intersectVerticalCylinderSegment_FUN_004454b0
                          (&local_58,&local_64,cylinder_radius,out_height);
        uVar8 = core_dcube_cpp_intersectVerticalCylinderSegment_FUN_004454b0
                          (&local_64,&local_40,cylinder_radius,out_height);
        uVar8 = uVar6 | uVar7 | uVar8;
        fVar9 = SQRT(*(float *)(triangle + 0x14) * *(float *)(triangle + 0x14) +
                     *(float *)(triangle + 0xc) * *(float *)(triangle + 0xc));
        if ((DAT_01510838 & 1) == 0) {
          DAT_01510838 = DAT_01510838 | 1;
          _DAT_0151082c = 0;
          _DAT_01510834 = 0;
          _DAT_01510830 = -100.0;
        }
        if (_DAT_005ce7fe <= (double)fVar9) {
          fVar9 = cylinder_radius / fVar9;
          local_70 = *(float *)(triangle + 0xc) * fVar9 + *(float *)cylinder_center;
          local_68 = fVar9 * *(float *)(triangle + 0x14) + *(float *)&cylinder_center->field_0x8;
          local_6c = *(float *)&cylinder_center->field_0x4;
          fVar9 = (float)core_dcube_cpp_FUN_00444a40(triangle,&local_70,&DAT_0151082c);
          if ((0.0 <= fVar9) &&
             (local_6c = fVar9 * _DAT_01510830 + local_6c, *out_height < local_6c)) {
            *out_height = local_6c;
            return 1;
          }
        }
        else if (uVar8 == 0) {
          fVar9 = (float)core_dcube_cpp_FUN_00444a40(triangle,cylinder_center,&DAT_0151082c);
          if (0.0 <= fVar9) {
            uVar8 = 1;
            *out_height = local_3c;
          }
        }
        return uVar8;
      }
    }
  }
  return 0;
}
