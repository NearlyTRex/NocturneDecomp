// Name: core_game.cpp_FUN_004b76c0
// Address: 004b76c0
// Address Range: [[004b76c0, 004b7fb6]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004b76c0(CGame *this_ptr,SPlayerInput *player_control)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004b76c0(CGame *this_ptr,SPlayerInput *player_control)

{
  SPlayerInput *pSVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  
  if (*(int *)&this_ptr->field_0x29c != 0) {
    (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x200);
    (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x201);
  }
  *(uint *)(player_control + 0x24) = 0;
  pSVar1 = player_control + 0x24;
  if ((&DAT_01c37790)[*(int *)&this_ptr->field_0x38] == '\0') {
    if ((((&DAT_01c37790)[*(int *)&this_ptr->field_0x3c] != '\0') &&
        ((int)*(float *)pSVar1 < 0x3f800000)) &&
       (*(float *)pSVar1 = *(float *)&g_CGamePtr->field_0x284 / _DAT_005d78c3 + *(float *)pSVar1,
       0x3f800000 < (int)*(float *)pSVar1)) {
      *(float *)pSVar1 = 1.0;
    }
  }
  else if ((_DAT_005d78c7 < *(float *)pSVar1) &&
          (fVar2 = *(float *)pSVar1 - *(float *)&g_CGamePtr->field_0x284 / _DAT_005d78c3,
          *(float *)pSVar1 = fVar2, fVar2 < _DAT_005d78c7)) {
    *(float *)pSVar1 = -1.0;
  }
  if ((&DAT_01c37790)[*(int *)&this_ptr->field_0x34] == '\0') {
    if (((&DAT_01c37790)[*(int *)&this_ptr->field_0x44] != '\0') ||
       ((&DAT_01c37790)[*(int *)&this_ptr->field_0x40] != '\0')) {
      fVar2 = (float)*(int *)&this_ptr->field_0xb0 * (float)_DAT_005d78d3 * (float)_DAT_005d78db;
      pSVar1 = player_control + 0x28;
      if ((&DAT_01c37790)[*(int *)&this_ptr->field_0x44] == '\0') {
        if ((((&DAT_01c37790)[*(int *)&this_ptr->field_0x40] != '\0') &&
            ((int)*(float *)pSVar1 < 0x3e800000)) &&
           (*(float *)pSVar1 =
                 (*(float *)&g_CGamePtr->field_0x284 * _DAT_005d78cb) / fVar2 + *(float *)pSVar1,
           0x3e800000 < (int)*(float *)pSVar1)) {
          *(float *)pSVar1 = 0.25;
        }
      }
      else if ((_DAT_005d78e3 < *(float *)pSVar1) &&
              (fVar2 = *(float *)pSVar1 -
                       (*(float *)&g_CGamePtr->field_0x284 * _DAT_005d78cb) / fVar2,
              *(float *)pSVar1 = fVar2, fVar2 < _DAT_005d78e3)) {
        *(float *)pSVar1 = -0.25;
      }
      goto LAB_004b77cb;
    }
    fVar2 = (*(float *)&g_CGamePtr->field_0x284 * _DAT_005d78cb) / _DAT_005d78cf;
    pSVar1 = player_control + 0x28;
    if (0.0 <= *(float *)pSVar1) {
      *(float *)pSVar1 = *(float *)pSVar1 - fVar2;
      fVar2 = *(float *)pSVar1;
      goto joined_r0x004b7da7;
    }
    fVar2 = *(float *)pSVar1 + fVar2;
LAB_004b77b8:
    *(float *)(player_control + 0x28) = fVar2;
    if (*(float *)(player_control + 0x28) <= 0.0) goto LAB_004b77cb;
  }
  else {
    pSVar1 = player_control + 0x24;
    if ((&DAT_01c37790)[*(int *)&this_ptr->field_0x44] == '\0') {
      if ((((&DAT_01c37790)[*(int *)&this_ptr->field_0x40] != '\0') &&
          ((int)*(float *)pSVar1 < 0x3f800000)) &&
         (*(float *)pSVar1 = *(float *)&g_CGamePtr->field_0x284 / _DAT_005d78c3 + *(float *)pSVar1,
         0x3f800000 < (int)*(float *)pSVar1)) {
        *(float *)pSVar1 = 1.0;
      }
    }
    else if ((_DAT_005d78c7 < *(float *)pSVar1) &&
            (fVar2 = *(float *)pSVar1 - *(float *)&g_CGamePtr->field_0x284 / _DAT_005d78c3,
            *(float *)pSVar1 = fVar2, fVar2 < _DAT_005d78c7)) {
      *(float *)pSVar1 = -1.0;
    }
    fVar2 = (*(float *)&g_CGamePtr->field_0x284 * _DAT_005d78cb) / _DAT_005d78cf;
    pSVar1 = player_control + 0x28;
    if (*(float *)pSVar1 < 0.0) {
      fVar2 = *(float *)pSVar1 + fVar2;
      goto LAB_004b77b8;
    }
    *(float *)pSVar1 = *(float *)pSVar1 - fVar2;
    fVar2 = *(float *)pSVar1;
joined_r0x004b7da7:
    if (0.0 <= fVar2) goto LAB_004b77cb;
  }
  *(uint *)(player_control + 0x28) = 0;
LAB_004b77cb:
  if (((&DAT_01c37790)[*(int *)&this_ptr->field_0x74] == '\0') &&
     ((&DAT_01c37790)[*(int *)&this_ptr->field_0x78] == '\0')) {
    fVar2 = (*(float *)&g_CGamePtr->field_0x284 * _DAT_005d78cb) / _DAT_005d78e7;
    pSVar1 = player_control + 0x2c;
    if (0.0 <= *(float *)pSVar1) {
      *(float *)pSVar1 = *(float *)pSVar1 - fVar2;
      if (*(float *)pSVar1 < 0.0) {
        *(float *)pSVar1 = 0.0;
      }
    }
    else {
      *(float *)pSVar1 = *(float *)pSVar1 + fVar2;
      if (0.0 < *(float *)pSVar1) {
        *(float *)pSVar1 = 0.0;
      }
    }
  }
  else {
    fVar2 = (float)*(int *)&this_ptr->field_0xb4 * (float)_DAT_005d78eb * (float)_DAT_005d78db;
    pSVar1 = player_control + 0x2c;
    if ((&DAT_01c37790)[*(int *)&this_ptr->field_0x74] == '\0') {
      if ((((&DAT_01c37790)[*(int *)&this_ptr->field_0x78] != '\0') &&
          ((int)*(float *)pSVar1 < 0x3e800000)) &&
         (*(float *)pSVar1 =
               (*(float *)&g_CGamePtr->field_0x284 * _DAT_005d78cb) / fVar2 + *(float *)pSVar1,
         0x3e800000 < (int)*(float *)pSVar1)) {
        *(float *)pSVar1 = 0.25;
      }
    }
    else if ((_DAT_005d78e3 < *(float *)pSVar1) &&
            (fVar2 = *(float *)pSVar1 - (*(float *)&g_CGamePtr->field_0x284 * _DAT_005d78cb) / fVar2
            , *(float *)pSVar1 = fVar2, fVar2 < _DAT_005d78e3)) {
      *(float *)pSVar1 = -0.25;
    }
  }
  if (*(int *)&this_ptr->field_0xac == 0) {
    bVar4 = (&DAT_01c37790)[*(int *)&this_ptr->field_0x30];
  }
  else {
    bVar4 = (&DAT_01c37790)[*(int *)&this_ptr->field_0x30] == '\0';
  }
  *(uint *)(player_control + 8) = (uint)bVar4;
  if ((&DAT_01cb7528)[*(int *)&this_ptr->field_0x28] !=
      (&DAT_01c37790)[*(int *)&this_ptr->field_0x28]) {
    *(uint *)player_control = (uint)(byte)(&DAT_01c37790)[*(int *)&this_ptr->field_0x28];
  }
  if ((&DAT_01cb7528)[*(int *)&this_ptr->field_0x2c] !=
      (&DAT_01c37790)[*(int *)&this_ptr->field_0x2c]) {
    *(uint *)(player_control + 4) = (uint)(byte)(&DAT_01c37790)[*(int *)&this_ptr->field_0x2c];
  }
  iVar3 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x114))(iVar3);
  if (iVar3 == 0) {
    if ((&DAT_01cb7528)[*(int *)&this_ptr->field_0x48] !=
        (&DAT_01c37790)[*(int *)&this_ptr->field_0x48]) {
      *(uint *)(player_control + 0xc) = (uint)(byte)(&DAT_01c37790)[*(int *)&this_ptr->field_0x48];
    }
  }
  else {
    *(uint *)(player_control + 0xc) = 0;
  }
  if ((&DAT_01cb7528)[*(int *)&this_ptr->field_0x4c] ==
      (&DAT_01c37790)[*(int *)&this_ptr->field_0x4c]) {
    *(uint *)(player_control + 0x10) = 0;
  }
  else {
    *(uint *)(player_control + 0x10) = (uint)(byte)(&DAT_01c37790)[*(int *)&this_ptr->field_0x4c];
  }
  if ((&DAT_01cb7528)[*(int *)&this_ptr->field_0x50] ==
      (&DAT_01c37790)[*(int *)&this_ptr->field_0x50]) {
    *(uint *)(player_control + 0x14) = 0;
  }
  else {
    *(uint *)(player_control + 0x14) = (uint)(byte)(&DAT_01c37790)[*(int *)&this_ptr->field_0x50];
  }
  if ((&DAT_01cb7528)[*(int *)&this_ptr->field_0x68] ==
      (&DAT_01c37790)[*(int *)&this_ptr->field_0x68]) {
    *(uint *)(player_control + 0x18) = 0;
  }
  else {
    *(uint *)(player_control + 0x18) = (uint)(byte)(&DAT_01c37790)[*(int *)&this_ptr->field_0x68];
  }
  if ((&DAT_01cb7528)[*(int *)&this_ptr->field_0x70] ==
      (&DAT_01c37790)[*(int *)&this_ptr->field_0x70]) {
    *(uint *)(player_control + 0x20) = 0;
  }
  else {
    *(uint *)(player_control + 0x20) = (uint)(byte)(&DAT_01c37790)[*(int *)&this_ptr->field_0x70];
  }
  if ((&DAT_01cb7528)[*(int *)&this_ptr->field_0xaf0] ==
      (&DAT_01c37790)[*(int *)&this_ptr->field_0xaf0]) {
    *(uint *)(player_control + 0x30) = 0;
  }
  else {
    *(uint *)(player_control + 0x30) = (uint)(byte)(&DAT_01c37790)[*(int *)&this_ptr->field_0xaf0];
  }
  iVar3 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,*(uint *)&this_ptr->field_0x90);
  if ((iVar3 != 0) &&
     ((iVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4),g_CDocClassInfo.name_hash),
      iVar3 == 0 || (*(float *)(iVar3 + 0x259b0) <= 0.0)))) {
    core_inv_cpp_FUN_004db9d0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,0,5,1);
  }
  iVar3 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,*(uint *)&this_ptr->field_0x94);
  if ((iVar3 != 0) &&
     ((iVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4),g_CDocClassInfo.name_hash),
      iVar3 == 0 || (*(float *)(iVar3 + 0x259b0) <= 0.0)))) {
    core_inv_cpp_FUN_004db9d0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,0,5,0xffffffff);
  }
  iVar3 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,*(uint *)&this_ptr->field_0x98);
  if (iVar3 != 0) {
    core_inv_cpp_FUN_004dbb50((CInventory *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c),1);
  }
  iVar3 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,*(uint *)&this_ptr->field_0x9c);
  if (iVar3 != 0) {
    core_inv_cpp_FUN_004dbb50((CInventory *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c),-1);
  }
  iVar3 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,*(uint *)&this_ptr->field_0xa4);
  if (iVar3 != 0) {
    core_inv_cpp_FUN_004dbc60((CInventory *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c),1);
  }
  iVar3 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,*(uint *)&this_ptr->field_0xa0);
  if (iVar3 != 0) {
    core_inv_cpp_FUN_004defa0((CInventory *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c));
  }
  iVar3 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,*(uint *)&this_ptr->field_0x7c);
  if ((iVar3 != 0) &&
     ((iVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4),g_CDocClassInfo.name_hash),
      iVar3 == 0 || (*(float *)(iVar3 + 0x259b0) <= 0.0)))) {
    core_inv_cpp_FUN_004db9d0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,0,0,1);
  }
  iVar3 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,*(uint *)&this_ptr->field_0x80);
  if ((iVar3 != 0) &&
     ((iVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4),g_CDocClassInfo.name_hash),
      iVar3 == 0 || (*(float *)(iVar3 + 0x259b0) <= 0.0)))) {
    core_inv_cpp_FUN_004db9d0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,0,3,1);
  }
  iVar3 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,*(uint *)&this_ptr->field_0x84);
  if ((iVar3 != 0) &&
     ((iVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                         (*(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4),g_CDocClassInfo.name_hash),
      iVar3 == 0 || (*(float *)(iVar3 + 0x259b0) <= 0.0)))) {
    core_inv_cpp_FUN_004db9d0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c,0,6,1);
    return;
  }
  return;
}
