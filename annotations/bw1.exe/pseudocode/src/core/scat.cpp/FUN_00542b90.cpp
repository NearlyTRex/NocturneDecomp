// Name: core_scat.cpp_FUN_00542b90
// Address: 00542b90
// Address Range: [[00542b90, 00542f18]]
// Convention: unknown
// Signature: undefined4 core_scat_cpp_FUN_00542b90(CDemonActor *param_1,CDemonActor *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_scat_cpp_FUN_00542b90(CDemonActor *param_1,CDemonActor *param_2,int param_3)

{
  CCharacter *this_ptr;
  int iVar1;
  EDeathState EVar2;
  float fVar3;
  uint *puVar4;
  uint unaff_EDI;
  uint *puVar5;
  byte bVar6;
  float afStackY_1088 [965];
  uint uStack_168;
  CDemonSet *this_ptr_00;
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
  float fStack_a0;
  float afStack_9c [5];
  float fStack_88;
  float afStack_84 [4];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  uint uStack_60;
  uint uStack_54;
  float fStack_50;
  float fStack_40;
  float afStack_3c [2];
  CVector3f CStack_34;
  float fStack_28;
  CVector3f CStack_24;
  float fStack_14;
  
  bVar6 = 0;
  this_ptr = (CCharacter *)
             core_actor_cpp_castToClassHash_FUN_0040c600(param_2,g_CEnemyClassInfo.name_hash);
  __arrinit(&stack0xfffffea4,10,&g_CVectorTypeInfo);
  iVar1 = (*((param_2->vtable)._ub)->getTargetPoints)(param_2,(CVector3f *)&stack0xfffffea4);
  if (iVar1 != 0) {
    if (this_ptr != (CCharacter *)0x0) {
      uStack_168 = 0x542bf5;
      EVar2 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
      if (0 < (int)EVar2) {
        return 0xbf800000;
      }
    }
    uStack_168 = 0x542c33;
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
              (param_1,&(param_2->location).position,&CStack_24);
    afStack_9c[0] = CStack_24.x;
    afStack_9c[(uint)bVar6 * -2 + 1] = *(float *)((int)&CStack_24 + (uint)bVar6 * -8 + 4);
    afStack_9c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 2] =
         *(float *)((int)&CStack_24 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    if (0.0 < afStack_9c[2]) {
      fStack_154 = SQRT(afStack_9c[2] * afStack_9c[2] +
                        afStack_9c[0] * afStack_9c[0] + afStack_9c[1] * afStack_9c[1]);
      fStack_14 = fStack_154;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_9c);
      uStack_54 = uStack_60;
      afStack_84[(uint)bVar6 * -2 + 0xd] = afStack_84[(uint)bVar6 * -2 + 10];
      afStack_84[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xe] =
           afStack_84[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xb];
      if (param_3 == 0) {
        if ((float)_DAT_005edeef < fStack_154) {
          return 0xbf800000;
        }
        in_stack_fffffea4 = (double)fStack_50;
        if (fStack_50 < (float)_DAT_005edef7) {
          return 0xbf800000;
        }
        if (_DAT_005edeff < in_stack_fffffea4) {
          return 0xbf800000;
        }
      }
      else {
        if ((float)_DAT_005edf07 < fStack_154) {
          return 0xbf800000;
        }
        if (fStack_50 < _DAT_005edf0f) {
          return 0xbf800000;
        }
        if (0x3fc90fdb < (int)fStack_50) {
          return 0xbf800000;
        }
      }
      (*((param_1->vtable)._ub)->getBoundingBox)(param_1,SUB84(in_stack_fffffea4,0));
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
      fStack_28 = afStack_84[2] * _DAT_005edf13;
      CStack_24.x = afStack_84[3] * _DAT_005edf13;
      CStack_24.y = fStack_74 * _DAT_005edf13;
      fStack_40 = afStack_84[2] * _DAT_005edf13;
      afStack_3c[(uint)bVar6 * -2] = *(float *)((int)&CStack_24 + (uint)bVar6 * -8);
      afStack_3c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           *(float *)((int)&CStack_24 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 4);
      fStack_88 = (param_1->location).position.x + fStack_40;
      afStack_84[0] = (param_1->location).position.y + afStack_3c[0];
      afStack_84[1] = (param_1->location).position.z + afStack_3c[1];
      fStack_a0 = fStack_88;
      afStack_9c[(uint)bVar6 * -2] = afStack_84[(uint)bVar6 * -2];
      afStack_9c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_84[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                (param_2,input_local_point,&CStack_34);
      fVar3 = 1.4013e-45;
      fStack_64 = CStack_34.x;
      afStack_84[(uint)bVar6 * -2 + 9] = *(float *)((int)&CStack_34 + (uint)bVar6 * -8 + 4);
      this_ptr_00 = g_CDemonSetPtr;
      afStack_84[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
           *(float *)((int)&CStack_34 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_005592d0(this_ptr_00,(int)fVar3);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,param_1);
      fVar3 = (float)core_setcolid_cpp_FUN_00557300(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
      if ((fVar3 <= 1.0) && (param_2 == g_CDemonSetPtr->collision_actor)) {
        return unaff_EDI;
      }
    }
  }
  return 0xbf800000;
}
