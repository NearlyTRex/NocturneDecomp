// Name: crt_exception.c_TopLevelExceptionFilter_FUN_0056ead4
// Address: 0056ead4
// Address Range: [[0056ead4, 0056ecea]]
// Convention: __cdecl
// Signature: long __cdecl crt_exception_c_TopLevelExceptionFilter_FUN_0056ead4(_EXCEPTION_POINTERS *ExceptionInfo)

#include "nocturne.h"

long __cdecl TopLevelExceptionFilter(_EXCEPTION_POINTERS *ExceptionInfo)

{
  char cVar1;
  PEXCEPTION_RECORD pEVar2;
  PCONTEXT pCVar3;
  BOOL BVar4;
  HANDLE pvVar5;
  uint uVar6;
  byte bVar7;
  char *pcVar8;
  PVOID value;
  char local_114 [256];
  DWORD local_14;
  
  bVar7 = 0;
  pEVar2 = ExceptionInfo->ExceptionRecord;
  pCVar3 = ExceptionInfo->ContextRecord;
  BVar4 = has_active_window();
  if ((BVar4 != 0) || (pvVar5 = FUN_005714ec(), pvVar5 == (HANDLE)0xffffffff)) {
    return 0;
  }
  local_114[0] = '\0';
  uVar6 = pEVar2->ExceptionCode;
  if (uVar6 < 0xc0000090) {
    if (0xc000008c < uVar6) {
      if (uVar6 < 0xc000008e) {
        value = pEVar2->ExceptionAddress;
        pcVar8 = "The instruction at 0x00000000 caused a denormal operand floating point\nexception.\n";
      }
      else if (uVar6 < 0xc000008f) {
        value = pEVar2->ExceptionAddress;
        pcVar8 = "The instruction at 0x00000000 caused a division by zero floating point\nexception.\n";
      }
      else {
        value = pEVar2->ExceptionAddress;
        pcVar8 = "The instruction at 0x00000000 caused an inexact value floating point\nexception.\n";
      }
      goto LAB_0056ec98;
    }
    if (0xc0000004 < uVar6) {
      if (uVar6 < 0xc0000006) {
        FormatHexString
                  (local_114,"The instruction at 0x00000000 referenced memory ",(DWORD)pEVar2->ExceptionAddress);
        FormatHexString
                  (local_114,"at 0x00000000.\nThe memory could not be ",pEVar2->ExceptionInformation[1]);
        if (pEVar2->ExceptionInformation[0] == 0) {
          pcVar8 = "read.\n";
          value = (PVOID)0x0;
        }
        else {
          value = (PVOID)0x0;
          pcVar8 = "written.\n";
        }
        goto LAB_0056ec98;
      }
      if (uVar6 == 0xc000001d) {
        value = pEVar2->ExceptionAddress;
        pcVar8 = "An illegal instruction was executed at address 0x00000000.\n";
        goto LAB_0056ec98;
      }
    }
  }
  else {
    if (uVar6 < 0xc0000091) {
      value = pEVar2->ExceptionAddress;
      pcVar8 = "The instruction at 0x00000000 caused an invalid operation floating point\nexception.\n";
      goto LAB_0056ec98;
    }
    if (uVar6 < 0xc0000093) {
      if (uVar6 < 0xc0000092) {
        value = pEVar2->ExceptionAddress;
        pcVar8 = "The instruction at 0x00000000 caused an overflow floating point exception.\n";
      }
      else if (((pCVar3->FloatSave).StatusWord & 0x200) == 0) {
        value = pEVar2->ExceptionAddress;
        pcVar8 = "The instruction at 0x00000000 caused a stack underflow floating point\nexception.\n";
      }
      else {
        value = pEVar2->ExceptionAddress;
        pcVar8 = "The instruction at 0x00000000 caused a stack overflow floating point\nexception.\n";
      }
      goto LAB_0056ec98;
    }
    if (uVar6 < 0xc0000094) {
      value = pEVar2->ExceptionAddress;
      pcVar8 = "The instruction at 0x00000000 caused an underflow floating point exception.\n";
      goto LAB_0056ec98;
    }
    if (uVar6 < 0xc0000096) {
      if (uVar6 == 0xc0000094) {
        value = pEVar2->ExceptionAddress;
        pcVar8 = "An integer divide by zero was encountered at address 0x00000000.\n";
        goto LAB_0056ec98;
      }
    }
    else {
      if (uVar6 < 0xc0000097) {
        value = pEVar2->ExceptionAddress;
        pcVar8 = "A privileged instruction was executed at address 0x00000000.\n";
        goto LAB_0056ec98;
      }
      if (uVar6 == 0xc00000fd) {
        value = pEVar2->ExceptionAddress;
        pcVar8 = "A stack overflow was encountered at address 0x00000000.\n";
        goto LAB_0056ec98;
      }
    }
  }
  FormatHexString
            (local_114,"The program encountered exception 0x00000000 at ",pEVar2->ExceptionCode);
  value = pEVar2->ExceptionAddress;
  pcVar8 = "address 0x00000000 and\ncannot continue.\n";
LAB_0056ec98:
  FormatHexString(local_114,pcVar8,(DWORD)value);
  uVar6 = 0xffffffff;
  pcVar8 = local_114;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + (uint)bVar7 * -2 + 1;
  } while (cVar1 != '\0');
  WriteFile(*(HANDLE *)(DAT_005c1f54 + 8),local_114,~uVar6 - 1,&local_14,(LPOVERLAPPED)0x0);
  return 1;
}
