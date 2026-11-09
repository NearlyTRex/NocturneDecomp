// Name: core_setdir.cpp_FUN_005398d0
// Address: 005398d0
// Address Range: [[005398d0, 005399f4] [00539b85, 00539bdb]]
// Convention: unknown
// Signature: void core_setdir_cpp_FUN_005398d0(CDemonSet *param_1,_FILE *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_setdir_cpp_FUN_005398d0(CDemonSet *param_1,_FILE *param_2)

{
  int iVar1;
  uint unaff_EBX;
  uint uVar2;
  int iVar3;
  uint unaff_ESI;
  byte bVar4;
  byte *apuStackY_108c [1008];
  uint uStack_b0;
  uint uStack_ac;
  CVector3f CStack_a4;
  CVector3f CStack_98;
  uint uStack_8c;
  uint auStack_88 [2];
  CVector3f CStack_80;
  CVector3f CStack_74;
  uint uStack_68;
  uint auStack_64 [5];
  CVector3f CStack_50;
  uint uStack_44;
  uint auStack_40 [5];
  CVector3f CStack_2c;
  CVector3f CStack_20;
  uint uStack_14;
  byte *apuStack_10 [3];
  
  bVar4 = 0;
  iVar3 = 0;
  uStack_ac = 0x5398e6;
  core_setdir_cpp_CDemonSet_freeThumbs_FUN_00539be0(param_1);
LAB_005398e9:
  while( true ) {
    if (*(int *)param_1 <= iVar3) {
      return;
    }
    uStack_ac = unaff_ESI;
    uStack_b0 = unaff_EBX;
    apuStack_10[2] = &param_1->field_0x4 + iVar3 * 0x1a4;
    if (*(int *)(apuStack_10[2] + 0x140) != 0) break;
    core_setdir_cpp_CZThumb_saveZBufferTable_FUN_00538470
              (g_CZThumbPool + iVar3 * 6,(CVector3f *)(apuStack_10[2] + 0x100),
               (CVector3f *)(apuStack_10[2] + 0x10c),0x40,0x30,
               *(float *)(apuStack_10[2] + 0x144) * (float)_DAT_005e6045,param_2);
    iVar3 = iVar3 + 1;
    unaff_EBX = uStack_b0;
    unaff_ESI = uStack_ac;
  }
  uVar2 = 0;
  do {
    switch(uVar2) {
    default:
      auStack_40[1] = 0;
      auStack_40[0] = 0;
      uStack_44 = 0;
      CStack_80._0_4_ = 0;
      *(uint *)((int)&CStack_80 + (uint)bVar4 * -8 + 4) = auStack_40[(uint)bVar4 * -2];
      *(uint *)((int)&CStack_80 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           auStack_40[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (&CStack_74 != &CStack_80) {
        CStack_74._0_4_ = CStack_80._0_4_;
        CStack_74._4_4_ = CStack_80._4_4_;
      }
      break;
    case 1:
      auStack_40[4] = 0;
      auStack_40[3] = 0x40490fdb;
      auStack_40[2] = 0;
      CStack_20._0_4_ = 0;
      *(uint *)((int)&CStack_20 + (uint)bVar4 * -8 + 4) = auStack_40[(uint)bVar4 * -2 + 3];
      *(uint *)((int)&CStack_20 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           auStack_40[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      if (&CStack_74 != &CStack_20) {
        CStack_74._0_4_ = CStack_20._0_4_;
        CStack_74._4_4_ = CStack_20._4_4_;
      }
      break;
    case 2:
      auStack_64[1] = 0;
      uStack_68 = 0;
      auStack_64[0] = 0x3fc90fdb;
      CStack_98._0_4_ = 0;
      *(uint *)((int)&CStack_98 + (uint)bVar4 * -8 + 4) = auStack_64[(uint)bVar4 * -2];
      *(uint *)((int)&CStack_98 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           auStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (&CStack_74 != &CStack_98) {
        CStack_74._0_4_ = CStack_98._0_4_;
        CStack_74._4_4_ = CStack_98._4_4_;
      }
      break;
    case 3:
      auStack_88[1] = 0;
      uStack_8c = 0;
      auStack_88[0] = 0xbfc90fdb;
      CStack_50._0_4_ = 0;
      *(uint *)((int)&CStack_50 + (uint)bVar4 * -8 + 4) = auStack_88[(uint)bVar4 * -2];
      *(uint *)((int)&CStack_50 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           auStack_88[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (&CStack_74 != &CStack_50) {
        CStack_74._0_4_ = CStack_50._0_4_;
        CStack_74._4_4_ = CStack_50._4_4_;
      }
      break;
    case 4:
      auStack_64[4] = 0;
      auStack_64[3] = 0;
      auStack_64[2] = 0xbfc90fdb;
      CStack_2c._0_4_ = 0xbfc90fdb;
      *(uint *)((int)&CStack_2c + (uint)bVar4 * -8 + 4) = auStack_64[(uint)bVar4 * -2 + 3];
      *(uint *)((int)&CStack_2c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           auStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      if (&CStack_74 != &CStack_2c) {
        CStack_74._0_4_ = CStack_2c._0_4_;
        CStack_74._4_4_ = CStack_2c._4_4_;
      }
      break;
    case 5:
      uStack_14 = 0x3fc90fdb;
      apuStack_10[1] = (byte *)0x0;
      apuStack_10[0] = (byte *)0x0;
      CStack_a4._0_4_ = 0x3fc90fdb;
      *(byte **)((int)&CStack_a4 + (uint)bVar4 * -8 + 4) = apuStack_10[(uint)bVar4 * -2];
      *(byte **)((int)&CStack_a4 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           apuStack_10[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (&CStack_74 != &CStack_a4) {
        CStack_74._0_4_ = CStack_a4._0_4_;
        CStack_74._4_4_ = CStack_a4._4_4_;
      }
    }
    while( true ) {
      iVar1 = iVar3 * 6 + uVar2;
      uVar2 = uVar2 + 1;
      core_setdir_cpp_CZThumb_saveZBufferTable_FUN_00538470
                (g_CZThumbPool + iVar1,(CVector3f *)(apuStack_10[2] + 0x100),&CStack_74,0x40,0x40,
                 1.0,param_2);
      if (5 < (int)uVar2) {
        iVar3 = iVar3 + 1;
        unaff_EBX = uStack_b0;
        unaff_ESI = uStack_ac;
        goto LAB_005398e9;
      }
      if (uVar2 < 6) break;
      _DAT_01d046a0 = "..\\core\\setdir.cpp";
      _DAT_01d046a4 = 0x3aa;
      core_main_c_FUN_004e4500("Hell froze");
    }
  } while( true );
}
