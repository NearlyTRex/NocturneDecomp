// Name: core_gargoyle.cpp_CGargoyle_FUN_004e5930
// Address: 004e5930
// Address Range: [[004e5930, 004e5ace]]
// Convention: unknown
// Signature: undefined core_gargoyle.cpp_CGargoyle_FUN_004e5930()

#include "nocturne.h"

/* Signature: byte actors_enemy_gargoyle.cpp_CGargoyle_FUN_004e5930(CGargoyle* param_1,
   uint param_2) */

int core_gargoyle_cpp_CGargoyle_FUN_004e5930(void)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  iVar3 = 1;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_4c,DAT_02d83200
                     );
  if (in_stack_00000008 != pCVar1) {
    in_stack_00000008->x = pCVar1->x;
    in_stack_00000008->y = pCVar1->y;
    in_stack_00000008->z = pCVar1->z;
  }
  if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbebc) * 4) != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_40,
                        DAT_02d83214);
    if (in_stack_00000008 + 1 != pCVar1) {
      in_stack_00000008[1].x = pCVar1->x;
      in_stack_00000008[1].y = pCVar1->y;
      in_stack_00000008[1].z = pCVar1->z;
    }
    iVar3 = 2;
  }
  if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbec4) * 4) != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_34,
                        DAT_02d83218);
    pCVar2 = in_stack_00000008 + iVar3;
    if (pCVar2 != pCVar1) {
      pCVar2->x = pCVar1->x;
      pCVar2->y = pCVar1->y;
      pCVar2->z = pCVar1->z;
    }
    iVar3 = iVar3 + 1;
  }
  if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbedc) * 4) != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_1c,
                        DAT_02d83224);
    pCVar2 = in_stack_00000008 + iVar3;
    if (pCVar2 != pCVar1) {
      pCVar2->x = pCVar1->x;
      pCVar2->y = pCVar1->y;
      pCVar2->z = pCVar1->z;
    }
    iVar3 = iVar3 + 1;
  }
  if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbee0) * 4) == 0) {
    return iVar3;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_28,DAT_02d8322c
                     );
  in_stack_00000008 = in_stack_00000008 + iVar3;
  if (in_stack_00000008 != pCVar1) {
    in_stack_00000008->x = pCVar1->x;
    in_stack_00000008->y = pCVar1->y;
    in_stack_00000008->z = pCVar1->z;
  }
  return iVar3 + 1;
}
