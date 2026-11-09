// Name: core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_00537e20
// Address: 00537e20
// Address Range: [[00537e20, 00538097]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_00537e20(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_00537e20(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal)

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
  if (_DAT_0207ffa8 != 0) {
    if (_DAT_0207ffa8 == 1) {
      rotation_matrix = (CMatrix3x3f *)0x0;
      aabb_max = (CVector3f *)0x0;
      aabb_min = (CVector3f *)0x0;
      orientation = (CVector3f *)0x0;
      position = (CVector3f *)0x0;
    }
    else {
      rotation_matrix = (CMatrix3x3f *)&DAT_0207ffdc;
      aabb_max = (CVector3f *)&DAT_0207ffd0;
      aabb_min = (CVector3f *)&DAT_0207ffc4;
      orientation = (CVector3f *)&DAT_0207ffb8;
      position = (CVector3f *)&DAT_0207ffac;
    }
    core_set_cpp_FUN_005376e0(this_ptr,position,orientation,aabb_min,aabb_max,rotation_matrix);
    _DAT_0207ffa8 = 0;
  }
  iVar3 = 0;
  iVar2 = 0;
  if (0 < _DAT_0207fadc) {
    iVar4 = 0;
    do {
      puVar7 = (uint *)(&DAT_0207fae0 + iVar4);
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
      iVar1 = core_dcamera_cpp_FUN_0044bb00
                        (&g_CDemonCameraInstance,world_position,*puVar7,surface_normal);
      iVar2 = iVar2 + iVar1;
    } while (iVar3 < _DAT_0207fadc);
  }
  iVar3 = 0;
  if (0 < _DAT_0207f958) {
    iVar4 = 0;
    do {
      puVar7 = (uint *)(&DAT_0207f95c + iVar4);
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
      iVar1 = core_dcamera_cpp_FUN_0044bb00
                        (&g_CDemonCameraInstance,world_position,*puVar7,surface_normal);
      iVar2 = iVar2 + iVar1;
    } while (iVar3 < _DAT_0207f958);
  }
  iVar3 = 0;
  if (0 < _DAT_0207faf0) {
    iVar4 = 0;
    do {
      puVar7 = (uint *)(&DAT_0207faf4 + iVar4);
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
      iVar1 = core_dglobe_cpp_FUN_0045b070(*puVar7,world_position,surface_normal);
      iVar2 = iVar2 + iVar1;
    } while (iVar3 < _DAT_0207faf0);
  }
  if ((((*(uint *)&this_ptr->field_0x14d160 & 0x7fffffff) != 0) &&
      (surface_normal != (CVector3i *)0x0)) &&
     (iVar3 = ((uint)((longlong)_DAT_0207bab4 * (longlong)*(int *)(surface_normal + 8)) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_0207bab4 * (longlong)*(int *)(surface_normal + 8)) >>
                   0x20) << 0x10) +
              ((uint)((longlong)_DAT_0207baac * (longlong)*(int *)surface_normal) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_0207baac * (longlong)*(int *)surface_normal) >> 0x20)
              << 0x10) +
              ((uint)((longlong)_DAT_0207bab0 * (longlong)*(int *)(surface_normal + 4)) >> 0x10 |
              (int)((ulonglong)((longlong)_DAT_0207bab0 * (longlong)*(int *)(surface_normal + 4)) >>
                   0x20) << 0x10), iVar3 < 0)) {
    iVar2 = iVar2 - iVar3;
  }
  local_18 = 0;
  if (0 < *(int *)&this_ptr->field_0x15acc8) {
    local_14 = this_ptr;
    do {
      core_mirror_cpp_FUN_004f57c0(*(int *)&local_14->field_0x15accc + 0x21c,world_position);
      local_3c = local_48;
      *(uint *)((int)&stack0xffffffc8 + (uint)bVar5 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffbc + (uint)bVar5 * -8);
      *(uint *)(&stack0xffffffcc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffc0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      if (surface_normal != (CVector3i *)0x0) {
        core_mirror_cpp_FUN_004f5870
                  (*(int *)&local_14->field_0x15accc + 0x21c,world_position,surface_normal);
        local_30 = local_24;
        *(uint *)((int)&stack0xffffffd4 + (uint)bVar5 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffffe0 + (uint)bVar5 * -8);
        *(uint *)(&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             *(uint *)(&stack0xffffffe4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      }
      iVar3 = 0;
      if (0 < _DAT_0203ad1c) {
        iVar4 = 0;
        do {
          if (surface_normal == (CVector3i *)0x0) {
            uVar6 = *(uint *)(iVar4 + 0x203ad20);
            puVar7 = (uint *)0x0;
          }
          else {
            puVar7 = &stack0xffffffd0;
            uVar6 = *(uint *)(iVar4 + 0x203ad20);
          }
          iVar1 = core_dcamera_cpp_FUN_0044bb00
                            (&g_CDemonCameraInstance,&stack0xffffffc4,uVar6,puVar7);
          iVar2 = iVar2 + iVar1;
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar3 < _DAT_0203ad1c);
      }
      local_14 = (CDemonSet *)&local_14->field_0x4;
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)&this_ptr->field_0x15acc8);
  }
  return iVar2;
}
