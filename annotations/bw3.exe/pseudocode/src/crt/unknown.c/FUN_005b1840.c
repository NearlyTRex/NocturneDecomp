// Name: crt_unknown.c_FUN_005b1840
// Address: 005b1840
// Address Range: [[005b1840, 005b1934]]
// Convention: unknown
// Signature: HANDLE crt_unknown_c_FUN_005b1840(undefined4 param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

HANDLE FUN_005b1840(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  DWORD value;
  HANDLE hObject;
  byte bVar2;
  char acStackY_1034 [4048];
  char *buffer;
  char cStack_4c;
  char cStack_4b;
  char cStack_4a;
  char cStack_49;
  uint uStack_48;
  char acStack_44 [24];
  uint uStack_2c;
  uint uStack_28;
  HANDLE pvStack_24;
  HANDLE pvStack_20;
  uint *puStack_1c;
  DWORD DStack_18;
  
  bVar2 = 0;
  if (g_INT_0060799c == -1) {
    iVar1 = FUN_005adaec();
    if (iVar1 == 0) {
      return (HANDLE)0x0;
    }
    FUN_005adc24();
  }
  uStack_2c = param_1;
  uStack_28 = param_3;
  pvStack_24 = GetCurrentThread();
  iVar1 = 0x10;
  buffer = acStack_44;
  puStack_1c = (uint *)0x0;
  cStack_4c = "__bgnthd"[0];
  cStack_4b = "__bgnthd"[1];
  cStack_4a = "__bgnthd"[2];
  cStack_49 = "__bgnthd"[3];
  (&uStack_48)[(uint)bVar2 * -2] = *(uint *)("__bgnthd" + (uint)bVar2 * -8 + 4);
  acStack_44[(uint)bVar2 * -8 + (uint)bVar2 * -8] =
       "__bgnthd"[(uint)bVar2 * -8 + (uint)bVar2 * -8 + 8];
  value = GetCurrentThreadId();
  IntegerToString(value,buffer,iVar1);
  pvStack_20 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,&stack0xffffffb4);
  hObject = CreateThread((LPSECURITY_ATTRIBUTES)0x0,(param_2 + 0xfffU >> 8 & 0xfffff0) << 8,
                         FUN_005b17a0,&uStack_2c,0,&DStack_18);
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
