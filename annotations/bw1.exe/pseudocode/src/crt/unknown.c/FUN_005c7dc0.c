// Name: crt_unknown.c_FUN_005c7dc0
// Address: 005c7dc0
// Address Range: [[005c7dc0, 005c7ec9]]
// Convention: unknown
// Signature: DWORD crt_unknown_c_FUN_005c7dc0(uint param_1,LPCVOID param_2,DWORD param_3)

#include "nocturne.h"

DWORD FUN_005c7dc0(uint param_1,LPCVOID param_2,DWORD param_3)

{
  HANDLE hFile;
  uint uVar1;
  DWORD DVar2;
  int iVar3;
  BOOL BVar4;
  DWORD DStack_14;
  
  if (((int)param_1 < 0) || (0x00000014 < param_1)) {
    setErrno(4);
    DStack_14 = 0xffffffff;
  }
  else {
    hFile = *(HANDLE *)(DAT_00626838 + param_1 * 4);
    (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626600)(param_1);
    uVar1 = FUN_005c8ae0(param_1);
    if ((uVar1 & 0x80) != 0) {
      DVar2 = SetFilePointer(hFile,0,(PLONG)0x0,2);
      if (DVar2 == 0xffffffff) {
        (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(param_1);
        DVar2 = FUN_005c862c();
        return DVar2;
      }
    }
    if (DAT_006267a0 != (code *)0x0) {
      iVar3 = (*DAT_00626774)(param_1);
      if (iVar3 != 0) {
        DVar2 = (*DAT_006267a0)(iVar3,param_2,param_3);
        (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(param_1);
        return DVar2;
      }
    }
    BVar4 = WriteFile(hFile,param_2,param_3,&DStack_14,(LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
      (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(param_1);
      DVar2 = FUN_005c862c();
      return DVar2;
    }
    if (param_3 != DStack_14) {
      setErrno(0xc);
    }
    (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(param_1);
  }
  return DStack_14;
}
