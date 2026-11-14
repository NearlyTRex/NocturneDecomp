// Name: core_heal.cpp_CHeal_fire_FUN_004d1a10
// Address: 004d1a10
// Address Range: [[004d1a10, 004d1c40]]
// Convention: __cdecl
// Signature: int __cdecl core_heal_cpp_CHeal_fire_FUN_004d1a10(CHeal *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_heal_cpp_CHeal_fire_FUN_004d1a10(CHeal *this_ptr)

{
  int iVar1;
  CDemonActor *this_ptr_00;
  CBoundingBox3D *unaff_EBX;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_102c [995];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_58;
  float fStack_54;
  CVector3f CStack_50;
  float fStack_44;
  float afStack_40 [2];
  CVector3f CStack_38;
  float fStack_2c;
  float afStack_28 [2];
  CVector3f CStack_20;
  float fStack_14;
  float fStack_10;
  
  bVar4 = 0;
  afStack_40[0] = _DAT_02cfd900;
  afStack_40[1] = _DAT_02cfd904;
  CStack_38.x = _DAT_02cfd908;
  this_ptr->is_firing = 1;
  if (this_ptr->was_firing_prev_frame != 0) {
    return 0;
  }
  iVar1 = core_weapon_cpp_CWeapon_fire_FUN_0057b880(&this_ptr->base);
  if (iVar1 != 0) {
    this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c840
                            ((this_ptr->base).carried_by_actor,g_CHeroClassInfo.name_hash);
    if (this_ptr_00 != (CDemonActor *)0x0) {
      this_ptr_00[0x1b].platform_orientation_delta.y =
           this_ptr_00[0x1b].platform_orientation_delta.y + _DAT_005c4a3f;
      if (0x42c80000 < (int)this_ptr_00[0x1b].platform_orientation_delta.y) {
        this_ptr_00[0x1b].platform_orientation_delta.y = 100.0;
      }
      if ((CLocation *)&fStack_58 != &this_ptr_00->location) {
        fStack_58 = (this_ptr_00->location).position.x;
        fStack_54 = (this_ptr_00->location).position.y;
        CStack_50.x = (this_ptr_00->location).position.z;
      }
      (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,unaff_EBX);
      puVar2 = (uint *)&stack0xffffff98;
      puVar3 = (uint *)&stack0xffffff78;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
        puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
      }
      fStack_44 = fStack_74 - fStack_80;
      afStack_40[0] = fStack_70 - fStack_7c;
      afStack_40[1] = fStack_6c - fStack_78;
      fStack_2c = fStack_74 - fStack_80;
      afStack_28[(uint)bVar4 * -2] = afStack_40[(uint)bVar4 * -2];
      afStack_28[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_40[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      CStack_50.y = afStack_28[0] + 1.0 + CStack_50.y;
      iVar1 = 0;
      do {
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
        CStack_20.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
        CStack_20.y = -5.0;
        CStack_20.z = fStack_14;
        if (&CStack_38 != (CVector3f *)(afStack_28 + 2)) {
          CStack_38.y = -5.0;
          CStack_38.z = fStack_14;
          CStack_38.x = CStack_20.x;
        }
        iVar1 = iVar1 + 1;
        fStack_10 = CStack_20.x;
        core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                  (0x01C73654,&CStack_50,&CStack_38,0x20000,0x10000,5,0xffff);
      } while (iVar1 < 0x10);
    }
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (0x02CF5680,(CDemonActor *)this_ptr,"wp_heal.wav",
               &(this_ptr->base).base.location.position);
    (this_ptr->base).fire_cooldown_timer = 3.0;
    return 1;
  }
  core_sound_cpp_CSound_playActorSound_FUN_005609d0
            (0x02CF5680,(CDemonActor *)this_ptr,"wp_nomana.wav",
             &(this_ptr->base).base.location.position);
  (this_ptr->base).fire_cooldown_timer = 1.0;
  return 0;
}
