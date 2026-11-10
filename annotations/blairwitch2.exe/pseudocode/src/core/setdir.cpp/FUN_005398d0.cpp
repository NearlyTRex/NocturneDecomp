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
  float afStackY_108c [1008];
  uint uStack_b0;
  uint uStack_ac;
  CVector3f CStack_a4;
  CVector3f CStack_98;
  uint uStack_8c;
  float afStack_88 [2];
  CVector3f CStack_80;
  CVector3f CStack_74;
  uint uStack_68;
  float afStack_64 [5];
  CVector3f CStack_50;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  C3DSCamera *local_8;
  
  bVar4 = 0;
  iVar3 = 0;
  uStack_ac = 0x5398e6;
  core_setdir_cpp_CDemonSet_freeThumbs_FUN_00539be0(param_1);
LAB_005398e9:
  while( true ) {
    if (param_1->camera_count <= iVar3) {
      return;
    }
    uStack_ac = unaff_ESI;
    uStack_b0 = unaff_EBX;
    local_8 = param_1->cameras + iVar3;
    if (*(int *)&local_8->field_0x140 != 0) break;
    core_setdir_cpp_CZThumb_saveZBufferTable_FUN_00538470
              (g_CZThumbPool + iVar3 * 6,(CVector3f *)&local_8->field_0x100,
               (CVector3f *)&local_8->field_0x10c,0x40,0x30,
               *(float *)&local_8->field_0x144 * (float)_DAT_005e6045,param_2);
    iVar3 = iVar3 + 1;
    unaff_EBX = uStack_b0;
    unaff_ESI = uStack_ac;
  }
  uVar2 = 0;
  do {
    switch(uVar2) {
    default:
      uStack_3c = 0;
      uStack_40 = 0;
      uStack_44 = 0;
      CStack_80.x = 0.0;
      afStack_64[(uint)bVar4 * -2 + -6] = afStack_64[(uint)bVar4 * -2 + 9];
      *(float *)((int)&CStack_80 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
      if (&CStack_74 != &CStack_80) {
        CStack_74.x = CStack_80.x;
        CStack_74.y = CStack_80.y;
      }
      break;
    case 1:
      uStack_30 = 0;
      uStack_34 = 0x40490fdb;
      uStack_38 = 0;
      CStack_20.x = 0.0;
      afStack_64[(uint)bVar4 * -2 + 0x12] = afStack_64[(uint)bVar4 * -2 + 0xc];
      afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13] =
           afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
      if (&CStack_74 != (CVector3f *)(afStack_64 + 0x11)) {
        CStack_74.x = CStack_20.x;
        CStack_74.y = CStack_20.y;
      }
      break;
    case 2:
      afStack_64[1] = 0.0;
      uStack_68 = 0;
      afStack_64[0] = 1.5707964;
      CStack_98.x = 0.0;
      *(float *)((int)&CStack_98 + (uint)bVar4 * -8 + 4) = afStack_64[(uint)bVar4 * -2];
      *(float *)((int)&CStack_98 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (&CStack_74 != &CStack_98) {
        CStack_74.x = CStack_98.x;
        CStack_74.y = CStack_98.y;
      }
      break;
    case 3:
      afStack_88[1] = 0.0;
      uStack_8c = 0;
      afStack_88[0] = -1.5707964;
      CStack_50.x = 0.0;
      afStack_64[(uint)bVar4 * -2 + 6] = afStack_88[(uint)bVar4 * -2];
      afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
           afStack_88[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (&CStack_74 != (CVector3f *)(afStack_64 + 5)) {
        CStack_74.x = CStack_50.x;
        CStack_74.y = CStack_50.y;
      }
      break;
    case 4:
      afStack_64[4] = 0.0;
      afStack_64[3] = 0.0;
      afStack_64[2] = -1.5707964;
      CStack_2c.x = -1.5707964;
      afStack_64[(uint)bVar4 * -2 + 0xf] = afStack_64[(uint)bVar4 * -2 + 3];
      afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
           afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      if (&CStack_74 != (CVector3f *)(afStack_64 + 0xe)) {
        CStack_74.x = CStack_2c.x;
        CStack_74.y = CStack_2c.y;
      }
      break;
    case 5:
      uStack_14 = 0x3fc90fdb;
      uStack_c = 0;
      uStack_10 = 0;
      CStack_a4.x = 1.5707964;
      *(float *)((int)&CStack_a4 + (uint)bVar4 * -8 + 4) = afStack_64[(uint)bVar4 * -2 + 0x15];
      *(float *)((int)&CStack_a4 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16];
      if (&CStack_74 != &CStack_a4) {
        CStack_74.x = CStack_a4.x;
        CStack_74.y = CStack_a4.y;
      }
    }
    while( true ) {
      iVar1 = iVar3 * 6 + uVar2;
      uVar2 = uVar2 + 1;
      core_setdir_cpp_CZThumb_saveZBufferTable_FUN_00538470
                (g_CZThumbPool + iVar1,(CVector3f *)&local_8->field_0x100,&CStack_74,0x40,0x40,1.0,
                 param_2);
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
