// Name: FUN_004a8c10
// Address: 004a8c10
// Address Range: [[004a8c10, 004a8c65]]
// Convention: unknown
// Signature: void FUN_004a8c10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a8c10(void)

{
  _DAT_01c78bc0 = 0xbf19999a;
  _DAT_01c78bc4 = 0;
  _DAT_01c78bc8 = 0;
  _DAT_01c78bcc = 0x3f19999a;
  _DAT_01c78bd0 = 0;
  _DAT_01c78bd4 = 0;
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            ((CDemonActorType *)0x1c78bd8,"CGhoul",FUN_004a8c70,&INT_005b9650,7,
             (CDemonActorType *)0x1bcdebc);
  return;
}
