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
  CVector3f *pCVar2;
  int iVar3;
  CVector3f *in_stack_00000008;
  int bone_index;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  CVector3f local_44;
  CVector3f CStack_38;
  CVector3f local_2c;
  CVector3f CStack_20;
  int iStack_14;
  
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
            (&(this_ptr->base_enemy).base_character.model,&local_2c,
             *(int *)(this_ptr->field4_0xbf48 + 0x28));
  if (&local_2c != in_stack_00000008) {
    in_stack_00000008->x = local_2c.x;
    in_stack_00000008->y = local_2c.y;
    in_stack_00000008->z = local_2c.z;
  }
  iVar3 = 1;
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
        if (&local_44 != pCVar1) {
          local_44.x = pCVar1->x;
          local_44.y = pCVar1->y;
          local_44.z = pCVar1->z;
        }
        local_44.y = local_2c.y * (float)_DAT_00658a35 + local_44.y * (float)_DAT_00658a2d;
        local_44.x = local_2c.x * (float)_DAT_00658a25 + local_44.x * (float)_DAT_00658a25;
        pCVar1 = in_stack_00000008 + iVar3;
        if (pCVar1 != &local_44) {
          pCVar1->x = local_44.x;
          pCVar1->y = local_44.y;
          pCVar1->z = local_44.z;
        }
LAB_005fc82e:
        iVar3 = iVar3 + 1;
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
                           (this_ptr_00,&CStack_38,*(int *)(this_ptr->field4_0xbf48 + 4));
        pCVar2 = in_stack_00000008 + iVar3;
        if (pCVar2 != pCVar1) {
          pCVar2->x = pCVar1->x;
          pCVar2->y = pCVar1->y;
          pCVar2->z = pCVar1->z;
        }
        goto LAB_005fc82e;
      }
      break;
    case 3:
      if ((this_ptr->base_enemy).base_character.model.part_visibility_flags
          [*(int *)(this_ptr->field4_0xbf48 + 0x44)] != 0) {
        pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                           (this_ptr_00,&CStack_5c,*(int *)(this_ptr->field4_0xbf48 + 0x2c));
        pCVar2 = in_stack_00000008 + iVar3;
        if (pCVar2 != pCVar1) {
          pCVar2->x = pCVar1->x;
          pCVar2->y = pCVar1->y;
          pCVar2->z = pCVar1->z;
        }
        goto LAB_005fc82e;
      }
    }
    iStack_14 = iStack_14 + 1;
    if (3 < iStack_14) {
      return iVar3;
    }
  } while( true );
}
