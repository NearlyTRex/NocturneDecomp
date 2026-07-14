// Name: FUN_10005cd0
// Address: 10005cd0
// Address Range: [[10005cd0, 10005d0b]]
// Convention: unknown
// Signature: int FUN_10005cd0(FILE *param_1)

#include "nocturne.h"

int FUN_10005cd0(FILE *param_1)

{
  int iVar1;
  
  iVar1 = __flush(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((param_1->_flag & 0x4000) != 0) {
    iVar1 = FUN_10008e80(param_1->_file);
    return (iVar1 == 0) - 1;
  }
  return 0;
}
