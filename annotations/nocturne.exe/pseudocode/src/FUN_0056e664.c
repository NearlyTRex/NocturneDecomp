// Name: FUN_0056e664
// Address: 0056e664
// Address Range: [[0056e664, 0056e6b7]]
// Convention: unknown
// Signature: void FUN_0056e664(int param_1)

#include "nocturne.h"

void FUN_0056e664(int param_1)

{
  HANDLE hObject;
  LPVOID pvVar1;
  
  if (DAT_005c1ab8 != -1) {
    pvVar1 = TlsGetValue(DAT_005c1ab8);
    if (pvVar1 != (LPVOID)0x0) {
      hObject = *(HANDLE *)((int)pvVar1 + 0xde);
      FUN_005712ec(*(uint *)((int)pvVar1 + 0xda));
      TlsSetValue(DAT_005c1ab8,(LPVOID)0x0);
      if ((hObject != (HANDLE)0x0) && (param_1 != 0)) {
        CloseHandle(hObject);
      }
    }
  }
  return;
}
