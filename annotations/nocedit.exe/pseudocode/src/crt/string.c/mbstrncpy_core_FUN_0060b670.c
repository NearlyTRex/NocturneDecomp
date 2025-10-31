// Name: crt_string.c_mbstrncpy_core_FUN_0060b670
// Address: 0060b6d7
// Address Range: [[0060b6d7, 0060b715]]
// Convention: __watcallStack
// Signature: char * crt_string.c_mbstrncpy_core_FUN_0060b670(char * dest, char * src, int count)
// Cross-references:
//   crt_stdio.c_stream_setup_FUN_00605f20 (00605f20) at 00605f57 [UNCONDITIONAL_CALL]
// Globals:
//   char[256] g_CharacterClassificationTable
// Function calls:
//   crt_stdio.c_fgetc_buffered_FUN_0060d510
//   crt_unknown.c_FUN_0060d576

#include "nocturne.h"

char * __watcallStack crt_string_c_mbstrncpy_core_FUN_0060b670(char *dest,char *src,int count)

{
  int iVar1;
  
  while( true ) {
    iVar1 = crt_stdio_c_fgetc_buffered_FUN_0060d510((FILE *)dest);
    if (((*(uint *)(dest + *(int *)(*(int *)dest + 4) + 0x10) & 3) != 0) ||
       ((g_CharacterClassificationTable[(byte)((char)iVar1 + 1)] & 2U) == 0)) break;
    crt_unknown_c_FUN_0060d576();
  }
  return dest;
}


// Assembly code:
// 0060b6d7: PUSH EBX
//   Label: crt_string.c_mbstrncpy_core_FUN_0060b670
// 0060b6d8: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060b6dc: PUSH EBX
//   Label: LAB_0060b6dc
// 0060b6dd: CALL crt_stdio.c_fgetc_buffered_FUN_0060d510
//   XREF to: 0060d510 (UNCONDITIONAL_CALL)
// 0060b6e2: MOV EDX,EAX
// 0060b6e4: MOV EAX,dword ptr [EBX]
// 0060b6e6: MOV EAX,dword ptr [EAX + 0x4]
// 0060b6e9: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x10]
// 0060b6ed: ADD ESP,0x4
// 0060b6f0: AND EAX,0x3
// 0060b6f3: JNZ 0x0060b707
//   XREF to: 0060b707 (CONDITIONAL_JUMP)
// 0060b6f5: MOV AL,DL
// 0060b6f7: INC AL
// 0060b6f9: AND EAX,0xff
// 0060b6fe: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 0060b705: JNZ 0x0060b70b
//   XREF to: 0060b70b (CONDITIONAL_JUMP)
// 0060b707: MOV EAX,EBX
//   Label: LAB_0060b707
// 0060b709: POP EBX
// 0060b70a: RET
// 0060b70b: PUSH EBX
//   Label: LAB_0060b70b
// 0060b70c: CALL crt_unknown.c_FUN_0060d576
//   XREF to: 0060d576 (UNCONDITIONAL_CALL)
// 0060b711: ADD ESP,0x4
// 0060b714: JMP 0x0060b6dc
//   XREF to: 0060b6dc (UNCONDITIONAL_JUMP)
