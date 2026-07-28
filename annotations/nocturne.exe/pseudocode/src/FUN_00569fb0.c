// Name: FUN_00569fb0
// Address: 00569fb0
// Address Range: [[00569fb0, 0056a0b9]]
// Convention: unknown
// Signature: DWORD FUN_00569fb0(uint param_1,LPCVOID param_2,DWORD param_3)

#include "nocturne.h"

DWORD FUN_00569fb0(uint param_1,LPCVOID param_2,DWORD param_3)

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
    hFile = *(HANDLE *)(DAT_005c1f54 + param_1 * 4);
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac0)(param_1);
    uVar1 = FUN_0056f220(param_1);
    if ((uVar1 & 0x80) != 0) {
      DVar2 = SetFilePointer(hFile,0,(PLONG)0x0,2);
      if (DVar2 == 0xffffffff) {
        (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(param_1);
        DVar2 = __set_errno();
        return DVar2;
      }
    }
    if (DAT_005c1d80 != (code *)0x0) {
      iVar3 = (*DAT_005c1d54)(param_1);
      if (iVar3 != 0) {
        DVar2 = (*DAT_005c1d80)(iVar3,param_2,param_3);
        (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(param_1);
        return DVar2;
      }
    }
    BVar4 = WriteFile(hFile,param_2,param_3,&DStack_14,(LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
      (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(param_1);
      DVar2 = __set_errno();
      return DVar2;
    }
    if (param_3 != DStack_14) {
      setErrno(0xc);
    }
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(param_1);
  }
  return DStack_14;
}
