// Name: core_boxactor.cpp_FUN_00422a50
// Address: 00422a50
// Address Range: [[00422a50, 00422afa] [00422b17, 00422c73]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00422a50()

#include "nocturne.h"

void core_boxactor_cpp_FUN_00422a50(void)

{
  CVector3f *pCVar1;
  CDemonSet *this_ptr;
  uint uVar2;
  int iVar3;
  CMatrix3x4f *pCVar4;
  CMatrix3x3f *pCVar5;
  byte bVar6;
  CBoxActor *in_stack_00000004;
  float in_stack_00000008;
  int filter_index;
  int filter_pos_x;
  int filter_pos_y;
  CMatrix3x4f local_e4;
  CMatrix3x4f local_b4;
  CMatrix3x3f local_84;
  CMatrix3x4f local_54;
  CVector3f local_24;
  CVector3f local_18;
  float local_c;
  
  bVar6 = 0;
  core_boxactor_cpp_CBoxActor_process_FUN_004219e0(in_stack_00000004,in_stack_00000008);
  if ((*(int *)in_stack_00000004[1].base_actor.actor_name == 2) &&
     (in_stack_00000008 = *(float *)in_stack_00000004[8].loop_wav_name - in_stack_00000008,
     *(float *)in_stack_00000004[8].loop_wav_name = in_stack_00000008, in_stack_00000008 <= 0.0)) {
    filter_pos_y = 0;
    filter_pos_x = 0;
    filter_index = 0;
    iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,7);
    core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770
              ((CDemonLight *)(in_stack_00000004[1].base_actor.actor_name + 4),
               CDemonFilter_ARRAY_008229ec + iVar3,filter_index,filter_pos_x,filter_pos_y);
    local_c = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,0.15);
    *(float *)in_stack_00000004[8].loop_wav_name = local_c;
  }
  if (*(int *)in_stack_00000004[1].base_actor.actor_name != 3) {
    if (in_stack_00000004[5].rpm.z == 0.0) {
      return;
    }
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&in_stack_00000004->base_actor,&local_18,
               (CVector3f *)(in_stack_00000004[8].model_name + 0x164));
    pCVar1 = (CVector3f *)(in_stack_00000004[1].base_actor.actor_name + 8);
    if (pCVar1 != &local_18) {
      pCVar1->x = local_18.x;
      *(float *)(in_stack_00000004[1].base_actor.actor_name + 0xc) = local_18.y;
      *(float *)(in_stack_00000004[1].base_actor.actor_name + 0x10) = local_18.z;
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_54,&g_ZeroVector,(CVector3f *)(in_stack_00000004[8].model_name + 0x170));
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_b4,&g_ZeroVector,(CVector3f *)&(in_stack_00000004->base_actor).orient);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_54,&local_b4,&local_e4);
    pCVar4 = &local_e4;
    pCVar5 = &local_84;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar5->m[0].x = *(float *)pCVar4;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
      pCVar5 = (CMatrix3x3f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
    }
    core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&local_84,&local_24);
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              ((CMatrix3x3f *)(in_stack_00000004[1].base_actor.actor_name + 0x14),&local_24);
    core_set_cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090(g_CDemonSetPtr);
    return;
  }
  core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310
            ((CDemonGlobe *)(in_stack_00000004[8].loop_wav_name + 4),
             (CColor3f *)&(in_stack_00000004->base_actor).location);
  uVar2 = crt_stdlib_c_rand_FUN_005feb5c();
  in_stack_00000004[8].pickup_type = uVar2 & 0x7fff;
  in_stack_00000004[8].collision_wav_name[0xc] = (char)((int)(uVar2 & 0x7fff) >> 10);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
            ((CDemonGlobe *)(in_stack_00000004[8].loop_wav_name + 4),2.0);
  this_ptr = g_CDemonSetPtr;
  in_stack_00000004[8].collision_wav_name[0x10] = '\0';
  in_stack_00000004[8].collision_wav_name[0x11] = '\0';
  in_stack_00000004[8].collision_wav_name[0x12] = '\0';
  in_stack_00000004[8].collision_wav_name[0x13] = '\0';
  core_set_cpp_CDemonSet_FUN_0056d110(this_ptr);
  return;
}
