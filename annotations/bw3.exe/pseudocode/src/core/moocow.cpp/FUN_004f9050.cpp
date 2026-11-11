// Name: core_moocow.cpp_FUN_004f9050
// Address: 004f9050
// Address Range: [[004f9050, 004f91c9]]
// Convention: unknown
// Signature: void core_moocow_cpp_FUN_004f9050(CCharacter *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_moocow_cpp_FUN_004f9050(CCharacter *param_1,float *param_2)

{
  CVector3f *initial_velocity;
  int iVar1;
  CBodyPart *body_part;
  float local_14;
  
  if ((*param_2 == *(float *)(param_1[1].base.actor_name + 0xc)) ||
     (*param_2 == param_1[1].base.location.position.x)) {
    local_14 = param_2[0xb];
    if (g_CGamePtr->gratuitous_dismemberment != 0) {
      local_14 = 1.0;
    }
    if (g_CGamePtr->blood_flag == 0) {
      local_14 = 0.0;
    }
    iVar1 = core_actor_cpp_randomChance_FUN_0040cf40(local_14);
    if (iVar1 != 0) {
      initial_velocity = (CVector3f *)(param_2 + 3);
      body_part = core_bodypart_cpp_createBodyPart_FUN_00414550
                            (&(param_1->base).location.position,&(param_1->base).orient,
                             initial_velocity,&param_1->base,0,0,BLOOD_TYPE_RED);
      core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00430590
                (param_1,body_part,(int)*param_2,1);
      if (*param_2 == param_1[1].base.location.position.x) {
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                  (param_1,*(int *)(param_1[1].base.actor_name + 0xc),initial_velocity,1);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                  (param_1,*(int *)(param_1[1].base.actor_name + 0x10),initial_velocity,1);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                  (param_1,*(int *)(param_1[1].base.actor_name + 0x14),initial_velocity,1);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                  (param_1,*(int *)(param_1[1].base.actor_name + 0x18),initial_velocity,1);
        core_charactr_cpp_CCharacter_detachBodyPart_FUN_00430520
                  (param_1,*(int *)(param_1[1].base.actor_name + 0x1c),initial_velocity,1);
      }
      core_charactr_cpp_CCharacter_playSoundWithCooldown_FUN_00434810(param_1,"limb?.wav");
      core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_004157c0(body_part);
      if ((param_1->model).part_data.visibility_flags[*(int *)(param_1[1].base.actor_name + 0xc)] ==
          0) {
        param_2[1] = 9999.0;
      }
      param_2[2] = param_2[2] * (float)_DAT_005c9224;
    }
  }
  if (*(float *)(param_1[1].base.actor_name + 0xc) == *param_2) {
    param_2[1] = param_2[1] * (float)_DAT_005c9234;
    return;
  }
  param_2[1] = param_2[1] * (float)_DAT_005c922c;
  return;
}
