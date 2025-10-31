// Name: crt_stdlib.c_GetRandomSeedPointer_FUN_005feb50
// Address: 005feb50
// Address Range: [[005feb50, 005feb59]]
// Convention: __watcallRegister
// Signature: uint * crt_stdlib.c_GetRandomSeedPointer_FUN_005feb50(void)
// Cross-references:
//   crt_stdlib.c_rand_FUN_005feb5c (005feb5c) at 005feb5c [UNCONDITIONAL_CALL]
//   crt_stdlib.c_srand_FUN_005feb80 (005feb80) at 005feb80 [UNCONDITIONAL_CALL]
// Globals:
//   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
// Function calls:
//   crt_thread.c_GetTLS_FUN_0060242c

#include "nocturne.h"

uint * crt_stdlib_c_GetRandomSeedPointer_FUN_005feb50(void)

{
  ThreadData *pTVar1;
  
  pTVar1 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  return &pTVar1->random_seed;
}


// Assembly code:
// 005feb50: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   Label: crt_stdlib.c_GetRandomSeedPointer_FUN_005feb50
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 005feb56: ADD EAX,0xc
// 005feb59: RET
