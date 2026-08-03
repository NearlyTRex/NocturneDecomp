// Name: core_keyactor.cpp_CKeyActor_process_FUN_004c34e0
// Address: 004c34e0
// Address Range: [[004c34e0, 004c3583]]
// Convention: unknown
// Signature: void core_keyactor_cpp_CKeyActor_process_FUN_004c34e0(int param_1,float param_2)

#include "nocturne.h"

void core_keyactor_cpp_CKeyActor_process_FUN_004c34e0(int param_1,float param_2)

{
  CDemonGlobe *this_ptr;
  CDemonSet *this_ptr_00;
  int iVar1;
  int iVar2;
  float10 fVar3;
  double dVar4;
  
  this_ptr = (CDemonGlobe *)(param_1 + 0x2d4);
  *(float *)(param_1 + 0x2d0) = param_2 * (float)3.1415926535000001 + *(float *)(param_1 + 0x2d0);
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0044cd90(this_ptr,(CVector3f *)(param_1 + 0x20));
  fVar3 = (float10)fsin((float10)*(float *)(param_1 + 0x2d0));
  dVar4 = round
                    ((double)(fVar3 * (float10)8192 + (float10)16384));
  iVar1 = (int)ROUND(dVar4);
  *(int *)(param_1 + 0x310) = iVar1;
  iVar1 = (iVar1 + (iVar1 >> 0x1f) * -0x100) - (uint)((iVar1 >> 0x1f) << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  *(char *)(param_1 + 0x2f0) =
       (char)((int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0(this_ptr,1.0);
  this_ptr_00 = g_CDemonSet_PTR_005be368;
  *(uint *)(param_1 + 0x2f4) = 0;
  core_set_cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0(this_ptr_00,this_ptr);
  return;
}
