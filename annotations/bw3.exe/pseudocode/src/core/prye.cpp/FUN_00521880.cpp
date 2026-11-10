// Name: core_prye.cpp_FUN_00521880
// Address: 00521880
// Address Range: [[00521880, 00521f3d]]
// Convention: unknown
// Signature: undefined4 core_prye_cpp_FUN_00521880(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_prye_cpp_FUN_00521880(CCharacter *param_1)

{
  CActorDestination *this_ptr;
  int iVar1;
  CVector3f *pCVar2;
  int iVar3;
  CLocation *pCVar4;
  UOrientationVector *pUVar5;
  int *piVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_10ec [1005];
  CDemonSet *pCVar9;
  uint uVar10;
  float *pfVar11;
  CLocation *pCVar12;
  uint *puVar13;
  uint uVar14;
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
  int iStack_98;
  float afStack_94 [4];
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
  int iStack_38;
  float afStack_34 [3];
  CActorDestination *local_28;
  int local_24;
  int local_20;
  int local_1c;
  float fStack_18;
  float local_14;
  
  bVar8 = 0;
  if ((param_1[2].flames[0x15].base.orient.vec.x != 0.0) || (*(int *)&param_1->field_0x2628 == 0)) {
    return 0;
  }
  if ((param_1->layer_action_index != 0x11) &&
     (local_14 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_00433a60(param_1,0),
     local_14 < (float)_DAT_005cd5b7)) {
    return 0;
  }
  local_14 = (float)core_motion_cpp_FUN_004fc350(&param_1->model,0);
  if (local_14 < 1.0) {
    return 0;
  }
  local_24 = 0;
  for (local_1c = 0; local_1c < g_CDemonSetPtr->actor_count; local_1c = local_1c + 1) {
    this_ptr = (CActorDestination *)
               core_actor_cpp_castToClassHash_FUN_0040c840
                         (*(uint *)((int)g_CDemonSetPtr->actors + local_24),
                          g_CActorDestinationClassInfo.name_hash);
    local_28 = this_ptr;
    if ((this_ptr != (CActorDestination *)0x0) &&
       (iVar1 = core_dest_cpp_CActorDestination_acceptsActor_FUN_004594a0
                          (this_ptr,*(CDemonActor **)&param_1->field_0x2628), iVar1 != 0)) {
      pCVar4 = &(this_ptr->base).location;
      core_actor_cpp_FUN_00408bf0(param_1,*(int *)&param_1->field_0x2628 + 0x20);
      local_b0 = local_50;
      afStack_94[(uint)bVar8 * -2 + -6] = afStack_94[(uint)bVar8 * -2 + 0x12];
      pCVar12 = pCVar4;
      afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -5] =
           afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13];
      core_actor_cpp_FUN_00408bf0(param_1,pCVar12);
      local_e0 = local_f8;
      *(uint *)((int)&stack0xffffff24 + (uint)bVar8 * -8) =
           *(uint *)(&stack0xffffff0c + (uint)bVar8 * -8);
      *(uint *)((int)&stack0xffffff28 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
           *(uint *)(&stack0xffffff10 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      local_80 = local_e0 - local_b0;
      local_7c = local_dc - local_ac;
      local_78 = local_d8 - local_a8;
      local_104 = local_e0 - local_b0;
      (&stack0xffffff00)[(uint)bVar8 * 0xfffffffe] = afStack_94[(uint)bVar8 * -2 + 6];
      *(float *)((int)&stack0xffffff04 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
           afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
      if ((0.0 < local_fc) &&
         ((((local_fc < (float)_DAT_005cd5bf && (ABS(local_104) < (float)_DAT_005cd5c7)) &&
           (0.0 < (double)local_100)) && ((double)local_100 < _DAT_005cd5cf)))) {
        iVar1 = *(int *)&param_1->field_0x2628;
        if ((iVar1 == 0) ||
           (iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x84))(iVar1,param_1), iVar1 != 4)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(param_1->model).base,0x21,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (&(param_1->model).base,0x25,1);
          core_actor_cpp_FUN_00408bf0(param_1,pCVar4);
          piVar6 = &param_1[2].flames[0x15].base.dead2;
          iStack_98 = iStack_38;
          afStack_94[(uint)bVar8 * -2] = afStack_34[(uint)bVar8 * -2];
          afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               afStack_34[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          if (piVar6 != &iStack_98) {
            *piVar6 = iStack_98;
            param_1[2].flames[0x15].base.previous_transform_state.position.x = afStack_94[0];
            param_1[2].flames[0x15].base.previous_transform_state.position.y = afStack_94[1];
          }
          fStack_18 = (float)param_1[2].flames[0x15].base.previous_transform_state.dirty_flags -
                      param_1[2].flames[0x15].base.previous_transform_state.orientation.vec.x;
          local_14 = (float)core_stranger_cpp_getCarriedObjectVerticalOffset_FUN_00517e80
                                      (*(uint *)&param_1->field_0x2628);
          param_1[2].flames[0x15].base.previous_transform_state.position.x =
               (fStack_18 - local_14) +
               param_1[2].flames[0x15].base.previous_transform_state.position.x;
        }
        iVar1 = param_1[2].flames[0x14].render_corona;
        if (iVar1 != 0) {
          shape_edittool_cpp_FUN_0047cee0
                    (g_CEditorToolsPtr,"?actionPending = %d\nprye.cpp line %d" + 1,iVar1,0x11b5);
        }
        pCVar2 = param_1[2].flames[0x15].base.orient_matrix.m + 1;
        pCVar12 = &(local_28->base).location;
        param_1[2].flames[0x14].render_corona = 2;
        if ((CLocation *)pCVar2 != pCVar12) {
          pCVar2->x = (pCVar12->position).x;
          param_1[2].flames[0x15].base.orient_matrix.m[1].y = (local_28->base).location.position.y;
          param_1[2].flames[0x15].base.orient_matrix.m[1].z = (local_28->base).location.position.z;
        }
        pUVar5 = &(local_28->base).orient;
        pCVar2 = param_1[2].flames[0x15].base.orient_matrix.m + 2;
        if (pCVar2 != (CVector3f *)pUVar5) {
          pCVar2->x = (pUVar5->vec).x;
          param_1[2].flames[0x15].base.orient_matrix.m[2].y = (local_28->base).orient.vec.y;
          param_1[2].flames[0x15].base.orient_matrix.m[2].z = (local_28->base).orient.vec.z;
        }
        return 1;
      }
    }
    local_24 = local_24 + 4;
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,&param_1->base);
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
            (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0x2628);
  puVar13 = &stack0xfffffef0;
  puVar7 = (uint *)(*(int *)&param_1->field_0x2628 + 0x24 + (uint)bVar8 * -8);
  local_bc = *(float *)(*(int *)&param_1->field_0x2628 + 0x20);
  (&stack0xffffff48)[(uint)bVar8 * 0xfffffffe] = (float)*puVar7;
  afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -8] = (float)puVar7[(uint)bVar8 * -2 + 1];
  local_108 = 0x3f800000;
  local_110 = 0;
  local_10c = 0;
  core_actor_cpp_FUN_00408b00(param_1,puVar13);
  local_5c = local_74;
  afStack_94[(uint)bVar8 * -2 + 0xf] = afStack_94[(uint)bVar8 * -2 + 9];
  afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
       afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
  local_b8 = (param_1->base).location.position.y;
  local_bc = local_bc + local_5c;
  local_b4 = local_b4 + local_54;
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0x3fc00000;
  core_actor_cpp_FUN_00408b00(param_1,&stack0xffffff38);
  uVar14 = 0x40400000;
  uVar10 = 0x3dcccccd;
  local_a4 = local_68;
  (&stack0xffffff60)[(uint)bVar8 * 0xfffffffe] = afStack_94[(uint)bVar8 * -2 + 0xc];
  *(float *)((int)&stack0xffffff64 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
  local_14 = (float)core_setcolid_cpp_FUN_0053de10
                              (g_CDemonSetPtr,local_bc,local_b4,local_a4,local_9c,0x3f800000,uVar10,
                               uVar14);
  if (local_14 < 1.0) {
    core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
    return 0;
  }
  uVar10 = 0x3f000000;
  pfVar11 = &stack0xffffff14;
  local_44 = local_bc + local_a4;
  local_40 = local_b8 + local_a0;
  local_3c = local_b4 + local_9c;
  local_ec = local_bc + local_a4;
  *(float *)((int)&stack0xffffff18 + (uint)bVar8 * 0xfffffffe * 4) =
       afStack_94[(uint)bVar8 * -2 + 0x15];
  pCVar9 = g_CDemonSetPtr;
  *(float *)(&stack0xffffff1c + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16];
  afStack_34[2] = (float)core_setcolid_cpp_FUN_0053bc80(pCVar9,pfVar11,uVar10);
  local_14 = afStack_34[2];
  core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
  if (ABS(afStack_34[2] - (param_1->base).location.position.y) <= 1.0) {
    iVar1 = 0;
    local_20 = 0;
    do {
      if (g_CDemonSetPtr->actor_count <= iVar1) {
        param_1[2].flames[0x14].render_corona = 6;
        iVar1 = *(int *)&param_1->field_0x2628;
        if ((iVar1 == 0) ||
           (iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x84))(iVar1,param_1), iVar1 != 4)) {
          iVar1 = 0x1f;
        }
        else {
          iVar1 = 0x24;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  (&(param_1->model).base,iVar1,1);
        return 1;
      }
      iVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                        (*(uint *)((int)g_CDemonSetPtr->actors + local_20),
                         g_CCrateClassInfo.name_hash);
      if (iVar3 != 0) {
        afStack_94[2] = *(float *)(iVar3 + 0x20) - local_bc;
        afStack_94[3] = *(float *)(iVar3 + 0x24) - local_b8;
        local_84 = *(float *)(iVar3 + 0x28) - local_b4;
        local_d4 = afStack_94[2];
        *(float *)((int)&stack0xffffff30 + (uint)bVar8 * -8) = afStack_94[(uint)bVar8 * -2 + 3];
        *(float *)((int)&stack0xffffff34 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
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
