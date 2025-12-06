// Name: core_lightgun.cpp_FUN_00505ac0
// Address: 00505ac0
// Address Range: [[00505ac0, 00505b6e]]
// Convention: unknown
// Signature: undefined core_lightgun.cpp_FUN_00505ac0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_weapon_lightgun.cpp_FUN_00505ac0(uint param_1) */

void core_lightgun_cpp_FUN_00505ac0
               (uint param_1,uint param_2,int unaff_EBX,uint param_4,
               CDemonActor *param_5)

{
  CVector3f *input_local_point;
  BADSPACEBASE *in_ESP;
  int unaff_retaddr;
  
  input_local_point = (CVector3f *)(*param_5->vtable[1].renderOpaque)(param_5);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (param_5,(CVector3f *)&stack0xfffffff8,input_local_point);
  g_CDemonLightInstance.light_enabled_flag = 1;
  g_CDemonLightInstance.field17_0x1cbc = 0;
  if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.base.position.y) {
    g_CDemonLightInstance.base.base.position.z = (int)param_5;
    g_CDemonLightInstance.base.base.position.x = unaff_EBX;
    g_CDemonLightInstance.base.base.position.y = unaff_retaddr;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&g_CDemonLightInstance.base.base.rotation_matrix,
             (CVector3f *)&param_5->orient);
  g_CDemonLightInstance.base.max_distance = 32.0;
  g_CDemonLightInstance.base.base.projection_scale = _DAT_00660a44;
  g_CDemonLightInstance.antialiasing_enabled = 1;
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(&g_CDemonLightInstance,1.0);
  return;
}
