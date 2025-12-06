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
  int iVar6;
  CKeyFramedModel *pCVar7;
  uint extraout_EAX;
  float fVar8;
  int extraout_EAX_00;
  CBoundingBox3D *pCVar9;
  CVector3f *pCVar10;
  uint extraout_EDX;
  BADSPACEBASE *in_ESP;
  float10 in_ST0;
  float10 fVar11;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  int in_stack_ffffff38;
  byte local_84 [56];
  CDemonActor *pCStack_4c;
  CDemonActor *pCStack_48;
  float fStack_38;
  float local_34;
  float local_30;
  float local_2c;
  CVector3f local_28;
  float local_1c;
  int local_18;
  int local_14;
  
  pCVar7 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  iVar6 = pCVar7->frame_count;
  in_stack_00000004[2].runtime_state =
       (int)(in_stack_00000004[2].orient_matrix.m[2].z + (float)in_stack_00000004[2].runtime_state);
  crt_math_c_floor_FUN_005feb90((double)in_ST0);
  fVar11 = (float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX));
  local_18 = (int)ROUND(fVar11);
  local_1c = (float)in_stack_00000004[2].runtime_state - (float)local_18;
  if (local_18 < 0) {
    local_18 = iVar6 - -local_18 % iVar6;
  }
  else {
    local_18 = local_18 % iVar6;
  }
  local_14 = local_18;
  in_stack_00000004[2].runtime_state = (int)((float)local_18 + local_1c);
  if ((float)iVar6 <= (float)in_stack_00000004[2].runtime_state) {
    in_stack_00000004[2].runtime_state = 0;
  }
  local_30 = in_stack_00000004[2].orient_matrix.m[1].z * in_stack_00000008;
  local_2c = in_stack_00000004[2].orient_matrix.m[2].x * in_stack_00000008;
  local_84._0_4_ = local_30 * 0.1047198f;
  local_28.x = in_stack_00000004[2].orient_matrix.m[2].y * in_stack_00000008;
  local_84._4_4_ = local_2c * 0.1047198f;
  local_84._8_4_ = local_28.x * 0.1047198f;
  (in_stack_00000004->orient).pitch = (in_stack_00000004->orient).pitch + (float)local_84._0_4_;
  (in_stack_00000004->orient).bank = (in_stack_00000004->orient).bank + (float)local_84._4_4_;
  (in_stack_00000004->orient).heading = (in_stack_00000004->orient).heading + (float)local_84._8_4_;
  fVar8 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((in_stack_00000004->orient).pitch);
  (in_stack_00000004->orient).pitch = fVar8;
  fVar8 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((in_stack_00000004->orient).heading);
  (in_stack_00000004->orient).heading = fVar8;
  fVar8 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((in_stack_00000004->orient).bank);
  cVar5 = *(char *)&in_stack_00000004[2].location.position.y;
  (in_stack_00000004->orient).bank = fVar8;
  if (cVar5 != '\0') {
    core_sound_cpp_CSound_isSoundPlaying_FUN_005b3b80
              (g_CSoundPtr,(uint)in_stack_00000004[2].orient_matrix.m[1].y);
    if (extraout_EAX_00 == 0) {
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      in_stack_00000008 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
      sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0
                ((double)in_stack_00000008,in_stack_ffffff38);
      fVar8 = (float)(*in_stack_00000004->vtable->playSound)
                               (in_stack_00000004,(char *)&in_stack_00000004[2].location.position.y)
      ;
      in_stack_00000004[2].orient_matrix.m[1].y = fVar8;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    }
  }
  if ((in_stack_00000004[2].field6_0x68 == 0) && (0.0 < in_stack_00000004[2].field12_0xe0.x)) {
    fStack_38 = (in_stack_00000004->location).position.x;
    local_34 = (in_stack_00000004->location).position.y;
    local_30 = (in_stack_00000004->location).position.z;
    core_box_cpp_CBox_process_FUN_0041e2f0
              ((CBox *)&in_stack_00000004[2].field12_0xe0.y,in_stack_00000008);
    pfVar1 = &in_stack_00000004[2].field13_0xec.y;
    if (&in_stack_00000004->orient != (COrientation *)pfVar1) {
      (in_stack_00000004->orient).pitch = *pfVar1;
      (in_stack_00000004->orient).bank = in_stack_00000004[2].field13_0xec.z;
      (in_stack_00000004->orient).heading = (float)in_stack_00000004[2].field14_0xf8;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
    pCVar9 = (*in_stack_00000004->vtable->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)(local_84 + 0x24));
    local_28.x = -(((pCVar9->min).x + (pCVar9->max).x) * 0.5f);
    local_28.y = -(((pCVar9->min).y + (pCVar9->max).y) * 0.5f);
    local_28.z = -(((pCVar9->min).z + (pCVar9->max).z) * 0.5f);
    pCVar10 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                        (in_stack_00000004,(CVector3f *)&stack0x00000014,&local_28);
    fVar8 = in_stack_00000004[2].field12_0xe0.z;
    fVar2 = pCVar10->y;
    fVar3 = in_stack_00000004[2].field13_0xec.x;
    fVar4 = pCVar10->z;
    (in_stack_00000004->location).position.x = in_stack_00000004[2].field12_0xe0.y + pCVar10->x;
    (in_stack_00000004->location).position.y = fVar8 + fVar2;
    (in_stack_00000004->location).position.z = fVar3 + fVar4;
    fVar8 = in_stack_00000004[2].previous_transform_state.position.x;
    fVar2 = in_stack_00000004[2].previous_transform_state.position.y;
    if ((float)3 <
        SQRT(fVar2 * fVar2 +
             (float)in_stack_00000004[2].field23_0x124 * (float)in_stack_00000004[2].field23_0x124 +
             fVar8 * fVar8)) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)local_84);
      local_84._8_4_ = (float)local_84._0_4_ * in_stack_00000004[2].field12_0xe0.x * 0.2f;
      pCStack_4c = in_stack_00000004;
      pCStack_48 = in_stack_00000004;
      core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_005742b0
                (g_CDemonSetPtr,(SDamageInfo *)&local_14,&(in_stack_00000004->location).position,
                 local_84 + 4);
      return;
    }
  }
  return;
}
