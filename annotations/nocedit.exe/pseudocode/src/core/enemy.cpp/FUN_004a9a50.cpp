// Name: core_enemy.cpp_FUN_004a9a50
// Address: 004a9a50
// Address Range: [[004a9a50, 004a9afa]]
// Convention: unknown
// Signature: undefined core_enemy.cpp_FUN_004a9a50()

#include "nocturne.h"

/* Signature: byte actors_enemy_enemy.cpp_FUN_004a9a50(uint param_1, uint param_2)
    */

bool core_enemy_cpp_FUN_004a9a50(void)

{
  CVector3f *pCVar1;
  int iVar2;
  CDemonActor *in_stack_00000004;
  CDemonActor *in_stack_00000008;
  CBoundingBox3D CStack_50;
  byte auStack_38 [12];
  CVector3f local_2c [2];
  CVector3f CStack_14;
  
  if (in_stack_00000008 == (CDemonActor *)0x0) {
    return false;
  }
  pCVar1 = (CVector3f *)(*in_stack_00000004->vtable[1].shouldIgnoreForTargeting)(in_stack_00000004);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)(auStack_38 + 4),pCVar1);
  (*in_stack_00000008->vtable->getBoundingBox)(in_stack_00000008,(CBoundingBox3D *)&stack0xffffffa8)
  ;
  pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                     (in_stack_00000008,(CVector3f *)&stack0xfffffff8,local_2c);
  pCVar1 = core_box_cpp_CBoundingBox3D_clampPoint_FUN_00421550(&CStack_50,&CStack_14,pCVar1);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000008,(CVector3f *)auStack_38,pCVar1);
  iVar2 = core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_00572510
                    (g_CDemonSetPtr,local_2c,(CVector3f *)auStack_38);
  return iVar2 == 0;
}
