// Name: crt_system.c_sleep_FUN_00600790
// Address: 00600790
// Address Range: [[00600790, 0060079c]]
// Convention: __cdecl
// Signature: void __cdecl crt_system_c_sleep_FUN_00600790(DWORD milliseconds)

#include "nocturne.h"

void __cdecl crt_system_c_sleep_FUN_00600790(DWORD milliseconds)

{
  (*g_SleepFunc)(milliseconds);
  return;
}
