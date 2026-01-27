// Name: core_emitter.cpp_FUN_004a8070
// Address: 004a8070
// Address Range: [[004a8070, 004a8858]]
// Convention: unknown
// Signature: undefined core_emitter.cpp_FUN_004a8070()

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* Signature: byte actors_other_emitter.cpp_FUN_004a8070(uint param_1, uint
   param_2) */

void core_emitter_cpp_FUN_004a8070(void)

{
  CHero *this_ptr;
  CDemonSet *pCVar1;
  int iVar2;
  float *pfVar3;
  CVector3f *pCVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  int in_stack_00000004;
  float in_stack_00000008;
  float fVar11;
  CVector3f local_d0;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_ac;
  float local_a8;
  float local_a4;
  CVector3f local_a0;
  float local_94;
  float local_90;
  float local_8c;
  CVector3f CStack_88;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  CVector3f local_70;
  CVector3f CStack_64;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  CColor3f local_4c [2];
  float local_2c;
  float local_28;
  float local_14;
  
  iVar6 = *(int *)(in_stack_00000004 + 0x48c);
  iVar2 = crt_string_c_strcmp_FUN_005fef20((char *)(in_stack_00000004 + 0x16c),"none");
  if ((iVar2 != 0) &&
     (iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,(char *)(in_stack_00000004 + 0x16c)),
     pCVar1 = g_CDemonSetPtr, iVar2 != 0)) {
    iVar6 = 1;
    *(uint *)(in_stack_00000004 + 0x168) = 1;
    *(uint *)(in_stack_00000004 + 0x448) = *(uint *)(in_stack_00000004 + 0x234);
    core_set_cpp_CDemonSet_FUN_0056ade0(pCVar1);
  }
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,(char *)(in_stack_00000004 + 0x1d0));
  if (iVar2 != 0) {
    *(uint *)(in_stack_00000004 + 0x168) = 0;
  }
  if (*(int *)(in_stack_00000004 + 0x158) == 10) {
    iVar6 = 0;
    iVar2 = sound_sndmain_cpp_isWithinListenerRadius_FUN_005aa290
                      ((double)*(float *)(in_stack_00000004 + 0x20),
                       (double)*(float *)(in_stack_00000004 + 0x24),
                       (double)*(float *)(in_stack_00000004 + 0x28),50.0);
    if (((iVar2 == 0) || (iVar6 = 1, g_CGamePtr->foul_language_flag != 0)) ||
       (iVar2 = crt_string_c_strnicmp_FUN_005ff070
                          ((char *)(in_stack_00000004 + 0x3d4),"mob",3), iVar2 != 0)) {
      if (iVar6 != 0) goto LAB_004a811d;
    }
    else {
      iVar6 = 0;
    }
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004 + 0x438));
  }
LAB_004a811d:
  if (*(int *)(in_stack_00000004 + 0x168) == 0) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004 + 0x438));
    goto LAB_004a8221;
  }
  fVar11 = *(float *)(in_stack_00000004 + 0x440) + in_stack_00000008;
  *(float *)(in_stack_00000004 + 0x440) = fVar11;
  if ((fVar11 < *(float *)(in_stack_00000004 + 0x444)) ||
     (*(float *)(in_stack_00000004 + 0x440) =
           *(float *)(in_stack_00000004 + 0x440) - *(float *)(in_stack_00000004 + 0x444), iVar6 == 0
     )) goto LAB_004a8221;
  switch(*(uint *)(in_stack_00000004 + 0x158)) {
  case 0:
    core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310
              ((CDemonGlobe *)(in_stack_00000004 + 0x44c),(CColor3f *)(in_stack_00000004 + 0x20));
    iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,0x7fff);
    *(int *)(in_stack_00000004 + 0x488) = iVar6;
    iVar6 = (iVar6 + (iVar6 >> 0x1f) * -0x100) - (uint)((iVar6 >> 0x1f) << 7 < 0);
    iVar2 = iVar6 >> 0x1f;
    fVar11 = 10.0;
    *(char *)(in_stack_00000004 + 0x468) =
         (char)((int)(((iVar6 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
    goto LAB_004a81e2;
  case 1:
    iVar6 = 0;
    do {
      if (&local_70 != (CVector3f *)(in_stack_00000004 + 0x20)) {
        local_70.x = ((CVector3f *)(in_stack_00000004 + 0x20))->x;
        local_70.y = *(float *)(in_stack_00000004 + 0x24);
        local_70.z = *(float *)(in_stack_00000004 + 0x28);
      }
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.5,0.5);
      local_70.x = local_14 * *(float *)(in_stack_00000004 + 0x15c) + local_70.x;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.5,0.5);
      local_70.z = local_14 * *(float *)(in_stack_00000004 + 0x164) + local_70.z;
      local_d0.x = 0.0;
      local_d0.y = *(float *)(in_stack_00000004 + 0x160);
      iVar6 = iVar6 + 1;
      local_d0.z = 0.0;
      core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                (g_CFireEffectPtr,&local_70,1.0,&local_d0,0xffff);
    } while (iVar6 < 4);
    break;
  case 4:
    local_28 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.7853982,1.5707964);
    local_14 = local_28;
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
    local_2c = *(float *)(in_stack_00000004 + 0x3c4);
    fVar7 = (float10)fcos((float10)local_28);
    fVar8 = (float10)fcos((float10)local_14);
    fVar9 = (float10)fsin((float10)local_28);
    fVar10 = (float10)fsin((float10)local_14);
    local_90 = (float)((float10)local_2c * fVar9);
    local_94 = (float)((float10)local_2c * fVar8 * fVar7);
    local_8c = (float)(fVar10 * (float10)local_2c * fVar7);
    core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
              ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x248));
    core_fire_cpp_CFireEffect_FUN_004c7e60(g_CFireEffectPtr);
    break;
  case 5:
    core_emitter_cpp_FUN_004a8d20();
    core_fire_cpp_CFireEffect_FUN_004c8ef0(g_CFireEffectPtr);
    this_ptr = g_HeroActors[g_LocalHeroIndex];
    local_ac = (this_ptr->base).base.location.position.x -
               ((CVector3f *)(in_stack_00000004 + 0x20))->x;
    local_a8 = (this_ptr->base).base.location.position.y - *(float *)(in_stack_00000004 + 0x24);
    local_a4 = (this_ptr->base).base.location.position.z - *(float *)(in_stack_00000004 + 0x28);
    if (SQRT(local_a4 * local_a4 + local_ac * local_ac + local_a8 * local_a8) <
        (float)2.5) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                ((CDemonActor *)this_ptr,&local_a0,(CVector3f *)(in_stack_00000004 + 0x20));
      core_charactr_cpp_CCharacter_FUN_0042b5b0(&g_HeroActors[g_LocalHeroIndex]->base);
    }
    break;
  case 6:
    core_fire_cpp_CFireEffect_FUN_004c9240(g_CFireEffectPtr);
    core_fire_cpp_CFireEffect_FUN_004c9240(g_CFireEffectPtr);
    core_fire_cpp_CFireEffect_FUN_004c9240(g_CFireEffectPtr);
    core_fire_cpp_CFireEffect_FUN_004c9240(g_CFireEffectPtr);
    break;
  case 7:
    core_fire_cpp_CFireEffect_FUN_004c8f50(g_CFireEffectPtr);
    if (local_4c != (CColor3f *)(in_stack_00000004 + 0x20)) {
      local_4c[0].r = ((CColor3f *)(in_stack_00000004 + 0x20))->r;
      local_4c[0].g = *(float *)(in_stack_00000004 + 0x24);
      local_4c[0].b = *(float *)(in_stack_00000004 + 0x28);
    }
    local_4c[0].g = *(float *)(in_stack_00000004 + 0x160) * (float)0.5 + local_4c[0].g;
    core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310
              ((CDemonGlobe *)(in_stack_00000004 + 0x44c),local_4c);
    iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,0x7fff);
    *(int *)(in_stack_00000004 + 0x488) = iVar6;
    iVar6 = (iVar6 + (iVar6 >> 0x1f) * -0x100) - (uint)((iVar6 >> 0x1f) << 7 < 0);
    iVar2 = iVar6 >> 0x1f;
    *(char *)(in_stack_00000004 + 0x468) =
         (char)((int)(((iVar6 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
    fVar11 = *(float *)(in_stack_00000004 + 0x160);
LAB_004a81e2:
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
              ((CDemonGlobe *)(in_stack_00000004 + 0x44c),fVar11);
    pCVar1 = g_CDemonSetPtr;
    *(uint *)(in_stack_00000004 + 0x46c) = 0;
    core_set_cpp_CDemonSet_FUN_0056d110(pCVar1);
    break;
  case 8:
    core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    break;
  case 9:
    if (*(int *)(in_stack_00000004 + 0x3d0) != 0) {
      pfVar3 = (float *)(**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x3d0) + 0x154) + 0x14))
                                  ();
      fStack_c4 = *pfVar3 + pfVar3[3];
      fStack_c0 = pfVar3[1] + pfVar3[4];
      CStack_88.x = fStack_c4 * 0.5f;
      fStack_bc = pfVar3[2] + pfVar3[5];
      CStack_88.y = fStack_c0 * 0.5f;
      CStack_88.z = fStack_bc * 0.5f;
      pCVar4 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                         (*(CDemonActor **)(in_stack_00000004 + 0x3d0),&CStack_64,&CStack_88);
      iVar6 = *(int *)(in_stack_00000004 + 0x3d0);
      fStack_7c = *(float *)(iVar6 + 0x20) + pCVar4->x;
      fStack_78 = *(float *)(iVar6 + 0x24) + pCVar4->y;
      fStack_74 = *(float *)(iVar6 + 0x28) + pCVar4->z;
      if (&fStack_58 != &fStack_7c) {
        fStack_58 = fStack_7c;
        fStack_54 = fStack_78;
        fStack_50 = fStack_74;
      }
      core_fire_cpp_CFireEffect_FUN_004c8fd0(g_CFireEffectPtr);
    }
  }
  if (((*(char *)(in_stack_00000004 + 0x3d4) != '\0') &&
      (iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(in_stack_00000004 + 0x438)),
      iVar6 == 0)) &&
     ((*(int *)(in_stack_00000004 + 0x43c) != 1 || (*(int *)(in_stack_00000004 + 0x490) == 0)))) {
    uVar5 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
    *(uint *)(in_stack_00000004 + 0x438) = uVar5;
  }
LAB_004a8221:
  *(uint *)(in_stack_00000004 + 0x490) = *(uint *)(in_stack_00000004 + 0x168);
  if (*(int *)(in_stack_00000004 + 0x3c8) == 0) {
    if ((0.0 < *(float *)(in_stack_00000004 + 0x234)) &&
       (in_stack_00000008 = *(float *)(in_stack_00000004 + 0x448) - in_stack_00000008,
       *(float *)(in_stack_00000004 + 0x448) = in_stack_00000008, in_stack_00000008 <= 0.0)) {
      *(uint *)(in_stack_00000004 + 0x448) = 0;
      *(uint *)(in_stack_00000004 + 0x168) = 0;
      return;
    }
  }
  else if (*(int *)(in_stack_00000004 + 0x168) == 0) {
    in_stack_00000008 = *(float *)(in_stack_00000004 + 0x448) - in_stack_00000008;
    *(float *)(in_stack_00000004 + 0x448) = in_stack_00000008;
    if (in_stack_00000008 <= 0.0) {
      *(uint *)(in_stack_00000004 + 0x168) = 1;
      *(uint *)(in_stack_00000004 + 0x448) = *(uint *)(in_stack_00000004 + 0x234);
      return;
    }
  }
  else {
    in_stack_00000008 = *(float *)(in_stack_00000004 + 0x448) - in_stack_00000008;
    *(float *)(in_stack_00000004 + 0x448) = in_stack_00000008;
    if (in_stack_00000008 <= 0.0) {
      *(uint *)(in_stack_00000004 + 0x168) = 0;
      *(uint *)(in_stack_00000004 + 0x448) = *(uint *)(in_stack_00000004 + 0x3cc);
      return;
    }
  }
  return;
}
