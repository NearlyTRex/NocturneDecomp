// Name: core_burncrss.cpp_FUN_00424e30
// Address: 00424e30
// Address Range: [[00424e30, 004252e7]]
// Convention: unknown
// Signature: void core_burncrss_cpp_FUN_00424e30(CWeapon *param_1,float param_2,undefined4 param_3,float param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_burncrss_cpp_FUN_00424e30(CWeapon *param_1,float param_2,uint param_3,float param_4)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  byte *puVar4;
  byte bVar5;
  uint auStackY_1114 [1014];
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
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
  uint uStack_d8;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_84;
  uint uStack_78;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_3c;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_18;
  uint uStack_14;
  float fVar6;
  
  bVar5 = 0;
  core_weapon_cpp_FUN_0057b160(param_1,param_2);
  iVar3 = 0;
LAB_00424e53:
  fVar6 = 0.5;
  puVar4 = &param_1->field_0x0 + iVar3 * 0x2a4;
LAB_00424e66:
  do {
    fVar2 = fVar6 * _DAT_005b7936;
    *(float *)(puVar4 + 0x700) = fVar6 * *(float *)&param_1[4].field_0x478;
    *(float *)(puVar4 + 0x704) = fVar2 * *(float *)&param_1[4].field_0x478;
    iVar3 = iVar3 + 1;
    *(float *)(puVar4 + 0x708) = fVar6 * *(float *)&param_1[4].field_0x478;
    if (7 < iVar3) {
      uStack_100 = 0xbe800000;
      uStack_108 = 0xbecccccd;
      uStack_104 = 0x3f0ccccd;
      core_actor_cpp_FUN_00408b80(param_1,&stack0xfffffef8);
      uStack_120 = uStack_48;
      *(uint *)((int)&stack0xfffffee4 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffbc + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xfffffee8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffc0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      *(uint *)&param_1[1].field_0x34 = uStack_120;
      *(uint *)&param_1[1].field_0x38 = uStack_11c;
      *(uint *)&param_1[1].field_0x3c = uStack_118;
      uStack_e4 = 0xbe19999a;
      uStack_dc = 0xbe800000;
      uStack_e0 = 0x3f0ccccd;
      core_actor_cpp_FUN_00408b80(param_1,&stack0xffffff1c);
      uStack_54 = uStack_24;
      *(uint *)((int)&stack0xffffffb0 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffffe0 + (uint)bVar5 * 0xfffffffe * 4);
      *(uint *)((int)&stack0xffffffb4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffe4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      *(uint *)&param_1[1].field_0x2d8 = uStack_54;
      *(uint *)&param_1[1].field_0x2dc = uStack_50;
      *(uint *)&param_1[1].field_0x2e0 = uStack_4c;
      uStack_a0 = 0xbe800000;
      uStack_a8 = 0x3dcccccd;
      uStack_a4 = 0x3f0ccccd;
      core_actor_cpp_FUN_00408b80(param_1,&stack0xffffff58);
      uStack_6c = uStack_78;
      *(uint *)((int)&stack0xffffff98 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff8c + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffff9c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff90 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      *(uint *)&param_1[1].field_0x57c = uStack_6c;
      *(uint *)&param_1[1].field_0x580 = uStack_68;
      *(uint *)&param_1[1].field_0x584 = uStack_64;
      uStack_30 = 0x3eb33333;
      uStack_28 = 0xbe800000;
      uStack_2c = 0x3f0ccccd;
      core_actor_cpp_FUN_00408b80(param_1,&stack0xffffffd0);
      uStack_cc = uStack_b4;
      *(uint *)((int)&stack0xffffff38 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff50 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffff3c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff54 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      *(uint *)&param_1[2].field_0x28c = uStack_cc;
      *(uint *)&param_1[2].field_0x290 = uStack_c8;
      *(uint *)&param_1[2].field_0x294 = uStack_c4;
      uStack_18 = 0x3f19999a;
      uStack_14 = 0x3f0ccccd;
      core_actor_cpp_FUN_00408b80(param_1,&stack0xffffffe8);
      uStack_12c = uStack_90;
      *(uint *)((int)&stack0xfffffed8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff74 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xfffffedc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff78 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      *(uint *)&param_1[2].field_0x530 = uStack_12c;
      *(uint *)&param_1[2].field_0x534 = uStack_128;
      *(uint *)&param_1[2].field_0x538 = uStack_124;
      uStack_114 = 0x3dcccccd;
      uStack_10c = 0xbe800000;
      uStack_110 = 0x3f4ccccd;
      core_actor_cpp_FUN_00408b80(param_1,&stack0xfffffeec);
      uStack_c0 = uStack_3c;
      *(uint *)((int)&stack0xffffff44 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffc8 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffff48 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffcc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      *(uint *)&param_1[3].field_0x240 = uStack_c0;
      *(uint *)&param_1[3].field_0x244 = uStack_bc;
      *(uint *)&param_1[3].field_0x248 = uStack_b8;
      uStack_e8 = 0xbe800000;
      uStack_f0 = 0x3dcccccd;
      uStack_ec = 0x3f866666;
      core_actor_cpp_FUN_00408b80(param_1,&stack0xffffff10);
      uStack_9c = uStack_d8;
      (&stack0xffffff68)[(uint)bVar5 * 0xfffffffe] =
           *(uint *)((int)&stack0xffffff2c + (uint)bVar5 * 0xfffffffe * 4);
      *(uint *)((int)&stack0xffffff6c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff30 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      *(uint *)&param_1[3].field_0x4e4 = uStack_9c;
      *(uint *)&param_1[3].field_0x4e8 = uStack_98;
      *(uint *)&param_1[3].field_0x4ec = uStack_94;
      uStack_fc = 0x3dcccccd;
      uStack_f4 = 0xbe800000;
      uStack_f8 = 0x3e99999a;
      core_actor_cpp_FUN_00408b80(param_1,&stack0xffffff04);
      uStack_60 = uStack_84;
      *(uint *)((int)&stack0xffffffa4 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff80 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffffa8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff84 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      *(uint *)&param_1[4].field_0x1f4 = uStack_60;
      *(uint *)&param_1[4].field_0x1f8 = uStack_5c;
      puVar4 = &param_1[1].field_0x14;
      *(uint *)&param_1[4].field_0x1fc = uStack_58;
      do {
        (**(code **)(*(int *)(puVar4 + 0x154) + 0xc))(puVar4,param_4);
        puVar4 = puVar4 + 0x2a4;
      } while (puVar4 != &param_1[4].field_0x478);
      if (((*(uint *)(param_1 + 1) & 0x7fffffff) != 0) &&
         (*(float *)(param_1 + 1) = *(float *)(param_1 + 1) - param_4, *(float *)(param_1 + 1) < 0.0
         )) {
        *(uint *)(param_1 + 1) = 0;
      }
      if (*(int *)&param_1[1].field_0x8 == 0) {
        *(float *)&param_1[4].field_0x478 = *(float *)&param_1[4].field_0x478 - param_4;
        if (0.0 <= *(float *)&param_1[4].field_0x478) goto LAB_0042526b;
        *(uint *)&param_1[4].field_0x478 = 0;
      }
      else {
        *(float *)&param_1[4].field_0x478 =
             param_4 * _DAT_005b7936 + *(float *)&param_1[4].field_0x478;
        if (0x3f800000 < *(int *)&param_1[4].field_0x478) {
          *(uint *)&param_1[4].field_0x478 = 0x3f800000;
          goto LAB_00425278;
        }
LAB_0042526b:
        if (0.0 < *(float *)&param_1[4].field_0x478) goto LAB_00425278;
      }
      sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1[1].field_0x10);
      *(uint *)&param_1[1].field_0x10 = 0;
LAB_00425278:
      uVar1 = *(uint *)&param_1[1].field_0x8;
      *(uint *)&param_1[1].field_0x8 = 0;
      *(uint *)&param_1[1].field_0xc = uVar1;
      return;
    }
    if ((iVar3 != 1) && (iVar3 != 3)) {
      if (((iVar3 == 2) || (iVar3 == 5)) || (iVar3 == 6)) {
        fVar6 = 0.8;
        puVar4 = puVar4 + 0x2a4;
        goto LAB_00424e66;
      }
      goto LAB_00424e53;
    }
    fVar6 = 0.65;
    puVar4 = puVar4 + 0x2a4;
  } while( true );
}
