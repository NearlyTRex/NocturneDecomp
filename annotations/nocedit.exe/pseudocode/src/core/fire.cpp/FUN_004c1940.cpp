// Name: core_fire.cpp_FUN_004c1940
// Address: 004c1940
// Address Range: [[004c1940, 004c19f1]]
// Convention: unknown
// Signature: undefined core_fire.cpp_FUN_004c1940()

#include "nocturne.h"

void core_fire_cpp_FUN_004c1940(void)

{
  CDemonSet *this_ptr;
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  uint *in_stack_00000004;
  CColor3f *in_stack_00000008;
  CMatrix3x3f *in_stack_00000018;
  
  core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310
            ((CDemonGlobe *)(in_stack_00000004 + 7),in_stack_00000008);
  in_stack_00000004[0x16] = 0x8000;
  *(byte *)(in_stack_00000004 + 0xe) = 0x20;
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
            ((CDemonGlobe *)(in_stack_00000004 + 7),8.0);
  this_ptr = g_CDemonSetPtr;
  in_stack_00000004[0xf] = 0;
  core_set_cpp_CDemonSet_FUN_0056d110(this_ptr);
  if ((CColor3f *)(in_stack_00000004 + 1) != in_stack_00000008) {
    ((CColor3f *)(in_stack_00000004 + 1))->r = in_stack_00000008->r;
    in_stack_00000004[2] = in_stack_00000008->g;
    in_stack_00000004[3] = in_stack_00000008->b;
  }
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                     (in_stack_00000018,(CVector3f *)&stack0xfffffff4);
  if ((CVector3f *)(in_stack_00000004 + 4) == pCVar1) {
    *in_stack_00000004 = 2;
    return;
  }
  ((CVector3f *)(in_stack_00000004 + 4))->x = pCVar1->x;
  in_stack_00000004[5] = pCVar1->y;
  in_stack_00000004[6] = pCVar1->z;
  *in_stack_00000004 = 2;
  return;
}
