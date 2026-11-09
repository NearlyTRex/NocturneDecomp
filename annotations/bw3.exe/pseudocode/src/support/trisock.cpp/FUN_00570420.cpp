// Name: support_trisock.cpp_FUN_00570420
// Address: 00570420
// Address Range: [[00570420, 00570493]]
// Convention: unknown
// Signature: undefined4 support_trisock_cpp_FUN_00570420(int *param_1,undefined1 *param_2,int param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

uint support_trisock_cpp_FUN_00570420(int *param_1,byte *param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  
  iVar2 = 0;
  puVar3 = param_2;
  while( true ) {
    iVar1 = support_trisock_cpp_FUN_00570350(param_1,param_4,param_5);
    if (iVar1 < 0) break;
    if (iVar1 != 0xd) {
      if (iVar1 == 10) goto LAB_00570483;
      if (((&DAT_006074b8)[(byte)((char)iVar1 + 1)] & 2) != 0) {
        iVar1 = 0x20;
      }
      if (iVar2 < param_3 + -1) {
        iVar2 = iVar2 + 1;
        *puVar3 = (char)iVar1;
        puVar3 = puVar3 + 1;
      }
    }
  }
  if (*param_1 == 0) {
    return 0;
  }
LAB_00570483:
  param_2[iVar2] = 0;
  return 1;
}
