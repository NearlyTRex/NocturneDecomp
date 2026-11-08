// Name: FUN_005638c0
// Address: 005638c0
// Address Range: [[005638c0, 005639de]]
// Convention: unknown
// Signature: undefined8 FUN_005638c0(int *param_1,int param_2,int *param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_005638c0(int *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  
  FUN_005637d0(param_1);
  if (5 < (int)param_3) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0x27a;
    FUN_005030e0("Too many texture sets in CDeformableModel::allocMemory.  Max is %d, requested %d.",5,param_3);
  }
  if (8 < param_4) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0x27e;
    FUN_005030e0("Too many textures in CDeformableModel::allocMemory.  Max is %d, requested %d.",8,param_4);
  }
  if (0x3c < param_5) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0x282;
    FUN_005030e0("Too many parts in CDeformableModel::allocMemory.  Max is %d, requested %d.",0x3c,param_5);
  }
  if (5 < param_2) {
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0x286;
    FUN_005030e0("Too many LODs in CDeformableModel::allocMemory.  Max is %d, requested %d.",5,param_2);
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
