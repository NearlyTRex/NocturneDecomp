// Name: core_lightgun.cpp_CLightGun_updateBeamLight_FUN_004c6ff0
// Address: 004c6ff0
// Address Range: [[004c6ff0, 004c709e]]
// Convention: __cdecl
// Signature: void __cdecl core_lightgun_cpp_CLightGun_updateBeamLight_FUN_004c6ff0(CLightGun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_lightgun_cpp_CLightGun_updateBeamLight_FUN_004c6ff0(CLightGun *this_ptr)

{
  CVector3f *input_local_point;
  uint unaff_ESI;
  float fStack_10;
  float fStack_c;
  
  input_local_point =
       (CVector3f *)
       (*((this_ptr->base).base.vtable._ub)->initializeInEditor)((CDemonActor *)this_ptr);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            ((CDemonActor *)this_ptr,(CVector3f *)&fStack_10,input_local_point);
  _DAT_01c762f4 = 1;
  _DAT_01c762fc = 0;
  if (&stack0x00000000 != &DAT_01c74754) {
    _DAT_01c74744 = fStack_10;
    _DAT_01c74748 = fStack_c;
    _DAT_01c7474c = unaff_ESI;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
            ((CMatrix3x3f *)&DAT_01c74750,&(this_ptr->base).base.orient.vec);
  _DAT_01c74740 = 0x42000000;
  _DAT_01c74778 = 112.0f;
  _DAT_01c76310 = 1;
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00452080((CDemonLight *)&DAT_01c74640,1.0);
  return;
}
