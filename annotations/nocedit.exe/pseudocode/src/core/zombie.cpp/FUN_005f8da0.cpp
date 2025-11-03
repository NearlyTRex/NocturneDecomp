// Name: core_zombie.cpp_FUN_005f8da0
// Address: 005f8da0
// Address Range: [[005f8da0, 005f8e4a]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_FUN_005f8da0()
// Globals:
//   undefined4 DAT_0065844d
//   undefined4 DAT_00658455
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CVector_ctor_FUN_00410340

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * core_zombie_cpp_FUN_005f8da0(void)

{
  BADSPACEBASE *in_ESP;
  CVector3f *in_stack_00000004;
  CDemonActor *in_stack_00000008;
  float fStack_34;
  
  (*in_stack_00000008->vtable->getBoundingBox)(in_stack_00000008,(CBoundingBox3D *)&stack0xffffffc0)
  ;
  fStack_34 = 8.775238e-39;
  core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)&stack0xfffffff8);
  core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)&stack0xfffffff0);
  fStack_34 = 8.775402e-39;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000008,in_stack_00000004,(CVector3f *)&stack0xfffffff4);
  return in_stack_00000004;
}


// Assembly code:
// 005f8da0: PUSH EBX
//   Label: core_zombie.cpp_FUN_005f8da0
// 005f8da1: PUSH ESI
// 005f8da2: PUSH EBP
// 005f8da3: MOV EBP,ESP
// 005f8da5: SUB ESP,0x30
// 005f8da8: AND ESP,0xfffffff8
// 005f8dab: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005f8dae: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005f8db1: MOV EAX,ESP
// 005f8db3: PUSH EAX
// 005f8db4: MOV EDX,dword ptr [ESI + 0x154]
// 005f8dba: PUSH ESI
// 005f8dbb: CALL dword ptr [EDX + 0x14]
// 005f8dbe: ADD ESP,0x8
// 005f8dc1: LEA EAX,[ESP + 0x24]
// 005f8dc5: PUSH EAX
// 005f8dc6: CALL core_actor.cpp_CVector_ctor_FUN_00410340
//   XREF to: 00410340 (UNCONDITIONAL_CALL)
// 005f8dcb: ADD ESP,0x4
// 005f8dce: LEA EAX,[ESP + 0x18]
// 005f8dd2: FLD float ptr [ESP]
// 005f8dd5: FLD float ptr [ESP + 0x4]
// 005f8dd9: FLD float ptr [ESP + 0x8]
// 005f8ddd: PUSH EAX
// 005f8dde: FXCH ST2
// 005f8de0: FADD float ptr [ESP + 0x10]
// 005f8de4: FXCH
// 005f8de6: FADD float ptr [ESP + 0x14]
// 005f8dea: FXCH ST2
// 005f8dec: FADD float ptr [ESP + 0x18]
// 005f8df0: FXCH
// 005f8df2: FSTP float ptr [ESP + 0x28]
// 005f8df6: FXCH
// 005f8df8: FSTP float ptr [ESP + 0x2c]
// 005f8dfc: FSTP float ptr [ESP + 0x30]
// 005f8e00: CALL core_actor.cpp_CVector_ctor_FUN_00410340
//   XREF to: 00410340 (UNCONDITIONAL_CALL)
// 005f8e05: ADD ESP,0x4
// 005f8e08: FLD float ptr [0x0065844d]
//   XREF to: 0065844d (READ)
// 005f8e0e: FLD float ptr [ESP + 0x24]
// 005f8e12: FMUL ST1
// 005f8e14: LEA EAX,[ESP + 0x18]
// 005f8e18: FLD float ptr [ESP + 0x28]
// 005f8e1c: FMULP ST2
// 005f8e1e: PUSH EAX
// 005f8e1f: FLD float ptr [ESP + 0xc]
// 005f8e23: PUSH EBX
// 005f8e24: FADD double ptr [0x00658455]
//   XREF to: 00658455 (READ)
// 005f8e2a: FXCH
// 005f8e2c: FSTP float ptr [ESP + 0x20]
// 005f8e30: FXCH
// 005f8e32: FSTP float ptr [ESP + 0x24]
// 005f8e36: PUSH ESI
// 005f8e37: FSTP float ptr [ESP + 0x2c]
// 005f8e3b: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005f8e40: ADD ESP,0xc
// 005f8e43: MOV EAX,EBX
// 005f8e45: MOV ESP,EBP
// 005f8e47: POP EBP
// 005f8e48: POP ESI
// 005f8e49: POP EBX
// 005f8e4a: RET
