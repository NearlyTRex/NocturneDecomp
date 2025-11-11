// Name: sound_sndmain.cpp_FUN_005aa290
// Address: 005aa290
// Address Range: [[005aa290, 005aa2e8]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005aa290()
// Cross-references:
//   core_bat.cpp_CBat_process_FUN_00414a00 (00414a00) at 00414b98 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c567 [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048ec70 (0048ec70) at 0048edc9 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8070 (004a8070) at 004a80f4 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f1970 (004f1970) at 004f1a19 [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_process_FUN_005e4210 (005e4210) at 005e4d10 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_03f68830
//   undefined4 DAT_03f68838
//   undefined4 DAT_03f68840

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sound_sndmain_cpp_FUN_005aa290(void)

{
  double in_stack_00000004;
  double in_stack_0000000c;
  double in_stack_00000014;
  double in_stack_0000001c;
  
  if ((in_stack_00000014 - _DAT_03f68840) * (in_stack_00000014 - _DAT_03f68840) +
      (in_stack_0000000c - _DAT_03f68838) * (in_stack_0000000c - _DAT_03f68838) +
      (in_stack_00000004 - _DAT_03f68830) * (in_stack_00000004 - _DAT_03f68830) <=
      in_stack_0000001c * in_stack_0000001c) {
    return 1;
  }
  return 0;
}


// Assembly code:
// 005aa290: FLD double ptr [ESP + 0xc]
//   Label: sound_sndmain.cpp_FUN_005aa290
//   XREF to: Stack[0xc] (READ)
// 005aa294: FLD double ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005aa298: FSUB double ptr [0x03f68830]
//   XREF to: 03f68830 (READ)
// 005aa29e: FXCH
// 005aa2a0: FSUB double ptr [0x03f68838]
//   XREF to: 03f68838 (READ)
// 005aa2a6: FXCH
// 005aa2a8: FST double ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (WRITE)
// 005aa2ac: FMUL double ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005aa2b0: FXCH
// 005aa2b2: FST double ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (WRITE)
// 005aa2b6: FMUL double ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 005aa2ba: FLD double ptr [ESP + 0x14]
//   XREF to: Stack[0x14] (READ)
// 005aa2be: FSUB double ptr [0x03f68840]
//   XREF to: 03f68840 (READ)
// 005aa2c4: FXCH
// 005aa2c6: FADDP ST2,ST0
// 005aa2c8: FST double ptr [ESP + 0x14]
//   XREF to: Stack[0x14] (WRITE)
// 005aa2cc: FMUL double ptr [ESP + 0x14]
//   XREF to: Stack[0x14] (READ)
// 005aa2d0: FADDP
// 005aa2d2: FLD double ptr [ESP + 0x1c]
//   XREF to: Stack[0x1c] (READ)
// 005aa2d6: FMUL ST0
// 005aa2d8: FCOMPP
// 005aa2da: FNSTSW AX
// 005aa2dc: SAHF
// 005aa2dd: JC 0x005a8cf0
//   XREF to: 005a8cf0 (CONDITIONAL_JUMP)
// 005aa2e3: MOV EAX,0x1
// 005aa2e8: RET
