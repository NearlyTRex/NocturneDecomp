// Name: crt_unknown.c_FUN_005c2a34
// Address: 005c2a34
// Address Range: [[005c2a34, 005c2a87]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c2a34(int param_1)

#include "nocturne.h"

void FUN_005c2a34(int param_1)

{
  HANDLE hObject;
  LPVOID pvVar1;
  
  if (DAT_0061f2a0 != -1) {
    pvVar1 = TlsGetValue(DAT_0061f2a0);
    if (pvVar1 != (LPVOID)0x0) {
      hObject = *(HANDLE *)((int)pvVar1 + 0xde);
      FUN_005c4bcc(*(uint *)((int)pvVar1 + 0xda));
      TlsSetValue(DAT_0061f2a0,(LPVOID)0x0);
      if ((hObject != (HANDLE)0x0) && (param_1 != 0)) {
        CloseHandle(hObject);
      }
    }
  }
  return;
}
