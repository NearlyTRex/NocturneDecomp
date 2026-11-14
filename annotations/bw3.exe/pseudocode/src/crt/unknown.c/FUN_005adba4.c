// Name: crt_unknown.c_FUN_005adba4
// Address: 005adba4
// Address Range: [[005adba4, 005adbf7]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005adba4(int param_1)

#include "nocturne.h"

void FUN_005adba4(int param_1)

{
  HANDLE hObject;
  LPVOID pvVar1;
  
  if (DAT_0060799c != -1) {
    pvVar1 = TlsGetValue(DAT_0060799c);
    if (pvVar1 != (LPVOID)0x0) {
      hObject = *(HANDLE *)((int)pvVar1 + 0xde);
      FUN_005afc5c(*(uint *)((int)pvVar1 + 0xda));
      TlsSetValue(DAT_0060799c,(LPVOID)0x0);
      if ((hObject != (HANDLE)0x0) && (param_1 != 0)) {
        CloseHandle(hObject);
      }
    }
  }
  return;
}
