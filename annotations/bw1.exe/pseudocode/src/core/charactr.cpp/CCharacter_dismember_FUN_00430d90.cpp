// Name: core_charactr.cpp_CCharacter_dismember_FUN_00430d90
// Address: 00430d90
// Address Range: [[00430d90, 004310a3]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_dismember_FUN_00430d90(CCharacter *this_ptr,CVector3f *impact_point,float impact_force,int render_in_background)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_dismember_FUN_00430d90(CCharacter *this_ptr,CVector3f *impact_point,float impact_force,int render_in_background)

{
  CDeformableModel *pCVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_108c [989];
  CVector3f *pCVar6;
  float min_value;
  CBoundingBox3D *max_value;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float local_c4;
  float fStack_c0;
  float fStack_a4;
  CVector3f local_a0;
  float fStack_8c;
  CVector3f local_88;
  CVector3f CStack_74;
  CVector3f CStack_68;
  byte auStack_5c [8];
  float local_54 [4];
  float fStack_44;
  CVector3f local_40;
  CVector3f local_34;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar5 = 0;
  sound_sndmain_cpp_killSfx_FUN_00573a80(this_ptr->sfx_handle);
  if ((this_ptr->model).model_name[0] != '\0') {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(&this_ptr->model);
    local_20 = pCVar1->num_parts;
    if (1 < local_20) {
      if (impact_force < 0.0) {
        impact_force = 20.0;
      }
      local_1c = 0;
      if (0 < local_20) {
        do {
          pCVar6 = impact_point;
          if ((impact_point != (CVector3f *)0x0) && (0.0 < impact_force)) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(impact_point,&local_a0)
            ;
            min_value = -impact_force;
            local_24 = min_value;
            auStack_5c._4_4_ = local_a0.x;
            local_54[(uint)bVar5 * -2] = *(float *)((int)&local_a0 + (uint)bVar5 * -8 + 4);
            max_value = (CBoundingBox3D *)impact_force;
            local_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
                 *(float *)((int)&local_a0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
            local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(min_value,impact_force);
            local_54[0] = local_18 + local_54[0];
            local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00
                                 (local_24,(float)max_value);
            auStack_5c._4_4_ = local_18 + (float)auStack_5c._4_4_;
            core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
                      ((CMatrix3x3f *)&stack0xfffffefc,(CVector3f *)(auStack_5c + 4));
            local_40.z = SQRT(impact_point->z * impact_point->z +
                              impact_point->x * impact_point->x + impact_point->y * impact_point->y)
            ;
            local_40.x = 0.0;
            local_40.y = 0.0;
            local_28 = local_40.z;
            core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045f690
                      ((CMatrix3x3f *)&stack0xfffffefc,&local_40,&local_34);
            local_88.x = local_34.x;
            *(uint *)((int)&local_88 + (uint)bVar5 * -8 + 4) =
                 *(uint *)((int)&local_34 + (uint)bVar5 * -8 + 4);
            *(uint *)((int)&local_88 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
                 *(uint *)((int)&local_34 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
            pCVar6 = &local_88;
            impact_force = (float)max_value;
          }
          core_charactr_cpp_CCharacter_detachBodyPart_FUN_004311a0
                    (this_ptr,local_1c,pCVar6,render_in_background);
          local_1c = local_1c + 1;
        } while (local_1c < local_20);
      }
    }
  }
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)impact_force);
  puVar3 = (uint *)&stack0xffffff44;
  puVar4 = (uint *)&stack0xffffff24;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  fStack_a4 = fStack_d4 + fStack_c8;
  local_a0.x = fStack_d0 + local_c4;
  local_a0.y = fStack_cc + fStack_c0;
  fStack_8c = fStack_d4 + fStack_c8;
  *(uint *)((int)&local_88 + (uint)bVar5 * -8) =
       *(uint *)((int)&local_a0 + (uint)bVar5 * -8);
  *(uint *)((int)&local_88 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4) =
       *(uint *)((int)&local_a0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4);
  pCVar6 = &CStack_74;
  fStack_44 = fStack_8c * _DAT_005d5a57;
  local_40.x = local_88.x * _DAT_005d5a57;
  local_40.y = local_88.y * _DAT_005d5a57;
  CStack_74.x = fStack_8c * _DAT_005d5a57;
  *(uint *)((int)&CStack_74 + (uint)bVar5 * -8 + 4) =
       *(uint *)((int)&local_40 + (uint)bVar5 * -8);
  *(uint *)((int)&CStack_74 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       *(uint *)((int)&local_40 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
            (&this_ptr->base,pCVar6,(CVector3f *)auStack_5c);
  CStack_68.x = (float)auStack_5c._0_4_;
  *(uint *)(auStack_5c + (uint)bVar5 * -8 + -8) =
       *(uint *)(auStack_5c + (uint)bVar5 * -8 + 4);
  *(float *)(auStack_5c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + -4) =
       local_54[(uint)bVar5 * -2 + (uint)bVar5 * -2];
  if (this_ptr->is_fully_burned == 0) {
    core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
              (g_CGorePtr,&CStack_68,impact_point,100,this_ptr->blood_type);
    (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
    return;
  }
  this_ptr->fire_count = 0;
  (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
  return;
}
