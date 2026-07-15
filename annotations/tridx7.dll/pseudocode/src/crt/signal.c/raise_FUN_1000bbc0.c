// Name: crt_signal.c_raise_FUN_1000bbc0
// Address: 1000bbc0
// Address Range: [[1000bbc0, 1000bc9b] [1000bc9f, 1000bd67]]
// Convention: __cdecl
// Signature: int __cdecl crt_signal_c_raise_FUN_1000bbc0(int sig)

#include "nocturne.h"

int __cdecl raise(int sig)

{
  bool bVar1;
  _ptiddata p_Var2;
  _XCPT_ACTION *p_Var3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  void **ppvStack_c;
  _ptiddata p_Stack_8;
  void *pvStack_4;
  
  bVar1 = false;
  switch(sig) {
  case 2:
    ppvStack_c = &DAT_100178f8;
    pcVar6 = DAT_100178f8;
    break;
  default:
    return -1;
  case 4:
  case 8:
  case 0xb:
    p_Var2 = _getptd();
    p_Var3 = siglookup(sig,*(_XCPT_ACTION **)(p_Var2->_con_ch_buf + 4));
    pcVar6 = p_Var3->XcptAction;
    ppvStack_c = &p_Var3->XcptAction;
    goto LAB_1000bc58;
  case 0xf:
    ppvStack_c = &DAT_10017904;
    pcVar6 = DAT_10017904;
    break;
  case 0x15:
    ppvStack_c = &DAT_100178fc;
    pcVar6 = DAT_100178fc;
    break;
  case 0x16:
    ppvStack_c = &DAT_10017900;
    pcVar6 = DAT_10017900;
  }
  bVar1 = true;
  p_Var2 = p_Stack_8;
LAB_1000bc58:
  if (bVar1) {
    _lock(1);
  }
  if (pcVar6 == (code *)0x1) {
    if (bVar1) {
      _unlock(1);
    }
    return 0;
  }
  if (pcVar6 == (code *)0x0) {
    if (bVar1) {
      _unlock(1);
    }
                    /* WARNING: Subroutine does not return */
    _exit_crt(3);
  }
  if (((sig == 8) || (sig == 0xb)) || (sig == 4)) {
    p_Stack_8 = p_Var2->_initaddr;
    p_Var2->_initaddr = (void *)0x0;
    if (sig == 8) {
      pvStack_4 = p_Var2->_initarg;
      p_Var2->_initarg = (void *)0x8c;
      goto LAB_1000bccf;
    }
  }
  else {
LAB_1000bccf:
    if (sig == 8) {
      if (0x00000003 < 0x00000007 + 0x00000003) {
        iVar4 = 0x00000003 * 0xc;
        iVar5 = 0x00000003;
        do {
          iVar4 = iVar4 + 0xc;
          iVar5 = iVar5 + 1;
          *(uint *)(*(int *)(p_Var2->_con_ch_buf + 4) + -4 + iVar4) = 0;
        } while (iVar5 < 0x00000003 + 0x00000007);
      }
      goto LAB_1000bd16;
    }
  }
  *ppvStack_c = (void *)0x0;
LAB_1000bd16:
  if (bVar1) {
    _unlock(1);
  }
  if (sig == 8) {
    (*pcVar6)(8,p_Var2->_initarg);
  }
  else {
    (*pcVar6)(sig);
    if ((sig != 0xb) && (sig != 4)) {
      return 0;
    }
  }
  p_Var2->_initaddr = p_Stack_8;
  if (sig == 8) {
    p_Var2->_initarg = pvStack_4;
  }
  return 0;
}
