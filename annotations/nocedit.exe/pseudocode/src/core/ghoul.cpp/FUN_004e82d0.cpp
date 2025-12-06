// Name: core_ghoul.cpp_FUN_004e82d0
// Address: 004e82d0
// Address Range: [[004e82d0, 004e8495]]
// Convention: unknown
// Signature: undefined core_ghoul.cpp_FUN_004e82d0()

#include "nocturne.h"

/* Signature: byte actors_enemy_ghoul.cpp_FUN_004e82d0(uint param_1, uint param_2)
    */

uint core_ghoul_cpp_FUN_004e82d0(void)

{
  float fVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  CDeformableModelInstance *this_ptr;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  CDemonActor *in_stack_00000018;
  CVector3f aCStack_80 [2];
  float local_68;
  float local_64;
  float local_60;
  CVector3f local_5c;
  float local_50;
  float local_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  CVector3f CStack_3c;
  float local_28;
  float local_24;
  float local_20;
  float fStack_14;
  float local_10;
  
  this_ptr = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
  fVar1 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    ((CMotionController *)this_ptr,0xb);
  if (fVar1 <= 0.0) {
    return 0;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (this_ptr,&CStack_3c,DAT_02d83300);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (this_ptr,aCStack_80,DAT_02d83308);
  local_28 = pCVar3->x + pCVar2->x;
  local_24 = pCVar3->y + pCVar2->y;
  local_4c = local_28 * 0.5f;
  local_20 = pCVar3->z + pCVar2->z;
  fStack_48 = local_24 * 0.5f;
  fStack_44 = local_20 * 0.5f;
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (this_ptr,(CVector3f *)&stack0xffffff78,DAT_02d83304);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (this_ptr,&CStack_3c,DAT_02d8330c);
  local_68 = pCVar3->x + pCVar2->x;
  local_64 = pCVar3->y + pCVar2->y;
  local_50 = local_68 * 0.5f;
  local_4c = local_64 * 0.5f;
  local_60 = pCVar3->z + pCVar2->z;
  fStack_14 = fStack_44 + local_50;
  fStack_48 = local_60 * 0.5f;
  local_5c.x = fStack_14 * 0.5f;
  local_10 = local_40 + local_4c;
  local_5c.y = local_10 * 0.5f;
  local_5c.z = (CStack_3c.x + fStack_48) * 0.5f;
  pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (in_stack_00000018,(CVector3f *)&stack0xfffffff8,&local_5c);
  if (in_stack_00000008 != pCVar2) {
    in_stack_00000008->x = pCVar2->x;
    in_stack_00000008->y = pCVar2->y;
    in_stack_00000008->z = pCVar2->z;
  }
  return 1;
}
