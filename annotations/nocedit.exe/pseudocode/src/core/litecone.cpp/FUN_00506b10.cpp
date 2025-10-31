// Name: core_litecone.cpp_FUN_00506b10
// Address: 00506b10
// Address Range: [[00506b10, 00506ba1]]
// Convention: __cdecl
// Signature: CLightCone * core_litecone.cpp_FUN_00506b10(CLightCone * this_ptr)
// Cross-references:
//   core_litecone.cpp_FUN_00506ad0 (00506ad0) at 00506aea [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_none_00631556
//   undefined4 s_one_00631557
//   undefined4 s_ne_00631558
//   undefined4 s_e_00631559
//   TerminatedCString s_none_0063155b
//   undefined4 s_one_0063155c
//   undefined4 s_ne_0063155d
//   undefined4 s_e_0063155e
//   CDemonActor_vtable PTR_core_litecone.cpp_FUN_00660bb4
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0

#include "nocturne.h"

CLightCone * __cdecl core_litecone_cpp_FUN_00506b10(CLightCone *this_ptr)

{
  char cVar1;
  CLightCone *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CLightCone *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  (pCVar2->base_actor).metadata.vtable = &PTR_core_litecone_cpp_FUN_00660bb4;
  pcVar3 = "none";
  pCVar2->field1_0x158[0] = '\0';
  pCVar2->field1_0x158[1] = '\0';
  pCVar2->field1_0x158[2] = '`';
  pCVar2->field1_0x158[3] = 'B';
  pCVar2->field1_0x158[4] = '\0';
  pCVar2->field1_0x158[5] = '\0';
  pCVar2->field1_0x158[6] = -0x40;
  pCVar2->field1_0x158[7] = '@';
  (pCVar2->base_actor).is_transparent = 1;
  pcVar4 = pCVar2->field1_0x158 + 0xc;
  pCVar2->field1_0x158[8] = '\x01';
  pCVar2->field1_0x158[9] = '\0';
  pCVar2->field1_0x158[10] = '\0';
  pCVar2->field1_0x158[0xb] = '\0';
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "none";
  pcVar4 = pCVar2->field1_0x158 + 0x70;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return pCVar2;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return pCVar2;
}


// Assembly code:
// 00506b10: PUSH ESI
//   Label: core_litecone.cpp_FUN_00506b10
// 00506b11: PUSH EDI
// 00506b12: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00506b16: PUSH EDX
// 00506b17: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 00506b1c: MOV dword ptr [EAX + 0x154],0x660bb4
//   XREF to: 00660bb4 (DATA)
// 00506b26: MOV ESI,0x631556
//   XREF to: 00631556 (DATA)
// 00506b2b: MOV dword ptr [EAX + 0x158],0x42600000
// 00506b35: MOV EDX,EAX
// 00506b37: MOV dword ptr [EAX + 0x15c],0x40c00000
// 00506b41: ADD ESP,0x4
// 00506b44: MOV dword ptr [EAX + 0xfc],0x1
// 00506b4e: LEA EDI,[EAX + 0x164]
// 00506b54: MOV dword ptr [EAX + 0x160],0x1
// 00506b5e: PUSH EDI
// 00506b5f: MOV AL,byte ptr [ESI]
//   Label: LAB_00506b5f
//   XREF to: 00631556 (READ)
//   XREF to: 00631558 (READ)
// 00506b61: MOV byte ptr [EDI],AL
// 00506b63: CMP AL,0x0
// 00506b65: JZ 0x00506b77
//   XREF to: 00506b77 (CONDITIONAL_JUMP)
// 00506b67: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00631557 (READ)
//   XREF to: 00631559 (READ)
// 00506b6a: ADD ESI,0x2
// 00506b6d: MOV byte ptr [EDI + 0x1],AL
// 00506b70: ADD EDI,0x2
// 00506b73: CMP AL,0x0
// 00506b75: JNZ 0x00506b5f
//   XREF to: 00506b5f (CONDITIONAL_JUMP)
// 00506b77: POP EDI
//   Label: LAB_00506b77
// 00506b78: MOV ESI,0x63155b
//   XREF to: 0063155b (DATA)
// 00506b7d: LEA EDI,[EDX + 0x1c8]
// 00506b83: PUSH EDI
// 00506b84: MOV AL,byte ptr [ESI]
//   Label: LAB_00506b84
//   XREF to: 0063155b (READ)
//   XREF to: 0063155d (READ)
// 00506b86: MOV byte ptr [EDI],AL
// 00506b88: CMP AL,0x0
// 00506b8a: JZ 0x00506b9c
//   XREF to: 00506b9c (CONDITIONAL_JUMP)
// 00506b8c: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0063155c (READ)
//   XREF to: 0063155e (READ)
// 00506b8f: ADD ESI,0x2
// 00506b92: MOV byte ptr [EDI + 0x1],AL
// 00506b95: ADD EDI,0x2
// 00506b98: CMP AL,0x0
// 00506b9a: JNZ 0x00506b84
//   XREF to: 00506b84 (CONDITIONAL_JUMP)
// 00506b9c: POP EDI
//   Label: LAB_00506b9c
// 00506b9d: MOV EAX,EDX
// 00506b9f: POP EDI
// 00506ba0: POP ESI
// 00506ba1: RET
