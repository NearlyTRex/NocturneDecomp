// Name: core_mobster.cpp_FUN_00525110
// Address: 00525110
// Address Range: [[00525110, 005251ba]]
// Convention: unknown
// Signature: undefined core_mobster.cpp_FUN_00525110()
// Globals:
//   float FLOAT_006396a6 = 0.5
//   double DOUBLE_006396ae = 0.400000000000000
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CVector_ctor_FUN_00410340

#include "nocturne.h"

CVector3f * core_mobster_cpp_FUN_00525110(void)

{
  BADSPACEBASE *in_ESP;
  CVector3f *in_stack_00000004;
  CDemonActor *in_stack_00000008;
  float fStack_34;
  
  (*in_stack_00000008->vtable->getBoundingBox)(in_stack_00000008,(CBoundingBox3D *)&stack0xffffffc0)
  ;
  fStack_34 = 7.55965e-39;
  core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)&stack0xfffffff8);
  core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)&stack0xfffffff0);
  fStack_34 = 7.559815e-39;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000008,in_stack_00000004,(CVector3f *)&stack0xfffffff4);
  return in_stack_00000004;
}


// Assembly code:
// 00525110: PUSH EBX
//   Label: core_mobster.cpp_FUN_00525110
// 00525111: PUSH ESI
// 00525112: PUSH EBP
// 00525113: MOV EBP,ESP
// 00525115: SUB ESP,0x30
// 00525118: AND ESP,0xfffffff8
// 0052511b: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0052511e: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00525121: MOV EAX,ESP
// 00525123: PUSH EAX
// 00525124: MOV EDX,dword ptr [ESI + 0x154]
// 0052512a: PUSH ESI
// 0052512b: CALL dword ptr [EDX + 0x14]
// 0052512e: ADD ESP,0x8
// 00525131: LEA EAX,[ESP + 0x24]
// 00525135: PUSH EAX
// 00525136: CALL core_actor.cpp_CVector_ctor_FUN_00410340
//   XREF to: 00410340 (UNCONDITIONAL_CALL)
// 0052513b: ADD ESP,0x4
// 0052513e: LEA EAX,[ESP + 0x18]
// 00525142: FLD float ptr [ESP]
// 00525145: FLD float ptr [ESP + 0x4]
// 00525149: FLD float ptr [ESP + 0x8]
// 0052514d: PUSH EAX
// 0052514e: FXCH ST2
// 00525150: FADD float ptr [ESP + 0x10]
// 00525154: FXCH
// 00525156: FADD float ptr [ESP + 0x14]
// 0052515a: FXCH ST2
// 0052515c: FADD float ptr [ESP + 0x18]
// 00525160: FXCH
// 00525162: FSTP float ptr [ESP + 0x28]
// 00525166: FXCH
// 00525168: FSTP float ptr [ESP + 0x2c]
// 0052516c: FSTP float ptr [ESP + 0x30]
// 00525170: CALL core_actor.cpp_CVector_ctor_FUN_00410340
//   XREF to: 00410340 (UNCONDITIONAL_CALL)
// 00525175: ADD ESP,0x4
// 00525178: FLD float ptr [0x006396a6]
//   XREF to: 006396a6 (READ)
// 0052517e: FLD float ptr [ESP + 0x24]
// 00525182: FMUL ST1
// 00525184: LEA EAX,[ESP + 0x18]
// 00525188: FLD float ptr [ESP + 0x28]
// 0052518c: FMULP ST2
// 0052518e: PUSH EAX
// 0052518f: FLD float ptr [ESP + 0xc]
// 00525193: PUSH EBX
// 00525194: FADD double ptr [0x006396ae]
//   XREF to: 006396ae (READ)
// 0052519a: FXCH
// 0052519c: FSTP float ptr [ESP + 0x20]
// 005251a0: FXCH
// 005251a2: FSTP float ptr [ESP + 0x24]
// 005251a6: PUSH ESI
// 005251a7: FSTP float ptr [ESP + 0x2c]
// 005251ab: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005251b0: ADD ESP,0xc
// 005251b3: MOV EAX,EBX
// 005251b5: MOV ESP,EBP
// 005251b7: POP EBP
// 005251b8: POP ESI
// 005251b9: POP EBX
// 005251ba: RET
