// Name: core_event.cpp_CEventList_reset_FUN_00489380
// Address: 00489380
// Address Range: [[00489380, 004893c6]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_reset_FUN_00489380(CEventList *this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_reset_FUN_00489380(CEventList *this_ptr)

{
  *(uint *)(this_ptr + 0xc84) = 0;
  *(uint *)(this_ptr + 0x258c) = 0;
  *(uint *)(this_ptr + 0x3210) = 0;
  *(uint *)(this_ptr + 0x337c) = 0;
  *(uint *)(this_ptr + 0x34e8) = 0;
  *(uint *)(this_ptr + 0x3ac8) = 0;
  *(uint *)this_ptr = 0;
  return;
}
