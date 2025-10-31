// Name: shape_superopt.cpp_FUN_005d6500
// Address: 005d6500
// Address Range: [[005d6500, 005d663c]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d6500()
// Cross-references:
//   shape_superopt.cpp_FUN_005d0ce0 (005d0ce0) at 005d0d0c [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005d63d0 (005d63d0) at 005d6402 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0065454a

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 shape_superopt.cpp_FUN_005d6500(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4) */

double shape_superopt_cpp_FUN_005d6500(void)

{
  double dVar1;
  double *in_stack_00000004;
  double *in_stack_00000008;
  double *in_stack_0000000c;
  double *in_stack_00000010;
  double local_70;
  
  dVar1 = in_stack_00000010[2] * in_stack_00000008[2] +
          *in_stack_00000010 * *in_stack_00000008 + in_stack_00000010[1] * in_stack_00000008[1];
  local_70 = dVar1;
  if (dVar1 < 0.0) {
    local_70 = -dVar1;
  }
  if (_DAT_0065454a <= local_70) {
    return -((in_stack_00000010[2] * in_stack_00000004[2] +
              *in_stack_00000010 * *in_stack_00000004 + in_stack_00000010[1] * in_stack_00000004[1]
             + -(in_stack_00000010[2] * in_stack_0000000c[2] +
                *in_stack_00000010 * *in_stack_0000000c +
                in_stack_00000010[1] * in_stack_0000000c[1])) / dVar1);
  }
  return -1.0;
}


// Assembly code:
// 005d6500: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d6500
// 005d6501: PUSH ESI
// 005d6502: PUSH EBP
// 005d6503: MOV EBP,ESP
// 005d6505: SUB ESP,0x60
// 005d6508: AND ESP,0xfffffff8
// 005d650b: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005d650e: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005d6511: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005d6514: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 005d6517: MOV EAX,dword ptr [EBX]
// 005d6519: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005d651d: MOV EAX,dword ptr [EBX + 0x4]
// 005d6520: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005d6524: MOV EAX,dword ptr [EBX + 0x8]
// 005d6527: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005d652b: MOV EAX,dword ptr [EBX + 0xc]
// 005d652e: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005d6532: MOV EAX,dword ptr [EBX + 0x10]
// 005d6535: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005d6539: MOV EAX,dword ptr [EBX + 0x14]
// 005d653c: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005d6540: FLD double ptr [EDX + 0x8]
// 005d6543: FMUL double ptr [ESP + 0x48]
//   XREF to: Stack[-0x28] (READ)
// 005d6547: FLD double ptr [EDX]
// 005d6549: FMUL double ptr [ESP + 0x40]
//   XREF to: Stack[-0x30] (READ)
// 005d654d: FADDP
// 005d654f: MOV EAX,dword ptr [ECX]
// 005d6551: FLD double ptr [EDX + 0x10]
// 005d6554: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005d6558: FMUL double ptr [ESP + 0x50]
//   XREF to: Stack[-0x20] (READ)
// 005d655c: MOV EAX,dword ptr [ECX + 0x4]
// 005d655f: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005d6563: MOV EAX,dword ptr [ECX + 0x8]
// 005d6566: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005d656a: MOV EAX,dword ptr [ECX + 0xc]
// 005d656d: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005d6571: MOV EAX,dword ptr [ECX + 0x10]
// 005d6574: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005d6578: MOV EAX,dword ptr [ECX + 0x14]
// 005d657b: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005d657f: FLD double ptr [EDX + 0x8]
// 005d6582: FMUL double ptr [ESP + 0x30]
//   XREF to: Stack[-0x40] (READ)
// 005d6586: FLD double ptr [EDX + 0x8]
// 005d6589: FMUL double ptr [ESI + 0x8]
// 005d658c: FLD double ptr [EDX]
// 005d658e: FMUL double ptr [ESP + 0x28]
//   XREF to: Stack[-0x48] (READ)
// 005d6592: FLD double ptr [EDX]
// 005d6594: FMUL double ptr [ESI]
// 005d6596: FXCH
// 005d6598: FADDP ST3,ST0
// 005d659a: FADDP
// 005d659c: FLD double ptr [EDX + 0x10]
// 005d659f: FMUL double ptr [ESP + 0x38]
//   XREF to: Stack[-0x38] (READ)
// 005d65a3: FLD double ptr [EDX + 0x10]
// 005d65a6: FMUL double ptr [ESI + 0x10]
// 005d65a9: FXCH ST4
// 005d65ab: FADDP ST5,ST0
// 005d65ad: FLDZ
// 005d65af: FXCH ST5
// 005d65b1: FCHS
// 005d65b3: FXCH ST4
// 005d65b5: FADDP ST2,ST0
// 005d65b7: FADDP ST2,ST0
// 005d65b9: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x68] (WRITE)
// 005d65bd: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x68] (READ)
// 005d65c1: FADDP
// 005d65c3: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 005d65c7: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x64] (READ)
// 005d65cb: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x60] (WRITE)
// 005d65cf: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 005d65d3: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x68] (READ)
// 005d65d7: FNSTSW AX
// 005d65d9: SAHF
// 005d65da: JBE 0x005d6610
//   XREF to: 005d6610 (CONDITIONAL_JUMP)
// 005d65dc: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x68] (READ)
// 005d65e0: FCHS
// 005d65e2: FSTP double ptr [ESP]
//   XREF to: Stack[-0x70] (DATA)
// 005d65e5: FLD double ptr [ESP]
//   Label: LAB_005d65e5
//   XREF to: Stack[-0x70] (DATA)
// 005d65e8: FCOMP double ptr [0x0065454a]
//   XREF to: 0065454a (READ)
// 005d65ee: FNSTSW AX
// 005d65f0: SAHF
// 005d65f1: JNC 0x005d6621
//   XREF to: 005d6621 (CONDITIONAL_JUMP)
// 005d65f3: XOR EDX,EDX
// 005d65f5: MOV ECX,0xbff00000
// 005d65fa: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x50] (WRITE)
// 005d65fe: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x4c] (WRITE)
// 005d6602: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x50] (READ)
// 005d6606: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x4c] (READ)
// 005d660a: MOV ESP,EBP
// 005d660c: POP EBP
// 005d660d: POP ESI
// 005d660e: POP EBX
// 005d660f: RET
// 005d6610: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_005d6610
//   XREF to: Stack[-0x68] (READ)
// 005d6614: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x70] (DATA)
// 005d6617: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x64] (READ)
// 005d661b: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 005d661f: JMP 0x005d65e5
//   XREF to: 005d65e5 (UNCONDITIONAL_JUMP)
// 005d6621: FLD double ptr [ESP + 0x10]
//   Label: LAB_005d6621
//   XREF to: Stack[-0x60] (READ)
// 005d6625: FDIV double ptr [ESP + 0x18]
//   XREF to: Stack[-0x58] (READ)
// 005d6629: FCHS
// 005d662b: FSTP double ptr [ESP + 0x20]
//   XREF to: Stack[-0x50] (WRITE)
// 005d662f: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x50] (READ)
// 005d6633: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x4c] (READ)
// 005d6637: MOV ESP,EBP
// 005d6639: POP EBP
// 005d663a: POP ESI
// 005d663b: POP EBX
// 005d663c: RET
