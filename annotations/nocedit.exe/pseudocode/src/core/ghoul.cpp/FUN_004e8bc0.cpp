// Name: core_ghoul.cpp_FUN_004e8bc0
// Address: 004e8bc0
// Address Range: [[004e8bc0, 004e8db6]]
// Convention: unknown
// Signature: int core_ghoul_cpp_FUN_004e8bc0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_ghoul.cpp_FUN_004e8bc0(uint param_1, uint param_2)
    */

int core_ghoul_cpp_FUN_004e8bc0(void)

{
  CDeformableModelInstance *this_ptr;
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  int bone_index;
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  int local_18;
  
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
            ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_30,INT_02d83320);
  if (&local_30 != in_stack_00000008) {
    in_stack_00000008->x = local_30.x;
    in_stack_00000008->y = local_30.y;
    in_stack_00000008->z = local_30.z;
  }
  iVar3 = 1;
  local_18 = 0;
  this_ptr = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
  do {
    switch((local_18 + *(int *)(in_stack_00000004 + 0x6c)) % 4) {
    case 0:
      if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbee0) * 4) != 0) {
        pCVar1 = &local_24;
        bone_index = INT_02d83310;
LAB_004e8c4c:
        pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                           (this_ptr,pCVar1,bone_index);
        if (&local_48 != pCVar1) {
          local_48.x = pCVar1->x;
          local_48.y = pCVar1->y;
          local_48.z = pCVar1->z;
        }
        local_48.y = local_30.y * (float)0.29999999999999999 + local_48.y * (float)0.69999999999999996;
        local_48.x = local_30.x * (float)0.5 + local_48.x * (float)0.5;
        pCVar1 = in_stack_00000008 + iVar3;
        if (pCVar1 != &local_48) {
          pCVar1->x = local_48.x;
          pCVar1->y = local_48.y;
          pCVar1->z = local_48.z;
        }
LAB_004e8cce:
        iVar3 = iVar3 + 1;
      }
      break;
    case 1:
      if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbee8) * 4) != 0) {
        pCVar1 = &local_54;
        bone_index = INT_02d83314;
        goto LAB_004e8c4c;
      }
      break;
    case 2:
      if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbf08) * 4) != 0) {
        pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                           (this_ptr,&local_3c,INT_02d832fc);
        pCVar2 = in_stack_00000008 + iVar3;
        if (pCVar2 != pCVar1) {
          pCVar2->x = pCVar1->x;
          pCVar2->y = pCVar1->y;
          pCVar2->z = pCVar1->z;
        }
        goto LAB_004e8cce;
      }
      break;
    case 3:
      if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbf04) * 4) != 0) {
        pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                           (this_ptr,&local_60,INT_02d83324);
        pCVar2 = in_stack_00000008 + iVar3;
        if (pCVar2 != pCVar1) {
          pCVar2->x = pCVar1->x;
          pCVar2->y = pCVar1->y;
          pCVar2->z = pCVar1->z;
        }
        goto LAB_004e8cce;
      }
    }
    local_18 = local_18 + 1;
    if (3 < local_18) {
      return iVar3;
    }
  } while( true );
}
