// Name: core_boxactor.cpp_CBoxActor_process_FUN_004219e0
// Address: 004219e0
// Address Range: [[004219e0, 00421c06] [00421c4a, 00421dfd]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_CBoxActor_process_FUN_004219e0()

#include "nocturne.h"

/* Signature: byte actors_other_boxactor.cpp_FUN_004219e0(uint param_1, uint
   param_2) */

void core_boxactor_cpp_CBoxActor_process_FUN_004219e0(void)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  CKeyFramedModel *pCVar5;
  float fVar6;
  int extraout_EAX;
  CBoundingBox3D *pCVar7;
  CVector3f *pCVar8;
  CDemonActor *this_ptr;
  BADSPACEBASE *in_ESP;
  double dVar9;
  int in_stack_00000004;
  float in_stack_00000008;
  int in_stack_ffffff24;
  CBoundingBox3D local_a0;
  float local_88;
  float local_84;
  CVector3f CStack_7c;
  byte local_70 [56];
  CDemonActor *pCStack_38;
  float local_34;
  float local_30;
  double local_2c;
  float fStack_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  pCVar5 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  iVar4 = pCVar5->frame_count;
  fVar6 = *(float *)(in_stack_00000004 + 0x30c) + *(float *)(in_stack_00000004 + 0x310);
  *(float *)(in_stack_00000004 + 0x310) = fVar6;
  local_2c = crt_math_c_floor_FUN_005feb90((double)fVar6);
  dVar9 = crt_math_c_round_FUN_005fe6b0(local_2c);
  local_20 = (int)ROUND(dVar9);
  fStack_24 = (float)this_ptr[2].runtime_state - (float)local_20;
  if (local_20 < 0) {
    local_20 = iVar4 - -local_20 % iVar4;
  }
  else {
    local_20 = local_20 % iVar4;
  }
  local_1c = local_20;
  this_ptr[2].runtime_state = (int)((float)local_20 + fStack_24);
  if ((float)iVar4 <= (float)this_ptr[2].runtime_state) {
    this_ptr[2].runtime_state = 0;
  }
  pCStack_38 = (CDemonActor *)(this_ptr[2].orient_matrix.m[1].z * in_stack_00000008);
  local_34 = this_ptr[2].orient_matrix.m[2].x * in_stack_00000008;
  local_a0.max.z = (float)pCStack_38 * 0.1047198f;
  local_30 = this_ptr[2].orient_matrix.m[2].y * in_stack_00000008;
  local_88 = local_34 * 0.1047198f;
  local_84 = local_30 * 0.1047198f;
  (this_ptr->orient).pitch = (this_ptr->orient).pitch + local_a0.max.z;
  (this_ptr->orient).bank = (this_ptr->orient).bank + local_88;
  (this_ptr->orient).heading = (this_ptr->orient).heading + local_84;
  local_18 = iVar4;
  local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((this_ptr->orient).pitch);
  (this_ptr->orient).pitch = local_14;
  fVar6 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((this_ptr->orient).heading);
  (this_ptr->orient).heading = fVar6;
  fVar6 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((this_ptr->orient).bank);
  cVar3 = *(char *)&this_ptr[2].location.position.y;
  (this_ptr->orient).bank = fVar6;
  if (cVar3 != '\0') {
    core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80
              (g_CSoundPtr,(uint)this_ptr[2].orient_matrix.m[1].y);
    if (extraout_EAX == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
      sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0((double)fVar6,in_stack_ffffff24);
      fVar6 = (float)(*this_ptr->vtable->playSound)
                               (this_ptr,(char *)&this_ptr[2].location.position.y);
      this_ptr[2].orient_matrix.m[1].y = fVar6;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
  }
  if ((this_ptr[2].field6_0x68 == 0) && (0.0 < this_ptr[2].field12_0xe0.x)) {
    local_70._36_4_ = (this_ptr->location).position.x;
    local_70._40_4_ = (this_ptr->location).position.y;
    local_70._44_4_ = (this_ptr->location).position.z;
    core_box_cpp_CBox_process_FUN_0041e2f0((CBox *)&this_ptr[2].field12_0xe0.y,in_stack_00000008);
    pfVar1 = &this_ptr[2].field13_0xec.y;
    if (&this_ptr->orient != (COrientation *)pfVar1) {
      (this_ptr->orient).pitch = *pfVar1;
      (this_ptr->orient).bank = this_ptr[2].field13_0xec.z;
      (this_ptr->orient).heading = (float)this_ptr[2].field14_0xf8;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(this_ptr);
    pCVar7 = (*this_ptr->vtable->getBoundingBox)(this_ptr,&local_a0);
    local_70._36_4_ = (pCVar7->min).x + (pCVar7->max).x;
    local_70._40_4_ = (pCVar7->min).y + (pCVar7->max).y;
    local_70._12_4_ = (float)local_70._36_4_ * 0.5f;
    local_70._44_4_ = (pCVar7->min).z + (pCVar7->max).z;
    local_70._16_4_ = (float)local_70._40_4_ * 0.5f;
    local_70._20_4_ = (float)local_70._44_4_ * 0.5f;
    CStack_7c.x = -(float)local_70._12_4_;
    CStack_7c.y = -(float)local_70._16_4_;
    CStack_7c.z = -(float)local_70._20_4_;
    pCVar8 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (this_ptr,(CVector3f *)(local_70 + 0x30),&CStack_7c);
    local_70._24_4_ = this_ptr[2].field12_0xe0.y + pCVar8->x;
    local_70._28_4_ = this_ptr[2].field12_0xe0.z + pCVar8->y;
    local_70._32_4_ = this_ptr[2].field13_0xec.x + pCVar8->z;
    (this_ptr->location).position.x = (float)local_70._24_4_;
    (this_ptr->location).position.y = (float)local_70._28_4_;
    (this_ptr->location).position.z = (float)local_70._32_4_;
    fVar6 = this_ptr[2].previous_transform_state.position.x;
    fVar2 = this_ptr[2].previous_transform_state.position.y;
    if ((float)3 <
        SQRT(fVar2 * fVar2 +
             (float)this_ptr[2].field23_0x124 * (float)this_ptr[2].field23_0x124 + fVar6 * fVar6)) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffff24);
      core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_005742b0
                (g_CDemonSetPtr,(SDamageInfo *)local_70,&(this_ptr->location).position,
                 &stack0xffffff24);
      return;
    }
  }
  return;
}
