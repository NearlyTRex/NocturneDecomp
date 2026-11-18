// Name: core_scat.cpp_CScat_scoreAimTarget_FUN_00520a60
// Address: 00520a60
// Address Range: [[00520a60, 00520de8]]
// Convention: __cdecl
// Signature: float __cdecl core_scat_cpp_CScat_scoreAimTarget_FUN_00520a60(CScat *this_ptr,CDemonActor *target,int is_current_target)

#include "nocturne.h"

float __cdecl core_scat_cpp_CScat_scoreAimTarget_FUN_00520a60(CScat *this_ptr,CDemonActor *target,int is_current_target)

{
  CCharacter *this_ptr_00;
  int iVar1;
  EDeathState EVar2;
  float fVar3;
  uint *puVar4;
  float unaff_EDI;
  uint *puVar5;
  byte bVar6;
  float afStackY_1088 [965];
  uint uStack_168;
  CDemonSet *this_ptr_01;
  double in_stack_fffffea4;
  CVector3f *input_local_point;
  float fStack_154;
  CVector3f aCStack_148 [9];
  uint auStack_d8 [2];
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  uint auStack_b8 [6];
  byte auStack_a0 [8];
  float fStack_98;
  float afStack_94 [4];
  float afStack_84 [4];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  byte auStack_64 [8];
  float afStack_5c [7];
  float fStack_40;
  float afStack_3c [2];
  CVector3f CStack_34;
  float fStack_28;
  CVector3f CStack_24;
  float fStack_14;
  
  bVar6 = 0;
  this_ptr_00 = (CCharacter *)
                core_actor_cpp_castToClassHash_FUN_0040c8f0(target,g_CEnemyClassInfo.name_hash);
  __arrinit(&stack0xfffffea4,10,&g_CVectorTypeInfo);
  iVar1 = (*((target->vtable)._ub)->getTargetPoints)(target,(CVector3f *)&stack0xfffffea4);
  if (iVar1 != 0) {
    if (this_ptr_00 != (CCharacter *)0x0) {
      uStack_168 = 0x520ac5;
      EVar2 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00);
      if (0 < (int)EVar2) {
        return -1.0;
      }
    }
    uStack_168 = 0x520b03;
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
              ((CDemonActor *)this_ptr,&(target->location).position,&CStack_24);
    auStack_a0._4_4_ = CStack_24.x;
    afStack_94[(uint)bVar6 * -2 + -1] = *(float *)((int)&CStack_24 + (uint)bVar6 * -8 + 4);
    afStack_94[(uint)bVar6 * -2 + (uint)bVar6 * -2] =
         *(float *)((int)&CStack_24 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    if (0.0 < afStack_94[0]) {
      fStack_154 = SQRT(afStack_94[0] * afStack_94[0] +
                        (float)auStack_a0._4_4_ * (float)auStack_a0._4_4_ + fStack_98 * fStack_98);
      fStack_14 = fStack_154;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
                ((CVector3f *)(auStack_a0 + 4),(CVector3f *)(auStack_64 + 4));
      afStack_5c[2] = (float)auStack_64._4_4_;
      afStack_5c[(uint)bVar6 * -2 + 3] = afStack_5c[(uint)bVar6 * -2];
      afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      if (is_current_target == 0) {
        if ((float)30 < fStack_154) {
          return -1.0;
        }
        in_stack_fffffea4 = (double)afStack_5c[3];
        if (afStack_5c[3] < (float)-0.78149070982587099) {
          return -1.0;
        }
        if (1.56298141965174 < in_stack_fffffea4) {
          return -1.0;
        }
      }
      else {
        if ((float)35 < fStack_154) {
          return -1.0;
        }
        if (afStack_5c[3] < -0.7853982f) {
          return -1.0;
        }
        if (0x3fc90fdb < (int)afStack_5c[3]) {
          return -1.0;
        }
      }
      (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                ((CDemonActor *)this_ptr,SUB84(in_stack_fffffea4,0));
      puVar4 = auStack_b8;
      puVar5 = auStack_d8;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      fStack_70 = fStack_d0 + fStack_c4;
      fStack_6c = fStack_cc + fStack_c0;
      fStack_68 = fStack_c8 + fStack_bc;
      afStack_84[2] = fStack_d0 + fStack_c4;
      afStack_84[(uint)bVar6 * -2 + 3] = afStack_84[(uint)bVar6 * -2 + 6];
      afStack_84[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           afStack_84[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      input_local_point = aCStack_148;
      fStack_28 = afStack_84[2] * 0.5f;
      CStack_24.x = afStack_84[3] * 0.5f;
      CStack_24.y = fStack_74 * 0.5f;
      fStack_40 = afStack_84[2] * 0.5f;
      afStack_3c[(uint)bVar6 * -2] = *(float *)((int)&CStack_24 + (uint)bVar6 * -8);
      afStack_3c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           *(float *)((int)&CStack_24 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 4);
      afStack_94[3] = (this_ptr->base).base.base.location.position.x + fStack_40;
      afStack_84[0] = (this_ptr->base).base.base.location.position.y + afStack_3c[0];
      afStack_84[1] = (this_ptr->base).base.base.location.position.z + afStack_3c[1];
      auStack_a0._0_4_ = afStack_94[3];
      *(float *)(auStack_a0 + (uint)bVar6 * -8 + 4) = afStack_84[(uint)bVar6 * -2];
      afStack_94[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -1] =
           afStack_84[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70(target,input_local_point,&CStack_34)
      ;
      fVar3 = 1.4013e-45;
      auStack_64._0_4_ = CStack_34.x;
      afStack_5c[(uint)bVar6 * -2 + -1] = *(float *)((int)&CStack_34 + (uint)bVar6 * -8 + 4);
      this_ptr_01 = g_CDemonSetPtr;
      afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2] =
           *(float *)((int)&CStack_34 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(this_ptr_01,(int)fVar3);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)this_ptr);
      fVar3 = core_setcolid_cpp_CDemonSet_raycast_FUN_00535ee0
                        (g_CDemonSetPtr,(CVector3f *)auStack_a0,(CVector3f *)auStack_64);
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
      if ((fVar3 <= 1.0) && (target == g_CDemonSetPtr->collision_actor)) {
        return unaff_EDI;
      }
    }
  }
  return -1.0;
}
