// Name: core_event.cpp_CEventList_resetGameFlags_FUN_00480410
// Address: 00480410
// Address Range: [[00480410, 0048041e]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_resetGameFlags_FUN_00480410(CEventList *this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_resetGameFlags_FUN_00480410(CEventList *this_ptr)

{
  (this_ptr->game_flags).count = 0;
  return;
}
