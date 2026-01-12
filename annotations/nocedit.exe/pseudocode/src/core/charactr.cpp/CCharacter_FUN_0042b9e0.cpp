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
  float fVar3;
  BADSPACEBASE *in_ESP;
  float fVar4;
  CVector3f *in_stack_00000008;
  CCharacter *in_stack_0000000c;
  float in_stack_ffffff58;
  byte auStack_a0 [32];
  CBoundingBox3D CStack_80;
  CVector3f CStack_5c;
  CVector3f aCStack_50 [2];
  byte local_38 [12];
  float fStack_2c;
  float fStack_28;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  
  sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(this_ptr->cloth_data + 0x8d3c));
  if ((this_ptr->model).model_name[0] != '\0') {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(&this_ptr->model);
    local_20 = pCVar1->num_parts;
    if (1 < local_20) {
      if ((float)in_stack_0000000c < 0.0) {
        in_stack_0000000c = (CCharacter *)0x41a00000;
      }
      fVar4 = 0.0;
      if (0 < local_20) {
        do {
          if ((in_stack_00000008 != (CVector3f *)0x0) && (0.0 < (float)in_stack_0000000c)) {
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                      ((CVector3f *)local_38,in_stack_00000008);
            local_1c = -(float)in_stack_0000000c;
            fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(local_1c,(float)in_stack_0000000c);
            local_38._8_4_ = fVar3 + (float)local_38._8_4_;
            fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(local_18,in_stack_ffffff58);
            local_38._8_4_ = fVar3 + (float)local_38._8_4_;
            core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                      ((CMatrix3x3f *)auStack_a0,(CVector3f *)(local_38 + 8));
            CStack_5c.z = SQRT(in_stack_00000008->z * in_stack_00000008->z +
                               in_stack_00000008->x * in_stack_00000008->x +
                               in_stack_00000008->y * in_stack_00000008->y);
            CStack_5c.x = 0.0;
            CStack_5c.y = 0.0;
            core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                      ((CMatrix3x3f *)(auStack_a0 + 4),(CVector3f *)local_38,&CStack_5c);
          }
          in_stack_0000000c = this_ptr;
          in_stack_ffffff58 = fVar4;
          core_charactr_cpp_CCharacter_FUN_0042bcc0(this_ptr);
          fVar4 = (float)((int)fVar4 + 1);
        } while ((int)fVar4 < local_20);
      }
    }
  }
  pCVar2 = (*((this_ptr->base_actor).vtable)->getBoundingBox)(&this_ptr->base_actor,&CStack_80);
  fStack_2c = (pCVar2->min).x + (pCVar2->max).x;
  fStack_28 = (pCVar2->min).y + (pCVar2->max).y;
  aCStack_50[0].x = fStack_2c * 0.5f;
  aCStack_50[0].y = fStack_28 * 0.5f;
  local_24 = (pCVar2->min).z + (pCVar2->max).z;
  aCStack_50[0].z = local_24 * 0.5f;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (&this_ptr->base_actor,&CStack_5c,aCStack_50);
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
