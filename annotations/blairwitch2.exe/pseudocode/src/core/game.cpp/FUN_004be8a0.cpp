// Name: core_game.cpp_FUN_004be8a0
// Address: 004be8a0
// Address Range: [[004be8a0, 004bfa65]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004be8a0(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004be8a0(int param_1,uint *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  CDemonActor *pCVar6;
  CCharacter *pCVar7;
  CPathMap *this_ptr;
  EDeathState EVar8;
  byte bVar9;
  float afStackY_1200 [1014];
  CDemonSet *this_ptr_00;
  CVector3i *pCVar10;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  CVector3i CStack_1d0;
  CVector3f CStack_1c4;
  CVector3f CStack_1b8;
  float fStack_1ac;
  float afStack_1a8 [4];
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  uint uStack_188;
  CVector3i CStack_17c;
  CVector3i CStack_170;
  float fStack_164;
  float afStack_160 [2];
  CVector3i CStack_158;
  CVector3i CStack_14c;
  float fStack_140;
  float afStack_13c [2];
  CVector3i CStack_134;
  float fStack_128;
  float afStack_124 [2];
  CVector3f CStack_11c;
  float fStack_110;
  float afStack_10c [2];
  CVector3f CStack_104;
  CVector3i CStack_f8;
  float fStack_ec;
  float afStack_e8 [6];
  float fStack_d0;
  float fStack_cc;
  CVector3f CStack_c8;
  CVector3f CStack_bc;
  CVector3i CStack_b0;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  uint uStack_98;
  float afStack_94 [4];
  float fStack_84;
  float fStack_80;
  CVector3i CStack_74;
  CVector3i CStack_68;
  float fStack_5c;
  float afStack_58 [4];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float local_3c;
  CCharacter *pCStack_38;
  CDemonActor *pCStack_34;
  int local_30;
  float local_2c;
  int local_28;
  int local_24;
  int local_20;
  float fStack_1c;
  float fStack_14;
  
  bVar9 = 0;
  if ((DAT_01cb394c & 1) == 0) {
    DAT_01cb394c = DAT_01cb394c | 1;
  }
  local_2c = 0.25;
  if ((DAT_01cb394c & 2) == 0) {
    DAT_01cb394c = DAT_01cb394c | 2;
  }
  local_24 = _DAT_01c2a37c;
  local_28 = _DAT_01c2a380;
  local_20 = DAT_006141b8;
  local_3c = 4.0;
  local_30 = DAT_006141bc;
  if (0x1e0 < DAT_006141bc) {
    local_24 = (_DAT_01c2a37c * DAT_006141bc) / 0x1e0;
    local_28 = (_DAT_01c2a380 * DAT_006141bc) / 0x1e0;
    local_30 = 0x1e0;
    local_20 = 0x280;
  }
  if (local_24 < 2) {
    local_24 = 2;
  }
  if (DAT_006141b8 + -2 < local_24) {
    local_24 = DAT_006141b8 + -2;
  }
  if (local_28 < 2) {
    local_28 = 2;
  }
  if (DAT_006141bc + -2 < local_28) {
    local_28 = DAT_006141bc + -2;
  }
  memset(param_2,0,0x34);
  if ((&DAT_01cb7528)[*(int *)(param_1 + 0x4c)] == (&DAT_01c37790)[*(int *)(param_1 + 0x4c)]) {
    param_2[4] = 0;
  }
  else {
    param_2[4] = (uint)(byte)(&DAT_01c37790)[*(int *)(param_1 + 0x4c)];
  }
  if ((&DAT_01cb7528)[*(int *)(param_1 + 0x50)] == (&DAT_01c37790)[*(int *)(param_1 + 0x50)]) {
    param_2[5] = 0;
  }
  else {
    param_2[5] = (uint)(byte)(&DAT_01c37790)[*(int *)(param_1 + 0x50)];
  }
  if ((&DAT_01cb7528)[*(int *)(param_1 + 0x68)] == (&DAT_01c37790)[*(int *)(param_1 + 0x68)]) {
    param_2[6] = 0;
  }
  else {
    param_2[6] = (uint)(byte)(&DAT_01c37790)[*(int *)(param_1 + 0x68)];
  }
  if ((&DAT_01cb7528)[*(int *)(param_1 + 0xaf0)] == (&DAT_01c37790)[*(int *)(param_1 + 0xaf0)]) {
    param_2[0xc] = 0;
  }
  else {
    param_2[0xc] = (uint)(byte)(&DAT_01c37790)[*(int *)(param_1 + 0xaf0)];
  }
  iVar5 = (**(code **)(*0x01D02F84 + 4))();
  if ((iVar5 != 0) &&
     ((pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4),
                           g_CDocClassInfo.name_hash), pCVar6 == (CDemonActor *)0x0 ||
      (pCVar6[0xde].particle_systems[1].position.x <= 0.0)))) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004db9d0
              ((CInventory *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c),(CDemonActor *)0x0,
               5,1);
  }
  iVar5 = (**(code **)(*0x01D02F84 + 4))();
  if ((iVar5 != 0) &&
     ((pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4),
                           g_CDocClassInfo.name_hash), pCVar6 == (CDemonActor *)0x0 ||
      (pCVar6[0xde].particle_systems[1].position.x <= 0.0)))) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004db9d0
              ((CInventory *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c),(CDemonActor *)0x0,
               5,-1);
  }
  iVar5 = (**(code **)(*0x01D02F84 + 4))();
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004dbb50
              ((CInventory *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c),1);
  }
  iVar5 = (**(code **)(*0x01D02F84 + 4))();
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_selectItem_FUN_004dbb50
              ((CInventory *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c),-1);
  }
  iVar5 = (**(code **)(*0x01D02F84 + 4))();
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004dbc60
              ((CInventory *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c),1);
  }
  iVar5 = (**(code **)(*0x01D02F84 + 4))();
  if (iVar5 != 0) {
    core_inv_cpp_CInventory_toggleDetailView_FUN_004defa0
              ((CInventory *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c));
  }
  iVar5 = (**(code **)(*0x01D02F84 + 4))();
  if ((iVar5 != 0) &&
     ((pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4),
                           g_CDocClassInfo.name_hash), pCVar6 == (CDemonActor *)0x0 ||
      (pCVar6[0xde].particle_systems[1].position.x <= 0.0)))) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004db9d0
              ((CInventory *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c),(CDemonActor *)0x0,
               0,1);
  }
  iVar5 = (**(code **)(*0x01D02F84 + 4))();
  if ((iVar5 != 0) &&
     ((pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4),
                           g_CDocClassInfo.name_hash), pCVar6 == (CDemonActor *)0x0 ||
      (pCVar6[0xde].particle_systems[1].position.x <= 0.0)))) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004db9d0
              ((CInventory *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c),(CDemonActor *)0x0,
               3,1);
  }
  iVar5 = (**(code **)(*0x01D02F84 + 4))();
  if ((iVar5 != 0) &&
     ((pCVar6 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4),
                           g_CDocClassInfo.name_hash), pCVar6 == (CDemonActor *)0x0 ||
      (pCVar6[0xde].particle_systems[1].position.x <= 0.0)))) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004db9d0
              ((CInventory *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c),(CDemonActor *)0x0,
               6,1);
  }
  if ((_DAT_01cb811c != 0) ||
     (iVar5 = core_script_cpp_CScript_getLetterboxHeight_FUN_00521840(g_CScriptPtr), 2 < iVar5)) {
    _DAT_01cb3930 = (CCharacter *)0x0;
    _DAT_01cb3920 = 0;
    _DAT_01c2a384 = 0;
    _DAT_01cb3948 = (CCharacter *)0x0;
    _DAT_01cb811c = 0;
  }
  pCStack_38 = (CCharacter *)
               (**(code **)(*(int *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2b0) + 0x154))();
  pCStack_34 = (CDemonActor *)0x0;
  if ((_DAT_01cb3920 == 0) && (_DAT_01c2a384 == 1)) {
    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0043c6b0
              (&g_CDemonCameraInstance,local_24,local_28,&CStack_74);
    pCVar10 = &CStack_17c;
    CStack_17c.x = CStack_74.x;
    *(uint *)((int)&CStack_17c + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&CStack_74 + (uint)bVar9 * -8 + 4);
    *(uint *)((int)&CStack_17c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         *(uint *)((int)&CStack_74 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0043c780
              (&g_CDemonCameraInstance,pCVar10,&CStack_14c);
    CStack_17c.x = CStack_14c.x;
    *(uint *)((int)&CStack_17c + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&CStack_14c + (uint)bVar9 * -8 + 4);
    *(uint *)((int)&CStack_17c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         *(uint *)((int)&CStack_14c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    CStack_c8.x = (float)CStack_17c.x * _DAT_005f7558;
    CStack_c8.y = (float)CStack_17c.y * _DAT_005f7558;
    CStack_c8.z = (float)CStack_17c.z * _DAT_005f7558;
    iVar5 = 1;
    fStack_80 = g_CDemonCameraInstance.base.position.f.x;
    afStack_94[(uint)bVar9 * -2 + 6] =
         *(float *)((int)&g_CDemonCameraInstance + (uint)bVar9 * -8 + 8);
    afStack_94[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
         *(float *)((uint)bVar9 * -8 + 0x1fc7844 + (uint)bVar9 * -8);
    CStack_bc.x = fStack_80;
    *(float *)((int)&CStack_bc + (uint)bVar9 * -8 + 4) = afStack_94[(uint)bVar9 * -2 + 6];
    this_ptr_00 = g_CDemonSetPtr;
    *(float *)((int)&CStack_bc + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         afStack_94[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(this_ptr_00,iVar5);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
              (g_CDemonSetPtr,*(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4));
    fStack_14 = core_setcolid_cpp_CDemonSet_raycast_FUN_00535ee0
                          (g_CDemonSetPtr,&CStack_bc,&CStack_c8);
    afStack_58[3] = fStack_14;
    if ((0.0 <= fStack_14) && ((int)fStack_14 < 0x3f800001)) {
      pCStack_34 = g_CDemonSetPtr->collision_actor;
    }
  }
  if ((pCStack_38 == (CCharacter *)0x0) || ((_DAT_01c2a384 & 2) == 0)) {
    if (pCStack_38 == (CCharacter *)0x0) {
      _DAT_01cb3948 = pCStack_38;
    }
  }
  else {
    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
    core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0043c6b0
              (&g_CDemonCameraInstance,local_24,local_28,&CStack_f8);
    pCVar10 = &CStack_1d0;
    CStack_1d0.x = CStack_f8.x;
    *(uint *)((int)&CStack_1d0 + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&CStack_f8 + (uint)bVar9 * -8 + 4);
    *(uint *)((int)&CStack_1d0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         *(uint *)((int)&CStack_f8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0043c780
              (&g_CDemonCameraInstance,pCVar10,&CStack_68);
    CStack_1d0.x = CStack_68.x;
    *(uint *)((int)&CStack_1d0 + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&CStack_68 + (uint)bVar9 * -8 + 4);
    *(uint *)((int)&CStack_1d0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         *(uint *)((int)&CStack_68 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    CStack_1b8.x = (float)CStack_1d0.x * _DAT_005f7558;
    CStack_1b8.y = (float)CStack_1d0.y * _DAT_005f7558;
    CStack_1b8.z = (float)CStack_1d0.z * _DAT_005f7558;
    fStack_ec = g_CDemonCameraInstance.base.position.f.x;
    afStack_e8[(uint)bVar9 * -2] = *(float *)((int)&g_CDemonCameraInstance + (uint)bVar9 * -8 + 8);
    afStack_e8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         *(float *)((uint)bVar9 * -8 + 0x1fc7844 + (uint)bVar9 * -8);
    CStack_104.x = fStack_ec;
    *(float *)((int)&CStack_104 + (uint)bVar9 * -8 + 4) = afStack_e8[(uint)bVar9 * -2];
    *(float *)((int)&CStack_104 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         afStack_e8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,1);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
              (g_CDemonSetPtr,*(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4));
    fStack_14 = core_setcolid_cpp_CDemonSet_raycast_FUN_00535ee0
                          (g_CDemonSetPtr,&CStack_104,&CStack_1b8);
    fStack_44 = fStack_14;
    if (((0.0 <= fStack_14) && ((int)fStack_14 < 0x3f800001)) &&
       (pCVar7 = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (g_CDemonSetPtr->collision_actor,g_CEnemyClassInfo.name_hash),
       pCVar7 != (CCharacter *)0x0)) {
      _DAT_01cb3948 = pCVar7;
    }
    param_2[3] = 1;
  }
  if ((_DAT_01cb3920 == 0) && (_DAT_01c2a384 == 1)) {
    core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_0043c6b0
              (&g_CDemonCameraInstance,local_24,local_28,&CStack_158);
    pCVar6 = pCStack_34;
    CStack_b0.x = CStack_158.x;
    *(uint *)((int)&CStack_b0 + (uint)bVar9 * -8 + 4) =
         *(uint *)((int)&CStack_158 + (uint)bVar9 * -8 + 4);
    *(uint *)((int)&CStack_b0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
         *(uint *)((int)&CStack_158 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    if (pCVar6 == (CDemonActor *)0x0) {
      if (((local_24 < 0x20) || (local_20 + -0x20 < local_24)) ||
         ((local_28 < 0x20 || (local_30 + -0x20 < local_28)))) {
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0043c780
                  (&g_CDemonCameraInstance,&CStack_b0,&CStack_134);
        CStack_b0.x = CStack_134.x;
        *(uint *)((int)&CStack_b0 + (uint)bVar9 * -8 + 4) =
             *(uint *)((int)&CStack_134 + (uint)bVar9 * -8 + 4);
        *(uint *)((int)&CStack_b0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             *(uint *)((int)&CStack_134 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        fStack_a4 = (float)CStack_b0.x * _DAT_005f7558;
        fStack_a0 = (float)CStack_b0.y * _DAT_005f7558;
        fStack_9c = (float)CStack_b0.z * _DAT_005f7558;
        iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        fStack_1f4 = (float)CStack_b0.x * _DAT_005f7558 - *(float *)(iVar5 + 0x20);
        fStack_1f0 = (float)CStack_b0.y * _DAT_005f7558 - *(float *)(iVar5 + 0x24);
        fStack_1ec = (float)CStack_b0.z * _DAT_005f7558 - *(float *)(iVar5 + 0x28);
        afStack_e8[2] = fStack_1f4;
        afStack_e8[(uint)bVar9 * -2 + 3] = *(float *)((int)&stack0xfffffe10 + (uint)bVar9 * -8);
        fVar4 = fStack_9c;
        fVar3 = fStack_a0;
        fVar2 = fStack_a4;
        afStack_e8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
             *(float *)((int)&stack0xfffffe14 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
        fStack_48 = SQRT(afStack_e8[4] * afStack_e8[4] + afStack_e8[2] * afStack_e8[2]);
        afStack_e8[3] = 0.0;
        if (fStack_48 <= 0.0) {
          afStack_e8[2] = 0.0;
          afStack_e8[4] = 0.0;
        }
        else {
          fVar1 = 1.0 / fStack_48;
          afStack_e8[2] = afStack_e8[2] * fVar1;
          afStack_e8[3] = fVar1 * 0.0;
          afStack_e8[4] = afStack_e8[4] * fVar1;
        }
        afStack_1a8[2] = afStack_e8[2] * local_3c;
        afStack_1a8[3] = afStack_e8[3] * local_3c;
        fStack_198 = afStack_e8[4] * local_3c;
        fStack_194 = afStack_e8[2] * local_3c;
        afStack_1a8[(uint)bVar9 * -2 + 6] = afStack_1a8[(uint)bVar9 * -2 + 3];
        afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
             afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        fStack_20c = fVar2 + fStack_194;
        fStack_208 = fVar3 + fStack_190;
        fStack_204 = fVar4 + fStack_18c;
        afStack_94[2] = fVar2 + fStack_194;
        afStack_94[(uint)bVar9 * -2 + 3] = *(float *)((int)&stack0xfffffdf8 + (uint)bVar9 * -8);
        afStack_94[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
             *(float *)((int)&stack0xfffffdfc + (uint)bVar9 * -8 + (uint)bVar9 * -8);
        if (&stack0x00000000 != g_CDemonLightInstance.base.camera_name + 0x20) {
          _DAT_01cb3924 = afStack_94[2];
          _DAT_01cb3928 = afStack_94[3];
          _DAT_01cb392c = fStack_84;
        }
      }
      else {
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0043c780
                  (&g_CDemonCameraInstance,&CStack_b0,&CStack_170);
        CStack_b0.x = CStack_170.x;
        *(uint *)((int)&CStack_b0 + (uint)bVar9 * -8 + 4) =
             *(uint *)((int)&CStack_170 + (uint)bVar9 * -8 + 4);
        *(uint *)((int)&CStack_b0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             *(uint *)((int)&CStack_170 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        _DAT_01cb3924 = (float)CStack_b0.x * _DAT_005f7558;
        _DAT_01cb3928 = (float)CStack_b0.y * _DAT_005f7558;
        _DAT_01cb392c = (float)CStack_b0.z * _DAT_005f7558;
      }
    }
    else {
      pCVar6 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar6,g_CDoorClassInfo.name_hash);
      if (pCVar6 == (CDemonActor *)0x0) {
        if (&pCStack_34->location != (CLocation *)&DAT_01cb3924) {
          _DAT_01cb3924 = (pCStack_34->location).position.x;
          _DAT_01cb392c = (pCStack_34->location).position.z;
          _DAT_01cb3928 = (pCStack_34->location).position.y;
        }
      }
      else {
        core_door_cpp_FUN_0045fec0();
        fStack_1e8 = fStack_110;
        *(float *)((int)&stack0xfffffe1c + (uint)bVar9 * -8) = afStack_10c[(uint)bVar9 * -2];
        *(float *)((int)&stack0xfffffe20 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
             afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.inverted_matrix.m[2].z) {
          _DAT_01cb3924 = fStack_1e8;
          _DAT_01cb3928 = fStack_1e4;
          _DAT_01cb392c = fStack_1e0;
        }
      }
    }
    _DAT_01cb3940 = 0.0;
    _DAT_01cb3930 = (CCharacter *)0x1;
    iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    fStack_128 = _DAT_01cb3924 - *(float *)(iVar5 + 0x20);
    afStack_124[0] = _DAT_01cb3928 - *(float *)(iVar5 + 0x24);
    afStack_124[1] = _DAT_01cb392c - *(float *)(iVar5 + 0x28);
    fStack_164 = fStack_128;
    afStack_160[(uint)bVar9 * -2] = afStack_124[(uint)bVar9 * -2];
    afStack_160[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_124[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    if (SQRT(afStack_160[1] * afStack_160[1] +
             fStack_164 * fStack_164 + afStack_160[0] * afStack_160[0]) <= _DAT_005d8ac7) {
      _DAT_01cb3944 = 0;
    }
    else {
      _DAT_01cb3944 = 1;
    }
  }
  iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  afStack_e8[5] = *(float *)(iVar5 + 0x20) - _DAT_01cb3924;
  fStack_d0 = *(float *)(iVar5 + 0x24) - _DAT_01cb3928;
  fStack_cc = *(float *)(iVar5 + 0x28) - _DAT_01cb392c;
  fStack_1ac = afStack_e8[5];
  afStack_1a8[(uint)bVar9 * -2] = afStack_e8[(uint)bVar9 * -2 + 6];
  afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       afStack_e8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
  afStack_58[2] =
       SQRT(afStack_1a8[1] * afStack_1a8[1] +
            fStack_1ac * fStack_1ac + afStack_1a8[0] * afStack_1a8[0]);
  if ((_DAT_01cb3930 != (CCharacter *)0x0) && (_DAT_01cb3948 == (CCharacter *)0x0)) {
    if ((afStack_58[2] < _DAT_005d8acb) &&
       (_DAT_01cb3930 = _DAT_01cb3948, pCStack_38 == (CCharacter *)0x0)) {
      param_2[3] = 1;
    }
    iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    fStack_200 = _DAT_01cb3934 - *(float *)(iVar5 + 0x20);
    fStack_1fc = _DAT_01cb3938 - *(float *)(iVar5 + 0x24);
    fStack_1f8 = _DAT_01cb393c - *(float *)(iVar5 + 0x28);
    fStack_1dc = fStack_200;
    *(uint *)((int)&stack0xfffffe28 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xfffffe04 + (uint)bVar9 * -8);
    *(uint *)((int)&stack0xfffffe2c + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xfffffe08 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    if (_DAT_005d8acf <=
        SQRT(fStack_1d4 * fStack_1d4 + fStack_1dc * fStack_1dc + fStack_1d8 * fStack_1d8)) {
      _DAT_01cb3940 = 0.0;
    }
    else {
      _DAT_01cb3940 = *(float *)(param_1 + 0x284) + _DAT_01cb3940;
      if ((0x3f7fffff < (int)_DAT_01cb3940) &&
         (_DAT_01cb3930 = (CCharacter *)0x0, pCStack_38 == (CCharacter *)0x0)) {
        param_2[3] = 1;
      }
    }
    this_ptr = core_path_cpp_getPathMap_FUN_00513ea0((CLocation *)&DAT_01cb3924);
    iVar5 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00513650
                      (this_ptr,(CVector3f *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x20),
                       &CStack_11c,0);
    if (iVar5 == 0) {
      _DAT_01cb3930 = (CCharacter *)0x0;
    }
    else {
      fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                            (CStack_11c.y -
                             *(float *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x34));
      fVar2 = fStack_14 * _DAT_005d8ad3 * (float)_DAT_005d8adb;
      fStack_40 = -local_2c;
      param_2[10] = fVar2;
      if (fVar2 < fStack_40) {
        param_2[10] = fStack_40;
      }
      if (local_2c < (float)param_2[10]) {
        param_2[10] = local_2c;
      }
      iVar5 = _DAT_01cb3944;
      *param_2 = 1;
      if (iVar5 != 0) {
        param_2[2] = 1;
      }
    }
  }
  if (_DAT_01cb3948 != (CCharacter *)0x0) {
    iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    fStack_218 = (_DAT_01cb3948->base).location.position.x - *(float *)(iVar5 + 0x20);
    fStack_214 = (_DAT_01cb3948->base).location.position.y - *(float *)(iVar5 + 0x24);
    fStack_210 = (_DAT_01cb3948->base).location.position.z - *(float *)(iVar5 + 0x28);
    fStack_5c = fStack_218;
    afStack_58[(uint)bVar9 * -2] = *(float *)((int)&stack0xfffffdec + (uint)bVar9 * -8);
    afStack_58[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         *(float *)((int)&stack0xfffffdf0 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0();
    uStack_98 = uStack_188;
    afStack_94[(uint)bVar9 * -2] = afStack_1a8[(uint)bVar9 * -2 + 9];
    afStack_94[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_1a8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
    fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                          (afStack_94[0] -
                           *(float *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x34));
    fVar2 = fStack_14 * _DAT_005d8ad3 * (float)_DAT_005d8adb;
    fStack_1c = -local_2c;
    param_2[10] = fVar2;
    if (fVar2 < fStack_1c) {
      param_2[10] = fStack_1c;
    }
    if (local_2c < (float)param_2[10]) {
      param_2[10] = local_2c;
    }
    if (_DAT_01cb3930 != (CCharacter *)0x0) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                (*(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4),(CVector3f *)&DAT_01cb3924,
                 &CStack_1c4);
      fStack_140 = CStack_1c4.x;
      afStack_13c[(uint)bVar9 * -2] = *(float *)((int)&CStack_1c4 + (uint)bVar9 * -8 + 4);
      afStack_13c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           *(float *)((int)&CStack_1c4 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      if (0x40000000 < (int)fStack_140) {
        param_2[2] = 1;
        param_2[9] = 0x3f800000;
      }
      if (fStack_140 < _DAT_005d8ae3) {
        param_2[2] = 1;
        param_2[9] = 0xbf800000;
      }
      if (0x40000000 < (int)afStack_13c[1]) {
        param_2[2] = 1;
        *param_2 = 1;
      }
      if (afStack_13c[1] < _DAT_005d8ae3) {
        param_2[2] = 1;
        param_2[1] = 1;
      }
    }
    EVar8 = (*(((_DAT_01cb3948->base).vtable._uc)->_uc).getDeathState)(_DAT_01cb3948);
    if (EVar8 != DEATH_STATE_ALIVE) {
      _DAT_01cb3948 = (CCharacter *)0x0;
    }
  }
  _DAT_01cb3920 = _DAT_01c2a384;
  iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  if ((uint *)(iVar5 + 0x20) != (uint *)&DAT_01cb3934) {
    _DAT_01cb3938 = (float)*(uint *)(iVar5 + 0x24);
    _DAT_01cb393c = (float)*(uint *)(iVar5 + 0x28);
    _DAT_01cb3934 = (float)*(uint *)(iVar5 + 0x20);
    return;
  }
  return;
}
