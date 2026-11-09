// Name: core_flies.cpp_FUN_004a7660
// Address: 004a7660
// Address Range: [[004a7660, 004a7995]]
// Convention: unknown
// Signature: float * core_flies_cpp_FUN_004a7660(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * core_flies_cpp_FUN_004a7660(int param_1,float *param_2)

{
  float fVar1;
  float *unaff_ESI;
  byte bVar2;
  float afStackY_10c4 [1013];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  uint uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
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
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  uint uStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  bVar2 = 0;
  fVar1 = (float)core_actor_cpp_FUN_0040cf60(0,0x3f800000);
  fStack_c0 = fVar1 * fVar1 * *(float *)(param_1 + 0x2b8);
  fStack_c4 = (float)core_actor_cpp_FUN_0040cf60
                               (*(float *)(param_1 + 0x2b4) * (float)_DAT_005d6719,
                                *(float *)(param_1 + 0x2b4) * (float)_DAT_005d6711);
  fStack_bc = (float)core_actor_cpp_FUN_0040cf60
                               (*(float *)(param_1 + 700) * (float)_DAT_005d6719,
                                *(float *)(param_1 + 700) * (float)_DAT_005d6711);
  if (param_2 != (float *)0x0) {
    fStack_64 = fStack_c4 - *param_2;
    fStack_60 = fStack_c0 - param_2[1];
    fStack_5c = fStack_bc - param_2[2];
    fStack_34 = fStack_c4 - *param_2;
    *(uint *)((int)&stack0xffffffd0 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffffa0 + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffffa4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    fVar1 = SQRT(fStack_2c * fStack_2c + fStack_34 * fStack_34 + fStack_30 * fStack_30);
    if ((float)_DAT_005d6721 < fVar1) {
      fStack_4c = fStack_34 * _DAT_005d6729;
      fStack_48 = fStack_30 * _DAT_005d6729;
      fStack_44 = fStack_2c * _DAT_005d6729;
      *(uint *)((int)&stack0xffffff28 + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffffb8 + (uint)bVar2 * -8);
      *(uint *)((int)&stack0xffffff2c + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffffbc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      fVar1 = 1.0 / fVar1;
      fStack_88 = fStack_34 * _DAT_005d6729 * fVar1;
      fStack_84 = fStack_d8 * fVar1;
      fStack_80 = fStack_d4 * fVar1;
      fStack_b8 = fStack_88;
      *(uint *)((int)&stack0xffffff4c + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffff7c + (uint)bVar2 * -8);
      *(uint *)((int)&stack0xffffff50 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffff80 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      fStack_a0 = *param_2 + fStack_b8;
      fStack_9c = param_2[1] + fStack_b4;
      fStack_98 = param_2[2] + fStack_b0;
      fStack_40 = *param_2 + fStack_b8;
      (&stack0xffffffc4)[(uint)bVar2 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffff64 + (uint)bVar2 * -8);
      *(uint *)((int)&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffff68 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      if (&stack0xffffff3c != &stack0xffffffc0) {
        fStack_c4 = fStack_40;
        fStack_c0 = fStack_3c;
        fStack_bc = (float)uStack_38;
      }
    }
    else if ((fVar1 < 1.0) && (0.0 < fVar1)) {
      fStack_94 = fStack_34;
      fStack_90 = fStack_30;
      fStack_8c = fStack_2c;
      fStack_58 = fStack_34;
      *(uint *)((int)&stack0xffffffac + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffff70 + (uint)bVar2 * -8);
      *(uint *)((int)&stack0xffffffb0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffff74 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      fVar1 = 1.0 / fVar1;
      fStack_7c = fStack_58 * fVar1;
      fStack_78 = fStack_54 * fVar1;
      fStack_74 = fStack_50 * fVar1;
      fStack_d0 = fStack_58 * fVar1;
      *(uint *)((int)&stack0xffffff34 + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffff88 + (uint)bVar2 * -8);
      *(uint *)((int)&stack0xffffff38 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffff8c + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      fStack_70 = *param_2 + fStack_d0;
      fStack_6c = param_2[1] + fStack_cc;
      fStack_68 = param_2[2] + fStack_c8;
      fStack_ac = *param_2 + fStack_d0;
      (&stack0xffffff58)[(uint)bVar2 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffff94 + (uint)bVar2 * -8);
      *(uint *)((int)&stack0xffffff5c + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffff98 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      if (&stack0xffffff3c != &stack0xffffff54) {
        fStack_c4 = fStack_ac;
        fStack_c0 = fStack_a8;
        fStack_bc = (float)uStack_a4;
      }
    }
  }
  *unaff_ESI = fStack_c4;
  unaff_ESI[(uint)bVar2 * -2 + 1] = (&stack0xffffff40)[(uint)bVar2 * 0xfffffffe];
  (unaff_ESI + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       *(float *)((int)&stack0xffffff44 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  return unaff_ESI;
}
