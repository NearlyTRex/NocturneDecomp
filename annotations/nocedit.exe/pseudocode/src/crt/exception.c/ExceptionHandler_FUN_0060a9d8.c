// Name: crt_exception.c_ExceptionHandler_FUN_0060a9d8
// Address: 0060a9d8
// Address Range: [[0060a9d8, 0060aba5]]
// Convention: __cdecl
// Signature: EXCEPTION_DISPOSITION crt_exception.c_ExceptionHandler_FUN_0060a9d8(EXCEPTION_RECORD * ExceptionRecord, void * EstablisherFrame, CONTEXT * ContextRecord, void * DispatcherContext)
// Cross-references:
//   crt_exception.c_installExceptionHandler_FUN_0060aba8 (0060aba8) at 0060abd1 [DATA]
// Globals:
//   void*[7] g_FPExceptionJumpTable
//   ExitProcess* PTR_ExitProcess_00611534 = 00211d12
//   UnhandledExceptionFilter* PTR_SetUnhandledExceptionFilter_0061165c = 0021227a
//   EXCEPTION_FILTER_FUNC* g_UserExceptionFilter = 00000000
//   EXCEPTION_CLEANUP_FUNC* g_ExceptionCleanup = 00000000
//   BYTE g_SignalHandlingActive
// Function calls:
//   crt_fpu.c_ClearFPUExceptions_FUN_0060ce50
//   crt_signal.c_raiseFPE_FUN_0060d028
//   ExitProcess
//   UnhandledExceptionFilter

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


// Assembly code:
// 0060a9d8: PUSH EBX
//   Label: crt_exception.c_ExceptionHandler_FUN_0060a9d8
// 0060a9d9: PUSH ESI
// 0060a9da: PUSH EDI
// 0060a9db: SUB ESP,0x8
// 0060a9de: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0060a9e2: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0060a9e6: TEST byte ptr [ESI + 0x4],0x6
// 0060a9ea: JNZ 0x0060ab9a
//   XREF to: 0060ab9a (CONDITIONAL_JUMP)
// 0060a9f0: MOV EAX,dword ptr [ESI]
// 0060a9f2: ADD EAX,0x3fffff73
// 0060a9f7: CMP EAX,0x6
// 0060a9fa: JA 0x0060ab22
//   XREF to: 0060ab22 (CONDITIONAL_JUMP)
// 0060aa00: JMP dword ptr CS:[EAX*0x4 + 0x60a9bc]
//   Label: switchD
//   XREF to: 0060aa08 (COMPUTED_JUMP)
//   XREF to: 0060aa22 (COMPUTED_JUMP)
//   XREF to: 0060aa2c (COMPUTED_JUMP)
//   XREF to: 0060aa36 (COMPUTED_JUMP)
//   XREF to: 0060aa40 (COMPUTED_JUMP)
//   XREF to: 0060aa4a (COMPUTED_JUMP)
//   XREF to: 0060aad7 (COMPUTED_JUMP)
//   XREF to: 0060a9bc (DATA)
// 0060aa08: TEST byte ptr [EDI + 0x21],0x2
//   Label: caseD_c0000092
// 0060aa0c: JZ 0x0060aa18
//   XREF to: 0060aa18 (CONDITIONAL_JUMP)
// 0060aa0e: MOV EBX,0x8a
// 0060aa13: JMP 0x0060aae3
//   XREF to: 0060aae3 (UNCONDITIONAL_JUMP)
// 0060aa18: MOV EBX,0x8b
//   Label: LAB_0060aa18
// 0060aa1d: JMP 0x0060aae3
//   XREF to: 0060aae3 (UNCONDITIONAL_JUMP)
// 0060aa22: MOV EBX,0x82
//   Label: caseD_c000008d
// 0060aa27: JMP 0x0060aae3
//   XREF to: 0060aae3 (UNCONDITIONAL_JUMP)
// 0060aa2c: MOV EBX,0x86
//   Label: caseD_c000008f
// 0060aa31: JMP 0x0060aae3
//   XREF to: 0060aae3 (UNCONDITIONAL_JUMP)
// 0060aa36: MOV EBX,0x84
//   Label: caseD_c0000091
// 0060aa3b: JMP 0x0060aae3
//   XREF to: 0060aae3 (UNCONDITIONAL_JUMP)
// 0060aa40: MOV EBX,0x85
//   Label: caseD_c0000093
// 0060aa45: JMP 0x0060aae3
//   XREF to: 0060aae3 (UNCONDITIONAL_JUMP)
// 0060aa4a: MOV EAX,dword ptr [EDI + 0x28]
//   Label: caseD_c0000090
// 0060aa4d: MOV DX,word ptr [EAX]
// 0060aa50: MOV EBX,0x81
// 0060aa55: CMP DX,0xfad9
// 0060aa5a: JNZ 0x0060aa66
//   XREF to: 0060aa66 (CONDITIONAL_JUMP)
// 0060aa5c: MOV EBX,0x88
// 0060aa61: JMP 0x0060aae3
//   XREF to: 0060aae3 (UNCONDITIONAL_JUMP)
// 0060aa66: CMP DX,0xf1d9
//   Label: LAB_0060aa66
// 0060aa6b: JNZ 0x0060aa77
//   XREF to: 0060aa77 (CONDITIONAL_JUMP)
// 0060aa6d: MOV EBX,0x8e
// 0060aa72: JMP 0x0060aae3
//   XREF to: 0060aae3 (UNCONDITIONAL_JUMP)
// 0060aa77: JNZ 0x0060aa83
//   Label: LAB_0060aa77
//   XREF to: 0060aa83 (CONDITIONAL_JUMP)
// 0060aa79: MOV EBX,0x8f
// 0060aa7e: JMP 0x0060aae3
//   XREF to: 0060aae3 (UNCONDITIONAL_JUMP)
// 0060aa83: MOV DH,byte ptr [EAX]
//   Label: LAB_0060aa83
// 0060aa85: CMP DH,0xdb
// 0060aa88: JZ 0x0060aa8f
//   XREF to: 0060aa8f (CONDITIONAL_JUMP)
// 0060aa8a: CMP DH,0xdf
// 0060aa8d: JNZ 0x0060aa9f
//   XREF to: 0060aa9f (CONDITIONAL_JUMP)
// 0060aa8f: MOV CL,byte ptr [EAX + 0x1]
//   Label: LAB_0060aa8f
// 0060aa92: AND CL,0x30
// 0060aa95: CMP CL,0x10
// 0060aa98: JNZ 0x0060aa9f
//   XREF to: 0060aa9f (CONDITIONAL_JUMP)
// 0060aa9a: MOV EBX,0x8d
// 0060aa9f: TEST byte ptr [EAX],0x1
//   Label: LAB_0060aa9f
// 0060aaa2: JNZ 0x0060aade
//   XREF to: 0060aade (CONDITIONAL_JUMP)
// 0060aaa4: MOV AL,byte ptr [EAX + 0x1]
// 0060aaa7: AND AL,0x30
// 0060aaa9: CMP AL,0x30
// 0060aaab: JNZ 0x0060aade
//   XREF to: 0060aade (CONDITIONAL_JUMP)
// 0060aaad: MOV ECX,dword ptr [EDI + 0x20]
// 0060aab0: AND ECX,0xffff
// 0060aab6: MOV EAX,dword ptr [EDI + 0x24]
// 0060aab9: SHL ECX,0x2
// 0060aabc: AND EAX,0xffff
// 0060aac1: SHR CX,0xd
// 0060aac5: AND ECX,0xffff
// 0060aacb: ADD ECX,ECX
// 0060aacd: SHR EAX,CL
// 0060aacf: AND EAX,0x1
// 0060aad2: CMP EAX,0x1
// 0060aad5: JNZ 0x0060aade
//   XREF to: 0060aade (CONDITIONAL_JUMP)
// 0060aad7: MOV EBX,0x83
//   Label: caseD_c000008e
// 0060aadc: JMP 0x0060aae3
//   XREF to: 0060aae3 (UNCONDITIONAL_JUMP)
// 0060aade: CMP EBX,-0x1
//   Label: LAB_0060aade
// 0060aae1: JZ 0x0060ab22
//   XREF to: 0060ab22 (CONDITIONAL_JUMP)
// 0060aae3: MOV byte ptr [0x03f9c014],0x1
//   Label: LAB_0060aae3
//   XREF to: 03f9c014 (WRITE)
// 0060aaea: CALL crt_fpu.c_ClearFPUExceptions_FUN_0060ce50
//   XREF to: 0060ce50 (UNCONDITIONAL_CALL)
// 0060aaef: PUSH EBX
// 0060aaf0: CALL crt_signal.c_raiseFPE_FUN_0060d028
//   XREF to: 0060d028 (UNCONDITIONAL_CALL)
// 0060aaf5: ADD ESP,0x4
// 0060aaf8: CMP EAX,-0x1
// 0060aafb: JZ 0x0060ab7b
//   XREF to: 0060ab7b (CONDITIONAL_JUMP)
// 0060ab01: CMP byte ptr [0x03f9c014],0x0
//   XREF to: 03f9c014 (READ)
// 0060ab08: JZ 0x0060ab7b
//   XREF to: 0060ab7b (CONDITIONAL_JUMP)
// 0060ab0e: MOV BX,word ptr [EDI + 0x20]
// 0060ab12: XOR BL,BL
// 0060ab14: AND BH,0x7f
// 0060ab17: XOR EAX,EAX
// 0060ab19: MOV word ptr [EDI + 0x20],BX
// 0060ab1d: JMP 0x0060ab9f
//   XREF to: 0060ab9f (UNCONDITIONAL_JUMP)
// 0060ab22: CMP dword ptr [0x006853f4],0x0
//   Label: default
//   XREF to: 006853f4 (READ)
// 0060ab29: JZ 0x0060ab7b
//   XREF to: 0060ab7b (CONDITIONAL_JUMP)
// 0060ab2b: MOV EBX,0x1
// 0060ab30: MOV ECX,dword ptr [ESI]
//   Label: LAB_0060ab30
// 0060ab32: PUSH ECX
// 0060ab33: PUSH EBX
// 0060ab34: CALL dword ptr [g_UserExceptionFilter]
//   XREF to: 006853f0 (READ)
// 0060ab3a: ADD ESP,0x8
// 0060ab3d: TEST EAX,EAX
// 0060ab3f: JZ 0x0060ab75
//   XREF to: 0060ab75 (CONDITIONAL_JUMP)
// 0060ab41: CMP EAX,0x1
// 0060ab44: JZ 0x0060ab7b
//   XREF to: 0060ab7b (CONDITIONAL_JUMP)
// 0060ab46: CMP EAX,0x2
// 0060ab49: JZ 0x0060ab7b
//   XREF to: 0060ab7b (CONDITIONAL_JUMP)
// 0060ab4b: CMP EAX,0x3
// 0060ab4e: JZ 0x0060ab7b
//   XREF to: 0060ab7b (CONDITIONAL_JUMP)
// 0060ab50: MOV DL,0x1
// 0060ab52: PUSH EBX
// 0060ab53: MOV byte ptr [0x03f9c014],DL
//   XREF to: 03f9c014 (WRITE)
// 0060ab59: CALL dword ptr [g_ExceptionCleanup]
//   XREF to: 006853f4 (READ)
// 0060ab5f: MOV DH,byte ptr [0x03f9c014]
//   XREF to: 03f9c014 (READ)
// 0060ab65: ADD ESP,0x4
// 0060ab68: TEST DH,DH
// 0060ab6a: JZ 0x0060ab75
//   XREF to: 0060ab75 (CONDITIONAL_JUMP)
// 0060ab6c: XOR EAX,EAX
// 0060ab6e: ADD ESP,0x8
// 0060ab71: POP EDI
// 0060ab72: POP ESI
// 0060ab73: POP EBX
// 0060ab74: RET
// 0060ab75: INC EBX
//   Label: LAB_0060ab75
// 0060ab76: CMP EBX,0xc
// 0060ab79: JLE 0x0060ab30
//   XREF to: 0060ab30 (CONDITIONAL_JUMP)
// 0060ab7b: MOV EAX,ESP
//   Label: LAB_0060ab7b
// 0060ab7d: PUSH EAX
// 0060ab7e: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 0060ab82: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0x10] (WRITE)
// 0060ab86: CALL dword ptr CS:[0x61165c]
//   XREF to: EXTERNAL:000000a2 (COMPUTED_CALL)
//   XREF to: 0061165c (READ)
// 0060ab8d: TEST EAX,EAX
// 0060ab8f: JZ 0x0060ab9a
//   XREF to: 0060ab9a (CONDITIONAL_JUMP)
// 0060ab91: PUSH -0x1
// 0060ab93: CALL dword ptr CS:[0x611534]
//   XREF to: EXTERNAL:00000058 (UNCONDITIONAL_CALL)
//   XREF to: 00611534 (READ)
// 0060ab9a: MOV EAX,0x1
//   Label: LAB_0060ab9a
// 0060ab9f: ADD ESP,0x8
//   Label: LAB_0060ab9f
// 0060aba2: POP EDI
// 0060aba3: POP ESI
// 0060aba4: POP EBX
// 0060aba5: RET
