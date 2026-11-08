// Name: FUN_004d2df0
// Address: 004d2df0
// Address Range: [[004d2df0, 004d300c]]
// Convention: unknown
// Signature: void FUN_004d2df0(int param_1)

#include "nocturne.h"

void FUN_004d2df0(int param_1)

{
  FUN_005109e0(param_1);
  FUN_0040b960(param_1 + 0x246f4,"followState");
  FUN_0040b960(param_1 + 0x246fc,"hostageState");
  FUN_0040b9e0(param_1 + 0x24700,"goalWayPoint");
  if (0x0000000C < 10) {
    FUN_0040bae0(param_1 + 0x2b4,"modelName");
    FUN_0040bb60(param_1 + 0x2b4,"motion state");
  }
  FUN_0040bc50(param_1 + 0x2b4,"partStatus");
  FUN_0040b8e0(param_1 + 0x24348,"rescueDistance");
  FUN_0040b730(param_1 + 0x2434c,"rescueCondition");
  if ((1 < 0x0000000C) && (0x0000000C < 5)) {
    FUN_0040bfd0(param_1 + 0x2d0c,"clothList");
  }
  if (2 < 0x0000000C) {
    FUN_0040b730(param_1 + 0x243b0,"rescueEvent");
  }
  if (3 < 0x0000000C) {
    FUN_0040b730(param_1 + 0x243d0,"heroFoundMeEvent");
    FUN_0040b730(param_1 + 0x24434,"heroLeftMeEvent");
    FUN_0040b730(param_1 + 0x24498,"heroCameBackEvent");
    FUN_0040b730(param_1 + 0x24560,"goingToSitDownEvent");
    FUN_0040b730(param_1 + 0x245c4,"sitDownEvent");
  }
  if (5 < 0x0000000C) {
    FUN_0040b960(param_1 + 0x2471c,"noShadowsWhenSaved");
  }
  if (6 < 0x0000000C) {
    FUN_0040b730(param_1 + 0x244fc,"getEatenEvent");
  }
  if ((7 < 0x0000000C) && (0x0000000C < 0xc)) {
    FUN_0040b850(param_1 + 0x25b4,"descriptiveName");
  }
  if (8 < 0x0000000C) {
    FUN_0040b9e0(param_1 + 0x24704,"sitDownWayPoint");
  }
  if (0x0000000C < 0xb) {
    return;
  }
  FUN_0040b730(param_1 + 0x24628,"damageSound");
  FUN_0040b730(param_1 + 0x2468c,"dieSound");
  return;
}
