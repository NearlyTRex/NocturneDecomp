// Name: FUN_004737a0
// Address: 004737a0
// Address Range: [[004737a0, 004739d4]]
// Convention: unknown
// Signature: void FUN_004737a0(undefined4 param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004737a0(uint param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (((((-1 < param_2) && (-1 < param_3)) && (param_2 < DAT_005b761c)) &&
      ((param_3 < DAT_005b7620 && (_DAT_01c00c58 <= param_2)))) &&
     ((param_2 < _DAT_01c00c60 && ((_DAT_01c00c5c <= param_3 && (param_3 < _DAT_01c00c64)))))) {
    engine_2d_c_plotPixel_FUN_00401530(param_2,param_3);
  }
  iVar2 = param_3 + -param_4;
  iVar1 = -param_4 + param_2;
  param_2 = param_4 + param_2;
  param_4 = param_4 + param_3;
  while (param_3 < param_4) {
    if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < DAT_005b761c)) &&
       (((iVar2 < DAT_005b7620 && (_DAT_01c00c58 <= iVar1)) &&
        ((iVar1 < _DAT_01c00c60 && ((_DAT_01c00c5c <= iVar2 && (iVar2 < _DAT_01c00c64)))))))) {
      engine_2d_c_plotPixel_FUN_00401530(iVar1,iVar2);
    }
    if (((((-1 < param_2) && (-1 < iVar2)) && (param_2 < DAT_005b761c)) &&
        ((iVar2 < DAT_005b7620 && (_DAT_01c00c58 <= param_2)))) &&
       ((param_2 < _DAT_01c00c60 && ((_DAT_01c00c5c <= iVar2 && (iVar2 < _DAT_01c00c64)))))) {
      engine_2d_c_plotPixel_FUN_00401530(param_2,iVar2);
    }
    if ((((((-1 < iVar1) && (-1 < param_4)) && (iVar1 < DAT_005b761c)) &&
         ((param_4 < DAT_005b7620 && (_DAT_01c00c58 <= iVar1)))) && (iVar1 < _DAT_01c00c60)) &&
       ((_DAT_01c00c5c <= param_4 && (param_4 < _DAT_01c00c64)))) {
      engine_2d_c_plotPixel_FUN_00401530(iVar1,param_4);
    }
    if ((((param_2 < 0) || (param_4 < 0)) || (DAT_005b761c <= param_2)) ||
       (((DAT_005b7620 <= param_4 || (param_2 < _DAT_01c00c58)) ||
        ((_DAT_01c00c60 <= param_2 || ((param_4 < _DAT_01c00c5c || (_DAT_01c00c64 <= param_4))))))))
    {
      iVar1 = iVar1 + 1;
      param_2 = param_2 + -1;
      param_4 = param_4 + -1;
      iVar2 = iVar2 + 1;
    }
    else {
      engine_2d_c_plotPixel_FUN_00401530(param_2,param_4);
      iVar1 = iVar1 + 1;
      param_2 = param_2 + -1;
      param_4 = param_4 + -1;
      iVar2 = iVar2 + 1;
    }
  }
  return;
}
