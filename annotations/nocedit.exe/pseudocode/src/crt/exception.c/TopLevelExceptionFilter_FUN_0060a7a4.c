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
  BADSPACEBASE *in_ESP;
  byte bVar8;
  char *pcVar9;
  uint in_stack_fffffef4;
  PVOID value;
  char acStack_104 [244];
  
  bVar8 = 0;
  pEVar2 = ExceptionInfo->ExceptionRecord;
  pCVar3 = ExceptionInfo->ContextRecord;
  BVar5 = crt_windows_c_has_active_window_FUN_0060a710();
  if ((BVar5 != 0) ||
     (pvVar6 = crt_stdio_c_GetConsoleOutputHandle_FUN_0060ce3c(), pvVar6 == (HANDLE)0xffffffff)) {
    return 0;
  }
  value = (PVOID)(in_stack_fffffef4 & 0xffffff00);
  puVar4 = (byte *)pEVar2->ExceptionCode;
  if (puVar4 < (byte *)0xc0000090) {
    if ((byte *)0xc000008c < puVar4) {
      if (puVar4 < (byte *)0xc000008e) {
        pcVar9 = (char *)pEVar2->ExceptionAddress;
      }
      else if (puVar4 < (byte *)0xc000008f) {
        pcVar9 = (char *)pEVar2->ExceptionAddress;
      }
      else {
        pcVar9 = (char *)pEVar2->ExceptionAddress;
      }
      goto LAB_0060a968;
    }
    if (&DAT_c0000005 <= puVar4) {
      if (puVar4 < (byte *)0xc0000006) {
        crt_exception_c_FormatHexString_FUN_0060a748
                  (&stack0xfffffef4,"The instruction at 0x00000000 referenced memory ",
                   (DWORD)pEVar2->ExceptionAddress);
        crt_exception_c_FormatHexString_FUN_0060a748
                  (&stack0xfffffef4,"at 0x00000000.\nThe memory could not be ",
                   pEVar2->ExceptionInformation[1]);
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
        pcVar9 = (char *)pEVar2->ExceptionAddress;
        goto LAB_0060a968;
      }
    }
  }
  else {
    if (puVar4 < (byte *)0xc0000091) {
      pcVar9 = (char *)pEVar2->ExceptionAddress;
      goto LAB_0060a968;
    }
    if (puVar4 < (byte *)0xc0000093) {
      if (puVar4 < (byte *)0xc0000092) {
        pcVar9 = (char *)pEVar2->ExceptionAddress;
      }
      else if (((pCVar3->FloatSave).StatusWord & 0x200) == 0) {
        pcVar9 = (char *)pEVar2->ExceptionAddress;
      }
      else {
        pcVar9 = (char *)pEVar2->ExceptionAddress;
      }
      goto LAB_0060a968;
    }
    if (puVar4 < (byte *)0xc0000094) {
      pcVar9 = (char *)pEVar2->ExceptionAddress;
      goto LAB_0060a968;
    }
    if (puVar4 < (byte *)0xc0000096) {
      if (puVar4 == (byte *)0xc0000094) {
        pcVar9 = (char *)pEVar2->ExceptionAddress;
        goto LAB_0060a968;
      }
    }
    else {
      if (puVar4 < (byte *)0xc0000097) {
        pcVar9 = (char *)pEVar2->ExceptionAddress;
        goto LAB_0060a968;
      }
      if (puVar4 == (byte *)0xc00000fd) {
        pcVar9 = (char *)pEVar2->ExceptionAddress;
        goto LAB_0060a968;
      }
    }
  }
  crt_exception_c_FormatHexString_FUN_0060a748
            (&stack0xfffffef4,"The program encountered exception 0x00000000 at ",pEVar2->ExceptionCode);
  value = pEVar2->ExceptionAddress;
  pcVar9 = "address 0x00000000 and\ncannot continue.\n";
LAB_0060a968:
  crt_exception_c_FormatHexString_FUN_0060a748(&stack0xfffffef8,pcVar9,(DWORD)value);
  uVar7 = 0xffffffff;
  pcVar9 = acStack_104;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + (uint)bVar8 * -2 + 1;
  } while (cVar1 != '\0');
  (*PTR_WriteFile_00611678)
            (g_IOControlBlock->standard_handles[2],acStack_104,~uVar7 - 1,(LPDWORD)&stack0xfffffffc,
             (LPOVERLAPPED)0x0);
  return 1;
}
