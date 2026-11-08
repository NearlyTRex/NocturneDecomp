// Name: FUN_00424e30
// Address: 00424e30
// Address Range: [[00424e30, 004252e7]]
// Convention: unknown
// Signature: void FUN_00424e30(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00424e30(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  float afStackY_111c [1016];
  uint uStack_134;
  uint uStack_130;
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
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_8c;
  uint uStack_80;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_44;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  float fStack_14;
  
  bVar5 = 0;
  FUN_0057b160(param_1,param_2);
  iVar3 = 0;
LAB_00424e53:
  fStack_14 = 0.5;
  iVar4 = iVar3 * 0x2a4 + param_1;
LAB_00424e66:
  do {
    fVar2 = fStack_14 * _DAT_005b7936;
    *(float *)(iVar4 + 0x700) = fStack_14 * *(float *)(param_1 + 0x1ac8);
    *(float *)(iVar4 + 0x704) = fVar2 * *(float *)(param_1 + 0x1ac8);
    iVar3 = iVar3 + 1;
    *(float *)(iVar4 + 0x708) = fStack_14 * *(float *)(param_1 + 0x1ac8);
    if (7 < iVar3) {
      uStack_108 = 0xbe800000;
      uStack_110 = 0xbecccccd;
      uStack_10c = 0x3f0ccccd;
      FUN_00408b80(param_1,&stack0xfffffef0);
      uStack_128 = uStack_50;
      *(uint *)((int)&stack0xfffffedc + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffb4 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xfffffee0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffb8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      *(uint *)(param_1 + 0x5c8) = uStack_128;
      *(uint *)(param_1 + 0x5cc) = uStack_124;
      *(uint *)(param_1 + 0x5d0) = uStack_120;
      uStack_ec = 0xbe19999a;
      uStack_e4 = 0xbe800000;
      uStack_e8 = 0x3f0ccccd;
      FUN_00408b80(param_1,&stack0xffffff14);
      uStack_5c = uStack_2c;
      *(uint *)((int)&stack0xffffffa8 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffffd8 + (uint)bVar5 * 0xfffffffe * 4);
      *(uint *)((int)&stack0xffffffac + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffdc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      *(uint *)(param_1 + 0x86c) = uStack_5c;
      *(uint *)(param_1 + 0x870) = uStack_58;
      *(uint *)(param_1 + 0x874) = uStack_54;
      uStack_a8 = 0xbe800000;
      uStack_b0 = 0x3dcccccd;
      uStack_ac = 0x3f0ccccd;
      FUN_00408b80(param_1,&stack0xffffff50);
      uStack_74 = uStack_80;
      *(uint *)((int)&stack0xffffff90 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff84 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffff94 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff88 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      *(uint *)(param_1 + 0xb10) = uStack_74;
      *(uint *)(param_1 + 0xb14) = uStack_70;
      *(uint *)(param_1 + 0xb18) = uStack_6c;
      uStack_38 = 0x3eb33333;
      uStack_30 = 0xbe800000;
      uStack_34 = 0x3f0ccccd;
      FUN_00408b80(param_1,&stack0xffffffc8);
      uStack_d4 = uStack_bc;
      *(uint *)((int)&stack0xffffff30 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff48 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffff34 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff4c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      *(uint *)(param_1 + 0xdb4) = uStack_d4;
      *(uint *)(param_1 + 0xdb8) = uStack_d0;
      *(uint *)(param_1 + 0xdbc) = uStack_cc;
      uStack_18 = 0xbe800000;
      uStack_20 = 0x3f19999a;
      uStack_1c = 0x3f0ccccd;
      FUN_00408b80(param_1,&stack0xffffffe0);
      uStack_134 = uStack_98;
      *(uint *)((int)&stack0xfffffed0 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff6c + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xfffffed4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff70 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      *(uint *)(param_1 + 0x1058) = uStack_134;
      *(uint *)(param_1 + 0x105c) = uStack_130;
      *(uint *)(param_1 + 0x1060) = uStack_12c;
      uStack_11c = 0x3dcccccd;
      uStack_114 = 0xbe800000;
      uStack_118 = 0x3f4ccccd;
      FUN_00408b80(param_1,&stack0xfffffee4);
      uStack_c8 = uStack_44;
      *(uint *)((int)&stack0xffffff3c + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffc0 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffff40 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffc4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      *(uint *)(param_1 + 0x12fc) = uStack_c8;
      *(uint *)(param_1 + 0x1300) = uStack_c4;
      *(uint *)(param_1 + 0x1304) = uStack_c0;
      uStack_f0 = 0xbe800000;
      uStack_f8 = 0x3dcccccd;
      uStack_f4 = 0x3f866666;
      FUN_00408b80(param_1,&stack0xffffff08);
      uStack_a4 = uStack_e0;
      (&stack0xffffff60)[(uint)bVar5 * 0xfffffffe] =
           *(uint *)((int)&stack0xffffff24 + (uint)bVar5 * 0xfffffffe * 4);
      *(uint *)((int)&stack0xffffff64 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff28 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      *(uint *)(param_1 + 0x15a0) = uStack_a4;
      *(uint *)(param_1 + 0x15a4) = uStack_a0;
      *(uint *)(param_1 + 0x15a8) = uStack_9c;
      uStack_104 = 0x3dcccccd;
      uStack_fc = 0xbe800000;
      uStack_100 = 0x3e99999a;
      FUN_00408b80(param_1,&stack0xfffffefc);
      uStack_68 = uStack_8c;
      *(uint *)((int)&stack0xffffff9c + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff78 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffffa0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff7c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      *(uint *)(param_1 + 0x1844) = uStack_68;
      *(uint *)(param_1 + 0x1848) = uStack_64;
      iVar3 = param_1 + 0x5a8;
      *(uint *)(param_1 + 0x184c) = uStack_60;
      do {
        (**(code **)(*(int *)(iVar3 + 0x154) + 0xc))(iVar3,param_2);
        iVar3 = iVar3 + 0x2a4;
      } while (iVar3 != param_1 + 0x1ac8);
      if (((*(uint *)(param_1 + 0x594) & 0x7fffffff) != 0) &&
         (*(float *)(param_1 + 0x594) = *(float *)(param_1 + 0x594) - param_2,
         *(float *)(param_1 + 0x594) < 0.0)) {
        *(uint *)(param_1 + 0x594) = 0;
      }
      if (*(int *)(param_1 + 0x59c) == 0) {
        *(float *)(param_1 + 0x1ac8) = *(float *)(param_1 + 0x1ac8) - param_2;
        if (0.0 <= *(float *)(param_1 + 0x1ac8)) goto LAB_0042526b;
        *(uint *)(param_1 + 0x1ac8) = 0;
      }
      else {
        *(float *)(param_1 + 0x1ac8) = param_2 * _DAT_005b7936 + *(float *)(param_1 + 0x1ac8);
        if (0x3f800000 < *(int *)(param_1 + 0x1ac8)) {
          *(uint *)(param_1 + 0x1ac8) = 0x3f800000;
          goto LAB_00425278;
        }
LAB_0042526b:
        if (0.0 < *(float *)(param_1 + 0x1ac8)) goto LAB_00425278;
      }
      FUN_00556be0(*(uint *)(param_1 + 0x5a4));
      *(uint *)(param_1 + 0x5a4) = 0;
LAB_00425278:
      uVar1 = *(uint *)(param_1 + 0x59c);
      *(uint *)(param_1 + 0x59c) = 0;
      *(uint *)(param_1 + 0x5a0) = uVar1;
      return;
    }
    if ((iVar3 != 1) && (iVar3 != 3)) {
      if (((iVar3 == 2) || (iVar3 == 5)) || (iVar3 == 6)) {
        fStack_14 = 0.8;
        iVar4 = iVar4 + 0x2a4;
        goto LAB_00424e66;
      }
      goto LAB_00424e53;
    }
    fStack_14 = 0.65;
    iVar4 = iVar4 + 0x2a4;
  } while( true );
}
