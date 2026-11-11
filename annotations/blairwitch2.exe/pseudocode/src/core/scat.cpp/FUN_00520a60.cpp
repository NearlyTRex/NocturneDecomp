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
  int iVar1;
  int iVar2;
  uint unaff_EBP;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_108c [966];
  CDemonSet *this_ptr;
  double in_stack_fffffea0;
  float ray_type;
  float fStack_158;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_58;
  float fStack_54;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  uint uStack_38;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_18;
  float fStack_14;
  
  bVar5 = 0;
  iVar1 = (CEnemy *)core_actor_cpp_castToClassHash_FUN_0040c8f0(param_2,g_CEnemyClassInfo.name_hash);
  __arrinit(&stack0xfffffea4,10,&g_CVectorTypeInfo);
  iVar2 = (*((param_2->vtable)._ub)->getTargetPoints)(param_2,(CVector3f *)&stack0xfffffea4);
  if ((iVar2 != 0) &&
     ((iVar1 == 0 || (iVar1 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x114))(iVar1), iVar1 < 1)))) {
    core_actor_cpp_FUN_00408de0(param_1,&param_2->location);
    fStack_a0 = fStack_28;
    *(uint *)((int)&stack0xffffff64 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffdc + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffff68 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xffffffe0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    if (0.0 < fStack_98) {
      fStack_158 = SQRT(fStack_98 * fStack_98 + fStack_a0 * fStack_a0 + fStack_9c * fStack_9c);
      fStack_18 = fStack_158;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&stack0xffffff60);
      uStack_58 = uStack_64;
      *(uint *)((int)&stack0xffffffac + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffa0 + (uint)bVar5 * -8);
      *(uint *)(&stack0xffffffb0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffa4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      if (param_3 == 0) {
        if ((float)_DAT_005e2be3 < fStack_158) {
          return 0xbf800000;
        }
        in_stack_fffffea0 = (double)fStack_54;
        if (fStack_54 < (float)_DAT_005e2beb) {
          return 0xbf800000;
        }
        if (_DAT_005e2bf3 < in_stack_fffffea0) {
          return 0xbf800000;
        }
      }
      else {
        if ((float)_DAT_005e2bfb < fStack_158) {
          return 0xbf800000;
        }
        if (fStack_54 < _DAT_005e2c03) {
          return 0xbf800000;
        }
        if (0x3fc90fdb < (int)fStack_54) {
          return 0xbf800000;
        }
      }
      (*((param_1->vtable)._ub)->getBoundingBox)(param_1,SUB84(in_stack_fffffea0,0));
      puVar3 = (uint *)&stack0xffffff44;
      puVar4 = (uint *)&stack0xffffff24;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      fStack_74 = fStack_d4 + fStack_c8;
      fStack_70 = fStack_d0 + fStack_c4;
      fStack_6c = fStack_cc + fStack_c0;
      fStack_80 = fStack_d4 + fStack_c8;
      *(uint *)((int)&stack0xffffff84 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffff90 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffff88 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffff94 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      fStack_2c = fStack_80 * _DAT_005e2c07;
      fStack_28 = fStack_7c * _DAT_005e2c07;
      fStack_24 = fStack_78 * _DAT_005e2c07;
      fStack_44 = fStack_80 * _DAT_005e2c07;
      (&stack0xffffffc0)[(uint)bVar5 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffffd8 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffffdc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      fStack_8c = (param_1->location).position.x + fStack_44;
      fStack_88 = (param_1->location).position.y + fStack_40;
      fStack_84 = (param_1->location).position.z + fStack_3c;
      fStack_a4 = fStack_8c;
      (&stack0xffffff60)[(uint)bVar5 * 0xfffffffe] = (&stack0xffffff78)[(uint)bVar5 * 0xfffffffe];
      *(uint *)((int)&stack0xffffff64 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffff7c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      core_actor_cpp_FUN_00408d70(param_2);
      ray_type = 1.4013e-45;
      uStack_68 = uStack_38;
      *(uint *)((int)&stack0xffffff9c + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffcc + (uint)bVar5 * -8);
      this_ptr = g_CDemonSetPtr;
      *(uint *)(&stack0xffffffa0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffffd0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(this_ptr,(int)ray_type);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,param_1);
      fStack_14 = (float)core_setcolid_cpp_FUN_00535ee0(g_CDemonSetPtr,&stack0xffffff5c);
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
      if ((fStack_14 <= 1.0) && (param_2 == g_CDemonSetPtr->collision_actor)) {
        return unaff_EBP;
      }
    }
  }
  return 0xbf800000;
}
