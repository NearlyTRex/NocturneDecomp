// Name: core_gabriela.cpp_staticInit_FUN_004ad0c0
// Address: 004ad0c0
// Address Range: [[004ad0c0, 004ad199]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_staticInit_FUN_004ad0c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_staticInit_FUN_004ad0c0(void)

{
  _DAT_01cb0638 = _DAT_005f7350 * _DAT_005f7354;
  _DAT_01cb063c = _DAT_005f7358 * _DAT_005f735c;
  _DAT_01cb0640 = _DAT_005f7360 * _DAT_005f7364;
  _DAT_01cb0644 = 0x3f028f5c;
  _DAT_01cb0648 = 0xbca3d70a;
  _DAT_01cb064c = 0x3db851ec;
  _DAT_01cb0650 = 0x3e4ccccd;
  _DAT_01cb0654 = 0xbea147ae;
  _DAT_01cb0658 = 0;
  _DAT_01cb065c = 0x3fc90fdb;
  _DAT_01cb0660 = 0;
  _DAT_01cb0670 = 0;
  _DAT_01cb0664 = 0x3eb33333;
  _DAT_01cb0668 = 0x40133333;
  _DAT_01cb066c = 0x408ccccd;
  core_actor_cpp_registerActorClass_FUN_0040c450
            (&g_CGabriellaClassInfo,"CGabriella",
             core_gabriela_cpp_factoryFuncGabriella_FUN_004ad290,&g_CGabriellaClassVersion,3,
             &g_CHeroClassInfo);
  return;
}
