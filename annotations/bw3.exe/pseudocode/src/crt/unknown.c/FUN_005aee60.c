// Name: crt_unknown.c_FUN_005aee60
// Address: 005aee60
// Address Range: [[005aee60, 005aee91]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005aee60(WORD param_1,WORD param_2,LPFILETIME param_3)

#include "nocturne.h"

void FUN_005aee60(WORD param_1,WORD param_2,LPFILETIME param_3)

{
  _FILETIME _Stack_8;
  
  DosDateTimeToFileTime(param_1,param_2,&_Stack_8);
  LocalFileTimeToFileTime(&_Stack_8,param_3);
  return;
}
