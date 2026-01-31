// Name: core_keyactor.cpp_CKeyActor_process_FUN_00501710
// Address: 00501710
// Address Range: [[00501710, 005017b3]]
// Convention: __cdecl
// Signature: void __cdecl core_keyactor_cpp_CKeyActor_process_FUN_00501710(CKeyActor *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_keyactor_cpp_CKeyActor_process_FUN_00501710(CKeyActor *this_ptr,float delta_time)

{
  CDemonGlobe *this_ptr_00;
  float fVar1;
  CDemonSet *this_ptr_01;
  int iVar2;
  int iVar3;
  float10 fVar4;
  double dVar5;
  
  this_ptr_00 = (CDemonGlobe *)(this_ptr[1].base.actor_name + 4);
  *(float *)this_ptr[1].base.actor_name =
       delta_time * (float)3.1415926535000001 + *(float *)this_ptr[1].base.actor_name;
  core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310
            (this_ptr_00,(CColor3f *)&(this_ptr->base).location);
  fVar4 = (float10)fsin((float10)*(float *)this_ptr[1].base.actor_name);
  dVar5 = round
                    ((double)(fVar4 * (float10)8192 + (float10)16384));
  fVar1 = (float)(int)ROUND(dVar5);
  this_ptr[1].base.orient_matrix.m[0].y = fVar1;
  iVar2 = ((int)fVar1 + ((int)fVar1 >> 0x1f) * -0x100) - (uint)(((int)fVar1 >> 0x1f) << 7 < 0);
  iVar3 = iVar2 >> 0x1f;
  *(char *)&this_ptr[1].base.location.position.x =
       (char)((int)(((iVar2 >> 8) + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360(this_ptr_00,1.0);
  this_ptr_01 = g_CDemonSetPtr;
  this_ptr[1].base.location.position.y = 0.0;
  core_set_cpp_CDemonSet_FUN_0056d110(this_ptr_01);
  return;
}
