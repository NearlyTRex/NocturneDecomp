// Name: core_actor.cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0
// Address: 0040a0f0
// Address Range: [[0040a0f0, 0040a202]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0(CDemonActor * this_ptr)
// Cross-references:
//   core_bodypart.cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_0041b1f0 (0041b1f0) at 0041b201 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_actor_cpp_00613a19
//   double DOUBLE_00613a30 = 2
//   double DOUBLE_00613a38 = 6
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80

#include "nocturne.h"

int __cdecl
core_actor_cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0(CDemonActor *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CBoundingBox3D *pCVar4;
  uint uVar5;
  BADSPACEBASE *in_ESP;
  CBoundingBox3D CStack_2c;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x5ae);
  pCVar4 = (*this_ptr->vtable->getBoundingBox)(this_ptr,&CStack_2c);
  fVar1 = (pCVar4->max).x - (pCVar4->min).x;
  uVar5 = 0;
  fVar2 = (pCVar4->max).y - (pCVar4->min).y;
  fVar3 = (pCVar4->max).z - (pCVar4->min).z;
  if ((((fVar1 < 1.0) && (fVar2 < 1.0)) && ((float)DOUBLE_00613a30 < fVar3)) &&
     (((fVar3 < (float)DOUBLE_00613a38 && (fVar1 < fVar3)) && (fVar2 < fVar3)))) {
    uVar5 = 2;
  }
  if (((fVar1 < 1.0) && (fVar2 < 1.0)) &&
     ((1.0 < fVar3 && (((fVar3 < (float)DOUBLE_00613a30 && (fVar1 < fVar3)) && (fVar2 < fVar3))))))
  {
    uVar5 = uVar5 | 4;
  }
  return uVar5;
}


// Assembly code:
// 0040a0f0: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0
// 0040a0f1: PUSH ESI
// 0040a0f2: PUSH EBP
// 0040a0f3: MOV EBP,ESP
// 0040a0f5: SUB ESP,0x34
// 0040a0f8: AND ESP,0xfffffff8
// 0040a0fb: MOV ESI,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0040a0fe: PUSH 0x5ae
// 0040a103: PUSH 0x613a19
//   XREF to: 00613a19 (DATA)
// 0040a108: PUSH ESI
// 0040a109: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 0040a10e: ADD ESP,0xc
// 0040a111: LEA EDX,[ESP + 0x10]
//   XREF to: Stack[-0x30] (DATA)
// 0040a115: PUSH EDX
// 0040a116: MOV EAX,dword ptr [ESI + 0x154]
// 0040a11c: PUSH ESI
// 0040a11d: CALL dword ptr [EAX + 0x14]
// 0040a120: LEA EDX,[EAX + 0xc]
// 0040a123: ADD ESP,0x8
// 0040a126: FLD float ptr [EDX]
// 0040a128: FSUB float ptr [EAX]
// 0040a12a: XOR EBX,EBX
// 0040a12c: FSTP float ptr [ESP + 0x28]
// 0040a130: FLD float ptr [EDX + 0x4]
// 0040a133: FSUB float ptr [EAX + 0x4]
// 0040a136: FLD float ptr [ESP + 0x28]
// 0040a13a: FXCH
// 0040a13c: FSTP float ptr [ESP + 0x2c]
// 0040a140: FLD float ptr [EDX + 0x8]
// 0040a143: FSUB float ptr [EAX + 0x8]
// 0040a146: FLD1
// 0040a148: FXCH
// 0040a14a: FSTP float ptr [ESP + 0x30]
// 0040a14e: FCOMPP
// 0040a150: FNSTSW AX
// 0040a152: SAHF
// 0040a153: JBE 0x0040a1a3
//   XREF to: 0040a1a3 (CONDITIONAL_JUMP)
// 0040a155: FLD float ptr [ESP + 0x2c]
// 0040a159: FLD1
// 0040a15b: FCOMPP
// 0040a15d: FNSTSW AX
// 0040a15f: SAHF
// 0040a160: JBE 0x0040a1a3
//   XREF to: 0040a1a3 (CONDITIONAL_JUMP)
// 0040a162: FLD float ptr [ESP + 0x30]
// 0040a166: FST double ptr [ESP + 0x8]
// 0040a16a: FCOMP double ptr [0x00613a30]
//   XREF to: 00613a30 (READ)
// 0040a170: FNSTSW AX
// 0040a172: SAHF
// 0040a173: JBE 0x0040a1a3
//   XREF to: 0040a1a3 (CONDITIONAL_JUMP)
// 0040a175: FLD double ptr [ESP + 0x8]
// 0040a179: FCOMP double ptr [0x00613a38]
//   XREF to: 00613a38 (READ)
// 0040a17f: FNSTSW AX
// 0040a181: SAHF
// 0040a182: JNC 0x0040a1a3
//   XREF to: 0040a1a3 (CONDITIONAL_JUMP)
// 0040a184: FLD float ptr [ESP + 0x30]
// 0040a188: FCOMP float ptr [ESP + 0x28]
// 0040a18c: FNSTSW AX
// 0040a18e: SAHF
// 0040a18f: JBE 0x0040a1a3
//   XREF to: 0040a1a3 (CONDITIONAL_JUMP)
// 0040a191: FLD float ptr [ESP + 0x30]
// 0040a195: FCOMP float ptr [ESP + 0x2c]
// 0040a199: FNSTSW AX
// 0040a19b: SAHF
// 0040a19c: JBE 0x0040a1a3
//   XREF to: 0040a1a3 (CONDITIONAL_JUMP)
// 0040a19e: MOV EBX,0x2
// 0040a1a3: FLD float ptr [ESP + 0x28]
//   Label: LAB_0040a1a3
// 0040a1a7: FLD1
// 0040a1a9: FCOMPP
// 0040a1ab: FNSTSW AX
// 0040a1ad: SAHF
// 0040a1ae: JBE 0x0040a1fb
//   XREF to: 0040a1fb (CONDITIONAL_JUMP)
// 0040a1b0: FLD float ptr [ESP + 0x2c]
// 0040a1b4: FLD1
// 0040a1b6: FCOMPP
// 0040a1b8: FNSTSW AX
// 0040a1ba: SAHF
// 0040a1bb: JBE 0x0040a1fb
//   XREF to: 0040a1fb (CONDITIONAL_JUMP)
// 0040a1bd: FLD float ptr [ESP + 0x30]
// 0040a1c1: FLD1
// 0040a1c3: FXCH
// 0040a1c5: FSTP double ptr [ESP]
// 0040a1c8: FCOMP double ptr [ESP]
// 0040a1cb: FNSTSW AX
// 0040a1cd: SAHF
// 0040a1ce: JNC 0x0040a1fb
//   XREF to: 0040a1fb (CONDITIONAL_JUMP)
// 0040a1d0: FLD double ptr [ESP]
// 0040a1d3: FCOMP double ptr [0x00613a30]
//   XREF to: 00613a30 (READ)
// 0040a1d9: FNSTSW AX
// 0040a1db: SAHF
// 0040a1dc: JNC 0x0040a1fb
//   XREF to: 0040a1fb (CONDITIONAL_JUMP)
// 0040a1de: FLD float ptr [ESP + 0x30]
// 0040a1e2: FCOMP float ptr [ESP + 0x28]
// 0040a1e6: FNSTSW AX
// 0040a1e8: SAHF
// 0040a1e9: JBE 0x0040a1fb
//   XREF to: 0040a1fb (CONDITIONAL_JUMP)
// 0040a1eb: FLD float ptr [ESP + 0x30]
// 0040a1ef: FCOMP float ptr [ESP + 0x2c]
// 0040a1f3: FNSTSW AX
// 0040a1f5: SAHF
// 0040a1f6: JBE 0x0040a1fb
//   XREF to: 0040a1fb (CONDITIONAL_JUMP)
// 0040a1f8: OR BL,0x4
// 0040a1fb: MOV EAX,EBX
//   Label: LAB_0040a1fb
// 0040a1fd: MOV ESP,EBP
// 0040a1ff: POP EBP
// 0040a200: POP ESI
// 0040a201: POP EBX
// 0040a202: RET
