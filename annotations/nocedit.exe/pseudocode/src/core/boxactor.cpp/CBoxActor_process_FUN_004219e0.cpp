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
  CKeyFramedModel *pCVar4;
  int extraout_EAX;
  float fVar5;
  CBoundingBox3D *pCVar6;
  CVector3f *pCVar7;
  CDemonActor *this_ptr;
  double dVar8;
  int in_stack_00000004;
  float in_stack_00000008;
  int iVar9;
  byte auStack_d4 [68];
  float fStack_90;
  float fStack_8c;
  float local_88;
  CVector3f CStack_74;
  byte local_68 [52];
  CDemonActor *local_34;
  ulonglong local_2c;
  int iStack_24;
  int local_20;
  float local_1c;
  
  pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  iVar9 = pCVar4->frame_count;
  fVar5 = *(float *)(in_stack_00000004 + 0x30c) + *(float *)(in_stack_00000004 + 0x310);
  *(float *)(in_stack_00000004 + 0x310) = fVar5;
  local_2c = crt_math_c_floor_FUN_005feb90((double)fVar5);
  dVar8 = crt_math_c_round_FUN_005fe6b0(local_2c);
  iStack_24 = (int)ROUND(dVar8);
  fVar5 = (float)this_ptr[2].runtime_state - (float)iStack_24;
  local_2c = (double)CONCAT44(fVar5,(uint)local_2c);
  if (iStack_24 < 0) {
    iStack_24 = iVar9 - -iStack_24 % iVar9;
  }
  else {
    iStack_24 = iStack_24 % iVar9;
  }
  local_20 = iStack_24;
  this_ptr[2].runtime_state = (int)((float)iStack_24 + fVar5);
  if ((float)iVar9 <= (float)this_ptr[2].runtime_state) {
    this_ptr[2].runtime_state = 0;
  }
  local_68._44_4_ = this_ptr[2].orient_matrix.m[1].z * in_stack_00000008;
  local_68._48_4_ = this_ptr[2].orient_matrix.m[2].x * in_stack_00000008;
  fStack_90 = (float)local_68._44_4_ * 0.1047198f;
  local_34 = (CDemonActor *)(this_ptr[2].orient_matrix.m[2].y * in_stack_00000008);
  fStack_8c = (float)local_68._48_4_ * 0.1047198f;
  local_88 = (float)local_34 * 0.1047198f;
  (this_ptr->orient).pitch = (this_ptr->orient).pitch + fStack_90;
  (this_ptr->orient).bank = (this_ptr->orient).bank + fStack_8c;
  (this_ptr->orient).heading = (this_ptr->orient).heading + local_88;
  local_1c = (float)iVar9;
  local_1c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((this_ptr->orient).pitch);
  (this_ptr->orient).pitch = local_1c;
  local_1c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((this_ptr->orient).heading);
  (this_ptr->orient).heading = local_1c;
  local_1c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((this_ptr->orient).bank);
  cVar3 = *(char *)&this_ptr[2].location.position.y;
  (this_ptr->orient).bank = local_1c;
  if (cVar3 != '\0') {
    core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80
              (g_CSoundPtr,(uint)this_ptr[2].orient_matrix.m[1].y);
    if (extraout_EAX == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      iVar9 = 2;
      local_1c = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
      sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0((double)local_1c,iVar9);
      fVar5 = (float)(*this_ptr->vtable->playSound)
                               (this_ptr,(char *)&this_ptr[2].location.position.y);
      this_ptr[2].orient_matrix.m[1].y = fVar5;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
  }
  if ((this_ptr[2].field6_0x68 == 0) && (0.0 < this_ptr[2].field12_0xe0.x)) {
    CStack_74.y = (this_ptr->location).position.x;
    CStack_74.z = (this_ptr->location).position.y;
    local_68._0_4_ = (this_ptr->location).position.z;
    core_box_cpp_CBox_process_FUN_0041e2f0((CBox *)&this_ptr[2].field12_0xe0.y,in_stack_00000008);
    pfVar1 = &this_ptr[2].field13_0xec.y;
    if (&this_ptr->orient != (COrientation *)pfVar1) {
      (this_ptr->orient).pitch = *pfVar1;
      (this_ptr->orient).bank = this_ptr[2].field13_0xec.z;
      (this_ptr->orient).heading = (float)this_ptr[2].field14_0xf8;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(this_ptr);
    pCVar6 = (*this_ptr->vtable->getBoundingBox)(this_ptr,(CBoundingBox3D *)(auStack_d4 + 0x34));
    local_68._36_4_ = (pCVar6->min).x + (pCVar6->max).x;
    local_68._40_4_ = (pCVar6->min).y + (pCVar6->max).y;
    local_68._12_4_ = (float)local_68._36_4_ * 0.5f;
    local_68._44_4_ = (pCVar6->min).z + (pCVar6->max).z;
    local_68._16_4_ = (float)local_68._40_4_ * 0.5f;
    local_68._20_4_ = (float)local_68._44_4_ * 0.5f;
    CStack_74.x = -(float)local_68._12_4_;
    CStack_74.y = -(float)local_68._16_4_;
    CStack_74.z = -(float)local_68._20_4_;
    pCVar7 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (this_ptr,(CVector3f *)(local_68 + 0x30),&CStack_74);
    local_68._24_4_ = this_ptr[2].field12_0xe0.y + pCVar7->x;
    local_68._28_4_ = this_ptr[2].field12_0xe0.z + pCVar7->y;
    local_68._32_4_ = this_ptr[2].field13_0xec.x + pCVar7->z;
    (this_ptr->location).position.x = (float)local_68._24_4_;
    (this_ptr->location).position.y = (float)local_68._28_4_;
    (this_ptr->location).position.z = (float)local_68._32_4_;
    fVar5 = this_ptr[2].previous_transform_state.position.x;
    fVar2 = this_ptr[2].previous_transform_state.position.y;
    fVar5 = SQRT(fVar2 * fVar2 +
                 (float)this_ptr[2].field23_0x124 * (float)this_ptr[2].field23_0x124 + fVar5 * fVar5
                );
    if ((float)3 < fVar5) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_d4);
      auStack_d4._4_4_ = fVar5 * this_ptr[2].field12_0xe0.x * 0.2f;
      core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_005742b0
                (g_CDemonSetPtr,(SDamageInfo *)local_68,&(this_ptr->location).position,auStack_d4);
      return;
    }
  }
  return;
}
