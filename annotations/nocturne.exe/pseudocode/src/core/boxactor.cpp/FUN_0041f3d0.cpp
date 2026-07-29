// Name: core_boxactor.cpp_FUN_0041f3d0
// Address: 0041f3d0
// Address Range: [[0041f3d0, 0041f5f3]]
// Convention: unknown
// Signature: void core_boxactor_cpp_FUN_0041f3d0(CBoxActor *param_1,float param_2)

#include "nocturne.h"

void core_boxactor_cpp_FUN_0041f3d0(CBoxActor *param_1,float param_2)

{
  CVector3i *pCVar1;
  CDemonSet *this_ptr;
  uint uVar2;
  int iVar3;
  CDemonActor **this_ptr_00;
  float *pfVar4;
  CMatrix3x4f *pCVar5;
  byte bVar6;
  int filter_index;
  int filter_pos_x;
  int filter_pos_y;
  float local_e4 [12];
  CMatrix3x4f local_b4;
  CMatrix3x4f local_84;
  CMatrix3x4f local_54;
  CVector3f local_24;
  CVector3f local_18;
  float local_c;
  
  bVar6 = 0;
  core_boxactor_cpp_CBoxActor_process_FUN_0041e5e0(param_1,param_2);
  if ((*(int *)param_1[1].base.actor_name == 2) &&
     (param_2 = (float)param_1[8].pickup_type - param_2, param_1[8].pickup_type = (int)param_2,
     param_2 <= 0.0)) {
    filter_pos_y = 0;
    filter_pos_x = 0;
    filter_index = 0;
    iVar3 = core_actor_cpp_getRandomInt_FUN_0040de00(0,7);
    core_dlight_cpp_CDemonLight_applyFilter_FUN_004501c0
              ((CDemonLight *)(param_1[1].base.actor_name + 4),
               (CDemonFilter *)(&DAT_0076483c + iVar3 * 0x4c),filter_index,filter_pos_x,filter_pos_y
              );
    local_c = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,0.15);
    param_1[8].pickup_type = (int)local_c;
  }
  if (*(int *)param_1[1].base.actor_name != 3) {
    if (*(int *)(param_1[5].push_sound + 4) == 0) {
      return;
    }
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              (&param_1->base,&local_18,(CVector3f *)&param_1[8].sfx_handle);
    pCVar1 = &param_1[1].base.scale;
    if ((CVector3f *)pCVar1 != &local_18) {
      pCVar1->x = (int)local_18.x;
      param_1[1].base.scale.y = (int)local_18.y;
      param_1[1].base.scale.z = (int)local_18.z;
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (&local_54,(CVector3f *)&DAT_02dd1184,(CVector3f *)&param_1[8].rpm.z);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
              (&local_b4,(CVector3f *)&DAT_02dd1184,&(param_1->base).orient.vec);
    core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&local_54,&local_b4);
    pfVar4 = local_e4;
    pCVar5 = &local_84;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar5->m[0].w = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
    }
    core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_84,&local_24);
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
              ((CMatrix3x3f *)&param_1[1].base.blood_effect_timer,&local_24);
    core_set_cpp_CDemonSet_addDynamicLight_FUN_0050a970
              (0x01E57284,(CDemonLight *)(param_1[1].base.actor_name + 4));
    return;
  }
  this_ptr_00 = &param_1[8].carrier_actor;
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0044cd90
            ((CDemonGlobe *)this_ptr_00,&(param_1->base).location.position);
  uVar2 = rand();
  *(uint *)(param_1[8].push_sound + 0x28) = uVar2 & 0x7fff;
  param_1[8].push_sound[8] = (char)((int)(uVar2 & 0x7fff) >> 10);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0((CDemonGlobe *)this_ptr_00,2.0);
  this_ptr = 0x01E57284;
  param_1[8].push_sound[0xc] = '\0';
  param_1[8].push_sound[0xd] = '\0';
  param_1[8].push_sound[0xe] = '\0';
  param_1[8].push_sound[0xf] = '\0';
  core_set_cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0(this_ptr,(CDemonGlobe *)this_ptr_00);
  return;
}
