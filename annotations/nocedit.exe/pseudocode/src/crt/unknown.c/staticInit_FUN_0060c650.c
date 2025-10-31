// Name: crt_unknown.c_staticInit_FUN_0060c650
// Address: 0060c650
// Address Range: [[0060c650, 0060c738]]
// Convention: unknown
// Signature: undefined crt_unknown.c_staticInit_FUN_0060c650()
// Globals:
//   char* g_EnvironmentStrings = 00000000
//   char** g_EnvironStringArea
//   char** g_EnvironmentBlock
//   undefined4 DAT_03f9c150
// Function calls:
//   crt_io.c_parseFileInfo_FUN_0060e3b0
//   crt_memory.c_free_FUN_00601cd0
//   crt_memory.c_memset_FUN_005fde40
//   crt_unknown.c_FUN_0060c640

#include "nocturne.h"

void crt_unknown_c_staticInit_FUN_0060c650(void)

{
  char cVar1;
  char *pcVar2;
  char **ppcVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  ulong count;
  
  pcVar4 = g_EnvironmentStrings;
  if (g_EnvironmentBlock == (char **)0x0) {
    cVar1 = *g_EnvironmentStrings;
    pcVar2 = g_EnvironmentStrings;
    while (cVar1 != '\0') {
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      cVar1 = *pcVar2;
    }
    pcVar2 = (char *)crt_unknown_c_FUN_0060c640();
    if (pcVar2 != (char *)0x0) {
      DAT_03f9c150 = pcVar2;
      ppcVar3 = (char **)crt_unknown_c_FUN_0060c640();
      if (ppcVar3 == (char **)0x0) {
        crt_memory_c_free_FUN_00601cd0(pcVar2);
      }
      else {
        count = 0;
        iVar5 = 0;
        cVar1 = *pcVar4;
        while (cVar1 != '\0') {
          *(char **)(iVar5 + (int)ppcVar3) = pcVar2;
          pcVar6 = pcVar2;
          do {
            pcVar2 = pcVar6 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            *pcVar6 = cVar1;
            pcVar6 = pcVar2;
          } while (cVar1 != '\0');
          iVar5 = iVar5 + 4;
          count = count + 1;
          cVar1 = *pcVar4;
        }
        *(undefined4 *)(iVar5 + (int)ppcVar3) = 0;
        g_EnvironStringArea = (char **)((int)ppcVar3 + iVar5 + 4);
        g_EnvironmentBlock = ppcVar3;
        crt_memory_c_memset_FUN_005fde40(g_EnvironStringArea,0,count);
      }
    }
    crt_io_c_parseFileInfo_FUN_0060e3b0();
  }
  return;
}


// Assembly code:
// 0060c650: PUSH EBX
//   Label: crt_unknown.c_staticInit_FUN_0060c650
// 0060c651: PUSH ESI
// 0060c652: PUSH EDI
// 0060c653: PUSH EBP
// 0060c654: MOV EDI,dword ptr [0x03f9b864]
//   XREF to: 03f9b864 (READ)
// 0060c65a: TEST EDI,EDI
// 0060c65c: JNZ 0x0060c72e
//   XREF to: 0060c72e (CONDITIONAL_JUMP)
// 0060c662: MOV EBP,dword ptr [0x00685011]
//   XREF to: 00685011 (READ)
// 0060c668: XOR ESI,ESI
// 0060c66a: MOV DL,byte ptr [EBP]
// 0060c66d: MOV EAX,EBP
// 0060c66f: TEST DL,DL
// 0060c671: JZ 0x0060c689
//   XREF to: 0060c689 (CONDITIONAL_JUMP)
// 0060c673: MOV DH,byte ptr [EAX]
//   Label: LAB_0060c673
// 0060c675: LEA EBX,[EAX + 0x1]
// 0060c678: TEST DH,DH
// 0060c67a: JZ 0x0060c680
//   XREF to: 0060c680 (CONDITIONAL_JUMP)
// 0060c67c: MOV EAX,EBX
// 0060c67e: JMP 0x0060c673
//   XREF to: 0060c673 (UNCONDITIONAL_JUMP)
// 0060c680: INC ESI
//   Label: LAB_0060c680
// 0060c681: MOV DH,byte ptr [EBX]
// 0060c683: MOV EAX,EBX
// 0060c685: TEST DH,DH
// 0060c687: JNZ 0x0060c673
//   XREF to: 0060c673 (CONDITIONAL_JUMP)
// 0060c689: MOV dword ptr [0x03f9b864],EDI
//   Label: LAB_0060c689
//   XREF to: 03f9b864 (WRITE)
// 0060c68f: SUB EAX,EBP
// 0060c691: JNZ 0x0060c698
//   XREF to: 0060c698 (CONDITIONAL_JUMP)
// 0060c693: MOV EAX,0x1
// 0060c698: PUSH EAX
//   Label: LAB_0060c698
// 0060c699: CALL crt_unknown.c_FUN_0060c640
//   XREF to: 0060c640 (UNCONDITIONAL_CALL)
// 0060c69e: MOV EBX,EAX
// 0060c6a0: ADD ESP,0x4
// 0060c6a3: TEST EAX,EAX
// 0060c6a5: JZ 0x0060c729
//   XREF to: 0060c729 (CONDITIONAL_JUMP)
// 0060c6ab: MOV [0x03f9c150],EAX
//   XREF to: 03f9c150 (WRITE)
// 0060c6b0: LEA EAX,[ESI*0x4 + 0x0]
// 0060c6b7: ADD EAX,0x4
// 0060c6ba: ADD ESI,EAX
// 0060c6bc: PUSH ESI
// 0060c6bd: CALL crt_unknown.c_FUN_0060c640
//   XREF to: 0060c640 (UNCONDITIONAL_CALL)
// 0060c6c2: ADD ESP,0x4
// 0060c6c5: TEST EAX,EAX
// 0060c6c7: JZ 0x0060c720
//   XREF to: 0060c720 (CONDITIONAL_JUMP)
// 0060c6c9: MOV EDI,EAX
// 0060c6cb: MOV DL,byte ptr [EBP]
// 0060c6ce: XOR ESI,ESI
// 0060c6d0: XOR ECX,ECX
// 0060c6d2: MOV EAX,EBP
// 0060c6d4: TEST DL,DL
// 0060c6d6: JZ 0x0060c6f2
//   XREF to: 0060c6f2 (CONDITIONAL_JUMP)
// 0060c6d8: MOV EDX,EDI
//   Label: LAB_0060c6d8
// 0060c6da: MOV dword ptr [ECX + EDX*0x1],EBX
// 0060c6dd: INC EBX
//   Label: LAB_0060c6dd
// 0060c6de: MOV DL,byte ptr [EAX]
// 0060c6e0: INC EAX
// 0060c6e1: MOV byte ptr [EBX + -0x1],DL
// 0060c6e4: TEST DL,DL
// 0060c6e6: JNZ 0x0060c6dd
//   XREF to: 0060c6dd (CONDITIONAL_JUMP)
// 0060c6e8: ADD ECX,0x4
// 0060c6eb: MOV DL,byte ptr [EAX]
// 0060c6ed: INC ESI
// 0060c6ee: TEST DL,DL
// 0060c6f0: JNZ 0x0060c6d8
//   XREF to: 0060c6d8 (CONDITIONAL_JUMP)
// 0060c6f2: MOV EAX,EDI
//   Label: LAB_0060c6f2
// 0060c6f4: PUSH ESI
// 0060c6f5: MOV dword ptr [ECX + EAX*0x1],0x0
// 0060c6fc: ADD ECX,0x4
// 0060c6ff: PUSH 0x0
// 0060c701: LEA EAX,[EDI + ECX*0x1]
// 0060c704: PUSH EAX
// 0060c705: MOV [0x03f9b860],EAX
//   XREF to: 03f9b860 (WRITE)
// 0060c70a: MOV dword ptr [0x03f9b864],EDI
//   XREF to: 03f9b864 (WRITE)
// 0060c710: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0060c715: MOV EDI,dword ptr [0x03f9b864]
//   XREF to: 03f9b864 (READ)
// 0060c71b: ADD ESP,0xc
// 0060c71e: JMP 0x0060c729
//   XREF to: 0060c729 (UNCONDITIONAL_JUMP)
// 0060c720: PUSH EBX
//   Label: LAB_0060c720
// 0060c721: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060c726: ADD ESP,0x4
// 0060c729: CALL crt_io.c_parseFileInfo_FUN_0060e3b0
//   Label: LAB_0060c729
//   XREF to: 0060e3b0 (UNCONDITIONAL_CALL)
// 0060c72e: MOV EDI,dword ptr [0x03f9b864]
//   Label: LAB_0060c72e
//   XREF to: 03f9b864 (READ)
// 0060c734: POP EBP
// 0060c735: POP EDI
// 0060c736: POP ESI
// 0060c737: POP EBX
// 0060c738: RET
