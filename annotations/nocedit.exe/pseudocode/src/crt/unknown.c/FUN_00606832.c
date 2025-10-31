// Name: crt_unknown.c_FUN_00606832
// Address: 00606832
// Address Range: [[00606832, 006068d7]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606832()
// Cross-references:
//   crt_math.c_pow_FUN_005ffd76 (005ffd76) at 005ffd98 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_math.c_process_math_error_FUN_0060bf2d

#include "nocturne.h"

/* Signature: undefined1 FUN_00606832(undefined8 param_1, undefined8 param_2, undefined1 param_3) */

undefined8 crt_unknown_c_FUN_00606832(void)

{
  int errorFlags;
  BADSPACEBASE *in_ESP;
  double dVar1;
  double in_stack_00000004;
  double in_stack_0000000c;
  byte in_stack_00000014;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  if (in_stack_00000014 < 2) {
    if (in_stack_00000014 == 0) {
      if (0.0 < in_stack_0000000c) {
        local_18 = 0;
        local_14 = 0;
        goto LAB_006068c0;
      }
      if (0.0 <= in_stack_0000000c) {
        errorFlags = 0x4047;
      }
      else {
        errorFlags = 0x8047;
      }
    }
    else {
      errorFlags = 0x2047;
    }
  }
  else {
    if (in_stack_0000000c <= 0.0) {
      local_18 = 0;
      local_14 = 0;
      goto LAB_006068c0;
    }
    if (in_stack_00000004 <= 0.0) {
      errorFlags = 0x1107;
    }
    else {
      errorFlags = 0x8107;
    }
  }
  dVar1 = crt_math_c_process_math_error_FUN_0060bf2d(errorFlags,&stack0x00000004,&stack0x0000000c);
  local_10._0_4_ = SUB84(dVar1,0);
  local_18 = (undefined4)local_10;
  local_10._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
  local_14 = local_10._4_4_;
LAB_006068c0:
  local_10 = CONCAT44(local_14,local_18);
  return local_10;
}


// Assembly code:
// 00606832: PUSH EBP
//   Label: crt_unknown.c_FUN_00606832
// 00606833: MOV EBP,ESP
// 00606835: PUSH ECX
// 00606836: SUB ESP,0x10
// 00606839: MOV AH,byte ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 0060683c: CMP AH,0x1
// 0060683f: JA 0x00606873
//   XREF to: 00606873 (CONDITIONAL_JUMP)
// 00606841: TEST AH,AH
// 00606843: JNZ 0x0060686c
//   XREF to: 0060686c (CONDITIONAL_JUMP)
// 00606845: FLDZ
// 00606847: FCOMP double ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0060684a: FNSTSW AX
// 0060684c: SAHF
// 0060684d: JNC 0x0060685c
//   XREF to: 0060685c (CONDITIONAL_JUMP)
// 0060684f: XOR ECX,ECX
// 00606851: MOV dword ptr [EBP + -0x14],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00606854: MOV dword ptr [EBP + -0x10],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00606857: JMP 0x006068c0
//   XREF to: 006068c0 (UNCONDITIONAL_JUMP)
// 0060685c: JBE 0x00606865
//   Label: LAB_0060685c
//   XREF to: 00606865 (CONDITIONAL_JUMP)
// 0060685e: MOV EAX,0x8047
// 00606863: JMP 0x0060689d
//   XREF to: 0060689d (UNCONDITIONAL_JUMP)
// 00606865: MOV EAX,0x4047
//   Label: LAB_00606865
// 0060686a: JMP 0x0060689d
//   XREF to: 0060689d (UNCONDITIONAL_JUMP)
// 0060686c: MOV EAX,0x2047
//   Label: LAB_0060686c
// 00606871: JMP 0x0060689d
//   XREF to: 0060689d (UNCONDITIONAL_JUMP)
// 00606873: FLDZ
//   Label: LAB_00606873
// 00606875: FCOMP double ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00606878: FNSTSW AX
// 0060687a: SAHF
// 0060687b: JC 0x00606887
//   XREF to: 00606887 (CONDITIONAL_JUMP)
// 0060687d: XOR EDX,EDX
// 0060687f: MOV dword ptr [EBP + -0x14],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00606882: MOV dword ptr [EBP + -0x10],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00606885: JMP 0x006068c0
//   XREF to: 006068c0 (UNCONDITIONAL_JUMP)
// 00606887: FLDZ
//   Label: LAB_00606887
// 00606889: FCOMP double ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060688c: FNSTSW AX
// 0060688e: SAHF
// 0060688f: JNC 0x00606898
//   XREF to: 00606898 (CONDITIONAL_JUMP)
// 00606891: MOV EAX,0x8107
// 00606896: JMP 0x0060689d
//   XREF to: 0060689d (UNCONDITIONAL_JUMP)
// 00606898: MOV EAX,0x1107
//   Label: LAB_00606898
// 0060689d: LEA EDX,[EBP + 0x10]
//   Label: LAB_0060689d
//   XREF to: Stack[0xc] (DATA)
// 006068a0: PUSH EDX
// 006068a1: LEA EDX,[EBP + 0x8]
//   XREF to: Stack[0x4] (DATA)
// 006068a4: PUSH EDX
// 006068a5: PUSH EAX
// 006068a6: CALL crt_math.c_process_math_error_FUN_0060bf2d
//   XREF to: 0060bf2d (UNCONDITIONAL_CALL)
// 006068ab: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 006068ae: MOV dword ptr [EBP + -0x8],EDX
//   XREF to: Stack[-0xc] (WRITE)
// 006068b1: ADD ESP,0xc
// 006068b4: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x10] (READ)
// 006068b7: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 006068ba: MOV EAX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0xc] (READ)
// 006068bd: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 006068c0: MOV EAX,dword ptr [EBP + -0x14]
//   Label: LAB_006068c0
//   XREF to: Stack[-0x18] (READ)
// 006068c3: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 006068c6: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x14] (READ)
// 006068c9: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 006068cc: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x10] (READ)
// 006068cf: MOV EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0xc] (READ)
// 006068d2: LEA ESP,[EBP + -0x4]
//   XREF to: Stack[-0x8] (DATA)
// 006068d5: POP ECX
// 006068d6: POP EBP
// 006068d7: RET
