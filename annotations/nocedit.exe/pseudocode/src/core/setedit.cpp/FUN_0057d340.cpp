// Name: core_setedit.cpp_FUN_0057d340
// Address: 0057d340
// Address Range: [[0057d340, 0057d654]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_0057d340()
// Cross-references:
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057f413 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057df1a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sn_00647dca
//   TerminatedCString s_ss_00647dce
//   TerminatedCString s_se_00647dd2
//   TerminatedCString s_sw_00647dd6
//   TerminatedCString s_su_00647dda
//   TerminatedCString s_sd_00647dde
//   double DOUBLE_00647de5 = 18
// Function calls:
//   core_setedit.cpp_WriteActBackdrop_FUN_0057ce80
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

/* Signature: undefined1 core_setedit.cpp_FUN_0057d340(undefined1 param_1, undefined4 param_2) */

void core_setedit_cpp_FUN_0057d340(void)

{
  BADSPACEBASE *in_ESP;
  int in_stack_00000008;
  
  if (*(int *)(in_stack_00000008 + 0x140) != 0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffee0,"%sn",in_stack_00000008);
    core_setedit_cpp_WriteActBackdrop_FUN_0057ce80();
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffee0,"%ss");
    core_setedit_cpp_WriteActBackdrop_FUN_0057ce80();
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffee0,"%se");
    core_setedit_cpp_WriteActBackdrop_FUN_0057ce80();
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffee0,"%sw");
    core_setedit_cpp_WriteActBackdrop_FUN_0057ce80();
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffee0,"%su");
    core_setedit_cpp_WriteActBackdrop_FUN_0057ce80();
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffee0,"%sd");
    core_setedit_cpp_WriteActBackdrop_FUN_0057ce80();
    return;
  }
  core_setedit_cpp_WriteActBackdrop_FUN_0057ce80();
  return;
}


// Assembly code:
// 0057d340: PUSH EBX
//   Label: core_setedit.cpp_FUN_0057d340
// 0057d341: PUSH ESI
// 0057d342: PUSH EDI
// 0057d343: PUSH EBP
// 0057d344: MOV EBP,ESP
// 0057d346: SUB ESP,0x110
// 0057d34c: SUB EBP,0x7a
// 0057d34f: MOV EBX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0057d355: LEA EAX,[EBX + 0x100]
// 0057d35b: MOV EDX,dword ptr [EBX + 0x140]
// 0057d361: LEA EDI,[EBX + 0x108]
// 0057d367: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0057d36a: LEA ESI,[EBX + 0x104]
// 0057d370: TEST EDX,EDX
// 0057d372: JZ 0x0057d5e5
//   XREF to: 0057d5e5 (CONDITIONAL_JUMP)
// 0057d378: PUSH EBX
// 0057d379: PUSH 0x647dca
//   XREF to: 00647dca (DATA)
// 0057d37e: LEA EAX,[EBP + 0xffffff6a]
//   XREF to: Stack[-0x120] (DATA)
// 0057d384: PUSH EAX
// 0057d385: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057d38a: ADD ESP,0xc
// 0057d38d: PUSH 0x3f800000
// 0057d392: PUSH 0x1fe
// 0057d397: PUSH 0x1fe
// 0057d39c: PUSH 0x1fc
// 0057d3a1: PUSH 0x1fc
// 0057d3a6: LEA EAX,[EBP + 0xffffff6a]
//   XREF to: Stack[-0x120] (DATA)
// 0057d3ac: XOR ECX,ECX
// 0057d3ae: PUSH EAX
// 0057d3af: LEA EAX,[EBP + -0x1a]
//   XREF to: Stack[-0xa4] (DATA)
// 0057d3b2: MOV dword ptr [EBP + -0x1a],ECX
//   XREF to: Stack[-0xa4] (WRITE)
// 0057d3b5: PUSH EAX
// 0057d3b6: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 0057d3b9: MOV dword ptr [EBP + -0x12],ECX
//   XREF to: Stack[-0x9c] (WRITE)
// 0057d3bc: MOV dword ptr [EBP + -0x16],ECX
//   XREF to: Stack[-0xa0] (WRITE)
// 0057d3bf: MOV EAX,dword ptr [EAX]
// 0057d3c1: MOV dword ptr [EBP + -0xe],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 0057d3c4: MOV EAX,dword ptr [ESI]
// 0057d3c6: MOV dword ptr [EBP + -0xa],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 0057d3c9: MOV EAX,dword ptr [EDI]
// 0057d3cb: MOV dword ptr [EBP + -0x6],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 0057d3ce: LEA EAX,[EBP + -0xe]
//   XREF to: Stack[-0x98] (DATA)
// 0057d3d1: PUSH EAX
// 0057d3d2: CALL core_setedit.cpp_WriteActBackdrop_FUN_0057ce80
//   XREF to: 0057ce80 (UNCONDITIONAL_CALL)
// 0057d3d7: ADD ESP,0x20
// 0057d3da: PUSH EBX
// 0057d3db: PUSH 0x647dce
//   XREF to: 00647dce (DATA)
// 0057d3e0: LEA EAX,[EBP + 0xffffff6a]
//   XREF to: Stack[-0x120] (DATA)
// 0057d3e6: PUSH EAX
// 0057d3e7: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057d3ec: ADD ESP,0xc
// 0057d3ef: PUSH 0x3f800000
// 0057d3f4: PUSH 0x1fe
// 0057d3f9: PUSH 0x1fe
// 0057d3fe: PUSH 0x1fc
// 0057d403: LEA EAX,[EBP + 0xffffff6a]
//   XREF to: Stack[-0x120] (DATA)
// 0057d409: PUSH 0x1fc
// 0057d40e: MOV EDX,0x40490fdb
// 0057d413: XOR ECX,ECX
// 0057d415: PUSH EAX
// 0057d416: LEA EAX,[EBP + -0x2]
//   XREF to: Stack[-0x8c] (DATA)
// 0057d419: MOV dword ptr [EBP + -0x2],ECX
//   XREF to: Stack[-0x8c] (WRITE)
// 0057d41c: PUSH EAX
// 0057d41d: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 0057d420: MOV dword ptr [EBP + 0x6],ECX
//   XREF to: Stack[-0x84] (WRITE)
// 0057d423: MOV dword ptr [EBP + 0x2],EDX
//   XREF to: Stack[-0x88] (WRITE)
// 0057d426: MOV EAX,dword ptr [EAX]
// 0057d428: MOV dword ptr [EBP + 0x16],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 0057d42b: MOV EAX,dword ptr [ESI]
// 0057d42d: MOV dword ptr [EBP + 0x1a],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 0057d430: MOV EAX,dword ptr [EDI]
// 0057d432: MOV dword ptr [EBP + 0x1e],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 0057d435: LEA EAX,[EBP + 0x16]
//   XREF to: Stack[-0x74] (DATA)
// 0057d438: PUSH EAX
// 0057d439: CALL core_setedit.cpp_WriteActBackdrop_FUN_0057ce80
//   XREF to: 0057ce80 (UNCONDITIONAL_CALL)
// 0057d43e: ADD ESP,0x20
// 0057d441: PUSH EBX
// 0057d442: PUSH 0x647dd2
//   XREF to: 00647dd2 (DATA)
// 0057d447: LEA EAX,[EBP + 0xffffff6a]
//   XREF to: Stack[-0x120] (DATA)
// 0057d44d: PUSH EAX
// 0057d44e: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057d453: ADD ESP,0xc
// 0057d456: PUSH 0x3f800000
// 0057d45b: PUSH 0x1fe
// 0057d460: PUSH 0x1fe
// 0057d465: LEA EAX,[EBP + 0xffffff6a]
//   XREF to: Stack[-0x120] (DATA)
// 0057d46b: PUSH 0x1fc
// 0057d470: MOV EDX,0x3fc90fdb
// 0057d475: XOR ECX,ECX
// 0057d477: PUSH 0x1fc
// 0057d47c: MOV dword ptr [EBP + 0x52],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 0057d47f: MOV dword ptr [EBP + 0x5a],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 0057d482: PUSH EAX
// 0057d483: LEA EAX,[EBP + 0x52]
//   XREF to: Stack[-0x38] (DATA)
// 0057d486: MOV dword ptr [EBP + 0x56],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 0057d489: PUSH EAX
// 0057d48a: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 0057d48d: MOV EAX,dword ptr [EAX]
// 0057d48f: MOV dword ptr [EBP + 0x22],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 0057d492: MOV EAX,dword ptr [ESI]
// 0057d494: MOV dword ptr [EBP + 0x26],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 0057d497: MOV EAX,dword ptr [EDI]
// 0057d499: MOV dword ptr [EBP + 0x2a],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 0057d49c: LEA EAX,[EBP + 0x22]
//   XREF to: Stack[-0x68] (DATA)
// 0057d49f: PUSH EAX
// 0057d4a0: CALL core_setedit.cpp_WriteActBackdrop_FUN_0057ce80
//   XREF to: 0057ce80 (UNCONDITIONAL_CALL)
// 0057d4a5: ADD ESP,0x20
// 0057d4a8: PUSH EBX
// 0057d4a9: PUSH 0x647dd6
//   XREF to: 00647dd6 (DATA)
// 0057d4ae: LEA EAX,[EBP + 0xffffff6a]
//   XREF to: Stack[-0x120] (DATA)
// 0057d4b4: PUSH EAX
// 0057d4b5: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057d4ba: ADD ESP,0xc
// 0057d4bd: PUSH 0x3f800000
// 0057d4c2: PUSH 0x1fe
// 0057d4c7: PUSH 0x1fe
// 0057d4cc: PUSH 0x1fc
// 0057d4d1: LEA EAX,[EBP + 0xffffff6a]
//   XREF to: Stack[-0x120] (DATA)
// 0057d4d7: PUSH 0x1fc
// 0057d4dc: MOV EDX,0xbfc90fdb
// 0057d4e1: XOR ECX,ECX
// 0057d4e3: PUSH EAX
// 0057d4e4: LEA EAX,[EBP + 0xa]
//   XREF to: Stack[-0x80] (DATA)
// 0057d4e7: MOV dword ptr [EBP + 0xa],ECX
//   XREF to: Stack[-0x80] (WRITE)
// 0057d4ea: PUSH EAX
// 0057d4eb: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 0057d4ee: MOV dword ptr [EBP + 0x12],ECX
//   XREF to: Stack[-0x78] (WRITE)
// 0057d4f1: MOV dword ptr [EBP + 0xe],EDX
//   XREF to: Stack[-0x7c] (WRITE)
// 0057d4f4: MOV EAX,dword ptr [EAX]
// 0057d4f6: MOV dword ptr [EBP + -0x26],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 0057d4f9: MOV EAX,dword ptr [ESI]
// 0057d4fb: MOV dword ptr [EBP + -0x22],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 0057d4fe: MOV EAX,dword ptr [EDI]
// 0057d500: MOV dword ptr [EBP + -0x1e],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 0057d503: LEA EAX,[EBP + -0x26]
//   XREF to: Stack[-0xb0] (DATA)
// 0057d506: PUSH EAX
// 0057d507: CALL core_setedit.cpp_WriteActBackdrop_FUN_0057ce80
//   XREF to: 0057ce80 (UNCONDITIONAL_CALL)
// 0057d50c: ADD ESP,0x20
// 0057d50f: PUSH EBX
// 0057d510: PUSH 0x647dda
//   XREF to: 00647dda (DATA)
// 0057d515: LEA EAX,[EBP + 0xffffff6a]
//   XREF to: Stack[-0x120] (DATA)
// 0057d51b: PUSH EAX
// 0057d51c: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057d521: ADD ESP,0xc
// 0057d524: PUSH 0x3f800000
// 0057d529: PUSH 0x1fe
// 0057d52e: PUSH 0x1fe
// 0057d533: PUSH 0x1fc
// 0057d538: PUSH 0x1fc
// 0057d53d: LEA EAX,[EBP + 0xffffff6a]
//   XREF to: Stack[-0x120] (DATA)
// 0057d543: PUSH EAX
// 0057d544: XOR EAX,EAX
// 0057d546: MOV dword ptr [EBP + 0x42],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0057d549: MOV dword ptr [EBP + 0x3e],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0057d54c: LEA EAX,[EBP + 0x3a]
//   XREF to: Stack[-0x50] (DATA)
// 0057d54f: MOV ECX,0xbfc90fdb
// 0057d554: PUSH EAX
// 0057d555: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 0057d558: MOV dword ptr [EBP + 0x3a],ECX
//   XREF to: Stack[-0x50] (WRITE)
// 0057d55b: MOV EAX,dword ptr [EAX]
// 0057d55d: MOV dword ptr [EBP + 0x2e],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 0057d560: MOV EAX,dword ptr [ESI]
// 0057d562: MOV dword ptr [EBP + 0x32],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0057d565: MOV EAX,dword ptr [EDI]
// 0057d567: MOV dword ptr [EBP + 0x36],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0057d56a: LEA EAX,[EBP + 0x2e]
//   XREF to: Stack[-0x5c] (DATA)
// 0057d56d: PUSH EAX
// 0057d56e: CALL core_setedit.cpp_WriteActBackdrop_FUN_0057ce80
//   XREF to: 0057ce80 (UNCONDITIONAL_CALL)
// 0057d573: ADD ESP,0x20
// 0057d576: PUSH EBX
// 0057d577: PUSH 0x647dde
//   XREF to: 00647dde (DATA)
// 0057d57c: LEA EAX,[EBP + 0xffffff6a]
//   XREF to: Stack[-0x120] (DATA)
// 0057d582: PUSH EAX
// 0057d583: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057d588: ADD ESP,0xc
// 0057d58b: PUSH 0x3f800000
// 0057d590: PUSH 0x1fe
// 0057d595: PUSH 0x1fe
// 0057d59a: PUSH 0x1fc
// 0057d59f: XOR EBX,EBX
// 0057d5a1: PUSH 0x1fc
// 0057d5a6: LEA EAX,[EBP + 0xffffff6a]
//   XREF to: Stack[-0x120] (DATA)
// 0057d5ac: MOV ECX,0x3fc90fdb
// 0057d5b1: PUSH EAX
// 0057d5b2: LEA EAX,[EBP + 0x6a]
//   XREF to: Stack[-0x20] (DATA)
// 0057d5b5: MOV dword ptr [EBP + 0x72],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 0057d5b8: PUSH EAX
// 0057d5b9: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 0057d5bc: MOV dword ptr [EBP + 0x6e],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0057d5bf: MOV dword ptr [EBP + 0x6a],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0057d5c2: MOV EAX,dword ptr [EAX]
// 0057d5c4: MOV dword ptr [EBP + 0x46],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0057d5c7: MOV EAX,dword ptr [ESI]
// 0057d5c9: MOV dword ptr [EBP + 0x4a],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0057d5cc: MOV EAX,dword ptr [EDI]
// 0057d5ce: MOV dword ptr [EBP + 0x4e],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0057d5d1: LEA EAX,[EBP + 0x46]
//   XREF to: Stack[-0x44] (DATA)
// 0057d5d4: PUSH EAX
// 0057d5d5: CALL core_setedit.cpp_WriteActBackdrop_FUN_0057ce80
//   XREF to: 0057ce80 (UNCONDITIONAL_CALL)
// 0057d5da: ADD ESP,0x20
// 0057d5dd: LEA ESP,[EBP + 0x7a]
//   XREF to: Stack[-0x10] (DATA)
// 0057d5e0: POP EBP
// 0057d5e1: POP EDI
// 0057d5e2: POP ESI
// 0057d5e3: POP EBX
// 0057d5e4: RET
// 0057d5e5: FLD float ptr [EBX + 0x144]
//   Label: LAB_0057d5e5
// 0057d5eb: FDIVR double ptr [0x00647de5]
//   XREF to: 00647de5 (READ)
// 0057d5f1: SUB ESP,0x4
// 0057d5f4: FSTP float ptr [ESP]
//   XREF to: Stack[-0x124] (DATA)
// 0057d5f7: PUSH 0x1df
// 0057d5fc: PUSH 0x27f
// 0057d601: PUSH 0x1e0
// 0057d606: PUSH 0x280
// 0057d60b: MOV EAX,dword ptr [EBX + 0x10c]
// 0057d611: PUSH EBX
// 0057d612: ADD EBX,0x10c
// 0057d618: MOV dword ptr [EBP + -0x32],EAX
//   XREF to: Stack[-0xbc] (WRITE)
// 0057d61b: LEA EAX,[EBX + 0x4]
// 0057d61e: MOV EAX,dword ptr [EAX]
// 0057d620: MOV dword ptr [EBP + -0x2e],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 0057d623: LEA EAX,[EBX + 0x8]
// 0057d626: MOV EAX,dword ptr [EAX]
// 0057d628: MOV dword ptr [EBP + -0x2a],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 0057d62b: LEA EAX,[EBP + -0x32]
//   XREF to: Stack[-0xbc] (DATA)
// 0057d62e: PUSH EAX
// 0057d62f: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 0057d632: MOV EAX,dword ptr [EAX]
// 0057d634: MOV dword ptr [EBP + 0x5e],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0057d637: MOV EAX,dword ptr [ESI]
// 0057d639: MOV dword ptr [EBP + 0x62],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0057d63c: MOV EAX,dword ptr [EDI]
// 0057d63e: MOV dword ptr [EBP + 0x66],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0057d641: LEA EAX,[EBP + 0x5e]
//   XREF to: Stack[-0x2c] (DATA)
// 0057d644: PUSH EAX
// 0057d645: CALL core_setedit.cpp_WriteActBackdrop_FUN_0057ce80
//   XREF to: 0057ce80 (UNCONDITIONAL_CALL)
// 0057d64a: ADD ESP,0x20
// 0057d64d: LEA ESP,[EBP + 0x7a]
//   XREF to: Stack[-0x10] (DATA)
// 0057d650: POP EBP
// 0057d651: POP EDI
// 0057d652: POP ESI
// 0057d653: POP EBX
// 0057d654: RET
