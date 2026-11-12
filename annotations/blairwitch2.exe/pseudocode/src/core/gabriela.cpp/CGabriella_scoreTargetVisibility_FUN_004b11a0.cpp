// Name: core_gabriela.cpp_CGabriella_scoreTargetVisibility_FUN_004b11a0
// Address: 004b11a0
// Address Range: [[004b11a0, 004b1528]]
// Convention: __cdecl
// Signature: float __cdecl core_gabriela_cpp_CGabriella_scoreTargetVisibility_FUN_004b11a0(CGabriella *this_ptr,CDemonActor *target_actor,int use_wider_fov)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_gabriela_cpp_CGabriella_scoreTargetVisibility_FUN_004b11a0(CGabriella *this_ptr,CDemonActor *target_actor,int use_wider_fov)

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
  float fStack_154;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_54;
  float fStack_50;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  uint uStack_34;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_14;
  
  bVar6 = 0;
  this_ptr_00 = (CCharacter *)
                core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (target_actor,g_CEnemyClassInfo.name_hash);
  __arrinit(&stack0xfffffea4,10,&g_CVectorTypeInfo);
  iVar1 = (*((target_actor->vtable)._ub)->getTargetPoints)
                    (target_actor,(CVector3f *)&stack0xfffffea4);
  if (iVar1 != 0) {
    if (this_ptr_00 != (CCharacter *)0x0) {
      uStack_168 = 0x4b1205;
      EVar2 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00);
      if (0 < (int)EVar2) {
        return -1.0;
      }
    }
    uStack_168 = 0x4b1243;
    core_actor_cpp_FUN_00408de0(this_ptr,&target_actor->location);
    fStack_9c = fStack_24;
    (&stack0xffffff64)[(uint)bVar6 * -2 + 1] = (&stack0xffffffc4)[(uint)bVar6 * -2 + 7];
    (&stack0xffffff64)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 2] =
         (&stack0xffffffc4)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 8];
    if (0.0 < fStack_94) {
      fStack_154 = SQRT(fStack_94 * fStack_94 + fStack_9c * fStack_9c + fStack_98 * fStack_98);
      fStack_14 = fStack_154;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&stack0xffffff64);
      uStack_54 = uStack_60;
      (&stack0xffffff7c)[(uint)bVar6 * -2 + 0xd] = (&stack0xffffff7c)[(uint)bVar6 * -2 + 10];
      (&stack0xffffff7c)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xe] =
           (&stack0xffffff7c)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xb];
      if (use_wider_fov == 0) {
        if ((float)_DAT_005d7143 < fStack_154) {
          return -1.0;
        }
        in_stack_fffffea4 = (double)fStack_50;
        if (fStack_50 < (float)_DAT_005d714b) {
          return -1.0;
        }
        if (_DAT_005d7153 < in_stack_fffffea4) {
          return -1.0;
        }
      }
      else {
        if ((float)_DAT_005d715b < fStack_154) {
          return -1.0;
        }
        if (fStack_50 < _DAT_005d7163) {
          return -1.0;
        }
        if (0x3fc90fdb < (int)fStack_50) {
          return -1.0;
        }
      }
      (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                ((CDemonActor *)this_ptr,SUB84(in_stack_fffffea4,0));
      puVar4 = (uint *)&stack0xffffff48;
      puVar5 = (uint *)&stack0xffffff28;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      fStack_70 = fStack_d0 + fStack_c4;
      fStack_6c = fStack_cc + fStack_c0;
      fStack_68 = fStack_c8 + fStack_bc;
      fStack_7c = fStack_d0 + fStack_c4;
      (&stack0xffffff7c)[(uint)bVar6 * -2 + 3] = (&stack0xffffff7c)[(uint)bVar6 * -2 + 6];
      (&stack0xffffff7c)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           (&stack0xffffff7c)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      fStack_28 = fStack_7c * _DAT_005d7167;
      fStack_24 = fStack_78 * _DAT_005d7167;
      fStack_20 = fStack_74 * _DAT_005d7167;
      fStack_40 = fStack_7c * _DAT_005d7167;
      (&stack0xffffffc4)[(uint)bVar6 * 0xfffffffe] = (&stack0xffffffc4)[(uint)bVar6 * -2 + 6];
      (&stack0xffffffc4)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           (&stack0xffffffc4)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      fStack_88 = (this_ptr->base).base.base.location.position.x + fStack_40;
      fStack_84 = (this_ptr->base).base.base.location.position.y + fStack_3c;
      fStack_80 = (this_ptr->base).base.base.location.position.z + fStack_38;
      fStack_a0 = fStack_88;
      (&stack0xffffff64)[(uint)bVar6 * 0xfffffffe] = (&stack0xffffff7c)[(uint)bVar6 * 0xfffffffe];
      (&stack0xffffff64)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           (&stack0xffffff7c)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      core_actor_cpp_FUN_00408d70();
      fVar3 = 1.4013e-45;
      uStack_64 = uStack_34;
      (&stack0xffffff7c)[(uint)bVar6 * -2 + 9] = (&stack0xffffffc4)[(uint)bVar6 * -2 + 3];
      this_ptr_01 = g_CDemonSetPtr;
      (&stack0xffffff7c)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
           (&stack0xffffffc4)[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(this_ptr_01,(int)fVar3);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)this_ptr);
      fVar3 = (float)core_setcolid_cpp_FUN_00535ee0(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
      if ((fVar3 <= 1.0) && (target_actor == g_CDemonSetPtr->collision_actor)) {
        return unaff_EDI;
      }
    }
  }
  return -1.0;
}
