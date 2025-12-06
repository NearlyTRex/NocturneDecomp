// Name: core_zombie.cpp_CZombie_FUN_005fc720
// Address: 005fc720
// Address Range: [[005fc720, 005fc916]]
// Convention: __cdecl
// Signature: int core_zombie.cpp_CZombie_FUN_005fc720(CZombie * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_zombie_cpp_CZombie_FUN_005fc720(CZombie *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CVector3f *pCVar1;
  float *pfVar2;
  CVector3f *pCVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  float *in_stack_00000008;
  int bone_index;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  byte local_40 [16];
  CVector3f local_30;
  float local_24;
  CVector3f CStack_20;
  int iStack_14;
  
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
            (&(this_ptr->base_enemy).base_character.model,&local_30,
             *(int *)(this_ptr->field4_0xbf48 + 0x28));
  if (&local_30.y != in_stack_00000008) {
    *in_stack_00000008 = local_30.y;
    in_stack_00000008[1] = local_30.z;
    in_stack_00000008[2] = local_24;
  }
  iVar4 = 1;
  iStack_14 = 0;
  this_ptr_00 = &(this_ptr->base_enemy).base_character.model;
  do {
    switch((iStack_14 + (this_ptr->base_enemy).base_character.base_actor.field7_0x6c) % 4) {
    case 0:
      if ((this_ptr->base_enemy).base_character.model.part_visibility_flags
          [*(int *)(this_ptr->field4_0xbf48 + 0x30)] != 0) {
        bone_index = *(int *)(this_ptr->field4_0xbf48 + 0x18);
        pCVar1 = &CStack_20;
LAB_005fc7ac:
        pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                           (this_ptr_00,pCVar1,bone_index);
        if ((CVector3f *)local_40 != pCVar1) {
          local_40._0_4_ = pCVar1->x;
          local_40._4_4_ = pCVar1->y;
          local_40._8_4_ = pCVar1->z;
        }
        local_40._4_4_ =
             local_24 * (float)_DAT_00658a35 + (float)local_40._4_4_ * (float)_DAT_00658a2d;
        local_40._0_4_ =
             local_30.z * (float)_DAT_00658a25 + (float)local_40._0_4_ * (float)_DAT_00658a25;
        pfVar2 = in_stack_00000008 + iVar4 * 3;
        if (pfVar2 != (float *)local_40) {
          *pfVar2 = (float)local_40._0_4_;
          pfVar2[1] = (float)local_40._4_4_;
          pfVar2[2] = (float)local_40._8_4_;
        }
LAB_005fc82e:
        iVar4 = iVar4 + 1;
      }
      break;
    case 1:
      if ((this_ptr->base_enemy).base_character.model.part_visibility_flags
          [*(int *)(this_ptr->field4_0xbf48 + 0x38)] != 0) {
        bone_index = *(int *)(this_ptr->field4_0xbf48 + 0x1c);
        pCVar1 = &CStack_50;
        goto LAB_005fc7ac;
      }
      break;
    case 2:
      if ((this_ptr->base_enemy).base_character.model.part_visibility_flags
          [*(int *)(this_ptr->field4_0xbf48 + 0x48)] != 0) {
        pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                           (this_ptr_00,(CVector3f *)(local_40 + 8),
                            *(int *)(this_ptr->field4_0xbf48 + 4));
        pCVar3 = (CVector3f *)(in_stack_00000008 + iVar4 * 3);
        if (pCVar3 != pCVar1) {
          pCVar3->x = pCVar1->x;
          pCVar3->y = pCVar1->y;
          pCVar3->z = pCVar1->z;
        }
        goto LAB_005fc82e;
      }
      break;
    case 3:
      if ((this_ptr->base_enemy).base_character.model.part_visibility_flags
          [*(int *)(this_ptr->field4_0xbf48 + 0x44)] != 0) {
        pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                           (this_ptr_00,&CStack_5c,*(int *)(this_ptr->field4_0xbf48 + 0x2c));
        pCVar3 = (CVector3f *)(in_stack_00000008 + iVar4 * 3);
        if (pCVar3 != pCVar1) {
          pCVar3->x = pCVar1->x;
          pCVar3->y = pCVar1->y;
          pCVar3->z = pCVar1->z;
        }
        goto LAB_005fc82e;
      }
    }
    iStack_14 = iStack_14 + 1;
    if (3 < iStack_14) {
      return iVar4;
    }
  } while( true );
}
