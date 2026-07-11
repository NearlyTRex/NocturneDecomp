// Name: FUN_004e2ac0
// Address: 004e2ac0
// Address Range: [[004e2ac0, 004e2c32]]
// Convention: unknown
// Signature: uint FUN_004e2ac0(undefined4 *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004e2ac0(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint local_14;
  
  local_14 = 0;
  if (0x20 < param_2) {
    _DAT_01cc4800 = "..\\sound\\mp3.cpp";
    _DAT_01cc4804 = 0x266;
    FUN_004c8440("Cannot read or write more than %d bits at a time.  File: %s",0x20,&DAT_01cd8b28);
  }
  param_1[3] = param_1[3] + param_2;
  do {
    if (param_2 < 1) {
      return local_14;
    }
    if (param_1[5] == 0) {
      param_1[5] = 8;
      iVar2 = param_1[4] + -1;
      param_1[4] = iVar2;
      if ((iVar2 < 4) || (iVar2 < (int)param_1[6])) {
        if (param_1[6] == 0) {
          for (iVar2 = param_1[4]; -1 < iVar2; iVar2 = iVar2 + -1) {
            *(byte *)(param_1[1] + ((param_1[2] + -1) - param_1[4]) + iVar2) =
                 *(byte *)(param_1[1] + iVar2);
          }
          iVar2 = (param_1[2] + -2) - param_1[4];
          if (iVar2 < 0) {
LAB_004e2bd1:
            param_1[4] = param_1[2] + -1;
          }
          else {
            do {
              while( true ) {
                if (param_1[6] != 0) goto LAB_004e2bd1;
                iVar1 = 0;
                if (0 < (int)param_1[10]) {
                  iVar1 = iVar2 + param_1[1];
                  iVar2 = iVar2 + -1;
                  iVar1 = FUN_005636d0(iVar1,1,1,*param_1);
                }
                if (iVar1 != 1) break;
                param_1[10] = param_1[10] + -1;
                if (iVar2 < 0) {
                  param_1[4] = param_1[2] + -1;
                  goto LAB_004e2aec;
                }
              }
              param_1[6] = iVar2 + 1;
            } while (-1 < iVar2);
            param_1[4] = param_1[2] + -1;
          }
        }
        else {
          param_1[7] = 1;
        }
      }
    }
LAB_004e2aec:
    iVar2 = param_1[5];
    if (param_2 < iVar2) {
      iVar2 = param_2;
    }
    param_2 = param_2 - iVar2;
    iVar2 = param_1[5] - iVar2;
    local_14 = local_14 |
               ((int)((uint)*(byte *)(param_1[1] + param_1[4]) &
                     *(uint *)(&DAT_005bc010 + param_1[5] * 4)) >> ((byte)iVar2 & 0x1f)) <<
               ((byte)param_2 & 0x1f);
    param_1[5] = iVar2;
  } while( true );
}
