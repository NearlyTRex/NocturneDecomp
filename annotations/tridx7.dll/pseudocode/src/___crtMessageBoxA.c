// Name: ___crtMessageBoxA
// Address: 1000a950
// Address Range: [[1000a950, 1000a9e1]]
// Convention: __cdecl
// Signature: int __cdecl ___crtMessageBoxA(LPCSTR _LpText,LPCSTR _LpCaption,UINT _UType)

#include "nocturne.h"

/* Library Function - Single Match
int __cdecl ___crtMessageBoxA(LPCSTR _LpText,LPCSTR _LpCaption,UINT _UType)

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
    iVar1 = (*DAT_10017774)(iVar1,_LpText,_LpCaption,_UType);
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
