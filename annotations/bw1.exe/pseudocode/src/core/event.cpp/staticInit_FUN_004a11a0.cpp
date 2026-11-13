// Name: core_event.cpp_staticInit_FUN_004a11a0
// Address: 004a11a0
// Address Range: [[004a11a0, 004a11d2]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_staticInit_FUN_004a11a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_event_cpp_staticInit_FUN_004a11a0(void)

{
  core_event_cpp_CEventList_ctor_FUN_004a19d0((CEventList *)0x1c51d80);
  DAT_0061b514 = 0x27a8;
  DAT_0061b518 = g_CCharacterClassInfo.name_hash;
  _DAT_0061b55c = 0x27b0;
  _DAT_0061b560 = g_CCharacterClassInfo.name_hash;
  return;
}
