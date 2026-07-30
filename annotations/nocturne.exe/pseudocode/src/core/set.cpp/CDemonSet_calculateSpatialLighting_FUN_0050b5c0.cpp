// Name: core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0
// Address: 0050b5c0
// Address Range: [[0050b5c0, 0050b7e4]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0(CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal)

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
  if (_DAT_01fff548 != 0) {
    if (_DAT_01fff548 == 1) {
      rotation_matrix = (CMatrix3x3f *)0x0;
      aabb_max = (CVector3f *)0x0;
      aabb_min = (CVector3f *)0x0;
      orientation = (CVector3f *)0x0;
      position = (CVector3f *)0x0;
    }
    else {
      rotation_matrix = (CMatrix3x3f *)&DAT_01fff57c;
      aabb_max = (CVector3f *)&DAT_01fff570;
      aabb_min = (CVector3f *)&DAT_01fff564;
      orientation = (CVector3f *)&DAT_01fff558;
      position = (CVector3f *)&DAT_01fff54c;
    }
    core_set_cpp_CDemonSet_gatherVisibleLights_FUN_0050aee0
              (this_ptr,position,orientation,aabb_min,aabb_max,rotation_matrix);
    _DAT_01fff548 = 0;
  }
  iVar3 = 0;
  iVar2 = 0;
  if (0 < _DAT_01fff07c) {
    iVar4 = 0;
    do {
      puVar7 = (uint *)(&DAT_01fff080 + iVar4);
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
      iVar1 = core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_00442c50
                        (&DAT_01fb8508,world_position,*puVar7,surface_normal);
      iVar2 = iVar2 + iVar1;
    } while (iVar3 < _DAT_01fff07c);
  }
  iVar3 = 0;
  if (0 < _DAT_01ffeef8) {
    iVar4 = 0;
    do {
      puVar7 = (uint *)(&DAT_01ffeefc + iVar4);
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
      iVar1 = core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_00442c50
                        (&DAT_01fb8508,world_position,*puVar7,surface_normal);
      iVar2 = iVar2 + iVar1;
    } while (iVar3 < _DAT_01ffeef8);
  }
  iVar3 = 0;
  if (0 < _DAT_01fff090) {
    iVar4 = 0;
    do {
      puVar7 = (uint *)(&DAT_01fff094 + iVar4);
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
      iVar1 = core_dglobe_cpp_CDemonGlobe_getAttenuationAtVertex_FUN_0044d2d0
                        ((CDemonGlobe *)*puVar7,world_position,surface_normal);
      iVar2 = iVar2 + iVar1;
    } while (iVar3 < _DAT_01fff090);
  }
  local_18 = 0;
  if (0 < (int)this_ptr->renderable_actors[0x6f7]) {
    local_14 = this_ptr;
    do {
      core_mirror_cpp_CMirrorReflection_transformMirrorVertex_FUN_004d7b30
                (local_14->renderable_actors[0x6f8][1].create_event + 0x1c,world_position);
      local_48 = local_3c;
      *(uint *)((int)&stack0xffffffbc + (uint)bVar5 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffc8 + (uint)bVar5 * -8);
      *(uint *)(&stack0xffffffc0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffcc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      if (surface_normal != (CVector3i *)0x0) {
        core_mirror_cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_004d7bd0
                  (local_14->renderable_actors[0x6f8][1].create_event + 0x1c,world_position,
                   surface_normal);
        local_24 = local_30;
        *(uint *)((int)&stack0xffffffe0 + (uint)bVar5 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffffd4 + (uint)bVar5 * -8);
        *(uint *)(&stack0xffffffe4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             *(uint *)(&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      }
      iVar3 = 0;
      if (0 < _DAT_01fba2d8) {
        iVar4 = 0;
        do {
          if (surface_normal == (CVector3i *)0x0) {
            uVar6 = *(uint *)(iVar4 + 0x1fba2dc);
            puVar7 = (uint *)0x0;
          }
          else {
            puVar7 = &stack0xffffffdc;
            uVar6 = *(uint *)(iVar4 + 0x1fba2dc);
          }
          iVar1 = core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_00442c50
                            (&DAT_01fb8508,&stack0xffffffb8,uVar6,puVar7);
          iVar2 = iVar2 + iVar1;
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar3 < _DAT_01fba2d8);
      }
      local_14 = (CDemonSet *)local_14->cameras;
      local_18 = local_18 + 1;
    } while (local_18 < (int)this_ptr->renderable_actors[0x6f7]);
  }
  return iVar2;
}
