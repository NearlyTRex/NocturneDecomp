// Name: core_flies.cpp_CFlies_generateRandomPoint_FUN_004a7660
// Address: 004a7660
// Address Range: [[004a7660, 004a7995]]
// Convention: __stack2_esi
// Signature: CVector3f * __stack2_esi core_flies_cpp_CFlies_generateRandomPoint_FUN_004a7660(CFlies *this_ptr,CVector3f *reference_point,CVector3f *out_point)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __stack2_esi core_flies_cpp_CFlies_generateRandomPoint_FUN_004a7660(CFlies *this_ptr,CVector3f *reference_point,CVector3f *out_point)

{
  float fVar1;
  uint *puVar2;
  byte bVar3;
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
  CVector3f *pCStack_1c;
  float fStack_14;
  
  bVar3 = 0;
  pCStack_1c = out_point;
  fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
  fStack_c0 = fStack_14 * fStack_14 * (this_ptr->box_size).y;
  fVar1 = (this_ptr->box_size).x;
  fStack_c4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60
                        (fVar1 * (float)_DAT_005d6719,fVar1 * (float)_DAT_005d6711);
  fVar1 = (this_ptr->box_size).z;
  fStack_14 = fStack_c4;
  fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60
                        (fVar1 * (float)_DAT_005d6719,fVar1 * (float)_DAT_005d6711);
  fStack_bc = fStack_14;
  if (reference_point != (CVector3f *)0x0) {
    fStack_64 = fStack_c4 - reference_point->x;
    fStack_60 = fStack_c0 - reference_point->y;
    fStack_5c = fStack_14 - reference_point->z;
    fStack_34 = fStack_64;
    *(uint *)((int)&stack0xffffffd0 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffa0 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffffd4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffa4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    fVar1 = SQRT(fStack_2c * fStack_2c + fStack_34 * fStack_34 + fStack_30 * fStack_30);
    if ((float)_DAT_005d6721 < fVar1) {
      fStack_4c = fStack_34 * _DAT_005d6729;
      fStack_48 = fStack_30 * _DAT_005d6729;
      fStack_44 = fStack_2c * _DAT_005d6729;
      *(uint *)((int)&stack0xffffff28 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffffb8 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffff2c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffffbc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      fVar1 = 1.0 / fVar1;
      fStack_88 = fStack_34 * _DAT_005d6729 * fVar1;
      fStack_84 = fStack_d8 * fVar1;
      fStack_80 = fStack_d4 * fVar1;
      fStack_b8 = fStack_88;
      *(uint *)((int)&stack0xffffff4c + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffff7c + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffff50 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffff80 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      fStack_a0 = reference_point->x + fStack_b8;
      fStack_9c = reference_point->y + fStack_b4;
      fStack_98 = reference_point->z + fStack_b0;
      fStack_40 = fStack_a0;
      (&stack0xffffffc4)[(uint)bVar3 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffff64 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffff68 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
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
      *(uint *)((int)&stack0xffffffac + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffff70 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffb0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffff74 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      fVar1 = 1.0 / fVar1;
      fStack_7c = fStack_58 * fVar1;
      fStack_78 = fStack_54 * fVar1;
      fStack_74 = fStack_50 * fVar1;
      fStack_d0 = fStack_58 * fVar1;
      *(uint *)((int)&stack0xffffff34 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffff88 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffff38 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffff8c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      fStack_70 = reference_point->x + fStack_d0;
      fStack_6c = reference_point->y + fStack_cc;
      fStack_68 = reference_point->z + fStack_c8;
      fStack_ac = fStack_70;
      (&stack0xffffff58)[(uint)bVar3 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffff94 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffff5c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)((int)&stack0xffffff98 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if (&stack0xffffff3c != &stack0xffffff54) {
        fStack_c4 = fStack_ac;
        fStack_c0 = fStack_a8;
        fStack_bc = (float)uStack_a4;
      }
    }
  }
  puVar2 = (uint *)((int)pCStack_1c + (uint)bVar3 * -8 + 4);
  pCStack_1c->x = fStack_c4;
  *puVar2 = (&stack0xffffff40)[(uint)bVar3 * 0xfffffffe];
  puVar2[(uint)bVar3 * -2 + 1] =
       *(uint *)((int)&stack0xffffff44 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  return pCStack_1c;
}
