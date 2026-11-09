// Name: unkafter_zombie.cpp_FUN_005cad34
// Address: 005cad34
// Address Range: [[005cad34, 005cad87]]
// Convention: unknown
// Signature: void unkafter_zombie_cpp_FUN_005cad34(int param_1)

#include "nocturne.h"

void unkafter_zombie_cpp_FUN_005cad34(int param_1)

{
  HANDLE hObject;
  LPVOID pvVar1;
  
  if (DAT_006265f8 != -1) {
    pvVar1 = TlsGetValue(DAT_006265f8);
    if (pvVar1 != (LPVOID)0x0) {
      hObject = *(HANDLE *)((int)pvVar1 + 0xde);
      unkafter_zombie_cpp_FUN_005ccecc(*(uint *)((int)pvVar1 + 0xda));
      TlsSetValue(DAT_006265f8,(LPVOID)0x0);
      if ((hObject != (HANDLE)0x0) && (param_1 != 0)) {
        CloseHandle(hObject);
      }
    }
  }
  return;
}
