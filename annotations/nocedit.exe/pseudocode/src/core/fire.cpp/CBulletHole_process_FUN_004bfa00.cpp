// Name: core_fire.cpp_CBulletHole_process_FUN_004bfa00
// Address: 004bfa00
// Address Range: [[004bfa00, 004bfa3e]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CBulletHole_process_FUN_004bfa00(CBulletHole * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_process_FUN_004c6ec0 (004c6ec0) at 004c7021 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408ec0

#include "nocturne.h"

void __cdecl core_fire_cpp_CBulletHole_process_FUN_004bfa00(CBulletHole *this_ptr)

{
  CBulletHole *pCVar1;
  
  if (*(CDemonActor **)(this_ptr->field0_0x0 + 0x10) != (CDemonActor *)0x0) {
    pCVar1 = (CBulletHole *)
             core_actor_cpp_CDemonActor_FUN_00408ec0(*(CDemonActor **)(this_ptr->field0_0x0 + 0x10))
    ;
    if (this_ptr != pCVar1) {
      *(float *)this_ptr->field0_0x0 = *(float *)pCVar1->field0_0x0;
      *(float *)(this_ptr->field0_0x0 + 4) = *(float *)(pCVar1->field0_0x0 + 4);
      *(float *)(this_ptr->field0_0x0 + 8) = *(float *)(pCVar1->field0_0x0 + 8);
      return;
    }
  }
  return;
}


// Assembly code:
// 004bfa00: PUSH EBX
//   Label: core_fire.cpp_CBulletHole_process_FUN_004bfa00
// 004bfa01: SUB ESP,0xc
// 004bfa04: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004bfa08: MOV EDX,dword ptr [EBX + 0x10]
// 004bfa0b: TEST EDX,EDX
// 004bfa0d: JNZ 0x004bfa14
//   XREF to: 004bfa14 (CONDITIONAL_JUMP)
// 004bfa0f: ADD ESP,0xc
//   Label: LAB_004bfa0f
// 004bfa12: POP EBX
// 004bfa13: RET
// 004bfa14: LEA EAX,[EBX + 0x24]
//   Label: LAB_004bfa14
// 004bfa17: PUSH EAX
// 004bfa18: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x10] (DATA)
// 004bfa1c: PUSH EAX
// 004bfa1d: PUSH EDX
// 004bfa1e: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004bfa23: ADD ESP,0xc
// 004bfa26: CMP EBX,EAX
// 004bfa28: JZ 0x004bfa0f
//   XREF to: 004bfa0f (CONDITIONAL_JUMP)
// 004bfa2a: MOV EDX,dword ptr [EAX]
// 004bfa2c: MOV dword ptr [EBX],EDX
// 004bfa2e: MOV EDX,dword ptr [EAX + 0x4]
// 004bfa31: MOV dword ptr [EBX + 0x4],EDX
// 004bfa34: MOV EDX,dword ptr [EAX + 0x8]
// 004bfa37: MOV dword ptr [EBX + 0x8],EDX
// 004bfa3a: ADD ESP,0xc
// 004bfa3d: POP EBX
// 004bfa3e: RET
