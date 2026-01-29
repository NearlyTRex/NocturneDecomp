// Name: crt_exception.c_ExceptionHandler_FUN_0060a9d8
// Address: 0060a9d8
// Address Range: [[0060a9d8, 0060aba5]]
// Convention: __cdecl
// Signature: EXCEPTION_DISPOSITION __cdecl crt_exception_c_ExceptionHandler_FUN_0060a9d8 (EXCEPTION_RECORD *ExceptionRecord,void *EstablisherFrame,CONTEXT *ContextRecord, void *DispatcherContext)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0060aa79) */

EXCEPTION_DISPOSITION __cdecl
ExceptionHandler
          (EXCEPTION_RECORD *ExceptionRecord,void *EstablisherFrame,CONTEXT *ContextRecord,
          void *DispatcherContext)

{
  byte *pbVar1;
  int iVar2;
  long lVar3;
  EXCEPTION_DISPOSITION EVar4;
  int iVar5;
  PEXCEPTION_RECORD local_14;
  
  if ((ExceptionRecord->ExceptionFlags & 6) != 0) {
    return ExceptionContinueSearch;
  }
  switch(ExceptionRecord->ExceptionCode) {
  case 0xc000008d:
    iVar5 = 0x82;
    break;
  case 0xc000008e:
switchD_0060aa00_caseD_c000008e:
    iVar5 = 0x83;
    break;
  case 0xc000008f:
    iVar5 = 0x86;
    break;
  case 0xc0000090:
    pbVar1 = (byte *)(ContextRecord->FloatSave).ErrorOffset;
    iVar5 = 0x81;
    if (*(short *)pbVar1 == -0x527) {
      iVar5 = 0x88;
    }
    else if (*(short *)pbVar1 == -0xe27) {
      iVar5 = 0x8e;
    }
    else {
      if (((*pbVar1 == 0xdb) || (*pbVar1 == 0xdf)) && ((pbVar1[1] & 0x30) == 0x10)) {
        iVar5 = 0x8d;
      }
      if ((((*pbVar1 & 1) == 0) && ((pbVar1[1] & 0x30) == 0x30)) &&
         ((((ContextRecord->FloatSave).TagWord & 0xffff) >>
           ((byte)((((ContextRecord->FloatSave).StatusWord & 0xffff) << 2) >> 0xd) & 7) * '\x02' & 1
          ) == 1)) goto switchD_0060aa00_caseD_c000008e;
      if (iVar5 == -1) goto switchD_0060aa00_default;
    }
    break;
  case 0xc0000091:
    iVar5 = 0x84;
    break;
  case 0xc0000092:
    if (((ContextRecord->FloatSave).StatusWord & 0x200) == 0) {
      iVar5 = 0x8b;
    }
    else {
      iVar5 = 0x8a;
    }
    break;
  case 0xc0000093:
    iVar5 = 0x85;
    break;
  default:
switchD_0060aa00_default:
    if (g_ExceptionCleanup != (EXCEPTION_CLEANUP_FUNC *)0x0) {
      iVar5 = 1;
      do {
        iVar2 = (*g_UserExceptionFilter)(iVar5,ExceptionRecord->ExceptionCode);
        if (iVar2 != 0) {
          if (((iVar2 == 1) || (iVar2 == 2)) || (iVar2 == 3)) break;
          g_SignalHandlingActive = '\x01';
          local_14 = (PEXCEPTION_RECORD)0x60ab5f;
          (*g_ExceptionCleanup)(iVar5);
          if (g_SignalHandlingActive != '\0') {
            return ExceptionContinueExecution;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0xd);
    }
    goto LAB_0060ab7b;
  }
  g_SignalHandlingActive = '\x01';
  ClearFPUExceptions();
  iVar5 = raiseFPE(iVar5);
  if ((iVar5 != -1) && (g_SignalHandlingActive != '\0')) {
    *(ushort *)&(ContextRecord->FloatSave).StatusWord =
         ((ushort)(ContextRecord->FloatSave).StatusWord >> 8 & 0x7f) << 8;
    return ExceptionContinueExecution;
  }
LAB_0060ab7b:
  local_14 = ExceptionRecord;
  lVar3 = (*g_UnhandledExceptionFilterFunc)((_EXCEPTION_POINTERS *)&local_14);
  if (lVar3 == 0) {
    return ExceptionContinueSearch;
  }
  EVar4 = (*g_ExitProcessFunc)(0xffffffff);
  return EVar4;
}
