// Name: core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_00429730
// Address: 00429730
// Address Range: [[00429730, 00429e52]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_00429730(CCharacter *this_ptr,float delta_time,int disable_search)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_00429730(CCharacter *this_ptr,float delta_time,int disable_search)

{
  int iVar1;
  int iVar2;
  CDemonActor *pCVar3;
  CCharacter *pCVar4;
  float *pfVar5;
  CVector3f *pCVar6;
  float fVar7;
  CLocation *pCVar8;
  float fStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  CVector3f CStack_ec;
  byte auStack_e0 [12];
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  CVector3f CStack_c8;
  byte auStack_bc [12];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  CVector3f CStack_a4;
  CVector3f CStack_98;
  CVector3f CStack_8c;
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  CVector3f CStack_38;
  float fStack_24;
  CCharacter *pCStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  iVar1 = (*(((this_ptr->base).vtable._uc)->_uc).releaseFromGrab)(this_ptr);
  if (iVar1 != 0) {
    disable_search = 1;
  }
  pCStack_20 = (CCharacter *)0x0;
  pCVar4 = pCStack_20;
  if ((disable_search == 0) &&
     (pCVar4 = this_ptr->look_at_target, this_ptr->look_at_target == (CCharacter *)0x0)) {
    if (this_ptr->look_at_search_timer <= 0.0) {
      CStack_a4.x = 0.0;
      CStack_a4.z = 0.0;
      CStack_a4.y = 5.5;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                (&this_ptr->base,&CStack_5c,&CStack_a4);
      iStack_18 = 0;
      for (iVar1 = 0; iVar1 < (int)0x01E57284->actors[0x6d6]; iVar1 = iVar1 + 1) {
        pCVar4 = *(CCharacter **)((int)0x01E57284->actors + iStack_18 + 0x1b5c);
        if ((pCVar4 != this_ptr) &&
           (iVar2 = (*((pCVar4->base).vtable._ub)->shouldIgnoreForTargeting)(&pCVar4->base),
           iVar2 == 0)) {
          iStack_1c = (*(((pCVar4->base).vtable._uc)->_uc).releaseFromGrab)(pCVar4);
          if ((iStack_1c == 0) || ((pCVar4->model).model_name[0] == '\0')) {
            pCVar8 = &(pCVar4->base).location;
            if ((CLocation *)&CStack_ec != pCVar8) {
              CStack_ec.x = (pCVar8->position).x;
              CStack_ec.y = (pCVar4->base).location.position.y;
              CStack_ec.z = (pCVar4->base).location.position.z;
            }
            CStack_ec.y = CStack_ec.y + 5.3619766690650802e-315._0_4_;
          }
          else {
            pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                               (&pCVar4->model,&CStack_80,0);
            pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                               (&pCVar4->base,&CStack_68,pCVar6);
            if (&CStack_ec != pCVar6) {
              CStack_ec.x = pCVar6->x;
              CStack_ec.y = pCVar6->y;
              CStack_ec.z = pCVar6->z;
            }
          }
          fStack_b0 = CStack_ec.x - CStack_5c.x;
          fStack_ac = CStack_ec.y - CStack_5c.y;
          fStack_a8 = CStack_ec.z - CStack_5c.z;
          core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                    (this_ptr,&fStack_50,&fStack_b0);
          if ((((0.0 <= fStack_48) &&
               (fVar7 = fStack_48 * fStack_48 + fStack_50 * fStack_50 + fStack_4c * fStack_4c,
               fStack_24 = fVar7, (int)fVar7 < 0x44610001)) &&
              (core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                         (&fStack_44,&fStack_50), ABS(fStack_40) <= (float)1.3962634015555599)) &&
             (ABS(fStack_44) <= (float)0.78539816337500001)) {
            fStack_100 = 10.0;
            pCVar3 = core_actor_cpp_castToClassHash_FUN_0040d890
                               (&pCVar4->base,g_CEnemyActorType_01bcdebc.name_hash);
            if (((pCVar3 != (CDemonActor *)0x0) && (iStack_1c == 0)) &&
               (fStack_100 = 30.0,
               this_ptr == (CCharacter *)pCVar3[0x8f].platform_orientation_delta.z)) {
              fStack_100 = 40.0;
            }
            if ((fStack_100 < (float)10) &&
               (iVar2 = core_actor_cpp_isOfClass_FUN_0040d7e0(&pCVar4->base,"CHero"),
               iVar2 != 0)) {
              fStack_100 = 15.0;
            }
            if ((fStack_100 < (float)15) && (0 < iStack_1c)) {
              fStack_100 = 15.0;
            }
            fStack_100 = ((float)20 / (SQRT(fVar7) + (float)20)) *
                         fStack_100;
            if (pCVar4 == this_ptr->look_at_candidate) {
              fStack_100 = fStack_100 * (float)1.1000000000000001;
            }
            if (-1.0f <= fStack_100) {
              core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
              core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,&this_ptr->base);
              core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,&pCVar4->base);
              core_setcolid_cpp_CDemonSet_setRayType_FUN_00511800(0x01E57284,2);
              iVar2 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0050fa30
                                (0x01E57284,&CStack_5c,&CStack_ec);
              if ((iVar2 == 0) && (pCStack_20 = pCVar4, &fStack_d4 != &fStack_44)) {
                fStack_d4 = fStack_44;
                fStack_d0 = fStack_40;
                fStack_cc = fStack_3c;
              }
            }
          }
        }
        iStack_18 = iStack_18 + 4;
      }
      core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
      fStack_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3f800000,0x40000000);
      this_ptr->look_at_search_timer = fStack_14;
    }
    else {
      pCStack_20 = this_ptr->look_at_candidate;
      this_ptr->look_at_search_timer = this_ptr->look_at_search_timer - delta_time;
    }
  }
  else {
    pCStack_20 = pCVar4;
    this_ptr->look_at_search_timer = 0.0;
  }
  this_ptr->look_at_candidate = pCStack_20;
  if (pCStack_20 != (CCharacter *)0x0) {
    CStack_c8.x = 0.0;
    CStack_c8.z = 0.0;
    CStack_c8.y = 5.5;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(&this_ptr->base,&CStack_8c,&CStack_c8)
    ;
    pCVar4 = (CCharacter *)
             core_actor_cpp_castToClassHash_FUN_0040d890
                       (&this_ptr->look_at_candidate->base,g_CCharacterActorType_00765a60.name_hash)
    ;
    if (pCVar4 == (CCharacter *)0x0) {
      PTR_01cc4800 = "..\\core\\charactr.cpp";
      INT_01cc4804 = 0xdb4;
      core_main_c_FUN_004c8440("CCharacter::findSomethingToLookAt - Should be a character");
    }
    iVar1 = (*(((pCVar4->base).vtable._uc)->_uc).releaseFromGrab)(pCVar4);
    if ((iVar1 == 0) || ((pCVar4->model).model_name[0] == '\0')) {
      pCVar8 = &(pCVar4->base).location;
      if ((CLocation *)&CStack_74 != pCVar8) {
        CStack_74.x = (pCVar8->position).x;
        CStack_74.y = (pCVar4->base).location.position.y;
        CStack_74.z = (pCVar4->base).location.position.z;
      }
      CStack_74.y = CStack_74.y + 5.3619766690650802e-315._0_4_;
    }
    else {
      pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                         (&pCVar4->model,&CStack_38,0);
      pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         ((CDemonActor *)pCVar4,&CStack_98,pCVar6);
      if (&CStack_74 != pCVar6) {
        CStack_74.x = pCVar6->x;
        CStack_74.y = pCVar6->y;
        CStack_74.z = pCVar6->z;
      }
    }
    fStack_f8 = CStack_74.x - CStack_8c.x;
    fStack_f4 = CStack_74.y - CStack_8c.y;
    fStack_f0 = CStack_74.z - CStack_8c.z;
    core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220(this_ptr,auStack_e0,&fStack_f8);
    pfVar5 = (float *)core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                                (auStack_bc,auStack_e0);
    if (&fStack_d4 != pfVar5) {
      fStack_d4 = *pfVar5;
      fStack_d0 = pfVar5[1];
      fStack_cc = pfVar5[2];
    }
    if ((float)1.3962634015555599 < ABS(fStack_d0)) {
      this_ptr->look_at_candidate = (CCharacter *)0x0;
    }
    if ((float)0.78539816337500001 < ABS(fStack_d4)) {
      this_ptr->look_at_candidate = (CCharacter *)0x0;
      goto LAB_00429793;
    }
  }
  if (this_ptr->look_at_candidate != (CCharacter *)0x0) {
    fVar7 = delta_time / 5.2220990168285998e-315._0_4_ + this_ptr->look_at_weight;
    this_ptr->look_at_weight = fVar7;
    if (1.0 < fVar7) {
      this_ptr->look_at_weight = 1.0;
    }
    fStack_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                 (fStack_d0 - this_ptr->look_at_yaw);
    this_ptr->look_at_yaw = fStack_14 * (float)0.40000000000000002 + this_ptr->look_at_yaw;
    fVar7 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                             (fStack_d4 - this_ptr->look_at_pitch);
    this_ptr->look_at_pitch = fVar7 * (float)0.40000000000000002 + this_ptr->look_at_pitch;
    return;
  }
LAB_00429793:
  fVar7 = this_ptr->look_at_weight - delta_time / 5.2220990168285998e-315._0_4_;
  this_ptr->look_at_weight = fVar7;
  if (fVar7 < 0.0) {
    this_ptr->look_at_pitch = 0.0;
    this_ptr->look_at_weight = 0.0;
    this_ptr->look_at_yaw = 0.0;
    return;
  }
  return;
}
