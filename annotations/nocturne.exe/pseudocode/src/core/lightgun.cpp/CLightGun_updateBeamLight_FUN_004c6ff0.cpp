// Name: core_lightgun.cpp_CLightGun_updateBeamLight_FUN_004c6ff0
// Address: 004c6ff0
// Address Range: [[004c6ff0, 004c709e]]
// Convention: __cdecl
// Signature: void __cdecl core_lightgun_cpp_CLightGun_updateBeamLight_FUN_004c6ff0(CLightGun *this_ptr)

#include "nocturne.h"

void __cdecl core_lightgun_cpp_CLightGun_updateBeamLight_FUN_004c6ff0(CLightGun *this_ptr)

{
  CVector3f *input_local_point;
  float unaff_ESI;
  float fStack_10;
  float fStack_c;
  
  input_local_point =
       (CVector3f *)(*(((this_ptr->base).base.vtable._uc)->_uc).canWalk)((CCharacter *)this_ptr);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            ((CDemonActor *)this_ptr,(CVector3f *)&fStack_10,input_local_point);
  g_CDemonLight_01c74640.light_enabled_flag = 1;
  g_CDemonLight_01c74640.volumetric_enabled = 0;
  if ((float *)&stack0x00000000 != &g_CDemonLight_01c74640.base.rotation_matrix.m[0].y) {
    g_CDemonLight_01c74640.base.position.x = fStack_10;
    g_CDemonLight_01c74640.base.position.y = fStack_c;
    g_CDemonLight_01c74640.base.position.z = unaff_ESI;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
            (&g_CDemonLight_01c74640.base.rotation_matrix,&(this_ptr->base).base.orient.vec);
  g_CDemonLight_01c74640.base.fixed_point_scale = 32.0;
  g_CDemonLight_01c74640.base.focal_length = 112.0f;
  g_CDemonLight_01c74640.antialiasing_enabled = 1;
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00452080(&g_CDemonLight_01c74640,1.0);
  return;
}
