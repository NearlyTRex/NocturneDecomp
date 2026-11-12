// Name: support_trstream.cpp_FUN_005a07a0
// Address: 005a07a0
// Address Range: [[005a07a0, 005a07f7]]
// Convention: unknown
// Signature: int support_trstream_cpp_FUN_005a07a0(int *param_1,undefined1 *param_2,int param_3)

#include "nocturne.h"

int support_trstream_cpp_FUN_005a07a0(int *param_1,byte *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = (**(code **)(*param_1 + 4))(param_1);
    if (iVar1 == -1) {
      *param_2 = 0;
      if (iVar2 == 0) {
        iVar2 = -1;
      }
      return iVar2;
    }
    if (iVar1 < 0) break;
    if (iVar1 != 0xd) {
      if (iVar1 == 10) {
LAB_005a07d1:
        *param_2 = 0;
        return iVar2;
      }
      if (iVar2 < param_3 + -1) {
        iVar2 = iVar2 + 1;
        *param_2 = (char)iVar1;
        param_2 = param_2 + 1;
      }
    }
  }
  iVar2 = -2;
  goto LAB_005a07d1;
}
