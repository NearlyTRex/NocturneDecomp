// Name: core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
// Address: 0052dd20
// Address Range: [[0052dd20, 0052dda7]]
// Convention: __cdecl
// Signature: float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042de50 (0042de50) at 0042deac [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d3509 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4890 (004d4890) at 004d49df [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e6672 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e82d0 (004e82d0) at 004e82f0 [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHero_FUN_004f29b0 (004f29b0) at 004f29f6 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f4f1d [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051fcc0 (0051fcc0) at 00520095 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005571f0 (005571f0) at 005574a5 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005582c0 (005582c0) at 0055832c [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bd2a4 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bdd20 (005bdd20) at 005be024 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005be520 (005be520) at 005be53b [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bf800 (005bf800) at 005bf830 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bfb60 (005bfb60) at 005bfc05 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c1680 (005c1680) at 005c16e0 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c2850 (005c2850) at 005c28b6 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c5b90 (005c5b90) at 005c5be0 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fc120 (005fc120) at 005fc137 [UNCONDITIONAL_CALL]

#include "nocturne.h"

float __cdecl
core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
          (CMotionController *this_ptr,int desired_state_index)

{
  float local_10;
  
  if (this_ptr->tween_progress <= 0.0) {
    if (desired_state_index !=
        this_ptr->motion_list_ptr->motions[this_ptr->current_motion_index].state_index) {
      return 0.0;
    }
    local_10 = 1.0;
  }
  else if (desired_state_index ==
           this_ptr->motion_list_ptr->motions[this_ptr->tween_target_motion].state_index) {
    local_10 = this_ptr->tween_progress;
  }
  else {
    if (desired_state_index !=
        this_ptr->motion_list_ptr->motions[this_ptr->current_motion_index].state_index) {
      return 0.0;
    }
    local_10 = 1.0 - this_ptr->tween_progress;
  }
  return local_10;
}


// Assembly code:
// 0052dd20: PUSH EBX
//   Label: core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
// 0052dd21: PUSH EBP
// 0052dd22: MOV EBP,ESP
// 0052dd24: SUB ESP,0xc
// 0052dd27: AND ESP,0xfffffff8
// 0052dd2a: MOV EDX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052dd2d: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0052dd30: FLDZ
// 0052dd32: FLD float ptr [EDX + 0x14]
// 0052dd35: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0052dd38: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0052dd3b: FNSTSW AX
// 0052dd3d: SAHF
// 0052dd3e: JNC 0x0052dd7d
//   XREF to: 0052dd7d (CONDITIONAL_JUMP)
// 0052dd40: IMUL ECX,dword ptr [EDX + 0x18],0x54c
// 0052dd47: MOV EAX,dword ptr [EDX]
// 0052dd49: CMP EBX,dword ptr [ECX + EAX*0x1 + 0x98c]
// 0052dd50: JZ 0x0052dd74
//   XREF to: 0052dd74 (CONDITIONAL_JUMP)
// 0052dd52: IMUL EDX,dword ptr [EDX + 0x4],0x54c
// 0052dd59: CMP EBX,dword ptr [EDX + EAX*0x1 + 0x98c]
// 0052dd60: JNZ 0x0052dd99
//   XREF to: 0052dd99 (CONDITIONAL_JUMP)
// 0052dd62: FLD1
// 0052dd64: FSUB double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0052dd67: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (WRITE)
// 0052dd6b: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_0052dd6b
//   XREF to: Stack[-0x10] (READ)
// 0052dd6f: MOV ESP,EBP
// 0052dd71: POP EBP
// 0052dd72: POP EBX
// 0052dd73: RET
// 0052dd74: MOV EAX,dword ptr [EDX + 0x14]
//   Label: LAB_0052dd74
// 0052dd77: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0052dd7b: JMP 0x0052dd6b
//   XREF to: 0052dd6b (UNCONDITIONAL_JUMP)
// 0052dd7d: IMUL EAX,dword ptr [EDX + 0x4],0x54c
//   Label: LAB_0052dd7d
// 0052dd84: MOV EDX,dword ptr [EDX]
// 0052dd86: CMP EBX,dword ptr [EDX + EAX*0x1 + 0x98c]
// 0052dd8d: JNZ 0x0052dd99
//   XREF to: 0052dd99 (CONDITIONAL_JUMP)
// 0052dd8f: MOV dword ptr [ESP + 0x8],0x3f800000
//   XREF to: Stack[-0x10] (WRITE)
// 0052dd97: JMP 0x0052dd6b
//   XREF to: 0052dd6b (UNCONDITIONAL_JUMP)
// 0052dd99: XOR EBX,EBX
//   Label: LAB_0052dd99
// 0052dd9b: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x10] (WRITE)
// 0052dd9f: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (READ)
// 0052dda3: MOV ESP,EBP
// 0052dda5: POP EBP
// 0052dda6: POP EBX
// 0052dda7: RET
