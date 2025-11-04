// Name: core_hostage.cpp_CHostage_FUN_004f6450
// Address: 004f6450
// Address Range: [[004f6450, 004f654f]]
// Convention: __cdecl
// Signature: void core_hostage.cpp_CHostage_FUN_004f6450(CHostage * this_ptr)
// Globals:
//   undefined4 DAT_00821ff4
// Function calls:
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_npc.cpp_CNPC_FUN_00544d30
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660

#include "nocturne.h"

void __cdecl core_hostage_cpp_CHostage_FUN_004f6450(CHostage *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int in_stack_00000008;
  undefined4 uStack0000001c;
  undefined4 uStack00000030;
  
  if (*(int *)this_ptr->field4_0x1fab8 == 0) {
    *(undefined4 *)(in_stack_00000008 + 4) = 0;
  }
  fVar1 = (this_ptr->base_npc).base_character.hit_points - *(float *)(in_stack_00000008 + 4);
  this_ptr_00 = &(this_ptr->base_npc).base_character.model;
  (this_ptr->base_npc).base_character.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base_npc).base_character.hit_points = 0.0;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_00->motion_controller,6,1);
    (*((this_ptr->base_npc).base_character.base_actor.vtable)->spawnFlies)
              ((CDemonActor *)this_ptr,0x32,25.0);
    (*((this_ptr->base_npc).base_character.base_actor.vtable)->playSound)
              ((CDemonActor *)this_ptr,this_ptr->field2_0x1f70c + 0x340);
  }
  else if (0.0 < *(float *)(in_stack_00000008 + 4)) {
    if ((this_ptr->base_npc).base_character.grabbed_by == (CDemonActor *)0x0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&this_ptr_00->motion_controller,4,1);
      uVar3 = DAT_00821ff4;
      this_ptr->field8_0x1fae0[0xc] = '\0';
      this_ptr->field8_0x1fae0[0xd] = '\0';
      this_ptr->field8_0x1fae0[0xe] = '@';
      this_ptr->field8_0x1fae0[0xf] = '@';
      *(undefined4 *)(this_ptr->field8_0x1fae0 + 8) = uVar3;
    }
    uStack0000001c = 0x4f64ca;
    iVar2 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
    if (iVar2 == 0) {
      uStack0000001c = 0x4f6539;
      uVar3 = (*((this_ptr->base_npc).base_character.base_actor.vtable)->playSound)
                        ((CDemonActor *)this_ptr,this_ptr->field2_0x1f70c + 0x2dc);
      *(undefined4 *)(this_ptr->field2_0x1f70c + 0x3a4) = uVar3;
      uStack00000030 = 0x4f6549;
      core_npc_cpp_CNPC_FUN_00544d30(&this_ptr->base_npc);
      return;
    }
  }
  uStack0000001c = 0x4f64d8;
  core_npc_cpp_CNPC_FUN_00544d30(&this_ptr->base_npc);
  return;
}


// Assembly code:
// 004f6450: PUSH EBX
//   Label: core_hostage.cpp_CHostage_FUN_004f6450
// 004f6451: PUSH ESI
// 004f6452: PUSH EDI
// 004f6453: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004f6457: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004f645b: MOV EDX,dword ptr [EBX + 0x1fab8]
// 004f6461: TEST EDX,EDX
// 004f6463: JZ 0x004f64df
//   XREF to: 004f64df (CONDITIONAL_JUMP)
// 004f6469: FLD float ptr [ESI + 0x4]
//   Label: LAB_004f6469
// 004f646c: FSUBR float ptr [EBX + 0x243c]
// 004f6472: LEA EDX,[EBX + 0x158]
// 004f6478: FST float ptr [EBX + 0x243c]
// 004f647e: FLDZ
// 004f6480: FCOMPP
// 004f6482: FNSTSW AX
// 004f6484: SAHF
// 004f6485: JNC 0x004f64e4
//   XREF to: 004f64e4 (CONDITIONAL_JUMP)
// 004f6487: FLD float ptr [ESI + 0x4]
// 004f648a: FLDZ
// 004f648c: FCOMPP
// 004f648e: FNSTSW AX
// 004f6490: SAHF
// 004f6491: JNC 0x004f64d1
//   XREF to: 004f64d1 (CONDITIONAL_JUMP)
// 004f6493: CMP dword ptr [EBX + 0x2598],0x0
// 004f649a: JNZ 0x004f64be
//   XREF to: 004f64be (CONDITIONAL_JUMP)
// 004f649c: PUSH 0x1
// 004f649e: PUSH 0x4
// 004f64a0: PUSH EDX
// 004f64a1: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f64a6: MOV EAX,[0x00821ff4]
//   XREF to: 00821ff4 (READ)
// 004f64ab: MOV dword ptr [EBX + 0x1faec],0x40400000
// 004f64b5: ADD ESP,0xc
// 004f64b8: MOV dword ptr [EBX + 0x1fae8],EAX
// 004f64be: MOV EDI,dword ptr [EBX + 0x1fab0]
//   Label: LAB_004f64be
// 004f64c4: PUSH EDI
// 004f64c5: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 004f64ca: ADD ESP,0x4
// 004f64cd: TEST EAX,EAX
// 004f64cf: JZ 0x004f6528
//   XREF to: 004f6528 (CONDITIONAL_JUMP)
// 004f64d1: PUSH ESI
//   Label: LAB_004f64d1
// 004f64d2: PUSH EBX
// 004f64d3: CALL core_npc.cpp_CNPC_FUN_00544d30
//   XREF to: 00544d30 (UNCONDITIONAL_CALL)
// 004f64d8: ADD ESP,0x8
// 004f64db: POP EDI
// 004f64dc: POP ESI
// 004f64dd: POP EBX
// 004f64de: RET
// 004f64df: MOV dword ptr [ESI + 0x4],EDX
//   Label: LAB_004f64df
// 004f64e2: JMP 0x004f6469
//   XREF to: 004f6469 (UNCONDITIONAL_JUMP)
// 004f64e4: PUSH 0x1
//   Label: LAB_004f64e4
// 004f64e6: PUSH 0x6
// 004f64e8: PUSH EDX
// 004f64e9: MOV dword ptr [EBX + 0x243c],0x0
// 004f64f3: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f64f8: ADD ESP,0xc
// 004f64fb: PUSH 0x41c80000
// 004f6500: PUSH 0x32
// 004f6502: MOV EAX,dword ptr [EBX + 0x154]
// 004f6508: PUSH EBX
// 004f6509: CALL dword ptr [EAX + 0xa0]
// 004f650f: ADD ESP,0xc
// 004f6512: LEA EAX,[EBX + 0x1fa4c]
// 004f6518: PUSH EAX
// 004f6519: MOV EDX,dword ptr [EBX + 0x154]
// 004f651f: PUSH EBX
// 004f6520: CALL dword ptr [EDX + 0x24]
// 004f6523: ADD ESP,0x8
// 004f6526: JMP 0x004f64d1
//   XREF to: 004f64d1 (UNCONDITIONAL_JUMP)
// 004f6528: LEA EAX,[EBX + 0x1f9e8]
//   Label: LAB_004f6528
// 004f652e: PUSH EAX
// 004f652f: MOV EDX,dword ptr [EBX + 0x154]
// 004f6535: PUSH EBX
// 004f6536: CALL dword ptr [EDX + 0x24]
// 004f6539: ADD ESP,0x8
// 004f653c: MOV dword ptr [EBX + 0x1fab0],EAX
// 004f6542: PUSH ESI
// 004f6543: PUSH EBX
// 004f6544: CALL core_npc.cpp_CNPC_FUN_00544d30
//   XREF to: 00544d30 (UNCONDITIONAL_CALL)
// 004f6549: ADD ESP,0x8
// 004f654c: POP EDI
// 004f654d: POP ESI
// 004f654e: POP EBX
// 004f654f: RET
