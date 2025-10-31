// Name: shape_superopt.cpp_FUN_005d6c10
// Address: 005d6c10
// Address Range: [[005d6c10, 005d6f80]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d6c10()
// Cross-references:
//   shape_superopt.cpp_DeletingTJunctionsMaybe_FUN_005d47b0 (005d47b0) at 005d54e5 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00654562
//   undefined4 DAT_0065456a
// Function calls:
//   shape_superopt.cpp_FUN_005d66e0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 shape_superopt.cpp_FUN_005d6c10(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

undefined4 shape_superopt_cpp_FUN_005d6c10(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  double *pdVar8;
  undefined4 *puVar9;
  double *in_stack_00000004;
  double *in_stack_00000008;
  double *in_stack_0000000c;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58 [4];
  undefined4 local_48;
  undefined4 local_44;
  double local_40;
  double local_38;
  double local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (((*in_stack_00000004 == *in_stack_00000008) && (in_stack_00000004[1] == in_stack_00000008[1]))
     && (in_stack_00000004[2] == in_stack_00000008[2])) {
    return 1;
  }
  if (((*in_stack_00000004 == *in_stack_0000000c) && (in_stack_00000004[1] == in_stack_0000000c[1]))
     && (in_stack_00000004[2] == in_stack_0000000c[2])) {
    return 1;
  }
  if (*in_stack_00000008 < *in_stack_0000000c) {
    local_b0 = *(undefined4 *)in_stack_00000008;
    uVar6 = *(undefined4 *)((int)in_stack_00000008 + 4);
  }
  else {
    local_b0 = *(undefined4 *)in_stack_0000000c;
    uVar6 = *(undefined4 *)((int)in_stack_0000000c + 4);
  }
  if (in_stack_0000000c[1] <= in_stack_00000008[1]) {
    local_c0 = *(undefined4 *)(in_stack_0000000c + 1);
    uVar1 = *(undefined4 *)((int)in_stack_0000000c + 0xc);
  }
  else {
    local_c0 = *(undefined4 *)(in_stack_00000008 + 1);
    uVar1 = *(undefined4 *)((int)in_stack_00000008 + 0xc);
  }
  if (in_stack_0000000c[2] <= in_stack_00000008[2]) {
    local_f8 = *(undefined4 *)(in_stack_0000000c + 2);
    uVar2 = *(undefined4 *)((int)in_stack_0000000c + 0x14);
  }
  else {
    local_f8 = *(undefined4 *)(in_stack_00000008 + 2);
    uVar2 = *(undefined4 *)((int)in_stack_00000008 + 0x14);
  }
  if (*in_stack_00000008 <= *in_stack_0000000c) {
    local_a8 = *(undefined4 *)in_stack_0000000c;
    uVar3 = *(undefined4 *)((int)in_stack_0000000c + 4);
  }
  else {
    local_a8 = *(undefined4 *)in_stack_00000008;
    uVar3 = *(undefined4 *)((int)in_stack_00000008 + 4);
  }
  if (in_stack_00000008[1] <= in_stack_0000000c[1]) {
    local_f0 = *(undefined4 *)(in_stack_0000000c + 1);
    uVar4 = *(undefined4 *)((int)in_stack_0000000c + 0xc);
  }
  else {
    local_f0 = *(undefined4 *)(in_stack_00000008 + 1);
    uVar4 = *(undefined4 *)((int)in_stack_00000008 + 0xc);
  }
  if (in_stack_00000008[2] <= in_stack_0000000c[2]) {
    local_b8 = *(undefined4 *)(in_stack_0000000c + 2);
    uVar5 = *(undefined4 *)((int)in_stack_0000000c + 0x14);
  }
  else {
    local_b8 = *(undefined4 *)(in_stack_00000008 + 2);
    uVar5 = *(undefined4 *)((int)in_stack_00000008 + 0x14);
  }
  if ((((double)CONCAT44(uVar6,local_b0) + _DAT_00654562 <= *in_stack_00000004) &&
      (*in_stack_00000004 <= (double)CONCAT44(uVar3,local_a8) + _DAT_0065456a)) &&
     (((double)CONCAT44(uVar1,local_c0) + _DAT_00654562 <= in_stack_00000004[1] &&
      (((in_stack_00000004[1] <= (double)CONCAT44(uVar4,local_f0) + _DAT_0065456a &&
        ((double)CONCAT44(uVar2,local_f8) + _DAT_00654562 <= in_stack_00000004[2])) &&
       (in_stack_00000004[2] <= (double)CONCAT44(uVar5,local_b8) + _DAT_0065456a)))))) {
    local_a0 = *in_stack_00000004 - *in_stack_00000008;
    local_98 = in_stack_00000004[1] - in_stack_00000008[1];
    local_90 = in_stack_00000004[2] - in_stack_00000008[2];
    pdVar8 = &local_a0;
    puVar9 = local_58;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *(undefined4 *)pdVar8;
      pdVar8 = (double *)((int)pdVar8 + 4);
      puVar9 = puVar9 + 1;
    }
    local_88 = local_58[0];
    local_84 = local_58[1];
    local_80 = local_58[2];
    local_7c = local_58[3];
    local_78 = local_48;
    local_74 = local_44;
    local_40 = *in_stack_00000004 - *in_stack_0000000c;
    local_38 = in_stack_00000004[1] - in_stack_0000000c[1];
    local_30 = in_stack_00000004[2] - in_stack_0000000c[2];
    pdVar8 = &local_40;
    puVar9 = local_70;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *(undefined4 *)pdVar8;
      pdVar8 = (double *)((int)pdVar8 + 4);
      puVar9 = puVar9 + 1;
    }
    local_28 = local_70[0];
    local_24 = local_70[1];
    local_20 = local_70[2];
    local_1c = local_70[3];
    local_18 = local_60;
    local_14 = local_5c;
    uVar6 = shape_superopt_cpp_FUN_005d66e0();
    return uVar6;
  }
  return 0;
}


// Assembly code:
// 005d6c10: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d6c10
// 005d6c11: PUSH ESI
// 005d6c12: PUSH EDI
// 005d6c13: PUSH EBP
// 005d6c14: MOV EBP,ESP
// 005d6c16: SUB ESP,0xf0
// 005d6c1c: AND ESP,0xfffffff8
// 005d6c1f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d6c22: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d6c25: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d6c28: FLD double ptr [EBX]
// 005d6c2a: FCOMP double ptr [ECX]
// 005d6c2c: FNSTSW AX
// 005d6c2e: SAHF
// 005d6c2f: JZ 0x005d6d9b
//   XREF to: 005d6d9b (CONDITIONAL_JUMP)
// 005d6c35: FLD double ptr [EBX]
//   Label: LAB_005d6c35
// 005d6c37: FCOMP double ptr [EDX]
// 005d6c39: FNSTSW AX
// 005d6c3b: SAHF
// 005d6c3c: JZ 0x005d6dc5
//   XREF to: 005d6dc5 (CONDITIONAL_JUMP)
// 005d6c42: FLD double ptr [ECX]
//   Label: LAB_005d6c42
// 005d6c44: FCOMP double ptr [EDX]
// 005d6c46: FNSTSW AX
// 005d6c48: SAHF
// 005d6c49: JC 0x005d6def
//   XREF to: 005d6def (CONDITIONAL_JUMP)
// 005d6c4f: MOV EAX,dword ptr [EDX]
// 005d6c51: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 005d6c55: MOV EAX,dword ptr [EDX + 0x4]
// 005d6c58: MOV dword ptr [ESP + 0x54],EAX
//   Label: LAB_005d6c58
//   XREF to: Stack[-0xac] (WRITE)
// 005d6c5c: FLD double ptr [ESP + 0x50]
//   XREF to: Stack[-0xb0] (READ)
// 005d6c60: FADD double ptr [0x00654562]
//   XREF to: 00654562 (READ)
// 005d6c66: FLD double ptr [ECX + 0x8]
// 005d6c69: FXCH
// 005d6c6b: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0xe8] (WRITE)
// 005d6c6f: FCOMP double ptr [EDX + 0x8]
// 005d6c72: FNSTSW AX
// 005d6c74: SAHF
// 005d6c75: JNC 0x005d6dfd
//   XREF to: 005d6dfd (CONDITIONAL_JUMP)
// 005d6c7b: MOV EAX,dword ptr [ECX + 0x8]
// 005d6c7e: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0xc0] (WRITE)
// 005d6c82: MOV EAX,dword ptr [ECX + 0xc]
// 005d6c85: MOV dword ptr [ESP + 0x44],EAX
//   Label: LAB_005d6c85
//   XREF to: Stack[-0xbc] (WRITE)
// 005d6c89: FLD double ptr [ESP + 0x40]
//   XREF to: Stack[-0xc0] (READ)
// 005d6c8d: FADD double ptr [0x00654562]
//   XREF to: 00654562 (READ)
// 005d6c93: FLD double ptr [ECX + 0x10]
// 005d6c96: FXCH
// 005d6c98: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[-0xd8] (WRITE)
// 005d6c9c: FCOMP double ptr [EDX + 0x10]
// 005d6c9f: FNSTSW AX
// 005d6ca1: SAHF
// 005d6ca2: JNC 0x005d6e0c
//   XREF to: 005d6e0c (CONDITIONAL_JUMP)
// 005d6ca8: MOV EAX,dword ptr [ECX + 0x10]
// 005d6cab: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0xf8] (WRITE)
// 005d6caf: MOV EAX,dword ptr [ECX + 0x14]
// 005d6cb2: MOV dword ptr [ESP + 0xc],EAX
//   Label: LAB_005d6cb2
//   XREF to: Stack[-0xf4] (WRITE)
// 005d6cb6: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0xf8] (READ)
// 005d6cba: FADD double ptr [0x00654562]
//   XREF to: 00654562 (READ)
// 005d6cc0: FLD double ptr [ECX]
// 005d6cc2: FXCH
// 005d6cc4: FSTP double ptr [ESP]
//   XREF to: Stack[-0x100] (DATA)
// 005d6cc7: FCOMP double ptr [EDX]
// 005d6cc9: FNSTSW AX
// 005d6ccb: SAHF
// 005d6ccc: JBE 0x005d6e1b
//   XREF to: 005d6e1b (CONDITIONAL_JUMP)
// 005d6cd2: MOV EAX,dword ptr [ECX]
// 005d6cd4: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 005d6cd8: MOV EAX,dword ptr [ECX + 0x4]
// 005d6cdb: MOV dword ptr [ESP + 0x5c],EAX
//   Label: LAB_005d6cdb
//   XREF to: Stack[-0xa4] (WRITE)
// 005d6cdf: FLD double ptr [ESP + 0x58]
//   XREF to: Stack[-0xa8] (READ)
// 005d6ce3: FADD double ptr [0x0065456a]
//   XREF to: 0065456a (READ)
// 005d6ce9: FLD double ptr [ECX + 0x8]
// 005d6cec: FXCH
// 005d6cee: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0xe0] (WRITE)
// 005d6cf2: FCOMP double ptr [EDX + 0x8]
// 005d6cf5: FNSTSW AX
// 005d6cf7: SAHF
// 005d6cf8: JBE 0x005d6e29
//   XREF to: 005d6e29 (CONDITIONAL_JUMP)
// 005d6cfe: MOV EAX,dword ptr [ECX + 0x8]
// 005d6d01: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0xf0] (WRITE)
// 005d6d05: MOV EAX,dword ptr [ECX + 0xc]
// 005d6d08: MOV dword ptr [ESP + 0x14],EAX
//   Label: LAB_005d6d08
//   XREF to: Stack[-0xec] (WRITE)
// 005d6d0c: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0xf0] (READ)
// 005d6d10: FADD double ptr [0x0065456a]
//   XREF to: 0065456a (READ)
// 005d6d16: FLD double ptr [ECX + 0x10]
// 005d6d19: FXCH
// 005d6d1b: FSTP double ptr [ESP + 0x30]
//   XREF to: Stack[-0xd0] (WRITE)
// 005d6d1f: FCOMP double ptr [EDX + 0x10]
// 005d6d22: FNSTSW AX
// 005d6d24: SAHF
// 005d6d25: JBE 0x005d6e38
//   XREF to: 005d6e38 (CONDITIONAL_JUMP)
// 005d6d2b: MOV EAX,dword ptr [ECX + 0x10]
// 005d6d2e: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 005d6d32: MOV EAX,dword ptr [ECX + 0x14]
// 005d6d35: MOV dword ptr [ESP + 0x4c],EAX
//   Label: LAB_005d6d35
//   XREF to: Stack[-0xb4] (WRITE)
// 005d6d39: FLD double ptr [ESP + 0x48]
//   XREF to: Stack[-0xb8] (READ)
// 005d6d3d: FADD double ptr [0x0065456a]
//   XREF to: 0065456a (READ)
// 005d6d43: FLD double ptr [EBX]
// 005d6d45: FXCH
// 005d6d47: FSTP double ptr [ESP + 0x38]
//   XREF to: Stack[-0xc8] (WRITE)
// 005d6d4b: FCOMP double ptr [ESP + 0x18]
//   XREF to: Stack[-0xe8] (READ)
// 005d6d4f: FNSTSW AX
// 005d6d51: SAHF
// 005d6d52: JC 0x005d6d92
//   XREF to: 005d6d92 (CONDITIONAL_JUMP)
// 005d6d54: FLD double ptr [EBX]
// 005d6d56: FCOMP double ptr [ESP + 0x20]
//   XREF to: Stack[-0xe0] (READ)
// 005d6d5a: FNSTSW AX
// 005d6d5c: SAHF
// 005d6d5d: JA 0x005d6d92
//   XREF to: 005d6d92 (CONDITIONAL_JUMP)
// 005d6d5f: FLD double ptr [EBX + 0x8]
// 005d6d62: FCOMP double ptr [ESP + 0x28]
//   XREF to: Stack[-0xd8] (READ)
// 005d6d66: FNSTSW AX
// 005d6d68: SAHF
// 005d6d69: JC 0x005d6d92
//   XREF to: 005d6d92 (CONDITIONAL_JUMP)
// 005d6d6b: FLD double ptr [EBX + 0x8]
// 005d6d6e: FCOMP double ptr [ESP + 0x30]
//   XREF to: Stack[-0xd0] (READ)
// 005d6d72: FNSTSW AX
// 005d6d74: SAHF
// 005d6d75: JA 0x005d6d92
//   XREF to: 005d6d92 (CONDITIONAL_JUMP)
// 005d6d77: FLD double ptr [EBX + 0x10]
// 005d6d7a: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x100] (DATA)
// 005d6d7d: FNSTSW AX
// 005d6d7f: SAHF
// 005d6d80: JC 0x005d6d92
//   XREF to: 005d6d92 (CONDITIONAL_JUMP)
// 005d6d82: FLD double ptr [EBX + 0x10]
// 005d6d85: FCOMP double ptr [ESP + 0x38]
//   XREF to: Stack[-0xc8] (READ)
// 005d6d89: FNSTSW AX
// 005d6d8b: SAHF
// 005d6d8c: JBE 0x005d6e47
//   XREF to: 005d6e47 (CONDITIONAL_JUMP)
// 005d6d92: XOR EAX,EAX
//   Label: LAB_005d6d92
// 005d6d94: MOV ESP,EBP
// 005d6d96: POP EBP
// 005d6d97: POP EDI
// 005d6d98: POP ESI
// 005d6d99: POP EBX
// 005d6d9a: RET
// 005d6d9b: FLD double ptr [EBX + 0x8]
//   Label: LAB_005d6d9b
// 005d6d9e: FCOMP double ptr [ECX + 0x8]
// 005d6da1: FNSTSW AX
// 005d6da3: SAHF
// 005d6da4: JNZ 0x005d6c35
//   XREF to: 005d6c35 (CONDITIONAL_JUMP)
// 005d6daa: FLD double ptr [EBX + 0x10]
// 005d6dad: FCOMP double ptr [ECX + 0x10]
// 005d6db0: FNSTSW AX
// 005d6db2: SAHF
// 005d6db3: JNZ 0x005d6c35
//   XREF to: 005d6c35 (CONDITIONAL_JUMP)
// 005d6db9: MOV EAX,0x1
// 005d6dbe: MOV ESP,EBP
// 005d6dc0: POP EBP
// 005d6dc1: POP EDI
// 005d6dc2: POP ESI
// 005d6dc3: POP EBX
// 005d6dc4: RET
// 005d6dc5: FLD double ptr [EBX + 0x8]
//   Label: LAB_005d6dc5
// 005d6dc8: FCOMP double ptr [EDX + 0x8]
// 005d6dcb: FNSTSW AX
// 005d6dcd: SAHF
// 005d6dce: JNZ 0x005d6c42
//   XREF to: 005d6c42 (CONDITIONAL_JUMP)
// 005d6dd4: FLD double ptr [EBX + 0x10]
// 005d6dd7: FCOMP double ptr [EDX + 0x10]
// 005d6dda: FNSTSW AX
// 005d6ddc: SAHF
// 005d6ddd: JNZ 0x005d6c42
//   XREF to: 005d6c42 (CONDITIONAL_JUMP)
// 005d6de3: MOV EAX,0x1
// 005d6de8: MOV ESP,EBP
// 005d6dea: POP EBP
// 005d6deb: POP EDI
// 005d6dec: POP ESI
// 005d6ded: POP EBX
// 005d6dee: RET
// 005d6def: MOV EAX,dword ptr [ECX]
//   Label: LAB_005d6def
// 005d6df1: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 005d6df5: MOV EAX,dword ptr [ECX + 0x4]
// 005d6df8: JMP 0x005d6c58
//   XREF to: 005d6c58 (UNCONDITIONAL_JUMP)
// 005d6dfd: MOV EAX,dword ptr [EDX + 0x8]
//   Label: LAB_005d6dfd
// 005d6e00: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0xc0] (WRITE)
// 005d6e04: MOV EAX,dword ptr [EDX + 0xc]
// 005d6e07: JMP 0x005d6c85
//   XREF to: 005d6c85 (UNCONDITIONAL_JUMP)
// 005d6e0c: MOV EAX,dword ptr [EDX + 0x10]
//   Label: LAB_005d6e0c
// 005d6e0f: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0xf8] (WRITE)
// 005d6e13: MOV EAX,dword ptr [EDX + 0x14]
// 005d6e16: JMP 0x005d6cb2
//   XREF to: 005d6cb2 (UNCONDITIONAL_JUMP)
// 005d6e1b: MOV EAX,dword ptr [EDX]
//   Label: LAB_005d6e1b
// 005d6e1d: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 005d6e21: MOV EAX,dword ptr [EDX + 0x4]
// 005d6e24: JMP 0x005d6cdb
//   XREF to: 005d6cdb (UNCONDITIONAL_JUMP)
// 005d6e29: MOV EAX,dword ptr [EDX + 0x8]
//   Label: LAB_005d6e29
// 005d6e2c: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0xf0] (WRITE)
// 005d6e30: MOV EAX,dword ptr [EDX + 0xc]
// 005d6e33: JMP 0x005d6d08
//   XREF to: 005d6d08 (UNCONDITIONAL_JUMP)
// 005d6e38: MOV EAX,dword ptr [EDX + 0x10]
//   Label: LAB_005d6e38
// 005d6e3b: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 005d6e3f: MOV EAX,dword ptr [EDX + 0x14]
// 005d6e42: JMP 0x005d6d35
//   XREF to: 005d6d35 (UNCONDITIONAL_JUMP)
// 005d6e47: FLD double ptr [EBX]
//   Label: LAB_005d6e47
// 005d6e49: FLD double ptr [EBX + 0x8]
// 005d6e4c: FLD double ptr [EBX + 0x10]
// 005d6e4f: LEA EDI,[ESP + 0xa8]
//   XREF to: Stack[-0x58] (DATA)
// 005d6e56: LEA ESI,[ESP + 0x60]
//   XREF to: Stack[-0xa0] (DATA)
// 005d6e5a: FXCH ST2
// 005d6e5c: FSUB double ptr [ECX]
// 005d6e5e: FXCH
// 005d6e60: FSUB double ptr [ECX + 0x8]
// 005d6e63: FXCH ST2
// 005d6e65: FSUB double ptr [ECX + 0x10]
// 005d6e68: FXCH
// 005d6e6a: FSTP double ptr [ESP + 0x60]
//   XREF to: Stack[-0xa0] (WRITE)
// 005d6e6e: FXCH
// 005d6e70: FSTP double ptr [ESP + 0x68]
//   XREF to: Stack[-0x98] (WRITE)
// 005d6e74: MOV ECX,0x6
// 005d6e79: FSTP double ptr [ESP + 0x70]
//   XREF to: Stack[-0x90] (WRITE)
// 005d6e7d: MOVSD.REP ES:EDI,ESI
// 005d6e7f: MOV EAX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x58] (READ)
// 005d6e86: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 005d6e8a: MOV EAX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x54] (READ)
// 005d6e91: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 005d6e95: MOV EAX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x50] (READ)
// 005d6e9c: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 005d6ea3: MOV EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x4c] (READ)
// 005d6eaa: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 005d6eb1: MOV EAX,dword ptr [ESP + 0xb8]
//   XREF to: Stack[-0x48] (READ)
// 005d6eb8: MOV ECX,0x6
// 005d6ebd: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 005d6ec4: MOV EAX,dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0x44] (READ)
// 005d6ecb: LEA EDI,[ESP + 0x90]
//   XREF to: Stack[-0x70] (DATA)
// 005d6ed2: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 005d6ed9: LEA ESI,[ESP + 0xc0]
//   XREF to: Stack[-0x40] (DATA)
// 005d6ee0: FLD double ptr [EBX]
// 005d6ee2: FLD double ptr [EBX + 0x8]
// 005d6ee5: FLD double ptr [EBX + 0x10]
// 005d6ee8: FXCH ST2
// 005d6eea: FSUB double ptr [EDX]
// 005d6eec: FXCH
// 005d6eee: FSUB double ptr [EDX + 0x8]
// 005d6ef1: FXCH ST2
// 005d6ef3: FSUB double ptr [EDX + 0x10]
// 005d6ef6: FXCH
// 005d6ef8: FSTP double ptr [ESP + 0xc0]
//   XREF to: Stack[-0x40] (WRITE)
// 005d6eff: FXCH
// 005d6f01: FSTP double ptr [ESP + 0xc8]
//   XREF to: Stack[-0x38] (WRITE)
// 005d6f08: FSTP double ptr [ESP + 0xd0]
//   XREF to: Stack[-0x30] (WRITE)
// 005d6f0f: MOVSD.REP ES:EDI,ESI
// 005d6f11: MOV EAX,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x70] (READ)
// 005d6f18: MOV dword ptr [ESP + 0xd8],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005d6f1f: MOV EAX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x6c] (READ)
// 005d6f26: MOV dword ptr [ESP + 0xdc],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005d6f2d: MOV EAX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x68] (READ)
// 005d6f34: MOV dword ptr [ESP + 0xe0],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005d6f3b: MOV EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x64] (READ)
// 005d6f42: MOV dword ptr [ESP + 0xe4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005d6f49: MOV EAX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x60] (READ)
// 005d6f50: MOV dword ptr [ESP + 0xe8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005d6f57: MOV EAX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x5c] (READ)
// 005d6f5e: MOV dword ptr [ESP + 0xec],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005d6f65: LEA EAX,[ESP + 0xd8]
//   XREF to: Stack[-0x28] (DATA)
// 005d6f6c: PUSH EAX
// 005d6f6d: LEA EAX,[ESP + 0x7c]
//   XREF to: Stack[-0x88] (DATA)
// 005d6f71: PUSH EAX
// 005d6f72: CALL shape_superopt.cpp_FUN_005d66e0
//   XREF to: 005d66e0 (UNCONDITIONAL_CALL)
// 005d6f77: ADD ESP,0x8
// 005d6f7a: MOV ESP,EBP
// 005d6f7c: POP EBP
// 005d6f7d: POP EDI
// 005d6f7e: POP ESI
// 005d6f7f: POP EBX
// 005d6f80: RET
