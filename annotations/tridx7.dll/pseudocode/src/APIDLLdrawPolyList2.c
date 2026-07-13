// Name: APIDLLdrawPolyList2
// Address: 10005130
// Address Range: [[10005130, 10005278]]
// Convention: unknown
// Signature: undefined4 APIDLLdrawPolyList2(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4)

#include "nocturne.h"

uint APIDLLdrawPolyList2(uint param_1,uint *param_2,int param_3,uint param_4)

{
  ushort *puVar1;
  int iVar2;
  ushort uVar3;
  uint local_10;
  int local_c;
  int local_8;
  int local_4;
  
                    /* 0x5130  12  APIDLLdrawPolyList2 */
  if (DAT_10014204 == 0) {
    return 0;
  }
  FUN_10003f10(param_4);
  DAT_10014234 = DAT_10014234 + 1;
  if (0 < param_3) {
    local_4 = param_3;
    do {
      puVar1 = (ushort *)*param_2;
      local_10 = (uint)*puVar1;
      local_c = (uint)puVar1[3] << 8;
      local_8 = (uint)puVar1[6] << 8;
      uVar3 = FUN_10005010(&local_10,param_1,param_4);
      *(ushort *)(&DAT_10238910 + DAT_1001422c * 2) = uVar3;
      local_10 = (uint)puVar1[1];
      local_c = (uint)puVar1[4] << 8;
      local_8 = (uint)puVar1[7] << 8;
      uVar3 = FUN_10005010(&local_10,param_1,param_4);
      *(ushort *)(&DAT_10238912 + DAT_1001422c * 2) = uVar3;
      local_10 = (uint)puVar1[2];
      local_c = (uint)puVar1[5] << 8;
      local_8 = (uint)puVar1[8] << 8;
      uVar3 = FUN_10005010(&local_10,param_1,param_4);
      iVar2 = DAT_1001422c;
      DAT_1001422c = DAT_1001422c + 3;
      *(ushort *)(&DAT_10238914 + iVar2 * 2) = uVar3;
      if (0x3e76 < DAT_1001422c) {
        FUN_10002340("You're shoving too many faces");
      }
      param_2 = param_2 + 1;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  FUN_100047b0();
  return 1;
}
