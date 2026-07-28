// Name: crt_unknown.c_GetRandomSeedPointer_FUN_00564880
// Address: 00564880
// Address Range: [[00564880, 00564889]]
// Convention: __watcallRegister
// Signature: uint * __watcallRegister crt_unknown_c_GetRandomSeedPointer_FUN_00564880(void)

#include "nocturne.h"

uint * __watcallRegister GetRandomSeedPointer(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_crt_thread_c_GetTLS_FUN_005671dc_005c1abc)();
  return (uint *)(iVar1 + 0xc);
}
