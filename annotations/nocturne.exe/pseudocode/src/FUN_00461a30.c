// Name: FUN_00461a30
// Address: 00461a30
// Address Range: [[00461a30, 00461ace]]
// Convention: unknown
// Signature: void FUN_00461a30(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00461a30(int param_1,int param_2,uint param_3)

{
  int iVar1;
  ushort local_18;
  ushort local_16;
  ushort local_14;
  ushort local_12;
  ushort local_10;
  ushort local_e;
  ushort local_c;
  ushort local_a;
  ushort local_8;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = FUN_00404610(param_2 + 8);
    if (iVar1 == 0) {
      return;
    }
  }
  local_18 = *(ushort *)(param_2 + 0x18);
  local_16 = *(ushort *)(param_2 + 0x24);
  local_14 = *(ushort *)(param_2 + 0x30);
  local_12 = (ushort)((uint)*(uint *)(param_2 + 0x1c) >> 8);
  local_10 = (ushort)((uint)*(uint *)(param_2 + 0x28) >> 8);
  local_e = (ushort)((uint)*(uint *)(param_2 + 0x34) >> 8);
  local_c = (ushort)((uint)*(uint *)(param_2 + 0x20) >> 8);
  local_a = (ushort)((uint)*(uint *)(param_2 + 0x2c) >> 8);
  local_8 = (ushort)((uint)*(uint *)(param_2 + 0x38) >> 8);
  FUN_00461bd0(param_1,&local_18,param_3);
  return;
}
