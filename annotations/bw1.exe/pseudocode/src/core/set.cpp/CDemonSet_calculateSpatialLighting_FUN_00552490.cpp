// Name: core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_00552490
// Address: 00552490
// Address Range: [[00552490, 00552707]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_00552490(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_00552490(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int aiStackY_1030 [1012];
  CVector3f *position;
  CVector3f *orientation;
  CVector3f *aabb_min;
  CVector3f *aabb_max;
  uint uVar6;
  CMatrix3x3f *rotation_matrix;
  uint *puVar7;
  uint local_48;
  uint local_3c;
  uint local_30;
  uint local_24;
  int local_18;
  CDemonSet *local_14;
  
  bVar5 = 0;
  if (_DAT_0202a840 != 0) {
    if (_DAT_0202a840 == 1) {
      rotation_matrix = (CMatrix3x3f *)0x0;
      aabb_max = (CVector3f *)0x0;
      aabb_min = (CVector3f *)0x0;
      orientation = (CVector3f *)0x0;
      position = (CVector3f *)0x0;
    }
    else {
      rotation_matrix = (CMatrix3x3f *)&DAT_0202a874;
      aabb_max = (CVector3f *)&DAT_0202a868;
      aabb_min = (CVector3f *)&DAT_0202a85c;
      orientation = (CVector3f *)&DAT_0202a850;
      position = (CVector3f *)&DAT_0202a844;
    }
    core_set_cpp_FUN_00551d50(this_ptr,position,orientation,aabb_min,aabb_max,rotation_matrix);
    _DAT_0202a840 = 0;
  }
  iVar3 = 0;
  iVar2 = 0;
  if (0 < _DAT_0202a374) {
    iVar4 = 0;
    do {
      puVar7 = (uint *)(&DAT_0202a378 + iVar4);
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
      iVar1 = core_dcamera_cpp_FUN_0044f9c0
                        (&g_CDemonCameraInstance,world_position,*puVar7,surface_normal);
      iVar2 = iVar2 + iVar1;
    } while (iVar3 < _DAT_0202a374);
  }
  iVar3 = 0;
  if (0 < _DAT_0202a1f0) {
    iVar4 = 0;
    do {
      puVar7 = (uint *)(&DAT_0202a1f4 + iVar4);
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
      iVar1 = core_dcamera_cpp_FUN_0044f9c0
                        (&g_CDemonCameraInstance,world_position,*puVar7,surface_normal);
      iVar2 = iVar2 + iVar1;
    } while (iVar3 < _DAT_0202a1f0);
  }
  iVar3 = 0;
  if (0 < _DAT_0202a388) {
    iVar4 = 0;
    do {
      puVar7 = (uint *)(&DAT_0202a38c + iVar4);
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
      iVar1 = core_dglobe_cpp_FUN_0045ef00(*puVar7,world_position,surface_normal);
      iVar2 = iVar2 + iVar1;
    } while (iVar3 < _DAT_0202a388);
  }
  if ((((*(uint *)&this_ptr->field_0x14d160 & 0x7fffffff) != 0) &&
      (surface_normal != (CVector3i *)0x0)) &&
     (iVar3 = ((uint)((longlong)_DAT_02026354 * (longlong)*(int *)(surface_normal + 8)) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_02026354 * (longlong)*(int *)(surface_normal + 8)) >>
                   0x20) << 0x10) +
              ((uint)((longlong)_DAT_0202634c * (longlong)*(int *)surface_normal) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_0202634c * (longlong)*(int *)surface_normal) >> 0x20)
              << 0x10) +
              ((uint)((longlong)_DAT_02026350 * (longlong)*(int *)(surface_normal + 4)) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_02026350 * (longlong)*(int *)(surface_normal + 4)) >>
                   0x20) << 0x10), iVar3 < 0)) {
    iVar2 = iVar2 - iVar3;
  }
  local_18 = 0;
  if (0 < *(int *)&this_ptr->field_0x15acc8) {
    local_14 = this_ptr;
    do {
      core_mirror_cpp_FUN_00519ff0(*(int *)&local_14->field_0x15accc + 0x1ec,world_position);
      local_3c = local_48;
      *(uint *)((int)&stack0xffffffc8 + (uint)bVar5 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffbc + (uint)bVar5 * -8);
      *(uint *)(&stack0xffffffcc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffc0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      if (surface_normal != (CVector3i *)0x0) {
        core_mirror_cpp_FUN_0051a0a0
                  (*(int *)&local_14->field_0x15accc + 0x1ec,world_position,surface_normal);
        local_30 = local_24;
        *(uint *)((int)&stack0xffffffd4 + (uint)bVar5 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffffe0 + (uint)bVar5 * -8);
        *(uint *)(&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             *(uint *)(&stack0xffffffe4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      }
      iVar3 = 0;
      if (0 < _DAT_01fe55bc) {
        iVar4 = 0;
        do {
          if (surface_normal == (CVector3i *)0x0) {
            uVar6 = *(uint *)(iVar4 + 0x1fe55c0);
            puVar7 = (uint *)0x0;
          }
          else {
            puVar7 = &stack0xffffffd0;
            uVar6 = *(uint *)(iVar4 + 0x1fe55c0);
          }
          iVar1 = core_dcamera_cpp_FUN_0044f9c0
                            (&g_CDemonCameraInstance,&stack0xffffffc4,uVar6,puVar7);
          iVar2 = iVar2 + iVar1;
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar3 < _DAT_01fe55bc);
      }
      local_14 = (CDemonSet *)&local_14->field_0x4;
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)&this_ptr->field_0x15acc8);
  }
  return iVar2;
}
