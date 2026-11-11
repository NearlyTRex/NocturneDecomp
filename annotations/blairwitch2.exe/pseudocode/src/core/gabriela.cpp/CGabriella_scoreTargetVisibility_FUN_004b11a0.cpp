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
  int iVar1;
  int iVar2;
  float unaff_EBP;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_108c [966];
  CDemonSet *this_ptr_00;
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
  iVar1 = (CEnemy *)core_actor_cpp_castToClassHash_FUN_0040c8f0(target_actor,g_CEnemyClassInfo.name_hash);
  __arrinit(&stack0xfffffea4,10,&g_CVectorTypeInfo);
  iVar2 = (*((target_actor->vtable)._ub)->getTargetPoints)
                    (target_actor,(CVector3f *)&stack0xfffffea4);
  if ((iVar2 != 0) &&
     ((iVar1 == 0 || (iVar1 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x114))(iVar1), iVar1 < 1)))) {
    core_actor_cpp_FUN_00408de0(this_ptr,&target_actor->location);
    fStack_a0 = fStack_28;
    (&stack0xffffff60)[(uint)bVar5 * -2 + 1] = (&stack0xffffffc0)[(uint)bVar5 * -2 + 7];
    (&stack0xffffff60)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 2] =
         (&stack0xffffffc0)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 8];
    if (0.0 < fStack_98) {
      fStack_158 = SQRT(fStack_98 * fStack_98 + fStack_a0 * fStack_a0 + fStack_9c * fStack_9c);
      fStack_18 = fStack_158;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&stack0xffffff60);
      uStack_58 = uStack_64;
      (&stack0xffffff78)[(uint)bVar5 * -2 + 0xd] = (&stack0xffffff78)[(uint)bVar5 * -2 + 10];
      (&stack0xffffff78)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xe] =
           (&stack0xffffff78)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xb];
      if (use_wider_fov == 0) {
        if ((float)_DAT_005d7143 < fStack_158) {
          return -1.0;
        }
        in_stack_fffffea0 = (double)fStack_54;
        if (fStack_54 < (float)_DAT_005d714b) {
          return -1.0;
        }
        if (_DAT_005d7153 < in_stack_fffffea0) {
          return -1.0;
        }
      }
      else {
        if ((float)_DAT_005d715b < fStack_158) {
          return -1.0;
        }
        if (fStack_54 < _DAT_005d7163) {
          return -1.0;
        }
        if (0x3fc90fdb < (int)fStack_54) {
          return -1.0;
        }
      }
      (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                ((CDemonActor *)this_ptr,SUB84(in_stack_fffffea0,0));
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
      (&stack0xffffff78)[(uint)bVar5 * -2 + 3] = (&stack0xffffff78)[(uint)bVar5 * -2 + 6];
      (&stack0xffffff78)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
           (&stack0xffffff78)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
      fStack_2c = fStack_80 * _DAT_005d7167;
      fStack_28 = fStack_7c * _DAT_005d7167;
      fStack_24 = fStack_78 * _DAT_005d7167;
      fStack_44 = fStack_80 * _DAT_005d7167;
      (&stack0xffffffc0)[(uint)bVar5 * 0xfffffffe] = (&stack0xffffffc0)[(uint)bVar5 * -2 + 6];
      (&stack0xffffffc0)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           (&stack0xffffffc0)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
      fStack_8c = (this_ptr->base).base.base.location.position.x + fStack_44;
      fStack_88 = (this_ptr->base).base.base.location.position.y + fStack_40;
      fStack_84 = (this_ptr->base).base.base.location.position.z + fStack_3c;
      fStack_a4 = fStack_8c;
      (&stack0xffffff60)[(uint)bVar5 * 0xfffffffe] = (&stack0xffffff78)[(uint)bVar5 * 0xfffffffe];
      (&stack0xffffff60)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           (&stack0xffffff78)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      core_actor_cpp_FUN_00408d70(target_actor);
      ray_type = 1.4013e-45;
      uStack_68 = uStack_38;
      (&stack0xffffff78)[(uint)bVar5 * -2 + 9] = (&stack0xffffffc0)[(uint)bVar5 * -2 + 3];
      this_ptr_00 = g_CDemonSetPtr;
      (&stack0xffffff78)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
           (&stack0xffffffc0)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(this_ptr_00,(int)ray_type);
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)this_ptr);
      fStack_14 = (float)core_setcolid_cpp_FUN_00535ee0(g_CDemonSetPtr,&stack0xffffff5c);
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
      if ((fStack_14 <= 1.0) && (target_actor == g_CDemonSetPtr->collision_actor)) {
        return unaff_EBP;
      }
    }
  }
  return -1.0;
}
