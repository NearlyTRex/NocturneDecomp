// Name: core_gabriela.cpp_FUN_004b1530
// Address: 004b1530
// Address Range: [[004b1530, 004b1be2]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_FUN_004b1530(CGabriella *this_ptr,float delta_time,int is_holstering)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_FUN_004b1530(CGabriella *this_ptr,float delta_time,int is_holstering)

{
  CDemonActor *target_actor;
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  float afStackY_10dc [972];
  uint *puVar6;
  uint uVar7;
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
  
  bVar5 = 0;
  if ((is_holstering == 0) &&
     (iVar2 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4), *(int *)(iVar2 + 0x24) == 2)) {
    is_holstering = 1;
  }
  if ((*(int *)&this_ptr->field_0x24378 == 0) || (*(int *)&this_ptr->field_0x10a64 == 2)) {
    if ((*(int *)&this_ptr->field_0x25640 == 0) || (is_holstering != 0)) {
      *(uint *)&this_ptr->field_0x25664 = 0;
    }
    else if (*(int *)&this_ptr->field_0x25658 == 0) {
      local_24 = 1e+30;
      local_28 = (CDemonActor *)0x0;
      local_20 = 0;
      for (iVar2 = 0; iVar2 < *(int *)&g_CDemonSetPtr->field_0x14d164; iVar2 = iVar2 + 1) {
        target_actor = *(CDemonActor **)(&g_CDemonSetPtr->field_0x14d168 + local_20);
        local_1a0 = core_gabriela_cpp_FUN_004b11a0
                              (this_ptr,target_actor,
                               (uint)(target_actor == *(CDemonActor **)&this_ptr->field_0x25664));
        if ((0.0 <= local_1a0) && (local_1a0 < local_24)) {
          local_28 = target_actor;
          local_24 = local_1a0;
        }
        local_20 = local_20 + 4;
        local_14 = local_1a0;
      }
      *(CDemonActor **)&this_ptr->field_0x25664 = local_28;
    }
    if (*(int *)&this_ptr->field_0x25658 == 2) {
      if (*(int *)&this_ptr->field_0x25664 == 0) {
        *(uint *)&this_ptr->field_0x25674 = 0;
        *(uint *)&this_ptr->field_0x25670 = *(uint *)&this_ptr->field_0x25674;
        *(uint *)&this_ptr->field_0x2566c = *(uint *)&this_ptr->field_0x25670;
        *(uint *)&this_ptr->field_0x25668 = *(uint *)&this_ptr->field_0x2566c;
      }
      fVar1 = delta_time / (_DAT_005f7340 * (float)_DAT_005d7183) +
              *(float *)&this_ptr->field_0x2567c;
    }
    else if (*(int *)&this_ptr->field_0x25664 == 0) {
      if (0.0 < *(float *)&this_ptr->field_0x25678) goto LAB_004b15cd;
      fVar1 = *(float *)&this_ptr->field_0x2567c - delta_time / _DAT_005f7340;
    }
    else {
      __arrinit(&stack0xfffffe64,10,&g_CVectorTypeInfo);
      iVar2 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0x25664 + 0x2b0) + 0x5c))
                        (*(int *)&this_ptr->field_0x25664,&stack0xfffffe64);
      if (iVar2 < 1) {
        (**(code **)(*(int *)(*(int *)&this_ptr->field_0x25664 + 0x2b0) + 0x24))
                  (*(int *)&this_ptr->field_0x25664);
        pfVar3 = (float *)&stack0xfffffef4;
        pfVar4 = &stack0xfffffedc;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pfVar4 = *pfVar3;
          pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
          pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
        }
        fStack_58 = fStack_124 + fStack_118;
        fStack_54 = fStack_120 + fStack_114;
        fStack_50 = fStack_11c + fStack_110;
        fStack_ac = fStack_124 + fStack_118;
        *(uint *)((int)&stack0xffffff58 + (uint)bVar5 * -8) =
             *(uint *)((int)&stack0xffffffac + (uint)bVar5 * -8);
        *(uint *)((int)&stack0xffffff5c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             *(uint *)((int)&stack0xffffffb0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        fStack_4c = fStack_ac * _DAT_005d717f;
        fStack_48 = fStack_a8 * _DAT_005d717f;
        fStack_44 = fStack_a4 * _DAT_005d717f;
        fStack_7c = fStack_ac * _DAT_005d717f;
        (&stack0xffffff88)[(uint)bVar5 * 0xfffffffe] =
             *(uint *)((int)&stack0xffffffb8 + (uint)bVar5 * -8);
        *(uint *)(&stack0xffffff8c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             *(uint *)((int)&stack0xffffffbc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        if (&stack0xffffff90 != &stack0xffffff84) {
          fStack_70 = fStack_7c;
          uStack_6c = uStack_78;
        }
      }
      else if (&stack0xffffff90 != &stack0xfffffe64) {
        fStack_70 = local_19c;
        uStack_6c = uStack_198;
      }
      core_actor_cpp_FUN_00408d70(*(uint *)&this_ptr->field_0x25664,&stack0xffffff90);
      puVar6 = &stack0xffffff30;
      uStack_d0 = uStack_a0;
      *(uint *)((int)&stack0xffffff34 + (uint)bVar5 * 0xfffffffe * 4) =
           *(uint *)(&stack0xffffff64 + (uint)bVar5 * -8);
      *(uint *)(&stack0xffffff38 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff68 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      core_actor_cpp_FUN_00408de0(this_ptr,puVar6);
      fStack_64 = fStack_94;
      (&stack0xffffffa0)[(uint)bVar5 * 0xfffffffe] =
           (float)*(uint *)(&stack0xffffff70 + (uint)bVar5 * -8);
      uVar7 = _DAT_01cb0690;
      *(uint *)((int)&stack0xffffffa4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff74 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      core_skeleton_cpp_FUN_005469a0(&this_ptr->field_0x2b4,uVar7);
      fVar1 = fStack_64;
      fStack_e8 = fStack_c4;
      *(uint *)((int)&stack0xffffff1c + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff40 + (uint)bVar5 * -8);
      *(uint *)((int)&stack0xffffff20 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff44 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      fStack_b8 = fVar1 - fStack_e8;
      fStack_b4 = fStack_60 - fStack_e4;
      fStack_b0 = fStack_5c - fStack_e0;
      fStack_88 = fVar1 - fStack_e8;
      *(uint *)((int)&stack0xffffff7c + (uint)bVar5 * 0xfffffffe * 4) =
           *(uint *)((int)&stack0xffffff4c + (uint)bVar5 * -8);
      *(uint *)(&stack0xffffff80 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffff50 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      core_vecdir_cpp_FUN_005838f0(&stack0xffffff78);
      fVar1 = delta_time / _DAT_005f7340;
      uStack_dc = uStack_f4;
      *(uint *)((int)&stack0xffffff28 + (uint)bVar5 * -8) =
           *(uint *)((int)&stack0xffffff10 + (uint)bVar5 * 0xfffffffe * 4);
      *(uint *)(&stack0xffffff2c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
           *(uint *)(&stack0xffffff14 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      *(uint *)&this_ptr->field_0x25668 = uStack_dc;
      fVar1 = fVar1 + *(float *)&this_ptr->field_0x2567c;
      *(uint *)&this_ptr->field_0x2566c = uStack_d8;
    }
  }
  else {
    fVar1 = *(float *)&this_ptr->field_0x10a94 * _DAT_005d716b * (float)_DAT_005d7173 * delta_time +
            *(float *)&this_ptr->field_0x25668;
    local_18 = 0x3fc90fdb;
    *(float *)&this_ptr->field_0x25668 = fVar1;
    if (fVar1 < _DAT_005d717b) {
      *(uint *)&this_ptr->field_0x25668 = 0xbfc90fdb;
    }
    if (1.5707964 < *(float *)&this_ptr->field_0x25668) {
      *(uint *)&this_ptr->field_0x25668 = 0x3fc90fdb;
    }
    fVar1 = delta_time / _DAT_005f7340 + *(float *)&this_ptr->field_0x2567c;
    *(uint *)&this_ptr->field_0x2566c = 0;
  }
  *(float *)&this_ptr->field_0x2567c = fVar1;
LAB_004b15cd:
  if (1.0 < *(float *)&this_ptr->field_0x2567c) {
    *(uint *)&this_ptr->field_0x2567c = 0x3f800000;
  }
  if (*(float *)&this_ptr->field_0x2567c < 0.0) {
    *(uint *)&this_ptr->field_0x25670 = 0;
    *(uint *)&this_ptr->field_0x25674 = 0;
    *(uint *)&this_ptr->field_0x2567c = 0;
  }
  if (0.0 < *(float *)&this_ptr->field_0x2567c) {
    local_30 = (float)core_actor_cpp_FUN_0040d0c0
                                (*(float *)&this_ptr->field_0x2566c -
                                 *(float *)&this_ptr->field_0x25674);
    local_14 = local_30;
    local_34 = (float)core_actor_cpp_FUN_0040d0c0
                                (*(float *)&this_ptr->field_0x25668 -
                                 *(float *)&this_ptr->field_0x25670);
    fVar1 = delta_time * _DAT_005d716b * (float)_DAT_005d718b;
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
    *(float *)&this_ptr->field_0x25670 = *(float *)&this_ptr->field_0x25670 + local_34;
    *(float *)&this_ptr->field_0x25674 = *(float *)&this_ptr->field_0x25674 + local_30;
    return;
  }
  *(uint *)&this_ptr->field_0x25670 = *(uint *)&this_ptr->field_0x25668;
  *(uint *)&this_ptr->field_0x25674 = *(uint *)&this_ptr->field_0x2566c;
  return;
}
