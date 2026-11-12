// Name: core_ammo.cpp_CAmmo_process_FUN_0040ded0
// Address: 0040ded0
// Address Range: [[0040ded0, 0040e0ea]]
// Convention: __cdecl
// Signature: void __cdecl core_ammo_cpp_CAmmo_process_FUN_0040ded0(CAmmo *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_ammo_cpp_CAmmo_process_FUN_0040ded0(CAmmo *this_ptr,float delta_time)

{
  CDemonActor_vtable *pCVar1;
  float fVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_18a0 [1480];
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float *pfVar10;
  CBoundingBox3D *in_stack_fffffeac;
  uint *puVar11;
  uint uVar12;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  uint uStack_c4;
  uint uStack_b4;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  uint uStack_98;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar5 = 0;
  fVar2 = this_ptr->check_timer - delta_time;
  this_ptr->check_timer = fVar2;
  if (0.0 < fVar2) {
    return;
  }
  pCVar1 = (this_ptr->base).vtable._ub;
  this_ptr->check_timer = 0.1;
  (*pCVar1->getBoundingBox)(&this_ptr->base,in_stack_fffffeac);
  puVar4 = (uint *)&stack0xffffff24;
  puVar11 = &stack0xffffff0c;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar11 = *puVar4;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    puVar11 = puVar11 + (uint)bVar5 * -2 + 1;
  }
  fStack_a4 = fStack_f4 + fStack_e8;
  fStack_a0 = fStack_f0 + fStack_e4;
  fStack_9c = fStack_ec + fStack_e0;
  fStack_50 = fStack_f4 + fStack_e8;
  *(uint *)((int)&stack0xffffffb4 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffff60 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffb8 + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4) =
       *(uint *)((int)&stack0xffffff64 + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4);
  fStack_8c = fStack_50 * _DAT_005cb0da;
  fStack_88 = fStack_4c * _DAT_005cb0da;
  fStack_84 = fStack_48 * _DAT_005cb0da;
  fStack_1c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  fStack_14 = fStack_1c;
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  fStack_2c = fStack_8c;
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffff78 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffdc + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4) =
       *(uint *)((int)&stack0xffffff7c + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4);
  fStack_20 = fVar2;
  fStack_14 = fVar2;
  fStack_78 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  fStack_80 = fStack_1c;
  fStack_7c = fStack_20;
  fStack_18 = fStack_78;
  fStack_14 = fStack_78;
  core_xform_cpp_FUN_00594380();
  uStack_b4 = uStack_c4;
  *(uint *)(&stack0xffffff50 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffff40 + (uint)bVar5 * -8);
  *(uint *)(&stack0xffffff54 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffff44 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  *(uint *)
   ((int)(&stack0xffffff54 + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xffffff44 + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4)
  ;
  core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10();
  uStack_74 = 0;
  puVar4 = (uint *)&stack0xfffffedc;
  puVar11 = (uint *)&stack0xfffffeac;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar11 = *puVar4;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    puVar11 = puVar11 + (uint)bVar5 * -2 + 1;
  }
  uStack_70 = 0;
  uStack_6c = 0x3e800000;
  core_xform_cpp_FUN_00591530();
  puVar4 = &stack0xffffff68;
  fStack_38 = fStack_44;
  *(uint *)((int)&stack0xffffffcc + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffffc0 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffd0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4) =
       *(uint *)(&stack0xffffffc4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  uVar12 = 0;
  puVar11 = (uint *)0x0;
  fStack_5c = fStack_38 + fStack_2c;
  fStack_58 = fStack_34 + fStack_28;
  fStack_54 = fStack_30 + fStack_24;
  fStack_68 = fStack_38 + fStack_2c;
  *(uint *)((int)&stack0xffffff9c + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffa8 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffa0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4) =
       *(uint *)((int)&stack0xffffffac + ((uint)bVar5 * -2 + (uint)bVar5 * -2) * 4);
  pfVar10 = &stack0xffffff98;
  uVar9 = 0x3f800000;
  uVar8 = 0x3f800000;
  uVar7 = 0x3f800000;
  uVar6 = 0;
  uStack_98 = _DAT_0265370c;
  *(uint *)(&stack0xffffff6c + (uint)bVar5 * -8) =
       *(uint *)(&DAT_02653710 + (uint)bVar5 * -8);
  *(uint *)(&stack0xffffff70 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&DAT_02653714 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  fStack_68 = fStack_68 + (this_ptr->base).location.position.x;
  fStack_64 = fStack_64 + (this_ptr->base).location.position.y;
  fStack_60 = fStack_60 + (this_ptr->base).location.position.z;
  core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
            (g_CSimpleParticleSystemPtr,0x3f000000,0x3f800000,0,0x3e4ccccd,uVar6,uVar7,uVar8,uVar9,
             pfVar10,puVar4,puVar11,uVar12);
  return;
}
