// Name: core_hostage.cpp_CHostage_FUN_004f6390
// Address: 004f6390
// Address Range: [[004f6390, 004f63cf]]
// Convention: __cdecl
// Signature: int core_hostage.cpp_CHostage_FUN_004f6390(CHostage * this_ptr)
// Function calls:
//   core_motion.cpp_CMotionController_FUN_0052dab0

#include "nocturne.h"

int __cdecl core_hostage_cpp_CHostage_FUN_004f6390(CHostage *this_ptr)

{
  int iVar1;
  
  if (((*(int *)this_ptr->field4_0x1fab8 != 0) && (this_ptr->hostage_state != 3)) &&
     (this_ptr->hostage_state != 4)) {
    iVar1 = core_motion_cpp_CMotionController_FUN_0052dab0();
    if (*(int *)(iVar1 + 0x24) != 10) {
      return 1;
    }
  }
  return 0;
}


// Assembly code:
// 004f6390: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_hostage.cpp_CHostage_FUN_004f6390
//   XREF to: Stack[0x4] (READ)
// 004f6394: CMP dword ptr [EAX + 0x1fab8],0x0
// 004f639b: JZ 0x004f63ad
//   XREF to: 004f63ad (CONDITIONAL_JUMP)
// 004f639d: MOV ECX,dword ptr [EAX + 0x1fabc]
// 004f63a3: CMP ECX,0x3
// 004f63a6: JZ 0x004f63ad
//   XREF to: 004f63ad (CONDITIONAL_JUMP)
// 004f63a8: CMP ECX,0x4
// 004f63ab: JNZ 0x004f63b0
//   XREF to: 004f63b0 (CONDITIONAL_JUMP)
// 004f63ad: XOR EAX,EAX
//   Label: LAB_004f63ad
// 004f63af: RET
// 004f63b0: ADD EAX,0x158
//   Label: LAB_004f63b0
// 004f63b5: PUSH EAX
// 004f63b6: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004f63bb: MOV EAX,dword ptr [EAX + 0x24]
// 004f63be: ADD ESP,0x4
// 004f63c1: CMP EAX,0xa
// 004f63c4: JZ 0x004f63ad
//   XREF to: 004f63ad (CONDITIONAL_JUMP)
// 004f63c6: LEA EAX,[EAX]
// 004f63cc: LEA EDX,[EDX]
