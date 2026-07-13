// Name: FUN_10008a30
// Address: 10008a30
// Address Range: [[10008a30, 10008a38]]
// Convention: unknown
// Signature: ulong * FUN_10008a30(void)

#include "nocturne.h"

ulong * FUN_10008a30(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_tdoserrno;
}
