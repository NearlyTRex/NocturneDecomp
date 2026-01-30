// Name: core_event.cpp_FUN_004b1b41
// Address: 004b1b41
// Address Range: [[004b1b41, 004b1b52]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_FUN_004b1b41(void)

#include "nocturne.h"

void __cdecl core_event_cpp_FUN_004b1b41(void)

{
  ushort *in_ECX;
  ushort *in_EDX;
  
  *(byte *)(in_ECX + 1) = *(byte *)(in_EDX + 1);
  *in_ECX = *in_EDX;
  return;
}
