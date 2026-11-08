// Name: FUN_005bfb00
// Address: 005bfb00
// Address Range: [[005bfb00, 005bfc09]]
// Convention: unknown
// Signature: DWORD FUN_005bfb00(uint param_1,LPCVOID param_2,DWORD param_3)

#include "nocturne.h"

DWORD FUN_005bfb00(uint param_1,LPCVOID param_2,DWORD param_3)

{
  HANDLE hFile;
  uint uVar1;
  DWORD DVar2;
  int iVar3;
  BOOL BVar4;
  DWORD DStack_14;
  
  if (((int)param_1 < 0) || (0x00000014 < param_1)) {
    FUN_005be180(4);
    DStack_14 = 0xffffffff;
  }
  else {
    hFile = *(HANDLE *)(DAT_0061f4d8 + param_1 * 4);
    (*(code *)PTR_FUN_0061f2a8)(param_1);
    uVar1 = FUN_005c0820(param_1);
    if ((uVar1 & 0x80) != 0) {
      DVar2 = SetFilePointer(hFile,0,(PLONG)0x0,2);
      if (DVar2 == 0xffffffff) {
        (*(code *)PTR_FUN_0061f2ac)(param_1);
        DVar2 = FUN_005c036c();
        return DVar2;
      }
    }
    if (DAT_0061f440 != (code *)0x0) {
      iVar3 = (*DAT_0061f414)(param_1);
      if (iVar3 != 0) {
        DVar2 = (*DAT_0061f440)(iVar3,param_2,param_3);
        (*(code *)PTR_FUN_0061f2ac)(param_1);
        return DVar2;
      }
    }
    BVar4 = WriteFile(hFile,param_2,param_3,&DStack_14,(LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
      (*(code *)PTR_FUN_0061f2ac)(param_1);
      DVar2 = FUN_005c036c();
      return DVar2;
    }
    if (param_3 != DStack_14) {
      FUN_005be180(0xc);
    }
    (*(code *)PTR_FUN_0061f2ac)(param_1);
  }
  return DStack_14;
}
