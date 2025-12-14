// Name: core_hostage.cpp_CHostage_FUN_004f6550
// Address: 004f6550
// Address Range: [[004f6550, 004f69b8]]
// Convention: __cdecl
// Signature: void core_hostage.cpp_CHostage_FUN_004f6550(CHostage * this_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004f688c) */
/* WARNING: Removing unreachable block (ram,0x004f6977) */
/* WARNING: Removing unreachable block (ram,0x004f68c6) */
/* WARNING: Removing unreachable block (ram,0x004f68f7) */
/* WARNING: Removing unreachable block (ram,0x004f6911) */
/* WARNING: Type propagation algorithm not settling */

void __cdecl core_hostage_cpp_CHostage_FUN_004f6550(CHostage *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  uint *unaff_ESI;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  int in_stack_00000008;
  CMatrix3x4f *in_stack_fffffd74;
  CMatrix3x4f *in_stack_fffffd78;
  uint auStack_254 [21];
  byte auStack_200 [56];
  uint auStack_1c8 [25];
  uint auStack_164 [11];
  uint auStack_138 [11];
  byte auStack_10c [48];
  byte auStack_dc [60];
  CVector3f local_a0;
  CVector3f local_94;
  CVector3f local_80;
  CVector3f local_70 [2];
  byte local_58 [12];
  uint local_4c;
  uint local_48;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  bVar4 = 0;
  if ((*(int *)this_ptr->field4_0x1fab8 == 1) &&
     (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0
                        ((this_ptr->base_npc).base_character.carry_hands[in_stack_00000008].
                         carry_actor,"CShotgun"), iVar1 != 0)) {
    local_80.x = 0.269;
    local_80.y = -0.012;
    local_58._8_4_ = -0.287;
    local_80.z = 0.092;
    local_48 = 0x3f9ac083;
    local_4c = 0x3ecf5c29;
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              ((CMatrix3x4f *)auStack_200,&local_80,(CVector3f *)(local_58 + 8));
    puVar3 = (uint *)&stack0xfffffd74;
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              ((CMatrix3x4f *)(auStack_200 + 4),
               (this_ptr->base_npc).base_character.model.bone_transform.bone_world_matrices +
               *(int *)(this_ptr->base_npc).base_character.carry_hands[in_stack_00000008].field0_0x0
               ,in_stack_fffffd74);
    puVar2 = auStack_1c8;
  }
  else {
    puVar3 = (uint *)&stack0xfffffd74;
    if (*(int *)this_ptr->field4_0x1fab8 == 3) {
      local_34.x = 0.265971;
      local_34.y = -0.200311;
      local_34.z = 0.0324051;
      if (&local_a0 != &local_34) {
        local_a0.y = -0.200311;
        local_a0.z = 0.0324051;
        local_a0.x = 0.265971;
      }
      local_1c.z = 0.13687;
      local_1c.y = 0.13687;
      local_1c.x = -0.480625;
      if (&local_94 != &local_1c) {
        local_94.x = -0.480625;
        local_94.y = 0.13687;
        local_94.z = 0.13687;
      }
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                ((CMatrix3x4f *)auStack_dc,&local_a0,&local_94);
      puVar3 = (uint *)&stack0xfffffd78;
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                ((CMatrix3x4f *)(auStack_dc + 4),
                 (this_ptr->base_npc).base_character.model.bone_transform.bone_world_matrices +
                 *(int *)(this_ptr->base_npc).base_character.carry_hands[in_stack_00000008].
                         field0_0x0,in_stack_fffffd78);
      puVar2 = auStack_254;
    }
    else if (*(int *)this_ptr->field4_0x1fab8 == 5) {
      local_70[0].x = 0.265971;
      local_70[0].y = -0.200311;
      local_70[0].z = 0.0324051;
      if (&local_28 != local_70) {
        local_28.y = -0.200311;
        local_28.z = 0.0324051;
        local_28.x = 0.265971;
      }
      local_58._8_4_ = 0.13687;
      local_58._4_4_ = 0.13687;
      local_58._0_4_ = -0.480625;
      if (&local_40 != (CVector3f *)local_58) {
        local_40.x = -0.480625;
        local_40.y = 0.13687;
        local_40.z = 0.13687;
      }
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                ((CMatrix3x4f *)auStack_10c,&local_28,&local_40);
      puVar3 = (uint *)&stack0xfffffd78;
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                ((CMatrix3x4f *)(auStack_10c + 4),
                 (this_ptr->base_npc).base_character.model.bone_transform.bone_world_matrices +
                 *(int *)(this_ptr->base_npc).base_character.carry_hands[in_stack_00000008].
                         field0_0x0,in_stack_fffffd78);
      puVar2 = auStack_164;
    }
    else {
      core_charactr_cpp_CCharacter_FUN_0042d300((CCharacter *)this_ptr);
      puVar2 = auStack_138;
    }
  }
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  puVar3 = (uint *)&stack0xfffffd78;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar3;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar4 * -2 + 1;
  }
  return;
}
