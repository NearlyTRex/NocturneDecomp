// Name: core_weapon.cpp_CWeapon_FUN_005ee340
// Address: 005ee340
// Address Range: [[005ee340, 005ee3dd]]
// Convention: __cdecl
// Signature: int core_weapon.cpp_CWeapon_FUN_005ee340(CWeapon * this_ptr)
// Cross-references:
//   core_turret.cpp_CTurret_FUN_005e3c70 (005e3c70) at 005e3c8c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_CIcePick_00657b0a
//   TerminatedCString s_CHero_00657b13
//   double DOUBLE_00657b19 = 0.5
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0

#include "nocturne.h"

int __cdecl core_weapon_cpp_CWeapon_FUN_005ee340(CWeapon *this_ptr)

{
  int iVar1;
  int iVar2;
  CDemonActor *in_stack_00000008;
  
  iVar2._0_1_ = this_ptr->carried_by_actor;
  iVar2._1_1_ = this_ptr->field9_0x305[0];
  iVar2._2_1_ = this_ptr->field9_0x305[1];
  iVar2._3_1_ = this_ptr->field9_0x305[2];
  if (((((iVar2 == 0) && (this_ptr->weapon_state == 0)) &&
       (*(int *)(this_ptr->field9_0x305 + 599) != 0)) &&
      ((float)DOUBLE_00657b19 <
       SQRT(*(float *)(this_ptr->field9_0x305 + 0x57) * *(float *)(this_ptr->field9_0x305 + 0x57) +
            *(float *)(this_ptr->field9_0x305 + 0x4f) * *(float *)(this_ptr->field9_0x305 + 0x4f) +
            *(float *)(this_ptr->field9_0x305 + 0x53) * *(float *)(this_ptr->field9_0x305 + 0x53))))
     || (iVar1._0_1_ = this_ptr->carried_by_actor, iVar1._1_1_ = this_ptr->field9_0x305[0],
        iVar1._2_1_ = this_ptr->field9_0x305[1], iVar1._3_1_ = this_ptr->field9_0x305[2], iVar1 != 0
        )) {
    return 0;
  }
  iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000008,"CIcePick");
  if (iVar2 == 0) {
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000008,"CHero");
    if (iVar2 != 0) {
      return 2;
    }
    if ((this_ptr->weapon_state != 0) && (this_ptr->weapon_state != 3)) {
      return 0;
    }
  }
  return 3;
}


// Assembly code:
// 005ee340: PUSH EBX
//   Label: core_weapon.cpp_CWeapon_FUN_005ee340
// 005ee341: PUSH EBP
// 005ee342: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005ee346: CMP dword ptr [EBX + 0x304],0x0
// 005ee34d: JNZ 0x005ee386
//   XREF to: 005ee386 (CONDITIONAL_JUMP)
// 005ee34f: CMP dword ptr [EBX + 0x2d4],0x0
// 005ee356: JNZ 0x005ee386
//   XREF to: 005ee386 (CONDITIONAL_JUMP)
// 005ee358: CMP dword ptr [EBX + 0x55c],0x0
// 005ee35f: JZ 0x005ee386
//   XREF to: 005ee386 (CONDITIONAL_JUMP)
// 005ee361: LEA EAX,[EBX + 0x354]
// 005ee367: FLD float ptr [EAX + 0x4]
// 005ee36a: FMUL ST0
// 005ee36c: FLD float ptr [EAX]
// 005ee36e: FMUL ST0
// 005ee370: FADDP
// 005ee372: FLD float ptr [EAX + 0x8]
// 005ee375: FMUL ST0
// 005ee377: FADDP
// 005ee379: FSQRT
// 005ee37b: FCOMP double ptr [0x00657b19]
//   XREF to: 00657b19 (READ)
// 005ee381: FNSTSW AX
// 005ee383: SAHF
// 005ee384: JA 0x005ee38f
//   XREF to: 005ee38f (CONDITIONAL_JUMP)
// 005ee386: CMP dword ptr [EBX + 0x304],0x0
//   Label: LAB_005ee386
// 005ee38d: JZ 0x005ee394
//   XREF to: 005ee394 (CONDITIONAL_JUMP)
// 005ee38f: XOR EAX,EAX
//   Label: LAB_005ee38f
// 005ee391: POP EBP
// 005ee392: POP EBX
// 005ee393: RET
// 005ee394: PUSH 0x657b0a
//   Label: LAB_005ee394
//   XREF to: 00657b0a (DATA)
// 005ee399: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005ee39d: PUSH EBP
// 005ee39e: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 005ee3a3: ADD ESP,0x8
// 005ee3a6: TEST EAX,EAX
// 005ee3a8: JZ 0x005ee3b2
//   XREF to: 005ee3b2 (CONDITIONAL_JUMP)
// 005ee3aa: MOV EAX,0x3
//   Label: LAB_005ee3aa
// 005ee3af: POP EBP
// 005ee3b0: POP EBX
// 005ee3b1: RET
// 005ee3b2: PUSH 0x657b13
//   Label: LAB_005ee3b2
//   XREF to: 00657b13 (DATA)
// 005ee3b7: PUSH EBP
// 005ee3b8: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 005ee3bd: ADD ESP,0x8
// 005ee3c0: TEST EAX,EAX
// 005ee3c2: JNZ 0x005ee3d6
//   XREF to: 005ee3d6 (CONDITIONAL_JUMP)
// 005ee3c4: MOV EDX,dword ptr [EBX + 0x2d4]
// 005ee3ca: TEST EDX,EDX
// 005ee3cc: JZ 0x005ee3aa
//   XREF to: 005ee3aa (CONDITIONAL_JUMP)
// 005ee3ce: CMP EDX,0x3
// 005ee3d1: JZ 0x005ee3aa
//   XREF to: 005ee3aa (CONDITIONAL_JUMP)
// 005ee3d3: POP EBP
// 005ee3d4: POP EBX
// 005ee3d5: RET
// 005ee3d6: MOV EAX,0x2
//   Label: LAB_005ee3d6
// 005ee3db: POP EBP
// 005ee3dc: POP EBX
// 005ee3dd: RET
