// Name: crt_exception.c_installExceptionHandler_FUN_0060aba8
// Address: 0060aba8
// Address Range: [[0060aba8, 0060abf3]]
// Convention: __cdecl
// Signature: void crt_exception.c_installExceptionHandler_FUN_0060aba8(ExceptionFrame * pExceptionFrame)

#include "nocturne.h"

void __cdecl crt_exception_c_installExceptionHandler_FUN_0060aba8(ExceptionFrame *pExceptionFrame)

{
  EXCEPTION_REGISTRATION_RECORD *pEVar1;
  ThreadData *pTVar2;
  uint *in_FS_OFFSET;
  EXCEPTION_REGISTRATION_RECORD *in_stack_00000004;
  
  pTVar2 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  pTVar2->seh_frame = in_stack_00000004;
  pEVar1 = (EXCEPTION_REGISTRATION_RECORD *)*in_FS_OFFSET;
  pTVar2 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  pTVar2->seh_frame->Next = pEVar1;
  pTVar2 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  pTVar2->seh_frame->Handler = crt_exception_c_ExceptionHandler_FUN_0060a9d8;
  pTVar2 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  *in_FS_OFFSET = pTVar2->seh_frame;
  (*PTR_SetUnhandledExceptionFilter_00611640)(crt_exception_c_TopLevelExceptionFilter_FUN_0060a7a4);
  return;
}
