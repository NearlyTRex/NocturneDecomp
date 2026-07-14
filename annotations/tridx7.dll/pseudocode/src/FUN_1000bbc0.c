// Name: FUN_1000bbc0
// Address: 1000bbc0
// Address Range: [[1000bbc0, 1000bc9b] [1000bc9f, 1000bd67]]
// Convention: unknown
// Signature: undefined4 FUN_1000bbc0(int param_1)

#include "nocturne.h"

uint FUN_1000bbc0(int param_1)

{
  bool bVar1;
  _ptiddata p_Var2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  uint *puStack_c;
  _ptiddata p_Stack_8;
  void *pvStack_4;
  
  bVar1 = false;
  switch(param_1) {
  case 2:
    puStack_c = &DAT_100178f8;
    pcVar5 = DAT_100178f8;
    break;
  default:
    return 0xffffffff;
  case 4:
  case 8:
  case 0xb:
    p_Var2 = __getptd();
    iVar4 = FUN_1000bda0(param_1,*(uint *)(p_Var2->_con_ch_buf + 4));
    pcVar5 = *(code **)(iVar4 + 8);
    puStack_c = (uint *)(iVar4 + 8);
    goto LAB_1000bc58;
  case 0xf:
    puStack_c = &DAT_10017904;
    pcVar5 = DAT_10017904;
    break;
  case 0x15:
    puStack_c = &DAT_100178fc;
    pcVar5 = DAT_100178fc;
    break;
  case 0x16:
    puStack_c = &DAT_10017900;
    pcVar5 = DAT_10017900;
  }
  bVar1 = true;
  p_Var2 = p_Stack_8;
LAB_1000bc58:
  if (bVar1) {
    __lock(1);
  }
  if (pcVar5 == (code *)0x1) {
    if (bVar1) {
      FUN_10005a10(1);
    }
    return 0;
  }
  if (pcVar5 == (code *)0x0) {
    if (bVar1) {
      FUN_10005a10(1);
    }
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (((param_1 == 8) || (param_1 == 0xb)) || (param_1 == 4)) {
    p_Stack_8 = p_Var2->_initaddr;
    p_Var2->_initaddr = (void *)0x0;
    if (param_1 == 8) {
      pvStack_4 = p_Var2->_initarg;
      p_Var2->_initarg = (void *)0x8c;
      goto LAB_1000bccf;
    }
  }
  else {
LAB_1000bccf:
    if (param_1 == 8) {
      if (0x00000003 < 0x00000007 + 0x00000003) {
        iVar3 = 0x00000003 * 0xc;
        iVar4 = 0x00000003;
        do {
          iVar3 = iVar3 + 0xc;
          iVar4 = iVar4 + 1;
          *(uint *)(*(int *)(p_Var2->_con_ch_buf + 4) + -4 + iVar3) = 0;
        } while (iVar4 < 0x00000003 + 0x00000007);
      }
      goto LAB_1000bd16;
    }
  }
  *puStack_c = 0;
LAB_1000bd16:
  if (bVar1) {
    FUN_10005a10(1);
  }
  if (param_1 == 8) {
    (*pcVar5)(8,p_Var2->_initarg);
  }
  else {
    (*pcVar5)(param_1);
    if ((param_1 != 0xb) && (param_1 != 4)) {
      return 0;
    }
  }
  p_Var2->_initaddr = p_Stack_8;
  if (param_1 == 8) {
    p_Var2->_initarg = pvStack_4;
  }
  return 0;
}
