// Name: FUN_0059c3d0
// Address: 0059c3d0
// Address Range: [[0059c3d0, 0059c573]]
// Convention: unknown
// Signature: void FUN_0059c3d0(uint *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059c3d0(uint *param_1)

{
  int iVar1;
  byte auStack_4d0 [960];
  byte auStack_110 [256];
  
  FUN_00481fc0(auStack_4d0);
  iVar1 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d);
  if ((iVar1 != 0) && (iVar1 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x4a), iVar1 != 0)) {
    FUN_0059c380(param_1,"DebugStateDisplay",*param_1,auStack_110);
    FUN_00480e70(auStack_4d0,auStack_110);
    FUN_0059c380(param_1,"DebugBarrierDisplay",param_1[1],auStack_110);
    FUN_00480e70(auStack_4d0,auStack_110);
    FUN_0059c380(param_1,"DebugWayPointDisplay",param_1[2],auStack_110);
    FUN_00480e70(auStack_4d0,auStack_110);
    FUN_0059c380(param_1,"DebugFollowSlotDisplay",param_1[3],auStack_110);
    FUN_00480e70(auStack_4d0,auStack_110);
    _DAT_02668128 = FUN_00482250(auStack_4d0,"-- Select Debug Flag --",_DAT_02668128,0);
    switch(_DAT_02668128) {
    case 0:
      *param_1 = (uint)(*param_1 == 0);
      break;
    case 1:
      param_1[1] = (uint)(param_1[1] == 0);
      break;
    case 2:
      param_1[2] = (uint)(param_1[2] == 0);
      break;
    case 3:
      param_1[3] = (uint)(param_1[3] == 0);
      break;
    case 0xffffffff:
      _DAT_02668128 = 0;
    }
  }
  FUN_004820b0(auStack_4d0,0);
  return;
}
