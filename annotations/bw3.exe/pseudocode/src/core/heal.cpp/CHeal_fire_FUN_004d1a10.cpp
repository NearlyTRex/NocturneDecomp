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
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1034 [995];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  CVector3f CStack_58;
  float fStack_4c;
  float afStack_48 [2];
  CVector3f CStack_40;
  float fStack_34;
  float afStack_30 [2];
  CVector3f CStack_28;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  bVar4 = 0;
  CStack_40.x = _DAT_02cfd900;
  CStack_40.y = _DAT_02cfd904;
  CStack_40.z = _DAT_02cfd908;
  *(uint *)&this_ptr->field_0x594 = 1;
  if (*(int *)&this_ptr->field_0x598 != 0) {
    return 0;
  }
  iVar1 = core_weapon_cpp_CWeapon_fire_FUN_0057b880((CWeapon *)this_ptr);
  if (iVar1 != 0) {
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                      (*(uint *)&this_ptr->field_0x304,g_CHeroClassInfo.name_hash);
    if (iVar1 != 0) {
      *(float *)(iVar1 + 0x2538) = *(float *)(iVar1 + 0x2538) + _DAT_005c4a3f;
      if (0x42c80000 < *(int *)(iVar1 + 0x2538)) {
        *(uint *)(iVar1 + 0x2538) = 0x42c80000;
      }
      if (&CStack_58 != (CVector3f *)(iVar1 + 0x20)) {
        CStack_58.x = ((CVector3f *)(iVar1 + 0x20))->x;
        CStack_58.y = *(float *)(iVar1 + 0x24);
        CStack_58.z = *(float *)(iVar1 + 0x28);
      }
      (**(code **)(*(int *)(iVar1 + 0x154) + 0x1c))(iVar1);
      puVar2 = (uint *)&stack0xffffff90;
      puVar3 = &stack0xffffff78;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
        puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
      }
      fStack_4c = fStack_7c - fStack_88;
      afStack_48[0] = fStack_78 - fStack_84;
      afStack_48[1] = fStack_74 - fStack_80;
      fStack_34 = fStack_7c - fStack_88;
      afStack_30[(uint)bVar4 * -2] = afStack_48[(uint)bVar4 * -2];
      afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      CStack_58.y = afStack_30[0] + 1.0 + CStack_58.y;
      iVar1 = 0;
      do {
        fStack_1c = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
        CStack_28.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
        fStack_14 = fStack_1c;
        CStack_28.y = -5.0;
        CStack_28.z = fStack_1c;
        if (&CStack_40 != (CVector3f *)(afStack_30 + 2)) {
          CStack_40.y = -5.0;
          CStack_40.z = fStack_1c;
          CStack_40.x = CStack_28.x;
        }
        iVar1 = iVar1 + 1;
        fStack_18 = CStack_28.x;
        fStack_10 = CStack_28.x;
        core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                  (0x01C73654,&CStack_58,&CStack_40,0x20000,0x10000,5,0xffff);
      } while (iVar1 < 0x10);
    }
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (0x02CF5680,(CDemonActor *)this_ptr,"wp_heal.wav",
               (CVector3f *)&this_ptr->field_0x20);
    *(uint *)&this_ptr->field_0x300 = 0x40400000;
    return 1;
  }
  core_sound_cpp_CSound_playActorSound_FUN_005609d0
            (0x02CF5680,(CDemonActor *)this_ptr,"wp_nomana.wav",
             (CVector3f *)&this_ptr->field_0x20);
  *(uint *)&this_ptr->field_0x300 = 0x3f800000;
  return 0;
}
