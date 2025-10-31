// Name: core_turret.cpp_CTurret_FUN_005e3dd0
// Address: 005e3dd0
// Address Range: [[005e3dd0, 005e3dfe]]
// Convention: __cdecl
// Signature: void core_turret.cpp_CTurret_FUN_005e3dd0(CTurret * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_FUN_005e3dd0(CTurret *this_ptr)

{
  COrientation *pCVar1;
  
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040((CDemonActor *)this_ptr);
  pCVar1 = &(this_ptr->base_weapon).base_actor.orient;
  if ((COrientation *)this_ptr->field1_0x578 == pCVar1) {
    return;
  }
  *(float *)this_ptr->field1_0x578 = pCVar1->pitch;
  *(float *)(this_ptr->field1_0x578 + 4) = (this_ptr->base_weapon).base_actor.orient.bank;
  *(float *)(this_ptr->field1_0x578 + 8) = (this_ptr->base_weapon).base_actor.orient.heading;
  return;
}


// Assembly code:
// 005e3dd0: PUSH EBX
//   Label: core_turret.cpp_CTurret_FUN_005e3dd0
// 005e3dd1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005e3dd5: PUSH EBX
// 005e3dd6: CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   XREF to: 0040d040 (UNCONDITIONAL_CALL)
// 005e3ddb: LEA EAX,[EBX + 0x578]
// 005e3de1: LEA EDX,[EBX + 0x30]
// 005e3de4: ADD ESP,0x4
// 005e3de7: CMP EAX,EDX
// 005e3de9: JNZ 0x005e3ded
//   XREF to: 005e3ded (CONDITIONAL_JUMP)
// 005e3deb: POP EBX
// 005e3dec: RET
// 005e3ded: MOV ECX,dword ptr [EDX]
//   Label: LAB_005e3ded
// 005e3def: MOV dword ptr [EAX],ECX
// 005e3df1: MOV ECX,dword ptr [EDX + 0x4]
// 005e3df4: MOV dword ptr [EAX + 0x4],ECX
// 005e3df7: MOV ECX,dword ptr [EDX + 0x8]
// 005e3dfa: MOV dword ptr [EAX + 0x8],ECX
// 005e3dfd: POP EBX
// 005e3dfe: RET
