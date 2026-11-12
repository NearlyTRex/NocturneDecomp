// Name: core_health.cpp_CHealthItem_process_FUN_004cdb60
// Address: 004cdb60
// Address Range: [[004cdb60, 004cdd9c]]
// Convention: __cdecl
// Signature: void __cdecl core_health_cpp_CHealthItem_process_FUN_004cdb60(CHealthItem *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_health_cpp_CHealthItem_process_FUN_004cdb60(CHealthItem *this_ptr,float delta_time)

{
  CDemonActor_vtable *pCVar1;
  float fVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_18ac [1480];
  CBoundingBox3D *in_stack_fffffea0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  uint uStack_d0;
  uint uStack_c0;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
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
  
  bVar6 = 0;
  core_bwspart_cpp_CSimpleParticleSystem_process_FUN_005a8180
            ((this_ptr->base).particle_systems,delta_time);
  fVar2 = this_ptr->check_timer - delta_time;
  this_ptr->check_timer = fVar2;
  if (0.0 < fVar2) {
    return;
  }
  pCVar1 = (this_ptr->base).vtable._ub;
  this_ptr->check_timer = 0.2;
  (*pCVar1->getBoundingBox)(&this_ptr->base,in_stack_fffffea0);
  puVar4 = (uint *)&stack0xffffff00;
  puVar5 = &stack0xffffff18;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  fStack_44 = fStack_e8 + fStack_dc;
  fStack_40 = fStack_e4 + fStack_d8;
  fStack_3c = fStack_e0 + fStack_d4;
  fStack_a4 = fStack_e8 + fStack_dc;
  *(uint *)((int)&stack0xffffff60 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffc0 + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffff64 + ((uint)bVar6 * -2 + (uint)bVar6 * -2) * 4) =
       *(uint *)((int)&stack0xffffffc4 + ((uint)bVar6 * -2 + (uint)bVar6 * -2) * 4);
  fStack_2c = fStack_a4 * _DAT_005d99bc;
  fStack_28 = fStack_a0 * _DAT_005d99bc;
  fStack_24 = fStack_9c * _DAT_005d99bc;
  fStack_1c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  fStack_14 = fStack_1c;
  fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  fStack_14 = fStack_18;
  fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  fStack_50 = fStack_1c;
  fStack_20 = fStack_14;
  fStack_4c = fStack_18;
  fStack_48 = fStack_14;
  fStack_80 = fStack_2c;
  *(uint *)((int)&stack0xffffff84 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffff88 + ((uint)bVar6 * -2 + (uint)bVar6 * -2) * 4) =
       *(uint *)((int)&stack0xffffffdc + ((uint)bVar6 * -2 + (uint)bVar6 * -2) * 4);
  core_xform_cpp_FUN_00594380();
  uStack_d0 = uStack_c0;
  *(uint *)(&stack0xffffff34 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffff44 + (uint)bVar6 * -8);
  *(uint *)(&stack0xffffff38 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffff48 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  *(uint *)
   ((int)(&stack0xffffff38 + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xffffff48 + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4)
  ;
  core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10();
  uStack_68 = 0;
  puVar4 = (uint *)&stack0xfffffea0;
  puVar5 = (uint *)&stack0xfffffed0;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  uStack_64 = 0;
  uStack_60 = 0x3f000000;
  core_xform_cpp_FUN_00591530();
  fStack_8c = fStack_98;
  *(uint *)((int)&stack0xffffff78 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffff6c + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffff7c + ((uint)bVar6 * -2 + (uint)bVar6 * -2) * 4) =
       *(uint *)(&stack0xffffff70 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  fStack_38 = fStack_8c + fStack_80;
  fStack_34 = fStack_88 + fStack_7c;
  fStack_30 = fStack_84 + fStack_78;
  fStack_74 = fStack_8c + fStack_80;
  *(uint *)((int)&stack0xffffff90 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffcc + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffff94 + ((uint)bVar6 * -2 + (uint)bVar6 * -2) * 4) =
       *(uint *)((int)&stack0xffffffd0 + ((uint)bVar6 * -2 + (uint)bVar6 * -2) * 4);
  uStack_5c = _DAT_0265370c;
  *(uint *)(&stack0xffffffa8 + (uint)bVar6 * -8) =
       *(uint *)(&DAT_02653710 + (uint)bVar6 * -8);
  *(uint *)(&stack0xffffffac + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&DAT_02653714 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  uStack_ac = 0x3f800000;
  uStack_b0 = 0;
  uStack_a8 = 0;
  fStack_74 = fStack_74 + (this_ptr->base).location.position.x;
  fStack_70 = fStack_70 + (this_ptr->base).location.position.y;
  fStack_6c = fStack_6c + (this_ptr->base).location.position.z;
  core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
            (g_CSimpleParticleSystemPtr,0x3f800000,0x3f800000,0,0x3ecccccd,0,0x3f800000,0,0,
             &stack0xffffff8c,&stack0xffffffa4,&stack0xffffff50,0);
  return;
}
