// Name: core_charactr.cpp_CCharacter_FUN_0042de50
// Address: 0042de50
// Address Range: [[0042de50, 0042dece]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042de50(CCharacter * this_ptr)
// Globals:
//   TerminatedCString s_STAND_006174c3
//   undefined4 DAT_006174ca
// Function calls:
//   core_motion.cpp_CMotionController_FUN_0052dd20
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_charactr_cpp_CCharacter_FUN_0042de50(CCharacter *this_ptr)

{
  int iVar1;
  float fVar2;
  CDeformableModelInstance *pCStack00000008;
  int iStack0000000c;
  SCollisionInfo *in_stack_fffffff4;
  
  iVar1 = (*(this_ptr->base_actor).metadata.vtable[1].hasCollision)
                    (&this_ptr->base_actor,in_stack_fffffff4);
  if (iVar1 < 2) {
    if ((this_ptr->model).padding_0x0[0x2260] != '\0') {
      core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0();
      iStack0000000c = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0();
      if (-1 < iStack0000000c) {
        pCStack00000008 = &this_ptr->model;
        fVar2 = (float)core_motion_cpp_CMotionController_FUN_0052dd20();
        if ((float)_DAT_006174ca < fVar2) {
          return 0;
        }
      }
    }
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


// Assembly code:
// 0042de50: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042de50
// 0042de51: PUSH ESI
// 0042de52: SUB ESP,0x4
// 0042de55: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0042de59: PUSH ESI
// 0042de5a: MOV EAX,dword ptr [ESI + 0x154]
// 0042de60: CALL dword ptr [EAX + 0x120]
// 0042de66: ADD ESP,0x4
// 0042de69: CMP EAX,0x1
// 0042de6c: JG 0x0042de89
//   XREF to: 0042de89 (CONDITIONAL_JUMP)
// 0042de6e: MOV AH,byte ptr [ESI + 0x23b8]
// 0042de74: LEA EBX,[ESI + 0x158]
// 0042de7a: TEST AH,AH
// 0042de7c: JNZ 0x0042de8d
//   XREF to: 0042de8d (CONDITIONAL_JUMP)
// 0042de7e: MOV EAX,0x1
//   Label: LAB_0042de7e
// 0042de83: ADD ESP,0x4
//   Label: LAB_0042de83
// 0042de86: POP ESI
// 0042de87: POP EBX
// 0042de88: RET
// 0042de89: XOR EAX,EAX
//   Label: LAB_0042de89
// 0042de8b: JMP 0x0042de83
//   XREF to: 0042de83 (UNCONDITIONAL_JUMP)
// 0042de8d: PUSH 0x0
//   Label: LAB_0042de8d
// 0042de8f: PUSH 0x6174c3
//   XREF to: 006174c3 (DATA)
// 0042de94: PUSH EBX
// 0042de95: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 0042de9a: ADD ESP,0x4
// 0042de9d: PUSH EAX
// 0042de9e: CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
//   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)
// 0042dea3: ADD ESP,0xc
// 0042dea6: TEST EAX,EAX
// 0042dea8: JL 0x0042de7e
//   XREF to: 0042de7e (CONDITIONAL_JUMP)
// 0042deaa: PUSH EAX
// 0042deab: PUSH EBX
// 0042deac: CALL core_motion.cpp_CMotionController_FUN_0052dd20
//   XREF to: 0052dd20 (UNCONDITIONAL_CALL)
// 0042deb1: MOV dword ptr [ESP + 0x8],EAX
// 0042deb5: FLD float ptr [ESP + 0x8]
// 0042deb9: ADD ESP,0x8
// 0042debc: FCOMP double ptr [0x006174ca]
//   XREF to: 006174ca (READ)
// 0042dec2: FNSTSW AX
// 0042dec4: SAHF
// 0042dec5: JBE 0x0042de7e
//   XREF to: 0042de7e (CONDITIONAL_JUMP)
// 0042dec7: XOR EAX,EAX
// 0042dec9: ADD ESP,0x4
// 0042decc: POP ESI
// 0042decd: POP EBX
// 0042dece: RET
