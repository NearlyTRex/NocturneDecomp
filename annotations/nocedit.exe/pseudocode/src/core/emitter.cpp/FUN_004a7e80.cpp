// Name: core_emitter.cpp_FUN_004a7e80
// Address: 004a7e80
// Address Range: [[004a7e80, 004a7ef6]]
// Convention: unknown
// Signature: undefined core_emitter.cpp_FUN_004a7e80()

#include "nocturne.h"

/* Signature: byte actors_other_emitter.cpp_FUN_004a7e80(uint param_1) */

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
  local_64 = local_64 + 5f;
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-8.0,8.0);
  local_64 = fVar2 + local_64;
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-8.0,8.0);
  fsin((float10)-1.30899693895833);
  fptan((float10)1.30899693895833);
  fVar3 = (float10)local_58;
  local_58 = (float)((float10)fVar2 + fVar3);
  local_68 = 6.841488e-39;
  fVar3 = crt_math_c_atan2_FUN_006013b1((float10)local_60,(float10)fVar2 + fVar3);
  fVar2 = SQRT(local_64 * local_64 + local_5c * local_5c);
  fVar4 = (float10)fcos(extraout_ST3);
  fVar5 = (float10)fsin(fVar3);
  fVar3 = (float10)fcos(fVar3);
  dStack_34 = (double)fVar2;
  local_10 = fVar2 * (float)32 * fVar2;
  fVar6 = fVar4 * (float10)2f * fVar4 *
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
