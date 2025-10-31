// Name: core_box.cpp_CBox_process_FUN_0041e2f0
// Address: 0041e2f0
// Address Range: [[0041e2f0, 0041e34a]]
// Convention: __cdecl
// Signature: void core_box.cpp_CBox_process_FUN_0041e2f0(CBox * this_ptr, float delta_time)
// Cross-references:
//   core_bodypart.cpp_CBodyPart_process_FUN_00419be0 (00419be0) at 00419d1b [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CBoxActor_process_FUN_004219e0 (004219e0) at 00421c6f [UNCONDITIONAL_CALL]
//   core_fire.cpp_CToss_process_FUN_004c4000 (004c4000) at 004c4144 [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_process_FUN_00588f20 (00588f20) at 005890a9 [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_process_FUN_005ee110 (005ee110) at 005ee179 [UNCONDITIONAL_CALL]
// Globals:
//   double g_BoxMaxTimestep = 0.0125000000000000
//   double g_BoxTimestepHalf = 0.5
// Function calls:
//   core_box.cpp_CBox_processPhysics_FUN_0041e350

#include "nocturne.h"

void __cdecl core_box_cpp_CBox_process_FUN_0041e2f0(CBox *this_ptr,float delta_time)

{
  undefined4 uStack_c;
  
  if ((float)g_BoxMaxTimestep < delta_time) {
    core_box_cpp_CBox_process_FUN_0041e2f0(this_ptr,delta_time * (float)g_BoxTimestepHalf);
    core_box_cpp_CBox_process_FUN_0041e2f0(this_ptr,uStack_c);
    return;
  }
  core_box_cpp_CBox_processPhysics_FUN_0041e350(this_ptr,delta_time);
  return;
}


// Assembly code:
// 0041e2f0: PUSH EBX
//   Label: core_box.cpp_CBox_process_FUN_0041e2f0
// 0041e2f1: PUSH EBP
// 0041e2f2: MOV EBP,ESP
// 0041e2f4: SUB ESP,0xc
// 0041e2f7: AND ESP,0xfffffff8
// 0041e2fa: MOV EBX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0041e2fd: FLD float ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0041e300: FST double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0041e303: FCOMP double ptr [0x006164bf]
//   XREF to: 006164bf (READ)
// 0041e309: FNSTSW AX
// 0041e30b: SAHF
// 0041e30c: JBE 0x0041e33a
//   XREF to: 0041e33a (CONDITIONAL_JUMP)
// 0041e30e: FLD double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0041e311: FMUL double ptr [0x006164c7]
//   XREF to: 006164c7 (READ)
// 0041e317: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (WRITE)
// 0041e31b: PUSH dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (READ)
// 0041e31f: PUSH EBX
// 0041e320: CALL core_box.cpp_CBox_process_FUN_0041e2f0
//   XREF to: 0041e2f0 (UNCONDITIONAL_CALL)
// 0041e325: ADD ESP,0x8
// 0041e328: PUSH dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (READ)
// 0041e32c: PUSH EBX
// 0041e32d: CALL core_box.cpp_CBox_process_FUN_0041e2f0
//   XREF to: 0041e2f0 (UNCONDITIONAL_CALL)
// 0041e332: ADD ESP,0x8
// 0041e335: MOV ESP,EBP
// 0041e337: POP EBP
// 0041e338: POP EBX
// 0041e339: RET
// 0041e33a: PUSH dword ptr [EBP + 0x10]
//   Label: LAB_0041e33a
//   XREF to: Stack[0x8] (READ)
// 0041e33d: PUSH EBX
// 0041e33e: CALL core_box.cpp_CBox_processPhysics_FUN_0041e350
//   XREF to: 0041e350 (UNCONDITIONAL_CALL)
// 0041e343: ADD ESP,0x8
// 0041e346: MOV ESP,EBP
// 0041e348: POP EBP
// 0041e349: POP EBX
// 0041e34a: RET
