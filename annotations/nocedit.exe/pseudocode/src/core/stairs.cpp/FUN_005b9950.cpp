// Name: core_stairs.cpp_FUN_005b9950
// Address: 005b9950
// Address Range: [[005b9950, 005b9a10]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005b9950()
// Cross-references:
//   core_stairs.cpp_FUN_005b9670 (005b9670) at 005b9940 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00652ffa
//   undefined4 DAT_00653002
//   undefined4 DAT_00653006
//   undefined4 DAT_0065300a
//   undefined4 DAT_00653012
//   undefined4 DAT_0065301a
//   undefined4 DAT_00653022
//   undefined4 DAT_0065302a
//   double DOUBLE_00653032 = 100

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_stairs.cpp_FUN_005b9950(undefined4 param_1) */

void core_stairs_cpp_FUN_005b9950(void)

{
  int in_stack_00000004;
  
  if (*(float *)(in_stack_00000004 + 0x28) < (float)_DAT_00652ffa) {
    *(float *)(in_stack_00000004 + 0x28) = *(float *)(in_stack_00000004 + 0x28) + _DAT_00653002;
  }
  if ((float)_DAT_00652ffa < *(float *)(in_stack_00000004 + 0x28)) {
    *(float *)(in_stack_00000004 + 0x28) = *(float *)(in_stack_00000004 + 0x28) + _DAT_00653006;
  }
  if (*(float *)(in_stack_00000004 + 0x24) < (float)_DAT_0065300a) {
    *(undefined4 *)(in_stack_00000004 + 0x24) = 0xbfc90fdb;
  }
  if ((float)_DAT_00653012 < *(float *)(in_stack_00000004 + 0x24)) {
    *(undefined4 *)(in_stack_00000004 + 0x24) = 0x3fc90fdb;
  }
  if (*(float *)(in_stack_00000004 + 0x2c) < (float)_DAT_0065301a) {
    *(undefined4 *)(in_stack_00000004 + 0x2c) = 0x3dcccccd;
  }
  if ((float)_DAT_00653022 < *(float *)(in_stack_00000004 + 0x2c)) {
    *(undefined4 *)(in_stack_00000004 + 0x2c) = 0x461c4000;
  }
  if (*(float *)(in_stack_00000004 + 0x38) < (float)_DAT_0065302a) {
    *(undefined4 *)(in_stack_00000004 + 0x38) = 0x3c23d70a;
  }
  if (*(float *)(in_stack_00000004 + 0x38) <= (float)DOUBLE_00653032) {
    return;
  }
  *(undefined4 *)(in_stack_00000004 + 0x38) = 0x42c80000;
  return;
}


// Assembly code:
// 005b9950: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_stairs.cpp_FUN_005b9950
//   XREF to: Stack[0x4] (READ)
// 005b9954: FLD float ptr [EDX + 0x28]
// 005b9957: FCOMP double ptr [0x00652ffa]
//   XREF to: 00652ffa (READ)
// 005b995d: FNSTSW AX
// 005b995f: SAHF
// 005b9960: JC 0x005b99f8
//   XREF to: 005b99f8 (CONDITIONAL_JUMP)
// 005b9966: FLD float ptr [EDX + 0x28]
//   Label: LAB_005b9966
// 005b9969: FCOMP double ptr [0x00652ffa]
//   XREF to: 00652ffa (READ)
// 005b996f: FNSTSW AX
// 005b9971: SAHF
// 005b9972: JBE 0x005b9980
//   XREF to: 005b9980 (CONDITIONAL_JUMP)
// 005b9974: FLD float ptr [EDX + 0x28]
// 005b9977: FADD float ptr [0x00653006]
//   XREF to: 00653006 (READ)
// 005b997d: FSTP float ptr [EDX + 0x28]
// 005b9980: FLD float ptr [EDX + 0x24]
//   Label: LAB_005b9980
// 005b9983: FCOMP double ptr [0x0065300a]
//   XREF to: 0065300a (READ)
// 005b9989: FNSTSW AX
// 005b998b: SAHF
// 005b998c: JNC 0x005b9995
//   XREF to: 005b9995 (CONDITIONAL_JUMP)
// 005b998e: MOV dword ptr [EDX + 0x24],0xbfc90fdb
// 005b9995: FLD float ptr [EDX + 0x24]
//   Label: LAB_005b9995
// 005b9998: FCOMP double ptr [0x00653012]
//   XREF to: 00653012 (READ)
// 005b999e: FNSTSW AX
// 005b99a0: SAHF
// 005b99a1: JBE 0x005b99aa
//   XREF to: 005b99aa (CONDITIONAL_JUMP)
// 005b99a3: MOV dword ptr [EDX + 0x24],0x3fc90fdb
// 005b99aa: FLD float ptr [EDX + 0x2c]
//   Label: LAB_005b99aa
// 005b99ad: FCOMP double ptr [0x0065301a]
//   XREF to: 0065301a (READ)
// 005b99b3: FNSTSW AX
// 005b99b5: SAHF
// 005b99b6: JNC 0x005b99bf
//   XREF to: 005b99bf (CONDITIONAL_JUMP)
// 005b99b8: MOV dword ptr [EDX + 0x2c],0x3dcccccd
// 005b99bf: FLD float ptr [EDX + 0x2c]
//   Label: LAB_005b99bf
// 005b99c2: FCOMP double ptr [0x00653022]
//   XREF to: 00653022 (READ)
// 005b99c8: FNSTSW AX
// 005b99ca: SAHF
// 005b99cb: JBE 0x005b99d4
//   XREF to: 005b99d4 (CONDITIONAL_JUMP)
// 005b99cd: MOV dword ptr [EDX + 0x2c],0x461c4000
// 005b99d4: FLD float ptr [EDX + 0x38]
//   Label: LAB_005b99d4
// 005b99d7: FCOMP double ptr [0x0065302a]
//   XREF to: 0065302a (READ)
// 005b99dd: FNSTSW AX
// 005b99df: SAHF
// 005b99e0: JNC 0x005b99e9
//   XREF to: 005b99e9 (CONDITIONAL_JUMP)
// 005b99e2: MOV dword ptr [EDX + 0x38],0x3c23d70a
// 005b99e9: FLD float ptr [EDX + 0x38]
//   Label: LAB_005b99e9
// 005b99ec: FCOMP double ptr [0x00653032]
//   XREF to: 00653032 (READ)
// 005b99f2: FNSTSW AX
// 005b99f4: SAHF
// 005b99f5: JA 0x005b9a09
//   XREF to: 005b9a09 (CONDITIONAL_JUMP)
// 005b99f7: RET
// 005b99f8: FLD float ptr [EDX + 0x28]
//   Label: LAB_005b99f8
// 005b99fb: FADD float ptr [0x00653002]
//   XREF to: 00653002 (READ)
// 005b9a01: FSTP float ptr [EDX + 0x28]
// 005b9a04: JMP 0x005b9966
//   XREF to: 005b9966 (UNCONDITIONAL_JUMP)
// 005b9a09: MOV dword ptr [EDX + 0x38],0x42c80000
//   Label: LAB_005b9a09
// 005b9a10: RET
