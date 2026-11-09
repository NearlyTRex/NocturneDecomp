// Name: core_heal.cpp_FUN_004d1a10
// Address: 004d1a10
// Address Range: [[004d1a10, 004d1c40]]
// Convention: unknown
// Signature: undefined4 core_heal_cpp_FUN_004d1a10(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_heal_cpp_FUN_004d1a10(CDemonActor *param_1)

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
  byte auStack_58 [12];
  float fStack_4c;
  float afStack_48 [2];
  CVector3f CStack_40;
  float fStack_34;
  float afStack_30 [2];
  CVector3f CStack_28;
  uint uStack_1c;
  CVector3f CStack_18;
  
  bVar4 = 0;
  CStack_40._0_4_ = _DAT_02cfd900;
  CStack_40._4_4_ = _DAT_02cfd904;
  CStack_40._8_4_ = _DAT_02cfd908;
  *(uint *)&param_1[4].field_0x34 = 1;
  if (*(int *)&param_1[4].field_0x38 != 0) {
    return 0;
  }
  iVar1 = core_weapon_cpp_FUN_0057b880(param_1);
  if (iVar1 != 0) {
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                      (*(uint *)&param_1[2].field_0x54,g_CHeroClassInfo.name_hash);
    if (iVar1 != 0) {
      *(float *)(iVar1 + 0x2538) = *(float *)(iVar1 + 0x2538) + _DAT_005c4a3f;
      if (0x42c80000 < *(int *)(iVar1 + 0x2538)) {
        *(uint *)(iVar1 + 0x2538) = 0x42c80000;
      }
      if ((uint *)auStack_58 != (uint *)(iVar1 + 0x20)) {
        auStack_58._0_4_ = *(uint *)(iVar1 + 0x20);
        auStack_58._4_4_ = *(float *)(iVar1 + 0x24);
        auStack_58._8_4_ = *(uint *)(iVar1 + 0x28);
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
      auStack_58._4_4_ = afStack_30[0] + 1.0 + (float)auStack_58._4_4_;
      iVar1 = 0;
      do {
        uStack_1c = core_actor_cpp_FUN_0040ce40(0xc0a00000,0x40a00000);
        CStack_28._0_4_ = core_actor_cpp_FUN_0040ce40(0xc0a00000,0x40a00000);
        CStack_18._4_4_ = uStack_1c;
        CStack_28._4_4_ = 0xc0a00000;
        CStack_28._8_4_ = uStack_1c;
        if (&CStack_40 != &CStack_28) {
          CStack_40._4_4_ = 0xc0a00000;
          CStack_40._8_4_ = uStack_1c;
          CStack_40._0_4_ = CStack_28._0_4_;
        }
        iVar1 = iVar1 + 1;
        CStack_18._0_4_ = CStack_28._0_4_;
        CStack_18._8_4_ = CStack_28._0_4_;
        core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                  (0x01C73654,(CVector3f *)auStack_58,&CStack_40,0x20000,0x10000,5,0xffff);
      } while (iVar1 < 0x10);
    }
    core_sound_cpp_CSound_playActorSound_FUN_005609d0
              (0x02CF5680,param_1,"wp_heal.wav",(CVector3f *)&param_1->field_0x20);
    *(uint *)&param_1[2].field_0x50 = 0x40400000;
    return 1;
  }
  core_sound_cpp_CSound_playActorSound_FUN_005609d0
            (0x02CF5680,param_1,"wp_nomana.wav",(CVector3f *)&param_1->field_0x20);
  *(uint *)&param_1[2].field_0x50 = 0x3f800000;
  return 0;
}
