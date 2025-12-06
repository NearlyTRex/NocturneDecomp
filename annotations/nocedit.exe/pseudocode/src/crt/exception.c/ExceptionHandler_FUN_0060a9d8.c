// Name: crt_exception.c_ExceptionHandler_FUN_0060a9d8
// Address: 0060a9d8
// Address Range: [[0060a9d8, 0060aba5]]
// Convention: __cdecl
// Signature: EXCEPTION_DISPOSITION crt_exception.c_ExceptionHandler_FUN_0060a9d8(EXCEPTION_RECORD * ExceptionRecord, void * EstablisherFrame, CONTEXT * ContextRecord, void * DispatcherContext)

#include "nocturne.h"

EXCEPTION_DISPOSITION __cdecl
crt_exception_c_ExceptionHandler_FUN_0060a9d8
          (EXCEPTION_RECORD *ExceptionRecord,void *EstablisherFrame,CONTEXT *ContextRecord,
          void *DispatcherContext)

{
  short sVar1;
  byte *pbVar2;
  int iVar3;
  long lVar4;
  EXCEPTION_DISPOSITION EVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  
  if ((ExceptionRecord->ExceptionFlags & 6) != 0) {
    return ExceptionContinueSearch;
  }
  switch(ExceptionRecord->ExceptionCode) {
  case 0xc000008d:
    iVar6 = 0x82;
    break;
  case 0xc000008e:
switchD_0060aa00_caseD_c000008e:
    iVar6 = 0x83;
    break;
  case 0xc000008f:
    iVar6 = 0x86;
    break;
  case 0xc0000090:
    pbVar2 = (byte *)(ContextRecord->FloatSave).ErrorOffset;
    sVar1 = *(short *)pbVar2;
    iVar6 = 0x81;
    if (sVar1 == -0x527) {
      iVar6 = 0x88;
    }
    else if (sVar1 != -0xe27) {
      if (sVar1 != -0xe27) {
        if (((*pbVar2 == 0xdb) || (*pbVar2 == 0xdf)) && ((pbVar2[1] & 0x30) == 0x10)) {
          iVar6 = 0x8d;
        }
        if ((((*pbVar2 & 1) == 0) && ((pbVar2[1] & 0x30) == 0x30)) &&
           ((((ContextRecord->FloatSave).TagWord & 0xffff) >>
             ((byte)((((ContextRecord->FloatSave).StatusWord & 0xffff) << 2) >> 0xd) & 7) * '\x02' &
            1) == 1)) goto switchD_0060aa00_caseD_c000008e;
        if (iVar6 == -1) goto switchD_0060aa00_default;
      }
      else {
        iVar6 = 0x8f;
      }
    }
    else {
      iVar6 = 0x8e;
    }
    break;
  case 0xc0000091:
    iVar6 = 0x84;
    break;
  case 0xc0000092:
    if (((ContextRecord->FloatSave).StatusWord & 0x200) == 0) {
      iVar6 = 0x8b;
    }
    else {
      iVar6 = 0x8a;
    }
    break;
  case 0xc0000093:
    iVar6 = 0x85;
    break;
  default:
switchD_0060aa00_default:
    if (g_ExceptionCleanup != (EXCEPTION_CLEANUP_FUNC *)0x0) {
      iVar6 = 1;
      do {
        iVar3 = (*g_UserExceptionFilter)(iVar6,ExceptionRecord->ExceptionCode);
        if (iVar3 != 0) {
          if (((iVar3 == 1) || (iVar3 == 2)) || (iVar3 == 3)) break;
          g_SignalHandlingActive = '\x01';
          (*g_ExceptionCleanup)(iVar6);
          if (g_SignalHandlingActive != '\0') {
            return ExceptionContinueExecution;
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0xd);
    }
    goto LAB_0060ab7b;
  }
  g_SignalHandlingActive = '\x01';
  crt_fpu_c_ClearFPUExceptions_FUN_0060ce50();
  iVar6 = crt_signal_c_raiseFPE_FUN_0060d028(iVar6);
  if ((iVar6 != -1) && (g_SignalHandlingActive != '\0')) {
    *(ushort *)&(ContextRecord->FloatSave).StatusWord =
         ((ushort)(ContextRecord->FloatSave).StatusWord >> 8 & 0x7f) << 8;
    return ExceptionContinueExecution;
  }
LAB_0060ab7b:
  lVar4 = (*PTR_SetUnhandledExceptionFilter_0061165c)((_EXCEPTION_POINTERS *)&stack0xfffffff4);
  if (lVar4 == 0) {
    return ExceptionContinueSearch;
  }
  EVar5 = (*PTR_ExitProcess_00611534)(0xffffffff);
  return EVar5;
}
