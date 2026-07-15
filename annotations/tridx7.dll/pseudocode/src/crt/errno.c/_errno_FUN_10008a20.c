// Name: crt_errno.c__errno_FUN_10008a20
// Address: 10008a20
// Address Range: [[10008a20, 10008a28]]
// Convention: __cdecl
// Signature: int * __cdecl crt_errno_c__errno_FUN_10008a20(void)

#include "nocturne.h"

int * __cdecl _errno(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = _getptd();
  return &p_Var1->_terrno;
}
