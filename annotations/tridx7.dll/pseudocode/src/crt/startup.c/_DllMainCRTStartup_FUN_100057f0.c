// Name: crt_startup.c__DllMainCRTStartup_FUN_100057f0
// Address: 100057f0
// Address Range: [[100057f0, 100058b9]]
// Convention: __cdecl
// Signature: int __cdecl crt_startup_c__DllMainCRTStartup_FUN_100057f0(HINSTANCE hinst_dll,DWORD reason,LPVOID reserved)

#include "nocturne.h"

int __cdecl _DllMainCRTStartup(HINSTANCE hinst_dll,DWORD reason,LPVOID reserved)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  
  iVar3 = 1;
  if (reason == 1) {
    DAT_10016c60 = DAT_10016c60 + 1;
  }
  else if (reason == 0) {
    if (DAT_10016c60 < 1) {
      return 0;
    }
    DAT_10016c60 = DAT_10016c60 + -1;
  }
  if ((reason == 1) || (reason == 2)) {
    if (DAT_10241984 != (code *)0x0) {
      iVar3 = (*DAT_10241984)(hinst_dll,reason,reserved);
    }
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar3 = __CRTDLL_INIT(hinst_dll,reason,reserved);
      goto LAB_10005865;
    }
LAB_10005873:
    if (iVar1 != 0) goto LAB_10005886;
  }
  else {
LAB_10005865:
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = DllMain(hinst_dll,reason,reserved);
      goto LAB_10005873;
    }
  }
  if (reason == 1) {
    _mtterm();
    _heap_term();
  }
LAB_10005886:
  if ((reason == 0) || (reason == 3)) {
    BVar2 = __CRTDLL_INIT(hinst_dll,reason,reserved);
    if (BVar2 == 0) {
      iVar1 = 0;
    }
    if ((iVar1 != 0) && (DAT_10241984 != (code *)0x0)) {
      iVar1 = (*DAT_10241984)(hinst_dll,reason,reserved);
    }
  }
  return iVar1;
}
