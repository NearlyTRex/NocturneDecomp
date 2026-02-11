// Name: core_enemy.cpp_CEnemy_FUN_004a9a50
// Address: 004a9a50
// Address Range: [[004a9a50, 004a9afa]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_FUN_004a9a50(CEnemy *this_ptr)

#include "nocturne.h"

int __cdecl core_enemy_cpp_CEnemy_FUN_004a9a50(CEnemy *this_ptr)

{
  CVector3f *pCVar1;
  int iVar2;
  CDemonActor *in_stack_00000008;
  CBoundingBox3D CStack_4c;
  byte auStack_34 [8];
  byte local_2c [36];
  
  if (in_stack_00000008 == (CDemonActor *)0x0) {
    return 0;
  }
  pCVar1 = (*(((this_ptr->base).base.vtable._ue)->_ue).getTargetPoint)
                     (this_ptr,(CVector3f *)local_2c);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,(CVector3f *)(auStack_34 + 4),pCVar1);
  (*((in_stack_00000008->vtable)._ub)->getBoundingBox)
            (in_stack_00000008,(CBoundingBox3D *)&stack0xffffffac);
  pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                     (in_stack_00000008,(CVector3f *)&stack0xfffffffc,(CVector3f *)(local_2c + 4));
  pCVar1 = core_box_cpp_CBoundingBox3D_clampPoint_FUN_00421550
                     (&CStack_4c,(CVector3f *)(local_2c + 0x1c),pCVar1);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000008,(CVector3f *)auStack_34,pCVar1);
  iVar2 = core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_00572510
                    (g_CDemonSetPtr,(CVector3f *)(local_2c + 4),(CVector3f *)auStack_34);
  return (uint)(iVar2 == 0);
}
