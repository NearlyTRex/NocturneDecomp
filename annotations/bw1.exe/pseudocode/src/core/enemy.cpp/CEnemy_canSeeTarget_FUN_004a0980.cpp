// Name: core_enemy.cpp_CEnemy_canSeeTarget_FUN_004a0980
// Address: 004a0980
// Address Range: [[004a0980, 004a0aa6]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_canSeeTarget_FUN_004a0980(CEnemy *this_ptr,CDemonActor *target)

#include "nocturne.h"

int __cdecl core_enemy_cpp_CEnemy_canSeeTarget_FUN_004a0980(CEnemy *this_ptr,CDemonActor *target)

{
  CEnemy *this_ptr_00;
  CDemonActor *this_ptr_01;
  int iVar1;
  CVector3f *unaff_ESI;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1060 [29];
  CEnemy *apCStackY_fec [972];
  CVector3f *pCVar5;
  CDemonSet *this_ptr_02;
  CBoundingBox3D *in_stack_ffffff50;
  CVector3f *start_pos;
  uint auStack_a8 [2];
  CBoundingBox3D CStack_a0;
  uint auStack_88 [4];
  CVector3f CStack_78;
  CVector3f CStack_6c;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  uint auStack_40 [3];
  float afStack_30 [2];
  CVector3f CStack_28;
  CVector3f CStack_1c;
  float fStack_10;
  uint uStack_c;
  
  this_ptr_01 = target;
  this_ptr_00 = this_ptr;
  bVar4 = 0;
  if (target == (CDemonActor *)0x0) {
    return 0;
  }
  (*(((this_ptr->base).base.vtable._ue)->_ue).getTargetPoint)(this_ptr,unaff_ESI);
  pCVar5 = &CStack_6c;
  CStack_78.y = CStack_4c.y;
  *(uint *)((int)&CStack_78 + (uint)bVar4 * -8 + 8) = auStack_40[(uint)bVar4 * -2 + -1];
  *(uint *)((int)&CStack_6c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       auStack_40[(uint)bVar4 * -2 + (uint)bVar4 * -2];
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
            ((CDemonActor *)this_ptr_00,pCVar5,&CStack_78);
  CStack_28.y = CStack_78.x;
  *(uint *)((int)&CStack_28 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&CStack_78 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&CStack_1c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&CStack_78 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  (*((this_ptr_01->vtable)._ub)->getBoundingBox)(this_ptr_01,in_stack_ffffff50);
  puVar2 = auStack_88;
  puVar3 = auStack_a8;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0(this_ptr_01,&CStack_1c,&CStack_28);
  pCVar5 = &CStack_58;
  CStack_58.x = CStack_28.x;
  *(uint *)((int)&CStack_58 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_28 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&CStack_58 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&CStack_28 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_box_cpp_CBoundingBox3D_clampPoint_FUN_00421af0
            (&CStack_a0,pCVar5,(CVector3f *)&stack0xfffffffc);
  pCVar5 = (CVector3f *)&stack0xffffffcc;
  afStack_30[(uint)bVar4 * -2] = *(float *)(&stack0x00000000 + (uint)bVar4 * -8);
  afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       (float)(&this_ptr)[(uint)bVar4 * -2 + (uint)bVar4 * -2];
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
            (this_ptr_01,pCVar5,(CVector3f *)&fStack_10);
  pCVar5 = &CStack_4c;
  start_pos = &CStack_1c;
  CStack_4c.x = fStack_10;
  auStack_40[(uint)bVar4 * -2 + -2] = (&uStack_c)[(uint)bVar4 * -2];
  this_ptr_02 = g_CDemonSetPtr;
  auStack_40[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -1] =
       *(uint *)(&stack0xfffffff8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  iVar1 = core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_005572e0(this_ptr_02,start_pos,pCVar5);
  return (uint)(iVar1 == 0);
}
