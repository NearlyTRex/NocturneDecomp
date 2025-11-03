// Name: core_baron.cpp_CBaronWeapon_setWeaponState_FUN_00413e90
// Address: 00413e90
// Address Range: [[00413e90, 00413f1c]]
// Convention: __cdecl
// Signature: void core_baron.cpp_CBaronWeapon_setWeaponState_FUN_00413e90(CBaronWeapon * this_ptr)
// Globals:
//   TerminatedCString s_core_baron_cpp_006150b5
//   TerminatedCString s_CBaronWeapon_setWeaponSt_006150c7
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_baron.cpp_FUN_00413470
//   core_baron.cpp_FUN_004135a0
//   core_baron.cpp_FUN_00413f20
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_weapon.cpp_CWeapon_FUN_005ee640

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaronWeapon_setWeaponState_FUN_00413e90(CBaronWeapon *this_ptr)

{
  CDemonActor *pCVar1;
  CDemonActor *pCStack00000008;
  
  core_weapon_cpp_CWeapon_FUN_005ee640(&this_ptr->base_weapon);
  pCVar1 = (*((this_ptr->base_weapon).base_actor.vtable)->getCarrier)((CDemonActor *)this_ptr);
  if ((this_ptr->base_weapon).weapon_state == 2) {
    if (pCVar1 == (CDemonActor *)0x0) {
      g_CurrentFilename = "..\\core\\baron.cpp";
      g_CurrentLineNumber = 0x31c;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CBaronWeapon::setWeaponState - I'm drawn, but nobody's carrying me??");
    }
    core_baron_cpp_FUN_00413f20();
    pCStack00000008 = pCVar1;
    core_baron_cpp_FUN_00413470();
  }
  else if (this_ptr->field1_0x578 != 0) {
    core_baron_cpp_FUN_004135a0();
    return;
  }
  return;
}


// Assembly code:
// 00413e90: PUSH EBX
//   Label: core_baron.cpp_CBaronWeapon_setWeaponState_FUN_00413e90
// 00413e91: PUSH ESI
// 00413e92: PUSH EBP
// 00413e93: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00413e97: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00413e9b: PUSH EDX
// 00413e9c: PUSH EBX
// 00413e9d: CALL core_weapon.cpp_CWeapon_FUN_005ee640
//   XREF to: 005ee640 (UNCONDITIONAL_CALL)
// 00413ea2: ADD ESP,0x8
// 00413ea5: MOV EAX,dword ptr [EBX + 0x154]
// 00413eab: PUSH EBX
// 00413eac: CALL dword ptr [EAX + 0x8c]
// 00413eb2: ADD ESP,0x4
// 00413eb5: MOV ECX,dword ptr [EBX + 0x2d4]
// 00413ebb: MOV ESI,EAX
// 00413ebd: CMP ECX,0x2
// 00413ec0: JNZ 0x00413f05
//   XREF to: 00413f05 (CONDITIONAL_JUMP)
// 00413ec2: TEST EAX,EAX
// 00413ec4: JNZ 0x00413ee8
//   XREF to: 00413ee8 (CONDITIONAL_JUMP)
// 00413ec6: MOV EBP,0x6150b5
//   XREF to: 006150b5 (DATA)
// 00413ecb: MOV EAX,0x31c
// 00413ed0: PUSH 0x6150c7
//   XREF to: 006150c7 (DATA)
// 00413ed5: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00413edb: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00413ee0: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00413ee5: ADD ESP,0x4
// 00413ee8: PUSH EBX
//   Label: LAB_00413ee8
// 00413ee9: CALL core_baron.cpp_FUN_00413f20
//   XREF to: 00413f20 (UNCONDITIONAL_CALL)
// 00413eee: ADD ESP,0x4
// 00413ef1: PUSH ESI
// 00413ef2: MOV EDX,dword ptr [EBX + 0x578]
// 00413ef8: PUSH EDX
// 00413ef9: CALL core_baron.cpp_FUN_00413470
//   XREF to: 00413470 (UNCONDITIONAL_CALL)
// 00413efe: ADD ESP,0x8
// 00413f01: POP EBP
//   Label: LAB_00413f01
// 00413f02: POP ESI
// 00413f03: POP EBX
// 00413f04: RET
// 00413f05: MOV ESI,dword ptr [EBX + 0x578]
//   Label: LAB_00413f05
// 00413f0b: TEST ESI,ESI
// 00413f0d: JZ 0x00413f01
//   XREF to: 00413f01 (CONDITIONAL_JUMP)
// 00413f0f: PUSH EAX
// 00413f10: PUSH ESI
// 00413f11: CALL core_baron.cpp_FUN_004135a0
//   XREF to: 004135a0 (UNCONDITIONAL_CALL)
// 00413f16: ADD ESP,0x8
// 00413f19: POP EBP
// 00413f1a: POP ESI
// 00413f1b: POP EBX
// 00413f1c: RET
