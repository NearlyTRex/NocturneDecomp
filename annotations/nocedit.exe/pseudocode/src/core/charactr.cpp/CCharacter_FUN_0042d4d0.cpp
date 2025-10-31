// Name: core_charactr.cpp_CCharacter_FUN_0042d4d0
// Address: 0042d4d0
// Address Range: [[0042d4d0, 0042d52d]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042d4d0(CCharacter * this_ptr)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_00429870 (00429870) at 004298af [UNCONDITIONAL_CALL]
// Function calls:
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042d4d0(CCharacter *this_ptr)

{
  int iVar1;
  int iVar2;
  float in_stack_0000000c;
  
  if (-1 < *(int *)(this_ptr->field11_0x25a0 + 0x28)) {
    iVar2 = *(int *)(this_ptr->field11_0x25a0 + 0x28) * 0x54c;
    iVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0();
    *(float *)(this_ptr->field11_0x25a0 + 0x2c) =
         in_stack_0000000c * *(float *)(iVar2 + 0x988 + iVar1) +
         *(float *)(this_ptr->field11_0x25a0 + 0x2c);
    if ((float)*(int *)(iVar2 + 0x9cc + iVar1) <= *(float *)(this_ptr->field11_0x25a0 + 0x2c)) {
      this_ptr->field11_0x25a0[0x28] = -1;
      this_ptr->field11_0x25a0[0x29] = -1;
      this_ptr->field11_0x25a0[0x2a] = -1;
      this_ptr->field11_0x25a0[0x2b] = -1;
      return;
    }
  }
  return;
}


// Assembly code:
// 0042d4d0: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042d4d0
// 0042d4d1: PUSH ESI
// 0042d4d2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0042d4d6: MOV EDX,dword ptr [EBX + 0x25c8]
// 0042d4dc: TEST EDX,EDX
// 0042d4de: JGE 0x0042d4e3
//   XREF to: 0042d4e3 (CONDITIONAL_JUMP)
// 0042d4e0: POP ESI
//   Label: LAB_0042d4e0
// 0042d4e1: POP EBX
// 0042d4e2: RET
// 0042d4e3: IMUL ESI,EDX,0x54c
//   Label: LAB_0042d4e3
// 0042d4e9: LEA EAX,[EBX + 0x158]
// 0042d4ef: PUSH EAX
// 0042d4f0: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 0042d4f5: ADD ESP,0x4
// 0042d4f8: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0042d4fc: FMUL float ptr [ESI + EAX*0x1 + 0x988]
// 0042d503: FADD float ptr [EBX + 0x25cc]
// 0042d509: FSTP float ptr [EBX + 0x25cc]
// 0042d50f: FILD dword ptr [ESI + EAX*0x1 + 0x9cc]
// 0042d516: FCOMP float ptr [EBX + 0x25cc]
// 0042d51c: FNSTSW AX
// 0042d51e: SAHF
// 0042d51f: JA 0x0042d4e0
//   XREF to: 0042d4e0 (CONDITIONAL_JUMP)
// 0042d521: MOV dword ptr [EBX + 0x25c8],0xffffffff
// 0042d52b: POP ESI
// 0042d52c: POP EBX
// 0042d52d: RET
