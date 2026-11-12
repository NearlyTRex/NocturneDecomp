// Name: core_necklace.cpp_CNecklace_process_FUN_005adad0
// Address: 005adad0
// Address Range: [[005adad0, 005add25]]
// Convention: __cdecl
// Signature: void __cdecl core_necklace_cpp_CNecklace_process_FUN_005adad0(CNecklace *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_necklace_cpp_CNecklace_process_FUN_005adad0(CNecklace *this_ptr,float delta_time)

{
  CDemonActor_vtable *pCVar1;
  float fVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_18b0 [1482];
  CBoundingBox3D *in_stack_fffffea4;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  uint uStack_d4;
  uint uStack_c4;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  uint uStack_90;
  uint uStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  uint uStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
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
  core_boxactor_cpp_CBoxActor_process_FUN_0041c090(&this_ptr->base,delta_time);
  fVar2 = *(float *)&(this_ptr->base).base.field_0x2a8 - delta_time;
  *(float *)&(this_ptr->base).base.field_0x2a8 = fVar2;
  if (0.0 < fVar2) {
    return;
  }
  pCVar1 = (this_ptr->base).base.vtable._ub;
  *(uint *)&(this_ptr->base).base.field_0x2a8 = 0x3dcccccd;
  (*pCVar1->getBoundingBox)((CDemonActor *)this_ptr,in_stack_fffffea4);
  puVar4 = (uint *)&stack0xffffff14;
  puVar5 = &stack0xfffffefc;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  fStack_30 = fStack_104 + fStack_f8;
  fStack_2c = fStack_100 + fStack_f4;
  fStack_28 = fStack_fc + fStack_f0;
  fStack_3c = fStack_104 + fStack_f8;
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffd4 + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffffcc + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  fStack_60 = fStack_3c * _DAT_005f0f37;
  fStack_5c = fStack_38 * _DAT_005f0f37;
  fStack_58 = fStack_34 * _DAT_005f0f37;
  fStack_24 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  fStack_14 = fStack_24;
  fStack_20 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  fStack_14 = fStack_20;
  fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  fStack_a8 = fStack_24;
  fStack_18 = fStack_14;
  fStack_a4 = fStack_20;
  fStack_a0 = fStack_14;
  fStack_84 = fStack_60;
  *(uint *)((int)&stack0xffffff80 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffa4 + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffff84 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffa8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  core_xform_cpp_FUN_00594380();
  uStack_d4 = uStack_c4;
  *(uint *)(&stack0xffffff30 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffff40 + (uint)bVar6 * -8);
  *(uint *)(&stack0xffffff34 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffff44 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  *(uint *)
   ((int)(&stack0xffffff34 + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xffffff44 + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4)
  ;
  core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10();
  puVar4 = (uint *)&stack0xfffffe9c;
  puVar5 = (uint *)&stack0xfffffecc;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  fStack_88 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.0);
  uStack_90 = 0;
  uStack_8c = 0;
  fStack_1c = fStack_88;
  fStack_14 = fStack_88;
  core_xform_cpp_FUN_00591530();
  fStack_9c = fStack_78;
  *(uint *)((int)&stack0xffffff68 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffff8c + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffff6c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffff90 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  fStack_54 = fStack_9c + fStack_84;
  fStack_50 = fStack_98 + fStack_80;
  fStack_4c = fStack_94 + fStack_7c;
  fStack_48 = fStack_9c + fStack_84;
  *(uint *)((int)&stack0xffffffbc + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffb0 + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffffc0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffb4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  uStack_6c = _DAT_0265370c;
  *(uint *)(&stack0xffffff98 + (uint)bVar6 * -8) =
       *(uint *)(&DAT_02653710 + (uint)bVar6 * -8);
  *(uint *)(&stack0xffffff9c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&DAT_02653714 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  uStack_b4 = 0;
  uStack_b0 = 0x3f800000;
  uStack_ac = 0;
  fStack_48 = fStack_48 + (this_ptr->base).base.location.position.x;
  fStack_44 = fStack_44 + (this_ptr->base).base.location.position.y;
  fStack_40 = fStack_40 + (this_ptr->base).base.location.position.z;
  core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
            (g_CSimpleParticleSystemPtr,0x3f800000,0x3f800000,0,0x3ecccccd,0,0x3ed26e98,0x3ee66666,
             0x3f800000,&stack0xffffffb8,&stack0xffffff94,&stack0xffffff4c,0);
  return;
}
