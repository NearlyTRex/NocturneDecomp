// Name: core_script.cpp_FUN_00559360
// Address: 00559360
// Address Range: [[00559360, 005593c4]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00559360()
// Cross-references:
//   core_script.cpp_CScript_dbLoad_FUN_005603c0 (005603c0) at 005604c5 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055bc43 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005593f0 (005593f0) at 00559475 [UNCONDITIONAL_CALL]
// Globals:
//   char[256] g_CharacterClassificationTable
// Function calls:
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00559360(undefined4 param_1) */

void core_script_cpp_FUN_00559360(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  SIZE_T n;
  char *in_stack_00000004;
  
  uVar3 = 0xffffffff;
  pcVar2 = in_stack_00000004;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  n = ~uVar3 - 1;
  if (0 < (int)n) {
    pcVar2 = in_stack_00000004 + n;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar2[-1] + 1)] & 2U) == 0) break;
      n = n - 1;
      pcVar2 = pcVar2 + -1;
    } while (0 < (int)n);
  }
  in_stack_00000004[n] = '\0';
  while ((g_CharacterClassificationTable[(byte)(*in_stack_00000004 + 1)] & 2U) != 0) {
    crt_string_c_memmove_FUN_005fe5e0(in_stack_00000004,in_stack_00000004 + 1,n);
    n = n - 1;
  }
  return;
}


// Assembly code:
// 00559360: PUSH EBX
//   Label: core_script.cpp_FUN_00559360
// 00559361: PUSH ESI
// 00559362: PUSH EDI
// 00559363: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00559367: MOV EDI,ESI
// 00559369: SUB ECX,ECX
// 0055936b: DEC ECX
// 0055936c: XOR EAX,EAX
// 0055936e: SCASB.REPNE ES:EDI
// 00559370: NOT ECX
// 00559372: DEC ECX
// 00559373: MOV EBX,ECX
// 00559375: TEST ECX,ECX
// 00559377: JLE 0x00559390
//   XREF to: 00559390 (CONDITIONAL_JUMP)
// 00559379: LEA EAX,[ECX + ESI*0x1]
// 0055937c: MOV DL,byte ptr [EAX + -0x1]
//   Label: LAB_0055937c
// 0055937f: INC DL
// 00559381: AND EDX,0xff
// 00559387: TEST byte ptr [EDX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 0055938e: JNZ 0x005593af
//   XREF to: 005593af (CONDITIONAL_JUMP)
// 00559390: LEA EAX,[ESI + EBX*0x1]
//   Label: LAB_00559390
// 00559393: LEA EDI,[ESI + 0x1]
// 00559396: MOV byte ptr [EAX],0x0
// 00559399: MOV AL,byte ptr [ESI]
//   Label: LAB_00559399
// 0055939b: INC AL
// 0055939d: AND EAX,0xff
// 005593a2: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 005593a9: JNZ 0x005593b7
//   XREF to: 005593b7 (CONDITIONAL_JUMP)
// 005593ab: POP EDI
// 005593ac: POP ESI
// 005593ad: POP EBX
// 005593ae: RET
//   Label: LAB_005593ae
// 005593af: DEC EBX
//   Label: LAB_005593af
// 005593b0: DEC EAX
// 005593b1: TEST EBX,EBX
// 005593b3: JG 0x0055937c
//   XREF to: 0055937c (CONDITIONAL_JUMP)
// 005593b5: JMP 0x00559390
//   XREF to: 00559390 (UNCONDITIONAL_JUMP)
// 005593b7: PUSH EBX
//   Label: LAB_005593b7
// 005593b8: PUSH EDI
// 005593b9: PUSH ESI
// 005593ba: DEC EBX
// 005593bb: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 005593c0: ADD ESP,0xc
// 005593c3: JMP 0x00559399
//   XREF to: 00559399 (UNCONDITIONAL_JUMP)
