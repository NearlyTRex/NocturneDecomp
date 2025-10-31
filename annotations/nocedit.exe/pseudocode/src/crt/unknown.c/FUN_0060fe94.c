// Name: crt_unknown.c_FUN_0060fe94
// Address: 0060fe94
// Address Range: [[0060fe94, 0060ffa1]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060fe94()
// Cross-references:
//   crt_unknown.c_FUN_0060fcf4 (0060fcf4) at 0060fda0 [UNCONDITIONAL_CALL]
// Globals:
//   char** g_EnvironStringArea
//   int g_EnvironInitialized
// Function calls:
//   crt_memory.c_free_FUN_00601cd0
//   crt_string.c_memmove_FUN_005fe5e0
//   crt_unknown.c_FUN_00610970

#include "nocturne.h"

int crt_unknown_c_FUN_0060fe94(void)

{
  char **ppcVar1;
  short *psVar2;
  char *ptr;
  char *pcVar3;
  short sVar4;
  short sVar5;
  undefined1 *puVar6;
  short *psVar7;
  SIZE_T n;
  char **dest;
  int iVar8;
  short *psVar9;
  short *in_stack_00000004;
  int in_stack_00000010;
  
  dest = (char **)g_EnvironInitialized;
  do {
    psVar7 = (short *)*dest;
    if (psVar7 == (short *)0x0) {
      return g_EnvironInitialized - (int)dest >> 2;
    }
    sVar4 = *in_stack_00000004;
    psVar9 = in_stack_00000004;
    while (sVar4 != 0) {
      sVar4 = crt_unknown_c_FUN_00610970();
      sVar5 = crt_unknown_c_FUN_00610970();
      if (sVar4 != sVar5) break;
      if (*psVar7 == 0x3d) {
        iVar8 = (int)dest - g_EnvironInitialized >> 2;
        if (in_stack_00000010 == 0) {
          return iVar8 + 1;
        }
        ptr = *dest;
        pcVar3 = ptr;
        while (pcVar3 != (char *)0x0) {
          *dest = dest[1];
          ppcVar1 = dest + 1;
          dest = dest + 1;
          pcVar3 = *ppcVar1;
        }
        if (g_EnvironStringArea != (char **)0x0) {
          if (*(char *)(iVar8 + (int)g_EnvironStringArea) != '\0') {
            crt_memory_c_free_FUN_00601cd0(ptr);
          }
          n = (int)dest - g_EnvironInitialized >> 2;
          crt_string_c_memmove_FUN_005fe5e0(dest,g_EnvironStringArea,n);
          g_EnvironStringArea = dest;
          if (iVar8 < (int)n) {
            puVar6 = (undefined1 *)(iVar8 + (int)dest);
            do {
              iVar8 = iVar8 + 1;
              *puVar6 = puVar6[1];
              puVar6 = puVar6 + 1;
            } while (iVar8 < (int)n);
          }
        }
        return 0;
      }
      psVar7 = psVar7 + 1;
      psVar2 = psVar9 + 1;
      psVar9 = psVar9 + 1;
      sVar4 = *psVar2;
    }
    dest = dest + 1;
  } while( true );
}


// Assembly code:
// 0060fe94: PUSH EBX
//   Label: crt_unknown.c_FUN_0060fe94
// 0060fe95: PUSH ESI
// 0060fe96: PUSH EDI
// 0060fe97: PUSH EBP
// 0060fe98: MOV EBP,dword ptr [0x03f9b868]
//   XREF to: 03f9b868 (READ)
// 0060fe9e: JMP 0x0060ff88
//   XREF to: 0060ff88 (UNCONDITIONAL_JUMP)
// 0060fea3: MOV ESI,dword ptr [ESP + 0x14]
//   Label: LAB_0060fea3
//   XREF to: Stack[0x4] (READ)
// 0060fea7: CMP word ptr [ESI],0x0
// 0060feab: JZ 0x0060ff85
//   XREF to: 0060ff85 (CONDITIONAL_JUMP)
// 0060feb1: XOR EAX,EAX
//   Label: LAB_0060feb1
// 0060feb3: MOV AX,word ptr [EBX]
// 0060feb6: PUSH EAX
// 0060feb7: CALL crt_unknown.c_FUN_00610970
//   XREF to: 00610970 (UNCONDITIONAL_CALL)
// 0060febc: MOV EDI,EAX
// 0060febe: XOR EAX,EAX
// 0060fec0: ADD ESP,0x4
// 0060fec3: MOV AX,word ptr [ESI]
// 0060fec6: PUSH EAX
// 0060fec7: CALL crt_unknown.c_FUN_00610970
//   XREF to: 00610970 (UNCONDITIONAL_CALL)
// 0060fecc: ADD ESP,0x4
// 0060fecf: CMP DI,AX
// 0060fed2: JNZ 0x0060ff85
//   XREF to: 0060ff85 (CONDITIONAL_JUMP)
// 0060fed8: CMP word ptr [EBX],0x3d
// 0060fedc: JNZ 0x0060ff72
//   XREF to: 0060ff72 (CONDITIONAL_JUMP)
// 0060fee2: MOV EDX,dword ptr [0x03f9b868]
//   XREF to: 03f9b868 (READ)
// 0060fee8: MOV ESI,EBP
// 0060feea: SUB ESI,EDX
// 0060feec: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0060fef0: SAR ESI,0x2
// 0060fef3: TEST EBX,EBX
// 0060fef5: JZ 0x0060ff6a
//   XREF to: 0060ff6a (CONDITIONAL_JUMP)
// 0060fefb: MOV EDX,dword ptr [EBP]
// 0060fefe: MOV EBX,EBP
// 0060ff00: TEST EDX,EDX
// 0060ff02: JZ 0x0060ff13
//   XREF to: 0060ff13 (CONDITIONAL_JUMP)
// 0060ff04: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_0060ff04
// 0060ff07: MOV dword ptr [EBX],EAX
// 0060ff09: MOV ECX,dword ptr [EBX + 0x4]
// 0060ff0c: ADD EBX,0x4
// 0060ff0f: TEST ECX,ECX
// 0060ff11: JNZ 0x0060ff04
//   XREF to: 0060ff04 (CONDITIONAL_JUMP)
// 0060ff13: MOV EDI,dword ptr [0x03f9b860]
//   Label: LAB_0060ff13
//   XREF to: 03f9b860 (READ)
// 0060ff19: TEST EDI,EDI
// 0060ff1b: JZ 0x0060ff63
//   XREF to: 0060ff63 (CONDITIONAL_JUMP)
// 0060ff1d: MOV EAX,EDI
// 0060ff1f: CMP byte ptr [ESI + EAX*0x1],0x0
// 0060ff23: JZ 0x0060ff2e
//   XREF to: 0060ff2e (CONDITIONAL_JUMP)
// 0060ff25: PUSH EDX
// 0060ff26: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060ff2b: ADD ESP,0x4
// 0060ff2e: MOV EAX,[0x03f9b868]
//   Label: LAB_0060ff2e
//   XREF to: 03f9b868 (READ)
// 0060ff33: MOV EBP,EBX
// 0060ff35: SUB EBP,EAX
// 0060ff37: SAR EBP,0x2
// 0060ff3a: PUSH EBP
// 0060ff3b: MOV EDX,dword ptr [0x03f9b860]
//   XREF to: 03f9b860 (READ)
// 0060ff41: PUSH EDX
// 0060ff42: PUSH EBX
// 0060ff43: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 0060ff48: ADD ESP,0xc
// 0060ff4b: MOV dword ptr [0x03f9b860],EBX
//   XREF to: 03f9b860 (WRITE)
// 0060ff51: CMP ESI,EBP
// 0060ff53: JGE 0x0060ff63
//   XREF to: 0060ff63 (CONDITIONAL_JUMP)
// 0060ff55: LEA EAX,[ESI + EBX*0x1]
// 0060ff58: INC EAX
//   Label: LAB_0060ff58
// 0060ff59: MOV BL,byte ptr [EAX]
// 0060ff5b: INC ESI
// 0060ff5c: MOV byte ptr [EAX + -0x1],BL
// 0060ff5f: CMP ESI,EBP
// 0060ff61: JL 0x0060ff58
//   XREF to: 0060ff58 (CONDITIONAL_JUMP)
// 0060ff63: XOR EAX,EAX
//   Label: LAB_0060ff63
// 0060ff65: POP EBP
// 0060ff66: POP EDI
// 0060ff67: POP ESI
// 0060ff68: POP EBX
// 0060ff69: RET
// 0060ff6a: LEA EAX,[ESI + 0x1]
//   Label: LAB_0060ff6a
// 0060ff6d: POP EBP
// 0060ff6e: POP EDI
// 0060ff6f: POP ESI
// 0060ff70: POP EBX
// 0060ff71: RET
// 0060ff72: ADD EBX,0x2
//   Label: LAB_0060ff72
// 0060ff75: MOV CX,word ptr [ESI + 0x2]
// 0060ff79: ADD ESI,0x2
// 0060ff7c: TEST CX,CX
// 0060ff7f: JNZ 0x0060feb1
//   XREF to: 0060feb1 (CONDITIONAL_JUMP)
// 0060ff85: ADD EBP,0x4
//   Label: LAB_0060ff85
// 0060ff88: MOV EBX,dword ptr [EBP]
//   Label: LAB_0060ff88
// 0060ff8b: TEST EBX,EBX
// 0060ff8d: JNZ 0x0060fea3
//   XREF to: 0060fea3 (CONDITIONAL_JUMP)
// 0060ff93: MOV EAX,[0x03f9b868]
//   XREF to: 03f9b868 (READ)
// 0060ff98: SUB EAX,EBP
// 0060ff9a: SAR EAX,0x2
// 0060ff9d: POP EBP
// 0060ff9e: POP EDI
// 0060ff9f: POP ESI
// 0060ffa0: POP EBX
// 0060ffa1: RET
