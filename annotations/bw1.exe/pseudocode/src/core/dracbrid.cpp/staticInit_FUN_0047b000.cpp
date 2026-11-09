// Name: core_dracbrid.cpp_staticInit_FUN_0047b000
// Address: 0047b000
// Address Range: [[0047b000, 0047b07f]]
// Convention: unknown
// Signature: void core_dracbrid_cpp_staticInit_FUN_0047b000(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dracbrid_cpp_staticInit_FUN_0047b000(void)

{
  _DAT_01bc0cd4 = 0;
  _DAT_01bc0cd8 = 0x3f000000;
  _DAT_01bc0cdc = 0;
  _DAT_01bc0ce0 = 0xbf19999a;
  _DAT_01bc0ce4 = 0;
  _DAT_01bc0ce8 = 0;
  _DAT_01bc0cec = 0x3f19999a;
  _DAT_01bc0cf0 = 0;
  _DAT_01bc0cf4 = 0;
  core_actor_cpp_registerActorClass_FUN_0040c160
            (&g_CDraculaBrideClassInfo,"p?CDraculaBride" + 2,
             core_dracbrid_cpp_factoryFuncDraculaBride_FUN_0047b080,&g_CDraculaBrideClassVersion,9,
             &g_CEnemyClassInfo);
  __arrinit(&DAT_01bc0d54,6,&g_SFreakyTypeInfo);
  return;
}
