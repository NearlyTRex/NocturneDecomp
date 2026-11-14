// Name: core_enemy.cpp_CEnemy_canSeeTarget_FUN_004a0980
// Address: 004a0980
// Address Range: [[004a0980, 004a0aa6]]
// Convention: __cdecl
// Signature: int __cdecl core_enemy_cpp_CEnemy_canSeeTarget_FUN_004a0980(CEnemy *this_ptr,CDemonActor *target)

#include "nocturne.h"

int __cdecl core_enemy_cpp_CEnemy_canSeeTarget_FUN_004a0980(CEnemy *this_ptr,CDemonActor *target)

{
  CEnemy *pCVar1;
  CDemonActor *this_ptr_00;
  int iVar2;
  CVector3f *unaff_ESI;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1060 [29];
  CEnemy *apCStackY_fec [972];
  float *pfVar6;
  CDemonSet *this_ptr_01;
  CBoundingBox3D *in_stack_ffffff50;
  CVector3f *start_pos;
  byte *puVar7;
  CVector3f *end_pos;
  uint auStack_a8 [2];
  byte auStack_a0 [24];
  uint auStack_88 [4];
  uint uStack_78;
  float local_74 [7];
  uint uStack_58;
  float afStack_54 [2];
  CVector3f CStack_4c;
  float afStack_40 [3];
  float afStack_30 [5];
  CVector3f CStack_1c;
  float fStack_10;
  float fStack_c;
  
  this_ptr_00 = target;
  pCVar1 = this_ptr;
  bVar5 = 0;
  if (target == (CDemonActor *)0x0) {
    return 0;
  }
  (*(((this_ptr->base).base.vtable._ue)->_ue).getTargetPoint)(this_ptr,unaff_ESI);
  pfVar6 = local_74 + 2;
  local_74[0] = CStack_4c.y;
  local_74[(uint)bVar5 * -2 + 1] = afStack_40[(uint)bVar5 * -2 + -1];
  local_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 2] =
       afStack_40[(uint)bVar5 * -2 + (uint)bVar5 * -2];
  core_actor_cpp_FUN_00408b40(pCVar1,pfVar6);
  afStack_30[3] = (float)uStack_78;
  afStack_30[(uint)bVar5 * -2 + 4] = local_74[(uint)bVar5 * -2];
  *(float *)((int)&CStack_1c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       local_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,in_stack_ffffff50);
  puVar3 = auStack_88;
  puVar4 = auStack_a8;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  core_actor_cpp_FUN_00408bb0(this_ptr_00,&CStack_1c);
  puVar3 = &uStack_58;
  uStack_58 = afStack_30[2];
  afStack_54[(uint)bVar5 * -2] = afStack_30[(uint)bVar5 * -2 + 3];
  afStack_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  core_box_cpp_FUN_00421af0(auStack_a0,puVar3);
  puVar7 = &stack0xffffffcc;
  afStack_30[(uint)bVar5 * -2] = *(float *)(&stack0x00000000 + (uint)bVar5 * -8);
  afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       (float)(&this_ptr)[(uint)bVar5 * -2 + (uint)bVar5 * -2];
  core_actor_cpp_FUN_00408b40(this_ptr_00,puVar7);
  end_pos = &CStack_4c;
  start_pos = &CStack_1c;
  CStack_4c.x = fStack_10;
  afStack_40[(uint)bVar5 * -2 + -2] = (&fStack_c)[(uint)bVar5 * -2];
  this_ptr_01 = g_CDemonSetPtr;
  afStack_40[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -1] =
       *(float *)(&stack0xfffffff8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  iVar2 = core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_005572e0(this_ptr_01,start_pos,end_pos);
  return (uint)(iVar2 == 0);
}
