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
  uint extraout_EDX;
  BADSPACEBASE *in_ESP;
  float10 in_ST0;
  double dVar10;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  int in_stack_ffffff30;
  byte auStack_8c [56];
  CDemonActor *pCStack_54;
  CDemonActor *pCStack_50;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float local_34;
  CVector3f local_30;
  float fStack_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  pCVar6 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  fVar7 = (float)pCVar6->frame_count;
  in_stack_00000004[2].runtime_state =
       (int)(in_stack_00000004[2].orient_matrix.m[2].z + (float)in_stack_00000004[2].runtime_state);
  crt_math_c_floor_FUN_005feb90((double)in_ST0);
  local_30.z = (float)pCVar6;
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,pCVar6));
  local_20 = (int)ROUND(dVar10);
  fStack_24 = (float)in_stack_00000004[2].runtime_state - (float)local_20;
  if (local_20 < 0) {
    local_20 = (int)fVar7 - -local_20 % (int)fVar7;
  }
  else {
    local_20 = local_20 % (int)fVar7;
  }
  local_1c = local_20;
  in_stack_00000004[2].runtime_state = (int)((float)local_20 + fStack_24);
  if ((float)(int)fVar7 <= (float)in_stack_00000004[2].runtime_state) {
    in_stack_00000004[2].runtime_state = 0;
  }
  fStack_38 = in_stack_00000004[2].orient_matrix.m[1].z * in_stack_00000008;
  local_34 = in_stack_00000004[2].orient_matrix.m[2].x * in_stack_00000008;
  auStack_8c._0_4_ = fStack_38 * 0.1047198f;
  local_30.x = in_stack_00000004[2].orient_matrix.m[2].y * in_stack_00000008;
  auStack_8c._4_4_ = local_34 * 0.1047198f;
  auStack_8c._8_4_ = local_30.x * 0.1047198f;
  (in_stack_00000004->orient).pitch = (in_stack_00000004->orient).pitch + (float)auStack_8c._0_4_;
  (in_stack_00000004->orient).bank = (in_stack_00000004->orient).bank + (float)auStack_8c._4_4_;
  (in_stack_00000004->orient).heading =
       (in_stack_00000004->orient).heading + (float)auStack_8c._8_4_;
  local_18 = fVar7;
  local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((in_stack_00000004->orient).pitch);
  (in_stack_00000004->orient).pitch = local_14;
  fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((in_stack_00000004->orient).heading);
  (in_stack_00000004->orient).heading = fVar7;
  fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((in_stack_00000004->orient).bank);
  cVar5 = *(char *)&in_stack_00000004[2].location.position.y;
  (in_stack_00000004->orient).bank = fVar7;
  if (cVar5 != '\0') {
    core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80
              (g_CSoundPtr,(uint)in_stack_00000004[2].orient_matrix.m[1].y);
    if (extraout_EAX == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      fVar7 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
      sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0((double)fVar7,in_stack_ffffff30);
      fVar7 = (float)(*in_stack_00000004->vtable->playSound)
                               (in_stack_00000004,(char *)&in_stack_00000004[2].location.position.y)
      ;
      in_stack_00000004[2].orient_matrix.m[1].y = fVar7;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
  }
  if ((in_stack_00000004[2].field6_0x68 == 0) && (0.0 < in_stack_00000004[2].field12_0xe0.x)) {
    fStack_40 = (in_stack_00000004->location).position.x;
    fStack_3c = (in_stack_00000004->location).position.y;
    fStack_38 = (in_stack_00000004->location).position.z;
    core_box_cpp_CBox_process_FUN_0041e2f0
              ((CBox *)&in_stack_00000004[2].field12_0xe0.y,in_stack_00000008);
    pfVar1 = &in_stack_00000004[2].field13_0xec.y;
    if (&in_stack_00000004->orient != (COrientation *)pfVar1) {
      (in_stack_00000004->orient).pitch = *pfVar1;
      (in_stack_00000004->orient).bank = in_stack_00000004[2].field13_0xec.z;
      (in_stack_00000004->orient).heading = (float)in_stack_00000004[2].field14_0xf8;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
    pCVar8 = (*in_stack_00000004->vtable->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)(auStack_8c + 0x24));
    local_18 = ((pCVar8->min).x + (pCVar8->max).x) * 0.5f;
    local_14 = ((pCVar8->min).y + (pCVar8->max).y) * 0.5f;
    local_30.x = -local_18;
    local_30.y = -local_14;
    local_30.z = -(((pCVar8->min).z + (pCVar8->max).z) * 0.5f);
    pCVar9 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (in_stack_00000004,(CVector3f *)&stack0x0000000c,&local_30);
    fVar7 = in_stack_00000004[2].field12_0xe0.z;
    fVar2 = pCVar9->y;
    fVar3 = in_stack_00000004[2].field13_0xec.x;
    fVar4 = pCVar9->z;
    (in_stack_00000004->location).position.x = in_stack_00000004[2].field12_0xe0.y + pCVar9->x;
    (in_stack_00000004->location).position.y = fVar7 + fVar2;
    (in_stack_00000004->location).position.z = fVar3 + fVar4;
    fVar7 = in_stack_00000004[2].previous_transform_state.position.x;
    fVar2 = in_stack_00000004[2].previous_transform_state.position.y;
    if ((float)3 <
        SQRT(fVar2 * fVar2 +
             (float)in_stack_00000004[2].field23_0x124 * (float)in_stack_00000004[2].field23_0x124 +
             fVar7 * fVar7)) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)auStack_8c);
      auStack_8c._8_4_ =
           (float)auStack_8c._0_4_ * in_stack_00000004[2].field12_0xe0.x * 0.2f;
      pCStack_54 = in_stack_00000004;
      pCStack_50 = in_stack_00000004;
      core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_005742b0
                (g_CDemonSetPtr,(SDamageInfo *)&local_1c,&(in_stack_00000004->location).position,
                 auStack_8c + 4);
      return;
    }
  }
  return;
}
