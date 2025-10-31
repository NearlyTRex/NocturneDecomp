// Name: crt_unknown.c_FUN_00600002
// Address: 00600002
// Address Range: [[00600002, 006000ce]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00600002()
// Cross-references:
//   shape_design.c_exportModelToBIN_FUN_0045aa80 (0045aa80) at 0045adc4 [UNCONDITIONAL_CALL]
// Globals:
//   double g_PositiveInfinity = +Infinity
//   undefined4 g_PositiveInfinity+4
// Function calls:
//   crt_math.c_set_range_error_errno_FUN_006027ac

#include "nocturne.h"

/* Signature: undefined1 FUN_00600002(undefined4 param_1, undefined4 param_2, undefined4 param_3) */

undefined8 crt_unknown_c_FUN_00600002(void)

{
  double dVar1;
  int in_stack_00000004;
  uint in_stack_00000008;
  int in_stack_0000000c;
  undefined2 local_20;
  ushort uStack_1e;
  undefined2 local_1c;
  undefined2 uStack_1a;
  undefined4 uStack_18;
  
  local_20 = (undefined2)in_stack_00000008;
  uStack_1e = (ushort)(in_stack_00000008 >> 0x10);
  if (((in_stack_00000008 & 0x7fffffff) != 0) || (in_stack_00000004 != 0)) {
    if (in_stack_0000000c < 0x3e81) {
      if (in_stack_0000000c < -16000) {
        in_stack_0000000c = -16000;
      }
    }
    else {
      in_stack_0000000c = 16000;
    }
    in_stack_0000000c = ((int)(short)(uStack_1e & 0x7ff0) >> 4) + in_stack_0000000c;
    if (in_stack_0000000c < 1) {
      local_1c = 0;
      uStack_1a = 0;
      uStack_18 = 0;
      goto LAB_006000b6;
    }
    if (0x7fe < in_stack_0000000c) {
      crt_math_c_set_range_error_errno_FUN_006027ac();
      if ((short)uStack_1e < 1) {
        dVar1 = -(double)CONCAT44(g_PositiveInfinity._4_4_,g_PositiveInfinity._0_4_);
        local_1c = SUB82(dVar1,0);
        uStack_1a = (undefined2)((ulonglong)dVar1 >> 0x10);
        uStack_18 = (undefined4)((ulonglong)dVar1 >> 0x20);
      }
      else {
        local_1c = (undefined2)g_PositiveInfinity._0_4_;
        uStack_1a = (undefined2)((uint)g_PositiveInfinity._0_4_ >> 0x10);
        uStack_18 = g_PositiveInfinity._4_4_;
      }
      goto LAB_006000b6;
    }
    uStack_1e = uStack_1e & 0x800f | (short)in_stack_0000000c * 0x10;
  }
  local_1c = (undefined2)in_stack_00000004;
  uStack_1a = (undefined2)((uint)in_stack_00000004 >> 0x10);
  uStack_18 = CONCAT22(uStack_1e,local_20);
LAB_006000b6:
  return CONCAT44(uStack_18,CONCAT22(uStack_1a,local_1c));
}


// Assembly code:
// 00600002: PUSH EBP
//   Label: crt_unknown.c_FUN_00600002
// 00600003: MOV EBP,ESP
// 00600005: PUSH EBX
// 00600006: PUSH ESI
// 00600007: SUB ESP,0x18
// 0060000a: MOV EDX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0060000d: MOV EAX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00600010: MOV dword ptr [EBP + -0x20],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00600013: MOV EAX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00600016: MOV ECX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00600019: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0060001c: TEST EAX,0x7fffffff
// 00600021: JNZ 0x0060002b
//   XREF to: 0060002b (CONDITIONAL_JUMP)
// 00600023: TEST ECX,ECX
// 00600025: JZ 0x006000aa
//   XREF to: 006000aa (CONDITIONAL_JUMP)
// 0060002b: MOV EAX,dword ptr [EBP + -0x1a]
//   Label: LAB_0060002b
//   XREF to: Stack[-0x1e] (READ)
// 0060002e: AND EAX,0x7ff0
// 00600033: CWDE
// 00600034: SAR EAX,0x4
// 00600037: CMP EDX,0x3e80
// 0060003d: JLE 0x00600046
//   XREF to: 00600046 (CONDITIONAL_JUMP)
// 0060003f: MOV EDX,0x3e80
// 00600044: JMP 0x00600053
//   XREF to: 00600053 (UNCONDITIONAL_JUMP)
// 00600046: CMP EDX,0xffffc180
//   Label: LAB_00600046
// 0060004c: JGE 0x00600053
//   XREF to: 00600053 (CONDITIONAL_JUMP)
// 0060004e: MOV EDX,0xffffc180
// 00600053: ADD EAX,EDX
//   Label: LAB_00600053
// 00600055: TEST EAX,EAX
// 00600057: JG 0x00600063
//   XREF to: 00600063 (CONDITIONAL_JUMP)
// 00600059: XOR ESI,ESI
// 0060005b: MOV dword ptr [EBP + -0x18],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 0060005e: MOV dword ptr [EBP + -0x14],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 00600061: JMP 0x006000b6
//   XREF to: 006000b6 (UNCONDITIONAL_JUMP)
// 00600063: CMP EAX,0x7ff
//   Label: LAB_00600063
// 00600068: JL 0x00600092
//   XREF to: 00600092 (CONDITIONAL_JUMP)
// 0060006a: CALL crt_math.c_set_range_error_errno_FUN_006027ac
//   XREF to: 006027ac (UNCONDITIONAL_CALL)
// 0060006f: CMP word ptr [EBP + -0x1a],0x0
//   XREF to: Stack[-0x1e] (READ)
// 00600074: JLE 0x00600085
//   XREF to: 00600085 (CONDITIONAL_JUMP)
// 00600076: MOV EAX,[0x00665f30]
//   XREF to: 00665f30 (READ)
// 0060007b: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0060007e: MOV EAX,[0x00665f34]
//   XREF to: 00665f34 (READ)
// 00600083: JMP 0x006000b3
//   XREF to: 006000b3 (UNCONDITIONAL_JUMP)
// 00600085: FLD double ptr [0x00665f30]
//   Label: LAB_00600085
//   XREF to: 00665f30 (READ)
// 0060008b: FCHS
// 0060008d: FSTP double ptr [EBP + -0x18]
//   XREF to: Stack[-0x1c] (WRITE)
// 00600090: JMP 0x006000b6
//   XREF to: 006000b6 (UNCONDITIONAL_JUMP)
// 00600092: MOV EDX,dword ptr [EBP + -0x1a]
//   Label: LAB_00600092
//   XREF to: Stack[-0x1e] (READ)
// 00600095: AND EDX,0x800f
// 0060009b: SHL EAX,0x4
// 0060009e: MOV EBX,EDX
// 006000a0: MOV word ptr [EBP + -0x1a],DX
//   XREF to: Stack[-0x1e] (WRITE)
// 006000a4: OR EBX,EAX
// 006000a6: MOV word ptr [EBP + -0x1a],BX
//   XREF to: Stack[-0x1e] (WRITE)
// 006000aa: MOV EAX,dword ptr [EBP + -0x20]
//   Label: LAB_006000aa
//   XREF to: Stack[-0x24] (READ)
// 006000ad: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 006000b0: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x20] (READ)
// 006000b3: MOV dword ptr [EBP + -0x14],EAX
//   Label: LAB_006000b3
//   XREF to: Stack[-0x18] (WRITE)
// 006000b6: MOV EAX,dword ptr [EBP + -0x18]
//   Label: LAB_006000b6
//   XREF to: Stack[-0x1c] (READ)
// 006000b9: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 006000bc: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x18] (READ)
// 006000bf: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 006000c2: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (READ)
// 006000c5: MOV EDX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x10] (READ)
// 006000c8: LEA ESP,[EBP + -0x8]
//   XREF to: Stack[-0xc] (DATA)
// 006000cb: POP ESI
// 006000cc: POP EBX
// 006000cd: POP EBP
// 006000ce: RET
