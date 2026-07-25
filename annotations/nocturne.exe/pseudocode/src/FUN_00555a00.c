// Name: FUN_00555a00
// Address: 00555a00
// Address Range: [[00555a00, 00555a5f]]
// Convention: unknown
// Signature: void FUN_00555a00(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00555a00(void)

{
  _DAT_02de0774 = 0xbe8f5c29;
  _DAT_02de0778 = 0x3ed70a3d;
  _DAT_02de077c = 0x3f19999a;
  _DAT_02de0780 = 0x3eb33333;
  _DAT_02de0784 = 0x3ed70a3d;
  _DAT_02de0788 = 0x3f19999a;
  core_actor_cpp_registerActorClass_FUN_0040d3f0
            ((CDemonActorType *)0x2de078c,"CWerewolf",FUN_00555a60,&INT_005c1614,6,
             (CDemonActorType *)0x1bcdebc);
  return;
}
