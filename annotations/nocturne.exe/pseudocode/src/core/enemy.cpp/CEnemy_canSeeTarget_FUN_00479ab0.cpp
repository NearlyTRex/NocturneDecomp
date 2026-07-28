// Name: core_enemy.cpp_CEnemy_canSeeTarget_FUN_00479ab0
// Address: 00479ab0
// Address Range: [[00479ab0, 00479b5a]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_canSeeTarget_FUN_00479ab0(CEnemy *this_ptr,CDemonActor *target)

#include "nocturne.h"

int __cdecl core_enemy_cpp_CEnemy_canSeeTarget_FUN_00479ab0(CEnemy *this_ptr,CDemonActor *target)

{
  CVector3f *pCVar1;
  int iVar2;
  CBoundingBox3D CStack_5c;
  CVector3f CStack_44;
  CVector3f aCStack_38 [2];
  CVector3f CStack_20;
  CVector3f CStack_14;
  
  if (target == (CDemonActor *)0x0) {
    return 0;
  }
  pCVar1 = (CVector3f *)(*(((this_ptr->base).base.vtable._uc)->_uc).hasDoorTarget)(&this_ptr->base);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            ((CDemonActor *)this_ptr,aCStack_38,pCVar1);
  (*((target->vtable)._ub)->getBoundingBox)(target,&CStack_5c);
  pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(target,&CStack_14,aCStack_38);
  pCVar1 = core_box_cpp_CBoundingBox3D_clampPoint_FUN_0041e160(&CStack_5c,&CStack_20,pCVar1);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(target,&CStack_44,pCVar1);
  iVar2 = core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_0050fae0
                    (0x01E57284,aCStack_38,&CStack_44);
  return (uint)(iVar2 == 0);
}
