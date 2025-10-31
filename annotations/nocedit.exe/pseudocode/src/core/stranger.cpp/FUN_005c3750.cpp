// Name: core_stranger.cpp_FUN_005c3750
// Address: 005c3750
// Address Range: [[005c3750, 005c37da]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_FUN_005c3750()
// Globals:
//   undefined4 DAT_00653c84
// Function calls:
//   core_actor.cpp_FUN_0040cd70
//   crt_math.c_acos_FUN_00600162

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_stranger_cpp_FUN_005c3750(void)

{
  float fVar1;
  double dVar2;
  float *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  
  if ((((float)_DAT_00653c84 <= in_stack_00000008) &&
      (dVar2 = (double)(SQRT(in_stack_00000008 * in_stack_00000008 -
                             in_stack_0000000c * in_stack_0000000c) / in_stack_00000008),
      dVar2 < 1.0)) && (0.0 <= dVar2)) {
    dVar2 = crt_math_c_acos_FUN_00600162(dVar2);
    if (in_stack_0000000c < 0.0) {
      fVar1 = *in_stack_00000004 - (float)dVar2;
    }
    else {
      fVar1 = *in_stack_00000004 + (float)dVar2;
    }
    *in_stack_00000004 = fVar1;
    fVar1 = core_actor_cpp_FUN_0040cd70(*in_stack_00000004);
    *in_stack_00000004 = fVar1;
  }
  return;
}


// Assembly code:
// 005c3750: PUSH EBX
//   Label: core_stranger.cpp_FUN_005c3750
// 005c3751: PUSH EBP
// 005c3752: MOV EBP,ESP
// 005c3754: SUB ESP,0x18
// 005c3757: AND ESP,0xfffffff8
// 005c375a: MOV EBX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005c375d: FLD float ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005c3760: FST double ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 005c3764: FCOMP double ptr [0x00653c84]
//   XREF to: 00653c84 (READ)
// 005c376a: FNSTSW AX
// 005c376c: SAHF
// 005c376d: JC 0x005c37ce
//   XREF to: 005c37ce (CONDITIONAL_JUMP)
// 005c376f: FLD float ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005c3772: FMUL ST0
// 005c3774: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 005c3777: FMUL ST0
// 005c3779: FSUBP
// 005c377b: FSQRT
// 005c377d: FDIV double ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 005c3781: FLD1
// 005c3783: FXCH
// 005c3785: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005c3788: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005c378b: FNSTSW AX
// 005c378d: SAHF
// 005c378e: JBE 0x005c37ce
//   XREF to: 005c37ce (CONDITIONAL_JUMP)
// 005c3790: FLDZ
// 005c3792: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005c3795: FNSTSW AX
// 005c3797: SAHF
// 005c3798: JA 0x005c37ce
//   XREF to: 005c37ce (CONDITIONAL_JUMP)
// 005c379a: FLD double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005c379d: CALL crt_math.c_acos_FUN_00600162
//   XREF to: 00600162 (UNCONDITIONAL_CALL)
// 005c37a2: FLDZ
// 005c37a4: FXCH
// 005c37a6: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (WRITE)
// 005c37aa: FCOMP float ptr [EBP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 005c37ad: FNSTSW AX
// 005c37af: SAHF
// 005c37b0: JA 0x005c37d3
//   XREF to: 005c37d3 (CONDITIONAL_JUMP)
// 005c37b2: FLD float ptr [EBX]
// 005c37b4: FADD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (READ)
// 005c37b8: FSTP float ptr [EBX]
//   Label: LAB_005c37b8
// 005c37ba: PUSH dword ptr [EBX]
// 005c37bc: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005c37c1: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 005c37c5: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0xc] (READ)
// 005c37c9: MOV dword ptr [EBX],EAX
// 005c37cb: ADD ESP,0x4
// 005c37ce: MOV ESP,EBP
//   Label: LAB_005c37ce
// 005c37d0: POP EBP
// 005c37d1: POP EBX
// 005c37d2: RET
// 005c37d3: FLD float ptr [EBX]
//   Label: LAB_005c37d3
// 005c37d5: FSUB float ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (READ)
// 005c37d9: JMP 0x005c37b8
//   XREF to: 005c37b8 (UNCONDITIONAL_JUMP)
