// Name: core_dracbrid.cpp_staticInit_FUN_00462af0
// Address: 00462af0
// Address Range: [[00462af0, 00462b6f]]
// Convention: unknown
// Signature: void core_dracbrid_cpp_staticInit_FUN_00462af0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dracbrid_cpp_staticInit_FUN_00462af0(void)

{
  _DAT_01ba5718 = 0;
  _DAT_01ba571c = 0x3f000000;
  _DAT_01ba5720 = 0;
  _DAT_01ba5724 = 0xbf19999a;
  _DAT_01ba5728 = 0;
  _DAT_01ba572c = 0;
  _DAT_01ba5730 = 0x3f19999a;
  _DAT_01ba5734 = 0;
  _DAT_01ba5738 = 0;
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CDraculaBrideClassInfo,"p?CDraculaBride" + 2,
             core_dracbrid_cpp_factoryFuncDraculaBride_FUN_00462b70,&g_CDraculaBrideClassVersion,9,
             &g_CEnemyClassInfo);
  __arrinit(&DAT_01ba5798,6,&g_SFreakyTypeInfo);
  return;
}
