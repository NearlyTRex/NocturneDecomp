// Name: FUN_100107d0
// Address: 100107d0
// Address Range: [[100107d0, 1001086b]]
// Convention: unknown
// Signature: uint FUN_100107d0(uint param_1)

#include "nocturne.h"

uint FUN_100107d0(uint param_1)

{
  int iVar1;
  ushort local_2;
  
  if ((ushort)param_1 == 0xffff) {
    return param_1 & 0xffff;
  }
  if (DAT_10017760 == 0) {
    if ((0x60 < (ushort)param_1) && ((ushort)param_1 < 0x7b)) {
      param_1 = (uint)(ushort)((ushort)param_1 - 0x20);
    }
    return param_1 & 0xffff;
  }
  if ((ushort)param_1 < 0x100) {
    iVar1 = FUN_10010870(param_1,2);
    if (iVar1 == 0) {
      return param_1 & 0xffff;
    }
  }
  iVar1 = FUN_1000c0f0(DAT_10017760,0x200,&param_1,1,&local_2,1,0);
  if (iVar1 == 0) {
    return param_1 & 0xffff;
  }
  return (uint)local_2;
}
