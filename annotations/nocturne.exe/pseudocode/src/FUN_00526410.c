// Name: FUN_00526410
// Address: 00526410
// Address Range: [[00526410, 00526596]]
// Convention: unknown
// Signature: void FUN_00526410(undefined1 *param_1,int param_2,undefined4 *param_3,byte param_4)

#include "nocturne.h"

void FUN_00526410(byte *param_1,int param_2,uint *param_3,byte param_4)

{
  int iVar1;
  
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    iVar1 = _sprintf(param_1,"%s",param_2);
    param_1 = param_1 + iVar1;
  }
  if ((param_4 & 1) != 0) {
    iVar1 = _sprintf(param_1," channel=%d%s",*param_3);
    param_1 = param_1 + iVar1;
  }
  if ((param_4 & 2) != 0) {
    if (param_3[8] == 0) {
      iVar1 = _sprintf(param_1," pos=%lg,%lg,%lg",param_3[1],param_3[2],param_3[3],param_3[4]
                         ,param_3[5],param_3[6]);
      param_1 = param_1 + iVar1;
    }
    if (param_3[8] == 1) {
      iVar1 = _sprintf(param_1," posPtrFloat=%p",param_3[7]);
      param_1 = param_1 + iVar1;
    }
    if (param_3[8] == 2) {
      iVar1 = _sprintf(param_1," posPtrDouble=%p",param_3[7]);
      param_1 = param_1 + iVar1;
    }
  }
  if ((param_4 & 4) != 0) {
    if (param_3[0x10] == 0) {
      iVar1 = _sprintf(param_1," vel=%lg,%lg,%lg",param_3[9],param_3[10],param_3[0xb],
                         param_3[0xc],param_3[0xd],param_3[0xe]);
      param_1 = param_1 + iVar1;
    }
    if (param_3[0x10] == 1) {
      iVar1 = _sprintf(param_1," velPtrFloat=%p",param_3[0xf]);
      param_1 = param_1 + iVar1;
    }
    if (param_3[0x10] == 2) {
      iVar1 = _sprintf(param_1," velPtrDouble=%p",param_3[0xf]);
      param_1 = param_1 + iVar1;
    }
  }
  if ((param_4 & 8) != 0) {
    iVar1 = _sprintf(param_1," vol=%g",(double)(float)param_3[0x11]);
    param_1 = param_1 + iVar1;
  }
  if ((param_4 & 0x10) != 0) {
    iVar1 = _sprintf(param_1," freq=%g",(double)(float)param_3[0x12])
    ;
    param_1 = param_1 + iVar1;
  }
  if ((param_4 & 0x20) == 0) {
    return;
  }
  _sprintf(param_1," delay=%lg",param_3[0x13],param_3[0x14]);
  return;
}
