// Name: core_event.cpp_staticInit_FUN_00488b30
// Address: 00488b30
// Address Range: [[00488b30, 00488b62]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_staticInit_FUN_00488b30(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_event_cpp_staticInit_FUN_00488b30(void)

{
  core_event_cpp_CEventList_ctor_FUN_00489360((CEventList *)0x1c38bc0);
  DAT_00614234 = 0x2814;
  DAT_00614238 = g_CCharacterClassInfo.name_hash;
  _DAT_0061427c = 0x281c;
  _DAT_00614280 = g_CCharacterClassInfo.name_hash;
  return;
}
