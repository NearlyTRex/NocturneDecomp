// Name: core_doc.cpp_FUN_0046f200
// Address: 0046f200
// Address Range: [[0046f200, 0046f606]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_0046f200(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_0046f200(int param_1,int param_2)

{
  char *motion_name;
  CSkeleton *this_ptr;
  int iVar1;
  byte bVar2;
  float afStackY_19c0 [1520];
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  float local_1e8;
  uint local_1e4;
  uint local_1d4;
  uint local_1c4;
  uint local_1b4;
  uint local_1a4;
  float local_194;
  uint local_184;
  uint local_174;
  uint local_164;
  uint local_154;
  uint local_144;
  uint local_134;
  CQuaternion4f local_124;
  uint local_114;
  uint auStack_110 [7];
  uint local_f4;
  uint local_e4;
  uint local_d4;
  uint local_c4;
  uint local_b4;
  uint local_a4;
  uint local_94 [4];
  uint local_84 [4];
  uint local_74;
  uint local_64;
  uint local_54;
  uint local_44 [6];
  float local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  CDeformableModelInstance *local_18;
  uint local_14;
  
  bVar2 = 0;
  if (param_2 == 0) {
    local_1c = _DAT_01b68820;
    local_20 = _DAT_01b68848;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(0x3fc90fdb);
    local_1d4 = local_164;
    *(uint *)((int)&stack0xfffffe30 + (uint)bVar2 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffea0 + (uint)bVar2 * -8);
    *(uint *)(&stack0xfffffe34 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xfffffea4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    *(uint *)
     ((int)(&stack0xfffffe34 + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xfffffea4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) +
          ((uint)bVar2 * -2 + 1) * 4);
    core_xform_cpp_quaternionFromAngleZ_FUN_005b7b70(0x3fc90fdb);
    local_1c4 = local_f4;
    *(uint *)((int)&stack0xfffffe40 + (uint)bVar2 * 0xfffffffe * 4) =
         auStack_110[(uint)bVar2 * -2 + 8];
    *(uint *)(&stack0xfffffe44 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         auStack_110[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 9];
    *(uint *)
     ((int)(&stack0xfffffe44 + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4) =
         (auStack_110 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 9)[(uint)bVar2 * -2 + 1];
    iVar1 = param_1 + 0x1ffe0;
  }
  else {
    local_1c = _DAT_01b68824;
    local_20 = _DAT_01b6884c;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(0xbfc90fdb);
    local_1d4 = local_e4;
    *(uint *)((int)&stack0xfffffe30 + (uint)bVar2 * 0xfffffffe * 4) =
         auStack_110[(uint)bVar2 * -2 + 0xc];
    *(uint *)(&stack0xfffffe34 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         auStack_110[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0xd];
    *(uint *)
     ((int)(&stack0xfffffe34 + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4) =
         (auStack_110 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 0xd)[(uint)bVar2 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005b7b70(0xbfc90fdb);
    local_1c4 = local_1b4;
    *(uint *)((int)&stack0xfffffe40 + (uint)bVar2 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffe50 + (uint)bVar2 * -8);
    *(uint *)(&stack0xfffffe44 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xfffffe54 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    *(uint *)
     ((int)(&stack0xfffffe44 + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xfffffe54 + (uint)bVar2 * -8 + (uint)bVar2 * -8) +
          ((uint)bVar2 * -2 + 1) * 4);
    iVar1 = param_1 + 0x1ffc0;
  }
  local_1e8 = (*(float *)(param_1 + 0x2c9c) + (float)_DAT_005da094) * (float)_DAT_005da09c;
  if (local_1e8 < 0.0) {
    local_1e8 = 0.0;
  }
  local_1e8 = (1.0 - (1.0 - *(float *)(iVar1 + 0x14)) * local_1e8) * local_1e8;
  if (0.0 < local_1e8) {
    iVar5 = 1;
    motion_name = (char *)(*(int *)(param_1 + 0x2c98) * 0x38 + param_1 + 0x27d0);
    local_18 = (CDeformableModelInstance *)(param_1 + 0x158);
    this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(local_18);
    iVar5 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                      (&this_ptr->motion_list,motion_name,iVar5);
    local_28 = core_motion_cpp_FUN_00525110(local_18,iVar5,*(uint *)(param_1 + 0x2c9c));
    local_14 = local_28;
    core_skeleton_cpp_FUN_00568100
              (local_18,iVar5,local_28,local_1e8,local_1c,core_skeleton_cpp_FUN_00567360);
    local_2c = *(float *)(iVar1 + 8) + (float)_DAT_005da0a4;
    core_xform_cpp_quaternionFromAngleY_FUN_005b7b30(*(uint *)(iVar1 + 0xc));
    puVar3 = auStack_110 + 0x33;
    local_44[0] = local_d4;
    auStack_110[(uint)bVar2 * -2 + 0x34] = auStack_110[(uint)bVar2 * -2 + 0x10];
    auStack_110[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x35] =
         auStack_110[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x11];
    (auStack_110 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x35)[(uint)bVar2 * -2 + 1] =
         (auStack_110 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x11)[(uint)bVar2 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(local_2c,puVar3);
    local_174 = local_64;
    *(uint *)((int)&stack0xfffffe90 + (uint)bVar2 * 0xfffffffe * 4) =
         auStack_110[(uint)bVar2 * -2 + 0x2c];
    *(uint *)(&stack0xfffffe94 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         auStack_110[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x2d];
    *(uint *)
     ((int)(&stack0xfffffe94 + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4) =
         (auStack_110 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x2d)[(uint)bVar2 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&stack0xfffffe8c);
    puVar3 = &stack0xfffffe2c;
    uVar6 = 0x3f733333;
    local_184 = local_114;
    *(uint *)((int)&stack0xfffffe80 + (uint)bVar2 * 0xfffffffe * 4) =
         auStack_110[(uint)bVar2 * -2];
    *(uint *)(&stack0xfffffe84 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         auStack_110[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    *(uint *)
     ((int)(&stack0xfffffe84 + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4) =
         (auStack_110 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_005b7940(&DAT_006081e0,puVar3,uVar6);
    puVar3 = &stack0xfffffe7c;
    puVar4 = &stack0xfffffe3c;
    local_154 = auStack_110[3];
    *(uint *)((int)&stack0xfffffeb0 + (uint)bVar2 * 0xfffffffe * 4) =
         auStack_110[(uint)bVar2 * -2 + 4];
    *(uint *)(&stack0xfffffeb4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         auStack_110[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 5];
    *(uint *)
     ((int)(&stack0xfffffeb4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4) =
         (auStack_110 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 5)[(uint)bVar2 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&stack0xfffffe2c,puVar4,puVar3);
    local_134 = local_54;
    *(uint *)((int)&stack0xfffffed0 + (uint)bVar2 * 0xfffffffe * 4) =
         auStack_110[(uint)bVar2 * -2 + 0x30];
    auStack_110[(uint)bVar2 * -2 + (uint)bVar2 * -2 + -7] =
         auStack_110[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x31];
    (auStack_110 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + -7)[(uint)bVar2 * -2 + 1] =
         (auStack_110 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x31)[(uint)bVar2 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&stack0xfffffecc);
    local_144 = local_74;
    *(uint *)((int)&stack0xfffffec0 + (uint)bVar2 * 0xfffffffe * 4) =
         auStack_110[(uint)bVar2 * -2 + 0x28];
    *(uint *)(&stack0xfffffec4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         auStack_110[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x29];
    *(uint *)
     ((int)(&stack0xfffffec4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4) =
         (auStack_110 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x29)[(uint)bVar2 * -2 + 1];
    local_24 = param_1 + 0x808;
    core_xform_cpp_negateFirstComponent_FUN_005b7750(local_20 * 0x10 + local_24,&stack0xfffffebc);
    local_1e4 = local_1a4;
    *(uint *)((int)&stack0xfffffe20 + (uint)bVar2 * 0xfffffffe * 4) =
         *(uint *)(&stack0xfffffe60 + (uint)bVar2 * -8);
    *(uint *)(&stack0xfffffe24 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xfffffe64 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    *(uint *)
     ((int)(&stack0xfffffe24 + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xfffffe64 + (uint)bVar2 * -8 + (uint)bVar2 * -8) +
          ((uint)bVar2 * -2 + 1) * 4);
    core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&stack0xfffffe1c);
    local_124.w = local_194;
    puVar3 = (uint *)((int)&local_124 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
    *(uint *)((int)&local_124 + (uint)bVar2 * -8 + 4) =
         *(uint *)(&stack0xfffffe70 + (uint)bVar2 * -8);
    *puVar3 = *(uint *)(&stack0xfffffe74 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    puVar3[(uint)bVar2 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xfffffe74 + (uint)bVar2 * -8 + (uint)bVar2 * -8) +
          ((uint)bVar2 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_005695e0
              (local_18,&local_124,local_1e8,local_1c,core_skeleton_cpp_FUN_00567360);
    if ((float)_DAT_005da0ac < *(float *)(param_1 + 0x20060)) {
      core_xform_cpp_quaternionFromAngleX_FUN_005b7af0(0x3fc90fdb);
      puVar3 = auStack_110 + 0x23;
      local_84[0] = local_b4;
      auStack_110[(uint)bVar2 * -2 + 0x24] = auStack_110[(uint)bVar2 * -2 + 0x18];
      auStack_110[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x25] =
           auStack_110[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x19];
      (auStack_110 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x25)[(uint)bVar2 * -2 + 1] =
           (auStack_110 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x19)[(uint)bVar2 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_005b77b0(&stack0xfffffeac,puVar3);
      local_94[0] = local_a4;
      auStack_110[(uint)bVar2 * -2 + 0x20] = auStack_110[(uint)bVar2 * -2 + 0x1c];
      auStack_110[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x21] =
           auStack_110[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x1d];
      (auStack_110 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x21)[(uint)bVar2 * -2 + 1] =
           (auStack_110 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x1d)[(uint)bVar2 * -2 + 1];
      iVar1 = local_1c * 0x10;
      core_xform_cpp_slerpQuaternion_FUN_005b7940
                (local_24 + iVar1,auStack_110 + 0x1f,*(uint *)(param_1 + 0x20060));
      puVar3 = (uint *)(iVar1 + 0x808 + param_1);
      puVar4 = puVar3 + (uint)bVar2 * -2 + 1;
      *puVar3 = local_c4;
      *puVar4 = auStack_110[(uint)bVar2 * -2 + 0x14];
      puVar4[(uint)bVar2 * -2 + 1] = auStack_110[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x15];
      (puVar4 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
           (auStack_110 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 0x15)[(uint)bVar2 * -2 + 1];
      return;
    }
  }
  return;
}
