// Name: __close_lk
// Address: 10005bc0
// Address Range: [[10005bc0, 10005c48]]
// Convention: unknown
// Signature: undefined4 __close_lk(uint param_1)

#include "nocturne.h"

/* Library Function - Single Match
uint __close_lk(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  
  if ((param_1 == 1) || (param_1 == 2)) {
    iVar1 = FUN_10008cd0(2);
    iVar2 = FUN_10008cd0(1);
    if (iVar1 != iVar2) goto LAB_10005bea;
  }
  else {
LAB_10005bea:
    hObject = (HANDLE)FUN_10008cd0(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_10005c0a;
    }
  }
  DVar4 = 0;
LAB_10005c0a:
  FUN_10008c30(param_1);
  if (DVar4 != 0) {
    __dosmaperr(DVar4);
    return 0xffffffff;
  }
  *(byte *)
   (*(int *)((int)&DAT_10241870 + ((int)(param_1 & 0xffffffe7) >> 3)) + 4 + (param_1 & 0x1f) * 0x24)
       = 0;
  return 0;
}
