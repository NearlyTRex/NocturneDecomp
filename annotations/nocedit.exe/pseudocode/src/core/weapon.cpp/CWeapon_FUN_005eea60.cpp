// Name: core_weapon.cpp_CWeapon_FUN_005eea60
// Address: 005eea60
// Address Range: [[005eea60, 005eea77]]
// Convention: __cdecl
// Signature: void core_weapon.cpp_CWeapon_FUN_005eea60(CWeapon * this_ptr)
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_FUN_005eea60(CWeapon *this_ptr)

{
  FILE *in_stack_00000008;
  
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            ((CKeyFramedModelInstance *)&this_ptr->model_instance,in_stack_00000008);
  return;
}


// Assembly code:
// 005eea60: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_weapon.cpp_CWeapon_FUN_005eea60
//   XREF to: Stack[0x8] (READ)
// 005eea64: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005eea68: PUSH EDX
// 005eea69: ADD EAX,0x158
// 005eea6e: PUSH EAX
// 005eea6f: CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
//   XREF to: 0047edd0 (UNCONDITIONAL_CALL)
// 005eea74: ADD ESP,0x8
// 005eea77: RET
