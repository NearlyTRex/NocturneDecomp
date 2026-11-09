// Name: core_gabriela.cpp_FUN_004ca450
// Address: 004ca450
// Address Range: [[004ca450, 004cab02]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_FUN_004ca450(CGabriella *this_ptr,float delta_time,int is_holstering)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_FUN_004ca450(CGabriella *this_ptr,float delta_time,int is_holstering)

{
  CDemonActor *target_actor;
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  byte bVar6;
  float afStackY_10dc [972];
  uint *puVar7;
  uint uVar8;
  float local_1a0;
  float local_19c;
  uint uStack_198;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  uint uStack_f4;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d0;
  float fStack_c4;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  uint uStack_a0;
  float fStack_94;
  float fStack_88;
  float fStack_7c;
  uint uStack_78;
  float fStack_70;
  uint uStack_6c;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_34;
  float local_30;
  CDemonActor *local_28;
  float local_24;
  int local_20;
  uint local_18;
  float local_14;
  
  bVar6 = 0;
  if ((is_holstering == 0) &&
     (pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         ((CMotionController *)&this_ptr->field_0x158), *(int *)(pSVar2 + 0x24) == 2
     )) {
    is_holstering = 1;
  }
  if ((*(int *)&this_ptr->field_0x1fae4 == 0) || (*(int *)&this_ptr->field_0xc1d4 == 2)) {
    if ((*(int *)&this_ptr->field_0x1ffac == 0) || (is_holstering != 0)) {
      *(uint *)&this_ptr->field_0x1ffd0 = 0;
    }
    else if (*(int *)&this_ptr->field_0x1ffc4 == 0) {
      local_24 = 1e+30;
      local_28 = (CDemonActor *)0x0;
      local_20 = 0;
      for (iVar3 = 0; iVar3 < *(int *)&g_CDemonSetPtr->field_0x14d164; iVar3 = iVar3 + 1) {
        target_actor = *(CDemonActor **)(&g_CDemonSetPtr->field_0x14d168 + local_20);
        local_1a0 = core_gabriela_cpp_FUN_004ca0c0
                              (this_ptr,target_actor,
                               (uint)(target_actor == *(CDemonActor **)&this_ptr->field_0x1ffd0));
        if ((0.0 <= local_1a0) && (local_1a0 < local_24)) {
          local_28 = target_actor;
          local_24 = local_1a0;
        }
        local_20 = local_20 + 4;
        local_14 = local_1a0;
      }
      *(CDemonActor **)&this_ptr->field_0x1ffd0 = local_28;
    }
    if (*(int *)&this_ptr->field_0x1ffc4 == 2) {
      if (*(int *)&this_ptr->field_0x1ffd0 == 0) {
        *(uint *)&this_ptr->field_0x1ffe0 = 0;
        *(uint *)&this_ptr->field_0x1ffdc = *(uint *)&this_ptr->field_0x1ffe0;
        *(uint *)&this_ptr->field_0x1ffd8 = *(uint *)&this_ptr->field_0x1ffdc;
        *(uint *)&this_ptr->field_0x1ffd4 = *(uint *)&this_ptr->field_0x1ffd8;
      }
      fVar1 = delta_time / (_DAT_00600d60 * (float)_DAT_005e11fc) +
              *(float *)&this_ptr->field_0x1ffe8;
    }
    else if (*(int *)&this_ptr->field_0x1ffd0 == 0) {
      if (0.0 < *(float *)&this_ptr->field_0x1ffe4) goto LAB_004ca4ed;
      fVar1 = *(float *)&this_ptr->field_0x1ffe8 - delta_time / _DAT_00600d60;
    }
    else {
      __arrinit(&stack0xfffffe64,10,&g_CVectorTypeInfo);
      iVar3 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0x1ffd0 + 0x154) + 0x54))
                        (*(int *)&this_ptr->field_0x1ffd0,&stack0xfffffe64);
      if (iVar3 < 1) {
        (**(code **)(*(int *)(*(int *)&this_ptr->field_0x1ffd0 + 0x154) + 0x1c))
                  (*(int *)&this_ptr->field_0x1ffd0);
        pfVar4 = (float *)&stack0xfffffef4;
        pfVar5 = &stack0xfffffedc;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar5 = *pfVar4;
          pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
          pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
        }
        fStack_58 = fStack_124 + fStack_118;
        fStack_54 = fStack_120 + fStack_114;
        fStack_50 = fStack_11c + fStack_110;
        fStack_ac = fStack_124 + fStack_118;
        *(uint *)((int)&stack0xffffff58 + (uint)bVar6 * -8) =
             *(uint *)((int)&stack0xffffffac + (uint)bVar6 * -8);
        *(uint *)((int)&stack0xffffff5c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)((int)&stack0xffffffb0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        fStack_4c = fStack_ac * _DAT_005e11f8;
        fStack_48 = fStack_a8 * _DAT_005e11f8;
        fStack_44 = fStack_a4 * _DAT_005e11f8;
        fStack_7c = fStack_ac * _DAT_005e11f8;
        (&stack0xffffff88)[(uint)bVar6 * 0xfffffffe] =
             *(uint *)((int)&stack0xffffffb8 + (uint)bVar6 * -8);
        *(uint *)(&stack0xffffff8c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)((int)&stack0xffffffbc + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        if (&stack0xffffff90 != &stack0xffffff84) {
          fStack_70 = fStack_7c;
          uStack_6c = uStack_78;
        }
      }
      else if (&stack0xffffff90 != &stack0xfffffe64) {
        fStack_70 = local_19c;
        uStack_6c = uStack_198;
      }
      core_actor_cpp_FUN_00408b40(*(uint *)&this_ptr->field_0x1ffd0,&stack0xffffff90);
      puVar7 = &stack0xffffff30;
      uStack_d0 = uStack_a0;
      *(uint *)((int)&stack0xffffff34 + (uint)bVar6 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffff64 + (uint)bVar6 * -8);
      *(uint *)(&stack0xffffff38 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffff68 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      core_actor_cpp_FUN_00408bb0(this_ptr,puVar7);
      fStack_64 = fStack_94;
      (&stack0xffffffa0)[(uint)bVar6 * 0xfffffffe] =
           (float)*(uint *)(&stack0xffffff70 + (uint)bVar6 * -8);
      uVar8 = _DAT_01cc9120;
      *(uint *)((int)&stack0xffffffa4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffff74 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      core_skeleton_cpp_FUN_00569040(&this_ptr->field_0x158,uVar8);
      fVar1 = fStack_64;
      fStack_e8 = fStack_c4;
      *(uint *)((int)&stack0xffffff1c + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffff40 + (uint)bVar6 * -8);
      *(uint *)((int)&stack0xffffff20 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffff44 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      fStack_b8 = fVar1 - fStack_e8;
      fStack_b4 = fStack_60 - fStack_e4;
      fStack_b0 = fStack_5c - fStack_e0;
      fStack_88 = fVar1 - fStack_e8;
      *(uint *)((int)&stack0xffffff7c + (uint)bVar6 * 0xfffffffe * 4) =
           *(uint *)((int)&stack0xffffff4c + (uint)bVar6 * -8);
      *(uint *)(&stack0xffffff80 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)((int)&stack0xffffff50 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      core_vecdir_cpp_FUN_005a7520(&stack0xffffff78);
      fVar1 = delta_time / _DAT_00600d60;
      uStack_dc = uStack_f4;
      *(uint *)((int)&stack0xffffff28 + (uint)bVar6 * -8) =
           *(uint *)((int)&stack0xffffff10 + (uint)bVar6 * 0xfffffffe * 4);
      *(uint *)(&stack0xffffff2c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           *(uint *)(&stack0xffffff14 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      *(uint *)&this_ptr->field_0x1ffd4 = uStack_dc;
      fVar1 = fVar1 + *(float *)&this_ptr->field_0x1ffe8;
      *(uint *)&this_ptr->field_0x1ffd8 = uStack_d8;
    }
  }
  else {
    fVar1 = *(float *)&this_ptr->field_0xc204 * _DAT_005e11e4 * (float)_DAT_005e11ec * delta_time +
            *(float *)&this_ptr->field_0x1ffd4;
    local_18 = 0x3fc90fdb;
    *(float *)&this_ptr->field_0x1ffd4 = fVar1;
    if (fVar1 < _DAT_005e11f4) {
      *(uint *)&this_ptr->field_0x1ffd4 = 0xbfc90fdb;
    }
    if (1.5707964 < *(float *)&this_ptr->field_0x1ffd4) {
      *(uint *)&this_ptr->field_0x1ffd4 = 0x3fc90fdb;
    }
    fVar1 = delta_time / _DAT_00600d60 + *(float *)&this_ptr->field_0x1ffe8;
    *(uint *)&this_ptr->field_0x1ffd8 = 0;
  }
  *(float *)&this_ptr->field_0x1ffe8 = fVar1;
LAB_004ca4ed:
  if (1.0 < *(float *)&this_ptr->field_0x1ffe8) {
    *(uint *)&this_ptr->field_0x1ffe8 = 0x3f800000;
  }
  if (*(float *)&this_ptr->field_0x1ffe8 < 0.0) {
    *(uint *)&this_ptr->field_0x1ffdc = 0;
    *(uint *)&this_ptr->field_0x1ffe0 = 0;
    *(uint *)&this_ptr->field_0x1ffe8 = 0;
  }
  if (0.0 < *(float *)&this_ptr->field_0x1ffe8) {
    local_30 = (float)core_actor_cpp_FUN_0040cd60
                                (*(float *)&this_ptr->field_0x1ffd8 -
                                 *(float *)&this_ptr->field_0x1ffe0);
    local_14 = local_30;
    local_34 = (float)core_actor_cpp_FUN_0040cd60
                                (*(float *)&this_ptr->field_0x1ffd4 -
                                 *(float *)&this_ptr->field_0x1ffdc);
    fVar1 = delta_time * _DAT_005e11e4 * (float)_DAT_005e1204;
    if (local_30 < -fVar1) {
      local_30 = -fVar1;
    }
    if (fVar1 < local_30) {
      local_30 = fVar1;
    }
    if (local_34 < -fVar1) {
      local_34 = -fVar1;
    }
    if (fVar1 < local_34) {
      local_34 = fVar1;
    }
    *(float *)&this_ptr->field_0x1ffdc = *(float *)&this_ptr->field_0x1ffdc + local_34;
    *(float *)&this_ptr->field_0x1ffe0 = *(float *)&this_ptr->field_0x1ffe0 + local_30;
    return;
  }
  *(uint *)&this_ptr->field_0x1ffdc = *(uint *)&this_ptr->field_0x1ffd4;
  *(uint *)&this_ptr->field_0x1ffe0 = *(uint *)&this_ptr->field_0x1ffd8;
  return;
}
