// Name: FUN_005aa0f0
// Address: 005aa0f0
// Address Range: [[005aa0f0, 005aa330]]
// Convention: unknown
// Signature: uint FUN_005aa0f0(LPCSTR param_1,uint param_2,uint param_3,int *param_4)

#include "nocturne.h"

uint FUN_005aa0f0(LPCSTR param_1,uint param_2,uint param_3,int *param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  DWORD dwCreationDisposition;
  HANDLE hObject;
  DWORD unaff_EBX;
  uint uVar5;
  DWORD dwFlagsAndAttributes;
  uint uVar6;
  _SECURITY_ATTRIBUTES local_28;
  DWORD local_1c;
  DWORD local_18;
  uint local_14;
  
  iVar2 = FUN_005ab9b0();
  if (iVar2 != 0) {
    FUN_005a92c0(0xb);
    return 0xffffffff;
  }
  uVar6 = param_2 & 7;
  FUN_005aea80(uVar6,&local_18,&local_14);
  dwFlagsAndAttributes = 0x80;
  FUN_005aeac4(param_3 | uVar6,&local_1c);
  local_28.nLength = 0xc;
  local_28.lpSecurityDescriptor = (LPVOID)0x0;
  local_28.bInheritHandle = (BOOL)((param_2 & 0x80) == 0);
  if ((DAT_00607b20 == (code *)0x0) || (iVar2 = FUN_005a3260(param_1,&DAT_005da870), iVar2 != 0)) {
    if ((param_2 & 0x20) == 0) {
      if ((param_2 & 0x40) == 0) {
LAB_005aa22b:
        dwCreationDisposition = 3;
      }
      else {
        dwCreationDisposition = 5;
      }
    }
    else {
      puVar1 = (uint *)*param_4;
      *param_4 = (int)(puVar1 + 1);
      local_14 = *puVar1;
      *param_4 = 0;
      local_14 = local_14 & ~DAT_00607e18;
      if (((local_14 & 0x100) != 0) && ((local_14 & 0x80) == 0)) {
        dwFlagsAndAttributes = 1;
      }
      if ((param_2 & 0x400) == 0) {
        if ((param_2 & 0x40) == 0) {
          unaff_EBX = 4;
          goto LAB_005aa22b;
        }
        unaff_EBX = 2;
        dwCreationDisposition = 1;
      }
      else {
        unaff_EBX = 1;
        dwCreationDisposition = 1;
      }
    }
    hObject = CreateFileA(param_1,local_18,local_1c,&local_28,dwCreationDisposition,
                          dwFlagsAndAttributes,(HANDLE)0x0);
    if (hObject == (HANDLE)0xffffffff) {
      if ((param_2 & 0x20) != 0) {
        hObject = CreateFileA(param_1,local_18,local_1c,(LPSECURITY_ATTRIBUTES)0x0,unaff_EBX,
                              dwFlagsAndAttributes,(HANDLE)0x0);
      }
      if (hObject == (HANDLE)0xffffffff) {
        uVar6 = FUN_005ab46c();
        return uVar6;
      }
    }
    uVar4 = (*(code *)PTR_FUN_006079ac)(hObject);
    uVar5 = 0;
    if (0x00000014 <= uVar4) {
      CloseHandle(hObject);
      FUN_005a92c0(5);
      return 0xffffffff;
    }
    iVar2 = FUN_005aeb30(uVar4);
    if (iVar2 != 0) {
      uVar5 = 0x2000;
    }
  }
  else {
    uVar3 = FUN_005abbf8();
    uVar4 = (*(code *)PTR_FUN_006079ac)(uVar3);
    uVar5 = 0x2000;
    (*DAT_00607b20)(0,uVar4,0xffffffff);
  }
  if (uVar6 == 2) {
    uVar5 = uVar5 | 3;
  }
  else if (uVar6 == 0) {
    uVar5 = uVar5 | 1;
  }
  else if (uVar6 == 1) {
    uVar5 = uVar5 | 2;
  }
  if ((param_2 & 0x10) != 0) {
    uVar5 = uVar5 | 0x80;
  }
  if ((param_2 & 0x300) == 0) {
    if (0x00000100 != 0x200) goto LAB_005aa31d;
  }
  else if ((param_2 & 0x200) == 0) goto LAB_005aa31d;
  uVar5 = uVar5 | 0x40;
LAB_005aa31d:
  FUN_005ab978(uVar4,uVar5);
  return uVar4;
}
