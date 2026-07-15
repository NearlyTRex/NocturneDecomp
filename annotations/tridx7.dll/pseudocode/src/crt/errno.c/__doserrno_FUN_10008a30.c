// Name: crt_errno.c___doserrno_FUN_10008a30
// Address: 10008a30
// Address Range: [[10008a30, 10008a38]]
// Convention: __cdecl
// Signature: ulong * __cdecl crt_errno_c___doserrno_FUN_10008a30(void)

#include "nocturne.h"

ulong * __cdecl __doserrno(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = _getptd();
  return &p_Var1->_tdoserrno;
}
