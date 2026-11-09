// Name: core_dynamite.cpp_FUN_0047b270
// Address: 0047b270
// Address Range: [[0047b270, 0047b463]]
// Convention: unknown
// Signature: void core_dynamite_cpp_FUN_0047b270(CWeapon *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dynamite_cpp_FUN_0047b270(CWeapon *param_1,float param_2)

{
  uint sfx_handle;
  float fVar1;
  CSound *this_ptr;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1038 [985];
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
  CVector3f CStack_44;
  float fStack_38;
  float afStack_34 [2];
  CVector3f CStack_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar5 = 0;
  core_weapon_cpp_FUN_0057b160(param_1,param_2);
  if (0.0 <= *(float *)(param_1 + 1)) {
    fVar1 = *(float *)(param_1 + 1) - param_2;
    *(float *)(param_1 + 1) = fVar1;
    this_ptr = 0x02CF5680;
    if (fVar1 < 0.0) {
      sfx_handle = *(uint *)&param_1[1].field_0x10;
      *(uint *)(param_1 + 1) = 0;
      core_sound_cpp_FUN_00560b00(this_ptr,sfx_handle);
      *(uint *)&param_1[1].field_0x10 = 0;
    }
    else {
      iVar2 = core_actor_cpp_FUN_0040cf40((param_2 * (float)_DAT_005bcd19 * fVar1) / _DAT_005deecc);
      if (iVar2 != 0) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1);
        puVar3 = (uint *)&stack0xffffff50;
        puVar4 = &stack0xffffff98;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
        fStack_20 = fStack_68 + fStack_5c;
        fStack_1c = fStack_64 + fStack_58;
        fStack_18 = fStack_60 + fStack_54;
        fStack_38 = fStack_68 + fStack_5c;
        afStack_34[(uint)bVar5 * -2] = afStack_34[(uint)bVar5 * -2 + 6];
        afStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             afStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
        fStack_50 = fStack_38 * _DAT_005bcd21;
        fStack_4c = afStack_34[0] * _DAT_005bcd21;
        fStack_48 = afStack_34[1] * _DAT_005bcd21;
        CStack_44._0_4_ = fStack_38 * _DAT_005bcd21;
        *(uint *)((int)&CStack_44 + (uint)bVar5 * -8 + 4) =
             *(uint *)((int)&stack0xffffffb4 + (uint)bVar5 * -8);
        *(uint *)((int)&CStack_44 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             *(uint *)((int)&stack0xffffffb8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1);
        puVar3 = (uint *)&stack0xffffff68;
        puVar4 = (uint *)&stack0xffffff80;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
        CStack_44._8_4_ = uStack_6c;
        core_actor_cpp_FUN_00408b80(param_1,&CStack_44);
        CStack_2c._0_4_ = fStack_14;
        afStack_34[(uint)bVar5 * -2 + 3] = *(float *)(&stack0xfffffff0 + (uint)bVar5 * -8);
        afStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
             *(float *)(&stack0xfffffff4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        if (&CStack_44 != (CVector3f *)(afStack_34 + 2)) {
          CStack_44._0_4_ = CStack_2c._0_4_;
          CStack_44._4_4_ = CStack_2c._4_4_;
          CStack_44._8_4_ = CStack_2c._8_4_;
        }
        core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                  (0x01C73654,&CStack_44,(CVector3f *)0x0,0x4000,0x10000,0,0xffff);
        return;
      }
    }
  }
  return;
}
