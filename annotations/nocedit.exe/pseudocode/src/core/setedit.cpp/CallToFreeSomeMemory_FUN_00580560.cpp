// Name: core_setedit.cpp_CallToFreeSomeMemory_FUN_00580560
// Address: 00580560
// Address Range: [[00580560, 00580591]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CallToFreeSomeMemory_FUN_00580560(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CallToFreeSomeMemory_FUN_00580560(CDemonSet *this_ptr)

{
  g_CurrentDebugFilename = "..\\core\\setedit.cpp";
  g_CurrentDebugLine = 0x1036;
  crt_memory_c_free_FUN_005fe659(DAT_03659384);
  DAT_03659384 = (void *)0x0;
  return;
}
