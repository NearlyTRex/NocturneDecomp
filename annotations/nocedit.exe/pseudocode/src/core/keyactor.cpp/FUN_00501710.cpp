// Name: core_keyactor.cpp_FUN_00501710
// Address: 00501710
// Address Range: [[00501710, 005017b3]]
// Convention: __cdecl
// Signature: void __cdecl core_keyactor_cpp_FUN_00501710(void)

#include "nocturne.h"

/* Signature: byte actors_other_keyactor.cpp_FUN_00501710(uint param_1, uint
   param_2) */

void __cdecl core_keyactor_cpp_FUN_00501710(void)

{
  CDemonSet *this_ptr;
  int iVar1;
  int iVar2;
  float10 fVar3;
  double dVar4;
  int in_stack_00000004;
  float in_stack_00000008;
  
  *(float *)(in_stack_00000004 + 0x2d8) =
       in_stack_00000008 * (float)3.1415926535000001 + *(float *)(in_stack_00000004 + 0x2d8);
  core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310
            ((CDemonGlobe *)(in_stack_00000004 + 0x2dc),(CColor3f *)(in_stack_00000004 + 0x20));
  fVar3 = (float10)fsin((float10)*(float *)(in_stack_00000004 + 0x2d8));
  dVar4 = round
                    ((double)(fVar3 * (float10)8192 + (float10)16384));
  iVar1 = (int)ROUND(dVar4);
  *(int *)(in_stack_00000004 + 0x318) = iVar1;
  iVar1 = (iVar1 + (iVar1 >> 0x1f) * -0x100) - (uint)((iVar1 >> 0x1f) << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  *(char *)(in_stack_00000004 + 0x2f8) =
       (char)((int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
            ((CDemonGlobe *)(in_stack_00000004 + 0x2dc),1.0);
  this_ptr = g_CDemonSetPtr;
  *(uint *)(in_stack_00000004 + 0x2fc) = 0;
  core_set_cpp_CDemonSet_FUN_0056d110(this_ptr);
  return;
}
