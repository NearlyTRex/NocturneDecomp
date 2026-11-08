// Name: FUN_004f9c40
// Address: 004f9c40
// Address Range: [[004f9c40, 004f9d83]]
// Convention: unknown
// Signature: void FUN_004f9c40(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,undefined4 param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f9c40(int *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,uint param_7)

{
  int iVar1;
  
  if (4 < *param_1) {
    _DAT_01d71de0 = "..\\core\\morph.cpp";
    _DAT_01d71de4 = 0xac;
    FUN_004e4330("CMorphModel::addPart - too many parts!");
  }
  param_1[*param_1 * 4 + 3] = param_1[0x15];
  param_1[*param_1 * 4 + 1] = param_2;
  param_1[*param_1 * 4 + 4] = param_1[0x17];
  param_1[*param_1 * 4 + 2] = param_4;
  param_1[0x15] = param_1[0x15] + param_1[*param_1 * 4 + 1];
  param_1[0x17] = param_1[0x17] + param_1[*param_1 * 4 + 2];
  iVar1 = FUN_005a3e50(param_1[0x16],param_1[0x15] << 4);
  param_1[0x16] = iVar1;
  iVar1 = FUN_005a3e50(param_1[0x18],param_1[0x17] * 0x3c);
  param_1[0x18] = iVar1;
  *param_1 = *param_1 + 1;
  if ((param_1[0x16] == 0) || (param_1[0x18] == 0)) {
    _DAT_01d71de0 = "..\\core\\morph.cpp";
    _DAT_01d71de4 = 0xc5;
    FUN_004e4330("CMorphModel::setup - out of memory!");
  }
  if (param_3 != 0) {
    FUN_004f9e40(param_1,*param_1 + -1,param_3,0,param_2);
  }
  if (param_5 != 0) {
    FUN_004fa1c0(param_1,*param_1 + -1,param_5,param_6,param_7,0,param_4);
    return;
  }
  return;
}
