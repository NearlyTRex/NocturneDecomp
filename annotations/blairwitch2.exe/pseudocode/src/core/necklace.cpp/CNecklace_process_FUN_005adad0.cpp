// Name: core_necklace.cpp_CNecklace_process_FUN_005adad0
// Address: 005adad0
// Address Range: [[005adad0, 005add25]]
// Convention: __cdecl
// Signature: void __cdecl core_necklace_cpp_CNecklace_process_FUN_005adad0(CNecklace *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_necklace_cpp_CNecklace_process_FUN_005adad0(CNecklace *this_ptr,float delta_time)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_18b0 [1480];
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
  
  bVar5 = 0;
  core_boxactor_cpp_CBoxActor_process_FUN_0041c090((CBoxActor *)this_ptr,delta_time);
  fVar1 = *(float *)&this_ptr->field_0x2a8 - delta_time;
  *(float *)&this_ptr->field_0x2a8 = fVar1;
  if (0.0 < fVar1) {
    return;
  }
  *(uint *)&this_ptr->field_0x2a8 = 0x3dcccccd;
  (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x24))();
  puVar3 = (uint *)&stack0xffffff14;
  puVar4 = &stack0xfffffefc;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  fStack_30 = fStack_104 + fStack_f8;
  fStack_2c = fStack_100 + fStack_f4;
  fStack_28 = fStack_fc + fStack_f0;
  fStack_3c = fStack_104 + fStack_f8;
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffd4 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffcc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
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
  *(uint *)((int)&stack0xffffff80 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffa4 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffff84 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffa8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  core_xform_cpp_FUN_00594380();
  uStack_d4 = uStack_c4;
  *(uint *)(&stack0xffffff30 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffff40 + (uint)bVar5 * -8);
  *(uint *)(&stack0xffffff34 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffff44 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  *(uint *)
   ((int)(&stack0xffffff34 + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xffffff44 + (uint)bVar5 * -8 + (uint)bVar5 * -8) + ((uint)bVar5 * -2 + 1) * 4)
  ;
  core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10();
  puVar3 = (uint *)&stack0xfffffe9c;
  puVar4 = (uint *)&stack0xfffffecc;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  fStack_88 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.0);
  uStack_90 = 0;
  uStack_8c = 0;
  fStack_1c = fStack_88;
  fStack_14 = fStack_88;
  core_xform_cpp_FUN_00591530();
  fStack_9c = fStack_78;
  *(uint *)((int)&stack0xffffff68 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffff8c + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffff6c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffff90 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  fStack_54 = fStack_9c + fStack_84;
  fStack_50 = fStack_98 + fStack_80;
  fStack_4c = fStack_94 + fStack_7c;
  fStack_48 = fStack_9c + fStack_84;
  (&stack0xffffffbc)[(uint)bVar5 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffb0 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffc0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffb4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  uStack_6c = _DAT_0265370c;
  *(uint *)((int)&stack0xffffff98 + (uint)bVar5 * 0xfffffffe * 4) =
       *(uint *)(&DAT_02653710 + (uint)bVar5 * -8);
  *(uint *)(&stack0xffffff9c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&DAT_02653714 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  uStack_b4 = 0;
  uStack_b0 = 0x3f800000;
  uStack_ac = 0;
  fStack_48 = fStack_48 + *(float *)&this_ptr->field_0x20;
  fStack_44 = fStack_44 + *(float *)&this_ptr->field_0x24;
  fStack_40 = fStack_40 + *(float *)&this_ptr->field_0x28;
  unkafter_superopt_cpp_FUN_005a8300
            (g_CSimpleParticleSystemPtr,0x3f800000,0x3f800000,0,0x3ecccccd,0,0x3ed26e98,0x3ee66666,
             0x3f800000,&stack0xffffffb8,&stack0xffffff94);
  return;
}
