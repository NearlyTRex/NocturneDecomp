// Name: FUN_0059c980
// Address: 0059c980
// Address Range: [[0059c980, 0059c9c5]]
// Convention: unknown
// Signature: bool FUN_0059c980(undefined4 param_1,ushort param_2)

#include "nocturne.h"

bool FUN_0059c980(uint param_1,ushort param_2)

{
  ushort uVar1;
  int iVar2;
  uint *unaff_retaddr;
  uint uStack_14;
  uint local_10;
  
  uStack_14 = (uint)param_2;
  local_10 = CONCAT22(local_10._2_2_,2);
  uVar1 = Ordinal_9();
  uStack_14 = CONCAT22(uVar1,(ushort)uStack_14);
  local_10 = 0;
  iVar2 = Ordinal_2(*unaff_retaddr,&uStack_14,0x10);
  return iVar2 == 0;
}
