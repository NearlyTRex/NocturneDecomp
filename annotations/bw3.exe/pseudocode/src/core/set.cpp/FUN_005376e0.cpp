// Name: core_set.cpp_FUN_005376e0
// Address: 005376e0
// Address Range: [[005376e0, 00537e19]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_FUN_005376e0(CDemonSet *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_set_cpp_FUN_005376e0(CDemonSet *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  float afStackY_10c8 [1013];
  float *pfVar9;
  float local_e0;
  float local_dc;
  float local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  float local_c8;
  float local_c4 [8];
  float local_a4;
  float local_a0 [5];
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c [4];
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_44;
  int local_18;
  int local_14;
  
  bVar8 = 0;
  if (position == (CVector3f *)0x0) {
    _DAT_0207fadc = position;
    if (0 < _DAT_0203ad1c) {
      iVar7 = _DAT_0203ad1c * 4;
      iVar4 = 0;
      iVar5 = 0;
      do {
        iVar6 = iVar5;
        if (*(int *)(*(int *)(iVar4 + 0x203ad20) + 0x1cb4) != 0) {
          iVar6 = iVar5 + 4;
          _DAT_0207fadc = (CVector3f *)&_DAT_0207fadc->field_0x1;
          *(int *)(&DAT_0207fae0 + iVar5) = *(int *)(iVar4 + 0x203ad20);
        }
        iVar4 = iVar4 + 4;
        iVar5 = iVar6;
      } while (iVar4 < iVar7);
    }
    _DAT_0207f958 = 0;
    if (0 < _DAT_0203a598) {
      iVar4 = _DAT_0203a598 * 4;
      iVar5 = 0;
      iVar7 = 0;
      do {
        iVar6 = iVar7;
        if (*(int *)(*(int *)(&DAT_0203a59c + iVar5) + 0x1cb4) != 0) {
          iVar6 = iVar7 + 4;
          _DAT_0207f958 = _DAT_0207f958 + 1;
          *(int *)(&DAT_0207f95c + iVar7) = *(int *)(&DAT_0203a59c + iVar5);
        }
        iVar5 = iVar5 + 4;
        iVar7 = iVar6;
      } while (iVar5 < iVar4);
    }
    _DAT_0207faf0 = _DAT_0203ad30;
    if (0 < _DAT_0203ad30) {
      iVar5 = _DAT_0203ad30 * 4;
      iVar7 = 0;
      do {
        iVar4 = iVar7 + 4;
        *(uint *)(&DAT_0207faf4 + iVar7) = *(uint *)(iVar7 + 0x203ad34);
        iVar7 = iVar4;
      } while (iVar4 < iVar5);
    }
    _DAT_0207fc84 = _DAT_0203b3e8;
    local_cc = _DAT_0203b3e8;
    if (0 < _DAT_0203b3e8) {
      iVar5 = _DAT_0203b3e8 * 4;
      iVar7 = 0;
      do {
        local_cc = iVar7 + 4;
        *(uint *)(&DAT_0207fc88 + iVar7) = *(uint *)(&DAT_0203b3ec + iVar7);
        iVar7 = local_cc;
      } while (local_cc < iVar5);
    }
  }
  else {
    iVar7 = 0;
    _DAT_0207fadc = (CVector3f *)0x0;
    if (0 < _DAT_0203ad1c) {
      iVar5 = 0;
      do {
        if ((*(int *)&(*(CDemonCamera **)(iVar5 + 0x203ad20))[1].field_0x7ec != 0) &&
           (iVar4 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_0044ef20
                              (*(CDemonCamera **)(iVar5 + 0x203ad20),position,orientation,aabb_min,
                               aabb_max), iVar4 != 0)) {
          *(uint *)(&DAT_0207fae0 + (int)_DAT_0207fadc * 4) =
               *(uint *)(iVar5 + 0x203ad20);
          _DAT_0207fadc = (CVector3f *)&_DAT_0207fadc->field_0x1;
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar7 < _DAT_0203ad1c);
    }
    iVar7 = 0;
    _DAT_0207f958 = 0;
    if (0 < _DAT_0203a598) {
      iVar5 = 0;
      do {
        if ((*(int *)&(*(CDemonCamera **)(&DAT_0203a59c + iVar5))[1].field_0x7ec != 0) &&
           (iVar4 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_0044ef20
                              (*(CDemonCamera **)(&DAT_0203a59c + iVar5),position,orientation,
                               aabb_min,aabb_max), iVar4 != 0)) {
          _DAT_0207f958 = _DAT_0207f958 + 1;
          *(uint *)(&DAT_0207f958 + _DAT_0207f958 * 4) =
               *(uint *)(&DAT_0203a59c + iVar5);
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar7 < _DAT_0203a598);
    }
    local_14 = 0;
    _DAT_0207fc84 = 0;
    if (0 < _DAT_0203b3e8) {
      local_18 = 0;
      do {
        iVar7 = *(int *)(&DAT_0203b3ec + local_18);
        pfVar9 = local_7c + 5;
        local_5c = *(float *)(iVar7 + 0x104) - *(float *)position;
        local_58 = *(float *)(iVar7 + 0x108) - *(float *)&position->field_0x4;
        local_54 = *(float *)(iVar7 + 0x10c) - *(float *)&position->field_0x8;
        local_68 = local_5c;
        local_7c[(uint)bVar8 * -2 + 6] = local_7c[(uint)bVar8 * -2 + 9];
        local_7c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
             local_7c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
        core_dirmat_cpp_FUN_0045b870(rotation_matrix,pfVar9);
        local_c8 = local_50;
        local_c4[(uint)bVar8 * -2] = local_7c[(uint)bVar8 * -2 + 0xc];
        local_c4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             local_7c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
        if (local_7c + 5 != &local_c8) {
          local_68 = local_c8;
          local_64 = local_c4[0];
          local_60 = local_c4[1];
        }
        if ((((*(float *)aabb_min <= local_68 + *(float *)(iVar7 + 0x11d4)) &&
             (*(float *)&aabb_min->field_0x4 <= local_64 + *(float *)(iVar7 + 0x11d4))) &&
            (*(float *)&aabb_min->field_0x8 <= local_60 + *(float *)(iVar7 + 0x11d4))) &&
           (((local_68 - *(float *)(iVar7 + 0x11d4) <= *(float *)aabb_max &&
             (local_64 - *(float *)(iVar7 + 0x11d4) <= *(float *)&aabb_max->field_0x4)) &&
            (local_60 - *(float *)(iVar7 + 0x11d4) <= *(float *)&aabb_max->field_0x8)))) {
          *(int *)(&DAT_0207fc88 + _DAT_0207fc84 * 4) = iVar7;
          _DAT_0207fc84 = _DAT_0207fc84 + 1;
        }
        local_14 = local_14 + 1;
        local_18 = local_18 + 4;
      } while (local_14 < _DAT_0203b3e8);
    }
    iVar7 = 0;
    _DAT_0207faf0 = 0;
    if (0 < _DAT_0203ad30) {
      iVar5 = 0;
      do {
        iVar4 = core_dglobe_cpp_FUN_0045af60
                          (*(CDemonGlobe **)(iVar5 + 0x203ad34),position,rotation_matrix,aabb_min,
                           aabb_max);
        if (iVar4 != 0) {
          *(uint *)(&DAT_0207faf4 + _DAT_0207faf0 * 4) = *(uint *)(iVar5 + 0x203ad34);
          _DAT_0207faf0 = _DAT_0207faf0 + 1;
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar7 < _DAT_0203ad30);
    }
    iVar7 = 0;
    local_cc = _DAT_0203b1e8;
    if (0 < _DAT_0203b1e8) {
      iVar5 = 0;
      do {
        iVar4 = core_dglobe_cpp_FUN_0045af60
                          (*(CDemonGlobe **)(&DAT_0203b1ec + iVar5),position,rotation_matrix,
                           aabb_min,aabb_max);
        local_cc = 0;
        if (iVar4 != 0) {
          local_cc = *(int *)(&DAT_0203b1ec + iVar5);
          *(int *)(&DAT_0207faf4 + _DAT_0207faf0 * 4) = local_cc;
          _DAT_0207faf0 = _DAT_0207faf0 + 1;
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar7 < _DAT_0203b1e8);
    }
    if (0 < _DAT_0207fc84) {
      local_e0 = *(float *)aabb_max - *(float *)aabb_min;
      local_dc = *(float *)&aabb_max->field_0x4 - *(float *)&aabb_min->field_0x4;
      local_d8 = *(float *)&aabb_max->field_0x8 - *(float *)&aabb_min->field_0x8;
      local_a0[2] = *(float *)aabb_max - *(float *)aabb_min;
      local_a0[(uint)bVar8 * -2 + 3] = *(float *)((int)&stack0xffffff24 + (uint)bVar8 * -8);
      local_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           *(float *)((int)&stack0xffffff28 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      core_dirmat_cpp_FUN_0045b800(rotation_matrix,local_a0 + 2);
      local_a4 = local_44;
      local_a0[(uint)bVar8 * -2] = local_7c[(uint)bVar8 * -2 + 0xf];
      local_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           local_7c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10];
      local_80 = *(float *)position + local_a4;
      local_7c[0] = *(float *)&position->field_0x4 + local_a0[0];
      local_7c[1] = *(float *)&position->field_0x8 + local_a0[1];
      local_c4[4] = 0.0;
      local_c4[3] = 0.0;
      local_c4[2] = 0.0;
      local_84 = 0.0;
      local_88 = 0.0;
      local_8c = 0.0;
      local_7c[2] = *(float *)position + local_a4;
      local_7c[(uint)bVar8 * -2 + 3] = local_7c[(uint)bVar8 * -2];
      local_7c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
           local_7c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      iVar7 = 0;
      if (0 < _DAT_0207fc84) {
        iVar5 = 0;
        do {
          iVar4 = *(int *)(&DAT_0207fc88 + iVar5);
          if ((*(uint *)(iVar4 + 0x11d4) & 0x7fffffff) == 0) {
            local_8c = *(float *)(iVar4 + 0x11c4) + local_8c;
            local_88 = *(float *)(iVar4 + 0x11c8) + local_88;
            local_84 = *(float *)(iVar4 + 0x11cc) + local_84;
            iVar7 = iVar7 + 1;
          }
          else {
            fVar3 = *(float *)(iVar4 + 0x104) - local_7c[2];
            fVar1 = *(float *)(iVar4 + 0x108) - local_7c[3];
            fVar2 = *(float *)(iVar4 + 0x10c) - local_6c;
            fVar1 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
            if (fVar1 <= *(float *)(iVar4 + 0x11d8)) {
              fVar1 = (1.0 - (float)(((int)fVar1 >> 1) + _DAT_01d1a0a4) * *(float *)(iVar4 + 0x11dc)
                      ) * _DAT_005d063f;
              fVar2 = (float)_DAT_005d0647;
              local_c4[2] = fVar1 * *(float *)(iVar4 + 0x11c4) * fVar2 + local_c4[2];
              local_c4[3] = fVar1 * *(float *)(iVar4 + 0x11c8) * fVar2 + local_c4[3];
              local_c4[4] = fVar1 * *(float *)(iVar4 + 0x11cc) * fVar2 + local_c4[4];
            }
          }
          iVar5 = iVar5 + 4;
        } while (iVar5 < _DAT_0207fc84 * 4);
      }
      if (iVar7 == 0) {
        local_d0 = 0xaaaa;
        local_cc = 0xaaaa;
        local_d4 = 0xaaaa;
      }
      else {
        local_d4 = (int)ROUND(local_8c * _DAT_005e3bc0);
        local_d0 = (int)ROUND(local_88 * _DAT_005e3bc0);
        local_cc = (int)ROUND(local_84 * _DAT_005e3bc0);
      }
      _DAT_02080004 = (int)ROUND(local_c4[2] * _DAT_005e3bc0) + local_d4;
      _DAT_02080008 = (int)ROUND(local_c4[3] * _DAT_005e3bc0) + local_d0;
      local_cc = (int)ROUND(local_c4[4] * _DAT_005e3bc0) + local_cc;
      if (0xffff < _DAT_02080004) {
        _DAT_02080004 = 0xffff;
      }
      if (0xffff < _DAT_02080008) {
        _DAT_02080008 = 0xffff;
      }
      _DAT_0208000c = local_cc;
      if (0xffff < local_cc) {
        _DAT_0208000c = 0xffff;
        return local_cc;
      }
    }
  }
  return local_cc;
}
