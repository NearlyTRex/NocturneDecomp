// Name: shape_superopt.cpp_FUN_005d5bb0
// Address: 005d5bb0
// Address Range: [[005d5bb0, 005d5ddc]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d5bb0()
// Cross-references:
//   shape_superopt.cpp_CPoly_hasEdgeIntersection_FUN_005d1390 (005d1390) at 005d17a1 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005d5de0 (005d5de0) at 005d5e34 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0065453a = 1.00000000000000E-10
//   double DOUBLE_00654542 = 0.999999999900000

#include "nocturne.h"

undefined4 shape_superopt_cpp_FUN_005d5bb0(void)

{
  double dVar1;
  double dVar2;
  double *in_stack_00000004;
  double *in_stack_00000008;
  double *in_stack_0000000c;
  double *in_stack_00000010;
  double local_48;
  double local_40;
  double local_38;
  
  if (((((((*in_stack_0000000c <= *in_stack_00000004) || (*in_stack_0000000c <= *in_stack_00000008))
         || (*in_stack_00000010 <= *in_stack_00000004)) ||
        (*in_stack_00000010 <= *in_stack_00000008)) &&
       (((*in_stack_00000004 <= *in_stack_0000000c || (*in_stack_00000008 <= *in_stack_0000000c)) ||
        ((*in_stack_00000004 <= *in_stack_00000010 || (*in_stack_00000008 <= *in_stack_00000010)))))
       ) && (((in_stack_0000000c[1] <= in_stack_00000004[1] ||
              (in_stack_0000000c[1] <= in_stack_00000008[1])) ||
             ((in_stack_00000010[1] <= in_stack_00000004[1] ||
              (in_stack_00000010[1] <= in_stack_00000008[1])))))) &&
     ((((in_stack_00000004[1] <= in_stack_0000000c[1] ||
        (in_stack_00000008[1] <= in_stack_0000000c[1])) ||
       (in_stack_00000004[1] <= in_stack_00000010[1])) ||
      (in_stack_00000008[1] <= in_stack_00000010[1])))) {
    dVar1 = (*in_stack_00000008 - *in_stack_00000004) *
            (in_stack_00000010[1] - in_stack_0000000c[1]) -
            (*in_stack_00000010 - *in_stack_0000000c) *
            (in_stack_00000008[1] - in_stack_00000004[1]);
    local_38 = dVar1;
    if (dVar1 < 0.0) {
      local_38 = -dVar1;
    }
    if (DOUBLE_0065453a <= local_38) {
      dVar2 = ((*in_stack_00000010 - *in_stack_0000000c) *
               (in_stack_00000004[1] - in_stack_0000000c[1]) -
              (in_stack_00000010[1] - in_stack_0000000c[1]) *
              (*in_stack_00000004 - *in_stack_0000000c)) * (1.0 / dVar1);
      dVar1 = ((*in_stack_00000008 - *in_stack_00000004) *
               (in_stack_00000004[1] - in_stack_0000000c[1]) -
              (in_stack_00000008[1] - in_stack_00000004[1]) *
              (*in_stack_00000004 - *in_stack_0000000c)) * (1.0 / dVar1);
      local_40 = dVar2;
      if (dVar2 < 0.0) {
        local_40 = -dVar2;
      }
      if (DOUBLE_0065453a <= local_40) {
        local_48 = dVar1;
        if (dVar1 < 0.0) {
          local_48 = -dVar1;
        }
        if (((DOUBLE_0065453a <= local_48) && (0.0 <= dVar2)) &&
           ((0.0 <= dVar1 && ((dVar2 <= DOUBLE_00654542 && (dVar1 <= DOUBLE_00654542)))))) {
          return 1;
        }
      }
    }
  }
  return 0;
}


// Assembly code:
// 005d5bb0: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d5bb0
// 005d5bb1: PUSH ESI
// 005d5bb2: PUSH EBP
// 005d5bb3: MOV EBP,ESP
// 005d5bb5: SUB ESP,0x38
// 005d5bb8: AND ESP,0xfffffff8
// 005d5bbb: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005d5bbe: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005d5bc1: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005d5bc4: MOV ESI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 005d5bc7: FLD double ptr [ECX]
// 005d5bc9: FCOMP double ptr [EDX]
// 005d5bcb: FNSTSW AX
// 005d5bcd: SAHF
// 005d5bce: JNC 0x005d5bef
//   XREF to: 005d5bef (CONDITIONAL_JUMP)
// 005d5bd0: FLD double ptr [EBX]
// 005d5bd2: FCOMP double ptr [EDX]
// 005d5bd4: FNSTSW AX
// 005d5bd6: SAHF
// 005d5bd7: JNC 0x005d5bef
//   XREF to: 005d5bef (CONDITIONAL_JUMP)
// 005d5bd9: FLD double ptr [ECX]
// 005d5bdb: FCOMP double ptr [ESI]
// 005d5bdd: FNSTSW AX
// 005d5bdf: SAHF
// 005d5be0: JNC 0x005d5bef
//   XREF to: 005d5bef (CONDITIONAL_JUMP)
// 005d5be2: FLD double ptr [EBX]
// 005d5be4: FCOMP double ptr [ESI]
// 005d5be6: FNSTSW AX
// 005d5be8: SAHF
// 005d5be9: JC 0x005d5da1
//   XREF to: 005d5da1 (CONDITIONAL_JUMP)
// 005d5bef: FLD double ptr [ECX]
//   Label: LAB_005d5bef
// 005d5bf1: FCOMP double ptr [EDX]
// 005d5bf3: FNSTSW AX
// 005d5bf5: SAHF
// 005d5bf6: JBE 0x005d5c17
//   XREF to: 005d5c17 (CONDITIONAL_JUMP)
// 005d5bf8: FLD double ptr [EBX]
// 005d5bfa: FCOMP double ptr [EDX]
// 005d5bfc: FNSTSW AX
// 005d5bfe: SAHF
// 005d5bff: JBE 0x005d5c17
//   XREF to: 005d5c17 (CONDITIONAL_JUMP)
// 005d5c01: FLD double ptr [ECX]
// 005d5c03: FCOMP double ptr [ESI]
// 005d5c05: FNSTSW AX
// 005d5c07: SAHF
// 005d5c08: JBE 0x005d5c17
//   XREF to: 005d5c17 (CONDITIONAL_JUMP)
// 005d5c0a: FLD double ptr [EBX]
// 005d5c0c: FCOMP double ptr [ESI]
// 005d5c0e: FNSTSW AX
// 005d5c10: SAHF
// 005d5c11: JA 0x005d5da1
//   XREF to: 005d5da1 (CONDITIONAL_JUMP)
// 005d5c17: FLD double ptr [ECX + 0x8]
//   Label: LAB_005d5c17
// 005d5c1a: FCOMP double ptr [EDX + 0x8]
// 005d5c1d: FNSTSW AX
// 005d5c1f: SAHF
// 005d5c20: JNC 0x005d5c47
//   XREF to: 005d5c47 (CONDITIONAL_JUMP)
// 005d5c22: FLD double ptr [EBX + 0x8]
// 005d5c25: FCOMP double ptr [EDX + 0x8]
// 005d5c28: FNSTSW AX
// 005d5c2a: SAHF
// 005d5c2b: JNC 0x005d5c47
//   XREF to: 005d5c47 (CONDITIONAL_JUMP)
// 005d5c2d: FLD double ptr [ECX + 0x8]
// 005d5c30: FCOMP double ptr [ESI + 0x8]
// 005d5c33: FNSTSW AX
// 005d5c35: SAHF
// 005d5c36: JNC 0x005d5c47
//   XREF to: 005d5c47 (CONDITIONAL_JUMP)
// 005d5c38: FLD double ptr [EBX + 0x8]
// 005d5c3b: FCOMP double ptr [ESI + 0x8]
// 005d5c3e: FNSTSW AX
// 005d5c40: SAHF
// 005d5c41: JC 0x005d5da1
//   XREF to: 005d5da1 (CONDITIONAL_JUMP)
// 005d5c47: FLD double ptr [ECX + 0x8]
//   Label: LAB_005d5c47
// 005d5c4a: FCOMP double ptr [EDX + 0x8]
// 005d5c4d: FNSTSW AX
// 005d5c4f: SAHF
// 005d5c50: JBE 0x005d5c77
//   XREF to: 005d5c77 (CONDITIONAL_JUMP)
// 005d5c52: FLD double ptr [EBX + 0x8]
// 005d5c55: FCOMP double ptr [EDX + 0x8]
// 005d5c58: FNSTSW AX
// 005d5c5a: SAHF
// 005d5c5b: JBE 0x005d5c77
//   XREF to: 005d5c77 (CONDITIONAL_JUMP)
// 005d5c5d: FLD double ptr [ECX + 0x8]
// 005d5c60: FCOMP double ptr [ESI + 0x8]
// 005d5c63: FNSTSW AX
// 005d5c65: SAHF
// 005d5c66: JBE 0x005d5c77
//   XREF to: 005d5c77 (CONDITIONAL_JUMP)
// 005d5c68: FLD double ptr [EBX + 0x8]
// 005d5c6b: FCOMP double ptr [ESI + 0x8]
// 005d5c6e: FNSTSW AX
// 005d5c70: SAHF
// 005d5c71: JA 0x005d5da1
//   XREF to: 005d5da1 (CONDITIONAL_JUMP)
// 005d5c77: FLD double ptr [ESI + 0x8]
//   Label: LAB_005d5c77
// 005d5c7a: FSUB double ptr [EDX + 0x8]
// 005d5c7d: FLD double ptr [EBX]
// 005d5c7f: FSUB double ptr [ECX]
// 005d5c81: FMULP
// 005d5c83: FLD double ptr [EBX + 0x8]
// 005d5c86: FSUB double ptr [ECX + 0x8]
// 005d5c89: FLD double ptr [ESI]
// 005d5c8b: FSUB double ptr [EDX]
// 005d5c8d: FMULP
// 005d5c8f: FSUBP
// 005d5c91: FLDZ
// 005d5c93: FXCH
// 005d5c95: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x30] (WRITE)
// 005d5c99: FCOMP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x30] (READ)
// 005d5c9d: FNSTSW AX
// 005d5c9f: SAHF
// 005d5ca0: JA 0x005d5da9
//   XREF to: 005d5da9 (CONDITIONAL_JUMP)
// 005d5ca6: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x30] (READ)
// 005d5caa: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005d5cae: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 005d5cb2: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005d5cb6: FLD double ptr [ESP + 0x10]
//   Label: LAB_005d5cb6
//   XREF to: Stack[-0x38] (READ)
// 005d5cba: FCOMP double ptr [0x0065453a]
//   XREF to: 0065453a (READ)
// 005d5cc0: FNSTSW AX
// 005d5cc2: SAHF
// 005d5cc3: JC 0x005d5da1
//   XREF to: 005d5da1 (CONDITIONAL_JUMP)
// 005d5cc9: FLD double ptr [ECX + 0x8]
// 005d5ccc: FLD double ptr [ESI]
// 005d5cce: FSUB double ptr [EDX]
// 005d5cd0: FXCH
// 005d5cd2: FSUB double ptr [EDX + 0x8]
// 005d5cd5: FXCH
// 005d5cd7: FMUL ST1
// 005d5cd9: FLD double ptr [ESI + 0x8]
// 005d5cdc: FSUB double ptr [EDX + 0x8]
// 005d5cdf: FLD double ptr [ECX]
// 005d5ce1: FSUB double ptr [EDX]
// 005d5ce3: FXCH
// 005d5ce5: FMUL ST1
// 005d5ce7: FSUBP ST2,ST0
// 005d5ce9: FLD1
// 005d5ceb: FDIV double ptr [ESP + 0x18]
//   XREF to: Stack[-0x30] (READ)
// 005d5cef: FLD double ptr [EBX]
// 005d5cf1: FSUB double ptr [ECX]
// 005d5cf3: FMULP ST4
// 005d5cf5: FLD double ptr [EBX + 0x8]
// 005d5cf8: FSUB double ptr [ECX + 0x8]
// 005d5cfb: FMULP ST2
// 005d5cfd: FXCH
// 005d5cff: FSUBP ST3,ST0
// 005d5d01: FXCH
// 005d5d03: FMUL ST1
// 005d5d05: FXCH ST2
// 005d5d07: FMULP
// 005d5d09: FLDZ
// 005d5d0b: FXCH ST2
// 005d5d0d: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x20] (WRITE)
// 005d5d11: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x28] (WRITE)
// 005d5d15: FCOMP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x20] (READ)
// 005d5d19: FNSTSW AX
// 005d5d1b: SAHF
// 005d5d1c: JA 0x005d5db8
//   XREF to: 005d5db8 (CONDITIONAL_JUMP)
// 005d5d22: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x20] (READ)
// 005d5d26: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005d5d2a: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x1c] (READ)
// 005d5d2e: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005d5d32: FLD double ptr [ESP + 0x8]
//   Label: LAB_005d5d32
//   XREF to: Stack[-0x40] (READ)
// 005d5d36: FCOMP double ptr [0x0065453a]
//   XREF to: 0065453a (READ)
// 005d5d3c: FNSTSW AX
// 005d5d3e: SAHF
// 005d5d3f: JC 0x005d5da1
//   XREF to: 005d5da1 (CONDITIONAL_JUMP)
// 005d5d41: FLDZ
// 005d5d43: FCOMP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x28] (READ)
// 005d5d47: FNSTSW AX
// 005d5d49: SAHF
// 005d5d4a: JA 0x005d5dc7
//   XREF to: 005d5dc7 (CONDITIONAL_JUMP)
// 005d5d50: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x28] (READ)
// 005d5d54: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x48] (DATA)
// 005d5d57: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x24] (READ)
// 005d5d5b: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005d5d5f: FLD double ptr [ESP]
//   Label: LAB_005d5d5f
//   XREF to: Stack[-0x48] (DATA)
// 005d5d62: FCOMP double ptr [0x0065453a]
//   XREF to: 0065453a (READ)
// 005d5d68: FNSTSW AX
// 005d5d6a: SAHF
// 005d5d6b: JC 0x005d5da1
//   XREF to: 005d5da1 (CONDITIONAL_JUMP)
// 005d5d6d: FLDZ
// 005d5d6f: FCOMP double ptr [ESP + 0x28]
//   XREF to: Stack[-0x20] (READ)
// 005d5d73: FNSTSW AX
// 005d5d75: SAHF
// 005d5d76: JA 0x005d5da1
//   XREF to: 005d5da1 (CONDITIONAL_JUMP)
// 005d5d78: FLDZ
// 005d5d7a: FCOMP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x28] (READ)
// 005d5d7e: FNSTSW AX
// 005d5d80: SAHF
// 005d5d81: JA 0x005d5da1
//   XREF to: 005d5da1 (CONDITIONAL_JUMP)
// 005d5d83: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0x20] (READ)
// 005d5d87: FCOMP double ptr [0x00654542]
//   XREF to: 00654542 (READ)
// 005d5d8d: FNSTSW AX
// 005d5d8f: SAHF
// 005d5d90: JA 0x005d5da1
//   XREF to: 005d5da1 (CONDITIONAL_JUMP)
// 005d5d92: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0x28] (READ)
// 005d5d96: FCOMP double ptr [0x00654542]
//   XREF to: 00654542 (READ)
// 005d5d9c: FNSTSW AX
// 005d5d9e: SAHF
// 005d5d9f: JBE 0x005d5dd2
//   XREF to: 005d5dd2 (CONDITIONAL_JUMP)
// 005d5da1: XOR EAX,EAX
//   Label: LAB_005d5da1
// 005d5da3: MOV ESP,EBP
// 005d5da5: POP EBP
// 005d5da6: POP ESI
// 005d5da7: POP EBX
// 005d5da8: RET
// 005d5da9: FLD double ptr [ESP + 0x18]
//   Label: LAB_005d5da9
//   XREF to: Stack[-0x30] (READ)
// 005d5dad: FCHS
// 005d5daf: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x38] (WRITE)
// 005d5db3: JMP 0x005d5cb6
//   XREF to: 005d5cb6 (UNCONDITIONAL_JUMP)
// 005d5db8: FLD double ptr [ESP + 0x28]
//   Label: LAB_005d5db8
//   XREF to: Stack[-0x20] (READ)
// 005d5dbc: FCHS
// 005d5dbe: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x40] (WRITE)
// 005d5dc2: JMP 0x005d5d32
//   XREF to: 005d5d32 (UNCONDITIONAL_JUMP)
// 005d5dc7: FLD double ptr [ESP + 0x20]
//   Label: LAB_005d5dc7
//   XREF to: Stack[-0x28] (READ)
// 005d5dcb: FCHS
// 005d5dcd: FSTP double ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 005d5dd0: JMP 0x005d5d5f
//   XREF to: 005d5d5f (UNCONDITIONAL_JUMP)
// 005d5dd2: MOV EAX,0x1
//   Label: LAB_005d5dd2
// 005d5dd7: MOV ESP,EBP
// 005d5dd9: POP EBP
// 005d5dda: POP ESI
// 005d5ddb: POP EBX
// 005d5ddc: RET
