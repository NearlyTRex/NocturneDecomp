// Name: crt_process.c_getpid_FUN_00568680
// Address: 00568680
// Address Range: [[00568680, 00568687]]
// Convention: __cdecl
// Signature: undefined1 __cdecl crt_process_c_getpid_FUN_00568680(void)

#include "nocturne.h"

byte __cdecl getpid(void)

{
  DWORD DVar1;
  
  DVar1 = GetCurrentProcessId();
  return (char)DVar1;
}
