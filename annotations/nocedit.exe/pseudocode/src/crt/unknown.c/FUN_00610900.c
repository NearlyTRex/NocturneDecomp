// Name: crt_unknown.c_FUN_00610900
// Address: 00610900
// Address Range: [[00610900, 00610963]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00610900()
// Cross-references:
//   crt_unknown.c_FUN_0060fb40 (0060fb40) at 0060fc5e [UNCONDITIONAL_CALL]
// Globals:
//   char** g_EnvironmentBlock
// Function calls:
//   crt_memory.c_free_FUN_00601cd0
//   crt_memory.c_malloc_FUN_00601bb0
//   crt_unknown.c_FUN_0060fa90
//   crt_unknown.c_FUN_0060fac0
//   crt_unknown.c_FUN_0060fcf4

#include "nocturne.h"

void crt_unknown_c_FUN_00610900(void)

{
  char *pcVar1;
  int iVar2;
  void *ptr;
  char **ppcVar3;
  
  ppcVar3 = g_EnvironmentBlock;
  if (g_EnvironmentBlock != (char **)0x0) {
    while( true ) {
      pcVar1 = *ppcVar3;
      ppcVar3 = ppcVar3 + 1;
      if (pcVar1 == (char *)0x0) break;
      iVar2 = crt_unknown_c_FUN_0060fa90();
      ptr = crt_memory_c_malloc_FUN_00601bb0((iVar2 + 1) * 2);
      if (ptr != (void *)0x0) {
        iVar2 = crt_unknown_c_FUN_0060fac0();
        if (iVar2 == -1) {
          crt_memory_c_free_FUN_00601cd0(ptr);
        }
        else {
          crt_unknown_c_FUN_0060fcf4();
        }
      }
    }
  }
  return;
}


// Assembly code:
// 00610900: PUSH EBX
//   Label: crt_unknown.c_FUN_00610900
// 00610901: PUSH ESI
// 00610902: PUSH EDI
// 00610903: PUSH EBP
// 00610904: MOV EDI,dword ptr [0x03f9b864]
//   XREF to: 03f9b864 (READ)
// 0061090a: TEST EDI,EDI
// 0061090c: JZ 0x0061095f
//   XREF to: 0061095f (CONDITIONAL_JUMP)
// 0061090e: MOV ESI,dword ptr [EDI]
//   Label: LAB_0061090e
// 00610910: ADD EDI,0x4
// 00610913: TEST ESI,ESI
// 00610915: JZ 0x0061095f
//   XREF to: 0061095f (CONDITIONAL_JUMP)
// 00610917: PUSH ESI
// 00610918: CALL crt_unknown.c_FUN_0060fa90
//   XREF to: 0060fa90 (UNCONDITIONAL_CALL)
// 0061091d: LEA EBP,[EAX + 0x1]
// 00610920: ADD ESP,0x4
// 00610923: LEA EAX,[EBP*0x2 + 0x0]
// 0061092a: PUSH EAX
// 0061092b: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 00610930: MOV EBX,EAX
// 00610932: ADD ESP,0x4
// 00610935: TEST EAX,EAX
// 00610937: JZ 0x0061090e
//   XREF to: 0061090e (CONDITIONAL_JUMP)
// 00610939: PUSH EBP
// 0061093a: PUSH ESI
// 0061093b: PUSH EAX
// 0061093c: CALL crt_unknown.c_FUN_0060fac0
//   XREF to: 0060fac0 (UNCONDITIONAL_CALL)
// 00610941: ADD ESP,0xc
// 00610944: CMP EAX,-0x1
// 00610947: JZ 0x00610954
//   XREF to: 00610954 (CONDITIONAL_JUMP)
// 00610949: PUSH EBX
// 0061094a: CALL crt_unknown.c_FUN_0060fcf4
//   XREF to: 0060fcf4 (UNCONDITIONAL_CALL)
// 0061094f: ADD ESP,0x4
// 00610952: JMP 0x0061090e
//   XREF to: 0061090e (UNCONDITIONAL_JUMP)
// 00610954: PUSH EBX
//   Label: LAB_00610954
// 00610955: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0061095a: ADD ESP,0x4
// 0061095d: JMP 0x0061090e
//   XREF to: 0061090e (UNCONDITIONAL_JUMP)
// 0061095f: POP EBP
//   Label: LAB_0061095f
// 00610960: POP EDI
// 00610961: POP ESI
// 00610962: POP EBX
// 00610963: RET
