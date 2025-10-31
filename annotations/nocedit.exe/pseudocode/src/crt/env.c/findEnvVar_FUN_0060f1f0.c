// Name: crt_env.c_findEnvVar_FUN_0060f1f0
// Address: 0060f1f0
// Address Range: [[0060f1f0, 0060f2f2]]
// Convention: __cdecl
// Signature: int crt_env.c_findEnvVar_FUN_0060f1f0(char * name, int delete_flag)
// Cross-references:
//   crt_env.c_updateEnvironTable_FUN_0060f04c (0060f04c) at 0060f0e8 [UNCONDITIONAL_CALL]
// Globals:
//   char** g_EnvironStringArea
//   char** g_EnvironmentBlock
// Function calls:
//   crt_ctype.c_toupper_FUN_005ff9e0
//   crt_memory.c_free_FUN_00601cd0
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

int __cdecl crt_env_c_findEnvVar_FUN_0060f1f0(char *name,int delete_flag)

{
  char **ppcVar1;
  byte *pbVar2;
  byte bVar3;
  char *ptr;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  char **dest;
  byte *pbVar9;
  SIZE_T n;
  int in_stack_00000010;
  
  dest = g_EnvironmentBlock;
  do {
    pbVar8 = (byte *)*dest;
    if (pbVar8 == (byte *)0x0) {
      return (int)g_EnvironmentBlock - (int)dest >> 2;
    }
    bVar3 = *name;
    pbVar9 = (byte *)name;
    while (bVar3 != 0) {
      iVar5 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar8);
      iVar6 = crt_ctype_c_toupper_FUN_005ff9e0((uint)*pbVar9);
      if (iVar5 != iVar6) break;
      if (*pbVar8 == 0x3d) {
        iVar5 = (int)dest - (int)g_EnvironmentBlock >> 2;
        if (in_stack_00000010 == 0) {
          return iVar5 + 1;
        }
        ptr = *dest;
        pcVar4 = ptr;
        while (pcVar4 != (char *)0x0) {
          *dest = dest[1];
          ppcVar1 = dest + 1;
          dest = dest + 1;
          pcVar4 = *ppcVar1;
        }
        if (g_EnvironStringArea != (char **)0x0) {
          if (*(char *)(iVar5 + (int)g_EnvironStringArea) != '\0') {
            crt_memory_c_free_FUN_00601cd0(ptr);
          }
          n = (int)dest - (int)g_EnvironmentBlock >> 2;
          crt_string_c_memmove_FUN_005fe5e0(dest,g_EnvironStringArea,n);
          g_EnvironStringArea = dest;
          if (iVar5 < (int)n) {
            puVar7 = (undefined1 *)(iVar5 + (int)dest);
            do {
              iVar5 = iVar5 + 1;
              *puVar7 = puVar7[1];
              puVar7 = puVar7 + 1;
            } while (iVar5 < (int)n);
          }
        }
        return 0;
      }
      pbVar8 = pbVar8 + 1;
      pbVar2 = pbVar9 + 1;
      pbVar9 = pbVar9 + 1;
      bVar3 = *pbVar2;
    }
    dest = dest + 1;
  } while( true );
}


// Assembly code:
// 0060f1f0: PUSH EBX
//   Label: crt_env.c_findEnvVar_FUN_0060f1f0
// 0060f1f1: PUSH ESI
// 0060f1f2: PUSH EDI
// 0060f1f3: PUSH EBP
// 0060f1f4: MOV EBP,dword ptr [0x03f9b864]
//   XREF to: 03f9b864 (READ)
// 0060f1fa: JMP 0x0060f2d9
//   XREF to: 0060f2d9 (UNCONDITIONAL_JUMP)
// 0060f1ff: MOV ESI,dword ptr [ESP + 0x14]
//   Label: LAB_0060f1ff
//   XREF to: Stack[0x4] (READ)
// 0060f203: CMP byte ptr [ESI],0x0
// 0060f206: JZ 0x0060f2d6
//   XREF to: 0060f2d6 (CONDITIONAL_JUMP)
// 0060f20c: XOR EAX,EAX
//   Label: LAB_0060f20c
// 0060f20e: MOV AL,byte ptr [EBX]
// 0060f210: PUSH EAX
// 0060f211: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 0060f216: MOV EDI,EAX
// 0060f218: XOR EAX,EAX
// 0060f21a: ADD ESP,0x4
// 0060f21d: MOV AL,byte ptr [ESI]
// 0060f21f: PUSH EAX
// 0060f220: CALL crt_ctype.c_toupper_FUN_005ff9e0
//   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)
// 0060f225: ADD ESP,0x4
// 0060f228: CMP EDI,EAX
// 0060f22a: JNZ 0x0060f2d6
//   XREF to: 0060f2d6 (CONDITIONAL_JUMP)
// 0060f230: CMP byte ptr [EBX],0x3d
// 0060f233: JNZ 0x0060f2c9
//   XREF to: 0060f2c9 (CONDITIONAL_JUMP)
// 0060f239: MOV EDX,dword ptr [0x03f9b864]
//   XREF to: 03f9b864 (READ)
// 0060f23f: MOV ESI,EBP
// 0060f241: SUB ESI,EDX
// 0060f243: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0060f247: SAR ESI,0x2
// 0060f24a: TEST EBX,EBX
// 0060f24c: JZ 0x0060f2c1
//   XREF to: 0060f2c1 (CONDITIONAL_JUMP)
// 0060f252: MOV EDI,dword ptr [EBP]
// 0060f255: MOV EBX,EBP
// 0060f257: TEST EDI,EDI
// 0060f259: JZ 0x0060f26a
//   XREF to: 0060f26a (CONDITIONAL_JUMP)
// 0060f25b: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_0060f25b
// 0060f25e: MOV dword ptr [EBX],EAX
// 0060f260: MOV ECX,dword ptr [EBX + 0x4]
// 0060f263: ADD EBX,0x4
// 0060f266: TEST ECX,ECX
// 0060f268: JNZ 0x0060f25b
//   XREF to: 0060f25b (CONDITIONAL_JUMP)
// 0060f26a: MOV EBP,dword ptr [0x03f9b860]
//   Label: LAB_0060f26a
//   XREF to: 03f9b860 (READ)
// 0060f270: TEST EBP,EBP
// 0060f272: JZ 0x0060f2ba
//   XREF to: 0060f2ba (CONDITIONAL_JUMP)
// 0060f274: MOV EAX,EBP
// 0060f276: CMP byte ptr [ESI + EAX*0x1],0x0
// 0060f27a: JZ 0x0060f285
//   XREF to: 0060f285 (CONDITIONAL_JUMP)
// 0060f27c: PUSH EDI
// 0060f27d: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060f282: ADD ESP,0x4
// 0060f285: MOV EAX,[0x03f9b864]
//   Label: LAB_0060f285
//   XREF to: 03f9b864 (READ)
// 0060f28a: MOV EDI,EBX
// 0060f28c: SUB EDI,EAX
// 0060f28e: SAR EDI,0x2
// 0060f291: PUSH EDI
// 0060f292: MOV EDX,dword ptr [0x03f9b860]
//   XREF to: 03f9b860 (READ)
// 0060f298: PUSH EDX
// 0060f299: PUSH EBX
// 0060f29a: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 0060f29f: ADD ESP,0xc
// 0060f2a2: MOV dword ptr [0x03f9b860],EBX
//   XREF to: 03f9b860 (WRITE)
// 0060f2a8: CMP ESI,EDI
// 0060f2aa: JGE 0x0060f2ba
//   XREF to: 0060f2ba (CONDITIONAL_JUMP)
// 0060f2ac: LEA EAX,[ESI + EBX*0x1]
// 0060f2af: INC EAX
//   Label: LAB_0060f2af
// 0060f2b0: MOV BL,byte ptr [EAX]
// 0060f2b2: INC ESI
// 0060f2b3: MOV byte ptr [EAX + -0x1],BL
// 0060f2b6: CMP ESI,EDI
// 0060f2b8: JL 0x0060f2af
//   XREF to: 0060f2af (CONDITIONAL_JUMP)
// 0060f2ba: XOR EAX,EAX
//   Label: LAB_0060f2ba
// 0060f2bc: POP EBP
// 0060f2bd: POP EDI
// 0060f2be: POP ESI
// 0060f2bf: POP EBX
// 0060f2c0: RET
// 0060f2c1: LEA EAX,[ESI + 0x1]
//   Label: LAB_0060f2c1
// 0060f2c4: POP EBP
// 0060f2c5: POP EDI
// 0060f2c6: POP ESI
// 0060f2c7: POP EBX
// 0060f2c8: RET
// 0060f2c9: INC EBX
//   Label: LAB_0060f2c9
// 0060f2ca: MOV DH,byte ptr [ESI + 0x1]
// 0060f2cd: INC ESI
// 0060f2ce: TEST DH,DH
// 0060f2d0: JNZ 0x0060f20c
//   XREF to: 0060f20c (CONDITIONAL_JUMP)
// 0060f2d6: ADD EBP,0x4
//   Label: LAB_0060f2d6
// 0060f2d9: MOV EBX,dword ptr [EBP]
//   Label: LAB_0060f2d9
// 0060f2dc: TEST EBX,EBX
// 0060f2de: JNZ 0x0060f1ff
//   XREF to: 0060f1ff (CONDITIONAL_JUMP)
// 0060f2e4: MOV EAX,[0x03f9b864]
//   XREF to: 03f9b864 (READ)
// 0060f2e9: SUB EAX,EBP
// 0060f2eb: SAR EAX,0x2
// 0060f2ee: POP EBP
// 0060f2ef: POP EDI
// 0060f2f0: POP ESI
// 0060f2f1: POP EBX
// 0060f2f2: RET
