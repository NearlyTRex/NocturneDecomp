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
  CBoundingBox3D CStack_54;
  byte auStack_3c [12];
  CVector3f aCStack_30 [2];
  CVector3f CStack_18;
  
  if (in_stack_00000008 == (CDemonActor *)0x0) {
    return 0;
  }
  pCVar1 = (CVector3f *)(*(((this_ptr->base).base.vtable._ue)->_ue).enemyfunc1)();
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,(CVector3f *)(auStack_3c + 4),pCVar1);
  (*((in_stack_00000008->vtable)._ub)->getBoundingBox)
            (in_stack_00000008,(CBoundingBox3D *)&stack0xffffffa4);
  pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                     (in_stack_00000008,(CVector3f *)&stack0xfffffff4,aCStack_30);
  pCVar1 = core_box_cpp_CBoundingBox3D_clampPoint_FUN_00421550(&CStack_54,&CStack_18,pCVar1);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000008,(CVector3f *)auStack_3c,pCVar1);
  iVar2 = core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_00572510
                    (g_CDemonSetPtr,aCStack_30,(CVector3f *)auStack_3c);
  return (uint)(iVar2 == 0);
}
