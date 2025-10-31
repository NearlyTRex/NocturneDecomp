// Name: core_emitter.cpp_FUN_004a7e80
// Address: 004a7e80
// Address Range: [[004a7e80, 004a7ef6]]
// Convention: unknown
// Signature: undefined core_emitter.cpp_FUN_004a7e80()
// Cross-references:
//   core_vampboss.cpp_VoicuSummonWavFile2_FUN_005e7410 (005e7410) at 005e7463 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_0062407e = 5
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_hero.cpp_closestHeroToPoint_FUN_004f2170

#include "nocturne.h"

/* Signature: undefined1 actors_other_emitter.cpp_FUN_004a7e80(undefined4 param_1) */

void core_emitter_cpp_FUN_004a7e80(void)

{
  int iVar1;
  float fVar2;
  BADSPACEBASE *in_ESP;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 extraout_ST1;
  float10 extraout_ST2;
  float10 fVar6;
  unkbyte10 extraout_ST3;
  int in_stack_00000004;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  double dStack_34;
  float local_10;
  float fStack_c;
  
  iVar1 = core_hero_cpp_closestHeroToPoint_FUN_004f2170();
  local_5c = *(float *)(iVar1 + 0x20) - *(float *)(in_stack_00000004 + 0x20);
  local_58 = *(float *)(iVar1 + 0x24) - *(float *)(in_stack_00000004 + 0x24);
  local_54 = *(float *)(iVar1 + 0x28) - *(float *)(in_stack_00000004 + 0x28);
  if (&local_68 != &local_5c) {
    local_68 = local_5c;
    local_64 = local_58;
    local_60 = local_54;
  }
  local_64 = local_64 + FLOAT_0062407e;
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-8.0,8.0);
  local_64 = fVar2 + local_64;
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-8.0,8.0);
  fsin((float10)DOUBLE_00624082);
  fptan((float10)DOUBLE_00624092);
  fVar3 = (float10)local_58;
  local_58 = (float)((float10)fVar2 + fVar3);
  local_68 = 6.841488e-39;
  fVar3 = crt_math_c_atan2_FUN_006013b1((float10)local_60,(float10)fVar2 + fVar3);
  fVar2 = SQRT(local_64 * local_64 + local_5c * local_5c);
  fVar4 = (float10)fcos(extraout_ST3);
  fVar5 = (float10)fsin(fVar3);
  fVar3 = (float10)fcos(fVar3);
  dStack_34 = (double)fVar2;
  local_10 = fVar2 * (float)DOUBLE_0062408a * fVar2;
  fVar6 = fVar4 * (float10)FLOAT_0062409a * fVar4 *
          (extraout_ST1 * (float10)fVar2 - (float10)local_60);
  fStack_3c = (float)-extraout_ST2;
  local_68 = (float)fVar6;
  local_40 = (float)(fVar5 * fVar4);
  fStack_38 = (float)(fVar3 * fVar4);
  if ((float10)0 < fVar6) {
    fStack_c = SQRT(local_10 / local_68);
    local_4c = local_40 * fStack_c;
    local_48 = fStack_3c * fStack_c;
    local_44 = fStack_38 * fStack_c;
    if (&local_40 != &local_4c) {
      local_40 = local_4c;
      fStack_3c = local_48;
      fStack_38 = local_44;
    }
    core_fire_cpp_CFireEffect_FUN_004c7db0(g_CFireEffectPtr);
  }
  return;
}


// Assembly code:
// 004a7e80: PUSH EBX
//   Label: core_emitter.cpp_FUN_004a7e80
// 004a7e81: PUSH EBP
// 004a7e82: MOV EBP,ESP
// 004a7e84: SUB ESP,0x64
// 004a7e87: AND ESP,0xfffffff8
// 004a7e8a: MOV EBX,dword ptr [EBP + 0xc]
// 004a7e8d: ADD EBX,0x20
// 004a7e90: PUSH EBX
// 004a7e91: CALL core_hero.cpp_closestHeroToPoint_FUN_004f2170
//   XREF to: 004f2170 (UNCONDITIONAL_CALL)
// 004a7e96: FLD float ptr [EAX + 0x20]
// 004a7e99: FSUB float ptr [EBX]
// 004a7e9b: ADD ESP,0x4
// 004a7e9e: FSTP float ptr [ESP + 0x10]
// 004a7ea2: FLD float ptr [EAX + 0x24]
// 004a7ea5: FSUB float ptr [EBX + 0x4]
// 004a7ea8: FSTP float ptr [ESP + 0x14]
// 004a7eac: FLD float ptr [EAX + 0x28]
// 004a7eaf: LEA EAX,[ESP + 0x4]
// 004a7eb3: FSUB float ptr [EBX + 0x8]
// 004a7eb6: LEA EBX,[ESP + 0x10]
// 004a7eba: FSTP float ptr [ESP + 0x18]
// 004a7ebe: CMP EAX,EBX
// 004a7ec0: JZ 0x004a7eda
//   XREF to: 004a7eda (CONDITIONAL_JUMP)
// 004a7ec2: MOV EAX,dword ptr [ESP + 0x10]
// 004a7ec6: MOV dword ptr [ESP + 0x4],EAX
// 004a7eca: MOV EAX,dword ptr [ESP + 0x14]
// 004a7ece: MOV dword ptr [ESP + 0x8],EAX
// 004a7ed2: MOV EAX,dword ptr [ESP + 0x18]
// 004a7ed6: MOV dword ptr [ESP + 0xc],EAX
// 004a7eda: FLD float ptr [ESP + 0x8]
//   Label: LAB_004a7eda
// 004a7ede: PUSH 0x41000000
// 004a7ee3: FADD float ptr [0x0062407e]
//   XREF to: 0062407e (READ)
// 004a7ee9: PUSH 0xc1000000
// 004a7eee: FSTP float ptr [ESP + 0x10]
// 004a7ef2: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
