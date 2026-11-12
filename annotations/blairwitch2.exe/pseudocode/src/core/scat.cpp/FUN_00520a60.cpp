// Name: core_scat.cpp_FUN_00520a60
// Address: 00520a60
// Address Range: [[00520a60, 00520de8]]
// Convention: unknown
// Signature: undefined4 core_scat_cpp_FUN_00520a60(CDemonActor *param_1,CDemonActor *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_scat_cpp_FUN_00520a60(CDemonActor *param_1,CDemonActor *param_2,int param_3)

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
  this_ptr = (CCharacter *)
             core_actor_cpp_castToClassHash_FUN_0040c8f0(param_2,g_CEnemyClassInfo.name_hash);
  __arrinit(&stack0xfffffea4,10,&g_CVectorTypeInfo);
  iVar1 = (*((param_2->vtable)._ub)->getTargetPoints)(param_2,(CVector3f *)&stack0xfffffea4);
  if (iVar1 != 0) {
    if (this_ptr != (CCharacter *)0x0) {
      uStack_168 = 0x520ac5;
      EVar2 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
      if (0 < (int)EVar2) {
        return 0xbf800000;
      }
    }
    uStack_168 = 0x520b03;
    core_actor_cpp_FUN_00408de0(param_1,&param_2->location);
    fStack_9c = fStack_24;
    *(uint *)((int)&stack0xffffff68 + (uint)bVar6 * -8) =
         *(uint *)((int)&stack0xffffffe0 + (uint)bVar6 * -8);
    *(uint *)((int)&stack0xffffff6c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xffffffe4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    if (0.0 < fStack_94) {
      fStack_154 = SQRT(fStack_94 * fStack_94 + fStack_9c * fStack_9c + fStack_98 * fStack_98);
      fStack_14 = fStack_154;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&stack0xffffff64);
      uStack_54 = uStack_60;
      *(uint *)((int)&stack0xffffffb0 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffffa4 + (uint)bVar6 * -8);
      *(uint *)(&stack0xffffffb4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffffa8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      if (param_3 == 0) {
        if ((float)_DAT_005e2be3 < fStack_154) {
          return 0xbf800000;
        }
        in_stack_fffffea4 = (double)fStack_50;
        if (fStack_50 < (float)_DAT_005e2beb) {
          return 0xbf800000;
        }
        if (_DAT_005e2bf3 < in_stack_fffffea4) {
          return 0xbf800000;
        }
      }
      else {
        if ((float)_DAT_005e2bfb < fStack_154) {
          return 0xbf800000;
        }
        if (fStack_50 < _DAT_005e2c03) {
          return 0xbf800000;
        }
        if (0x3fc90fdb < (int)fStack_50) {
          return 0xbf800000;
        }
      }
      (*((param_1->vtable)._ub)->getBoundingBox)(param_1,SUB84(in_stack_fffffea4,0));
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
      *(uint *)((int)&stack0xffffff88 + (uint)bVar6 * -8) =
           *(uint *)((int)&stack0xffffff94 + (uint)bVar6 * -8);
      *(uint *)((int)&stack0xffffff8c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)((int)&stack0xffffff98 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      fStack_28 = fStack_7c * _DAT_005e2c07;
      fStack_24 = fStack_78 * _DAT_005e2c07;
      fStack_20 = fStack_74 * _DAT_005e2c07;
      fStack_40 = fStack_7c * _DAT_005e2c07;
      (&stack0xffffffc4)[(uint)bVar6 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffffdc + (uint)bVar6 * -8);
      *(uint *)((int)&stack0xffffffc8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)((int)&stack0xffffffe0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      fStack_88 = (param_1->location).position.x + fStack_40;
      fStack_84 = (param_1->location).position.y + fStack_3c;
      fStack_80 = (param_1->location).position.z + fStack_38;
      fStack_a0 = fStack_88;
      (&stack0xffffff64)[(uint)bVar6 * 0xfffffffe] = (&stack0xffffff7c)[(uint)bVar6 * 0xfffffffe];
      *(uint *)((int)&stack0xffffff68 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)((int)&stack0xffffff80 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      core_actor_cpp_FUN_00408d70();
      fVar3 = 1.4013e-45;
      uStack_64 = uStack_34;
      *(uint *)((int)&stack0xffffffa0 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffffd0 + (uint)bVar6 * -8);
      this_ptr_00 = g_CDemonSetPtr;
      *(uint *)(&stack0xffffffa4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffffd4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(this_ptr_00,(int)fVar3);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,param_1);
      fVar3 = (float)core_setcolid_cpp_FUN_00535ee0(g_CDemonSetPtr);
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
      if ((fVar3 <= 1.0) && (param_2 == g_CDemonSetPtr->collision_actor)) {
        return unaff_EDI;
      }
    }
  }
  return 0xbf800000;
}
