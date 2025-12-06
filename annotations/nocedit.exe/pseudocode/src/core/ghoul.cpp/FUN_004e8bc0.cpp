// Name: core_ghoul.cpp_FUN_004e8bc0
// Address: 004e8bc0
// Address Range: [[004e8bc0, 004e8db6]]
// Convention: unknown
// Signature: undefined core_ghoul.cpp_FUN_004e8bc0()

#include "nocturne.h"

/* Signature: byte actors_enemy_ghoul.cpp_FUN_004e8bc0(uint param_1, uint param_2)
    */

int core_ghoul_cpp_FUN_004e8bc0(void)

{
  CDeformableModelInstance *this_ptr;
  CVector3f *pCVar1;
  float *pfVar2;
  CVector3f *pCVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
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
            ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_30,DAT_02d83320);
  if (&local_30.y != in_stack_00000008) {
    *in_stack_00000008 = local_30.y;
    in_stack_00000008[1] = local_30.z;
    in_stack_00000008[2] = local_24;
  }
  iVar4 = 1;
  iStack_14 = 0;
  this_ptr = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
  do {
    switch((iStack_14 + *(int *)(in_stack_00000004 + 0x6c)) % 4) {
    case 0:
      if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbee0) * 4) != 0) {
        pCVar1 = &CStack_20;
        bone_index = DAT_02d83310;
LAB_004e8c4c:
        pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                           (this_ptr,pCVar1,bone_index);
        if ((CVector3f *)local_40 != pCVar1) {
          local_40._0_4_ = pCVar1->x;
          local_40._4_4_ = pCVar1->y;
          local_40._8_4_ = pCVar1->z;
        }
        local_40._4_4_ =
             local_24 * (float)0.29999999999999999 + (float)local_40._4_4_ * (float)0.69999999999999996;
        local_40._0_4_ =
             local_30.z * (float)0.5 + (float)local_40._0_4_ * (float)0.5;
        pfVar2 = in_stack_00000008 + iVar4 * 3;
        if (pfVar2 != (float *)local_40) {
          *pfVar2 = (float)local_40._0_4_;
          pfVar2[1] = (float)local_40._4_4_;
          pfVar2[2] = (float)local_40._8_4_;
        }
LAB_004e8cce:
        iVar4 = iVar4 + 1;
      }
      break;
    case 1:
      if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbee8) * 4) != 0) {
        pCVar1 = &CStack_50;
        bone_index = DAT_02d83314;
        goto LAB_004e8c4c;
      }
      break;
    case 2:
      if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbf08) * 4) != 0) {
        pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                           (this_ptr,(CVector3f *)(local_40 + 8),DAT_02d832fc);
        pCVar3 = (CVector3f *)(in_stack_00000008 + iVar4 * 3);
        if (pCVar3 != pCVar1) {
          pCVar3->x = pCVar1->x;
          pCVar3->y = pCVar1->y;
          pCVar3->z = pCVar1->z;
        }
        goto LAB_004e8cce;
      }
      break;
    case 3:
      if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbf04) * 4) != 0) {
        pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                           (this_ptr,&CStack_5c,DAT_02d83324);
        pCVar3 = (CVector3f *)(in_stack_00000008 + iVar4 * 3);
        if (pCVar3 != pCVar1) {
          pCVar3->x = pCVar1->x;
          pCVar3->y = pCVar1->y;
          pCVar3->z = pCVar1->z;
        }
        goto LAB_004e8cce;
      }
    }
    iStack_14 = iStack_14 + 1;
    if (3 < iStack_14) {
      return iVar4;
    }
  } while( true );
}
