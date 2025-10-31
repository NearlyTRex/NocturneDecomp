// Name: core_script.cpp_CheckingActorVariableName_FUN_00559220
// Address: 00559220
// Address Range: [[00559220, 005592b8]]
// Convention: unknown
// Signature: undefined core_script.cpp_CheckingActorVariableName_FUN_00559220()
// Cross-references:
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055c3ac [UNCONDITIONAL_CALL]
//   core_script.cpp_GetDemonActor_FUN_005594e0 (005594e0) at 00559504 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Actor_variable_name_must_006414a8
//   TerminatedCString s_Actor_variable_name_s_is_006414d0
//   TerminatedCString s_Actor_variable_name_s_is_006414f5
//   char[256] g_CharacterClassificationTable
//   undefined1 DAT_0310eca0
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_CheckingActorVariableName(undefined4 param_1) */

undefined4 core_script_cpp_CheckingActorVariableName_FUN_00559220(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  char *in_stack_00000004;
  
  if (*in_stack_00000004 == '@') {
    uVar3 = 0xffffffff;
    pcVar2 = in_stack_00000004;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 < 0x1f) {
      iVar4 = 1;
      pcVar2 = in_stack_00000004;
      while ((pcVar2 = pcVar2 + 1,
             (g_CharacterClassificationTable[(byte)(*pcVar2 + 1)] & 0xe0U) != 0 || (*pcVar2 == '_'))
            ) {
        iVar4 = iVar4 + 1;
      }
      if ((iVar4 != 1) && (*pcVar2 == '\0')) {
        return 1;
      }
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&DAT_0310eca0,"Actor variable name \"%s\" is not valid",in_stack_00000004);
      return 0;
    }
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&DAT_0310eca0,"Actor variable name \"%s\" is too long",in_stack_00000004);
  }
  else {
    crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0310eca0,"Actor variable name must begin with '@'");
  }
  return 0;
}


// Assembly code:
// 00559220: PUSH EBX
//   Label: core_script.cpp_CheckingActorVariableName_FUN_00559220
// 00559221: PUSH ESI
// 00559222: PUSH EDI
// 00559223: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00559227: CMP byte ptr [ESI],0x40
// 0055922a: JNZ 0x0055925a
//   XREF to: 0055925a (CONDITIONAL_JUMP)
// 0055922c: MOV EDI,ESI
// 0055922e: SUB ECX,ECX
// 00559230: DEC ECX
// 00559231: XOR EAX,EAX
// 00559233: SCASB.REPNE ES:EDI
// 00559235: NOT ECX
// 00559237: DEC ECX
// 00559238: CMP ECX,0x1e
// 0055923b: JA 0x00559272
//   XREF to: 00559272 (CONDITIONAL_JUMP)
// 0055923d: MOV EDX,0x1
// 00559242: LEA EAX,[ESI + EDX*0x1]
// 00559245: MOV BL,byte ptr [EAX]
//   Label: LAB_00559245
// 00559247: XOR ECX,ECX
// 00559249: INC BL
// 0055924b: MOV CL,BL
// 0055924d: TEST byte ptr [ECX + 0x6849c4],0xe0
//   XREF to: 006849c4 (DATA)
// 00559254: JZ 0x00559287
//   XREF to: 00559287 (CONDITIONAL_JUMP)
// 00559256: INC EDX
//   Label: LAB_00559256
// 00559257: INC EAX
// 00559258: JMP 0x00559245
//   XREF to: 00559245 (UNCONDITIONAL_JUMP)
// 0055925a: PUSH 0x6414a8
//   Label: LAB_0055925a
//   XREF to: 006414a8 (DATA)
// 0055925f: PUSH 0x310eca0
//   XREF to: 0310eca0 (DATA)
// 00559264: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00559269: ADD ESP,0x8
// 0055926c: XOR EAX,EAX
//   Label: LAB_0055926c
// 0055926e: POP EDI
// 0055926f: POP ESI
// 00559270: POP EBX
// 00559271: RET
// 00559272: PUSH ESI
//   Label: LAB_00559272
// 00559273: PUSH 0x6414d0
//   XREF to: 006414d0 (DATA)
// 00559278: PUSH 0x310eca0
//   XREF to: 0310eca0 (DATA)
// 0055927d: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00559282: ADD ESP,0xc
// 00559285: JMP 0x0055926c
//   XREF to: 0055926c (UNCONDITIONAL_JUMP)
// 00559287: MOV BH,byte ptr [EAX]
//   Label: LAB_00559287
// 00559289: CMP BH,0x5f
// 0055928c: JZ 0x00559256
//   XREF to: 00559256 (CONDITIONAL_JUMP)
// 0055928e: CMP EDX,0x1
// 00559291: JZ 0x005592a0
//   XREF to: 005592a0 (CONDITIONAL_JUMP)
// 00559293: TEST BH,BH
// 00559295: JNZ 0x005592a0
//   XREF to: 005592a0 (CONDITIONAL_JUMP)
// 00559297: MOV EAX,0x1
// 0055929c: POP EDI
// 0055929d: POP ESI
// 0055929e: POP EBX
// 0055929f: RET
// 005592a0: PUSH ESI
//   Label: LAB_005592a0
// 005592a1: PUSH 0x6414f5
//   XREF to: 006414f5 (DATA)
// 005592a6: PUSH 0x310eca0
//   XREF to: 0310eca0 (DATA)
// 005592ab: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005592b0: ADD ESP,0xc
// 005592b3: XOR EAX,EAX
// 005592b5: POP EDI
// 005592b6: POP ESI
// 005592b7: POP EBX
// 005592b8: RET
