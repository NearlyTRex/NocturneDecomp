// Name: crt_exception.c_RemoveExceptionHandler_FUN_0060abf4
// Address: 0060abf4
// Address Range: [[0060abf4, 0060ac15]]
// Convention: __cdecl
// Signature: void __cdecl crt_exception_c_RemoveExceptionHandler_FUN_0060abf4(void)

#include "nocturne.h"

void __cdecl RemoveExceptionHandler(void)

{
  ThreadData *pTVar1;
  uint *in_FS_OFFSET;
  
  pTVar1 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  if (pTVar1->seh_frame != (EXCEPTION_REGISTRATION_RECORD *)0x0) {
    *in_FS_OFFSET = pTVar1->seh_frame->Next;
  }
  pTVar1 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  pTVar1->seh_frame = (EXCEPTION_REGISTRATION_RECORD *)0x0;
  return;
}
