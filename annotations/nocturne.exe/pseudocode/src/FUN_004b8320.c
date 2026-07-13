// Name: FUN_004b8320
// Address: 004b8320
// Address Range: [[004b8320, 004b853c]]
// Convention: unknown
// Signature: void FUN_004b8320(int param_1)

#include "nocturne.h"

void FUN_004b8320(int param_1)

{
  FUN_004eed10(param_1);
  FUN_0040c900(param_1 + 0x1f91c,"followState");
  FUN_0040c900(param_1 + 0x1f924,"hostageState");
  FUN_0040c980(param_1 + 0x1f928,"goalWayPoint");
  if (0x0000000C < 10) {
    FUN_0040ca80(param_1 + 0x150,"modelName");
    FUN_0040cb00(param_1 + 0x150,"motion state");
  }
  FUN_0040cbf0(param_1 + 0x150,"partStatus");
  FUN_0040c880(param_1 + 0x1f570,"rescueDistance");
  FUN_0040c6d0(param_1 + 0x1f574,"rescueCondition");
  if ((1 < 0x0000000C) && (0x0000000C < 5)) {
    FUN_0040cf70(param_1 + 0x2a8c,"clothList");
  }
  if (2 < 0x0000000C) {
    FUN_0040c6d0(param_1 + 0x1f5d8,"rescueEvent");
  }
  if (3 < 0x0000000C) {
    FUN_0040c6d0(param_1 + 0x1f5f8,"heroFoundMeEvent");
    FUN_0040c6d0(param_1 + 0x1f65c,"heroLeftMeEvent");
    FUN_0040c6d0(param_1 + 0x1f6c0,"heroCameBackEvent");
    FUN_0040c6d0(param_1 + 0x1f788,"goingToSitDownEvent");
    FUN_0040c6d0(param_1 + 0x1f7ec,"sitDownEvent");
  }
  if (5 < 0x0000000C) {
    FUN_0040c900(param_1 + 0x1f944,"noShadowsWhenSaved");
  }
  if (6 < 0x0000000C) {
    FUN_0040c6d0(param_1 + 0x1f724,"getEatenEvent");
  }
  if ((7 < 0x0000000C) && (0x0000000C < 0xc)) {
    FUN_0040c7f0(param_1 + 0x2440,"descriptiveName");
  }
  if (8 < 0x0000000C) {
    FUN_0040c980(param_1 + 0x1f92c,"sitDownWayPoint");
  }
  if (0x0000000C < 0xb) {
    return;
  }
  FUN_0040c6d0(param_1 + 0x1f850,"damageSound");
  FUN_0040c6d0(param_1 + 0x1f8b4,"dieSound");
  return;
}
