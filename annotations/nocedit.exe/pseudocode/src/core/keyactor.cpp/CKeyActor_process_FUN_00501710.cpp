// Name: core_keyactor.cpp_CKeyActor_process_FUN_00501710
// Address: 00501710
// Address Range: [[00501710, 005017b3]]
// Convention: __cdecl
// Signature: void __cdecl core_keyactor_cpp_CKeyActor_process_FUN_00501710(CKeyActor *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_keyactor_cpp_CKeyActor_process_FUN_00501710(CKeyActor *this_ptr,float delta_time)

{
  CDemonSet *this_ptr_00;
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  *(float *)this_ptr->unk = delta_time * (float)3.1415926535000001 + *(float *)this_ptr->unk;
  core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310
            ((CDemonGlobe *)(this_ptr->unk + 4),(CColor3f *)&(this_ptr->base).location);
  fVar3 = (float10)fsin((float10)*(float *)this_ptr->unk);
  iVar1 = (int)ROUND(ROUND(fVar3 * (float10)8192 + (float10)16384));
  *(int *)(this_ptr->unk + 0x40) = iVar1;
  iVar1 = (iVar1 + (iVar1 >> 0x1f) * -0x100) - (uint)((iVar1 >> 0x1f) << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  this_ptr->unk[0x20] = (char)((int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
            ((CDemonGlobe *)(this_ptr->unk + 4),1.0);
  this_ptr_00 = g_CDemonSetPtr;
  this_ptr->unk[0x24] = '\0';
  this_ptr->unk[0x25] = '\0';
  this_ptr->unk[0x26] = '\0';
  this_ptr->unk[0x27] = '\0';
  core_set_cpp_CDemonSet_FUN_0056d110(this_ptr_00);
  return;
}
