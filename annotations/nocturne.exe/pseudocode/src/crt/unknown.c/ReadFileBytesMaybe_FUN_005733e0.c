// Name: crt_unknown.c_ReadFileBytesMaybe_FUN_005733e0
// Address: 005733e0
// Address Range: [[005733e0, 005735e8]]
// Convention: unknown
// Signature: uint crt_unknown_c_ReadFileBytesMaybe_FUN_005733e0(uint param_1,char *param_2,DWORD param_3)

#include "nocturne.h"

uint ReadFileBytesMaybe(uint param_1,char *param_2,DWORD param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  BOOL BVar4;
  DWORD DVar5;
  char *pcVar6;
  uint uVar7;
  uint uStack_20;
  DWORD DStack_1c;
  uint local_18;
  HANDLE local_14;
  
  if (((int)param_1 < 0) || (0x00000014 < param_1)) {
    setErrno(4);
    uVar2 = 0xffffffff;
  }
  else {
    local_14 = *(HANDLE *)(DAT_005c1f54 + param_1 * 4);
    uVar2 = FUN_0056f220(param_1);
    local_18 = uVar2;
    if (uVar2 == 0) {
      setErrno(4);
      return 0xffffffff;
    }
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac0)(param_1);
    if ((uVar2 & 1) == 0) {
      setErrno(6);
      (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(param_1);
      return 0xffffffff;
    }
    if ((uVar2 & 0x40) == 0) {
      DStack_1c = param_3;
      uVar2 = 0;
      while( true ) {
        if ((DAT_005c1d7c == (code *)0x0) || (iVar3 = (*DAT_005c1d54)(param_1), iVar3 == 0)) {
          BVar4 = ReadFile(local_14,param_2,DStack_1c,&uStack_20,(LPOVERLAPPED)0x0);
          if (BVar4 == 0) {
            (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(param_1);
            DVar5 = GetLastError();
            if (DVar5 == 0x6d) {
              return uVar2;
            }
            goto LAB_005734ea;
          }
        }
        else {
          uStack_20 = (*DAT_005c1d7c)(iVar3,param_2,DStack_1c);
        }
        if (uStack_20 == 0) break;
        uVar7 = 0;
        iVar3 = 0;
        pcVar6 = param_2;
        if (uStack_20 != 0) {
          do {
            if (*pcVar6 == '\x1a') {
              lseek(param_1,(uVar7 - uStack_20) + 1,1);
              goto LAB_005735d6;
            }
            if (*pcVar6 != '\r') {
              uVar2 = uVar2 + 1;
              pcVar1 = param_2 + iVar3;
              iVar3 = iVar3 + 1;
              *pcVar1 = *pcVar6;
            }
            uVar7 = uVar7 + 1;
            pcVar6 = pcVar6 + 1;
          } while (uVar7 < uStack_20);
        }
        DStack_1c = DStack_1c - iVar3;
        param_2 = param_2 + iVar3;
        if (((local_18 & 0x2000) != 0) || (DStack_1c == 0)) break;
      }
    }
    else if ((DAT_005c1d7c == (code *)0x0) || (iVar3 = (*DAT_005c1d54)(param_1), iVar3 == 0)) {
      BVar4 = ReadFile(local_14,param_2,param_3,&uStack_20,(LPOVERLAPPED)0x0);
      uVar2 = uStack_20;
      if (BVar4 == 0) {
        (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(param_1);
        DVar5 = GetLastError();
        if (DVar5 == 0x6d) {
          return uVar2;
        }
LAB_005734ea:
        uVar2 = __set_errno();
        return uVar2;
      }
    }
    else {
      uVar2 = (*DAT_005c1d7c)(iVar3,param_2,param_3);
    }
LAB_005735d6:
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(param_1);
  }
  return uVar2;
}
