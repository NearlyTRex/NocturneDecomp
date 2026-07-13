// Name: APIDLLdrawPolyList
// Address: 10004f00
// Address Range: [[10004f00, 10005008]]
// Convention: unknown
// Signature: undefined4 APIDLLdrawPolyList(undefined4 param_1,int *param_2,int param_3,undefined4 param_4)

#include "nocturne.h"

uint APIDLLdrawPolyList(uint param_1,int *param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  int local_c;
  int *local_8;
  int local_4;
  
                    /* 0x4f00  11  APIDLLdrawPolyList */
  if (DAT_10014204 == 0) {
    return 0;
  }
  FUN_10003f10(param_4);
  DAT_10014234 = DAT_10014234 + 1;
  if (0 < param_3) {
    local_8 = param_2;
    local_4 = param_3;
    do {
      local_c = 0;
      iVar1 = *local_8;
      if (*(int *)(iVar1 + 4) != 2 && -1 < *(int *)(iVar1 + 4) + -2) {
        iVar4 = iVar1 + 0x24;
        do {
          uVar3 = FUN_10005010(iVar1 + 0x18,param_1,param_4);
          *(ushort *)(&DAT_10238910 + DAT_1001422c * 2) = uVar3;
          uVar3 = FUN_10005010(iVar4,param_1,param_4);
          *(ushort *)(&DAT_10238912 + DAT_1001422c * 2) = uVar3;
          uVar3 = FUN_10005010(iVar4 + 0xc,param_1,param_4);
          iVar2 = DAT_1001422c;
          local_c = local_c + 1;
          DAT_1001422c = DAT_1001422c + 3;
          *(ushort *)(&DAT_10238914 + iVar2 * 2) = uVar3;
          iVar4 = iVar4 + 0xc;
        } while (local_c < *(int *)(iVar1 + 4) + -2);
      }
      if (0x3e76 < DAT_1001422c) {
        FUN_10002340("You're shoving too many faces");
      }
      local_8 = local_8 + 1;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  FUN_100047b0();
  return 1;
}
