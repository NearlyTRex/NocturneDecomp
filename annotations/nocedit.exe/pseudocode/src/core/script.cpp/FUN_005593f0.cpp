// Name: core_script.cpp_FUN_005593f0
// Address: 005593f0
// Address Range: [[005593f0, 00559490]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_005593f0()
// Cross-references:
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055c1ab [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005594a0 (005594a0) at 005594ac [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_No_opening_parenthesis_0064151e
//   TerminatedCString s_Argument_too_long_00641535
//   TerminatedCString s_Can_t_find_closing_paren_00641547
// Function calls:
//   core_script.cpp_FUN_00559360
//   core_script.cpp_FUN_005593d0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_005593f0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

char * core_script_cpp_FUN_005593f0(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_00000010;
  
  pcVar2 = (char *)core_script_cpp_FUN_005593d0();
  *in_stack_00000004 = (int)pcVar2;
  if (*pcVar2 != '(') {
    return "No opening parenthesis";
  }
  iVar3 = 0;
  iVar4 = 0;
  if (0 < in_stack_00000010) {
    do {
      iVar5 = *in_stack_00000004;
      pcVar2 = (char *)(iVar5 + 1);
      *in_stack_00000004 = (int)pcVar2;
      cVar1 = *pcVar2;
      if (cVar1 == '\0') {
        return "Can't find closing parenthesis";
      }
      if (cVar1 == '(') {
        iVar3 = iVar3 + 1;
      }
      else if (cVar1 == ')') {
        if (iVar3 == 0) {
          *in_stack_00000004 = iVar5 + 2;
          *(undefined1 *)(iVar4 + in_stack_00000008) = 0;
          core_script_cpp_FUN_00559360();
          iVar4 = core_script_cpp_FUN_005593d0();
          *in_stack_00000004 = iVar4;
          return (char *)0x0;
        }
        iVar3 = iVar3 + -1;
      }
      iVar5 = iVar4 + 1;
      *(undefined1 *)(iVar4 + in_stack_00000008) = *(undefined1 *)*in_stack_00000004;
      iVar4 = iVar5;
    } while (iVar5 < in_stack_00000010);
  }
  return "Argument too long";
}


// Assembly code:
// 005593f0: PUSH EBX
//   Label: core_script.cpp_FUN_005593f0
// 005593f1: PUSH ESI
// 005593f2: PUSH EDI
// 005593f3: PUSH EBP
// 005593f4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005593f8: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005593fc: MOV EDX,dword ptr [EBX]
// 005593fe: PUSH EDX
// 005593ff: CALL core_script.cpp_FUN_005593d0
//   XREF to: 005593d0 (UNCONDITIONAL_CALL)
// 00559404: MOV dword ptr [EBX],EAX
// 00559406: MOV DL,byte ptr [EAX]
// 00559408: ADD ESP,0x4
// 0055940b: CMP DL,0x28
// 0055940e: JNZ 0x0055944b
//   XREF to: 0055944b (CONDITIONAL_JUMP)
// 00559410: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00559414: XOR EAX,EAX
// 00559416: XOR EDX,EDX
// 00559418: TEST ECX,ECX
// 0055941a: JLE 0x00559441
//   XREF to: 00559441 (CONDITIONAL_JUMP)
// 0055941c: MOV EDI,dword ptr [EBX]
//   Label: LAB_0055941c
// 0055941e: INC EDI
// 0055941f: MOV dword ptr [EBX],EDI
// 00559421: MOV CL,byte ptr [EDI]
// 00559423: MOV ESI,EDI
// 00559425: TEST CL,CL
// 00559427: JZ 0x00559455
//   XREF to: 00559455 (CONDITIONAL_JUMP)
// 00559429: CMP CL,0x28
// 0055942c: JNZ 0x0055945f
//   XREF to: 0055945f (CONDITIONAL_JUMP)
// 0055942e: INC EAX
// 0055942f: MOV ESI,dword ptr [EBX]
//   Label: LAB_0055942f
// 00559431: MOV EDI,EDX
// 00559433: INC EDX
// 00559434: MOV CL,byte ptr [ESI]
// 00559436: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0055943a: MOV byte ptr [EDI + EBP*0x1],CL
// 0055943d: CMP EDX,ESI
// 0055943f: JL 0x0055941c
//   XREF to: 0055941c (CONDITIONAL_JUMP)
// 00559441: MOV EAX,0x641535
//   Label: LAB_00559441
//   XREF to: 00641535 (DATA)
// 00559446: POP EBP
// 00559447: POP EDI
// 00559448: POP ESI
// 00559449: POP EBX
// 0055944a: RET
// 0055944b: MOV EAX,0x64151e
//   Label: LAB_0055944b
//   XREF to: 0064151e (DATA)
// 00559450: POP EBP
// 00559451: POP EDI
// 00559452: POP ESI
// 00559453: POP EBX
// 00559454: RET
// 00559455: MOV EAX,0x641547
//   Label: LAB_00559455
//   XREF to: 00641547 (DATA)
// 0055945a: POP EBP
// 0055945b: POP EDI
// 0055945c: POP ESI
// 0055945d: POP EBX
// 0055945e: RET
// 0055945f: CMP CL,0x29
//   Label: LAB_0055945f
// 00559462: JNZ 0x0055942f
//   XREF to: 0055942f (CONDITIONAL_JUMP)
// 00559464: TEST EAX,EAX
// 00559466: JZ 0x0055946b
//   XREF to: 0055946b (CONDITIONAL_JUMP)
// 00559468: DEC EAX
// 00559469: JMP 0x0055942f
//   XREF to: 0055942f (UNCONDITIONAL_JUMP)
// 0055946b: LEA ESI,[EDI + 0x1]
//   Label: LAB_0055946b
// 0055946e: MOV dword ptr [EBX],ESI
// 00559470: PUSH EBP
// 00559471: MOV byte ptr [EDX + EBP*0x1],0x0
// 00559475: CALL core_script.cpp_FUN_00559360
//   XREF to: 00559360 (UNCONDITIONAL_CALL)
// 0055947a: ADD ESP,0x4
// 0055947d: MOV EBP,dword ptr [EBX]
// 0055947f: PUSH EBP
// 00559480: CALL core_script.cpp_FUN_005593d0
//   XREF to: 005593d0 (UNCONDITIONAL_CALL)
// 00559485: ADD ESP,0x4
// 00559488: MOV dword ptr [EBX],EAX
// 0055948a: XOR EAX,EAX
// 0055948c: POP EBP
// 0055948d: POP EDI
// 0055948e: POP ESI
// 0055948f: POP EBX
// 00559490: RET
