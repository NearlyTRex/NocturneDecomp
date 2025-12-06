// Name: core_imp.cpp_FUN_004faf40
// Address: 004faf40
// Address Range: [[004faf40, 004fb0e9]]
// Convention: unknown
// Signature: undefined core_imp.cpp_FUN_004faf40()

#include "nocturne.h"

/* Signature: byte actors_enemy_imp.cpp_FUN_004faf40(uint param_1, uint param_2)
    */

int core_imp_cpp_FUN_004faf40(void)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  CVector3f CStack_44;
  byte auStack_38 [24];
  CVector3f CStack_20;
  
  iVar3 = 0;
  if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbef0) * 4) != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),
                        (CVector3f *)(auStack_38 + 8),DAT_02db89f4);
    if (in_stack_00000008 != pCVar1) {
      in_stack_00000008->x = pCVar1->x;
      in_stack_00000008->y = pCVar1->y;
      in_stack_00000008->z = pCVar1->z;
    }
    iVar3 = 1;
  }
  if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbec8) * 4) != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),
                        (CVector3f *)auStack_38,DAT_02db8a08);
    pCVar2 = in_stack_00000008 + iVar3;
    if (pCVar2 != pCVar1) {
      pCVar2->x = pCVar1->x;
      pCVar2->y = pCVar1->y;
      pCVar2->z = pCVar1->z;
    }
    iVar3 = iVar3 + 1;
  }
  if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbed0) * 4) != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),
                        (CVector3f *)&stack0xffffffec,DAT_02db8a0c);
    pCVar2 = in_stack_00000008 + iVar3;
    if (pCVar2 != pCVar1) {
      pCVar2->x = pCVar1->x;
      pCVar2->y = pCVar1->y;
      pCVar2->z = pCVar1->z;
    }
    iVar3 = iVar3 + 1;
  }
  if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbee8) * 4) != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&CStack_44,
                        DAT_02db8a18);
    pCVar2 = in_stack_00000008 + iVar3;
    if (pCVar2 != pCVar1) {
      pCVar2->x = pCVar1->x;
      pCVar2->y = pCVar1->y;
      pCVar2->z = pCVar1->z;
    }
    iVar3 = iVar3 + 1;
  }
  if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbeec) * 4) == 0) {
    return iVar3;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&CStack_20,
                      DAT_02db8a20);
  in_stack_00000008 = in_stack_00000008 + iVar3;
  if (in_stack_00000008 != pCVar1) {
    in_stack_00000008->x = pCVar1->x;
    in_stack_00000008->y = pCVar1->y;
    in_stack_00000008->z = pCVar1->z;
  }
  return iVar3 + 1;
}
