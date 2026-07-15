// Name: crt_thread.c___pxcptinfoptrs_FUN_1000bdf0
// Address: 1000bdf0
// Address Range: [[1000bdf0, 1000bdf8]]
// Convention: __cdecl
// Signature: void ** __cdecl crt_thread_c___pxcptinfoptrs_FUN_1000bdf0(void)

#include "nocturne.h"

void ** __cdecl __pxcptinfoptrs(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = _getptd();
  return &p_Var1->_initaddr;
}
