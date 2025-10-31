// Name: core_zombie.cpp_CZombie_FUN_005f8e50
// Address: 005f8e50
// Address Range: [[005f8e50, 005f8f99]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_CZombie_FUN_005f8e50()
// Cross-references:
//   core_zombie.cpp_CZombie_PickupSomethingPossibly_FUN_005fb530 (005fb530) at 005fbb6e [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0065845d
//   undefined4 DAT_00658465
//   undefined4 DAT_0065846d

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_zombie.cpp_CZombie_FUN_005f8e50(CZombie* param_1) */

undefined4 core_zombie_cpp_CZombie_FUN_005f8e50(void)

{
  float *in_stack_00000004;
  
  if ((((((float)_DAT_0065845d <= *in_stack_00000004) ||
        ((float)_DAT_0065845d <= in_stack_00000004[1])) ||
       ((float)_DAT_0065845d <= in_stack_00000004[2])) ||
      ((*in_stack_00000004 <= (float)_DAT_00658465 || (in_stack_00000004[1] <= (float)_DAT_00658465)
       ))) || (in_stack_00000004[2] <= (float)_DAT_00658465)) {
    if (((*in_stack_00000004 < 1.0) && (in_stack_00000004[1] < 1.0)) &&
       (((float)_DAT_0065845d < in_stack_00000004[2] &&
        (((in_stack_00000004[2] < (float)_DAT_0065846d &&
          (*in_stack_00000004 <= in_stack_00000004[2])) &&
         (in_stack_00000004[1] <= in_stack_00000004[2])))))) {
      return 1;
    }
    if ((((*in_stack_00000004 < 1.0) && (in_stack_00000004[1] < 1.0)) &&
        ((1.0 < in_stack_00000004[2] &&
         ((in_stack_00000004[2] < (float)_DAT_0065845d &&
          (*in_stack_00000004 < in_stack_00000004[2])))))) &&
       (in_stack_00000004[1] < in_stack_00000004[2])) {
      return 3;
    }
  }
  return 0;
}


// Assembly code:
// 005f8e50: PUSH EBP
//   Label: core_zombie.cpp_CZombie_FUN_005f8e50
// 005f8e51: MOV EBP,ESP
// 005f8e53: SUB ESP,0x28
// 005f8e56: AND ESP,0xfffffff8
// 005f8e59: MOV EDX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005f8e5c: FLD float ptr [EDX]
// 005f8e5e: FST double ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (WRITE)
// 005f8e62: FCOMP double ptr [0x0065845d]
//   XREF to: 0065845d (READ)
// 005f8e68: FNSTSW AX
// 005f8e6a: SAHF
// 005f8e6b: JC 0x005f8f28
//   XREF to: 005f8f28 (CONDITIONAL_JUMP)
// 005f8e71: FLD float ptr [EDX]
//   Label: LAB_005f8e71
// 005f8e73: FLD1
// 005f8e75: FCOMPP
// 005f8e77: FNSTSW AX
// 005f8e79: SAHF
// 005f8e7a: JBE 0x005f8ec2
//   XREF to: 005f8ec2 (CONDITIONAL_JUMP)
// 005f8e7c: FLD float ptr [EDX + 0x4]
// 005f8e7f: FLD1
// 005f8e81: FCOMPP
// 005f8e83: FNSTSW AX
// 005f8e85: SAHF
// 005f8e86: JBE 0x005f8ec2
//   XREF to: 005f8ec2 (CONDITIONAL_JUMP)
// 005f8e88: FLD float ptr [EDX + 0x8]
// 005f8e8b: FST double ptr [ESP + 0x20]
//   XREF to: Stack[-0x10] (WRITE)
// 005f8e8f: FCOMP double ptr [0x0065845d]
//   XREF to: 0065845d (READ)
// 005f8e95: FNSTSW AX
// 005f8e97: SAHF
// 005f8e98: JBE 0x005f8ec2
//   XREF to: 005f8ec2 (CONDITIONAL_JUMP)
// 005f8e9a: FLD double ptr [ESP + 0x20]
//   XREF to: Stack[-0x10] (READ)
// 005f8e9e: FCOMP double ptr [0x0065846d]
//   XREF to: 0065846d (READ)
// 005f8ea4: FNSTSW AX
// 005f8ea6: SAHF
// 005f8ea7: JNC 0x005f8ec2
//   XREF to: 005f8ec2 (CONDITIONAL_JUMP)
// 005f8ea9: FLD float ptr [EDX + 0x8]
// 005f8eac: FCOMP float ptr [EDX]
// 005f8eae: FNSTSW AX
// 005f8eb0: SAHF
// 005f8eb1: JBE 0x005f8ec2
//   XREF to: 005f8ec2 (CONDITIONAL_JUMP)
// 005f8eb3: FLD float ptr [EDX + 0x8]
// 005f8eb6: FCOMP float ptr [EDX + 0x4]
// 005f8eb9: FNSTSW AX
// 005f8ebb: SAHF
// 005f8ebc: JA 0x005f8f91
//   XREF to: 005f8f91 (CONDITIONAL_JUMP)
// 005f8ec2: FLD float ptr [EDX]
//   Label: LAB_005f8ec2
// 005f8ec4: FLD1
// 005f8ec6: FCOMPP
// 005f8ec8: FNSTSW AX
// 005f8eca: SAHF
// 005f8ecb: JBE 0x005f8f8b
//   XREF to: 005f8f8b (CONDITIONAL_JUMP)
// 005f8ed1: FLD float ptr [EDX + 0x4]
// 005f8ed4: FLD1
// 005f8ed6: FCOMPP
// 005f8ed8: FNSTSW AX
// 005f8eda: SAHF
// 005f8edb: JBE 0x005f8f8b
//   XREF to: 005f8f8b (CONDITIONAL_JUMP)
// 005f8ee1: FLD1
// 005f8ee3: FLD float ptr [EDX + 0x8]
// 005f8ee6: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 005f8eea: FCOMP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 005f8eee: FNSTSW AX
// 005f8ef0: SAHF
// 005f8ef1: JNC 0x005f8f8b
//   XREF to: 005f8f8b (CONDITIONAL_JUMP)
// 005f8ef7: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 005f8efb: FCOMP double ptr [0x0065845d]
//   XREF to: 0065845d (READ)
// 005f8f01: FNSTSW AX
// 005f8f03: SAHF
// 005f8f04: JNC 0x005f8f8b
//   XREF to: 005f8f8b (CONDITIONAL_JUMP)
// 005f8f0a: FLD float ptr [EDX + 0x8]
// 005f8f0d: FCOMP float ptr [EDX]
// 005f8f0f: FNSTSW AX
// 005f8f11: SAHF
// 005f8f12: JBE 0x005f8f8b
//   XREF to: 005f8f8b (CONDITIONAL_JUMP)
// 005f8f14: FLD float ptr [EDX + 0x8]
// 005f8f17: FCOMP float ptr [EDX + 0x4]
// 005f8f1a: FNSTSW AX
// 005f8f1c: SAHF
// 005f8f1d: JBE 0x005f8f8b
//   XREF to: 005f8f8b (CONDITIONAL_JUMP)
// 005f8f1f: MOV EAX,0x3
// 005f8f24: MOV ESP,EBP
// 005f8f26: POP EBP
// 005f8f27: RET
// 005f8f28: FLD float ptr [EDX + 0x4]
//   Label: LAB_005f8f28
// 005f8f2b: FST double ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (WRITE)
// 005f8f2f: FCOMP double ptr [0x0065845d]
//   XREF to: 0065845d (READ)
// 005f8f35: FNSTSW AX
// 005f8f37: SAHF
// 005f8f38: JNC 0x005f8e71
//   XREF to: 005f8e71 (CONDITIONAL_JUMP)
// 005f8f3e: FLD float ptr [EDX + 0x8]
// 005f8f41: FST double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 005f8f44: FCOMP double ptr [0x0065845d]
//   XREF to: 0065845d (READ)
// 005f8f4a: FNSTSW AX
// 005f8f4c: SAHF
// 005f8f4d: JNC 0x005f8e71
//   XREF to: 005f8e71 (CONDITIONAL_JUMP)
// 005f8f53: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 005f8f57: FCOMP double ptr [0x00658465]
//   XREF to: 00658465 (READ)
// 005f8f5d: FNSTSW AX
// 005f8f5f: SAHF
// 005f8f60: JBE 0x005f8e71
//   XREF to: 005f8e71 (CONDITIONAL_JUMP)
// 005f8f66: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 005f8f6a: FCOMP double ptr [0x00658465]
//   XREF to: 00658465 (READ)
// 005f8f70: FNSTSW AX
// 005f8f72: SAHF
// 005f8f73: JBE 0x005f8e71
//   XREF to: 005f8e71 (CONDITIONAL_JUMP)
// 005f8f79: FLD double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 005f8f7c: FCOMP double ptr [0x00658465]
//   XREF to: 00658465 (READ)
// 005f8f82: FNSTSW AX
// 005f8f84: SAHF
// 005f8f85: JBE 0x005f8e71
//   XREF to: 005f8e71 (CONDITIONAL_JUMP)
// 005f8f8b: XOR EAX,EAX
//   Label: LAB_005f8f8b
// 005f8f8d: MOV ESP,EBP
// 005f8f8f: POP EBP
// 005f8f90: RET
// 005f8f91: MOV EAX,0x1
//   Label: LAB_005f8f91
// 005f8f96: MOV ESP,EBP
// 005f8f98: POP EBP
// 005f8f99: RET
