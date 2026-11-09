// Name: unkafter_2d.cpp_FUN_005ceab0
// Address: 005ceab0
// Address Range: [[005ceab0, 005ceba4]]
// Convention: unknown
// Signature: HANDLE unkafter_2d_cpp_FUN_005ceab0(undefined4 param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

HANDLE unkafter_2d_cpp_FUN_005ceab0(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  DWORD DVar2;
  HANDLE hObject;
  byte bVar3;
  CHAR aCStackY_1034 [4048];
  byte *puVar4;
  uint uVar5;
  uint uStack_4c;
  uint uStack_48;
  byte auStack_44 [24];
  uint uStack_2c;
  uint uStack_28;
  HANDLE pvStack_24;
  HANDLE pvStack_20;
  uint *puStack_1c;
  DWORD DStack_18;
  
  bVar3 = 0;
  if (DAT_006265f8 == -1) {
    iVar1 = unkafter_zombie_cpp_FUN_005cac7c();
    if (iVar1 == 0) {
      return (HANDLE)0x0;
    }
    unkafter_zombie_cpp_FUN_005cadb4();
  }
  uStack_2c = param_1;
  uStack_28 = param_3;
  pvStack_24 = GetCurrentThread();
  uVar5 = 0x10;
  puVar4 = auStack_44;
  puStack_1c = (uint *)0x0;
  uStack_4c = 0x67625F5F;
  (&uStack_48)[(uint)bVar3 * -2] = (&DAT_005fb2c0)[(uint)bVar3 * -2];
  auStack_44[(uint)bVar3 * -8 + (uint)bVar3 * -8] =
       (&DAT_005fb2c4)[(uint)bVar3 * -8 + (uint)bVar3 * -8];
  DVar2 = GetCurrentThreadId();
  FUN_005c9e48(DVar2,puVar4,uVar5);
  pvStack_20 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)&uStack_4c);
  hObject = CreateThread((LPSECURITY_ATTRIBUTES)0x0,(param_2 + 0xfffU >> 8 & 0xfffff0) << 8,
                         unkafter_2d_cpp_FUN_005cea10,&uStack_2c,0,&DStack_18);
  if (hObject == (HANDLE)0x0) {
    DStack_18 = 0xffffffff;
  }
  else {
    WaitForSingleObject(pvStack_20,0xffffffff);
    if (puStack_1c == (uint *)0x0) {
      CloseHandle(hObject);
    }
    else {
      *puStack_1c = hObject;
    }
  }
  CloseHandle(pvStack_20);
  return hObject;
}
