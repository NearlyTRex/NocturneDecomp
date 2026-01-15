// Name: crt_exception.c_TopLevelExceptionFilter_FUN_0060a7a4
// Address: 0060a7a4
// Address Range: [[0060a7a4, 0060a9ba]]
// Convention: __cdecl
// Signature: long crt_exception.c_TopLevelExceptionFilter_FUN_0060a7a4(_EXCEPTION_POINTERS * ExceptionInfo)

#include "nocturne.h"

long __cdecl
crt_exception_c_TopLevelExceptionFilter_FUN_0060a7a4(_EXCEPTION_POINTERS *ExceptionInfo)

{
  char cVar1;
  PEXCEPTION_RECORD pEVar2;
  PCONTEXT pCVar3;
  byte *puVar4;
  BOOL BVar5;
  HANDLE pvVar6;
  uint uVar7;
  byte bVar8;
  char *pcVar9;
  PVOID value;
  char local_114 [256];
  DWORD local_14;
  
  bVar8 = 0;
  pEVar2 = ExceptionInfo->ExceptionRecord;
  pCVar3 = ExceptionInfo->ContextRecord;
  BVar5 = crt_windows_c_has_active_window_FUN_0060a710();
  if ((BVar5 != 0) ||
     (pvVar6 = crt_stdio_c_GetConsoleOutputHandle_FUN_0060ce3c(), pvVar6 == (HANDLE)0xffffffff)) {
    return 0;
  }
  local_114[0] = '\0';
  puVar4 = (byte *)pEVar2->ExceptionCode;
  if (puVar4 < (byte *)0xc0000090) {
    if ((byte *)0xc000008c < puVar4) {
      if (puVar4 < (byte *)0xc000008e) {
        value = pEVar2->ExceptionAddress;
        pcVar9 = "The instruction at 0x00000000 caused a denormal operand floating point\nexception.\n";
      }
      else if (puVar4 < (byte *)0xc000008f) {
        value = pEVar2->ExceptionAddress;
        pcVar9 = "The instruction at 0x00000000 caused a division by zero floating point\nexception.\n";
      }
      else {
        value = pEVar2->ExceptionAddress;
        pcVar9 = "The instruction at 0x00000000 caused an inexact value floating point\nexception.\n";
      }
      goto LAB_0060a968;
    }
    if (&DAT_c0000005 <= puVar4) {
      if (puVar4 < (byte *)0xc0000006) {
        crt_exception_c_FormatHexString_FUN_0060a748
                  (local_114,"The instruction at 0x00000000 referenced memory ",(DWORD)pEVar2->ExceptionAddress);
        crt_exception_c_FormatHexString_FUN_0060a748
                  (local_114,"at 0x00000000.\nThe memory could not be ",pEVar2->ExceptionInformation[1]);
        if (pEVar2->ExceptionInformation[0] == 0) {
          pcVar9 = "read.\n";
          value = (PVOID)0x0;
        }
        else {
          value = (PVOID)0x0;
          pcVar9 = "written.\n";
        }
        goto LAB_0060a968;
      }
      if (puVar4 == &DAT_c000001d) {
        value = pEVar2->ExceptionAddress;
        pcVar9 = "An illegal instruction was executed at address 0x00000000.\n";
        goto LAB_0060a968;
      }
    }
  }
  else {
    if (puVar4 < (byte *)0xc0000091) {
      value = pEVar2->ExceptionAddress;
      pcVar9 = "The instruction at 0x00000000 caused an invalid operation floating point\nexception.\n";
      goto LAB_0060a968;
    }
    if (puVar4 < (byte *)0xc0000093) {
      if (puVar4 < (byte *)0xc0000092) {
        value = pEVar2->ExceptionAddress;
        pcVar9 = "The instruction at 0x00000000 caused an overflow floating point exception.\n";
      }
      else if (((pCVar3->FloatSave).StatusWord & 0x200) == 0) {
        value = pEVar2->ExceptionAddress;
        pcVar9 = "The instruction at 0x00000000 caused a stack underflow floating point\nexception.\n";
      }
      else {
        value = pEVar2->ExceptionAddress;
        pcVar9 = "The instruction at 0x00000000 caused a stack overflow floating point\nexception.\n";
      }
      goto LAB_0060a968;
    }
    if (puVar4 < (byte *)0xc0000094) {
      value = pEVar2->ExceptionAddress;
      pcVar9 = "The instruction at 0x00000000 caused an underflow floating point exception.\n";
      goto LAB_0060a968;
    }
    if (puVar4 < (byte *)0xc0000096) {
      if (puVar4 == (byte *)0xc0000094) {
        value = pEVar2->ExceptionAddress;
        pcVar9 = "An integer divide by zero was encountered at address 0x00000000.\n";
        goto LAB_0060a968;
      }
    }
    else {
      if (puVar4 < (byte *)0xc0000097) {
        value = pEVar2->ExceptionAddress;
        pcVar9 = "A privileged instruction was executed at address 0x00000000.\n";
        goto LAB_0060a968;
      }
      if (puVar4 == (byte *)0xc00000fd) {
        value = pEVar2->ExceptionAddress;
        pcVar9 = "A stack overflow was encountered at address 0x00000000.\n";
        goto LAB_0060a968;
      }
    }
  }
  crt_exception_c_FormatHexString_FUN_0060a748
            (local_114,"The program encountered exception 0x00000000 at ",pEVar2->ExceptionCode);
  value = pEVar2->ExceptionAddress;
  pcVar9 = "address 0x00000000 and\ncannot continue.\n";
LAB_0060a968:
  crt_exception_c_FormatHexString_FUN_0060a748(local_114,pcVar9,(DWORD)value);
  uVar7 = 0xffffffff;
  pcVar9 = local_114;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + (uint)bVar8 * -2 + 1;
  } while (cVar1 != '\0');
  (*PTR_WriteFile_00611678)
            (g_IOControlBlock->standard_handles[2],local_114,~uVar7 - 1,&local_14,(LPOVERLAPPED)0x0)
  ;
  return 1;
}
