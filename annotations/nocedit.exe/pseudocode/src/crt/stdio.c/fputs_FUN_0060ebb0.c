// Name: crt_stdio.c_fputs_FUN_0060ebb0
// Address: 0060ebb0
// Address Range: [[0060ebb0, 0060ec62]]
// Convention: __cdecl
// Signature: int crt_stdio.c_fputs_FUN_0060ebb0(char * str, FILE * file)
// Cross-references:
//   crt_math.c_print_error_message_FUN_0060e298 (0060e298) at 0060e2c2 [UNCONDITIONAL_CALL]
// Globals:
//   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
//   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
// Function calls:
//   crt_stdio.c_fflushInternal_FUN_006039d0
//   crt_stdio.c_fputc_FUN_006007a0
//   crt_stdio.c_InitializeFileBuffer_FUN_006027e0
//   crt_sync.c_CriticalSectionStub_FUN_00602434

#include "nocturne.h"

int __cdecl crt_stdio_c_fputs_FUN_0060ebb0(char *str,FILE *file)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  bool bVar5;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file->_handle);
  if (file->_link->__reserve_end == (char *)0x0) {
    crt_stdio_c_InitializeFileBuffer_FUN_006027e0(file);
  }
  bVar2 = *(byte *)((int)&file->_flag + 1);
  bVar5 = (bVar2 & 4) != 0;
  if (bVar5) {
    bVar2 = bVar2 & 0xf9;
    *(byte *)((int)&file->_flag + 1) = bVar2;
    *(byte *)((int)&file->_flag + 1) = bVar2 | 2;
  }
  iVar4 = 0;
  pbVar3 = (byte *)str;
  do {
    bVar2 = *pbVar3;
    if (bVar2 == 0) goto LAB_0060ec1d;
    pbVar3 = pbVar3 + 1;
    iVar1 = crt_stdio_c_fputc_FUN_006007a0((uint)bVar2,file);
  } while (iVar1 != -1);
  iVar4 = -1;
LAB_0060ec1d:
  if (bVar5) {
    bVar2 = *(byte *)((int)&file->_flag + 1) & 0xf9;
    *(byte *)((int)&file->_flag + 1) = bVar2;
    *(byte *)((int)&file->_flag + 1) = bVar2 | 4;
    if (iVar4 == 0) {
      iVar4 = crt_stdio_c_fflushInternal_FUN_006039d0(file);
    }
  }
  if (iVar4 == 0) {
    iVar4 = (int)pbVar3 - (int)str;
  }
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
  return iVar4;
}


// Assembly code:
// 0060ebb0: PUSH EBX
//   Label: crt_stdio.c_fputs_FUN_0060ebb0
// 0060ebb1: PUSH ESI
// 0060ebb2: PUSH EDI
// 0060ebb3: PUSH EBP
// 0060ebb4: SUB ESP,0x4
// 0060ebb7: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0060ebbb: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0060ebbf: MOV EDX,dword ptr [ESI + 0x10]
// 0060ebc2: PUSH EDX
// 0060ebc3: CALL dword ptr [PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684ee8 (READ)
// 0060ebc9: MOV EAX,dword ptr [ESI + 0x8]
// 0060ebcc: MOV ECX,dword ptr [EAX + 0x8]
// 0060ebcf: ADD ESP,0x4
// 0060ebd2: TEST ECX,ECX
// 0060ebd4: JNZ 0x0060ebdf
//   XREF to: 0060ebdf (CONDITIONAL_JUMP)
// 0060ebd6: PUSH ESI
// 0060ebd7: CALL crt_stdio.c_InitializeFileBuffer_FUN_006027e0
//   XREF to: 006027e0 (UNCONDITIONAL_CALL)
// 0060ebdc: ADD ESP,0x4
// 0060ebdf: MOV AH,byte ptr [ESI + 0xd]
//   Label: LAB_0060ebdf
// 0060ebe2: XOR EBP,EBP
// 0060ebe4: TEST AH,0x4
// 0060ebe7: JZ 0x0060ebfe
//   XREF to: 0060ebfe (CONDITIONAL_JUMP)
// 0060ebe9: MOV DL,AH
// 0060ebeb: AND DL,0xf9
// 0060ebee: MOV byte ptr [ESI + 0xd],DL
// 0060ebf1: MOV DH,DL
// 0060ebf3: OR DH,0x2
// 0060ebf6: MOV EBP,0x1
// 0060ebfb: MOV byte ptr [ESI + 0xd],DH
// 0060ebfe: MOV dword ptr [ESP],EBX
//   Label: LAB_0060ebfe
// 0060ec01: XOR EDI,EDI
// 0060ec03: XOR EAX,EAX
//   Label: LAB_0060ec03
// 0060ec05: MOV AL,byte ptr [EBX]
// 0060ec07: TEST EAX,EAX
// 0060ec09: JZ 0x0060ec1d
//   XREF to: 0060ec1d (CONDITIONAL_JUMP)
// 0060ec0b: PUSH ESI
// 0060ec0c: PUSH EAX
// 0060ec0d: INC EBX
// 0060ec0e: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 0060ec13: ADD ESP,0x8
// 0060ec16: CMP EAX,-0x1
// 0060ec19: JNZ 0x0060ec03
//   XREF to: 0060ec03 (CONDITIONAL_JUMP)
// 0060ec1b: MOV EDI,EAX
// 0060ec1d: TEST EBP,EBP
//   Label: LAB_0060ec1d
// 0060ec1f: JZ 0x0060ec41
//   XREF to: 0060ec41 (CONDITIONAL_JUMP)
// 0060ec21: MOV CL,byte ptr [ESI + 0xd]
// 0060ec24: AND CL,0xf9
// 0060ec27: MOV byte ptr [ESI + 0xd],CL
// 0060ec2a: MOV CH,CL
// 0060ec2c: OR CH,0x4
// 0060ec2f: MOV byte ptr [ESI + 0xd],CH
// 0060ec32: TEST EDI,EDI
// 0060ec34: JNZ 0x0060ec41
//   XREF to: 0060ec41 (CONDITIONAL_JUMP)
// 0060ec36: PUSH ESI
// 0060ec37: CALL crt_stdio.c_fflushInternal_FUN_006039d0
//   XREF to: 006039d0 (UNCONDITIONAL_CALL)
// 0060ec3c: ADD ESP,0x4
// 0060ec3f: MOV EDI,EAX
// 0060ec41: TEST EDI,EDI
//   Label: LAB_0060ec41
// 0060ec43: JNZ 0x0060ec4c
//   XREF to: 0060ec4c (CONDITIONAL_JUMP)
// 0060ec45: MOV EDI,dword ptr [ESP]
// 0060ec48: SUB EBX,EDI
// 0060ec4a: MOV EDI,EBX
// 0060ec4c: MOV EBP,dword ptr [ESI + 0x10]
//   Label: LAB_0060ec4c
// 0060ec4f: PUSH EBP
// 0060ec50: CALL dword ptr [PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec]
//   XREF to: 00602434 (COMPUTED_CALL)
//   XREF to: 00684eec (READ)
// 0060ec56: ADD ESP,0x4
// 0060ec59: MOV EAX,EDI
// 0060ec5b: ADD ESP,0x4
// 0060ec5e: POP EBP
// 0060ec5f: POP EDI
// 0060ec60: POP ESI
// 0060ec61: POP EBX
// 0060ec62: RET
