// Name: core_gabriela.cpp_CGabriella_scoreTargetVisibility_FUN_004ca0c0
// Address: 004ca0c0
// Address Range: [[004ca0c0, 004ca448]]
// Convention: __cdecl
// Signature: float __cdecl core_gabriela_cpp_CGabriella_scoreTargetVisibility_FUN_004ca0c0(CGabriella *this_ptr,CDemonActor *target_actor,int use_wider_fov)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_gabriela_cpp_CGabriella_scoreTargetVisibility_FUN_004ca0c0(CGabriella *this_ptr,CDemonActor *target_actor,int use_wider_fov)

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
  CVector3f CStack_a0;
  float afStack_94 [4];
  float afStack_84 [4];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  CVector3f CStack_64;
  float afStack_58 [6];
  float fStack_40;
  float afStack_3c [2];
  CVector3f CStack_34;
  float fStack_28;
  CVector3f CStack_24;
  float fStack_14;
  
  bVar6 = 0;
  this_ptr_00 = (CCharacter *)
                core_actor_cpp_castToClassHash_FUN_0040c600
                          (target_actor,g_CEnemyClassInfo.name_hash);
  __arrinit(&stack0xfffffea4,10,&g_CVectorTypeInfo);
  iVar1 = (*((target_actor->vtable)._ub)->getTargetPoints)
                    (target_actor,(CVector3f *)&stack0xfffffea4);
  if (iVar1 != 0) {
    if (this_ptr_00 != (CCharacter *)0x0) {
      uStack_168 = 0x4ca125;
      EVar2 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00);
      if (0 < (int)EVar2) {
        return -1.0;
      }
    }
    uStack_168 = 0x4ca163;
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
              ((CDemonActor *)this_ptr,&(target_actor->location).position,&CStack_24);
    CStack_a0.y = CStack_24.x;
    afStack_94[(uint)bVar6 * -2 + -1] = *(float *)((int)&CStack_24 + (uint)bVar6 * -8 + 4);
    afStack_94[(uint)bVar6 * -2 + (uint)bVar6 * -2] =
         *(float *)((int)&CStack_24 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    if (0.0 < afStack_94[0]) {
      fStack_154 = SQRT(afStack_94[0] * afStack_94[0] +
                        CStack_a0.y * CStack_a0.y + CStack_a0.z * CStack_a0.z);
      fStack_14 = fStack_154;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&CStack_a0.y);
      afStack_58[1] = CStack_64.y;
      afStack_58[(uint)bVar6 * -2 + 2] = afStack_58[(uint)bVar6 * -2 + -1];
      afStack_58[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 3] =
           afStack_58[(uint)bVar6 * -2 + (uint)bVar6 * -2];
      if (use_wider_fov == 0) {
        if ((float)_DAT_005e11bc < fStack_154) {
          return -1.0;
        }
        in_stack_fffffea4 = (double)afStack_58[2];
        if (afStack_58[2] < (float)_DAT_005e11c4) {
          return -1.0;
        }
        if (_DAT_005e11cc < in_stack_fffffea4) {
          return -1.0;
        }
      }
      else {
        if ((float)_DAT_005e11d4 < fStack_154) {
          return -1.0;
        }
        if (afStack_58[2] < _DAT_005e11dc) {
          return -1.0;
        }
        if (0x3fc90fdb < (int)afStack_58[2]) {
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
      fStack_28 = afStack_84[2] * _DAT_005e11e0;
      CStack_24.x = afStack_84[3] * _DAT_005e11e0;
      CStack_24.y = fStack_74 * _DAT_005e11e0;
      fStack_40 = afStack_84[2] * _DAT_005e11e0;
      afStack_3c[(uint)bVar6 * -2] = *(float *)((int)&CStack_24 + (uint)bVar6 * -8);
      afStack_3c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           *(float *)((int)&CStack_24 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 4);
      afStack_94[3] = (this_ptr->base).base.base.location.position.x + fStack_40;
      afStack_84[0] = (this_ptr->base).base.base.location.position.y + afStack_3c[0];
      afStack_84[1] = (this_ptr->base).base.base.location.position.z + afStack_3c[1];
      CStack_a0.x = afStack_94[3];
      afStack_94[(uint)bVar6 * -2 + -2] = afStack_84[(uint)bVar6 * -2];
      afStack_94[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -1] =
           afStack_84[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                (target_actor,input_local_point,&CStack_34);
      fVar3 = 1.4013e-45;
      CStack_64.x = CStack_34.x;
      afStack_58[(uint)bVar6 * -2 + -2] = *(float *)((int)&CStack_34 + (uint)bVar6 * -8 + 4);
      this_ptr_01 = g_CDemonSetPtr;
      afStack_58[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -1] =
           *(float *)((int)&CStack_34 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(this_ptr_01,(int)fVar3);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)this_ptr);
      fVar3 = core_setcolid_cpp_CDemonSet_raycast_FUN_00557300(g_CDemonSetPtr,&CStack_a0,&CStack_64)
      ;
      core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
      if ((fVar3 <= 1.0) && (target_actor == g_CDemonSetPtr->collision_actor)) {
        return unaff_EDI;
      }
    }
  }
  return -1.0;
}
