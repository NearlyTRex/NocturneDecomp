// Name: FUN_00525cd0
// Address: 00525cd0
// Address Range: [[00525cd0, 00525e42]]
// Convention: unknown
// Signature: uint FUN_00525cd0(undefined4 *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00525cd0(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint local_14;
  
  local_14 = 0;
  if (0x20 < param_2) {
    _DAT_01d1d400 = "..\\sound\\mp3.cpp";
    _DAT_01d1d404 = 0x2ab;
    FUN_005030e0("Cannot read or write more than %d bits at a time.  File: %s",0x20,&DAT_01d404c8);
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
LAB_00525de1:
            param_1[4] = param_1[2] + -1;
          }
          else {
            do {
              while( true ) {
                if (param_1[6] != 0) goto LAB_00525de1;
                iVar1 = 0;
                if (0 < (int)param_1[10]) {
                  iVar1 = iVar2 + param_1[1];
                  iVar2 = iVar2 + -1;
                  iVar1 = FUN_005c0b10(iVar1,1,1,*param_1);
                }
                if (iVar1 != 1) break;
                param_1[10] = param_1[10] + -1;
                if (iVar2 < 0) {
                  param_1[4] = param_1[2] + -1;
                  goto LAB_00525cfc;
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
LAB_00525cfc:
    iVar2 = param_1[5];
    if (param_2 < iVar2) {
      iVar2 = param_2;
    }
    param_2 = param_2 - iVar2;
    iVar2 = param_1[5] - iVar2;
    local_14 = local_14 |
               ((int)((uint)*(byte *)(param_1[1] + param_1[4]) &
                     *(uint *)(&DAT_006206b0 + param_1[5] * 4)) >> ((byte)iVar2 & 0x1f)) <<
               ((byte)param_2 & 0x1f);
    param_1[5] = iVar2;
  } while( true );
}
