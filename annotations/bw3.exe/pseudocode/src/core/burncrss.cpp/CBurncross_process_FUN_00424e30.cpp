// Name: core_burncrss.cpp_CBurncross_process_FUN_00424e30
// Address: 00424e30
// Address Range: [[00424e30, 004252e7]]
// Convention: __cdecl
// Signature: void __cdecl core_burncrss_cpp_CBurncross_process_FUN_00424e30(CBurncross *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_burncrss_cpp_CBurncross_process_FUN_00424e30(CBurncross *this_ptr,float delta_time)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  byte *puVar4;
  byte bVar5;
  float in_stack_00000010;
  uint auStackY_1114 [1014];
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_84;
  uint uStack_78;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_3c;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_18;
  uint uStack_14;
  float fVar6;
  
  bVar5 = 0;
  core_weapon_cpp_CWeapon_process_FUN_0057b160((CWeapon *)this_ptr,delta_time);
  iVar3 = 0;
LAB_00424e53:
  fVar6 = 0.5;
  puVar4 = &this_ptr->field_0x0 + iVar3 * 0x2a4;
LAB_00424e66:
  do {
    fVar2 = fVar6 * _DAT_005b7936;
    *(float *)(puVar4 + 0x700) = fVar6 * *(float *)&this_ptr->field_0x1ac8;
    *(float *)(puVar4 + 0x704) = fVar2 * *(float *)&this_ptr->field_0x1ac8;
    iVar3 = iVar3 + 1;
    *(float *)(puVar4 + 0x708) = fVar6 * *(float *)&this_ptr->field_0x1ac8;
    if (7 < iVar3) {
      uStack_100 = 0xbe800000;
      uStack_108 = 0xbecccccd;
      uStack_104 = 0x3f0ccccd;
      core_actor_cpp_FUN_00408b80(this_ptr,&stack0xfffffef8);
      uStack_120 = uStack_48;
      *(uint *)((int)&stack0xfffffee4 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffbc + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xfffffee8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffc0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      *(uint *)&this_ptr->field_0x5c8 = uStack_120;
      *(uint *)&this_ptr->field_0x5cc = uStack_11c;
      *(uint *)&this_ptr->field_0x5d0 = uStack_118;
      uStack_e4 = 0xbe19999a;
      uStack_dc = 0xbe800000;
      uStack_e0 = 0x3f0ccccd;
      core_actor_cpp_FUN_00408b80(this_ptr,&stack0xffffff1c);
      uStack_54 = uStack_24;
      *(uint *)((int)&stack0xffffffb0 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffffe0 + (uint)bVar5 * 0xfffffffe * 4);
      *(uint *)((int)&stack0xffffffb4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffe4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      *(uint *)&this_ptr->field_0x86c = uStack_54;
      *(uint *)&this_ptr->field_0x870 = uStack_50;
      *(uint *)&this_ptr->field_0x874 = uStack_4c;
      uStack_a0 = 0xbe800000;
      uStack_a8 = 0x3dcccccd;
      uStack_a4 = 0x3f0ccccd;
      core_actor_cpp_FUN_00408b80(this_ptr,&stack0xffffff58);
      uStack_6c = uStack_78;
      *(uint *)((int)&stack0xffffff98 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff8c + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffff9c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff90 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      *(uint *)&this_ptr->field_0xb10 = uStack_6c;
      *(uint *)&this_ptr->field_0xb14 = uStack_68;
      *(uint *)&this_ptr->field_0xb18 = uStack_64;
      uStack_30 = 0x3eb33333;
      uStack_28 = 0xbe800000;
      uStack_2c = 0x3f0ccccd;
      core_actor_cpp_FUN_00408b80(this_ptr,&stack0xffffffd0);
      uStack_cc = uStack_b4;
      *(uint *)((int)&stack0xffffff38 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff50 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffff3c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff54 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      *(uint *)&this_ptr->field_0xdb4 = uStack_cc;
      *(uint *)&this_ptr->field_0xdb8 = uStack_c8;
      *(uint *)&this_ptr->field_0xdbc = uStack_c4;
      uStack_18 = 0x3f19999a;
      uStack_14 = 0x3f0ccccd;
      core_actor_cpp_FUN_00408b80(this_ptr,&stack0xffffffe8);
      uStack_12c = uStack_90;
      *(uint *)((int)&stack0xfffffed8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff74 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xfffffedc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff78 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      *(uint *)&this_ptr->field_0x1058 = uStack_12c;
      *(uint *)&this_ptr->field_0x105c = uStack_128;
      *(uint *)&this_ptr->field_0x1060 = uStack_124;
      uStack_114 = 0x3dcccccd;
      uStack_10c = 0xbe800000;
      uStack_110 = 0x3f4ccccd;
      core_actor_cpp_FUN_00408b80(this_ptr,&stack0xfffffeec);
      uStack_c0 = uStack_3c;
      *(uint *)((int)&stack0xffffff44 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffc8 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffff48 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffcc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      *(uint *)&this_ptr->field_0x12fc = uStack_c0;
      *(uint *)&this_ptr->field_0x1300 = uStack_bc;
      *(uint *)&this_ptr->field_0x1304 = uStack_b8;
      uStack_e8 = 0xbe800000;
      uStack_f0 = 0x3dcccccd;
      uStack_ec = 0x3f866666;
      core_actor_cpp_FUN_00408b80(this_ptr,&stack0xffffff10);
      uStack_9c = uStack_d8;
      (&stack0xffffff68)[(uint)bVar5 * 0xfffffffe] =
           *(uint *)((int)&stack0xffffff2c + (uint)bVar5 * 0xfffffffe * 4);
      *(uint *)((int)&stack0xffffff6c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff30 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      *(uint *)&this_ptr->field_0x15a0 = uStack_9c;
      *(uint *)&this_ptr->field_0x15a4 = uStack_98;
      *(uint *)&this_ptr->field_0x15a8 = uStack_94;
      uStack_fc = 0x3dcccccd;
      uStack_f4 = 0xbe800000;
      uStack_f8 = 0x3e99999a;
      core_actor_cpp_FUN_00408b80(this_ptr,&stack0xffffff04);
      uStack_60 = uStack_84;
      *(uint *)((int)&stack0xffffffa4 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff80 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffffa8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff84 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      *(uint *)&this_ptr->field_0x1844 = uStack_60;
      *(uint *)&this_ptr->field_0x1848 = uStack_5c;
      puVar4 = &this_ptr->field_0x5a8;
      *(uint *)&this_ptr->field_0x184c = uStack_58;
      do {
        (**(code **)(*(int *)(puVar4 + 0x154) + 0xc))(puVar4,in_stack_00000010);
        puVar4 = puVar4 + 0x2a4;
      } while (puVar4 != &this_ptr->field_0x1ac8);
      if (((*(uint *)&this_ptr->field_0x594 & 0x7fffffff) != 0) &&
         (*(float *)&this_ptr->field_0x594 = *(float *)&this_ptr->field_0x594 - in_stack_00000010,
         *(float *)&this_ptr->field_0x594 < 0.0)) {
        *(uint *)&this_ptr->field_0x594 = 0;
      }
      if (*(int *)&this_ptr->field_0x59c == 0) {
        *(float *)&this_ptr->field_0x1ac8 = *(float *)&this_ptr->field_0x1ac8 - in_stack_00000010;
        if (0.0 <= *(float *)&this_ptr->field_0x1ac8) goto LAB_0042526b;
        *(uint *)&this_ptr->field_0x1ac8 = 0;
      }
      else {
        *(float *)&this_ptr->field_0x1ac8 =
             in_stack_00000010 * _DAT_005b7936 + *(float *)&this_ptr->field_0x1ac8;
        if (0x3f800000 < *(int *)&this_ptr->field_0x1ac8) {
          *(uint *)&this_ptr->field_0x1ac8 = 0x3f800000;
          goto LAB_00425278;
        }
LAB_0042526b:
        if (0.0 < *(float *)&this_ptr->field_0x1ac8) goto LAB_00425278;
      }
      sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&this_ptr->field_0x5a4);
      *(uint *)&this_ptr->field_0x5a4 = 0;
LAB_00425278:
      uVar1 = *(uint *)&this_ptr->field_0x59c;
      *(uint *)&this_ptr->field_0x59c = 0;
      *(uint *)&this_ptr->field_0x5a0 = uVar1;
      return;
    }
    if ((iVar3 != 1) && (iVar3 != 3)) {
      if (((iVar3 == 2) || (iVar3 == 5)) || (iVar3 == 6)) {
        fVar6 = 0.8;
        puVar4 = puVar4 + 0x2a4;
        goto LAB_00424e66;
      }
      goto LAB_00424e53;
    }
    fVar6 = 0.65;
    puVar4 = puVar4 + 0x2a4;
  } while( true );
}
