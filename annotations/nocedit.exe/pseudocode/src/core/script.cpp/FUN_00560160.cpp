// Name: core_script.cpp_FUN_00560160
// Address: 00560160
// Address Range: [[00560160, 005601b6]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00560160()
// Cross-references:
//   core_script.cpp_CScript_checkInitSection_FUN_0055a6c0 (0055a6c0) at 0055a702 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055a9b5 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565d00 (00565d00) at 00565deb [UNCONDITIONAL_CALL]
// Function calls:
//   core_script.cpp_FUN_005593d0
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00560160(CScript* param_1, undefined4 param_2) */

int core_script_cpp_FUN_00560160(void)

{
  char *str1;
  int iVar1;
  int iVar2;
  char *unaff_EBP;
  int iVar3;
  int in_stack_00000004;
  
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x30)) {
    iVar3 = 0;
    do {
      if (**(char **)(iVar3 + 4 + *(int *)(in_stack_00000004 + 0x34)) == ':') {
        str1 = (char *)core_script_cpp_FUN_005593d0();
        iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1,unaff_EBP);
        if (iVar1 == 0) {
          return iVar2;
        }
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0x30));
  }
  return -1;
}


// Assembly code:
// 00560160: PUSH EBX
//   Label: core_script.cpp_FUN_00560160
// 00560161: PUSH ESI
// 00560162: PUSH EDI
// 00560163: PUSH EBP
// 00560164: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00560168: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0056016c: MOV EDX,dword ptr [EDI + 0x30]
// 0056016f: XOR EBX,EBX
// 00560171: TEST EDX,EDX
// 00560173: JLE 0x0056018e
//   XREF to: 0056018e (CONDITIONAL_JUMP)
// 00560175: XOR ESI,ESI
// 00560177: MOV EAX,dword ptr [EDI + 0x34]
//   Label: LAB_00560177
// 0056017a: MOV EAX,dword ptr [ESI + EAX*0x1 + 0x4]
// 0056017e: CMP byte ptr [EAX],0x3a
// 00560181: JZ 0x00560198
//   XREF to: 00560198 (CONDITIONAL_JUMP)
// 00560183: INC EBX
//   Label: LAB_00560183
// 00560184: MOV ECX,dword ptr [EDI + 0x30]
// 00560187: ADD ESI,0x8
// 0056018a: CMP EBX,ECX
// 0056018c: JL 0x00560177
//   XREF to: 00560177 (CONDITIONAL_JUMP)
// 0056018e: MOV EAX,0xffffffff
//   Label: LAB_0056018e
// 00560193: POP EBP
// 00560194: POP EDI
// 00560195: POP ESI
// 00560196: POP EBX
// 00560197: RET
// 00560198: PUSH EBP
//   Label: LAB_00560198
// 00560199: INC EAX
// 0056019a: PUSH EAX
// 0056019b: CALL core_script.cpp_FUN_005593d0
//   XREF to: 005593d0 (UNCONDITIONAL_CALL)
// 005601a0: ADD ESP,0x4
// 005601a3: PUSH EAX
// 005601a4: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005601a9: ADD ESP,0x8
// 005601ac: TEST EAX,EAX
// 005601ae: JNZ 0x00560183
//   XREF to: 00560183 (CONDITIONAL_JUMP)
// 005601b0: MOV EAX,EBX
// 005601b2: POP EBP
// 005601b3: POP EDI
// 005601b4: POP ESI
// 005601b5: POP EBX
// 005601b6: RET
