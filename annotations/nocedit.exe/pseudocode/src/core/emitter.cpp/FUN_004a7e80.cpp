// Name: core_emitter.cpp_FUN_004a7e80
// Address: 004a7e80
// Address Range: [[004a7e80, 004a7ef6]]
// Convention: unknown
// Signature: void core_emitter_cpp_FUN_004a7e80(void)

#include "nocturne.h"

/* Signature: byte actors_other_emitter.cpp_FUN_004a7e80(uint param_1) */

void core_emitter_cpp_FUN_004a7e80(void)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 extraout_ST1;
  float10 extraout_ST2;
  float10 fVar6;
  unkbyte10 extraout_ST3;
  int in_stack_00000004;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  double local_40;
  float local_1c;
  float local_18;
  float local_10;
  
  iVar2 = core_hero_cpp_closestHeroToPoint_FUN_004f2170();
  local_60 = *(float *)(iVar2 + 0x20) - *(float *)(in_stack_00000004 + 0x20);
  local_5c = *(float *)(iVar2 + 0x24) - *(float *)(in_stack_00000004 + 0x24);
  local_58 = *(float *)(iVar2 + 0x28) - *(float *)(in_stack_00000004 + 0x28);
  if (&local_6c != &local_60) {
    local_6c = local_60;
    local_68 = local_5c;
    local_64 = local_58;
  }
  local_68 = local_68 + 5.0f;
  local_10 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-8.0,8.0);
  local_6c = local_10 + local_6c;
  local_10 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-8.0,8.0);
  fsin((float10)-1.30899693895833);
  fptan((float10)1.30899693895833);
  fVar3 = (float10)local_64;
  local_64 = (float)((float10)local_10 + fVar3);
  fVar3 = crt_math_c_atan2_FUN_006013b1((float10)local_6c,(float10)local_10 + fVar3);
  fVar1 = SQRT(local_70 * local_70 + local_68 * local_68);
  fVar4 = (float10)fcos(extraout_ST3);
  fVar5 = (float10)fsin(fVar3);
  fVar3 = (float10)fcos(fVar3);
  local_40 = (double)fVar1;
  local_1c = fVar1 * (float)32 * fVar1;
  fVar6 = fVar4 * (float10)2.0f * fVar4 *
          (extraout_ST1 * (float10)fVar1 - (float10)local_6c);
  local_48 = (float)-extraout_ST2;
  local_4c = (float)(fVar5 * fVar4);
  local_44 = (float)(fVar3 * fVar4);
  if ((float10)0 < fVar6) {
    local_18 = SQRT(local_1c / (float)fVar6);
    local_58 = local_4c * local_18;
    local_54 = local_48 * local_18;
    local_50 = local_44 * local_18;
    if (&local_4c != &local_58) {
      local_4c = local_58;
      local_48 = local_54;
      local_44 = local_50;
    }
    core_fire_cpp_CFireEffect_FUN_004c7db0(g_CFireEffectPtr);
  }
  return;
}
