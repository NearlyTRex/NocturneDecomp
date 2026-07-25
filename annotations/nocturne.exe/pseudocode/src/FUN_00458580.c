// Name: FUN_00458580
// Address: 00458580
// Address Range: [[00458580, 0045860c]]
// Convention: unknown
// Signature: void FUN_00458580(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00458580(void)

{
  _DAT_01b4d200 = 0;
  _DAT_01b4d204 = 0x3f000000;
  _DAT_01b4d208 = 0;
  _DAT_01b4d20c = 0xbf19999a;
  _DAT_01b4d210 = 0;
  _DAT_01b4d214 = 0;
  _DAT_01b4d218 = 0x3f19999a;
  _DAT_01b4d21c = 0;
  _DAT_01b4d220 = 0;
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            ((CDemonActorType *)0x1b4d224,"CDraculaBride",FUN_00458610,&INT_005ae6c8,9,
             (CDemonActorType *)0x1bcdebc);
  __arrinit(&DAT_01b4d280,6,0x59c560);
  FUN_00564bb0(0x5ae6b8);
  return;
}
