// Name: FUN_10008850
// Address: 10008850
// Address Range: [[10008850, 1000888f]]
// Convention: unknown
// Signature: int FUN_10008850(size_t param_1,int param_2)

#include "nocturne.h"

int FUN_10008850(size_t param_1,int param_2)

{
  int iVar1;
  
  if (0xffffffe0 < param_1) {
    return 0;
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  while( true ) {
    iVar1 = FUN_10008890(param_1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_2 == 0) break;
    iVar1 = __callnewh(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}
