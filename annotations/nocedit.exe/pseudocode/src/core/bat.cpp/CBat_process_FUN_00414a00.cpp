// Name: core_bat.cpp_CBat_process_FUN_00414a00
// Address: 00414a00
// Address Range: [[00414a00, 00414bce]]
// Convention: __cdecl
// Signature: void core_bat.cpp_CBat_process_FUN_00414a00(CBat * this_ptr)
// Globals:
//   undefined4 DAT_00615366
//   undefined4 DAT_0061536e
//   undefined4 DAT_00615376
//   undefined4 DAT_0061537e
//   undefined4 DAT_00615386
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_bat.cpp_FUN_00414ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   sound_sndmain.cpp_FUN_005aa290
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bat_cpp_CBat_process_FUN_00414a00(CBat *this_ptr)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float in_stack_00000008;
  float local_34;
  
  fVar4 = (this_ptr->base_actor).location.position.z;
  this_ptr->param = this_ptr->course_speed * in_stack_00000008 + this_ptr->param;
  core_bat_cpp_FUN_00414ce0();
  local_34 = (((this_ptr->base_actor).location.position.y - fVar4) * (float)_DAT_00615366) /
             in_stack_00000008 + (float)_DAT_0061536e;
  if (local_34 < (float)_DAT_00615376) {
    local_34 = 10.0;
  }
  if ((float)_DAT_0061537e < local_34) {
    local_34 = 60.0;
  }
  *(float *)this_ptr->field6_0x310 =
       (local_34 - *(float *)this_ptr->field6_0x310) * (float)_DAT_00615386 +
       *(float *)this_ptr->field6_0x310;
  *(float *)(this_ptr->course_filename + 0x2c) =
       in_stack_00000008 * *(float *)this_ptr->field6_0x310 * this_ptr->speed +
       *(float *)(this_ptr->course_filename + 0x2c);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)this_ptr->model_name);
  if (*(float *)(this_ptr->course_filename + 0x2c) < (float)pCVar1->frame_count) {
    if (*(float *)(this_ptr->course_filename + 0x2c) < 0.0) {
      *(float *)(this_ptr->course_filename + 0x2c) = (float)(pCVar1->frame_count + -1);
    }
  }
  else {
    this_ptr->course_filename[0x2c] = '\0';
    this_ptr->course_filename[0x2d] = '\0';
    this_ptr->course_filename[0x2e] = '\0';
    this_ptr->course_filename[0x2f] = '\0';
  }
  if (this_ptr->unused[0] != '\0') {
    fVar4 = *(float *)(this_ptr->field10_0x380 + 4) - in_stack_00000008;
    *(float *)(this_ptr->field10_0x380 + 4) = fVar4;
    if (fVar4 <= 0.0) {
      iVar2 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660();
      if (iVar2 == 0) {
        iVar2 = sound_sndmain_cpp_FUN_005aa290();
        if (iVar2 != 0) {
          uVar3 = (*((this_ptr->base_actor).vtable)->playAmbientSound)
                            (&this_ptr->base_actor,this_ptr->unused);
          *(undefined4 *)this_ptr->field10_0x380 = uVar3;
        }
      }
      fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                        (this_ptr->periodic_sound_timer_min,this_ptr->periodic_sound_timer_max);
      *(float *)(this_ptr->field10_0x380 + 4) = fVar4;
      return;
    }
  }
  return;
}


// Assembly code:
// 00414a00: PUSH EBX
//   Label: core_bat.cpp_CBat_process_FUN_00414a00
// 00414a01: PUSH ESI
// 00414a02: PUSH EBP
// 00414a03: MOV EBP,ESP
// 00414a05: SUB ESP,0x28
// 00414a08: AND ESP,0xfffffff8
// 00414a0b: MOV EBX,dword ptr [EBP + 0x10]
// 00414a0e: LEA ESI,[EBX + 0x20]
// 00414a11: MOV EAX,dword ptr [ESI]
// 00414a13: MOV dword ptr [ESP + 0x10],EAX
// 00414a17: LEA EAX,[ESI + 0x4]
// 00414a1a: MOV EAX,dword ptr [EAX]
// 00414a1c: MOV dword ptr [ESP + 0x14],EAX
// 00414a20: LEA EAX,[ESI + 0x8]
// 00414a23: MOV EAX,dword ptr [EAX]
// 00414a25: MOV dword ptr [ESP + 0x18],EAX
// 00414a29: FLD float ptr [EBX + 0x308]
// 00414a2f: FMUL float ptr [EBP + 0x14]
// 00414a32: FADD float ptr [EBX + 0x304]
// 00414a38: PUSH EBX
// 00414a39: FSTP float ptr [EBX + 0x304]
// 00414a3f: CALL core_bat.cpp_FUN_00414ce0
//   XREF to: 00414ce0 (UNCONDITIONAL_CALL)
// 00414a44: ADD ESP,0x4
// 00414a47: FLD float ptr [ESI]
// 00414a49: FSUB float ptr [ESP + 0x10]
// 00414a4d: FSTP float ptr [ESP + 0x4]
// 00414a51: FLD float ptr [ESI + 0x4]
// 00414a54: FSUB float ptr [ESP + 0x14]
// 00414a58: FST float ptr [ESP + 0x8]
// 00414a5c: FMUL double ptr [0x00615366]
//   XREF to: 00615366 (READ)
// 00414a62: FDIV float ptr [EBP + 0x14]
// 00414a65: FLD float ptr [ESI + 0x8]
// 00414a68: FSUB float ptr [ESP + 0x18]
// 00414a6c: FXCH
// 00414a6e: FADD double ptr [0x0061536e]
//   XREF to: 0061536e (READ)
// 00414a74: FXCH
// 00414a76: FSTP float ptr [ESP + 0xc]
// 00414a7a: FST float ptr [ESP]
// 00414a7d: FCOMP double ptr [0x00615376]
//   XREF to: 00615376 (READ)
// 00414a83: FNSTSW AX
// 00414a85: SAHF
// 00414a86: JC 0x00414b3a
//   XREF to: 00414b3a (CONDITIONAL_JUMP)
// 00414a8c: FLD float ptr [ESP]
//   Label: LAB_00414a8c
// 00414a8f: FCOMP double ptr [0x0061537e]
//   XREF to: 0061537e (READ)
// 00414a95: FNSTSW AX
// 00414a97: SAHF
// 00414a98: JBE 0x00414aa1
//   XREF to: 00414aa1 (CONDITIONAL_JUMP)
// 00414a9a: MOV dword ptr [ESP],0x42700000
// 00414aa1: FLD float ptr [ESP]
//   Label: LAB_00414aa1
// 00414aa4: FSUB float ptr [EBX + 0x310]
// 00414aaa: FMUL double ptr [0x00615386]
//   XREF to: 00615386 (READ)
// 00414ab0: FLD float ptr [EBX + 0x310]
// 00414ab6: FXCH
// 00414ab8: FADD ST0,ST1
// 00414aba: FLD float ptr [EBP + 0x14]
// 00414abd: FXCH
// 00414abf: FSTP ST2
// 00414ac1: FXCH
// 00414ac3: FSTP float ptr [EBX + 0x310]
// 00414ac9: FMUL float ptr [EBX + 0x310]
// 00414acf: FMUL float ptr [EBX + 0x30c]
// 00414ad5: LEA EAX,[EBX + 0x188]
// 00414adb: FADD float ptr [EBX + 0x184]
// 00414ae1: PUSH EAX
// 00414ae2: FSTP float ptr [EBX + 0x184]
// 00414ae8: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00414aed: ADD ESP,0x4
// 00414af0: MOV ESI,dword ptr [EAX + 0x100]
// 00414af6: MOV dword ptr [ESP + 0x24],ESI
// 00414afa: FILD dword ptr [ESP + 0x24]
// 00414afe: FCOMP float ptr [EBX + 0x184]
// 00414b04: FNSTSW AX
// 00414b06: SAHF
// 00414b07: JA 0x00414b46
//   XREF to: 00414b46 (CONDITIONAL_JUMP)
// 00414b09: MOV dword ptr [EBX + 0x184],0x0
// 00414b13: CMP byte ptr [EBX + 0x314],0x0
//   Label: LAB_00414b13
// 00414b1a: JZ 0x00414b34
//   XREF to: 00414b34 (CONDITIONAL_JUMP)
// 00414b1c: FLD float ptr [EBX + 0x384]
// 00414b22: FSUB float ptr [EBP + 0x14]
// 00414b25: FST float ptr [EBX + 0x384]
// 00414b2b: FLDZ
// 00414b2d: FCOMPP
// 00414b2f: FNSTSW AX
// 00414b31: SAHF
// 00414b32: JNC 0x00414b64
//   XREF to: 00414b64 (CONDITIONAL_JUMP)
// 00414b34: MOV ESP,EBP
//   Label: LAB_00414b34
// 00414b36: POP EBP
// 00414b37: POP ESI
// 00414b38: POP EBX
// 00414b39: RET
// 00414b3a: MOV dword ptr [ESP],0x41200000
//   Label: LAB_00414b3a
// 00414b41: JMP 0x00414a8c
//   XREF to: 00414a8c (UNCONDITIONAL_JUMP)
// 00414b46: FLDZ
//   Label: LAB_00414b46
// 00414b48: FCOMP float ptr [EBX + 0x184]
// 00414b4e: FNSTSW AX
// 00414b50: SAHF
// 00414b51: JBE 0x00414b13
//   XREF to: 00414b13 (CONDITIONAL_JUMP)
// 00414b53: DEC ESI
// 00414b54: MOV dword ptr [ESP + 0x24],ESI
// 00414b58: FILD dword ptr [ESP + 0x24]
// 00414b5c: FSTP float ptr [EBX + 0x184]
// 00414b62: JMP 0x00414b13
//   XREF to: 00414b13 (UNCONDITIONAL_JUMP)
// 00414b64: MOV ESI,dword ptr [EBX + 0x380]
//   Label: LAB_00414b64
// 00414b6a: PUSH ESI
// 00414b6b: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 00414b70: ADD ESP,0x4
// 00414b73: TEST EAX,EAX
// 00414b75: JNZ 0x00414bbe
//   XREF to: 00414bbe (CONDITIONAL_JUMP)
// 00414b77: PUSH 0x40490000
// 00414b7c: PUSH EAX
// 00414b7d: SUB ESP,0x8
// 00414b80: FLD float ptr [EBX + 0x28]
// 00414b83: FSTP double ptr [ESP]
// 00414b86: SUB ESP,0x8
// 00414b89: FLD float ptr [EBX + 0x24]
// 00414b8c: FSTP double ptr [ESP]
// 00414b8f: SUB ESP,0x8
// 00414b92: FLD float ptr [EBX + 0x20]
// 00414b95: FSTP double ptr [ESP]
// 00414b98: CALL sound_sndmain.cpp_FUN_005aa290
//   XREF to: 005aa290 (UNCONDITIONAL_CALL)
// 00414b9d: ADD ESP,0x20
// 00414ba0: TEST EAX,EAX
// 00414ba2: JZ 0x00414bbe
//   XREF to: 00414bbe (CONDITIONAL_JUMP)
// 00414ba4: LEA EAX,[EBX + 0x314]
// 00414baa: PUSH EAX
// 00414bab: MOV ESI,dword ptr [EBX + 0x154]
// 00414bb1: PUSH EBX
// 00414bb2: CALL dword ptr [ESI + 0x28]
// 00414bb5: ADD ESP,0x8
// 00414bb8: MOV dword ptr [EBX + 0x380],EAX
// 00414bbe: PUSH dword ptr [EBX + 0x37c]
//   Label: LAB_00414bbe
// 00414bc4: PUSH dword ptr [EBX + 0x378]
// 00414bca: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
