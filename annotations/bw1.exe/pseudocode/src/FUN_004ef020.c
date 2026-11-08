// Name: FUN_004ef020
// Address: 004ef020
// Address Range: [[004ef020, 004ef23c]]
// Convention: unknown
// Signature: void FUN_004ef020(int param_1)

#include "nocturne.h"

void FUN_004ef020(int param_1)

{
  FUN_00531bf0(param_1);
  FUN_0040b670(param_1 + 0x1fe64,"followState");
  FUN_0040b670(param_1 + 0x1fe6c,"hostageState");
  FUN_0040b6f0(param_1 + 0x1fe70,"goalWayPoint");
  if (0x0000000C < 10) {
    FUN_0040b7f0(param_1 + 0x158,"modelName");
    FUN_0040b870(param_1 + 0x158,"motion state");
  }
  FUN_0040b960(param_1 + 0x158,"partStatus");
  FUN_0040b5f0(param_1 + 0x1fab8,"rescueDistance");
  FUN_0040b440(param_1 + 0x1fabc,"rescueCondition");
  if ((1 < 0x0000000C) && (0x0000000C < 5)) {
    FUN_0040bce0(param_1 + 0x2ca0,"clothList");
  }
  if (2 < 0x0000000C) {
    FUN_0040b440(param_1 + 0x1fb20,"rescueEvent");
  }
  if (3 < 0x0000000C) {
    FUN_0040b440(param_1 + 0x1fb40,"heroFoundMeEvent");
    FUN_0040b440(param_1 + 0x1fba4,"heroLeftMeEvent");
    FUN_0040b440(param_1 + 0x1fc08,"heroCameBackEvent");
    FUN_0040b440(param_1 + 0x1fcd0,"goingToSitDownEvent");
    FUN_0040b440(param_1 + 0x1fd34,"sitDownEvent");
  }
  if (5 < 0x0000000C) {
    FUN_0040b670(param_1 + 0x1fe8c,"noShadowsWhenSaved");
  }
  if (6 < 0x0000000C) {
    FUN_0040b440(param_1 + 0x1fc6c,"getEatenEvent");
  }
  if ((7 < 0x0000000C) && (0x0000000C < 0xc)) {
    FUN_0040b560(param_1 + 0x2544,"descriptiveName");
  }
  if (8 < 0x0000000C) {
    FUN_0040b6f0(param_1 + 0x1fe74,"sitDownWayPoint");
  }
  if (0x0000000C < 0xb) {
    return;
  }
  FUN_0040b440(param_1 + 0x1fd98,"damageSound");
  FUN_0040b440(param_1 + 0x1fdfc,"dieSound");
  return;
}
