// Name: core_doc.cpp_FUN_00475c20
// Address: 00475c20
// Address Range: [[00475c20, 00476079]]
// Convention: unknown
// Signature: undefined4 core_doc_cpp_FUN_00475c20(int param_1,int param_2,undefined4 param_3,float *param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_doc_cpp_FUN_00475c20(int param_1,int param_2,uint param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_10f4 [1003];
  float *pfVar6;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d0;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  float fStack_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  float fStack_64;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  uint uStack_40;
  uint uStack_34;
  float fStack_28;
  float fStack_1c;
  
  bVar5 = 0;
  switch(param_3) {
  case 1:
    if (*(int *)(param_1 + 0x25b0) != 0) {
      return 0;
    }
    core_actor_cpp_FUN_00408bb0(param_2,param_1 + 0x20);
    fStack_4c = fStack_dc;
    *(uint *)((int)&stack0xffffffb8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xffffff28 + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffffbc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xffffff2c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    fStack_1c = SQRT(fStack_44 * fStack_44 + fStack_4c * fStack_4c + fStack_48 * fStack_48);
    if (fStack_1c <= 0.0) {
      fStack_48 = 0.0;
      fStack_4c = 0.0;
      fStack_44 = 0.0;
    }
    else {
      fVar1 = 1.0 / fStack_1c;
      fStack_4c = fStack_4c * fVar1;
      fStack_48 = fStack_48 * fVar1;
      fStack_44 = fStack_44 * fVar1;
    }
    if (0.0 < fStack_44) {
      return 0;
    }
    uStack_c4 = 0;
    uStack_c0 = 0x40400000;
    uStack_bc = 0x40000000;
    if (&stack0xffffff00 != &stack0xffffff3c) {
      uStack_fc = 0x40400000;
      uStack_f8 = 0x40000000;
      uStack_100 = 0;
    }
    break;
  case 2:
    if (*(int *)(param_1 + 0x2628) != 0) {
      return 0;
    }
    uStack_9c = 0x40400000;
    uStack_98 = 0x40000000;
    uStack_a0 = 0;
    if (&stack0xffffff00 != &stack0xffffff60) {
      uStack_fc = 0x40400000;
      uStack_f8 = 0x40000000;
      uStack_100 = 0;
    }
    break;
  case 3:
  case 4:
    if (*(int *)(param_1 + 0x2628) != 0) {
      return 0;
    }
    if ((param_2 != 0) &&
       (iVar2 = (**(code **)(*(int *)(param_2 + 0x154) + 0x84))(param_2,param_1), iVar2 == 4)) {
      core_actor_cpp_FUN_00408bb0(param_2,param_1 + 0x20);
      uStack_40 = uStack_34;
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar5 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffffd0 + (uint)bVar5 * -8);
      *(uint *)(&stack0xffffffc8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffd4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      core_vecdir_cpp_FUN_005a7520(&stack0xffffffc0);
      uStack_94 = uStack_70;
      (&stack0xffffff70)[(uint)bVar5 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffff94 + (uint)bVar5 * 0xfffffffe * 4);
      *(uint *)(&stack0xffffff74 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff98 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      if ((float)_DAT_005da5cc < ABS(fStack_90)) {
        return 0;
      }
    }
    uStack_7c = 0;
    uStack_74 = 0x40000000;
    uStack_78 = 0x40400000;
    if (&stack0xffffff00 != &stack0xffffff84) {
      uStack_fc = 0x40400000;
      uStack_f8 = 0x40000000;
      uStack_100 = 0;
    }
    break;
  default:
    goto switchD_00475c3b_default;
  }
  core_actor_cpp_FUN_00408b40(param_1,&stack0xffffff00);
  fStack_ac = fStack_d0;
  *(uint *)((int)&stack0xffffff58 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffff34 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffff5c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffff38 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  (**(code **)(*(int *)(param_2 + 0x154) + 0x1c))(param_2);
  puVar3 = (uint *)&stack0xfffffedc;
  puVar4 = &stack0xfffffec4;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  fStack_58 = fStack_13c + fStack_130;
  fStack_54 = fStack_138 + fStack_12c;
  fStack_50 = fStack_134 + fStack_128;
  fStack_88 = fStack_13c + fStack_130;
  *(uint *)((int)&stack0xffffff7c + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffac + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffff80 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffb0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  pfVar6 = &stack0xffffff9c;
  fStack_b8 = fStack_88 * _DAT_005da5d4;
  fStack_b4 = fStack_84 * _DAT_005da5d4;
  fStack_b0 = fStack_80 * _DAT_005da5d4;
  fStack_64 = fStack_88 * _DAT_005da5d4;
  *(float *)((int)&stack0xffffffa0 + (uint)bVar5 * 0xfffffffe * 4) =
       (&stack0xffffff4c)[(uint)bVar5 * 0xfffffffe];
  *(uint *)(&stack0xffffffa4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffff50 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  core_actor_cpp_FUN_00408b40(param_2,pfVar6);
  fStack_e8 = fStack_28;
  *(uint *)((int)&stack0xffffff1c + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffff20 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  fStack_10c = fStack_e8 - fStack_ac;
  fStack_108 = fStack_e4 - fStack_a8;
  fStack_104 = fStack_e0 - fStack_a4;
  fStack_f4 = fStack_e8 - fStack_ac;
  (&stack0xffffff10)[(uint)bVar5 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xfffffef8 + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffff14 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xfffffefc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  if (ABS(fStack_f0) <= (float)_DAT_005da5dc) {
    fVar1 = SQRT(fStack_f4 * fStack_f4 + fStack_ec * fStack_ec);
    if (*(int *)&g_CGamePtr->field_0xd0 == 3) {
      if ((float)_DAT_005da5ec < fVar1) {
        return 0;
      }
    }
    else if ((float)_DAT_005da5e4 < fVar1) {
      return 0;
    }
    if (*param_4 < fVar1) {
      return 0;
    }
    *param_4 = fVar1;
    return 1;
  }
switchD_00475c3b_default:
  return 0;
}
