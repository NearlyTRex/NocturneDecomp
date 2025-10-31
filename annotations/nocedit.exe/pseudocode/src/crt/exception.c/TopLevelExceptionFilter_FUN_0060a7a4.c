// Name: crt_exception.c_TopLevelExceptionFilter_FUN_0060a7a4
// Address: 0060a7a4
// Address Range: [[0060a7a4, 0060a9ba]]
// Convention: __cdecl
// Signature: long crt_exception.c_TopLevelExceptionFilter_FUN_0060a7a4(_EXCEPTION_POINTERS * ExceptionInfo)
// Cross-references:
//   crt_exception.c_installExceptionHandler_FUN_0060aba8 (0060aba8) at 0060abe6 [DATA]
// Globals:
//   WriteFile* PTR_WriteFile_00611678 = 00212300
//   TerminatedCString s_The_instruction_at_0x000_0065912c
//   TerminatedCString s_The_instruction_at_0x000_00659180
//   TerminatedCString s_The_instruction_at_0x000_006591d4
//   TerminatedCString s_The_instruction_at_0x000_00659228
//   TerminatedCString s_The_instruction_at_0x000_0065927c
//   TerminatedCString s_The_instruction_at_0x000_006592d0
//   TerminatedCString s_The_instruction_at_0x000_0065931c
//   TerminatedCString s_The_instruction_at_0x000_0065936c
//   TerminatedCString s_The_instruction_at_0x000_006593c4
//   TerminatedCString s_at_0x00000000_The_memory_006593f8
//   TerminatedCString s_read_00659420
//   TerminatedCString s_written_00659428
//   TerminatedCString s_A_privileged_instruction_00659434
//   TerminatedCString s_An_illegal_instruction_w_00659474
//   TerminatedCString s_An_integer_divide_by_zer_006594b0
//   TerminatedCString s_A_stack_overflow_was_enc_006594f4
//   TerminatedCString s_The_program_encountered__00659530
//   TerminatedCString s_address_0x00000000_and_c_00659564
//   SIOControlBlock* g_IOControlBlock = 00000000
// Function calls:
//   crt_exception.c_FormatHexString_FUN_0060a748
//   crt_stdio.c_GetConsoleOutputHandle_FUN_0060ce3c
//   crt_windows.c_has_active_window_FUN_0060a710
//   WriteFile

#include "nocturne.h"

long __cdecl
crt_exception_c_TopLevelExceptionFilter_FUN_0060a7a4(_EXCEPTION_POINTERS *ExceptionInfo)

{
  char cVar1;
  PEXCEPTION_RECORD pEVar2;
  PCONTEXT pCVar3;
  undefined1 *puVar4;
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
  puVar4 = (undefined1 *)pEVar2->ExceptionCode;
  if (puVar4 < (undefined1 *)0xc0000090) {
    if ((undefined1 *)0xc000008c < puVar4) {
      if (puVar4 < (undefined1 *)0xc000008e) {
        pcVar9 = (char *)pEVar2->ExceptionAddress;
      }
      else if (puVar4 < (undefined1 *)0xc000008f) {
        pcVar9 = (char *)pEVar2->ExceptionAddress;
      }
      else {
        pcVar9 = (char *)pEVar2->ExceptionAddress;
      }
      goto LAB_0060a968;
    }
    if (&DAT_c0000005 <= puVar4) {
      if (puVar4 < (undefined1 *)0xc0000006) {
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
    if (puVar4 < (undefined1 *)0xc0000091) {
      pcVar9 = (char *)pEVar2->ExceptionAddress;
      goto LAB_0060a968;
    }
    if (puVar4 < (undefined1 *)0xc0000093) {
      if (puVar4 < (undefined1 *)0xc0000092) {
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
    if (puVar4 < (undefined1 *)0xc0000094) {
      pcVar9 = (char *)pEVar2->ExceptionAddress;
      goto LAB_0060a968;
    }
    if (puVar4 < (undefined1 *)0xc0000096) {
      if (puVar4 == (undefined1 *)0xc0000094) {
        pcVar9 = (char *)pEVar2->ExceptionAddress;
        goto LAB_0060a968;
      }
    }
    else {
      if (puVar4 < (undefined1 *)0xc0000097) {
        pcVar9 = (char *)pEVar2->ExceptionAddress;
        goto LAB_0060a968;
      }
      if (puVar4 == (undefined1 *)0xc00000fd) {
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


// Assembly code:
// 0060a7a4: PUSH EBX
//   Label: crt_exception.c_TopLevelExceptionFilter_FUN_0060a7a4
// 0060a7a5: PUSH ESI
// 0060a7a6: PUSH EDI
// 0060a7a7: PUSH EBP
// 0060a7a8: SUB ESP,0x104
// 0060a7ae: MOV EDI,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x4] (READ)
// 0060a7b5: MOV EBX,dword ptr [EDI]
// 0060a7b7: MOV EDI,dword ptr [EDI + 0x4]
// 0060a7ba: CALL crt_windows.c_has_active_window_FUN_0060a710
//   XREF to: 0060a710 (UNCONDITIONAL_CALL)
// 0060a7bf: TEST EAX,EAX
// 0060a7c1: JNZ 0x0060a7cd
//   XREF to: 0060a7cd (CONDITIONAL_JUMP)
// 0060a7c3: CALL crt_stdio.c_GetConsoleOutputHandle_FUN_0060ce3c
//   XREF to: 0060ce3c (UNCONDITIONAL_CALL)
// 0060a7c8: CMP EAX,-0x1
// 0060a7cb: JNZ 0x0060a7d4
//   XREF to: 0060a7d4 (CONDITIONAL_JUMP)
// 0060a7cd: XOR EAX,EAX
//   Label: LAB_0060a7cd
// 0060a7cf: JMP 0x0060a9ae
//   XREF to: 0060a9ae (UNCONDITIONAL_JUMP)
// 0060a7d4: XOR AH,AH
//   Label: LAB_0060a7d4
// 0060a7d6: MOV byte ptr [ESP],AH
//   XREF to: Stack[-0x114] (DATA)
// 0060a7d9: MOV EAX,dword ptr [EBX]
// 0060a7db: CMP EAX,0xc0000090
// 0060a7e0: JC 0x0060a82f
//   XREF to: 0060a82f (CONDITIONAL_JUMP)
// 0060a7e2: JBE 0x0060a8ca
//   XREF to: 0060a8ca (CONDITIONAL_JUMP)
// 0060a7e8: CMP EAX,0xc0000093
// 0060a7ed: JC 0x0060a822
//   XREF to: 0060a822 (CONDITIONAL_JUMP)
// 0060a7ef: JBE 0x0060a8bc
//   XREF to: 0060a8bc (CONDITIONAL_JUMP)
// 0060a7f5: CMP EAX,0xc0000096
// 0060a7fa: JC 0x0060a812
//   XREF to: 0060a812 (CONDITIONAL_JUMP)
// 0060a7fc: JBE 0x0060a91e
//   XREF to: 0060a91e (CONDITIONAL_JUMP)
// 0060a802: CMP EAX,0xc00000fd
// 0060a807: JZ 0x0060a93f
//   XREF to: 0060a93f (CONDITIONAL_JUMP)
// 0060a80d: JMP 0x0060a94a
//   XREF to: 0060a94a (UNCONDITIONAL_JUMP)
// 0060a812: CMP EAX,0xc0000094
//   Label: LAB_0060a812
// 0060a817: JZ 0x0060a934
//   XREF to: 0060a934 (CONDITIONAL_JUMP)
// 0060a81d: JMP 0x0060a94a
//   XREF to: 0060a94a (UNCONDITIONAL_JUMP)
// 0060a822: CMP EAX,0xc0000091
//   Label: LAB_0060a822
// 0060a827: JBE 0x0060a8ae
//   XREF to: 0060a8ae (CONDITIONAL_JUMP)
// 0060a82d: JMP 0x0060a862
//   XREF to: 0060a862 (UNCONDITIONAL_JUMP)
// 0060a82f: CMP EAX,0xc000008d
//   Label: LAB_0060a82f
// 0060a834: JC 0x0060a841
//   XREF to: 0060a841 (CONDITIONAL_JUMP)
// 0060a836: JBE 0x0060a884
//   XREF to: 0060a884 (CONDITIONAL_JUMP)
// 0060a838: CMP EAX,0xc000008e
// 0060a83d: JBE 0x0060a892
//   XREF to: 0060a892 (CONDITIONAL_JUMP)
// 0060a83f: JMP 0x0060a8a0
//   XREF to: 0060a8a0 (UNCONDITIONAL_JUMP)
// 0060a841: CMP EAX,0xc0000005
//   Label: LAB_0060a841
// 0060a846: JC 0x0060a94a
//   XREF to: 0060a94a (CONDITIONAL_JUMP)
// 0060a84c: JBE 0x0060a8d8
//   XREF to: 0060a8d8 (CONDITIONAL_JUMP)
// 0060a852: CMP EAX,0xc000001d
// 0060a857: JZ 0x0060a929
//   XREF to: 0060a929 (CONDITIONAL_JUMP)
// 0060a85d: JMP 0x0060a94a
//   XREF to: 0060a94a (UNCONDITIONAL_JUMP)
// 0060a862: TEST byte ptr [EDI + 0x21],0x2
//   Label: LAB_0060a862
// 0060a866: JZ 0x0060a876
//   XREF to: 0060a876 (CONDITIONAL_JUMP)
// 0060a868: MOV EAX,dword ptr [EBX + 0xc]
// 0060a86b: PUSH EAX
// 0060a86c: PUSH 0x65912c
//   XREF to: 0065912c (DATA)
// 0060a871: JMP 0x0060a968
//   XREF to: 0060a968 (UNCONDITIONAL_JUMP)
// 0060a876: MOV EBP,dword ptr [EBX + 0xc]
//   Label: LAB_0060a876
// 0060a879: PUSH EBP
// 0060a87a: PUSH 0x659180
//   XREF to: 00659180 (DATA)
// 0060a87f: JMP 0x0060a968
//   XREF to: 0060a968 (UNCONDITIONAL_JUMP)
// 0060a884: MOV EBP,dword ptr [EBX + 0xc]
//   Label: LAB_0060a884
// 0060a887: PUSH EBP
// 0060a888: PUSH 0x6591d4
//   XREF to: 006591d4 (DATA)
// 0060a88d: JMP 0x0060a968
//   XREF to: 0060a968 (UNCONDITIONAL_JUMP)
// 0060a892: MOV EDI,dword ptr [EBX + 0xc]
//   Label: LAB_0060a892
// 0060a895: PUSH EDI
// 0060a896: PUSH 0x659228
//   XREF to: 00659228 (DATA)
// 0060a89b: JMP 0x0060a968
//   XREF to: 0060a968 (UNCONDITIONAL_JUMP)
// 0060a8a0: MOV ESI,dword ptr [EBX + 0xc]
//   Label: LAB_0060a8a0
// 0060a8a3: PUSH ESI
// 0060a8a4: PUSH 0x65927c
//   XREF to: 0065927c (DATA)
// 0060a8a9: JMP 0x0060a968
//   XREF to: 0060a968 (UNCONDITIONAL_JUMP)
// 0060a8ae: MOV EDX,dword ptr [EBX + 0xc]
//   Label: LAB_0060a8ae
// 0060a8b1: PUSH EDX
// 0060a8b2: PUSH 0x6592d0
//   XREF to: 006592d0 (DATA)
// 0060a8b7: JMP 0x0060a968
//   XREF to: 0060a968 (UNCONDITIONAL_JUMP)
// 0060a8bc: MOV EDI,dword ptr [EBX + 0xc]
//   Label: LAB_0060a8bc
// 0060a8bf: PUSH EDI
// 0060a8c0: PUSH 0x65931c
//   XREF to: 0065931c (DATA)
// 0060a8c5: JMP 0x0060a968
//   XREF to: 0060a968 (UNCONDITIONAL_JUMP)
// 0060a8ca: MOV ECX,dword ptr [EBX + 0xc]
//   Label: LAB_0060a8ca
// 0060a8cd: PUSH ECX
// 0060a8ce: PUSH 0x65936c
//   XREF to: 0065936c (DATA)
// 0060a8d3: JMP 0x0060a968
//   XREF to: 0060a968 (UNCONDITIONAL_JUMP)
// 0060a8d8: MOV EDX,dword ptr [EBX + 0xc]
//   Label: LAB_0060a8d8
// 0060a8db: PUSH EDX
// 0060a8dc: PUSH 0x6593c4
//   XREF to: 006593c4 (DATA)
// 0060a8e1: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x114] (DATA)
// 0060a8e5: PUSH EAX
// 0060a8e6: CALL crt_exception.c_FormatHexString_FUN_0060a748
//   XREF to: 0060a748 (UNCONDITIONAL_CALL)
// 0060a8eb: ADD ESP,0xc
// 0060a8ee: MOV ECX,dword ptr [EBX + 0x18]
// 0060a8f1: PUSH ECX
// 0060a8f2: PUSH 0x6593f8
//   XREF to: 006593f8 (DATA)
// 0060a8f7: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x114] (DATA)
// 0060a8fb: PUSH EAX
// 0060a8fc: CALL crt_exception.c_FormatHexString_FUN_0060a748
//   XREF to: 0060a748 (UNCONDITIONAL_CALL)
// 0060a901: MOV ESI,dword ptr [EBX + 0x14]
// 0060a904: ADD ESP,0xc
// 0060a907: TEST ESI,ESI
// 0060a909: JNZ 0x0060a914
//   XREF to: 0060a914 (CONDITIONAL_JUMP)
// 0060a90b: PUSH ESI
// 0060a90c: MOV EAX,0x659420
//   XREF to: 00659420 (DATA)
// 0060a911: PUSH EAX
//   XREF to: 00659420 (DATA)
// 0060a912: JMP 0x0060a968
//   XREF to: 0060a968 (UNCONDITIONAL_JUMP)
// 0060a914: PUSH 0x0
//   Label: LAB_0060a914
// 0060a916: MOV EAX,0x659428
//   XREF to: 00659428 (DATA)
// 0060a91b: PUSH EAX
//   XREF to: 00659428 (DATA)
// 0060a91c: JMP 0x0060a968
//   XREF to: 0060a968 (UNCONDITIONAL_JUMP)
// 0060a91e: MOV ECX,dword ptr [EBX + 0xc]
//   Label: LAB_0060a91e
// 0060a921: PUSH ECX
// 0060a922: PUSH 0x659434
//   XREF to: 00659434 (DATA)
// 0060a927: JMP 0x0060a968
//   XREF to: 0060a968 (UNCONDITIONAL_JUMP)
// 0060a929: MOV EAX,dword ptr [EBX + 0xc]
//   Label: LAB_0060a929
// 0060a92c: PUSH EAX
// 0060a92d: PUSH 0x659474
//   XREF to: 00659474 (DATA)
// 0060a932: JMP 0x0060a968
//   XREF to: 0060a968 (UNCONDITIONAL_JUMP)
// 0060a934: MOV ESI,dword ptr [EBX + 0xc]
//   Label: LAB_0060a934
// 0060a937: PUSH ESI
// 0060a938: PUSH 0x6594b0
//   XREF to: 006594b0 (DATA)
// 0060a93d: JMP 0x0060a968
//   XREF to: 0060a968 (UNCONDITIONAL_JUMP)
// 0060a93f: MOV EDX,dword ptr [EBX + 0xc]
//   Label: LAB_0060a93f
// 0060a942: PUSH EDX
// 0060a943: PUSH 0x6594f4
//   XREF to: 006594f4 (DATA)
// 0060a948: JMP 0x0060a968
//   XREF to: 0060a968 (UNCONDITIONAL_JUMP)
// 0060a94a: MOV EDI,dword ptr [EBX]
//   Label: LAB_0060a94a
// 0060a94c: PUSH EDI
// 0060a94d: PUSH 0x659530
//   XREF to: 00659530 (DATA)
// 0060a952: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x114] (DATA)
// 0060a956: PUSH EAX
// 0060a957: CALL crt_exception.c_FormatHexString_FUN_0060a748
//   XREF to: 0060a748 (UNCONDITIONAL_CALL)
// 0060a95c: ADD ESP,0xc
// 0060a95f: MOV EBP,dword ptr [EBX + 0xc]
// 0060a962: PUSH EBP
// 0060a963: PUSH 0x659564
//   XREF to: 00659564 (DATA)
// 0060a968: LEA EAX,[ESP + 0x8]
//   Label: LAB_0060a968
//   XREF to: Stack[-0x114] (DATA)
// 0060a96c: PUSH EAX
// 0060a96d: CALL crt_exception.c_FormatHexString_FUN_0060a748
//   XREF to: 0060a748 (UNCONDITIONAL_CALL)
// 0060a972: ADD ESP,0xc
// 0060a975: PUSH 0x0
// 0060a977: LEA EAX,[ESP + 0x104]
//   XREF to: Stack[-0x14] (DATA)
// 0060a97e: PUSH EAX
// 0060a97f: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x114] (DATA)
// 0060a983: PUSH ES
// 0060a984: MOV AX,DS
// 0060a986: MOV ES,AX
// 0060a988: SUB ECX,ECX
// 0060a98a: DEC ECX
// 0060a98b: XOR EAX,EAX
// 0060a98d: SCASB.REPNE ES:EDI
// 0060a98f: NOT ECX
// 0060a991: DEC ECX
// 0060a992: POP ES
// 0060a993: PUSH ECX
// 0060a994: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x114] (DATA)
// 0060a998: PUSH EAX
// 0060a999: MOV EAX,[0x0068526c]
//   XREF to: 0068526c (READ)
// 0060a99e: MOV EDX,dword ptr [EAX + 0x8]
// 0060a9a1: PUSH EDX
// 0060a9a2: CALL dword ptr CS:[0x611678]
//   XREF to: EXTERNAL:000000a9 (COMPUTED_CALL)
//   XREF to: 00611678 (READ)
// 0060a9a9: MOV EAX,0x1
// 0060a9ae: ADD ESP,0x104
//   Label: LAB_0060a9ae
// 0060a9b4: POP EBP
// 0060a9b5: POP EDI
// 0060a9b6: POP ESI
// 0060a9b7: POP EBX
// 0060a9b8: RET 0x4
