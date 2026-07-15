// Name: crt_system.c__crtMessageBoxA_FUN_1000a950
// Address: 1000a950
// Address Range: [[1000a950, 1000a9e1]]
// Convention: __cdecl
// Signature: int __cdecl crt_system_c__crtMessageBoxA_FUN_1000a950(LPCSTR lp_text,LPCSTR lp_caption,UINT u_type)

#include "nocturne.h"

int __cdecl _crtMessageBoxA(LPCSTR lp_text,LPCSTR lp_caption,UINT u_type)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_10017774 != (code *)0x0) {
LAB_1000a99f:
    if (DAT_10017778 != (code *)0x0) {
      iVar1 = (*DAT_10017778)();
    }
    if ((iVar1 != 0) && (DAT_1001777c != (code *)0x0)) {
      iVar1 = (*DAT_1001777c)(iVar1);
    }
    iVar1 = (*DAT_10017774)(iVar1,lp_text,lp_caption,u_type);
    return iVar1;
  }
  hModule = LoadLibraryA("user32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_10017774 = GetProcAddress(hModule,"MessageBoxA");
    if (DAT_10017774 != (FARPROC)0x0) {
      DAT_10017778 = GetProcAddress(hModule,"GetActiveWindow");
      DAT_1001777c = GetProcAddress(hModule,"GetLastActivePopup");
      goto LAB_1000a99f;
    }
  }
  return 0;
}
