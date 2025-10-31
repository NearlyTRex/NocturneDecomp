// Name: core_event.cpp_FUN_004addf0
// Address: 004addf0
// Address Range: [[004addf0, 004ae11a]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004addf0()
// Cross-references:
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da997 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Game_Flag_s_006252c4
//   TerminatedCString s_Persistent_s_006252d2
//   TerminatedCString s_Timer_5_2f_s_006252e1
//   TerminatedCString s_s_d_006252f1
//   TerminatedCString s_s_s_006252f7
//   TerminatedCString s_s_s_1f_006252fd
// Function calls:
//   core_event.cpp_FUN_004b0db0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_drawText_FUN_00401fd0

#include "nocturne.h"

/* Signature: undefined1 core_event.cpp_FUN_004addf0(undefined4 param_1) */

void core_event_cpp_FUN_004addf0(void)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  int iVar3;
  char *text;
  int in_stack_00000004;
  char acStack_2e4 [4];
  char local_2e0 [196];
  char acStack_21c [4];
  char local_218 [204];
  char acStack_14c [4];
  char acStack_148 [88];
  char acStack_f0 [4];
  char local_ec [96];
  char acStack_8c [4];
  char local_88 [100];
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar1 = 0x2c;
  iVar3 = 0;
  iVar2 = iVar1;
  if (0 < *(int *)(in_stack_00000004 + 0x1908)) {
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(local_218,"Game Flag: %s");
      iVar3 = iVar3 + 1;
      iVar2 = iVar1 + 0xb;
      engine_2d_c_drawText_FUN_00401fd0(acStack_21c,0,iVar1);
      iVar1 = iVar2;
    } while (iVar3 < *(int *)(in_stack_00000004 + 0x1908));
  }
  iVar3 = 0;
  iVar1 = iVar2;
  if (0 < *(int *)(in_stack_00000004 + 0x258c)) {
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffc58,"Persistent: %s");
      iVar3 = iVar3 + 1;
      iVar1 = iVar2 + 0xb;
      engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffc54,0,iVar2);
      iVar2 = iVar1;
    } while (iVar3 < *(int *)(in_stack_00000004 + 0x258c));
  }
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x3210)) {
    local_24 = in_stack_00000004;
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_2e0,"Timer: %5.2f %s",local_2e0,"Timer: %5.2f %s",
                 (double)*(float *)(local_24 + 0x3354));
      iVar2 = iVar2 + 1;
      engine_2d_c_drawText_FUN_00401fd0(acStack_2e4,0,iVar1);
      iVar1 = iVar1 + 0xb;
      local_24 = local_24 + 4;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0x3210));
  }
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0xc84)) {
    text = (char *)(in_stack_00000004 + 0xc88);
    iVar3 = iVar1;
    do {
      iVar2 = iVar2 + 1;
      iVar1 = iVar3 + 0xb;
      engine_2d_c_drawText_FUN_00401fd0(text,0,iVar3);
      text = text + 0x20;
      iVar3 = iVar1;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0xc84));
  }
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x337c)) {
    local_1c = in_stack_00000004 + 0x3380;
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(local_88,"%s=%d");
      engine_2d_c_drawText_FUN_00401fd0(acStack_8c,0,iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xb;
      local_1c = local_1c + 0x20;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0x337c));
  }
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x34e8)) {
    local_18 = in_stack_00000004 + 0x34ec;
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(local_ec,"%s=%s");
      iVar2 = iVar2 + 1;
      engine_2d_c_drawText_FUN_00401fd0(acStack_f0,0,iVar1);
      iVar1 = iVar1 + 0xb;
      local_18 = local_18 + 0x1e;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0x34e8));
  }
  core_event_cpp_FUN_004b0db0();
  if (0 < *(int *)(in_stack_00000004 + 0x3ac8)) {
    local_1c = in_stack_00000004 + 0x3ad0;
    iVar2 = in_stack_00000004 + 0x3ae4;
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_14c,"%s=%s %.1f",local_1c,iVar2);
      iVar2 = iVar2 + 0x120;
      engine_2d_c_drawText_FUN_00401fd0(acStack_148,0,iVar1);
      local_14 = local_14 + 0x120;
      unaff_ESI = unaff_ESI + 1;
      iVar1 = iVar1 + 0xb;
    } while (unaff_ESI < *(int *)(in_stack_00000004 + 0x3ac8));
  }
  return;
}


// Assembly code:
// 004addf0: PUSH EBX
//   Label: core_event.cpp_FUN_004addf0
// 004addf1: PUSH ESI
// 004addf2: PUSH EDI
// 004addf3: PUSH EBP
// 004addf4: SUB ESP,0x398
// 004addfa: MOV ESI,dword ptr [ESP + 0x3ac]
//   XREF to: Stack[0x4] (READ)
// 004ade01: MOV EBX,0x2c
// 004ade06: MOV EDX,dword ptr [ESI + 0x1908]
// 004ade0c: XOR EDI,EDI
// 004ade0e: TEST EDX,EDX
// 004ade10: JLE 0x004ade60
//   XREF to: 004ade60 (CONDITIONAL_JUMP)
// 004ade12: LEA EBP,[ESI + 0x190c]
// 004ade18: PUSH EBP
//   Label: LAB_004ade18
// 004ade19: PUSH 0x6252c4
//   XREF to: 006252c4 (DATA)
// 004ade1e: LEA EAX,[ESP + 0x198]
//   XREF to: Stack[-0x218] (DATA)
// 004ade25: PUSH EAX
// 004ade26: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004ade2b: ADD ESP,0xc
// 004ade2e: PUSH EBX
// 004ade2f: PUSH 0x0
// 004ade31: LEA EAX,[ESP + 0x198]
//   XREF to: Stack[-0x218] (DATA)
// 004ade38: INC EDI
// 004ade39: PUSH EAX
// 004ade3a: ADD EBP,0x20
// 004ade3d: ADD EBX,0xb
// 004ade40: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004ade45: MOV ECX,dword ptr [ESI + 0x1908]
// 004ade4b: ADD ESP,0xc
// 004ade4e: CMP EDI,ECX
// 004ade50: JL 0x004ade18
//   XREF to: 004ade18 (CONDITIONAL_JUMP)
// 004ade52: LEA EAX,[EAX]
// 004ade58: LEA EDX,[EDX]
// 004ade5e: MOV EAX,EAX
// 004ade60: MOV EDI,dword ptr [ESI + 0x258c]
//   Label: LAB_004ade60
// 004ade66: XOR EBP,EBP
// 004ade68: TEST EDI,EDI
// 004ade6a: JLE 0x004adeb0
//   XREF to: 004adeb0 (CONDITIONAL_JUMP)
// 004ade6c: LEA EDI,[ESI + 0x2590]
// 004ade72: PUSH EDI
//   Label: LAB_004ade72
// 004ade73: PUSH 0x6252d2
//   XREF to: 006252d2 (DATA)
// 004ade78: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x3a8] (DATA)
// 004ade7c: PUSH EAX
// 004ade7d: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004ade82: ADD ESP,0xc
// 004ade85: PUSH EBX
// 004ade86: PUSH 0x0
// 004ade88: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x3a8] (DATA)
// 004ade8c: INC EBP
// 004ade8d: PUSH EAX
// 004ade8e: ADD EDI,0x20
// 004ade91: ADD EBX,0xb
// 004ade94: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004ade99: MOV EAX,dword ptr [ESI + 0x258c]
// 004ade9f: ADD ESP,0xc
// 004adea2: CMP EBP,EAX
// 004adea4: JL 0x004ade72
//   XREF to: 004ade72 (CONDITIONAL_JUMP)
// 004adea6: LEA EAX,[EAX]
// 004adeac: LEA EDX,[EDX]
// 004adeb0: MOV EDX,dword ptr [ESI + 0x3210]
//   Label: LAB_004adeb0
// 004adeb6: XOR EDI,EDI
// 004adeb8: TEST EDX,EDX
// 004adeba: JLE 0x004adf30
//   XREF to: 004adf30 (CONDITIONAL_JUMP)
// 004adec0: LEA EBP,[ESI + 0x3214]
// 004adec6: MOV dword ptr [ESP + 0x384],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 004adecd: PUSH EBP
//   Label: LAB_004adecd
// 004adece: MOV EAX,dword ptr [ESP + 0x388]
//   XREF to: Stack[-0x24] (READ)
// 004aded5: SUB ESP,0x8
// 004aded8: FLD float ptr [EAX + 0x3354]
// 004adede: FSTP double ptr [ESP]
//   XREF to: Stack[-0x3b4] (DATA)
// 004adee1: PUSH 0x6252e1
//   XREF to: 006252e1 (DATA)
// 004adee6: LEA EAX,[ESP + 0xd8]
//   XREF to: Stack[-0x2e0] (DATA)
// 004adeed: PUSH EAX
// 004adeee: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004adef3: ADD ESP,0x14
// 004adef6: PUSH EBX
// 004adef7: PUSH 0x0
// 004adef9: LEA EAX,[ESP + 0xd0]
//   XREF to: Stack[-0x2e0] (DATA)
// 004adf00: PUSH EAX
// 004adf01: INC EDI
// 004adf02: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004adf07: ADD ESP,0xc
// 004adf0a: ADD EBP,0x20
// 004adf0d: MOV ECX,dword ptr [ESP + 0x384]
//   XREF to: Stack[-0x24] (READ)
// 004adf14: ADD EBX,0xb
// 004adf17: ADD ECX,0x4
// 004adf1a: MOV EAX,dword ptr [ESI + 0x3210]
// 004adf20: MOV dword ptr [ESP + 0x384],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 004adf27: CMP EDI,EAX
// 004adf29: JL 0x004adecd
//   XREF to: 004adecd (CONDITIONAL_JUMP)
// 004adf2b: LEA EAX,[EAX]
// 004adf2e: MOV ECX,ECX
// 004adf30: MOV EDX,dword ptr [ESI + 0xc84]
//   Label: LAB_004adf30
// 004adf36: XOR EBP,EBP
// 004adf38: TEST EDX,EDX
// 004adf3a: JLE 0x004adf60
//   XREF to: 004adf60 (CONDITIONAL_JUMP)
// 004adf3c: LEA EDI,[ESI + 0xc88]
// 004adf42: PUSH EBX
//   Label: LAB_004adf42
// 004adf43: PUSH 0x0
// 004adf45: PUSH EDI
// 004adf46: INC EBP
// 004adf47: ADD EBX,0xb
// 004adf4a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004adf4f: ADD ESP,0xc
// 004adf52: MOV ECX,dword ptr [ESI + 0xc84]
// 004adf58: ADD EDI,0x20
// 004adf5b: CMP EBP,ECX
// 004adf5d: JL 0x004adf42
//   XREF to: 004adf42 (CONDITIONAL_JUMP)
// 004adf5f: NOP
// 004adf60: MOV EDI,dword ptr [ESI + 0x337c]
//   Label: LAB_004adf60
// 004adf66: XOR EBP,EBP
// 004adf68: TEST EDI,EDI
// 004adf6a: JLE 0x004adfe0
//   XREF to: 004adfe0 (CONDITIONAL_JUMP)
// 004adf6c: LEA EAX,[ESI + 0x3380]
// 004adf72: MOV dword ptr [ESP + 0x38c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004adf79: MOV EDI,ESI
// 004adf7b: MOV EAX,dword ptr [EDI + 0x34c0]
//   Label: LAB_004adf7b
// 004adf81: PUSH EAX
// 004adf82: MOV EDX,dword ptr [ESP + 0x390]
//   XREF to: Stack[-0x1c] (READ)
// 004adf89: PUSH EDX
// 004adf8a: PUSH 0x6252f1
//   XREF to: 006252f1 (DATA)
// 004adf8f: LEA EAX,[ESP + 0x32c]
//   XREF to: Stack[-0x88] (DATA)
// 004adf96: PUSH EAX
// 004adf97: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004adf9c: ADD ESP,0x10
// 004adf9f: PUSH EBX
// 004adfa0: PUSH 0x0
// 004adfa2: LEA EAX,[ESP + 0x328]
//   XREF to: Stack[-0x88] (DATA)
// 004adfa9: PUSH EAX
// 004adfaa: ADD EDI,0x4
// 004adfad: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004adfb2: ADD ESP,0xc
// 004adfb5: INC EBP
// 004adfb6: MOV ECX,dword ptr [ESP + 0x38c]
//   XREF to: Stack[-0x1c] (READ)
// 004adfbd: ADD EBX,0xb
// 004adfc0: ADD ECX,0x20
// 004adfc3: MOV EAX,dword ptr [ESI + 0x337c]
// 004adfc9: MOV dword ptr [ESP + 0x38c],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 004adfd0: CMP EBP,EAX
// 004adfd2: JL 0x004adf7b
//   XREF to: 004adf7b (CONDITIONAL_JUMP)
// 004adfd4: LEA EAX,[EAX]
// 004adfda: LEA EDX,[EDX]
// 004adfe0: MOV EDX,dword ptr [ESI + 0x34e8]
//   Label: LAB_004adfe0
// 004adfe6: XOR EBP,EBP
// 004adfe8: TEST EDX,EDX
// 004adfea: JLE 0x004ae060
//   XREF to: 004ae060 (CONDITIONAL_JUMP)
// 004adfec: LEA EDI,[ESI + 0x37da]
// 004adff2: LEA EAX,[ESI + 0x34ec]
// 004adff8: MOV dword ptr [ESP + 0x390],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004adfff: PUSH EDI
//   Label: LAB_004adfff
// 004ae000: MOV ECX,dword ptr [ESP + 0x394]
//   XREF to: Stack[-0x18] (READ)
// 004ae007: PUSH ECX
// 004ae008: PUSH 0x6252f7
//   XREF to: 006252f7 (DATA)
// 004ae00d: LEA EAX,[ESP + 0x2c8]
//   XREF to: Stack[-0xec] (DATA)
// 004ae014: PUSH EAX
// 004ae015: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004ae01a: ADD ESP,0x10
// 004ae01d: PUSH EBX
// 004ae01e: PUSH 0x0
// 004ae020: LEA EAX,[ESP + 0x2c4]
//   XREF to: Stack[-0xec] (DATA)
// 004ae027: PUSH EAX
// 004ae028: INC EBP
// 004ae029: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004ae02e: ADD ESP,0xc
// 004ae031: ADD EDI,0x1e
// 004ae034: MOV EAX,dword ptr [ESP + 0x390]
//   XREF to: Stack[-0x18] (READ)
// 004ae03b: ADD EBX,0xb
// 004ae03e: ADD EAX,0x1e
// 004ae041: MOV EDX,dword ptr [ESI + 0x34e8]
// 004ae047: MOV dword ptr [ESP + 0x390],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004ae04e: CMP EBP,EDX
// 004ae050: JL 0x004adfff
//   XREF to: 004adfff (CONDITIONAL_JUMP)
// 004ae052: LEA EAX,[EAX]
// 004ae058: LEA EDX,[EDX]
// 004ae05e: MOV EAX,EAX
// 004ae060: PUSH ESI
//   Label: LAB_004ae060
// 004ae061: CALL core_event.cpp_FUN_004b0db0
//   XREF to: 004b0db0 (UNCONDITIONAL_CALL)
// 004ae066: ADD ESP,0x4
// 004ae069: XOR ECX,ECX
// 004ae06b: MOV EDI,dword ptr [ESI + 0x3ac8]
// 004ae071: MOV dword ptr [ESP + 0x394],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 004ae078: TEST EDI,EDI
// 004ae07a: JLE 0x004ae110
//   XREF to: 004ae110 (CONDITIONAL_JUMP)
// 004ae080: LEA EAX,[ESI + 0x3ad0]
// 004ae086: LEA EBP,[ESI + 0x3ae4]
// 004ae08c: MOV dword ptr [ESP + 0x388],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004ae093: MOV EDI,ESI
// 004ae095: MOV EAX,dword ptr [EDI + 0x3be8]
//   Label: LAB_004ae095
// 004ae09b: PUSH EAX
// 004ae09c: MOV EDX,dword ptr [EDI + 0x3be4]
// 004ae0a2: PUSH EDX
// 004ae0a3: PUSH EBP
// 004ae0a4: MOV ECX,dword ptr [ESP + 0x394]
//   XREF to: Stack[-0x20] (READ)
// 004ae0ab: PUSH ECX
// 004ae0ac: PUSH 0x6252fd
//   XREF to: 006252fd (DATA)
// 004ae0b1: LEA EAX,[ESP + 0x26c]
//   XREF to: Stack[-0x150] (DATA)
// 004ae0b8: PUSH EAX
// 004ae0b9: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004ae0be: ADD ESP,0x18
// 004ae0c1: PUSH EBX
// 004ae0c2: PUSH 0x0
// 004ae0c4: LEA EAX,[ESP + 0x260]
//   XREF to: Stack[-0x150] (DATA)
// 004ae0cb: ADD EDI,0x120
// 004ae0d1: PUSH EAX
// 004ae0d2: ADD EBP,0x120
// 004ae0d8: ADD EBX,0xb
// 004ae0db: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004ae0e0: ADD ESP,0xc
// 004ae0e3: MOV ECX,dword ptr [ESI + 0x3ac8]
// 004ae0e9: MOV EAX,dword ptr [ESP + 0x388]
//   XREF to: Stack[-0x20] (READ)
// 004ae0f0: MOV EDX,dword ptr [ESP + 0x394]
//   XREF to: Stack[-0x14] (READ)
// 004ae0f7: ADD EAX,0x120
// 004ae0fc: INC EDX
// 004ae0fd: MOV dword ptr [ESP + 0x388],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004ae104: MOV dword ptr [ESP + 0x394],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004ae10b: CMP EDX,ECX
// 004ae10d: JL 0x004ae095
//   XREF to: 004ae095 (CONDITIONAL_JUMP)
// 004ae10f: NOP
// 004ae110: ADD ESP,0x398
//   Label: LAB_004ae110
// 004ae116: POP EBP
// 004ae117: POP EDI
// 004ae118: POP ESI
// 004ae119: POP EBX
// 004ae11a: RET
