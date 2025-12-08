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
  float fVar3;
  float fVar4;
  char cVar5;
  CKeyFramedModel *pCVar6;
  float fVar7;
  int extraout_EAX;
  CBoundingBox3D *pCVar8;
  CVector3f *pCVar9;
  CDemonActor *this_ptr;
  BADSPACEBASE *in_ESP;
  double dVar10;
  int in_stack_00000004;
  float in_stack_00000008;
  int in_stack_ffffff30;
  byte auStack_8c [76];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float local_34;
  byte local_30 [12];
  float fStack_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  pCVar6 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  fVar7 = (float)pCVar6->frame_count;
  fVar2 = *(float *)(in_stack_00000004 + 0x30c) + *(float *)(in_stack_00000004 + 0x310);
  *(float *)(in_stack_00000004 + 0x310) = fVar2;
  join_0x00000008_0x00000000_ = crt_math_c_floor_FUN_005feb90((double)fVar2);
  dVar10 = crt_math_c_round_FUN_005fe6b0(join_0x00000008_0x00000000_);
  local_20 = (int)ROUND(dVar10);
  fVar2 = (float)this_ptr[2].runtime_state - (float)local_20;
  stack0xffffffd8 = (double)CONCAT44 /* combine 2-byte values */(fVar2,local_30._8_4_);
  if (local_20 < 0) {
    local_20 = (int)fVar7 - -local_20 % (int)fVar7;
  }
  else {
    local_20 = local_20 % (int)fVar7;
  }
  local_1c = local_20;
  this_ptr[2].runtime_state = (int)((float)local_20 + fVar2);
  if ((float)(int)fVar7 <= (float)this_ptr[2].runtime_state) {
    this_ptr[2].runtime_state = 0;
  }
  fStack_38 = this_ptr[2].orient_matrix.m[1].z * in_stack_00000008;
  local_34 = this_ptr[2].orient_matrix.m[2].x * in_stack_00000008;
  auStack_8c._0_4_ = fStack_38 * 0.1047198f;
  local_30._0_4_ = this_ptr[2].orient_matrix.m[2].y * in_stack_00000008;
  auStack_8c._4_4_ = local_34 * 0.1047198f;
  auStack_8c._8_4_ = (float)local_30._0_4_ * 0.1047198f;
  (this_ptr->orient).pitch = (this_ptr->orient).pitch + (float)auStack_8c._0_4_;
  (this_ptr->orient).bank = (this_ptr->orient).bank + (float)auStack_8c._4_4_;
  (this_ptr->orient).heading = (this_ptr->orient).heading + (float)auStack_8c._8_4_;
  local_18 = fVar7;
  local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((this_ptr->orient).pitch);
  (this_ptr->orient).pitch = local_14;
  fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((this_ptr->orient).heading);
  (this_ptr->orient).heading = fVar7;
  fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((this_ptr->orient).bank);
  cVar5 = *(char *)&this_ptr[2].location.position.y;
  (this_ptr->orient).bank = fVar7;
  if (cVar5 != '\0') {
    core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80
              (g_CSoundPtr,(uint)this_ptr[2].orient_matrix.m[1].y);
    if (extraout_EAX == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      fVar7 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
      sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0((double)fVar7,in_stack_ffffff30);
      fVar7 = (float)(*this_ptr->vtable->playSound)
                               (this_ptr,(char *)&this_ptr[2].location.position.y);
      this_ptr[2].orient_matrix.m[1].y = fVar7;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
  }
  if ((this_ptr[2].field6_0x68 == 0) && (0.0 < this_ptr[2].field12_0xe0.x)) {
    fStack_40 = (this_ptr->location).position.x;
    fStack_3c = (this_ptr->location).position.y;
    fStack_38 = (this_ptr->location).position.z;
    core_box_cpp_CBox_process_FUN_0041e2f0((CBox *)&this_ptr[2].field12_0xe0.y,in_stack_00000008);
    pfVar1 = &this_ptr[2].field13_0xec.y;
    if (&this_ptr->orient != (COrientation *)pfVar1) {
      (this_ptr->orient).pitch = *pfVar1;
      (this_ptr->orient).bank = this_ptr[2].field13_0xec.z;
      (this_ptr->orient).heading = (float)this_ptr[2].field14_0xf8;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(this_ptr);
    pCVar8 = (*this_ptr->vtable->getBoundingBox)(this_ptr,(CBoundingBox3D *)(auStack_8c + 0x24));
    local_18 = ((pCVar8->min).x + (pCVar8->max).x) * 0.5f;
    local_14 = ((pCVar8->min).y + (pCVar8->max).y) * 0.5f;
    local_30._0_4_ = -local_18;
    local_30._4_4_ = -local_14;
    stack0xffffffd8 =
         (double)CONCAT44 /* combine 2-byte values */(fStack_24,-(((pCVar8->min).z + (pCVar8->max).z) * 0.5f));
    pCVar9 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (this_ptr,(CVector3f *)&stack0x0000000c,(CVector3f *)local_30);
    fVar7 = this_ptr[2].field12_0xe0.z;
    fVar2 = pCVar9->y;
    fVar3 = this_ptr[2].field13_0xec.x;
    fVar4 = pCVar9->z;
    (this_ptr->location).position.x = this_ptr[2].field12_0xe0.y + pCVar9->x;
    (this_ptr->location).position.y = fVar7 + fVar2;
    (this_ptr->location).position.z = fVar3 + fVar4;
    fVar7 = this_ptr[2].previous_transform_state.position.x;
    fVar2 = this_ptr[2].previous_transform_state.position.y;
    if ((float)3 <
        SQRT(fVar2 * fVar2 +
             (float)this_ptr[2].field23_0x124 * (float)this_ptr[2].field23_0x124 + fVar7 * fVar7)) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_8c);
      auStack_8c._8_4_ = (float)auStack_8c._0_4_ * this_ptr[2].field12_0xe0.x * 0.2f;
      core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_005742b0
                (g_CDemonSetPtr,(SDamageInfo *)&local_1c,&(this_ptr->location).position,
                 auStack_8c + 4);
      return;
    }
  }
  return;
}
