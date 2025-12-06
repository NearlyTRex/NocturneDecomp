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
  CDemonActor *this_ptr;
  CVector3f *pCVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  CDemonActor *in_stack_00000008;
  float fStack_48;
  CVector3f local_2c;
  byte auStack_18 [16];
  
  this_ptr = in_stack_00000008;
  if (in_stack_00000008 == (CDemonActor *)0x0) {
    return false;
  }
  pCVar1 = (CVector3f *)(*in_stack_00000004->vtable[1].shouldIgnoreForTargeting)(in_stack_00000004);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000004,&local_2c,pCVar1);
  (*this_ptr->vtable->getBoundingBox)(this_ptr,(CBoundingBox3D *)&stack0xffffffb4);
  fStack_48 = 6.851314e-39;
  pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                     (this_ptr,(CVector3f *)&stack0x00000010,(CVector3f *)(auStack_18 + 4));
  pCVar1 = core_box_cpp_CBoundingBox3D_clampPoint_FUN_00421550
                     ((CBoundingBox3D *)&stack0xffffffcc,(CVector3f *)&stack0x00000008,pCVar1);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(this_ptr,(CVector3f *)auStack_18,pCVar1)
  ;
  iVar2 = core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_00572510
                    (g_CDemonSetPtr,(CVector3f *)&stack0xfffffff8,(CVector3f *)(auStack_18 + 4));
  return iVar2 == 0;
}
