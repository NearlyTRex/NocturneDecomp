// Name: core_baron.cpp_CBaronWeapon_FUN_00413da0
// Address: 00413da0
// Address Range: [[00413da0, 00413dba]]
// Convention: __cdecl
// Signature: void core_baron.cpp_CBaronWeapon_FUN_00413da0(CBaronWeapon * this_ptr)
// Globals:
//   TerminatedCString s_baron_dfm_006150ab
// Function calls:
//   core_skeleton.cpp_LoadSkeletonDeformable_FUN_005a1cf0
//   core_weapon.cpp_CWeapon_FUN_005edff0

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaronWeapon_FUN_00413da0(CBaronWeapon *this_ptr)

{
  core_weapon_cpp_CWeapon_FUN_005edff0(&this_ptr->base_weapon);
  core_skeleton_cpp_LoadSkeletonDeformable_FUN_005a1cf0();
  return;
}


// Assembly code:
// 00413da0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_baron.cpp_CBaronWeapon_FUN_00413da0
//   XREF to: Stack[0x4] (READ)
// 00413da4: PUSH EDX
// 00413da5: CALL core_weapon.cpp_CWeapon_FUN_005edff0
//   XREF to: 005edff0 (UNCONDITIONAL_CALL)
// 00413daa: ADD ESP,0x4
// 00413dad: PUSH 0x6150ab
//   XREF to: 006150ab (DATA)
// 00413db2: CALL core_skeleton.cpp_LoadSkeletonDeformable_FUN_005a1cf0
//   XREF to: 005a1cf0 (UNCONDITIONAL_CALL)
// 00413db7: ADD ESP,0x4
// 00413dba: RET
