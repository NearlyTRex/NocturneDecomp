// Name: core_chain.cpp_FUN_0042fed0
// Address: 0042fed0
// Address Range: [[0042fed0, 004300c5]]
// Convention: unknown
// Signature: undefined core_chain.cpp_FUN_0042fed0()
// Cross-references:
//   core_chain.cpp_FUN_004300d0 (004300d0) at 004303e9 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_02d7a7b8

#include "nocturne.h"

/* Signature: undefined1 actors_other_chain.cpp_FUN_0042fed0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void core_chain_cpp_FUN_0042fed0(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  float local_68 [12];
  float local_38;
  float local_34;
  float local_30;
  
  if ((*(int *)(in_stack_00000004 + 0x288) != 0) &&
     (in_stack_00000008[1] < *(float *)(in_stack_00000004 + 0x56c))) {
    in_stack_00000008[5] = 0.0;
    in_stack_00000008[4] = in_stack_00000008[5];
    in_stack_00000008[3] = in_stack_00000008[4];
    in_stack_00000008[1] = *(float *)(in_stack_00000004 + 0x56c);
  }
  if (&local_38 != local_68) {
    local_38 = *in_stack_00000008 - *in_stack_0000000c;
    local_34 = in_stack_00000008[1] - in_stack_0000000c[1];
    local_30 = in_stack_00000008[2] - in_stack_0000000c[2];
  }
  fVar6 = (float)(((int)(local_30 * local_30 + local_38 * local_38 + local_34 * local_34) >> 1) +
                 DAT_02d7a7b8);
  if (fVar6 <= *(float *)(in_stack_00000004 + 0x160)) {
    return;
  }
  fVar2 = fVar6 - *(float *)(in_stack_00000004 + 0x160);
  fVar6 = 1.0 / fVar6;
  fVar4 = local_38 * fVar2 * fVar6;
  fVar5 = local_34 * fVar2 * fVar6;
  fVar6 = local_30 * fVar2 * fVar6;
  *in_stack_00000008 = *in_stack_00000008 - fVar4;
  in_stack_00000008[1] = in_stack_00000008[1] - fVar5;
  pfVar1 = (float *)(in_stack_00000004 + 0x570);
  in_stack_00000008[2] = in_stack_00000008[2] - fVar6;
  fVar2 = *pfVar1;
  fVar3 = *pfVar1;
  in_stack_00000008[3] = in_stack_00000008[3] - fVar4 * *pfVar1;
  in_stack_00000008[4] = in_stack_00000008[4] - fVar5 * fVar2;
  in_stack_00000008[5] = in_stack_00000008[5] - fVar6 * fVar3;
  *in_stack_0000000c = *in_stack_0000000c + fVar4;
  in_stack_0000000c[1] = in_stack_0000000c[1] + fVar5;
  in_stack_0000000c[2] = in_stack_0000000c[2] + fVar6;
  fVar2 = *pfVar1;
  fVar3 = *pfVar1;
  in_stack_0000000c[3] = in_stack_0000000c[3] + fVar4 * *pfVar1;
  in_stack_0000000c[4] = in_stack_0000000c[4] + fVar5 * fVar2;
  in_stack_0000000c[5] = in_stack_0000000c[5] + fVar6 * fVar3;
  return;
}


// Assembly code:
// 0042fed0: PUSH EBX
//   Label: core_chain.cpp_FUN_0042fed0
// 0042fed1: PUSH ESI
// 0042fed2: PUSH EDI
// 0042fed3: SUB ESP,0x5c
// 0042fed6: MOV EBX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 0042feda: MOV EDX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 0042fede: MOV ECX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0xc] (READ)
// 0042fee2: CMP dword ptr [EBX + 0x288],0x0
// 0042fee9: JZ 0x0042ff17
//   XREF to: 0042ff17 (CONDITIONAL_JUMP)
// 0042feeb: FLD float ptr [EDX + 0x4]
// 0042feee: FCOMP float ptr [EBX + 0x56c]
// 0042fef4: FNSTSW AX
// 0042fef6: SAHF
// 0042fef7: JNC 0x0042ff17
//   XREF to: 0042ff17 (CONDITIONAL_JUMP)
// 0042fef9: LEA EAX,[EDX + 0xc]
// 0042fefc: MOV dword ptr [EAX + 0x8],0x0
// 0042ff03: MOV ESI,dword ptr [EAX + 0x8]
// 0042ff06: MOV dword ptr [EAX + 0x4],ESI
// 0042ff09: MOV ESI,dword ptr [EAX + 0x4]
// 0042ff0c: MOV dword ptr [EAX],ESI
// 0042ff0e: MOV EAX,dword ptr [EBX + 0x56c]
// 0042ff14: MOV dword ptr [EDX + 0x4],EAX
// 0042ff17: FLD float ptr [EDX]
//   Label: LAB_0042ff17
// 0042ff19: FSUB float ptr [ECX]
// 0042ff1b: FSTP float ptr [ESP]
//   XREF to: Stack[-0x68] (DATA)
// 0042ff1e: FLD float ptr [EDX + 0x4]
// 0042ff21: FSUB float ptr [ECX + 0x4]
// 0042ff24: MOV EAX,ESP
// 0042ff26: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x64] (WRITE)
// 0042ff2a: FLD float ptr [EDX + 0x8]
// 0042ff2d: FSUB float ptr [ECX + 0x8]
// 0042ff30: LEA ESI,[ESP + 0x30]
//   XREF to: Stack[-0x38] (DATA)
// 0042ff34: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x60] (WRITE)
// 0042ff38: CMP ESI,EAX
// 0042ff3a: JZ 0x0042ff53
//   XREF to: 0042ff53 (CONDITIONAL_JUMP)
// 0042ff3c: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x68] (DATA)
// 0042ff3f: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0042ff43: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x64] (READ)
// 0042ff47: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0042ff4b: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x60] (READ)
// 0042ff4f: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0042ff53: FLD float ptr [ESP + 0x34]
//   Label: LAB_0042ff53
//   XREF to: Stack[-0x34] (READ)
// 0042ff57: FMUL ST0
// 0042ff59: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x38] (READ)
// 0042ff5d: FMUL ST0
// 0042ff5f: FADDP
// 0042ff61: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x30] (READ)
// 0042ff65: FMUL ST0
// 0042ff67: FADDP
// 0042ff69: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x20] (WRITE)
// 0042ff6d: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x20] (READ)
// 0042ff71: MOV EDI,dword ptr [0x02d7a7b8]
//   XREF to: 02d7a7b8 (READ)
// 0042ff77: SAR EAX,0x1
// 0042ff79: ADD EAX,EDI
// 0042ff7b: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0042ff7f: MOV EAX,dword ptr [EBX + 0x160]
// 0042ff85: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0042ff89: FLD float ptr [ESP + 0x54]
//   XREF to: Stack[-0x14] (READ)
// 0042ff8d: FCOMP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x18] (READ)
// 0042ff91: FNSTSW AX
// 0042ff93: SAHF
// 0042ff94: JA 0x0042ff9d
//   XREF to: 0042ff9d (CONDITIONAL_JUMP)
// 0042ff96: ADD ESP,0x5c
// 0042ff99: POP EDI
// 0042ff9a: POP ESI
// 0042ff9b: POP EBX
// 0042ff9c: RET
// 0042ff9d: FLD float ptr [ESP + 0x54]
//   Label: LAB_0042ff9d
//   XREF to: Stack[-0x14] (READ)
// 0042ffa1: FLD ST0
// 0042ffa3: FSUB float ptr [ESP + 0x50]
//   XREF to: Stack[-0x18] (READ)
// 0042ffa7: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x38] (READ)
// 0042ffab: FXCH
// 0042ffad: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0x10] (WRITE)
// 0042ffb1: FMUL float ptr [ESP + 0x58]
//   XREF to: Stack[-0x10] (READ)
// 0042ffb5: FLD float ptr [ESP + 0x34]
//   XREF to: Stack[-0x34] (READ)
// 0042ffb9: FMUL float ptr [ESP + 0x58]
//   XREF to: Stack[-0x10] (READ)
// 0042ffbd: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x30] (READ)
// 0042ffc1: FMUL float ptr [ESP + 0x58]
//   XREF to: Stack[-0x10] (READ)
// 0042ffc5: FLD1
// 0042ffc7: FXCH ST3
// 0042ffc9: FST float ptr [ESP + 0x24]
//   XREF to: Stack[-0x44] (WRITE)
// 0042ffcd: FXCH ST3
// 0042ffcf: FDIVRP ST4,ST0
// 0042ffd1: FXCH ST2
// 0042ffd3: FMUL ST3
// 0042ffd5: FXCH
// 0042ffd7: FST float ptr [ESP + 0x28]
//   XREF to: Stack[-0x40] (WRITE)
// 0042ffdb: FMUL ST3
// 0042ffdd: FXCH ST2
// 0042ffdf: FST float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x3c] (WRITE)
// 0042ffe3: FMULP ST3
// 0042ffe5: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x50] (WRITE)
// 0042ffe9: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x4c] (WRITE)
// 0042ffed: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x48] (WRITE)
// 0042fff1: FLD float ptr [EDX]
// 0042fff3: FSUB float ptr [ESP + 0x18]
//   XREF to: Stack[-0x50] (READ)
// 0042fff7: FLD float ptr [EDX + 0x4]
// 0042fffa: FXCH
// 0042fffc: FSTP float ptr [EDX]
// 0042fffe: FSUB float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x4c] (READ)
// 00430002: FLD float ptr [EDX + 0x8]
// 00430005: FXCH
// 00430007: FSTP float ptr [EDX + 0x4]
// 0043000a: FSUB float ptr [ESP + 0x20]
//   XREF to: Stack[-0x48] (READ)
// 0043000e: LEA EAX,[EBX + 0x570]
// 00430014: FSTP float ptr [EDX + 0x8]
// 00430017: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x50] (READ)
// 0043001b: FMUL float ptr [EAX]
// 0043001d: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x4c] (READ)
// 00430021: FXCH
// 00430023: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x2c] (WRITE)
// 00430027: FMUL float ptr [EAX]
// 00430029: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x48] (READ)
// 0043002d: FXCH
// 0043002f: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x28] (WRITE)
// 00430033: FMUL float ptr [EAX]
// 00430035: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x24] (WRITE)
// 00430039: FLD float ptr [EDX + 0xc]
// 0043003c: FSUB float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x2c] (READ)
// 00430040: FLD float ptr [EDX + 0x10]
// 00430043: FXCH
// 00430045: FSTP float ptr [EDX + 0xc]
// 00430048: FSUB float ptr [ESP + 0x40]
//   XREF to: Stack[-0x28] (READ)
// 0043004c: FLD float ptr [EDX + 0x14]
// 0043004f: FXCH
// 00430051: FSTP float ptr [EDX + 0x10]
// 00430054: FSUB float ptr [ESP + 0x44]
//   XREF to: Stack[-0x24] (READ)
// 00430058: FSTP float ptr [EDX + 0x14]
// 0043005b: FLD float ptr [ECX]
// 0043005d: FADD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x50] (READ)
// 00430061: FLD float ptr [ECX + 0x4]
// 00430064: FXCH
// 00430066: FSTP float ptr [ECX]
// 00430068: FADD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x4c] (READ)
// 0043006c: FLD float ptr [ECX + 0x8]
// 0043006f: FXCH
// 00430071: FSTP float ptr [ECX + 0x4]
// 00430074: FADD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x48] (READ)
// 00430078: FSTP float ptr [ECX + 0x8]
// 0043007b: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x50] (READ)
// 0043007f: FMUL float ptr [EAX]
// 00430081: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x4c] (READ)
// 00430085: FXCH
// 00430087: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x5c] (WRITE)
// 0043008b: FMUL float ptr [EAX]
// 0043008d: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x48] (READ)
// 00430091: FXCH
// 00430093: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x58] (WRITE)
// 00430097: FMUL float ptr [EAX]
// 00430099: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x54] (WRITE)
// 0043009d: FLD float ptr [ECX + 0xc]
// 004300a0: FADD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x5c] (READ)
// 004300a4: FLD float ptr [ECX + 0x10]
// 004300a7: FXCH
// 004300a9: FSTP float ptr [ECX + 0xc]
// 004300ac: FADD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x58] (READ)
// 004300b0: FLD float ptr [ECX + 0x14]
// 004300b3: FXCH
// 004300b5: FSTP float ptr [ECX + 0x10]
// 004300b8: FADD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x54] (READ)
// 004300bc: FSTP float ptr [ECX + 0x14]
// 004300bf: ADD ESP,0x5c
// 004300c2: POP EDI
// 004300c3: POP ESI
// 004300c4: POP EBX
// 004300c5: RET
