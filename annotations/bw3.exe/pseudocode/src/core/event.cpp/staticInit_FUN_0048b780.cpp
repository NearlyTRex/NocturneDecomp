// Name: core_event.cpp_staticInit_FUN_0048b780
// Address: 0048b780
// Address Range: [[0048b780, 0048b7b2]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_staticInit_FUN_0048b780(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_event_cpp_staticInit_FUN_0048b780(void)

{
  core_event_cpp_CEventList_ctor_FUN_0048bfb0((CEventList *)0x1c6e360);
  DAT_005fbaa4 = 0x27a8;
  DAT_005fbaa8 = g_CCharacterClassInfo.name_hash;
  _DAT_005fbaec = 0x27b0;
  _DAT_005fbaf0 = g_CCharacterClassInfo.name_hash;
  return;
}
