// Name: core_set.cpp_CDemonSet_gatherVisibleLights_FUN_0050aee0
// Address: 0050aee0
// Address Range: [[0050aee0, 0050b5b9]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_gatherVisibleLights_FUN_0050aee0(CDemonSet *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_set_cpp_CDemonSet_gatherVisibleLights_FUN_0050aee0(CDemonSet *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  byte local_a0 [24];
  float local_88;
  float local_84;
  float local_80;
  int local_7c;
  int local_78;
  int local_74;
  float local_64;
  float local_60;
  float local_5c;
  byte local_58 [44];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  if (position == (CVector3f *)0x0) {
    _DAT_01fff07c = position;
    if (0 < _DAT_01fba2d8) {
      iVar8 = _DAT_01fba2d8 * 4;
      iVar4 = 0;
      iVar5 = 0;
      do {
        iVar7 = iVar5;
        if (*(int *)(*(int *)(iVar4 + 0x1fba2dc) + 0x1cb4) != 0) {
          iVar7 = iVar5 + 4;
          _DAT_01fff07c = (CVector3f *)((int)&_DAT_01fff07c->x + 1);
          *(int *)(&DAT_01fff080 + iVar5) = *(int *)(iVar4 + 0x1fba2dc);
        }
        iVar4 = iVar4 + 4;
        iVar5 = iVar7;
      } while (iVar4 < iVar8);
    }
    _DAT_01ffeef8 = 0;
    if (0 < _DAT_01fb9b54) {
      iVar4 = _DAT_01fb9b54 * 4;
      iVar5 = 0;
      iVar8 = 0;
      do {
        iVar7 = iVar8;
        if (*(int *)(*(int *)(&DAT_01fb9b58 + iVar5) + 0x1cb4) != 0) {
          iVar7 = iVar8 + 4;
          _DAT_01ffeef8 = _DAT_01ffeef8 + 1;
          *(int *)(&DAT_01ffeefc + iVar8) = *(int *)(&DAT_01fb9b58 + iVar5);
        }
        iVar5 = iVar5 + 4;
        iVar8 = iVar7;
      } while (iVar5 < iVar4);
    }
    _DAT_01fff090 = _DAT_01fba2ec;
    if (0 < _DAT_01fba2ec) {
      iVar5 = _DAT_01fba2ec * 4;
      iVar8 = 0;
      do {
        iVar4 = iVar8 + 4;
        *(uint *)(&DAT_01fff094 + iVar8) = *(uint *)(iVar8 + 0x1fba2f0);
        iVar8 = iVar4;
      } while (iVar4 < iVar5);
    }
    _DAT_01fff224 = _DAT_01fba9a4;
    local_74 = _DAT_01fba9a4;
    if (0 < _DAT_01fba9a4) {
      iVar5 = _DAT_01fba9a4 * 4;
      iVar8 = 0;
      do {
        local_74 = iVar8 + 4;
        *(uint *)(&DAT_01fff228 + iVar8) = *(uint *)(&DAT_01fba9a8 + iVar8);
        iVar8 = local_74;
      } while (local_74 < iVar5);
    }
  }
  else {
    local_24 = 0;
    _DAT_01fff07c = (CVector3f *)0x0;
    if (0 < _DAT_01fba2d8) {
      iVar8 = 0;
      do {
        if (((*(CDemonCamera **)(iVar8 + 0x1fba2dc))[1].rect_array[0x61].y_min != 0) &&
           (iVar5 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00445fe0
                              (*(CDemonCamera **)(iVar8 + 0x1fba2dc),position,orientation,aabb_min,
                               aabb_max), iVar5 != 0)) {
          *(uint *)(&DAT_01fff080 + (int)_DAT_01fff07c * 4) =
               *(uint *)(iVar8 + 0x1fba2dc);
          _DAT_01fff07c = (CVector3f *)((int)&_DAT_01fff07c->x + 1);
        }
        local_24 = local_24 + 1;
        iVar8 = iVar8 + 4;
      } while (local_24 < _DAT_01fba2d8);
    }
    local_20 = 0;
    _DAT_01ffeef8 = 0;
    if (0 < _DAT_01fb9b54) {
      iVar8 = 0;
      do {
        if (((*(CDemonCamera **)(&DAT_01fb9b58 + iVar8))[1].rect_array[0x61].y_min != 0) &&
           (iVar5 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00445fe0
                              (*(CDemonCamera **)(&DAT_01fb9b58 + iVar8),position,orientation,
                               aabb_min,aabb_max), iVar5 != 0)) {
          *(uint *)(&DAT_01ffeefc + _DAT_01ffeef8 * 4) =
               *(uint *)(&DAT_01fb9b58 + iVar8);
          _DAT_01ffeef8 = _DAT_01ffeef8 + 1;
        }
        local_20 = local_20 + 1;
        iVar8 = iVar8 + 4;
      } while (local_20 < _DAT_01fb9b54);
    }
    local_1c = 0;
    _DAT_01fff224 = 0;
    if (0 < _DAT_01fba9a4) {
      local_2c = 0;
      do {
        iVar8 = *(int *)(&DAT_01fba9a8 + local_2c);
        local_64 = *(float *)(iVar8 + 0x104) - position->x;
        local_60 = *(float *)(iVar8 + 0x108) - position->y;
        local_5c = *(float *)(iVar8 + 0x10c) - position->z;
        pfVar6 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                                    (rotation_matrix,local_a0,&local_64);
        if (&local_64 != pfVar6) {
          local_64 = *pfVar6;
          local_60 = pfVar6[1];
          local_5c = pfVar6[2];
        }
        if ((((aabb_min->x <= local_64 + *(float *)(iVar8 + 0x11d4)) &&
             (aabb_min->y <= local_60 + *(float *)(iVar8 + 0x11d4))) &&
            (aabb_min->z <= local_5c + *(float *)(iVar8 + 0x11d4))) &&
           (((local_64 - *(float *)(iVar8 + 0x11d4) <= aabb_max->x &&
             (local_60 - *(float *)(iVar8 + 0x11d4) <= aabb_max->y)) &&
            (local_5c - *(float *)(iVar8 + 0x11d4) <= aabb_max->z)))) {
          *(int *)(&DAT_01fff228 + _DAT_01fff224 * 4) = iVar8;
          _DAT_01fff224 = _DAT_01fff224 + 1;
        }
        local_2c = local_2c + 4;
        local_1c = local_1c + 1;
      } while (local_1c < _DAT_01fba9a4);
    }
    local_28 = 0;
    _DAT_01fff090 = 0;
    local_74 = _DAT_01fba2ec;
    if (0 < _DAT_01fba2ec) {
      iVar8 = 0;
      do {
        iVar5 = core_dglobe_cpp_CDemonGlobe_intersectAABB_FUN_0044d1f0
                          (*(CDemonGlobe **)(iVar8 + 0x1fba2f0),position,rotation_matrix,aabb_min,
                           aabb_max);
        if (iVar5 != 0) {
          *(uint *)(&DAT_01fff094 + _DAT_01fff090 * 4) = *(uint *)(iVar8 + 0x1fba2f0);
          _DAT_01fff090 = _DAT_01fff090 + 1;
        }
        local_74 = local_28 + 1;
        iVar8 = iVar8 + 4;
        local_28 = local_74;
      } while (local_74 < _DAT_01fba2ec);
    }
    local_18 = 0;
    if (0 < _DAT_01fba7a4) {
      iVar8 = 0;
      do {
        iVar5 = core_dglobe_cpp_CDemonGlobe_intersectAABB_FUN_0044d1f0
                          (*(CDemonGlobe **)(&DAT_01fba7a8 + iVar8),position,rotation_matrix,
                           aabb_min,aabb_max);
        local_74 = 0;
        if (iVar5 != 0) {
          _DAT_01fff090 = _DAT_01fff090 + 1;
          local_74 = *(int *)(&DAT_01fba7a8 + iVar8);
          *(int *)(&DAT_01fff090 + _DAT_01fff090 * 4) = local_74;
        }
        local_18 = local_18 + 1;
        iVar8 = iVar8 + 4;
      } while (local_18 < _DAT_01fba7a4);
    }
    if (0 < _DAT_01fff224) {
      local_ac = aabb_max->x - aabb_min->x;
      local_a8 = aabb_max->y - aabb_min->y;
      local_a4 = aabb_max->z - aabb_min->z;
      pfVar6 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                  (rotation_matrix,local_58,&local_ac);
      iVar8 = 0;
      local_80 = 0.0;
      local_84 = 0.0;
      local_88 = 0.0;
      local_b0 = 0.0;
      local_b4 = 0.0;
      local_b8 = 0.0;
      if (0 < _DAT_01fff224) {
        iVar5 = 0;
        do {
          iVar4 = *(int *)(&DAT_01fff228 + iVar5);
          if ((*(uint *)(iVar4 + 0x11d4) & 0x7fffffff) == 0) {
            local_b8 = *(float *)(iVar4 + 0x11c4) + local_b8;
            local_b4 = *(float *)(iVar4 + 0x11c8) + local_b4;
            local_b0 = *(float *)(iVar4 + 0x11cc) + local_b0;
            iVar8 = iVar8 + 1;
          }
          else {
            fVar3 = *(float *)(iVar4 + 0x104) - (position->x + *pfVar6);
            fVar1 = *(float *)(iVar4 + 0x108) - (position->y + pfVar6[1]);
            fVar2 = *(float *)(iVar4 + 0x10c) - (position->z + pfVar6[2]);
            fVar1 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
            if (fVar1 <= *(float *)(iVar4 + 0x11d8)) {
              fVar1 = (1.0 - (float)(((int)fVar1 >> 1) + (int)CVector3f_01c70708.y) *
                             *(float *)(iVar4 + 0x11dc)) * 0.666f;
              fVar2 = (float)2;
              local_88 = fVar1 * *(float *)(iVar4 + 0x11c4) * fVar2 + local_88;
              local_84 = fVar1 * *(float *)(iVar4 + 0x11c8) * fVar2 + local_84;
              local_80 = fVar1 * *(float *)(iVar4 + 0x11cc) * fVar2 + local_80;
            }
          }
          iVar5 = iVar5 + 4;
        } while (iVar5 < _DAT_01fff224 * 4);
      }
      if (iVar8 == 0) {
        local_78 = 0xaaaa;
        local_74 = 0xaaaa;
        local_7c = 0xaaaa;
      }
      else {
        local_7c = (int)ROUND(local_b8 * _DAT_005a18f0);
        local_78 = (int)ROUND(local_b4 * _DAT_005a18f0);
        local_74 = (int)ROUND(local_b0 * _DAT_005a18f0);
      }
      _DAT_01fff5a4 = (int)ROUND(local_88 * _DAT_005a18f0) + local_7c;
      _DAT_01fff5a8 = (int)ROUND(local_84 * _DAT_005a18f0) + local_78;
      local_74 = (int)ROUND(local_80 * _DAT_005a18f0) + local_74;
      if (0xffff < _DAT_01fff5a4) {
        _DAT_01fff5a4 = 0xffff;
      }
      if (0xffff < _DAT_01fff5a8) {
        _DAT_01fff5a8 = 0xffff;
      }
      _DAT_01fff5ac = local_74;
      if (0xffff < local_74) {
        _DAT_01fff5ac = 0xffff;
        return local_74;
      }
    }
  }
  return local_74;
}
