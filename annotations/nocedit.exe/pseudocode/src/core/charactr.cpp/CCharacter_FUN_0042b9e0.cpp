// Name: core_charactr.cpp_CCharacter_FUN_0042b9e0
// Address: 0042b9e0
// Address Range: [[0042b9e0, 0042bb48] [0042bbf4, 0042bc1f]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042b9e0(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042b9e0(CCharacter *this_ptr)

{
  CDeformableModel *pCVar1;
  CBoundingBox3D *pCVar2;
  BADSPACEBASE *in_ESP;
  float fVar3;
  CVector3f *in_stack_00000008;
  CCharacter *in_stack_ffffff44;
  float max_value;
  float fStack_a8;
  byte auStack_7c [20];
  float local_68;
  float local_64;
  byte local_48 [8];
  byte auStack_40 [12];
  CVector3f CStack_34;
  float fStack_28;
  float local_20;
  float local_1c;
  float fStack_14;
  
  max_value = 6.127877e-39;
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->cloth_data + 0x8d3c));
  if ((this_ptr->model).model_name[0] != '\0') {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(&this_ptr->model);
    local_1c = (float)pCVar1->num_parts;
    if (1 < (int)local_1c) {
      if (fStack_a8 < 0.0) {
        fStack_a8 = 20.0;
      }
      fVar3 = 0.0;
      if (0 < (int)local_1c) {
        do {
          if ((in_stack_00000008 != (CVector3f *)0x0) && (0.0 < fStack_a8)) {
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                      (&CStack_34,in_stack_00000008);
            CStack_34.z = -(float)in_stack_ffffff44;
            local_20 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                                 (CStack_34.z,(float)in_stack_ffffff44);
            auStack_40._0_4_ = local_20 + (float)auStack_40._0_4_;
            local_1c = core_actor_cpp_getRandomFloat_FUN_0040cc10(fStack_28,max_value);
            auStack_40._0_4_ = local_1c + (float)auStack_40._0_4_;
            core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                      ((CMatrix3x3f *)&stack0xffffff50,(CVector3f *)auStack_40);
            local_64 = SQRT(in_stack_00000008->z * in_stack_00000008->z +
                            in_stack_00000008->x * in_stack_00000008->x +
                            in_stack_00000008->y * in_stack_00000008->y);
            auStack_7c._16_4_ = 0.0;
            local_68 = 0.0;
            local_1c = local_64;
            core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                      ((CMatrix3x3f *)&stack0xffffff54,(CVector3f *)local_48,
                       (CVector3f *)(auStack_7c + 0x10));
          }
          in_stack_ffffff44 = this_ptr;
          max_value = fVar3;
          core_charactr_cpp_CCharacter_FUN_0042bcc0(this_ptr);
          fVar3 = (float)((int)fVar3 + 1);
        } while ((int)fVar3 < (int)local_1c);
      }
    }
  }
  pCVar2 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                     (&this_ptr->base_actor,(CBoundingBox3D *)auStack_7c);
  fStack_14 = (pCVar2->min).x + (pCVar2->max).x;
  auStack_40._8_4_ = fStack_14 * 0.5f;
  CStack_34.x = ((pCVar2->min).y + (pCVar2->max).y) * 0.5f;
  CStack_34.y = ((pCVar2->min).z + (pCVar2->max).z) * 0.5f;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (&this_ptr->base_actor,(CVector3f *)(local_48 + 4),(CVector3f *)(auStack_40 + 8));
  if (*(int *)(this_ptr->cloth_data + 0x8d40) == 0) {
    core_gore_cpp_FUN_004edbb0();
    (this_ptr->base_actor).was_created = 2;
    return;
  }
  this_ptr->cloth_data[0x478] = '\0';
  this_ptr->cloth_data[0x479] = '\0';
  this_ptr->cloth_data[0x47a] = '\0';
  this_ptr->cloth_data[0x47b] = '\0';
  (this_ptr->base_actor).was_created = 2;
  return;
}
