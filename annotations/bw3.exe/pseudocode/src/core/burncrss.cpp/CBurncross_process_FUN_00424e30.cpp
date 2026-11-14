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
  float fVar1;
  int iVar2;
  int iVar3;
  CDemonActor *this_ptr_00;
  byte bVar4;
  float in_stack_00000010;
  float afStackY_1114 [1014];
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
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
  float fStack_d8;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_84;
  float fStack_78;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_3c;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  float fStack_24;
  uint uStack_18;
  uint uStack_14;
  float fVar5;
  
  bVar4 = 0;
  core_weapon_cpp_CWeapon_process_FUN_0057b160(&this_ptr->base,delta_time);
  iVar2 = 0;
LAB_00424e53:
  fVar5 = 0.5;
  iVar3 = (int)&(this_ptr->base).base + iVar2 * 0x2a4;
LAB_00424e66:
  do {
    fVar1 = fVar5 * _DAT_005b7936;
    *(float *)(iVar3 + 0x700) = fVar5 * this_ptr->flame_intensity;
    *(float *)(iVar3 + 0x704) = fVar1 * this_ptr->flame_intensity;
    iVar2 = iVar2 + 1;
    *(float *)(iVar3 + 0x708) = fVar5 * this_ptr->flame_intensity;
    if (7 < iVar2) {
      uStack_100 = 0xbe800000;
      uStack_108 = 0xbecccccd;
      uStack_104 = 0x3f0ccccd;
      core_actor_cpp_FUN_00408b80(this_ptr,&stack0xfffffef8);
      fStack_120 = fStack_48;
      *(uint *)((int)&stack0xfffffee4 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffffbc + (uint)bVar4 * -8);
      *(uint *)((int)&stack0xfffffee8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffffc0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      this_ptr->flames[0].base.location.position.x = fStack_120;
      this_ptr->flames[0].base.location.position.y = fStack_11c;
      this_ptr->flames[0].base.location.position.z = fStack_118;
      uStack_e4 = 0xbe19999a;
      uStack_dc = 0xbe800000;
      uStack_e0 = 0x3f0ccccd;
      core_actor_cpp_FUN_00408b80(this_ptr,&stack0xffffff1c);
      fStack_54 = fStack_24;
      *(uint *)((int)&stack0xffffffb0 + (uint)bVar4 * -8) =
           *(uint *)((int)&stack0xffffffe0 + (uint)bVar4 * 0xfffffffe * 4);
      *(uint *)((int)&stack0xffffffb4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffffe4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      this_ptr->flames[1].base.location.position.x = fStack_54;
      this_ptr->flames[1].base.location.position.y = fStack_50;
      this_ptr->flames[1].base.location.position.z = fStack_4c;
      uStack_a0 = 0xbe800000;
      uStack_a8 = 0x3dcccccd;
      uStack_a4 = 0x3f0ccccd;
      core_actor_cpp_FUN_00408b80(this_ptr,&stack0xffffff58);
      fStack_6c = fStack_78;
      *(uint *)((int)&stack0xffffff98 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffff8c + (uint)bVar4 * -8);
      *(uint *)((int)&stack0xffffff9c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffff90 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      this_ptr->flames[2].base.location.position.x = fStack_6c;
      this_ptr->flames[2].base.location.position.y = fStack_68;
      this_ptr->flames[2].base.location.position.z = fStack_64;
      uStack_30 = 0x3eb33333;
      uStack_28 = 0xbe800000;
      uStack_2c = 0x3f0ccccd;
      core_actor_cpp_FUN_00408b80(this_ptr,&stack0xffffffd0);
      fStack_cc = fStack_b4;
      *(uint *)((int)&stack0xffffff38 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffff50 + (uint)bVar4 * -8);
      *(uint *)((int)&stack0xffffff3c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffff54 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      this_ptr->flames[3].base.location.position.x = fStack_cc;
      this_ptr->flames[3].base.location.position.y = fStack_c8;
      this_ptr->flames[3].base.location.position.z = fStack_c4;
      uStack_18 = 0x3f19999a;
      uStack_14 = 0x3f0ccccd;
      core_actor_cpp_FUN_00408b80(this_ptr,&stack0xffffffe8);
      fStack_12c = fStack_90;
      *(uint *)((int)&stack0xfffffed8 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffff74 + (uint)bVar4 * -8);
      *(uint *)((int)&stack0xfffffedc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffff78 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      this_ptr->flames[4].base.location.position.x = fStack_12c;
      this_ptr->flames[4].base.location.position.y = fStack_128;
      this_ptr->flames[4].base.location.position.z = fStack_124;
      uStack_114 = 0x3dcccccd;
      uStack_10c = 0xbe800000;
      uStack_110 = 0x3f4ccccd;
      core_actor_cpp_FUN_00408b80(this_ptr,&stack0xfffffeec);
      fStack_c0 = fStack_3c;
      *(uint *)((int)&stack0xffffff44 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffffc8 + (uint)bVar4 * -8);
      *(uint *)((int)&stack0xffffff48 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffffcc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      this_ptr->flames[5].base.location.position.x = fStack_c0;
      this_ptr->flames[5].base.location.position.y = fStack_bc;
      this_ptr->flames[5].base.location.position.z = fStack_b8;
      uStack_e8 = 0xbe800000;
      uStack_f0 = 0x3dcccccd;
      uStack_ec = 0x3f866666;
      core_actor_cpp_FUN_00408b80(this_ptr,&stack0xffffff10);
      fStack_9c = fStack_d8;
      (&stack0xffffff68)[(uint)bVar4 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffff2c + (uint)bVar4 * 0xfffffffe * 4);
      *(uint *)((int)&stack0xffffff6c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffff30 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      this_ptr->flames[6].base.location.position.x = fStack_9c;
      this_ptr->flames[6].base.location.position.y = fStack_98;
      this_ptr->flames[6].base.location.position.z = fStack_94;
      uStack_fc = 0x3dcccccd;
      uStack_f4 = 0xbe800000;
      uStack_f8 = 0x3e99999a;
      core_actor_cpp_FUN_00408b80(this_ptr,&stack0xffffff04);
      fStack_60 = fStack_84;
      *(uint *)((int)&stack0xffffffa4 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffff80 + (uint)bVar4 * -8);
      *(uint *)((int)&stack0xffffffa8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffff84 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      this_ptr->flames[7].base.location.position.x = fStack_60;
      this_ptr->flames[7].base.location.position.y = fStack_5c;
      this_ptr_00 = &this_ptr->flames[0].base;
      this_ptr->flames[7].base.location.position.z = fStack_58;
      do {
        (*((UActorVTable *)(this_ptr_00->actor_name + 0x154))->_ub->process)
                  (this_ptr_00,in_stack_00000010);
        this_ptr_00 = (CDemonActor *)&this_ptr_00[1].next_actor;
      } while (this_ptr_00 != (CDemonActor *)&this_ptr->flame_intensity);
      if ((ABS(this_ptr->fire_cooldown) != 0.0) &&
         (this_ptr->fire_cooldown = this_ptr->fire_cooldown - in_stack_00000010,
         this_ptr->fire_cooldown < 0.0)) {
        this_ptr->fire_cooldown = 0.0;
      }
      if (this_ptr->firing == 0) {
        this_ptr->flame_intensity = this_ptr->flame_intensity - in_stack_00000010;
        if (0.0 <= this_ptr->flame_intensity) goto LAB_0042526b;
        this_ptr->flame_intensity = 0.0;
      }
      else {
        this_ptr->flame_intensity = in_stack_00000010 * _DAT_005b7936 + this_ptr->flame_intensity;
        if (0x3f800000 < (int)this_ptr->flame_intensity) {
          this_ptr->flame_intensity = 1.0;
          goto LAB_00425278;
        }
LAB_0042526b:
        if (0.0 < this_ptr->flame_intensity) goto LAB_00425278;
      }
      sound_sndmain_cpp_killSfx_FUN_00556be0(this_ptr->sfx_handle);
      this_ptr->sfx_handle = 0;
LAB_00425278:
      iVar2 = this_ptr->firing;
      this_ptr->firing = 0;
      this_ptr->was_firing = iVar2;
      return;
    }
    if ((iVar2 != 1) && (iVar2 != 3)) {
      if (((iVar2 == 2) || (iVar2 == 5)) || (iVar2 == 6)) {
        fVar5 = 0.8;
        iVar3 = iVar3 + 0x2a4;
        goto LAB_00424e66;
      }
      goto LAB_00424e53;
    }
    fVar5 = 0.65;
    iVar3 = iVar3 + 0x2a4;
  } while( true );
}
