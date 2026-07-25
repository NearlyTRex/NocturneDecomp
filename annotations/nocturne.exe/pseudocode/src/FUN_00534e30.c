// Name: FUN_00534e30
// Address: 00534e30
// Address Range: [[00534e30, 00534e8f]]
// Convention: unknown
// Signature: void FUN_00534e30(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00534e30(void)

{
  _DAT_02dc9f34 = 0x3f05e354;
  _DAT_02dc9f38 = 0x3d656042;
  _DAT_02dc9f3c = 0x3e010625;
  _DAT_02dc9f40 = 0xbf05e354;
  _DAT_02dc9f44 = 0x3d656042;
  _DAT_02dc9f48 = 0x3e010625;
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            ((CDemonActorType *)0x2dc9fac,"CStranger",FUN_00535090,&INT_005c0ff0,9,
             (CDemonActorType *)0x1cae0ec);
  return;
}
