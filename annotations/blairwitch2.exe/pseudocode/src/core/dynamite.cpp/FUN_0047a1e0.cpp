// Name: core_dynamite.cpp_FUN_0047a1e0
// Address: 0047a1e0
// Address Range: [[0047a1e0, 0047a3d3]]
// Convention: unknown
// Signature: void core_dynamite_cpp_FUN_0047a1e0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dynamite_cpp_FUN_0047a1e0(int param_1,float param_2)

{
  float fVar1;
  CSound *this_ptr;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1040 [985];
  uint uStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  CVector3f CStack_4c;
  float fStack_40;
  float afStack_3c [2];
  CVector3f CStack_34;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  bVar5 = 0;
  core_weapon_cpp_FUN_00589c80(param_1,param_2);
  if (0.0 <= *(float *)(param_1 + 0x6d4)) {
    fVar1 = *(float *)(param_1 + 0x6d4) - param_2;
    *(float *)(param_1 + 0x6d4) = fVar1;
    this_ptr = 0x0264B290;
    if (fVar1 < 0.0) {
      *(uint *)(param_1 + 0x6d4) = 0;
      core_sound_cpp_FUN_0055af80(this_ptr,*(uint *)(param_1 + 0x6e4));
      *(uint *)(param_1 + 0x6e4) = 0;
    }
    else {
      iVar2 = core_actor_cpp_FUN_0040d060((param_2 * (float)_DAT_005d1e63 * fVar1) / _DAT_005f5bac);
      if (iVar2 != 0) {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
        puVar3 = (uint *)&stack0xffffff48;
        puVar4 = &stack0xffffff90;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
        fStack_28 = fStack_70 + fStack_64;
        fStack_24 = fStack_6c + fStack_60;
        fStack_20 = fStack_68 + fStack_5c;
        fStack_40 = fStack_70 + fStack_64;
        afStack_3c[(uint)bVar5 * -2] = afStack_3c[(uint)bVar5 * -2 + 6];
        afStack_3c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             afStack_3c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
        fStack_58 = fStack_40 * _DAT_005d1e6b;
        fStack_54 = afStack_3c[0] * _DAT_005d1e6b;
        fStack_50 = afStack_3c[1] * _DAT_005d1e6b;
        CStack_4c._0_4_ = fStack_40 * _DAT_005d1e6b;
        *(uint *)((int)&CStack_4c + (uint)bVar5 * -8 + 4) =
             *(uint *)((int)&stack0xffffffac + (uint)bVar5 * -8);
        *(uint *)((int)&CStack_4c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
             *(uint *)((int)&stack0xffffffb0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
        puVar3 = (uint *)&stack0xffffff60;
        puVar4 = (uint *)&stack0xffffff78;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
        CStack_4c._8_4_ = uStack_74;
        core_actor_cpp_FUN_00408d70(param_1,&CStack_4c);
        CStack_34._0_4_ = fStack_1c;
        afStack_3c[(uint)bVar5 * -2 + 3] = afStack_3c[(uint)bVar5 * -2 + 9];
        afStack_3c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
             afStack_3c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
        if (&CStack_4c != (CVector3f *)(afStack_3c + 2)) {
          CStack_4c._0_4_ = CStack_34._0_4_;
          CStack_4c._4_4_ = CStack_34._4_4_;
          CStack_4c._8_4_ = CStack_34._8_4_;
        }
        core_fire_cpp_FUN_0049d090(0x01C3DEB4,&CStack_4c,(CVector3f *)0x0,0x4000,0x10000,0,0xffff)
        ;
        return;
      }
    }
  }
  return;
}
