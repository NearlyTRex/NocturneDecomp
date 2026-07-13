// Name: FUN_10008a20
// Address: 10008a20
// Address Range: [[10008a20, 10008a28]]
// Convention: unknown
// Signature: int * FUN_10008a20(void)

#include "nocturne.h"

int * FUN_10008a20(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_terrno;
}
