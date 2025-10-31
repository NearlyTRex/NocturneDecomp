// Name: crt_unknown.c_FUN_0060e4f0
// Address: 0060e4f0
// Address Range: [[0060e4f0, 0060e58a]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060e4f0()
// Cross-references:
//   crt_unknown.c_staticFinal_FUN_0060c73c (0060c73c) at 0060c73e [UNCONDITIONAL_CALL]
// Globals:
//   char** g_EnvironStringArea
//   char** g_EnvironmentBlock
// Function calls:
//   crt_memory.c_free_FUN_00601cd0
//   crt_memory.c_malloc_FUN_00601bb0
//   crt_memory.c_realloc_FUN_00601df0

#include "nocturne.h"

undefined4 crt_unknown_c_FUN_0060e4f0(void)

{
  char **ppcVar1;
  
  ppcVar1 = g_EnvironmentBlock;
  if (g_EnvironmentBlock != (char **)0x0) {
    for (; *ppcVar1 != (char *)0x0; ppcVar1 = ppcVar1 + 1) {
      if (g_EnvironStringArea != (char **)0x0) {
        if (*(char *)(((int)ppcVar1 - (int)g_EnvironmentBlock >> 2) + (int)g_EnvironStringArea) !=
            '\0') {
          crt_memory_c_free_FUN_00601cd0(*ppcVar1);
        }
        *ppcVar1 = (char *)0x0;
      }
    }
    if (g_EnvironStringArea == (char **)0x0) {
      ppcVar1 = (char **)crt_memory_c_malloc_FUN_00601bb0(5);
    }
    else {
      ppcVar1 = (char **)crt_memory_c_realloc_FUN_00601df0(g_EnvironmentBlock,5);
    }
    if (ppcVar1 == (char **)0x0) {
      return 0xffffffff;
    }
    g_EnvironmentBlock = ppcVar1;
    *ppcVar1 = (char *)0x0;
    g_EnvironStringArea = ppcVar1 + 1;
    *(undefined1 *)g_EnvironStringArea = 0;
  }
  return 0;
}


// Assembly code:
// 0060e4f0: PUSH EBX
//   Label: crt_unknown.c_FUN_0060e4f0
// 0060e4f1: PUSH ESI
// 0060e4f2: PUSH EDI
// 0060e4f3: MOV EDX,dword ptr [0x03f9b864]
//   XREF to: 03f9b864 (READ)
// 0060e4f9: TEST EDX,EDX
// 0060e4fb: JZ 0x0060e585
//   XREF to: 0060e585 (CONDITIONAL_JUMP)
// 0060e501: MOV EBX,EDX
// 0060e503: JMP 0x0060e536
//   XREF to: 0060e536 (UNCONDITIONAL_JUMP)
// 0060e505: MOV ESI,dword ptr [0x03f9b860]
//   Label: LAB_0060e505
//   XREF to: 03f9b860 (READ)
// 0060e50b: TEST ESI,ESI
// 0060e50d: JZ 0x0060e533
//   XREF to: 0060e533 (CONDITIONAL_JUMP)
// 0060e50f: MOV EDI,dword ptr [0x03f9b864]
//   XREF to: 03f9b864 (READ)
// 0060e515: MOV ECX,EBX
// 0060e517: SUB ECX,EDI
// 0060e519: MOV EDX,ESI
// 0060e51b: SAR ECX,0x2
// 0060e51e: CMP byte ptr [ECX + EDX*0x1],0x0
// 0060e522: JZ 0x0060e52d
//   XREF to: 0060e52d (CONDITIONAL_JUMP)
// 0060e524: PUSH EAX
// 0060e525: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060e52a: ADD ESP,0x4
// 0060e52d: MOV dword ptr [EBX],0x0
//   Label: LAB_0060e52d
// 0060e533: ADD EBX,0x4
//   Label: LAB_0060e533
// 0060e536: MOV EAX,dword ptr [EBX]
//   Label: LAB_0060e536
// 0060e538: TEST EAX,EAX
// 0060e53a: JNZ 0x0060e505
//   XREF to: 0060e505 (CONDITIONAL_JUMP)
// 0060e53c: CMP dword ptr [0x03f9b860],0x0
//   XREF to: 03f9b860 (READ)
// 0060e543: JNZ 0x0060e551
//   XREF to: 0060e551 (CONDITIONAL_JUMP)
// 0060e545: PUSH 0x5
// 0060e547: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 0060e54c: ADD ESP,0x4
// 0060e54f: JMP 0x0060e562
//   XREF to: 0060e562 (UNCONDITIONAL_JUMP)
// 0060e551: PUSH 0x5
//   Label: LAB_0060e551
// 0060e553: MOV ECX,dword ptr [0x03f9b864]
//   XREF to: 03f9b864 (READ)
// 0060e559: PUSH ECX
// 0060e55a: CALL crt_memory.c_realloc_FUN_00601df0
//   XREF to: 00601df0 (UNCONDITIONAL_CALL)
// 0060e55f: ADD ESP,0x8
// 0060e562: TEST EAX,EAX
//   Label: LAB_0060e562
// 0060e564: JNZ 0x0060e56f
//   XREF to: 0060e56f (CONDITIONAL_JUMP)
// 0060e566: MOV EAX,0xffffffff
// 0060e56b: POP EDI
// 0060e56c: POP ESI
// 0060e56d: POP EBX
// 0060e56e: RET
// 0060e56f: MOV [0x03f9b864],EAX
//   Label: LAB_0060e56f
//   XREF to: 03f9b864 (WRITE)
// 0060e574: MOV dword ptr [EAX],0x0
// 0060e57a: ADD EAX,0x4
// 0060e57d: MOV [0x03f9b860],EAX
//   XREF to: 03f9b860 (WRITE)
// 0060e582: MOV byte ptr [EAX],0x0
// 0060e585: XOR EAX,EAX
//   Label: LAB_0060e585
// 0060e587: POP EDI
// 0060e588: POP ESI
// 0060e589: POP EBX
// 0060e58a: RET
