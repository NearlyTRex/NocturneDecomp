// Name: crt_unknown.c_BaseStart_FUN_00401000
// Address: 00401000
// Address Range: [[00401000, 00401000]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_BaseStart_FUN_00401000(void)

#include "nocturne.h"

void __cdecl BaseStart(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
