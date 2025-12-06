// Name: core_gabriela.cpp_staticInit_FUN_004d2910
// Address: 004d2910
// Address Range: [[004d2910, 004d29e9]]
// Convention: __cdecl
// Signature: CDemonActorType * core_gabriela.cpp_staticInit_FUN_004d2910(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonActorType * __cdecl core_gabriela_cpp_staticInit_FUN_004d2910(void)

{
  CDemonActorType *pCVar1;
  
  _DAT_02d7b808 = _DAT_0065e7d0 * _DAT_0065e7d4;
  _DAT_02d7b80c = _DAT_0065e7d8 * _DAT_0065e7dc;
  _DAT_02d7b810 = _DAT_0065e7e0 * _DAT_0065e7e4;
  _DAT_02d7b814 = 0x3f028f5c;
  _DAT_02d7b818 = 0xbca3d70a;
  _DAT_02d7b81c = 0x3db851ec;
  _DAT_02d7b820 = 0x3e4ccccd;
  _DAT_02d7b824 = 0xbea147ae;
  _DAT_02d7b828 = 0;
  _DAT_02d7b82c = 0x3fc90fdb;
  _DAT_02d7b830 = 0;
  _DAT_02d7b840 = 0;
  _DAT_02d7b834 = 0x3eb33333;
  _DAT_02d7b838 = 0x40133333;
  _DAT_02d7b83c = 0x408ccccd;
  pCVar1 = core_actor_cpp_registerActorClass_FUN_0040c2e0
                     (&g_CGabriellaClassInfo,"CGabriella",core_gabriela_cpp_FUN_004d2ae0,
                      &g_CGabriellaClassVersion,3,&g_CHeroClassInfo);
  return pCVar1;
}
