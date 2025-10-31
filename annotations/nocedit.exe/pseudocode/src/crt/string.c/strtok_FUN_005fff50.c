// Name: crt_string.c_strtok_FUN_005fff50
// Address: 005fff50
// Address Range: [[005fff50, 00600001]]
// Convention: __cdecl
// Signature: char * crt_string.c_strtok_FUN_005fff50(char * str, char * delimiters)
// Cross-references:
//   shape_design.c_loadModelFile_FUN_00458ac0 (00458ac0) at 00458f4a [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00665f28
//   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
// Function calls:
//   crt_thread.c_GetTLS_FUN_0060242c
//   crt_unknown.c_FUN_00607080

#include "nocturne.h"

char * __cdecl crt_string_c_strtok_FUN_005fff50(char *str,char *delimiters)

{
  byte bVar1;
  ThreadData *pTVar2;
  byte *pbVar3;
  byte *pbVar4;
  BADSPACEBASE *in_ESP;
  byte local_28 [32];
  
  if (str == (char *)0x0) {
    pTVar2 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
    str = *(char **)pTVar2->unknown_10;
    if ((byte *)str == (byte *)0x0) {
      return (char *)0x0;
    }
  }
  crt_unknown_c_FUN_00607080();
  while( true ) {
    bVar1 = *str;
    pbVar3 = (byte *)(uint)bVar1;
    if ((pbVar3 == (byte *)0x0) || ((local_28[bVar1 >> 3] & (&DAT_00665f28)[bVar1 & 7]) == 0))
    break;
    str = (char *)((byte *)str + 1);
  }
  pbVar4 = (byte *)str;
  if (pbVar3 != (byte *)0x0) {
    for (; bVar1 = *pbVar4, bVar1 != 0; pbVar4 = pbVar4 + 1) {
      if ((local_28[bVar1 >> 3] & (&DAT_00665f28)[bVar1 & 7]) != 0) {
        *pbVar4 = 0;
        pTVar2 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
        *(byte **)pTVar2->unknown_10 = pbVar4 + 1;
        return (char *)(byte *)str;
      }
    }
    pTVar2 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
    pTVar2->unknown_10[0] = '\0';
    pTVar2->unknown_10[1] = '\0';
    pTVar2->unknown_10[2] = '\0';
    pTVar2->unknown_10[3] = '\0';
    pbVar3 = (byte *)str;
  }
  return (char *)pbVar3;
}


// Assembly code:
// 005fff50: PUSH EBX
//   Label: crt_string.c_strtok_FUN_005fff50
// 005fff51: PUSH ESI
// 005fff52: SUB ESP,0x20
// 005fff55: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 005fff59: TEST ESI,ESI
// 005fff5b: JNZ 0x005fff71
//   XREF to: 005fff71 (CONDITIONAL_JUMP)
// 005fff5d: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 005fff63: MOV ESI,dword ptr [EAX + 0x10]
// 005fff66: TEST ESI,ESI
// 005fff68: JNZ 0x005fff71
//   XREF to: 005fff71 (CONDITIONAL_JUMP)
// 005fff6a: XOR EAX,EAX
// 005fff6c: JMP 0x005ffffc
//   XREF to: 005ffffc (UNCONDITIONAL_JUMP)
// 005fff71: MOV EDX,dword ptr [ESP + 0x30]
//   Label: LAB_005fff71
//   XREF to: Stack[0x8] (READ)
// 005fff75: PUSH EDX
// 005fff76: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x28] (DATA)
// 005fff7a: PUSH EAX
// 005fff7b: CALL crt_unknown.c_FUN_00607080
//   XREF to: 00607080 (UNCONDITIONAL_CALL)
// 005fff80: ADD ESP,0x8
// 005fff83: JMP 0x005fffa5
//   XREF to: 005fffa5 (UNCONDITIONAL_JUMP)
// 005fff85: MOV EDX,EAX
//   Label: LAB_005fff85
// 005fff87: SHR EDX,0x3
// 005fff8a: XOR EBX,EBX
// 005fff8c: MOV BL,byte ptr [ESP + EDX*0x1]
// 005fff8f: MOV EDX,EAX
// 005fff91: AND EDX,0x7
// 005fff94: MOV DL,byte ptr [EDX + 0x665f28]
//   XREF to: 00665f28 (DATA)
// 005fff9a: AND EDX,0xff
// 005fffa0: TEST EBX,EDX
// 005fffa2: JZ 0x005fffad
//   XREF to: 005fffad (CONDITIONAL_JUMP)
// 005fffa4: INC ESI
// 005fffa5: XOR EAX,EAX
//   Label: LAB_005fffa5
// 005fffa7: MOV AL,byte ptr [ESI]
// 005fffa9: TEST EAX,EAX
// 005fffab: JNZ 0x005fff85
//   XREF to: 005fff85 (CONDITIONAL_JUMP)
// 005fffad: TEST EAX,EAX
//   Label: LAB_005fffad
// 005fffaf: JZ 0x005ffffc
//   XREF to: 005ffffc (CONDITIONAL_JUMP)
// 005fffb1: MOV EBX,ESI
// 005fffb3: JMP 0x005fffe5
//   XREF to: 005fffe5 (UNCONDITIONAL_JUMP)
// 005fffb5: MOV EDX,EAX
//   Label: LAB_005fffb5
// 005fffb7: SHR EDX,0x3
// 005fffba: MOV DL,byte ptr [ESP + EDX*0x1]
// 005fffbd: AND EAX,0x7
// 005fffc0: AND EDX,0xff
// 005fffc6: MOV AL,byte ptr [EAX + 0x665f28]
//   XREF to: 00665f28 (DATA)
// 005fffcc: AND EAX,0xff
// 005fffd1: TEST EDX,EAX
// 005fffd3: JZ 0x005fffe4
//   XREF to: 005fffe4 (CONDITIONAL_JUMP)
// 005fffd5: MOV byte ptr [EBX],0x0
// 005fffd8: INC EBX
// 005fffd9: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 005fffdf: MOV dword ptr [EAX + 0x10],EBX
// 005fffe2: JMP 0x005ffffa
//   XREF to: 005ffffa (UNCONDITIONAL_JUMP)
// 005fffe4: INC EBX
//   Label: LAB_005fffe4
// 005fffe5: XOR EAX,EAX
//   Label: LAB_005fffe5
// 005fffe7: MOV AL,byte ptr [EBX]
// 005fffe9: TEST EAX,EAX
// 005fffeb: JNZ 0x005fffb5
//   XREF to: 005fffb5 (CONDITIONAL_JUMP)
// 005fffed: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 005ffff3: MOV dword ptr [EAX + 0x10],0x0
// 005ffffa: MOV EAX,ESI
//   Label: LAB_005ffffa
// 005ffffc: ADD ESP,0x20
//   Label: LAB_005ffffc
// 005fffff: POP ESI
// 00600000: POP EBX
// 00600001: RET
