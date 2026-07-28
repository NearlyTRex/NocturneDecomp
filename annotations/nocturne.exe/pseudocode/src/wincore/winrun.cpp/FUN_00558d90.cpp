// Name: wincore_winrun.cpp_FUN_00558d90
// Address: 00558d90
// Address Range: [[00558d90, 005591ba]]
// Convention: unknown
// Signature: LRESULT wincore_winrun_cpp_FUN_00558d90(HWND param_1,uint param_2,HWND param_3,uint param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LRESULT wincore_winrun_cpp_FUN_00558d90(HWND param_1,uint param_2,HWND param_3,uint param_4)

{
  LRESULT LVar1;
  HANDLE hThread;
  uint uVar2;
  
  uVar2 = DAT_005c1660;
  if (param_1 != _DAT_02de2098) {
    LVar1 = DefWindowProcA(param_1,param_2,(WPARAM)param_3,param_4);
    return LVar1;
  }
  if (0x111 < param_2) {
    if (param_2 < 0x113) {
      if (((HWND)0xf13f < param_3) && ((param_3 < (HWND)0xf141 || (param_3 == (HWND)0xf170)))) {
        return 0;
      }
    }
    else {
      uVar2 = param_4 >> 0x10;
      if (param_2 < 0x205) {
        if (param_2 < 0x201) {
          if (param_2 == 0x200) {
            _DAT_01bd1d8c = param_4 & 0xffff;
            _DAT_01bd1d90 = uVar2;
            return 0;
          }
        }
        else {
          if (param_2 < 0x202) {
            _DAT_01bd1d8c = param_4 & 0xffff;
            _DAT_01bd1d90 = uVar2;
            DAT_01bd1d94 = DAT_01bd1d94 | 1;
            DAT_01c02798 = 1;
            return 0;
          }
          if (param_2 < 0x203) {
            _DAT_01bd1d8c = param_4 & 0xffff;
            _DAT_01bd1d90 = uVar2;
            _DAT_02de28b0 = 1;
            DAT_01bd1d94 = DAT_01bd1d94 & 0xfe;
            return 0;
          }
          if (param_2 == 0x204) {
            _DAT_01bd1d8c = param_4 & 0xffff;
            _DAT_01bd1d90 = uVar2;
            DAT_01c02799 = 1;
            DAT_01bd1d94 = DAT_01bd1d94 | 2;
            return 0;
          }
        }
      }
      else {
        if (param_2 < 0x206) {
          _DAT_01bd1d8c = param_4 & 0xffff;
          _DAT_01bd1d90 = uVar2;
          DAT_01bd1d94 = DAT_01bd1d94 & 0xfd;
          _DAT_02de28b4 = 1;
          return 0;
        }
        if (param_2 < 0x30f) {
          if (0x206 < param_2) {
            if (param_2 < 0x208) {
              _DAT_01bd1d8c = param_4 & 0xffff;
              _DAT_01bd1d90 = uVar2;
              DAT_01bd1d94 = DAT_01bd1d94 | 4;
              DAT_01c027a4 = 1;
              return 0;
            }
            if (param_2 == 0x208) {
              _DAT_01bd1d8c = param_4 & 0xffff;
              _DAT_01bd1d90 = uVar2;
              _DAT_02de28e0 = 1;
              DAT_01bd1d94 = DAT_01bd1d94 & 0xfb;
              return 0;
            }
          }
        }
        else {
          if (0x30f < param_2) {
            if (param_2 < 0x311) goto LAB_00558ddf;
            if (0x311 < param_2) {
              if (param_2 == 0x3b9) {
                wincore_winvideo_cpp_closeMovie_FUN_0055a1c0((HWND)_DAT_02de2098);
              }
              goto LAB_00558ddf;
            }
            if (_DAT_02de2098 == param_3) goto LAB_00558ddf;
          }
          wincore_wddvmem_cpp_FUN_00553ca0();
        }
      }
    }
    goto LAB_00558ddf;
  }
  if (param_2 < 0x20) {
    if (1 < param_2) {
      if (param_2 < 3) {
        PostQuitMessage(0);
        _DAT_02de20a0 = 1;
      }
      else if (0xe < param_2) {
        if (param_2 < 0x10) {
          wincore_wddvmem_cpp_FUN_00553ca0();
        }
        else if (param_2 == 0x1c) {
          INT_005c1668 = DAT_005c1660;
          DAT_005c1660 = (uint)param_3;
          if ((HWND)uVar2 != param_3) {
            hThread = GetCurrentProcess();
            if (DAT_005c1660 == 0) {
              wincore_wddvmem_cpp_restoreVideoAndMinimizeWindow_FUN_00553b70();
              SetThreadPriority(hThread,-0xf);
              _DAT_02de20a4 = 0;
            }
            else {
              SetThreadPriority(hThread,1);
              wincore_wddvmem_cpp_FUN_00553ba0();
              if (INT_005c1668 != -1) {
                engine_2d_c_clearInputAndWait_FUN_00403f50();
                _DAT_02de20a4 = 1;
              }
            }
          }
        }
      }
    }
    goto LAB_00558ddf;
  }
  if (param_2 < 0x21) {
    SetCursor((HCURSOR)0x0);
    return 1;
  }
  if (param_2 < 0x102) {
    if (param_2 < 0x100) goto LAB_00558ddf;
    if (param_2 < 0x101) {
LAB_00558ede:
      uVar2 = (int)param_4 >> 0x10 & DAT_005b7630;
      (&DAT_01c02598)[uVar2] = 1;
      if (uVar2 == 0x3e) {
        return 0;
      }
      goto LAB_00558ddf;
    }
  }
  else {
    if (param_2 < 0x103) {
      if (((uint)param_3 & 0xff) != 0) {
        wincore_winrun_cpp_enqueueInput_FUN_00558ba0((uint)param_3 & 0xff);
      }
      goto LAB_00558ddf;
    }
    if (param_2 < 0x104) goto LAB_00558ddf;
    if (param_2 < 0x105) goto LAB_00558ede;
    if (param_2 != 0x105) goto LAB_00558ddf;
  }
  *(uint *)(((int)param_4 >> 0x10 & DAT_005b7630) * 4 + 0x2de20b0) = 1;
LAB_00558ddf:
  LVar1 = DefWindowProcA(param_1,param_2,(WPARAM)param_3,param_4);
  return LVar1;
}
