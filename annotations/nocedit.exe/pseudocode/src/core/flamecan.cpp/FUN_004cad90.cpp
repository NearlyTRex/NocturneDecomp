// Name: core_flamecan.cpp_FUN_004cad90
// Address: 004cad90
// Address Range: [[004cad90, 004cadfc]]
// Convention: unknown
// Signature: undefined core_flamecan.cpp_FUN_004cad90()

#include "nocturne.h"

void core_flamecan_cpp_FUN_004cad90(void)

{
  int iVar1;
  int iVar2;
  double dVar3;
  int in_stack_00000004;
  CColor3f local_24;
  int local_14;
  float fStack_10;
  
  local_24.r = *(float *)(in_stack_00000004 + 0x20);
  local_24.b = *(float *)(in_stack_00000004 + 0x28);
  local_24.g = *(float *)(in_stack_00000004 + 0x15c) * (float)0.5 +
               *(float *)(in_stack_00000004 + 0x24);
  core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310
            ((CDemonGlobe *)(in_stack_00000004 + 0x168),&local_24);
  fStack_10 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                        (-*(float *)(in_stack_00000004 + 0x284),
                         *(float *)(in_stack_00000004 + 0x284));
  dVar3 = crt_math_c_round_FUN_005fe6b0
                    ((double)((fStack_10 + *(float *)(in_stack_00000004 + 0x280)) *
                             (float)65535));
  local_14 = (int)ROUND(dVar3);
  *(int *)(in_stack_00000004 + 0x1a4) = local_14;
  iVar1 = (local_14 + (local_14 >> 0x1f) * -0x100) - (uint)((local_14 >> 0x1f) << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  *(char *)(in_stack_00000004 + 0x184) =
       (char)((int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
            ((CDemonGlobe *)(in_stack_00000004 + 0x168),
             *(float *)(in_stack_00000004 + 0x15c) * *(float *)(in_stack_00000004 + 0x1ac) *
             (float)2);
  *(uint *)(in_stack_00000004 + 0x188) = 2;
  return;
}
