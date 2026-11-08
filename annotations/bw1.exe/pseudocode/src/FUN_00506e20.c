// Name: FUN_00506e20
// Address: 00506e20
// Address Range: [[00506e20, 0050713a]]
// Convention: unknown
// Signature: undefined4 FUN_00506e20(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

uint FUN_00506e20(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  float10 fVar5;
  uint auStackY_10b0 [1012];
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_a4;
  uint uStack_98;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  byte auStack_5c [12];
  byte auStack_50 [12];
  byte auStack_44 [12];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  uint uStack_20;
  int *piStack_1c;
  int *piStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  bVar4 = 0;
  if (*(int *)(param_1 + 0x19c) != 0) {
    FUN_00483dd0(DAT_00612560,1);
    FUN_00483de0(DAT_00612560,0xffff);
    FUN_00484f00(DAT_00612560,0x61f414);
    if (*(int *)(0x01D2C900 + 0x1008) == 0) {
      if (*(int *)(param_1 + 0x1a0) == 1) {
        fVar5 = (float10)*(float *)(param_1 + 0x17c);
        uVar1 = FUN_005c03a0();
        iStack_14 = (int)ROUND(fVar5);
        if (0 < iStack_14) {
          iVar3 = 0;
          uStack_20 = uVar1;
          do {
            fStack_30 = (float)iVar3;
            iStack_c = iVar3;
            FUN_00447f00(uStack_20,fStack_30,&stack0xffffff74,auStack_44);
            FUN_00408b40(param_1,&stack0xffffff74);
            uStack_74 = uStack_b0;
            (&stack0xffffff90)[(uint)bVar4 * 0xfffffffe] =
                 *(uint *)(&stack0xffffff54 + (uint)bVar4 * -8);
            *(uint *)(auStack_50 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + -0x1c) =
                 *(uint *)(&stack0xffffff58 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
            if (&stack0xffffff74 != &stack0xffffff8c) {
              uStack_8c = uStack_74;
              uStack_88 = uStack_70;
              uStack_84 = uStack_6c;
            }
            FUN_00506c90(param_1,&stack0xffffff74);
            iVar3 = iVar3 + 1;
          } while (iVar3 < iStack_14);
        }
      }
      else if (*(int *)(param_1 + 0x1a0) == 0) {
        fVar5 = (float10)*(float *)(param_1 + 0x17c);
        piVar2 = (int *)FUN_005c03a0();
        iStack_28 = *piVar2;
        iVar3 = (int)ROUND(fVar5);
        iStack_10 = 0;
        iStack_2c = iVar3;
        if (0 < iStack_28) {
          iStack_10 = 0;
          piStack_18 = piVar2;
          do {
            if (iVar3 % *(int *)(param_1 + 0x180) != 0) {
              iStack_c = iStack_10;
              fStack_34 = (float)iStack_10;
              FUN_00447f00(piStack_18,fStack_34,&stack0xffffff80,auStack_50);
              FUN_00408b40(param_1,&stack0xffffff80);
              uStack_c8 = uStack_98;
              (&stack0xffffff3c)[(uint)bVar4 * 0xfffffffe] =
                   *(uint *)(&stack0xffffff6c + (uint)bVar4 * -8);
              *(uint *)((int)&stack0xffffff40 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
                   *(uint *)(&stack0xffffff70 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
              if (&stack0xffffff80 != &stack0xffffff38) {
                uStack_80 = uStack_c8;
                uStack_7c = uStack_c4;
                uStack_78 = uStack_c0;
              }
              FUN_00506c90(param_1,&stack0xffffff80);
            }
            iStack_10 = iStack_10 + 1;
            iVar3 = iVar3 + 1;
          } while (iStack_10 < iStack_28);
        }
      }
    }
    else {
      iStack_24 = *(int *)(param_1 + 0x1a4);
      iVar3 = 0;
      piVar2 = (int *)(param_1 + 0x1a4);
      if (0 < iStack_24) {
        do {
          piStack_1c = piVar2;
          fStack_38 = (float)iVar3;
          iStack_c = iVar3;
          FUN_00447f00(piStack_1c,fStack_38,&stack0xffffff98,auStack_5c);
          FUN_00408b40(param_1,&stack0xffffff98);
          uStack_bc = uStack_a4;
          (&stack0xffffff48)[(uint)bVar4 * 0xfffffffe] =
               *(uint *)(&stack0xffffff60 + (uint)bVar4 * -8);
          *(uint *)((int)&stack0xffffff4c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
               *(uint *)(&stack0xffffff64 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
          if (&stack0xffffff98 != &stack0xffffff44) {
            uStack_68 = uStack_bc;
            uStack_64 = uStack_b8;
            uStack_60 = uStack_b4;
          }
          FUN_00506c90(param_1,&stack0xffffff98);
          iVar3 = iVar3 + 1;
          piVar2 = piStack_1c;
        } while (iVar3 < iStack_24);
      }
    }
    FUN_00483dd0(DAT_00612560,0);
    return 1;
  }
  return 0;
}
