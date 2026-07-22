// Name: FUN_0051d650
// Address: 0051d650
// Address Range: [[0051d650, 0051d794]]
// Convention: unknown
// Signature: void FUN_0051d650(undefined4 param_1,float *param_2,float param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051d650(uint param_1,float *param_2,float param_3,uint param_4,uint param_5,uint param_6)

{
  float *pfVar1;
  byte bVar2;
  float afStackY_1888 [1521];
  uint *puVar3;
  uint uStack_ac;
  uint uStack_9c;
  uint uStack_8c;
  uint uStack_7c;
  uint uStack_6c;
  uint uStack_5c;
  uint uStack_4c;
  uint uStack_3c;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint uStack_20;
  uint uStack_1c;
  byte auStack_14 [12];
  
  bVar2 = 0;
  if (param_3 <= (float)_DAT_00591bc3) {
    return;
  }
  core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(param_1);
  pfVar1 = (float *)core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                              (param_1,auStack_14,param_4);
  fStack_2c = *param_2 - *pfVar1;
  fStack_28 = param_2[1] - pfVar1[1];
  fStack_24 = param_2[2] - pfVar1[2];
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(&uStack_20,&stack0xffffffd4);
  core_xform_cpp_FUN_0055d4a0(uStack_20);
  puVar3 = &stack0xffffff54;
  uStack_ac = uStack_3c;
  *(uint *)((int)&stack0xffffff58 + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffc8 + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffff5c + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(auStack_14 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + -0x20);
  *(uint *)
   ((int)(&stack0xffffff5c + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4) =
       *(uint *)
        ((int)(auStack_14 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + -0x20) +
        ((uint)bVar2 * -2 + 1) * 4);
  core_xform_cpp_FUN_0055d4e0(uStack_1c,puVar3);
  puVar3 = &stack0xffffff74;
  uStack_8c = uStack_6c;
  *(uint *)((int)&stack0xffffff78 + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff98 + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffff7c + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffff9c + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  *(uint *)
   ((int)(&stack0xffffff7c + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xffffff9c + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4)
  ;
  core_xform_cpp_multiplyQuaternion_FUN_0055d130(param_5,puVar3);
  uStack_7c = uStack_5c;
  *(uint *)((int)&stack0xffffff88 + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffa8 + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffff8c + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffac + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  *(uint *)
   ((int)(&stack0xffffff8c + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xffffffac + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4)
  ;
  core_xform_cpp_multiplyQuaternion_FUN_0055d130(&stack0xffffff84);
  uStack_9c = uStack_4c;
  *(uint *)((int)&stack0xffffff68 + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffb8 + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffff6c + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffbc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  *(uint *)
   ((int)(&stack0xffffff6c + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xffffffbc + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4)
  ;
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0
            (param_1,&stack0xffffff64,param_3,param_4,param_6);
  return;
}
