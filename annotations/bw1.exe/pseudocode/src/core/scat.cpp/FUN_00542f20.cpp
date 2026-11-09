// Name: core_scat.cpp_FUN_00542f20
// Address: 00542f20
// Address Range: [[00542f20, 0054306a]]
// Convention: unknown
// Signature: void core_scat_cpp_FUN_00542f20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_scat_cpp_FUN_00542f20(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStackY_1044 [940];
  CMatrix3x4f local_158 [48];
  CMatrix3x4f local_128 [48];
  uint local_f8 [12];
  uint local_c8 [12];
  uint local_98 [12];
  CVector3f local_68;
  uint local_5c;
  uint auStack_58 [6];
  uint auStack_40 [5];
  uint local_2c;
  CVector3f local_20;
  int local_14;
  
  bVar5 = 0;
  if ((*(int *)(param_1 + 0x1ffc0) != 0) && (*(int *)(*(int *)(param_1 + 0x1ffc0) + 0x2e0) != 8)) {
    auStack_58[2] = 0;
    auStack_58[4] = 0x3fc90fdb;
    auStack_58[3] = 0x3fc90fdb;
    local_20._0_4_ = 0x3ec817db;
    local_68._0_4_ = 0;
    local_68._4_4_ = 0x3fc90fdb;
    local_68._8_4_ = 0x3fc90fdb;
    local_20._4_4_ = 0xbdd340d5;
    local_20._8_4_ = 0x3ddfa765;
    core_xform_cpp_FUN_005b5760(local_158,&local_20,&local_68);
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_158,_DAT_01e7e04c * 0x30 + param_1 + 0xfd8);
    puVar3 = local_f8;
    puVar4 = local_98;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    core_xform_cpp_FUN_005b5760
              (local_128,(CVector3f *)(param_1 + 0x20),(CVector3f *)(param_1 + 0x30));
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(local_98,local_128);
    puVar3 = (uint *)&stack0xfffffe78;
    puVar4 = local_c8;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    iVar2 = *(int *)(param_1 + 0x1ffc0);
    local_14 = *(int *)(iVar2 + 0x154);
    core_xform_cpp_FUN_005b5930(local_c8);
    puVar3 = auStack_58 + 5;
    auStack_58[5] = auStack_40[2];
    auStack_40[(uint)bVar5 * -2] = auStack_40[(uint)bVar5 * -2 + 3];
    auStack_40[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         auStack_40[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    core_xform_cpp_FUN_005b6270(local_c8,puVar3);
    iVar1 = local_14;
    puVar3 = &local_5c;
    local_5c = local_2c;
    auStack_58[(uint)bVar5 * -2] = auStack_40[(uint)bVar5 * -2 + 6];
    auStack_58[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         auStack_40[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
    (**(code **)(iVar1 + 0x68))(iVar2,puVar3);
    return;
  }
  return;
}
