// Name: core_burncrss.cpp_CBurncross_process_FUN_00424e30
// Address: 00424e30
// Address Range: [[00424e30, 004252e7]]
// Convention: __cdecl
// Signature: void __cdecl core_burncrss_cpp_CBurncross_process_FUN_00424e30(CBurncross *this_ptr,float delta_time)

#include "nocturne.h"

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
  CVector3f CStack_114;
  CVector3f CStack_108;
  CVector3f CStack_fc;
  CVector3f CStack_f0;
  CVector3f CStack_e4;
  CVector3f CStack_d8;
  float fStack_cc;
  float afStack_c8 [4];
  float fStack_b8;
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  float fStack_9c;
  float afStack_98 [2];
  CVector3f CStack_90;
  CVector3f CStack_84;
  CVector3f CStack_78;
  float fStack_6c;
  float afStack_68 [4];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  CVector3f CStack_24;
  float fStack_18;
  float fStack_14;
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
      CStack_108.z = -0.25;
      CStack_108.x = -0.4;
      CStack_108.y = 0.55;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,&CStack_108,&CStack_48);
      fStack_120 = CStack_48.x;
      *(uint *)((int)&stack0xfffffee4 + (uint)bVar4 * -8) =
           *(uint *)((int)&CStack_48 + (uint)bVar4 * -8 + 4);
      *(uint *)((int)&stack0xfffffee8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)((int)&CStack_48 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      this_ptr->flames[0].base.location.position.x = fStack_120;
      this_ptr->flames[0].base.location.position.y = fStack_11c;
      this_ptr->flames[0].base.location.position.z = fStack_118;
      CStack_e4.x = -0.15;
      CStack_e4.z = -0.25;
      CStack_e4.y = 0.55;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,&CStack_e4,&CStack_24);
      fStack_54 = CStack_24.x;
      afStack_68[(uint)bVar4 * -2 + 6] = *(float *)((int)&CStack_24 + (uint)bVar4 * -8 + 4);
      afStack_68[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
           *(float *)((int)&CStack_24 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      this_ptr->flames[1].base.location.position.x = fStack_54;
      this_ptr->flames[1].base.location.position.y = fStack_50;
      this_ptr->flames[1].base.location.position.z = fStack_4c;
      CStack_a8.z = -0.25;
      CStack_a8.x = 0.1;
      CStack_a8.y = 0.55;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,&CStack_a8,&CStack_78);
      fStack_6c = CStack_78.x;
      afStack_68[(uint)bVar4 * -2] = *(float *)((int)&CStack_78 + (uint)bVar4 * -8 + 4);
      afStack_68[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           *(float *)((int)&CStack_78 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      this_ptr->flames[2].base.location.position.x = fStack_6c;
      this_ptr->flames[2].base.location.position.y = afStack_68[0];
      this_ptr->flames[2].base.location.position.z = afStack_68[1];
      CStack_30.x = 0.35;
      CStack_30.z = -0.25;
      CStack_30.y = 0.55;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,&CStack_30,&CStack_b4);
      fStack_cc = CStack_b4.x;
      afStack_c8[(uint)bVar4 * -2] = *(float *)((int)&CStack_b4 + (uint)bVar4 * -8 + 4);
      afStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           *(float *)((int)&CStack_b4 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      this_ptr->flames[3].base.location.position.x = fStack_cc;
      this_ptr->flames[3].base.location.position.y = afStack_c8[0];
      this_ptr->flames[3].base.location.position.z = afStack_c8[1];
      fStack_18 = 0.6;
      fStack_14 = 0.55;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,(CVector3f *)&fStack_18,&CStack_90);
      fStack_12c = CStack_90.x;
      *(uint *)((int)&stack0xfffffed8 + (uint)bVar4 * -8) =
           *(uint *)((int)&CStack_90 + (uint)bVar4 * -8 + 4);
      *(uint *)((int)&stack0xfffffedc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)((int)&CStack_90 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      this_ptr->flames[4].base.location.position.x = fStack_12c;
      this_ptr->flames[4].base.location.position.y = fStack_128;
      this_ptr->flames[4].base.location.position.z = fStack_124;
      CStack_114.x = 0.1;
      CStack_114.z = -0.25;
      CStack_114.y = 0.8;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,&CStack_114,&CStack_3c);
      afStack_c8[2] = CStack_3c.x;
      afStack_c8[(uint)bVar4 * -2 + 3] = *(float *)((int)&CStack_3c + (uint)bVar4 * -8 + 4);
      afStack_c8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           *(float *)((int)&CStack_3c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      this_ptr->flames[5].base.location.position.x = afStack_c8[2];
      this_ptr->flames[5].base.location.position.y = afStack_c8[3];
      this_ptr->flames[5].base.location.position.z = fStack_b8;
      CStack_f0.z = -0.25;
      CStack_f0.x = 0.1;
      CStack_f0.y = 1.05;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,&CStack_f0,&CStack_d8);
      fStack_9c = CStack_d8.x;
      afStack_98[(uint)bVar4 * -2] = *(float *)((int)&CStack_d8 + (uint)bVar4 * -8 + 4);
      afStack_98[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           *(float *)((int)&CStack_d8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      this_ptr->flames[6].base.location.position.x = fStack_9c;
      this_ptr->flames[6].base.location.position.y = afStack_98[0];
      this_ptr->flames[6].base.location.position.z = afStack_98[1];
      CStack_fc.x = 0.1;
      CStack_fc.z = -0.25;
      CStack_fc.y = 0.3;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                ((CDemonActor *)this_ptr,&CStack_fc,&CStack_84);
      afStack_68[2] = CStack_84.x;
      afStack_68[(uint)bVar4 * -2 + 3] = *(float *)((int)&CStack_84 + (uint)bVar4 * -8 + 4);
      afStack_68[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           *(float *)((int)&CStack_84 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      this_ptr->flames[7].base.location.position.x = afStack_68[2];
      this_ptr->flames[7].base.location.position.y = afStack_68[3];
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
