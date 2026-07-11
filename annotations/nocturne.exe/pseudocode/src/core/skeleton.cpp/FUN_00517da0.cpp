// Name: FUN_00517da0
// Address: 00517da0
// Address Range: [[00517da0, 00517ebe]]
// Convention: unknown
// Signature: undefined8 FUN_00517da0(int *param_1,int param_2,int *param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00517da0(int *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  
  FUN_00517cc0(param_1);
  if (5 < (int)param_3) {
    _DAT_01cc4800 = "..\\core\\skeleton.cpp";
    _DAT_01cc4804 = 0x261;
    FUN_004c8440("Too many texture sets in CDeformableModel::allocMemory.  Max is %d, requested %d.",5,param_3);
  }
  if (8 < param_4) {
    _DAT_01cc4800 = "..\\core\\skeleton.cpp";
    _DAT_01cc4804 = 0x265;
    FUN_004c8440("Too many textures in CDeformableModel::allocMemory.  Max is %d, requested %d.",8,param_4);
  }
  if (0x1e < param_5) {
    _DAT_01cc4800 = "..\\core\\skeleton.cpp";
    _DAT_01cc4804 = 0x269;
    FUN_004c8440("Too many parts in CDeformableModel::allocMemory.  Max is %d, requested %d.",0x1e,param_5);
  }
  if (5 < param_2) {
    _DAT_01cc4800 = "..\\core\\skeleton.cpp";
    _DAT_01cc4804 = 0x26d;
    FUN_004c8440("Too many LODs in CDeformableModel::allocMemory.  Max is %d, requested %d.",5,param_2);
  }
  param_1[0x2f] = param_4;
  param_1[0x300] = param_5;
  *param_1 = param_2;
  iVar2 = 0;
  param_1[0x2e] = (int)param_3;
  piVar1 = param_1;
  if (0 < param_2) {
    do {
      piVar1[1] = 1;
      piVar1[2] = 0;
      iVar2 = iVar2 + 1;
      param_3 = piVar1 + 2;
      piVar1 = param_3;
    } while (iVar2 < *param_1);
  }
  return CONCAT44(iVar2,param_3);
}
