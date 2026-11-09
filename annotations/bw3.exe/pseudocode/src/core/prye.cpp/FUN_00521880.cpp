// Name: core_prye.cpp_FUN_00521880
// Address: 00521880
// Address Range: [[00521880, 00521f3d]]
// Convention: unknown
// Signature: undefined4 core_prye_cpp_FUN_00521880(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_prye_cpp_FUN_00521880(CDemonActor *param_1)

{
  CActorDestination *this_ptr;
  int iVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_10ec [1005];
  CDemonSet *pCVar5;
  uint uVar6;
  float *pfVar7;
  byte *puVar8;
  uint *puVar9;
  uint uVar10;
  uint local_110;
  uint local_10c;
  uint local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_ec;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  uint uStack_98;
  float fStack_94;
  uint uStack_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_68;
  float local_5c;
  float local_54;
  float local_50;
  float local_44;
  float local_40;
  float local_3c;
  uint uStack_38;
  float local_2c;
  CActorDestination *local_28;
  int local_24;
  int local_20;
  int local_1c;
  float fStack_18;
  float local_14;
  
  bVar4 = 0;
  if ((*(int *)&param_1[0x185].field_0xe0 != 0) || (*(int *)&param_1[0x1c].field_0x88 == 0)) {
    return 0;
  }
  if ((*(int *)&param_1[0x22].field_0x150 != 0x11) &&
     (local_14 = (float)core_charactr_cpp_FUN_00433a60(param_1,0), local_14 < (float)_DAT_005cd5b7))
  {
    return 0;
  }
  local_14 = (float)core_motion_cpp_FUN_004fc350(param_1 + 1,0);
  if (local_14 < 1.0) {
    return 0;
  }
  local_24 = 0;
  for (local_1c = 0; local_1c < *(int *)&g_CDemonSetPtr->field_0x14d164; local_1c = local_1c + 1) {
    this_ptr = (CActorDestination *)
               core_actor_cpp_castToClassHash_FUN_0040c840
                         (*(uint *)(&g_CDemonSetPtr->field_0x14d168 + local_24),
                          g_CActorDestinationClassInfo.name_hash);
    local_28 = this_ptr;
    if ((this_ptr != (CActorDestination *)0x0) &&
       (iVar1 = core_dest_cpp_CActorDestination_acceptsActor_FUN_004594a0
                          (this_ptr,*(CDemonActor **)&param_1[0x1c].field_0x88), iVar1 != 0)) {
      core_actor_cpp_FUN_00408bf0(param_1,*(int *)&param_1[0x1c].field_0x88 + 0x20);
      local_b0 = local_50;
      *(uint *)((int)&stack0xffffff54 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffffb4 + (uint)bVar4 * -8);
      puVar8 = &this_ptr->field_0x20;
      *(uint *)((int)&stack0xffffff58 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffffb8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      core_actor_cpp_FUN_00408bf0(param_1,puVar8);
      local_e0 = local_f8;
      *(uint *)((int)&stack0xffffff24 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffff0c + (uint)bVar4 * -8);
      *(uint *)((int)&stack0xffffff28 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)(&stack0xffffff10 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      local_80 = local_e0 - local_b0;
      local_7c = local_dc - local_ac;
      local_78 = local_d8 - local_a8;
      local_104 = local_e0 - local_b0;
      (&stack0xffffff00)[(uint)bVar4 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffff84 + (uint)bVar4 * -8);
      *(uint *)((int)&stack0xffffff04 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
           *(uint *)((int)&stack0xffffff88 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
      if ((0.0 < local_fc) &&
         ((((local_fc < (float)_DAT_005cd5bf && (ABS(local_104) < (float)_DAT_005cd5c7)) &&
           (0.0 < (double)local_100)) && ((double)local_100 < _DAT_005cd5cf)))) {
        iVar1 = *(int *)&param_1[0x1c].field_0x88;
        if ((iVar1 == 0) ||
           (iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x84))(iVar1,param_1), iVar1 != 4)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)(param_1 + 1),0x21,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)(param_1 + 1),0x25,1);
          core_actor_cpp_FUN_00408bf0(param_1,&this_ptr->field_0x20);
          uStack_98 = uStack_38;
          (&stack0xffffff6c)[(uint)bVar4 * 0xfffffffe] =
               (float)*(uint *)(&stack0xffffffcc + (uint)bVar4 * -8);
          *(uint *)((int)&stack0xffffff70 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
               *(uint *)(&stack0xffffffd0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
          if ((uint *)&param_1[0x186].field_0x7c != &stack0xffffff68) {
            *(uint *)&param_1[0x186].field_0x7c = uStack_98;
            *(float *)&param_1[0x186].field_0x80 = fStack_94;
            *(uint *)&param_1[0x186].field_0x84 = uStack_90;
          }
          fStack_18 = *(float *)&param_1[0x186].field_0x98 - *(float *)&param_1[0x186].field_0x8c;
          local_14 = (float)core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_00517e80
                                      (*(uint *)&param_1[0x1c].field_0x88);
          *(float *)&param_1[0x186].field_0x80 =
               (fStack_18 - local_14) + *(float *)&param_1[0x186].field_0x80;
        }
        if (*(int *)&param_1[0x185].field_0xac != 0) {
          shape_edittool_cpp_FUN_0047cee0
                    (g_CEditorToolsPtr,"?actionPending = %d\nprye.cpp line %d" + 1,
                     *(int *)&param_1[0x185].field_0xac,0x11b5);
        }
        *(uint *)&param_1[0x185].field_0xac = 2;
        if (&param_1[0x185].field_0xf8 != &local_28->field_0x20) {
          *(uint *)&param_1[0x185].field_0xf8 = *(uint *)&local_28->field_0x20;
          *(uint *)&param_1[0x185].field_0xfc = *(uint *)&local_28->field_0x24;
          *(uint *)&param_1[0x185].field_0x100 = *(uint *)&local_28->field_0x28;
        }
        if (&param_1[0x185].field_0x104 != &local_28->field_0x30) {
          *(uint *)&param_1[0x185].field_0x104 = *(uint *)&local_28->field_0x30;
          *(uint *)&param_1[0x185].field_0x108 = *(uint *)&local_28->field_0x34;
          *(uint *)&param_1[0x185].field_0x10c = *(uint *)&local_28->field_0x38;
        }
        return 1;
      }
    }
    local_24 = local_24 + 4;
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,param_1);
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
            (g_CDemonSetPtr,*(CDemonActor **)&param_1[0x1c].field_0x88);
  puVar9 = &stack0xfffffef0;
  puVar3 = (uint *)(*(int *)&param_1[0x1c].field_0x88 + 0x24 + (uint)bVar4 * -8);
  local_bc = *(float *)(*(int *)&param_1[0x1c].field_0x88 + 0x20);
  (&stack0xffffff48)[(uint)bVar4 * 0xfffffffe] = (float)*puVar3;
  *(uint *)((int)&stack0xffffff4c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       puVar3[(uint)bVar4 * -2 + 1];
  local_108 = 0x3f800000;
  local_110 = 0;
  local_10c = 0;
  core_actor_cpp_FUN_00408b00(param_1,puVar9);
  local_5c = local_74;
  *(uint *)(&stack0xffffffa8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffff90 + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffac + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffff94 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  local_b8 = *(float *)&param_1->field_0x24;
  local_bc = local_bc + local_5c;
  local_b4 = local_b4 + local_54;
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0x3fc00000;
  core_actor_cpp_FUN_00408b00(param_1,&stack0xffffff38);
  uVar10 = 0x40400000;
  uVar6 = 0x3dcccccd;
  local_a4 = local_68;
  *(uint *)((int)&stack0xffffff60 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffff9c + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffff64 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffa0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  local_14 = (float)core_setcolid_cpp_FUN_0053de10
                              (g_CDemonSetPtr,local_bc,local_b4,local_a4,local_9c,0x3f800000,uVar6,
                               uVar10);
  if (local_14 < 1.0) {
    core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
    return 0;
  }
  uVar6 = 0x3f000000;
  pfVar7 = &stack0xffffff14;
  local_44 = local_bc + local_a4;
  local_40 = local_b8 + local_a0;
  local_3c = local_b4 + local_9c;
  local_ec = local_bc + local_a4;
  *(uint *)((int)&stack0xffffff18 + (uint)bVar4 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffffc0 + (uint)bVar4 * -8);
  pCVar5 = g_CDemonSetPtr;
  *(uint *)(&stack0xffffff1c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffc4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  local_2c = (float)core_setcolid_cpp_FUN_0053bc80(pCVar5,pfVar7,uVar6);
  local_14 = local_2c;
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  if (ABS(local_2c - *(float *)&param_1->field_0x24) <= 1.0) {
    iVar1 = 0;
    local_20 = 0;
    do {
      if (*(int *)&g_CDemonSetPtr->field_0x14d164 <= iVar1) {
        *(uint *)&param_1[0x185].field_0xac = 6;
        iVar1 = *(int *)&param_1[0x1c].field_0x88;
        if ((iVar1 == 0) ||
           (iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x84))(iVar1,param_1), iVar1 != 4)) {
          iVar1 = 0x1f;
        }
        else {
          iVar1 = 0x24;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)(param_1 + 1),iVar1,1);
        return 1;
      }
      iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                        (*(uint *)(&g_CDemonSetPtr->field_0x14d168 + local_20),
                         g_CCrateClassInfo.name_hash);
      if (iVar2 != 0) {
        local_8c = *(float *)(iVar2 + 0x20) - local_bc;
        local_88 = *(float *)(iVar2 + 0x24) - local_b8;
        local_84 = *(float *)(iVar2 + 0x28) - local_b4;
        local_d4 = local_8c;
        *(uint *)((int)&stack0xffffff30 + (uint)bVar4 * -8) =
             *(uint *)((int)&stack0xffffff78 + (uint)bVar4 * -8);
        *(uint *)((int)&stack0xffffff34 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
             *(uint *)((int)&stack0xffffff7c + (uint)bVar4 * -8 + (uint)bVar4 * -8);
        if (SQRT(local_cc * local_cc + local_d4 * local_d4 + local_d0 * local_d0) <
            (float)_DAT_005cd5c7) {
          return 0;
        }
      }
      local_20 = local_20 + 4;
      iVar1 = iVar1 + 1;
    } while( true );
  }
  return 0;
}
