// Name: core_smiley.cpp_FUN_005a3580
// Address: 005a3580
// Address Range: [[005a3580, 005a3685]]
// Convention: unknown
// Signature: undefined core_smiley.cpp_FUN_005a3580()
// Globals:
//   undefined4 s_smiley_die??.wav_0064f37a
// Function calls:
//   core_enemy.cpp_FUN_004a9f10
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_smiley.cpp_FUN_005a32a0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_smiley.cpp_FUN_005a3580(undefined4 param_1, undefined4
   param_2) */

void core_smiley_cpp_FUN_005a3580(void)

{
  float fVar1;
  int iVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (*(int *)(in_stack_00000004 + 0xbefc) != 1) {
    *(undefined4 *)(in_stack_00000008 + 0x30) = 100;
    *(undefined4 *)(in_stack_00000008 + 4) = 0;
    return;
  }
  iVar2 = *(int *)(in_stack_00000008 + 0x30);
  if (iVar2 == 4) {
    *(undefined4 *)(in_stack_00000008 + 0x30) = 100;
  }
  else if ((iVar2 < 0xc) || (iVar2 == 0x6b)) goto LAB_005a35b4;
  *(undefined4 *)(in_stack_00000008 + 4) = 0;
LAB_005a35b4:
  if (0.0 < *(float *)(in_stack_00000008 + 4)) {
    core_smiley_cpp_FUN_005a32a0();
  }
  fVar1 = *(float *)(in_stack_00000004 + 0x243c) - *(float *)(in_stack_00000008 + 4);
  *(float *)(in_stack_00000004 + 0x243c) = fVar1;
  if (fVar1 <= 0.0) {
    *(undefined4 *)(in_stack_00000004 + 0x243c) = 0;
    iVar2 = core_motion_cpp_CMotionController_FUN_0052dab0();
    if ((*(int *)(iVar2 + 0x24) != 8) && (*(int *)(iVar2 + 0x24) != 7)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
      (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x13c))();
      (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
    }
    core_enemy_cpp_FUN_004a9f10();
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
  core_enemy_cpp_FUN_004a9f10();
  return;
}


// Assembly code:
// 005a3580: PUSH EBX
//   Label: core_smiley.cpp_FUN_005a3580
// 005a3581: PUSH ESI
// 005a3582: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005a3586: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005a358a: CMP dword ptr [EBX + 0xbefc],0x1
// 005a3591: JNZ 0x005a364e
//   XREF to: 005a364e (CONDITIONAL_JUMP)
// 005a3597: MOV ECX,dword ptr [ESI + 0x30]
// 005a359a: CMP ECX,0x4
// 005a359d: JZ 0x005a365f
//   XREF to: 005a365f (CONDITIONAL_JUMP)
// 005a35a3: CMP ECX,0xb
// 005a35a6: JLE 0x005a35b4
//   XREF to: 005a35b4 (CONDITIONAL_JUMP)
// 005a35a8: CMP ECX,0x6b
// 005a35ab: JZ 0x005a35b4
//   XREF to: 005a35b4 (CONDITIONAL_JUMP)
// 005a35ad: MOV dword ptr [ESI + 0x4],0x0
//   Label: LAB_005a35ad
// 005a35b4: FLD float ptr [ESI + 0x4]
//   Label: LAB_005a35b4
// 005a35b7: FLDZ
// 005a35b9: FCOMPP
// 005a35bb: FNSTSW AX
// 005a35bd: SAHF
// 005a35be: JNC 0x005a35ca
//   XREF to: 005a35ca (CONDITIONAL_JUMP)
// 005a35c0: PUSH ESI
// 005a35c1: PUSH EBX
// 005a35c2: CALL core_smiley.cpp_FUN_005a32a0
//   XREF to: 005a32a0 (UNCONDITIONAL_CALL)
// 005a35c7: ADD ESP,0x8
// 005a35ca: PUSH EDI
//   Label: LAB_005a35ca
// 005a35cb: FLD float ptr [ESI + 0x4]
// 005a35ce: FSUBR float ptr [EBX + 0x243c]
// 005a35d4: LEA EDI,[EBX + 0x158]
// 005a35da: FST float ptr [EBX + 0x243c]
// 005a35e0: FLDZ
// 005a35e2: FCOMPP
// 005a35e4: FNSTSW AX
// 005a35e6: SAHF
// 005a35e7: JC 0x005a366b
//   XREF to: 005a366b (CONDITIONAL_JUMP)
// 005a35ed: PUSH EDI
// 005a35ee: MOV dword ptr [EBX + 0x243c],0x0
// 005a35f8: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005a35fd: MOV EAX,dword ptr [EAX + 0x24]
// 005a3600: ADD ESP,0x4
// 005a3603: CMP EAX,0x8
// 005a3606: JZ 0x005a3640
//   XREF to: 005a3640 (CONDITIONAL_JUMP)
// 005a3608: CMP EAX,0x7
// 005a360b: JZ 0x005a3640
//   XREF to: 005a3640 (CONDITIONAL_JUMP)
// 005a360d: PUSH 0x1
// 005a360f: PUSH 0x7
// 005a3611: PUSH EDI
// 005a3612: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005a3617: ADD ESP,0xc
// 005a361a: PUSH 0x0
// 005a361c: PUSH 0x1
// 005a361e: MOV EAX,dword ptr [EBX + 0x154]
// 005a3624: PUSH EBX
// 005a3625: CALL dword ptr [EAX + 0x13c]
// 005a362b: ADD ESP,0xc
// 005a362e: PUSH 0x64f37a
//   XREF to: 0064f37a (DATA)
// 005a3633: MOV EAX,dword ptr [EBX + 0x154]
// 005a3639: PUSH EBX
// 005a363a: CALL dword ptr [EAX + 0x24]
// 005a363d: ADD ESP,0x8
// 005a3640: PUSH ESI
//   Label: LAB_005a3640
// 005a3641: PUSH EBX
// 005a3642: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 005a3647: ADD ESP,0x8
// 005a364a: POP EDI
// 005a364b: POP ESI
// 005a364c: POP EBX
// 005a364d: RET
// 005a364e: MOV dword ptr [ESI + 0x30],0x64
//   Label: LAB_005a364e
// 005a3655: MOV dword ptr [ESI + 0x4],0x0
// 005a365c: POP ESI
// 005a365d: POP EBX
// 005a365e: RET
// 005a365f: MOV dword ptr [ESI + 0x30],0x64
//   Label: LAB_005a365f
// 005a3666: JMP 0x005a35ad
//   XREF to: 005a35ad (UNCONDITIONAL_JUMP)
// 005a366b: PUSH 0x1
//   Label: LAB_005a366b
// 005a366d: PUSH 0x3
// 005a366f: PUSH EDI
// 005a3670: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005a3675: ADD ESP,0xc
// 005a3678: PUSH ESI
// 005a3679: PUSH EBX
// 005a367a: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 005a367f: ADD ESP,0x8
// 005a3682: POP EDI
// 005a3683: POP ESI
// 005a3684: POP EBX
// 005a3685: RET
