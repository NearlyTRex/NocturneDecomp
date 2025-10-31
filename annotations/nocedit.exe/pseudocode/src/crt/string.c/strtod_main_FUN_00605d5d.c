// Name: crt_string.c_strtod_main_FUN_00605d5d
// Address: 00605d5d
// Address Range: [[00605d5d, 00605e42]]
// Convention: __cdecl
// Signature: double crt_string.c_strtod_main_FUN_00605d5d(char * str, char * * endptr)
// Cross-references:
//   crt_string.c_strtod_FUN_005ff0f3 (005ff0f3) at 005ff0ff [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00603bc9 (00603bc9) at 00603bd5 [UNCONDITIONAL_CALL]
// Globals:
//   double g_PositiveInfinity = +Infinity
//   undefined4 g_PositiveInfinity+4
// Function calls:
//   crt_math.c_set_range_error_errno_FUN_006027ac
//   crt_string.c_parseFloatString_FUN_00605b9b

#include "nocturne.h"

double __cdecl crt_string_c_strtod_main_FUN_00605d5d(char *str,char **endptr)

{
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  BADSPACEBASE *in_ESP;
  char *in_stack_00000004;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  byte bStack_2b;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  iVar4 = crt_string_c_parseFloatString_FUN_00605b9b(in_stack_00000004,&local_34,(char **)str);
  if (iVar4 == 0) {
    uVar5 = 0;
    uVar1 = 0;
LAB_00605d83:
    local_28 = (double)CONCAT44(uVar5,uVar1);
    return local_28;
  }
  uVar6 = (uint)(CONCAT11(bStack_2b,uStack_2c) & 0x7fff);
  if (0x43fe < uVar6) {
    local_34 = 0x605da2;
    crt_math_c_set_range_error_errno_FUN_006027ac();
    uVar5 = g_PositiveInfinity._4_4_;
    uVar1 = g_PositiveInfinity._0_4_;
    if ((bStack_2b & 0x80) != 0) {
      return -(double)CONCAT44(g_PositiveInfinity._4_4_,g_PositiveInfinity._0_4_);
    }
    goto LAB_00605d83;
  }
  if (uVar6 < 0x3bcd) {
    if ((int)uVar6 < -0x34) {
      local_34 = 0x605dda;
      crt_math_c_set_range_error_errno_FUN_006027ac();
      return 0.0;
    }
    local_28 = (double)(float10)CONCAT19(bStack_2b,CONCAT18(uStack_2c,CONCAT44(uStack_30,local_34)))
    ;
    dVar2 = (double)CONCAT44(local_18._4_4_,(undefined4)local_18);
    dVar3 = local_28;
    if ((((ulonglong)local_28 & 0x7fffffff00000000) == 0) &&
       (local_20 = local_28, local_18 = (double)CONCAT44(local_18._4_4_,(undefined4)local_18),
       dVar3 = local_28, (int)local_28 == 0)) goto LAB_00605e33;
  }
  else {
    local_28 = (double)(float10)CONCAT19(bStack_2b,CONCAT18(uStack_2c,CONCAT44(uStack_30,local_34)))
    ;
    dVar2 = local_28;
    dVar3 = (double)CONCAT44(local_20._4_4_,(undefined4)local_20);
    if (iVar4 == 3) goto LAB_00605e33;
  }
  local_20 = dVar3;
  local_18 = dVar2;
  if (((ulonglong)local_28 & 0x7ff0000000000000) != 0) {
    return local_28;
  }
LAB_00605e33:
  local_34 = 0x605e38;
  crt_math_c_set_range_error_errno_FUN_006027ac();
  return local_28;
}


// Assembly code:
// 00605d5d: PUSH EBP
//   Label: crt_string.c_strtod_main_FUN_00605d5d
// 00605d5e: MOV EBP,ESP
// 00605d60: PUSH EBX
// 00605d61: PUSH ESI
// 00605d62: PUSH EDI
// 00605d63: SUB ESP,0x24
// 00605d66: MOV EDX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00605d69: PUSH EDX
// 00605d6a: LEA EAX,[EBP + -0x30]
//   XREF to: Stack[-0x34] (DATA)
// 00605d6d: PUSH EAX
// 00605d6e: MOV EBX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00605d71: PUSH EBX
// 00605d72: CALL crt_string.c_parseFloatString_FUN_00605b9b
//   XREF to: 00605b9b (UNCONDITIONAL_CALL)
// 00605d77: MOV EBX,EAX
// 00605d79: ADD ESP,0xc
// 00605d7c: TEST EAX,EAX
// 00605d7e: JNZ 0x00605d8b
//   XREF to: 00605d8b (CONDITIONAL_JUMP)
// 00605d80: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00605d83: MOV dword ptr [EBP + -0x20],EAX
//   Label: LAB_00605d83
//   XREF to: Stack[-0x24] (WRITE)
// 00605d86: JMP 0x00605e38
//   XREF to: 00605e38 (UNCONDITIONAL_JUMP)
// 00605d8b: MOV EAX,dword ptr [EBP + -0x28]
//   Label: LAB_00605d8b
//   XREF to: Stack[-0x2c] (READ)
// 00605d8e: AND AH,0x7f
// 00605d91: AND EAX,0xffff
// 00605d96: CMP EAX,0x43ff
// 00605d9b: JL 0x00605dc7
//   XREF to: 00605dc7 (CONDITIONAL_JUMP)
// 00605d9d: CALL crt_math.c_set_range_error_errno_FUN_006027ac
//   XREF to: 006027ac (UNCONDITIONAL_CALL)
// 00605da2: TEST byte ptr [EBP + -0x27],0x80
//   XREF to: Stack[-0x2b] (READ)
// 00605da6: JZ 0x00605db8
//   XREF to: 00605db8 (CONDITIONAL_JUMP)
// 00605da8: FLD double ptr [0x00665f30]
//   XREF to: 00665f30 (READ)
// 00605dae: FCHS
// 00605db0: FSTP double ptr [EBP + -0x24]
//   XREF to: Stack[-0x28] (WRITE)
// 00605db3: JMP 0x00605e38
//   XREF to: 00605e38 (UNCONDITIONAL_JUMP)
// 00605db8: MOV EAX,[0x00665f30]
//   Label: LAB_00605db8
//   XREF to: 00665f30 (READ)
// 00605dbd: MOV dword ptr [EBP + -0x24],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00605dc0: MOV EAX,[0x00665f34]
//   XREF to: 00665f34 (READ)
// 00605dc5: JMP 0x00605d83
//   XREF to: 00605d83 (UNCONDITIONAL_JUMP)
// 00605dc7: CMP EAX,0x3bcd
//   Label: LAB_00605dc7
// 00605dcc: JGE 0x00605e10
//   XREF to: 00605e10 (CONDITIONAL_JUMP)
// 00605dce: CMP EAX,-0x34
// 00605dd1: JGE 0x00605de2
//   XREF to: 00605de2 (CONDITIONAL_JUMP)
// 00605dd3: XOR EDI,EDI
// 00605dd5: CALL crt_math.c_set_range_error_errno_FUN_006027ac
//   XREF to: 006027ac (UNCONDITIONAL_CALL)
// 00605dda: MOV dword ptr [EBP + -0x24],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 00605ddd: MOV dword ptr [EBP + -0x20],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 00605de0: JMP 0x00605e38
//   XREF to: 00605e38 (UNCONDITIONAL_JUMP)
// 00605de2: LEA EDX,[EBP + -0x24]
//   Label: LAB_00605de2
//   XREF to: Stack[-0x28] (DATA)
// 00605de5: LEA EAX,[EBP + -0x30]
//   XREF to: Stack[-0x34] (DATA)
// 00605de8: FLD extended double ptr [EAX]
//   XREF to: Stack[-0x34] (DATA)
// 00605dea: FSTP double ptr [EDX]
//   XREF to: Stack[-0x28] (DATA)
// 00605dec: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x28] (READ)
// 00605def: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00605df2: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x24] (READ)
// 00605df5: MOV ESI,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x28] (READ)
// 00605df8: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00605dfb: TEST EAX,0x7fffffff
// 00605e00: JNZ 0x00605e06
//   XREF to: 00605e06 (CONDITIONAL_JUMP)
// 00605e02: TEST ESI,ESI
// 00605e04: JZ 0x00605e33
//   XREF to: 00605e33 (CONDITIONAL_JUMP)
// 00605e06: TEST word ptr [EBP + -0x16],0x7ff0
//   Label: LAB_00605e06
//   XREF to: Stack[-0x1a] (READ)
// 00605e0c: JNZ 0x00605e38
//   XREF to: 00605e38 (CONDITIONAL_JUMP)
// 00605e0e: JMP 0x00605e33
//   XREF to: 00605e33 (UNCONDITIONAL_JUMP)
// 00605e10: LEA EDX,[EBP + -0x24]
//   Label: LAB_00605e10
//   XREF to: Stack[-0x28] (DATA)
// 00605e13: LEA EAX,[EBP + -0x30]
//   XREF to: Stack[-0x34] (DATA)
// 00605e16: FLD extended double ptr [EAX]
//   XREF to: Stack[-0x34] (DATA)
// 00605e18: FSTP double ptr [EDX]
//   XREF to: Stack[-0x28] (DATA)
// 00605e1a: CMP EBX,0x3
// 00605e1d: JZ 0x00605e33
//   XREF to: 00605e33 (CONDITIONAL_JUMP)
// 00605e1f: MOV EAX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x28] (READ)
// 00605e22: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00605e25: MOV EAX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x24] (READ)
// 00605e28: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00605e2b: TEST word ptr [EBP + -0xe],0x7ff0
//   XREF to: Stack[-0x12] (READ)
// 00605e31: JNZ 0x00605e38
//   XREF to: 00605e38 (CONDITIONAL_JUMP)
// 00605e33: CALL crt_math.c_set_range_error_errno_FUN_006027ac
//   Label: LAB_00605e33
//   XREF to: 006027ac (UNCONDITIONAL_CALL)
// 00605e38: MOV EAX,dword ptr [EBP + -0x24]
//   Label: LAB_00605e38
//   XREF to: Stack[-0x28] (READ)
// 00605e3b: MOV EDX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x24] (READ)
// 00605e3e: JMP 0x00605d55
//   XREF to: 00605d55 (UNCONDITIONAL_JUMP)
