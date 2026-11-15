// Name: core_charactr.cpp_CCharacter_explode_FUN_0042ffe0
// Address: 0042ffe0
// Address Range: [[0042ffe0, 004300da]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_explode_FUN_0042ffe0(CCharacter *this_ptr,CVector3f *impact_point,float impact_force)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_explode_FUN_0042ffe0(CCharacter *this_ptr,CVector3f *impact_point,float impact_force)

{
  int iVar1;
  float unaff_ESI;
  uint *puVar2;
  float unaff_EDI;
  uint *puVar3;
  byte bVar4;
  CVector3f *in_stack_00000010;
  float in_stack_00000014;
  float afStackY_1034 [1000];
  CFireEffect *this_ptr_00;
  CVector3f *pCVar5;
  float scale;
  float gore_multiplier;
  CBoundingBox3D *in_stack_ffffff7c;
  float radius;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  CVector3f CStack_34;
  float fStack_28;
  float afStack_24 [4];
  float fStack_14;
  float fStack_10;
  
  bVar4 = 0;
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_ffffff7c);
  puVar2 = (uint *)&stack0xffffff84;
  puVar3 = (uint *)&stack0xffffff94;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  fStack_28 = fStack_64 + fStack_58;
  afStack_24[0] = fStack_60 + fStack_54;
  afStack_24[1] = fStack_5c + fStack_50;
  fStack_10 = fStack_64 + fStack_58;
  *(float *)(&stack0xfffffff4 + (uint)bVar4 * -8) = afStack_24[(uint)bVar4 * -2];
  *(float *)(&stack0xfffffff8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       afStack_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  pCVar5 = &CStack_4c;
  afStack_24[2] = fStack_10 * _DAT_005b839a;
  afStack_24[3] = unaff_EDI * _DAT_005b839a;
  fStack_14 = unaff_ESI * _DAT_005b839a;
  CStack_4c.x = fStack_10 * _DAT_005b839a;
  *(float *)((int)&CStack_4c + (uint)bVar4 * -8 + 4) = afStack_24[(uint)bVar4 * -2 + 3];
  *(float *)((int)&CStack_4c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80(&this_ptr->base,pCVar5,&CStack_34);
  iVar1 = 0;
  radius = 4.0;
  gore_multiplier = 1500.0;
  pCVar5 = &CStack_40;
  scale = 2.0;
  CStack_40.x = CStack_34.x;
  *(uint *)((int)&CStack_40 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_34 + (uint)bVar4 * -8 + 4);
  this_ptr_00 = 0x01C73654;
  *(uint *)((int)&CStack_40 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&CStack_34 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  core_fire_cpp_CFireEffect_createExplosion_FUN_004a36e0
            (this_ptr_00,pCVar5,scale,gore_multiplier,radius,iVar1);
  core_charactr_cpp_CCharacter_dismember_FUN_004300e0
            (this_ptr,in_stack_00000010,in_stack_00000014,1);
  return;
}
