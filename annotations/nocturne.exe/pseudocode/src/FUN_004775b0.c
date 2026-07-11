// Name: FUN_004775b0
// Address: 004775b0
// Address Range: [[004775b0, 00477651]]
// Convention: unknown
// Signature: bool FUN_004775b0(byte *param_1,byte *param_2,int param_3)

#include "nocturne.h"

bool FUN_004775b0(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = *param_1;
  do {
    if (bVar1 == 0) {
      return *param_2 == 0;
    }
    bVar1 = *param_1;
    if (bVar1 < 0x2a) {
LAB_004775d2:
      if (param_3 == 0) {
        iVar2 = FUN_00564860(*param_1);
        iVar3 = FUN_00564860(*param_2);
        if (iVar2 != iVar3) {
          return false;
        }
      }
      else if (*param_1 != *param_2) {
        return false;
      }
    }
    else {
      if (bVar1 < 0x2b) {
        while( true ) {
          iVar2 = FUN_004775b0(param_1 + 1,param_2,param_3);
          if (iVar2 != 0) {
            return true;
          }
          if (*param_2 == 0) break;
          param_2 = param_2 + 1;
        }
        return false;
      }
      if (bVar1 != 0x3f) goto LAB_004775d2;
      if (*param_2 == 0) {
        return false;
      }
    }
    param_2 = param_2 + 1;
    bVar1 = param_1[1];
    param_1 = param_1 + 1;
  } while( true );
}
