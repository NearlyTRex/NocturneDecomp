// Name: crt_stdio.c_FillInputBuffer_FUN_005fe940
// Address: 005fe940
// Address Range: [[005fe940, 005fea06]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_FillInputBuffer_FUN_005fe940(FILE * file)
// Cross-references:
//   crt_stdio.c_FillBufferAndGetChar_FUN_005fe910 (005fe910) at 005fe916 [UNCONDITIONAL_CALL]
//   crt_stdio.c_fread_FUN_005fd990 (005fd990) at 005fdae3 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_FlushFilesByMask_FUN_0060595c
//   crt_stdio.c_InitializeFileBuffer_FUN_006027e0
//   crt_stdio.c_ReadFileWithDeviceAbstraction_FUN_00602880
//   crt_stdio.c_SetupConsoleInputMode_FUN_006059b0

#include "nocturne.h"

int __watcallStack crt_stdio_c_FillInputBuffer_FUN_005fe940(FILE *file)

{
  int iVar1;
  uint bytes_to_read;
  
  if (file->_link->__reserve_end == (char *)0x0) {
    crt_stdio_c_InitializeFileBuffer_FUN_006027e0(file);
  }
  if (((file->_flag & 0x2000) != 0) && ((file->_flag & 0x600) != 0)) {
    crt_stdio_c_FlushFilesByMask_FUN_0060595c(0x2000);
  }
  *(byte *)&file->_flag = (byte)file->_flag & 0xfb;
  file->_ptr = file->_link->__reserve_end;
  if (((file->_flag & 0x2400) == 0x2400) && (file->_handle == 0)) {
    file->_cnt = 0;
    iVar1 = crt_stdio_c_SetupConsoleInputMode_FUN_006059b0();
    if (iVar1 != -1) {
      *file->_ptr = (char)iVar1;
      file->_cnt = 1;
      goto LAB_005fe9ff;
    }
  }
  else {
    if ((file->_flag & 0x400) == 0) {
      bytes_to_read = file->_bufsize;
    }
    else {
      bytes_to_read = 1;
    }
    iVar1 = crt_stdio_c_ReadFileWithDeviceAbstraction_FUN_00602880
                      (file->_handle,file->_ptr,bytes_to_read);
    file->_cnt = iVar1;
  }
  if (file->_cnt < 1) {
    if (file->_cnt == 0) {
      *(byte *)&file->_flag = (byte)file->_flag | 0x10;
      return file->_cnt;
    }
    file->_cnt = 0;
    *(byte *)&file->_flag = (byte)file->_flag | 0x20;
  }
LAB_005fe9ff:
  return file->_cnt;
}


// Assembly code:
// 005fe940: PUSH EBX
//   Label: crt_stdio.c_FillInputBuffer_FUN_005fe940
// 005fe941: PUSH ESI
// 005fe942: PUSH EDI
// 005fe943: PUSH EBP
// 005fe944: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005fe948: MOV EAX,dword ptr [EBX + 0x8]
// 005fe94b: CMP dword ptr [EAX + 0x8],0x0
// 005fe94f: JNZ 0x005fe95a
//   XREF to: 005fe95a (CONDITIONAL_JUMP)
// 005fe951: PUSH EBX
// 005fe952: CALL crt_stdio.c_InitializeFileBuffer_FUN_006027e0
//   XREF to: 006027e0 (UNCONDITIONAL_CALL)
// 005fe957: ADD ESP,0x4
// 005fe95a: MOV AH,byte ptr [EBX + 0xd]
//   Label: LAB_005fe95a
// 005fe95d: TEST AH,0x20
// 005fe960: JZ 0x005fe974
//   XREF to: 005fe974 (CONDITIONAL_JUMP)
// 005fe962: TEST AH,0x6
// 005fe965: JZ 0x005fe974
//   XREF to: 005fe974 (CONDITIONAL_JUMP)
// 005fe967: PUSH 0x2000
// 005fe96c: CALL crt_stdio.c_FlushFilesByMask_FUN_0060595c
//   XREF to: 0060595c (UNCONDITIONAL_CALL)
// 005fe971: ADD ESP,0x4
// 005fe974: MOV DH,byte ptr [EBX + 0xc]
//   Label: LAB_005fe974
// 005fe977: AND DH,0xfb
// 005fe97a: MOV EAX,dword ptr [EBX + 0x8]
// 005fe97d: MOV byte ptr [EBX + 0xc],DH
// 005fe980: MOV EAX,dword ptr [EAX + 0x8]
// 005fe983: MOV dword ptr [EBX],EAX
// 005fe985: MOV EAX,dword ptr [EBX + 0xc]
// 005fe988: AND EAX,0x2400
// 005fe98d: CMP EAX,0x2400
// 005fe992: JNZ 0x005fe9b7
//   XREF to: 005fe9b7 (CONDITIONAL_JUMP)
// 005fe994: MOV ECX,dword ptr [EBX + 0x10]
// 005fe997: TEST ECX,ECX
// 005fe999: JNZ 0x005fe9b7
//   XREF to: 005fe9b7 (CONDITIONAL_JUMP)
// 005fe99b: MOV dword ptr [EBX + 0x4],ECX
// 005fe99e: CALL crt_stdio.c_SetupConsoleInputMode_FUN_006059b0
//   XREF to: 006059b0 (UNCONDITIONAL_CALL)
// 005fe9a3: MOV EDX,EAX
// 005fe9a5: CMP EAX,-0x1
// 005fe9a8: JZ 0x005fe9da
//   XREF to: 005fe9da (CONDITIONAL_JUMP)
// 005fe9aa: MOV EAX,dword ptr [EBX]
// 005fe9ac: MOV byte ptr [EAX],DL
// 005fe9ae: MOV dword ptr [EBX + 0x4],0x1
// 005fe9b5: JMP 0x005fe9ff
//   XREF to: 005fe9ff (UNCONDITIONAL_JUMP)
// 005fe9b7: TEST byte ptr [EBX + 0xd],0x4
//   Label: LAB_005fe9b7
// 005fe9bb: JZ 0x005fe9c4
//   XREF to: 005fe9c4 (CONDITIONAL_JUMP)
// 005fe9bd: MOV EAX,0x1
// 005fe9c2: JMP 0x005fe9c7
//   XREF to: 005fe9c7 (UNCONDITIONAL_JUMP)
// 005fe9c4: MOV EAX,dword ptr [EBX + 0x14]
//   Label: LAB_005fe9c4
// 005fe9c7: PUSH EAX
//   Label: LAB_005fe9c7
// 005fe9c8: MOV ESI,dword ptr [EBX]
// 005fe9ca: PUSH ESI
// 005fe9cb: MOV EDI,dword ptr [EBX + 0x10]
// 005fe9ce: PUSH EDI
// 005fe9cf: CALL crt_stdio.c_ReadFileWithDeviceAbstraction_FUN_00602880
//   XREF to: 00602880 (UNCONDITIONAL_CALL)
// 005fe9d4: ADD ESP,0xc
// 005fe9d7: MOV dword ptr [EBX + 0x4],EAX
// 005fe9da: MOV EBP,dword ptr [EBX + 0x4]
//   Label: LAB_005fe9da
// 005fe9dd: TEST EBP,EBP
// 005fe9df: JG 0x005fe9ff
//   XREF to: 005fe9ff (CONDITIONAL_JUMP)
// 005fe9e1: JNZ 0x005fe9ef
//   XREF to: 005fe9ef (CONDITIONAL_JUMP)
// 005fe9e3: OR byte ptr [EBX + 0xc],0x10
// 005fe9e7: MOV EAX,dword ptr [EBX + 0x4]
// 005fe9ea: POP EBP
// 005fe9eb: POP EDI
// 005fe9ec: POP ESI
// 005fe9ed: POP EBX
// 005fe9ee: RET
// 005fe9ef: MOV CH,byte ptr [EBX + 0xc]
//   Label: LAB_005fe9ef
// 005fe9f2: MOV dword ptr [EBX + 0x4],0x0
// 005fe9f9: OR CH,0x20
// 005fe9fc: MOV byte ptr [EBX + 0xc],CH
// 005fe9ff: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_005fe9ff
// 005fea02: POP EBP
// 005fea03: POP EDI
// 005fea04: POP ESI
// 005fea05: POP EBX
// 005fea06: RET
