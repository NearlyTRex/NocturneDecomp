// Name: core_enemy.cpp_CEnemy_FUN_004a9a50
// Address: 004a9a50
// Address Range: [[004a9a50, 004a9afa]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_FUN_004a9a50(CEnemy *this_ptr,CDemonActor *param_2)

#include "nocturne.h"

int __cdecl core_enemy_cpp_CEnemy_FUN_004a9a50(CEnemy *this_ptr,CDemonActor *param_2)

{
  CVector3f *pCVar1;
  int iVar2;
  CBoundingBox3D CStack_5c;
  CVector3f CStack_44;
  CVector3f CStack_38;
  CVector3f local_2c;
  CVector3f CStack_20;
  CVector3f CStack_14;
  
  if (param_2 == (CDemonActor *)0x0) {
    return 0;
  }
  pCVar1 = (*(((this_ptr->base).base.vtable._ue)->_ue).getTargetPoint)(this_ptr,&local_2c);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_38,pCVar1);
  (*((param_2->vtable)._ub)->getBoundingBox)(param_2,&CStack_5c);
  pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(param_2,&CStack_14,&CStack_38);
  pCVar1 = core_box_cpp_CBoundingBox3D_clampPoint_FUN_00421550(&CStack_5c,&CStack_20,pCVar1);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(param_2,&CStack_44,pCVar1);
  iVar2 = core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_00572510
                    (g_CDemonSetPtr,&CStack_38,&CStack_44);
  return (uint)(iVar2 == 0);
}
