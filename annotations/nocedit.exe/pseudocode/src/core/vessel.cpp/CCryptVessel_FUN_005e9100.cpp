// Name: core_vessel.cpp_CCryptVessel_FUN_005e9100
// Address: 005e9100
// Address Range: [[005e9100, 005e9137]]
// Convention: __cdecl
// Signature: int core_vessel.cpp_CCryptVessel_FUN_005e9100(CCryptVessel * this_ptr)
// Globals:
//   undefined4 s_CHero_00657031
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0

#include "nocturne.h"

int __cdecl core_vessel_cpp_CCryptVessel_FUN_005e9100(CCryptVessel *this_ptr)

{
  int iVar1;
  CDemonActor *in_stack_00000008;
  
  if ((*(int *)(this_ptr->field14_0x3c0 + 0x430) == 0) && (this_ptr->state == 0)) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000008,"?CHero" + 1);
    if (iVar1 != 0) {
      return 4;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


// Assembly code:
// 005e9100: PUSH EBX
//   Label: core_vessel.cpp_CCryptVessel_FUN_005e9100
// 005e9101: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005e9105: CMP dword ptr [EAX + 0x7f0],0x0
// 005e910c: JNZ 0x005e9117
//   XREF to: 005e9117 (CONDITIONAL_JUMP)
// 005e910e: CMP dword ptr [EAX + 0x3b8],0x0
// 005e9115: JZ 0x005e911b
//   XREF to: 005e911b (CONDITIONAL_JUMP)
// 005e9117: XOR EAX,EAX
//   Label: LAB_005e9117
// 005e9119: POP EBX
//   Label: LAB_005e9119
// 005e911a: RET
// 005e911b: PUSH 0x657031
//   Label: LAB_005e911b
//   XREF to: 00657031 (DATA)
// 005e9120: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005e9124: PUSH EBX
// 005e9125: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 005e912a: ADD ESP,0x8
// 005e912d: TEST EAX,EAX
// 005e912f: JZ 0x005e9119
//   XREF to: 005e9119 (CONDITIONAL_JUMP)
// 005e9131: MOV EAX,0x4
// 005e9136: POP EBX
// 005e9137: RET
