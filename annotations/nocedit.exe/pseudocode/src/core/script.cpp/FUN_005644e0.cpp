// Name: core_script.cpp_FUN_005644e0
// Address: 005644e0
// Address Range: [[0056449b, 005644d0] [005644e0, 005644ff]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_005644e0()
// Cross-references:
//   core_script.cpp_CScript_Unk20_FUN_00565130 (00565130) at 00565a62 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_editorAction_FUN_00564820 (00564820) at 00564d2a [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_unk50_FUN_00566660 (00566660) at 005667e3 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565ae0 (00565ae0) at 00565c4b [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565d00 (00565d00) at 00565e0b [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565f70 (00565f70) at 0056604f [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566080 (00566080) at 0056612e [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005677a0 (005677a0) at 005679df [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0310fd44
//   undefined4 DAT_0310fd4c
//   undefined4 DAT_0310fd50

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00564514) */
/* WARNING: Removing unreachable block (ram,0x00564518) */
/* WARNING: Removing unreachable block (ram,0x005644ab) */
/* WARNING: Removing unreachable block (ram,0x00564522) */
/* WARNING: Removing unreachable block (ram,0x005644ba) */
/* WARNING: Removing unreachable block (ram,0x00564524) */
/* WARNING: Removing unreachable block (ram,0x005644cb) */
/* WARNING: Removing unreachable block (ram,0x00564531) */

undefined4 core_script_cpp_FUN_005644e0(undefined4 param_1)

{
  DAT_031141c4 = 0xffffffff;
  DAT_0310fd4c = 0xffffffff;
  DAT_0310fd50 = 0xffffffff;
  DAT_031141c0 = 0xffffffff;
  DAT_031141cc = 0xffffffff;
  DAT_031141c8 = 0xffffffff;
  return param_1;
}


// Assembly code:
// 0056449b: MOV EDX,0xffffffff
//   Label: LAB_0056449b
// 005644a0: MOV EBX,EDX
// 005644a2: MOV ECX,EDX
// 005644a4: MOV EBP,EDX
// 005644a6: JMP 0x00564535
//   XREF to: 00564535 (UNCONDITIONAL_JUMP)
// 005644ab: MOV EDX,dword ptr [0x0310fd44]
//   Label: LAB_005644ab
//   XREF to: 0310fd44 (READ)
// 005644b1: MOV EBX,EDI
// 005644b3: MOV EBP,ESI
// 005644b5: JMP 0x00564535
//   XREF to: 00564535 (UNCONDITIONAL_JUMP)
// 005644ba: MOV EBX,dword ptr [0x0310fd44]
//   Label: LAB_005644ba
//   XREF to: 0310fd44 (READ)
// 005644c0: MOV EBP,ECX
// 005644c2: MOV EDX,EDI
// 005644c4: MOV ECX,ESI
// 005644c6: JMP 0x00564535
//   XREF to: 00564535 (UNCONDITIONAL_JUMP)
// 005644cb: MOV EDX,EDI
//   Label: LAB_005644cb
// 005644cd: MOV EBX,EAX
// 005644cf: JMP 0x00564535
//   XREF to: 00564535 (UNCONDITIONAL_JUMP)
// 005644e0: MOV EDX,0xffffffff
//   Label: core_script.cpp_FUN_005644e0
// 005644e5: MOV dword ptr [0x0310fd50],EDX
//   XREF to: 0310fd50 (WRITE)
// 005644eb: MOV dword ptr [0x0310fd4c],EDX
//   XREF to: 0310fd4c (WRITE)
