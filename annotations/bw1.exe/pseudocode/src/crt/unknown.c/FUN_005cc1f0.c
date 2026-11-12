// Name: crt_unknown.c_FUN_005cc1f0
// Address: 005cc1f0
// Address Range: [[005cc1f0, 005cc221]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005cc1f0(WORD param_1,WORD param_2,LPFILETIME param_3)

#include "nocturne.h"

void FUN_005cc1f0(WORD param_1,WORD param_2,LPFILETIME param_3)

{
  _FILETIME _Stack_8;
  
  DosDateTimeToFileTime(param_1,param_2,&_Stack_8);
  LocalFileTimeToFileTime(&_Stack_8,param_3);
  return;
}
