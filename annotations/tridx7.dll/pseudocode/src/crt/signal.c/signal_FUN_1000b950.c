// Name: crt_signal.c_signal_FUN_1000b950
// Address: 1000b950
// Address Range: [[1000b950, 1000bafb]]
// Convention: __cdecl
// Signature: _sigfn __cdecl crt_signal_c_signal_FUN_1000b950(int sig,_sigfn handler)

#include "nocturne.h"

_sigfn __cdecl signal(int sig,_sigfn handler)

{
  _XCPT_ACTION *p_Var1;
  size_t sVar2;
  _sigfn p_Var3;
  _sigfn p_Var4;
  _sigfn p_Var5;
  _ptiddata p_Var6;
  uint *puVar7;
  _XCPT_ACTION *p_Var8;
  BOOL BVar9;
  ulong *puVar10;
  DWORD DVar11;
  int *piVar12;
  uint uVar13;
  uint *puVar14;
  _sigfn p_Var15;
  byte bVar16;
  _sigfn p_Stack_4;
  
  bVar16 = 0;
  if ((handler != (_sigfn)0x4) && (handler != (_sigfn)0x3)) {
    if ((sig == 2) || (((sig == 0x15 || (sig == 0x16)) || (sig == 0xf)))) {
      _lock(1);
      if (((sig == 2) || (sig == 0x15)) && (DAT_10017908 == 0)) {
        BVar9 = SetConsoleCtrlHandler(siglookup2,1);
        if (BVar9 != 1) {
          puVar10 = __doserrno();
          DVar11 = GetLastError();
          *puVar10 = DVar11;
          _unlock(1);
          goto LAB_1000ba94;
        }
        DAT_10017908 = 1;
      }
      p_Var5 = DAT_10017904;
      p_Var4 = DAT_10017900;
      p_Var3 = DAT_100178fc;
      p_Var15 = DAT_100178f8;
      switch(sig) {
      case 2:
        DAT_100178f8 = handler;
        break;
      default:
        p_Var15 = p_Stack_4;
        break;
      case 0xf:
        DAT_10017904 = handler;
        p_Var15 = p_Var5;
        break;
      case 0x15:
        DAT_100178fc = handler;
        p_Var15 = p_Var3;
        break;
      case 0x16:
        DAT_10017900 = handler;
        p_Var15 = p_Var4;
      }
      _unlock(1);
      return p_Var15;
    }
    if (((sig == 8) || (sig == 4)) || (sig == 0xb)) {
      p_Var6 = _getptd();
      if (*(uint **)(p_Var6->_con_ch_buf + 4) == &DAT_100176d0) {
        puVar7 = (uint *)malloc(0x00000078);
        *(uint **)(p_Var6->_con_ch_buf + 4) = puVar7;
        sVar2 = 0x00000078;
        if (puVar7 == (uint *)0x0) goto LAB_1000ba94;
        puVar14 = &DAT_100176d0;
        for (uVar13 = 0x00000078 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *puVar7 = *puVar14;
          puVar14 = puVar14 + (uint)bVar16 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar16 * -2 + 1;
        }
        for (uVar13 = sVar2 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(byte *)puVar7 = *(byte *)puVar14;
          puVar14 = (uint *)((int)puVar14 + (uint)bVar16 * -2 + 1);
          puVar7 = (uint *)((int)puVar7 + (uint)bVar16 * -2 + 1);
        }
      }
      p_Var8 = siglookup(sig,*(_XCPT_ACTION **)(p_Var6->_con_ch_buf + 4));
      if (p_Var8 != (_XCPT_ACTION *)0x0) {
        p_Var15 = p_Var8->XcptAction;
        if (p_Var8->SigNum != sig) {
          return p_Var15;
        }
        do {
          p_Var8->XcptAction = handler;
          p_Var1 = p_Var8 + 1;
          p_Var8 = p_Var8 + 1;
        } while (p_Var1->SigNum == sig);
        return p_Var15;
      }
    }
  }
LAB_1000ba94:
  piVar12 = _errno();
  *piVar12 = 0x16;
  return (_sigfn)0xffffffff;
}
