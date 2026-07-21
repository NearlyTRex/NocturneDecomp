// Name: core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0
// Address: 0050b5c0
// Address Range: [[0050b5c0, 0050b7e4]]
// Convention: unknown
// Signature: int core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0050b5c0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int aiStackY_1030 [1012];
  byte *puVar6;
  byte *puVar7;
  byte *puVar8;
  byte *puVar9;
  uint uVar10;
  byte *puVar11;
  uint *puVar12;
  uint local_48;
  uint local_3c;
  uint local_30;
  uint local_24;
  int local_18;
  int local_14;
  
  bVar5 = 0;
  if (_DAT_01fff548 != 0) {
    if (_DAT_01fff548 == 1) {
      puVar11 = (byte *)0x0;
      puVar9 = (byte *)0x0;
      puVar8 = (byte *)0x0;
      puVar7 = (byte *)0x0;
      puVar6 = (byte *)0x0;
    }
    else {
      puVar11 = &DAT_01fff57c;
      puVar9 = &DAT_01fff570;
      puVar8 = &DAT_01fff564;
      puVar7 = &DAT_01fff558;
      puVar6 = &DAT_01fff54c;
    }
    core_set_cpp_CDemonSet_gatherVisibleLights_FUN_0050aee0
              (param_1,puVar6,puVar7,puVar8,puVar9,puVar11);
    _DAT_01fff548 = 0;
  }
  iVar3 = 0;
  iVar2 = 0;
  if (0 < _DAT_01fff07c) {
    iVar4 = 0;
    do {
      puVar12 = (uint *)(&DAT_01fff080 + iVar4);
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
      iVar1 = core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_00442c50
                        (0x1fb8508,param_2,*puVar12,param_3);
      iVar2 = iVar2 + iVar1;
    } while (iVar3 < _DAT_01fff07c);
  }
  iVar3 = 0;
  if (0 < _DAT_01ffeef8) {
    iVar4 = 0;
    do {
      puVar12 = (uint *)(&DAT_01ffeefc + iVar4);
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
      iVar1 = core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_00442c50
                        (0x1fb8508,param_2,*puVar12,param_3);
      iVar2 = iVar2 + iVar1;
    } while (iVar3 < _DAT_01ffeef8);
  }
  iVar3 = 0;
  if (0 < _DAT_01fff090) {
    iVar4 = 0;
    do {
      puVar12 = (uint *)(&DAT_01fff094 + iVar4);
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
      iVar1 = core_dglobe_cpp_CDemonGlobe_getAttenuationAtVertex_FUN_0044d2d0
                        (*puVar12,param_2,param_3);
      iVar2 = iVar2 + iVar1;
    } while (iVar3 < _DAT_01fff090);
  }
  local_18 = 0;
  if (0 < *(int *)(param_1 + 0x15a8cc)) {
    local_14 = param_1;
    do {
      core_mirror_cpp_CMirrorReflection_transformMirrorVertex_FUN_004d7b30
                (*(int *)(local_14 + 0x15a8d0) + 0x1e4,param_2);
      local_48 = local_3c;
      *(uint *)((int)&stack0xffffffbc + (uint)bVar5 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffc8 + (uint)bVar5 * -8);
      *(uint *)(&stack0xffffffc0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffcc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      if (param_3 != 0) {
        core_mirror_cpp_CMirrorReflection_transformMirrorEdgeToIntegerSpace_FUN_004d7bd0
                  (*(int *)(local_14 + 0x15a8d0) + 0x1e4,param_2,param_3);
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
          if (param_3 == 0) {
            uVar10 = *(uint *)(iVar4 + 0x1fba2dc);
            puVar12 = (uint *)0x0;
          }
          else {
            puVar12 = &stack0xffffffdc;
            uVar10 = *(uint *)(iVar4 + 0x1fba2dc);
          }
          iVar1 = core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_00442c50
                            (0x1fb8508,&stack0xffffffb8,uVar10,puVar12);
          iVar2 = iVar2 + iVar1;
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar3 < _DAT_01fba2d8);
      }
      local_14 = local_14 + 4;
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(param_1 + 0x15a8cc));
  }
  return iVar2;
}
