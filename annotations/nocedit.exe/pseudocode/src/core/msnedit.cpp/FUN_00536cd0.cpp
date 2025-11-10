// Name: core_msnedit.cpp_FUN_00536cd0
// Address: 00536cd0
// Address Range: [[00536cd0, 00536e11]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_00536cd0()
// Cross-references:
//   core_msnedit.cpp_FUN_00536e20 (00536e20) at 00537081 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 005398c0 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0063b6ec = 0.300000000000000
//   CEdButton* g_ActiveButton
//   int g_MouseX
//   int g_MouseY
//   int g_MouseButtonFlags
//   int g_ActiveRenderColor
//   undefined4 DAT_02f7c630
// Function calls:
//   engine_2d.c_drawLine_FUN_004011b0
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_getStringWidth_FUN_004018a0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_msnedit.cpp_FUN_00536cd0(undefined4 sSomeString, undefined4 param_2,
   undefined4 param_3, undefined4 param_4, undefined4 param_5) */

undefined4
core_msnedit_cpp_FUN_00536cd0
          (undefined4 param_1,undefined4 param_2,int unaff_EBX,undefined4 param_4,char *param_5,
          int param_6,int param_7,int param_8)

{
  int y1;
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int unaff_ESI;
  int x1;
  int unaff_EDI;
  
  iVar1 = engine_2d_c_getStringWidth_FUN_004018a0(param_5);
  y1 = param_7 + 0xb;
  engine_2d_c_drawText_FUN_00401fd0(param_5,param_6,param_7);
  if (-1 < param_6 + iVar1) {
    param_7 = param_7 + -2;
    x1 = param_6 + -2;
    g_ActiveRenderColor = param_6 + iVar1;
    engine_2d_c_drawLine_FUN_004011b0(x1,param_7,unaff_EBP,param_7);
    engine_2d_c_drawLine_FUN_004011b0(x1,y1,unaff_EDI,y1);
    engine_2d_c_drawLine_FUN_004011b0(x1,param_7,x1,y1);
    engine_2d_c_drawLine_FUN_004011b0(unaff_EBX,param_7,unaff_EBX,y1);
  }
  uVar2 = g_MouseButtonFlags & 1;
  if (((param_8 == 0) && (0.0 < _DAT_02f7c630)) && (_DAT_02f7c630 < (float)DOUBLE_0063b6ec)) {
    uVar2 = 0;
  }
  if ((unaff_ESI != 0) && (uVar2 != 0)) {
    if (param_8 != 0) {
      g_MouseButtonFlags = 0;
    }
    return 1;
  }
  return 0;
}


// Assembly code:
// 00536cd0: PUSH EBX
//   Label: core_msnedit.cpp_FUN_00536cd0
// 00536cd1: PUSH ESI
// 00536cd2: PUSH EDI
// 00536cd3: PUSH EBP
// 00536cd4: MOV EBP,ESP
// 00536cd6: SUB ESP,0x14
// 00536cd9: AND ESP,0xfffffff8
// 00536cdc: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00536cdf: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00536ce2: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00536ce5: PUSH EDX
// 00536ce6: CALL engine_2d.c_getStringWidth_FUN_004018a0
//   XREF to: 004018a0 (UNCONDITIONAL_CALL)
// 00536ceb: ADD ESP,0x4
// 00536cee: LEA EDI,[ESI + EAX*0x1]
// 00536cf1: MOV ECX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00536cf4: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 00536cf8: LEA EDI,[EBX + 0xb]
// 00536cfb: TEST ECX,ECX
// 00536cfd: JZ 0x00536dda
//   XREF to: 00536dda (CONDITIONAL_JUMP)
// 00536d03: MOV EAX,0x7
// 00536d08: MOV dword ptr [ESP + 0xc],EAX
//   Label: LAB_00536d08
//   XREF to: Stack[-0x1c] (WRITE)
// 00536d0c: XOR EAX,EAX
// 00536d0e: MOV EDX,dword ptr [0x02cf2b00]
//   XREF to: 02cf2b00 (READ)
// 00536d14: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00536d18: TEST EDX,EDX
// 00536d1a: JNZ 0x00536d47
//   XREF to: 00536d47 (CONDITIONAL_JUMP)
// 00536d1c: MOV ECX,dword ptr [0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 00536d22: CMP ESI,ECX
// 00536d24: JGE 0x00536d47
//   XREF to: 00536d47 (CONDITIONAL_JUMP)
// 00536d26: CMP ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 00536d2a: JGE 0x00536d47
//   XREF to: 00536d47 (CONDITIONAL_JUMP)
// 00536d2c: MOV ECX,dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 00536d32: CMP EBX,ECX
// 00536d34: JG 0x00536d47
//   XREF to: 00536d47 (CONDITIONAL_JUMP)
// 00536d36: CMP EDI,ECX
// 00536d38: JLE 0x00536d47
//   XREF to: 00536d47 (CONDITIONAL_JUMP)
// 00536d3a: MOV EDX,0x1
// 00536d3f: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00536d43: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00536d47: PUSH EBX
//   Label: LAB_00536d47
// 00536d48: PUSH ESI
// 00536d49: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00536d4c: PUSH EAX
// 00536d4d: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00536d52: ADD ESP,0xc
// 00536d55: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00536d59: TEST EDX,EDX
// 00536d5b: JL 0x00536da5
//   XREF to: 00536da5 (CONDITIONAL_JUMP)
// 00536d5d: SUB EBX,0x2
// 00536d60: PUSH EBX
// 00536d61: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 00536d65: PUSH ECX
// 00536d66: PUSH EBX
// 00536d67: SUB ESI,0x2
// 00536d6a: PUSH ESI
// 00536d6b: MOV dword ptr [0x02d02570],EDX
//   XREF to: 02d02570 (WRITE)
// 00536d71: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 00536d76: ADD ESP,0x10
// 00536d79: PUSH EDI
// 00536d7a: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 00536d7e: PUSH EAX
// 00536d7f: PUSH EDI
// 00536d80: PUSH ESI
// 00536d81: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 00536d86: ADD ESP,0x10
// 00536d89: PUSH EDI
// 00536d8a: PUSH ESI
// 00536d8b: PUSH EBX
// 00536d8c: PUSH ESI
// 00536d8d: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 00536d92: ADD ESP,0x10
// 00536d95: PUSH EDI
// 00536d96: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 00536d9a: PUSH EDX
// 00536d9b: PUSH EBX
// 00536d9c: PUSH EDX
// 00536d9d: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 00536da2: ADD ESP,0x10
// 00536da5: MOV EBX,dword ptr [0x02cf6a94]
//   Label: LAB_00536da5
//   XREF to: 02cf6a94 (READ)
// 00536dab: MOV ESI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00536dae: AND EBX,0x1
// 00536db1: TEST ESI,ESI
// 00536db3: JZ 0x00536de4
//   XREF to: 00536de4 (CONDITIONAL_JUMP)
// 00536db5: CMP dword ptr [ESP + 0x8],0x0
//   Label: LAB_00536db5
//   XREF to: Stack[-0x20] (READ)
// 00536dba: JZ 0x00536e09
//   XREF to: 00536e09 (CONDITIONAL_JUMP)
// 00536dbc: TEST EBX,EBX
// 00536dbe: JZ 0x00536e09
//   XREF to: 00536e09 (CONDITIONAL_JUMP)
// 00536dc0: CMP dword ptr [EBP + 0x20],0x0
//   XREF to: Stack[0x10] (READ)
// 00536dc4: JZ 0x00536dce
//   XREF to: 00536dce (CONDITIONAL_JUMP)
// 00536dc6: XOR EDX,EDX
// 00536dc8: MOV dword ptr [0x02cf6a94],EDX
//   XREF to: 02cf6a94 (WRITE)
// 00536dce: MOV EAX,0x1
//   Label: LAB_00536dce
// 00536dd3: MOV ESP,EBP
// 00536dd5: POP EBP
// 00536dd6: POP EDI
// 00536dd7: POP ESI
// 00536dd8: POP EBX
// 00536dd9: RET
// 00536dda: MOV EAX,0xffffffff
//   Label: LAB_00536dda
// 00536ddf: JMP 0x00536d08
//   XREF to: 00536d08 (UNCONDITIONAL_JUMP)
// 00536de4: FLDZ
//   Label: LAB_00536de4
// 00536de6: FLD float ptr [0x02f7c630]
//   XREF to: 02f7c630 (READ)
// 00536dec: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 00536def: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 00536df2: FNSTSW AX
// 00536df4: SAHF
// 00536df5: JNC 0x00536db5
//   XREF to: 00536db5 (CONDITIONAL_JUMP)
// 00536df7: FLD double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 00536dfa: FCOMP double ptr [0x0063b6ec]
//   XREF to: 0063b6ec (READ)
// 00536e00: FNSTSW AX
// 00536e02: SAHF
// 00536e03: JNC 0x00536db5
//   XREF to: 00536db5 (CONDITIONAL_JUMP)
// 00536e05: XOR EBX,EBX
// 00536e07: JMP 0x00536db5
//   XREF to: 00536db5 (UNCONDITIONAL_JUMP)
// 00536e09: XOR EAX,EAX
//   Label: LAB_00536e09
// 00536e0b: MOV ESP,EBP
// 00536e0d: POP EBP
// 00536e0e: POP EDI
// 00536e0f: POP ESI
// 00536e10: POP EBX
// 00536e11: RET
