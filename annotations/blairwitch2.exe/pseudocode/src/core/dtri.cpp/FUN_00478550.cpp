// Name: core_dtri.cpp_FUN_00478550
// Address: 00478550
// Address Range: [[00478550, 004788d9]]
// Convention: __cdecl
// Signature: int __cdecl core_dtri_cpp_FUN_00478550(CDemonTriangle *triangle,CVector3f *position,float search_radius,float *out_height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dtri_cpp_FUN_00478550(CDemonTriangle *triangle,CVector3f *position,float search_radius,float *out_height)

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
  
  if (*(float *)&triangle->field_0x28 <= (float)_DAT_005d1df3) {
    fVar1 = *(float *)triangle - *(float *)position;
    fVar9 = *(float *)&triangle->field_0x4;
    fVar2 = *(float *)&triangle->field_0x8 - *(float *)&position->field_0x8;
    local_4c = *(float *)&triangle->field_0xc - *(float *)position;
    local_48 = *(float *)&triangle->field_0x10;
    local_44 = *(float *)&triangle->field_0x14 - *(float *)&position->field_0x8;
    local_7c = *(float *)&triangle->field_0x18 - *(float *)position;
    local_78 = *(float *)&triangle->field_0x1c;
    local_74 = *(float *)&triangle->field_0x20 - *(float *)&position->field_0x8;
    local_40 = fVar1;
    local_3c = fVar9;
    local_38 = fVar2;
    if (fVar9 < local_48) {
      if (&local_40 != &local_4c) {
        local_40 = local_4c;
        local_3c = local_48;
        local_38 = local_44;
      }
      local_70 = fVar1;
      local_6c = fVar9;
      local_68 = fVar2;
      if (&local_4c != &local_70) {
        local_4c = fVar1;
        local_48 = fVar9;
        local_44 = fVar2;
      }
    }
    fVar5 = local_38;
    fVar4 = local_3c;
    fVar3 = local_40;
    fVar2 = local_44;
    fVar1 = local_48;
    fVar9 = local_4c;
    if (local_48 < local_78) {
      local_64 = local_4c;
      local_60 = local_48;
      local_5c = local_44;
      if (&local_4c != &local_7c) {
        local_4c = local_7c;
        local_48 = local_78;
        local_44 = local_74;
      }
      if (&local_7c != &local_64) {
        local_7c = fVar9;
        local_78 = fVar1;
        local_74 = fVar2;
      }
    }
    if (local_78 <= *(float *)&position->field_0x4) {
      if (local_3c < local_48) {
        local_58 = local_40;
        local_54 = local_3c;
        local_50 = local_38;
        if (&local_40 != &local_4c) {
          local_40 = local_4c;
          local_3c = local_48;
          local_38 = local_44;
        }
        if (&local_4c != &local_58) {
          local_4c = fVar3;
          local_48 = fVar4;
          local_44 = fVar5;
        }
      }
      if (*out_height <= local_3c) {
        if (local_40 * local_40 + local_38 * local_38 < search_radius * search_radius) {
          *out_height = local_3c;
          return 1;
        }
        uVar6 = core_dtri_cpp_rayEdgeHeightTest_FUN_004783e0
                          (&local_40,&local_4c,search_radius,out_height);
        uVar7 = core_dtri_cpp_rayEdgeHeightTest_FUN_004783e0
                          (&local_4c,&local_7c,search_radius,out_height);
        uVar8 = core_dtri_cpp_rayEdgeHeightTest_FUN_004783e0
                          (&local_7c,&local_40,search_radius,out_height);
        uVar8 = uVar6 | uVar7 | uVar8;
        fVar9 = SQRT(*(float *)&triangle->field_0x2c * *(float *)&triangle->field_0x2c +
                     *(float *)&triangle->field_0x24 * *(float *)&triangle->field_0x24);
        if ((DAT_01c21e80 & 1) == 0) {
          DAT_01c21e80 = DAT_01c21e80 | 1;
          _DAT_01c21e74 = 0;
          _DAT_01c21e7c = 0;
          _DAT_01c21e78 = -100.0;
        }
        if (_DAT_005d1dfb <= (double)fVar9) {
          fVar9 = search_radius / fVar9;
          local_34 = *(float *)&triangle->field_0x24 * fVar9 + *(float *)position;
          local_2c = fVar9 * *(float *)&triangle->field_0x2c + *(float *)&position->field_0x8;
          local_30 = *(float *)&position->field_0x4;
          fVar9 = (float)core_dtri_cpp_rayTriangleIntersection_FUN_00477a50
                                   (triangle,&local_34,&DAT_01c21e74);
          if ((0.0 <= fVar9) &&
             (local_30 = fVar9 * _DAT_01c21e78 + local_30, *out_height < local_30)) {
            *out_height = local_30;
            return 1;
          }
        }
        else if (uVar8 == 0) {
          fVar9 = (float)core_dtri_cpp_rayTriangleIntersection_FUN_00477a50
                                   (triangle,position,&DAT_01c21e74);
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
