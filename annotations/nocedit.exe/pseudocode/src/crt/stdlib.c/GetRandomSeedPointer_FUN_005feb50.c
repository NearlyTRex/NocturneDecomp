// Name: crt_stdlib.c_GetRandomSeedPointer_FUN_005feb50
// Address: 005feb50
// Address Range: [[005feb50, 005feb59]]
// Convention: __watcallRegister
// Signature: uint * __watcallRegister crt_stdlib_c_GetRandomSeedPointer_FUN_005feb50(void)

#include "nocturne.h"

uint * __watcallRegister GetRandomSeedPointer(void)

{
  ThreadData *pTVar1;
  
  pTVar1 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  return &pTVar1->random_seed;
}
