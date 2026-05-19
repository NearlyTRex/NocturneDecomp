// Name: core_lightgun.cpp_CLightGun_updateBeamLight_FUN_00505ac0
// Address: 00505ac0
// MANUAL RECONSTRUCTION
// Address Range: [[00505ac0, 00505b6e]]
// Convention: __cdecl
// Signature: void __cdecl core_lightgun_cpp_CLightGun_updateBeamLight_FUN_00505ac0(CLightGun *this_ptr)

#include "nocturne.h"

void __cdecl core_lightgun_cpp_CLightGun_updateBeamLight_FUN_00505ac0(CLightGun *this_ptr)

{
  CVector3f *input_local_point;
  CVector3f local_e1;
  char local_res0;
  CVector3f CStack_14;

  input_local_point =
       (*(((this_ptr->base).base.vtable._uw)->_uw).getMuzzlePoint)(&this_ptr->base,&local_e1);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&CStack_14,input_local_point);
  g_CDemonLightInstance.light_enabled_flag = 1;
  g_CDemonLightInstance.volumetric_enabled = 0;
  if ((float *)&local_res0 != &g_CDemonLightInstance.base.base.rotation_matrix.m[0].z) {
    g_CDemonLightInstance.base.base.position.f = CStack_14;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (&g_CDemonLightInstance.base.base.rotation_matrix,&(this_ptr->base).base.orient.vec);
  g_CDemonLightInstance.base.max_distance = 32.0;
  g_CDemonLightInstance.base.base.focal_length = 112.0f;
  g_CDemonLightInstance.antialiasing_enabled = 1;
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(&g_CDemonLightInstance,1.0);
  return;
}
