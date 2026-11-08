// Name: FUN_004d0780
// Address: 004d0780
// Address Range: [[004d0780, 004d08d4]]
// Convention: unknown
// Signature: undefined4 FUN_004d0780(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004d0780(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_004cf200(param_1);
  *(uint *)(param_1 + 0x25600) = 0;
  iVar1 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x168))(param_1,1);
  if ((iVar1 != 0) && (iVar1 = FUN_004cec50(param_1), iVar1 != 0)) {
    return 1;
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x168))(param_1,2);
  if ((iVar1 != 0) && (iVar1 = FUN_004cee90(param_1), iVar1 != 0)) {
    return 1;
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x168))(param_1,4);
  if ((iVar1 != 0) && (iVar2 = FUN_004cfd60(param_1,"!CBodyPart"), iVar2 != 0)) {
    return 1;
  }
  iVar2 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x168))(param_1,3);
  if ((iVar2 != 0) && (iVar2 = FUN_004cf030(param_1,param_2), iVar2 != 0)) {
    return 1;
  }
  iVar2 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x168))(param_1,7);
  if ((iVar2 != 0) && (iVar2 = FUN_004cf2b0(param_1), iVar2 != 0)) {
    return 1;
  }
  iVar2 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x168))(param_1,8);
  if ((iVar2 != 0) && (iVar2 = FUN_004cf4e0(param_1), iVar2 != 0)) {
    return 1;
  }
  iVar2 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x168))(param_1,9);
  if ((iVar2 != 0) && (iVar2 = FUN_004cf890(param_1), iVar2 != 0)) {
    return 1;
  }
  if ((iVar1 != 0) && (iVar1 = FUN_004cfd60(param_1,"CBodyPart"), iVar1 != 0)) {
    return 1;
  }
  return 0;
}
