// Name: crt_stdio.c_InitializeFileBuffer_FUN_006027e0
// Address: 006027e0
// Address Range: [[006027e0, 00602870]]
// Convention: __cdecl
// Signature: void crt_stdio.c_InitializeFileBuffer_FUN_006027e0(FILE * file)
// Cross-references:
//   crt_stdio.c_FillInputBuffer_FUN_005fe940 (005fe940) at 005fe952 [UNCONDITIONAL_CALL]
//   crt_stdio.c_fputc_FUN_005fea10 (005fea10) at 005feaa6 [UNCONDITIONAL_CALL]
//   crt_stdio.c_fputc_FUN_006007a0 (006007a0) at 0060081c [UNCONDITIONAL_CALL]
//   crt_stdio.c_fputs_FUN_0060ebb0 (0060ebb0) at 0060ebd7 [UNCONDITIONAL_CALL]
//   crt_stdio.c_fread_FUN_005fd990 (005fd990) at 005fda00 [UNCONDITIONAL_CALL]
//   crt_stdio.c_fwrite_FUN_005fdc00 (005fdc00) at 005fdc75 [UNCONDITIONAL_CALL]
//   crt_stdio.c_setvbuf_FUN_00601490 (00601490) at 00601522 [UNCONDITIONAL_CALL]
//   crt_stdio.c_vfprintf_FUN_00604850 (00604850) at 006048a9 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_malloc_FUN_00601bb0
//   crt_stdio.c_DetectDeviceAndSetBuffering_FUN_00608ee0

#include "nocturne.h"

void __cdecl crt_stdio_c_InitializeFileBuffer_FUN_006027e0(FILE *file)

{
  streambuf *psVar1;
  char *pcVar2;
  byte bVar3;
  
  crt_stdio_c_DetectDeviceAndSetBuffering_FUN_00608ee0(file);
  if (file->_bufsize == 0) {
    if ((file->_flag & 0x200) == 0) {
      if ((file->_flag & 0x400) == 0) {
        file->_bufsize = 0x1000;
      }
      else {
        file->_bufsize = 1;
      }
    }
    else {
      file->_bufsize = 0x86;
    }
  }
  pcVar2 = (char *)crt_memory_c_malloc_FUN_00601bb0(file->_bufsize);
  file->_link->__reserve_end = pcVar2;
  if (file->_link->__reserve_end == (char *)0x0) {
    bVar3 = *(byte *)((int)&file->_flag + 1) & 0xf8;
    *(byte *)((int)&file->_flag + 1) = bVar3;
    psVar1 = file->_link;
    *(byte *)((int)&file->_flag + 1) = bVar3 | 4;
    psVar1->__reserve_end = (char *)&file->_ungotten;
    file->_bufsize = 1;
  }
  else {
    *(byte *)&file->_flag = (byte)file->_flag | 8;
  }
  pcVar2 = file->_link->__reserve_end;
  file->_cnt = 0;
  file->_ptr = pcVar2;
  return;
}


// Assembly code:
// 006027e0: PUSH EBX
//   Label: crt_stdio.c_InitializeFileBuffer_FUN_006027e0
// 006027e1: PUSH ESI
// 006027e2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 006027e6: PUSH EBX
// 006027e7: CALL crt_stdio.c_DetectDeviceAndSetBuffering_FUN_00608ee0
//   XREF to: 00608ee0 (UNCONDITIONAL_CALL)
// 006027ec: MOV EDX,dword ptr [EBX + 0x14]
// 006027ef: ADD ESP,0x4
// 006027f2: TEST EDX,EDX
// 006027f4: JNZ 0x0060281c
//   XREF to: 0060281c (CONDITIONAL_JUMP)
// 006027f6: MOV AH,byte ptr [EBX + 0xd]
// 006027f9: TEST AH,0x2
// 006027fc: JZ 0x00602807
//   XREF to: 00602807 (CONDITIONAL_JUMP)
// 006027fe: MOV dword ptr [EBX + 0x14],0x86
// 00602805: JMP 0x0060281c
//   XREF to: 0060281c (UNCONDITIONAL_JUMP)
// 00602807: TEST AH,0x4
//   Label: LAB_00602807
// 0060280a: JZ 0x00602815
//   XREF to: 00602815 (CONDITIONAL_JUMP)
// 0060280c: MOV dword ptr [EBX + 0x14],0x1
// 00602813: JMP 0x0060281c
//   XREF to: 0060281c (UNCONDITIONAL_JUMP)
// 00602815: MOV dword ptr [EBX + 0x14],0x1000
//   Label: LAB_00602815
// 0060281c: MOV ECX,dword ptr [EBX + 0x14]
//   Label: LAB_0060281c
// 0060281f: PUSH ECX
// 00602820: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 00602825: MOV EDX,dword ptr [EBX + 0x8]
// 00602828: MOV dword ptr [EDX + 0x8],EAX
// 0060282b: MOV EAX,dword ptr [EBX + 0x8]
// 0060282e: MOV ESI,dword ptr [EAX + 0x8]
// 00602831: ADD ESP,0x4
// 00602834: TEST ESI,ESI
// 00602836: JNZ 0x0060285b
//   XREF to: 0060285b (CONDITIONAL_JUMP)
// 00602838: MOV CL,byte ptr [EBX + 0xd]
// 0060283b: AND CL,0xf8
// 0060283e: MOV byte ptr [EBX + 0xd],CL
// 00602841: MOV CH,CL
// 00602843: MOV EAX,dword ptr [EBX + 0x8]
// 00602846: OR CH,0x4
// 00602849: LEA EDX,[EBX + 0x18]
// 0060284c: MOV byte ptr [EBX + 0xd],CH
// 0060284f: MOV dword ptr [EAX + 0x8],EDX
// 00602852: MOV dword ptr [EBX + 0x14],0x1
// 00602859: JMP 0x0060285f
//   XREF to: 0060285f (UNCONDITIONAL_JUMP)
// 0060285b: OR byte ptr [EBX + 0xc],0x8
//   Label: LAB_0060285b
// 0060285f: MOV EAX,dword ptr [EBX + 0x8]
//   Label: LAB_0060285f
// 00602862: MOV EAX,dword ptr [EAX + 0x8]
// 00602865: MOV dword ptr [EBX + 0x4],0x0
// 0060286c: MOV dword ptr [EBX],EAX
// 0060286e: POP ESI
// 0060286f: POP EBX
// 00602870: RET
