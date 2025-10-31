// Name: core_boneguy.cpp_FUN_0041b770
// Address: 0041b770
// Address Range: [[0041b770, 0041b81a]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_FUN_0041b770()
// Globals:
//   undefined4 DAT_00615f1d
//   undefined4 DAT_00615f25
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_actor.cpp_CVector_ctor_FUN_00410340

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 core_boneguy_cpp_FUN_0041b770(void)

{
  BADSPACEBASE *in_ESP;
  undefined4 in_stack_00000004;
  CDemonActor *in_stack_00000008;
  float fStack_34;
  
  (*((in_stack_00000008->metadata).vtable)->getBoundingBox)
            (in_stack_00000008,(CBoundingBox3D *)&stack0xffffffc0);
  fStack_34 = 6.035172e-39;
  core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)&stack0xfffffff8);
  core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)&stack0xfffffff0);
  fStack_34 = 6.035336e-39;
  core_actor_cpp_CDemonActor_FUN_00408ec0(in_stack_00000008);
  return in_stack_00000004;
}


// Assembly code:
// 0041b770: PUSH EBX
//   Label: core_boneguy.cpp_FUN_0041b770
// 0041b771: PUSH ESI
// 0041b772: PUSH EBP
// 0041b773: MOV EBP,ESP
// 0041b775: SUB ESP,0x30
// 0041b778: AND ESP,0xfffffff8
// 0041b77b: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0041b77e: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0041b781: MOV EAX,ESP
// 0041b783: PUSH EAX
// 0041b784: MOV EDX,dword ptr [ESI + 0x154]
// 0041b78a: PUSH ESI
// 0041b78b: CALL dword ptr [EDX + 0x14]
// 0041b78e: ADD ESP,0x8
// 0041b791: LEA EAX,[ESP + 0x24]
// 0041b795: PUSH EAX
// 0041b796: CALL core_actor.cpp_CVector_ctor_FUN_00410340
//   XREF to: 00410340 (UNCONDITIONAL_CALL)
// 0041b79b: ADD ESP,0x4
// 0041b79e: LEA EAX,[ESP + 0x18]
// 0041b7a2: FLD float ptr [ESP]
// 0041b7a5: FLD float ptr [ESP + 0x4]
// 0041b7a9: FLD float ptr [ESP + 0x8]
// 0041b7ad: PUSH EAX
// 0041b7ae: FXCH ST2
// 0041b7b0: FADD float ptr [ESP + 0x10]
// 0041b7b4: FXCH
// 0041b7b6: FADD float ptr [ESP + 0x14]
// 0041b7ba: FXCH ST2
// 0041b7bc: FADD float ptr [ESP + 0x18]
// 0041b7c0: FXCH
// 0041b7c2: FSTP float ptr [ESP + 0x28]
// 0041b7c6: FXCH
// 0041b7c8: FSTP float ptr [ESP + 0x2c]
// 0041b7cc: FSTP float ptr [ESP + 0x30]
// 0041b7d0: CALL core_actor.cpp_CVector_ctor_FUN_00410340
//   XREF to: 00410340 (UNCONDITIONAL_CALL)
// 0041b7d5: ADD ESP,0x4
// 0041b7d8: FLD float ptr [0x00615f1d]
//   XREF to: 00615f1d (READ)
// 0041b7de: FLD float ptr [ESP + 0x24]
// 0041b7e2: FMUL ST1
// 0041b7e4: LEA EAX,[ESP + 0x18]
// 0041b7e8: FLD float ptr [ESP + 0x28]
// 0041b7ec: FMULP ST2
// 0041b7ee: PUSH EAX
// 0041b7ef: FLD float ptr [ESP + 0xc]
// 0041b7f3: PUSH EBX
// 0041b7f4: FADD double ptr [0x00615f25]
//   XREF to: 00615f25 (READ)
// 0041b7fa: FXCH
// 0041b7fc: FSTP float ptr [ESP + 0x20]
// 0041b800: FXCH
// 0041b802: FSTP float ptr [ESP + 0x24]
// 0041b806: PUSH ESI
// 0041b807: FSTP float ptr [ESP + 0x2c]
// 0041b80b: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0041b810: ADD ESP,0xc
// 0041b813: MOV EAX,EBX
// 0041b815: MOV ESP,EBP
// 0041b817: POP EBP
// 0041b818: POP ESI
// 0041b819: POP EBX
// 0041b81a: RET
