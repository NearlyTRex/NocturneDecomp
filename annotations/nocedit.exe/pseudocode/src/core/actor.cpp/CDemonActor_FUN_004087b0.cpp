// Name: core_actor.cpp_CDemonActor_FUN_004087b0
// Address: 004087b0
// Address Range: [[004087b0, 00408814]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_FUN_004087b0(CDemonActor * this_ptr)
// Globals:
//   char[256] g_CharacterClassificationTable
// Function calls:
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_FUN_004087b0(CDemonActor *this_ptr)

{
  char *pcVar1;
  uint uVar2;
  SIZE_T n;
  CDemonActor *pCVar3;
  
  uVar2 = 0xffffffff;
  pCVar3 = this_ptr;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = pCVar3->actor_name;
    pCVar3 = (CDemonActor *)(pCVar3->actor_name + 1);
  } while (*pcVar1 != '\0');
  n = ~uVar2 - 1;
  if (0 < (int)n) {
    pcVar1 = this_ptr->actor_name + n;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar1[-1] + 1)] & 2U) == 0) break;
      n = n - 1;
      pcVar1 = pcVar1 + -1;
    } while (0 < (int)n);
  }
  this_ptr->actor_name[n] = '\0';
  while ((g_CharacterClassificationTable[(byte)(this_ptr->actor_name[0] + 1)] & 2U) != 0) {
    crt_string_c_memmove_FUN_005fe5e0(this_ptr,this_ptr->actor_name + 1,n);
    n = n - 1;
  }
  return;
}


// Assembly code:
// 004087b0: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_FUN_004087b0
// 004087b1: PUSH ESI
// 004087b2: PUSH EDI
// 004087b3: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004087b7: MOV EDI,ESI
// 004087b9: SUB ECX,ECX
// 004087bb: DEC ECX
// 004087bc: XOR EAX,EAX
// 004087be: SCASB.REPNE ES:EDI
// 004087c0: NOT ECX
// 004087c2: DEC ECX
// 004087c3: MOV EBX,ECX
// 004087c5: TEST ECX,ECX
// 004087c7: JLE 0x004087e0
//   XREF to: 004087e0 (CONDITIONAL_JUMP)
// 004087c9: LEA EAX,[ECX + ESI*0x1]
// 004087cc: MOV DL,byte ptr [EAX + -0x1]
//   Label: LAB_004087cc
// 004087cf: INC DL
// 004087d1: AND EDX,0xff
// 004087d7: TEST byte ptr [EDX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 004087de: JNZ 0x004087ff
//   XREF to: 004087ff (CONDITIONAL_JUMP)
// 004087e0: LEA EAX,[ESI + EBX*0x1]
//   Label: LAB_004087e0
// 004087e3: LEA EDI,[ESI + 0x1]
// 004087e6: MOV byte ptr [EAX],0x0
// 004087e9: MOV AL,byte ptr [ESI]
//   Label: LAB_004087e9
// 004087eb: INC AL
// 004087ed: AND EAX,0xff
// 004087f2: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 004087f9: JNZ 0x00408807
//   XREF to: 00408807 (CONDITIONAL_JUMP)
// 004087fb: POP EDI
// 004087fc: POP ESI
// 004087fd: POP EBX
// 004087fe: RET
// 004087ff: DEC EBX
//   Label: LAB_004087ff
// 00408800: DEC EAX
// 00408801: TEST EBX,EBX
// 00408803: JG 0x004087cc
//   XREF to: 004087cc (CONDITIONAL_JUMP)
// 00408805: JMP 0x004087e0
//   XREF to: 004087e0 (UNCONDITIONAL_JUMP)
// 00408807: PUSH EBX
//   Label: LAB_00408807
// 00408808: PUSH EDI
// 00408809: PUSH ESI
// 0040880a: DEC EBX
// 0040880b: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 00408810: ADD ESP,0xc
// 00408813: JMP 0x004087e9
//   XREF to: 004087e9 (UNCONDITIONAL_JUMP)
