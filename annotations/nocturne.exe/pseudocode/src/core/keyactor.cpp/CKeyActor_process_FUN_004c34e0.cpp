// Name: core_keyactor.cpp_CKeyActor_process_FUN_004c34e0
// Address: 004c34e0
// Address Range: [[004c34e0, 004c3583]]
// Convention: __cdecl
// Signature: void __cdecl core_keyactor_cpp_CKeyActor_process_FUN_004c34e0(CKeyActor *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_keyactor_cpp_CKeyActor_process_FUN_004c34e0(CKeyActor *this_ptr,float delta_time)

{
  CDemonGlobe *this_ptr_00;
  CDemonSet *this_ptr_01;
  int iVar1;
  int iVar2;
  float10 fVar3;
  double dVar4;
  
  this_ptr_00 = &this_ptr->globe;
  this_ptr->rotation_angle = delta_time * (float)3.1415926535000001 + this_ptr->rotation_angle;
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0044cd90
            (this_ptr_00,&(this_ptr->base).location.position);
  fVar3 = (float10)fsin((float10)this_ptr->rotation_angle);
  dVar4 = round
                    ((double)(fVar3 * (float10)8192 + (float10)16384));
  iVar1 = (int)ROUND(dVar4);
  (this_ptr->globe).intensity_multiplier = iVar1;
  iVar1 = (iVar1 + (iVar1 >> 0x1f) * -0x100) - (uint)((iVar1 >> 0x1f) << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  (this_ptr->globe).intensity.bytes[0] =
       (uchar)((int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0(this_ptr_00,1.0);
  this_ptr_01 = g_CDemonSet_PTR_005be368;
  (this_ptr->globe).corona_mode = 0;
  core_set_cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0(this_ptr_01,this_ptr_00);
  return;
}
