// Name: FUN_0056b960
// Address: 0056b960
// Address Range: [[0056b960, 0056bba0]]
// Convention: unknown
// Signature: uint FUN_0056b960(LPCSTR param_1,uint param_2,uint param_3,int *param_4)

#include "nocturne.h"

uint FUN_0056b960(LPCSTR param_1,uint param_2,uint param_3,int *param_4)

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
  
  iVar2 = FUN_0056dfc0();
  if (iVar2 != 0) {
    FUN_00568e80(0xb);
    return 0xffffffff;
  }
  uVar6 = param_2 & 7;
  FUN_00570510(uVar6,&local_18,&local_14);
  dwFlagsAndAttributes = 0x80;
  FUN_00570554(param_3 | uVar6,&local_1c);
  local_28.nLength = 0xc;
  local_28.lpSecurityDescriptor = (LPVOID)0x0;
  local_28.bInheritHandle = (BOOL)((param_2 & 0x80) == 0);
  if ((DAT_005c1d5c == (code *)0x0) || (iVar2 = FUN_00564520(param_1,&DAT_00598bd0), iVar2 != 0)) {
    if ((param_2 & 0x20) == 0) {
      if ((param_2 & 0x40) == 0) {
LAB_0056ba9b:
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
      local_14 = local_14 & ~DAT_005c206c;
      if (((local_14 & 0x100) != 0) && ((local_14 & 0x80) == 0)) {
        dwFlagsAndAttributes = 1;
      }
      if ((param_2 & 0x400) == 0) {
        if ((param_2 & 0x40) == 0) {
          unaff_EBX = 4;
          goto LAB_0056ba9b;
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
        uVar6 = FUN_0056c73c();
        return uVar6;
      }
    }
    uVar4 = (*(code *)PTR_FUN_005c1ac8)(hObject);
    uVar5 = 0;
    if (0x00000014 <= uVar4) {
      CloseHandle(hObject);
      FUN_00568e80(5);
      return 0xffffffff;
    }
    iVar2 = FUN_005705c0(uVar4);
    if (iVar2 != 0) {
      uVar5 = 0x2000;
    }
  }
  else {
    uVar3 = FUN_0056e208();
    uVar4 = (*(code *)PTR_FUN_005c1ac8)(uVar3);
    uVar5 = 0x2000;
    (*DAT_005c1d5c)(0,uVar4,0xffffffff);
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
    if (0x00000100 != 0x200) goto LAB_0056bb8d;
  }
  else if ((param_2 & 0x200) == 0) goto LAB_0056bb8d;
  uVar5 = uVar5 | 0x40;
LAB_0056bb8d:
  FUN_0056f278(uVar4,uVar5);
  return uVar4;
}
