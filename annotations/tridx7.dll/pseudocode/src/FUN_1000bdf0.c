// Name: FUN_1000bdf0
// Address: 1000bdf0
// Address Range: [[1000bdf0, 1000bdf8]]
// Convention: unknown
// Signature: void ** FUN_1000bdf0(void)

#include "nocturne.h"

void ** FUN_1000bdf0(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_initaddr;
}
