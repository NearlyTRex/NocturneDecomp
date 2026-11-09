// Name: core_game.cpp_FUN_004d0ee0
// Address: 004d0ee0
// Address Range: [[004d0ee0, 004d175b]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_FUN_004d0ee0(CGame *this_ptr,SPlayerInput *player_control)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_FUN_004d0ee0(CGame *this_ptr,SPlayerInput *player_control)

{
  SPlayerInput *pSVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  
  if (*(int *)&this_ptr->field_0x2ac != 0) {
    (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x200);
    (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x201);
  }
  *(uint *)(player_control + 0x24) = 0;
  pSVar1 = player_control + 0x24;
  if ((&DAT_01c50950)[*(int *)&this_ptr->field_0x38] == '\0') {
    if ((((&DAT_01c50950)[*(int *)&this_ptr->field_0x3c] != '\0') &&
        ((int)*(float *)pSVar1 < 0x3f800000)) &&
       (*(float *)pSVar1 = *(float *)&g_CGamePtr->field_0x294 / _DAT_005e19c4 + *(float *)pSVar1,
       0x3f800000 < (int)*(float *)pSVar1)) {
      *(float *)pSVar1 = 1.0;
    }
  }
  else if ((_DAT_005e19c8 < *(float *)pSVar1) &&
          (fVar2 = *(float *)pSVar1 - *(float *)&g_CGamePtr->field_0x294 / _DAT_005e19c4,
          *(float *)pSVar1 = fVar2, fVar2 < _DAT_005e19c8)) {
    *(float *)pSVar1 = -1.0;
  }
  if ((&DAT_01c50950)[*(int *)&this_ptr->field_0x34] == '\0') {
    if (((&DAT_01c50950)[*(int *)&this_ptr->field_0x44] != '\0') ||
       ((&DAT_01c50950)[*(int *)&this_ptr->field_0x40] != '\0')) {
      fVar2 = (float)*(int *)&this_ptr->field_0xb0 * (float)_DAT_005e19d4 * (float)_DAT_005e19dc;
      pSVar1 = player_control + 0x28;
      if ((&DAT_01c50950)[*(int *)&this_ptr->field_0x44] == '\0') {
        if ((((&DAT_01c50950)[*(int *)&this_ptr->field_0x40] != '\0') &&
            ((int)*(float *)pSVar1 < 0x3e800000)) &&
           (*(float *)pSVar1 =
                 (*(float *)&g_CGamePtr->field_0x294 * _DAT_005e19cc) / fVar2 + *(float *)pSVar1,
           0x3e800000 < (int)*(float *)pSVar1)) {
          *(float *)pSVar1 = 0.25;
        }
      }
      else if ((_DAT_005e19e4 < *(float *)pSVar1) &&
              (fVar2 = *(float *)pSVar1 -
                       (*(float *)&g_CGamePtr->field_0x294 * _DAT_005e19cc) / fVar2,
              *(float *)pSVar1 = fVar2, fVar2 < _DAT_005e19e4)) {
        *(float *)pSVar1 = -0.25;
      }
      goto LAB_004d0feb;
    }
    fVar2 = (*(float *)&g_CGamePtr->field_0x294 * _DAT_005e19cc) / _DAT_005e19d0;
    pSVar1 = player_control + 0x28;
    if (0.0 <= *(float *)pSVar1) {
      *(float *)pSVar1 = *(float *)pSVar1 - fVar2;
      fVar2 = *(float *)pSVar1;
      goto joined_r0x004d1617;
    }
    fVar2 = *(float *)pSVar1 + fVar2;
LAB_004d0fd8:
    *(float *)(player_control + 0x28) = fVar2;
    if (*(float *)(player_control + 0x28) <= 0.0) goto LAB_004d0feb;
  }
  else {
    pSVar1 = player_control + 0x24;
    if ((&DAT_01c50950)[*(int *)&this_ptr->field_0x44] == '\0') {
      if ((((&DAT_01c50950)[*(int *)&this_ptr->field_0x40] != '\0') &&
          ((int)*(float *)pSVar1 < 0x3f800000)) &&
         (*(float *)pSVar1 = *(float *)&g_CGamePtr->field_0x294 / _DAT_005e19c4 + *(float *)pSVar1,
         0x3f800000 < (int)*(float *)pSVar1)) {
        *(float *)pSVar1 = 1.0;
      }
    }
    else if ((_DAT_005e19c8 < *(float *)pSVar1) &&
            (fVar2 = *(float *)pSVar1 - *(float *)&g_CGamePtr->field_0x294 / _DAT_005e19c4,
            *(float *)pSVar1 = fVar2, fVar2 < _DAT_005e19c8)) {
      *(float *)pSVar1 = -1.0;
    }
    fVar2 = (*(float *)&g_CGamePtr->field_0x294 * _DAT_005e19cc) / _DAT_005e19d0;
    pSVar1 = player_control + 0x28;
    if (*(float *)pSVar1 < 0.0) {
      fVar2 = *(float *)pSVar1 + fVar2;
      goto LAB_004d0fd8;
    }
    *(float *)pSVar1 = *(float *)pSVar1 - fVar2;
    fVar2 = *(float *)pSVar1;
joined_r0x004d1617:
    if (0.0 <= fVar2) goto LAB_004d0feb;
  }
  *(uint *)(player_control + 0x28) = 0;
LAB_004d0feb:
  if (((&DAT_01c50950)[*(int *)&this_ptr->field_0x74] == '\0') &&
     ((&DAT_01c50950)[*(int *)&this_ptr->field_0x78] == '\0')) {
    fVar2 = (*(float *)&g_CGamePtr->field_0x294 * _DAT_005e19cc) / _DAT_005e19e8;
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
    fVar2 = (float)*(int *)&this_ptr->field_0xb4 * (float)_DAT_005e19ec * (float)_DAT_005e19dc;
    pSVar1 = player_control + 0x2c;
    if ((&DAT_01c50950)[*(int *)&this_ptr->field_0x74] == '\0') {
      if ((((&DAT_01c50950)[*(int *)&this_ptr->field_0x78] != '\0') &&
          ((int)*(float *)pSVar1 < 0x3e800000)) &&
         (*(float *)pSVar1 =
               (*(float *)&g_CGamePtr->field_0x294 * _DAT_005e19cc) / fVar2 + *(float *)pSVar1,
         0x3e800000 < (int)*(float *)pSVar1)) {
        *(float *)pSVar1 = 0.25;
      }
    }
    else if ((_DAT_005e19e4 < *(float *)pSVar1) &&
            (fVar2 = *(float *)pSVar1 - (*(float *)&g_CGamePtr->field_0x294 * _DAT_005e19cc) / fVar2
            , *(float *)pSVar1 = fVar2, fVar2 < _DAT_005e19e4)) {
      *(float *)pSVar1 = -0.25;
    }
  }
  if (*(int *)&this_ptr->field_0xac == 0) {
    bVar4 = (&DAT_01c50950)[*(int *)&this_ptr->field_0x30];
  }
  else {
    bVar4 = (&DAT_01c50950)[*(int *)&this_ptr->field_0x30] == '\0';
  }
  *(uint *)(player_control + 8) = (uint)bVar4;
  if ((&DAT_01ccff98)[*(int *)&this_ptr->field_0x28] !=
      (&DAT_01c50950)[*(int *)&this_ptr->field_0x28]) {
    *(uint *)player_control = (uint)(byte)(&DAT_01c50950)[*(int *)&this_ptr->field_0x28];
  }
  iVar3 = *(int *)&this_ptr->field_0x2c;
  if ((&DAT_01ccff98)[iVar3] != (&DAT_01c50950)[iVar3]) {
    *(uint *)(player_control + 4) = (uint)(byte)(&DAT_01c50950)[iVar3];
  }
  iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
  if (iVar3 == 0) {
    iVar3 = *(int *)&this_ptr->field_0x48;
    if ((&DAT_01ccff98)[iVar3] != (&DAT_01c50950)[iVar3]) {
      *(uint *)(player_control + 0xc) = (uint)(byte)(&DAT_01c50950)[iVar3];
    }
  }
  else {
    *(uint *)(player_control + 0xc) = 0;
  }
  if ((&DAT_01ccff98)[*(int *)&this_ptr->field_0x4c] ==
      (&DAT_01c50950)[*(int *)&this_ptr->field_0x4c]) {
    *(uint *)(player_control + 0x10) = 0;
  }
  else {
    *(uint *)(player_control + 0x10) = (uint)(byte)(&DAT_01c50950)[*(int *)&this_ptr->field_0x4c];
  }
  if ((&DAT_01ccff98)[*(int *)&this_ptr->field_0x50] ==
      (&DAT_01c50950)[*(int *)&this_ptr->field_0x50]) {
    *(uint *)(player_control + 0x14) = 0;
  }
  else {
    *(uint *)(player_control + 0x14) = (uint)(byte)(&DAT_01c50950)[*(int *)&this_ptr->field_0x50];
  }
  if ((&DAT_01ccff98)[*(int *)&this_ptr->field_0x68] ==
      (&DAT_01c50950)[*(int *)&this_ptr->field_0x68]) {
    *(uint *)(player_control + 0x18) = 0;
  }
  else {
    *(uint *)(player_control + 0x18) = (uint)(byte)(&DAT_01c50950)[*(int *)&this_ptr->field_0x68];
  }
  if ((&DAT_01ccff98)[*(int *)&this_ptr->field_0x6c] ==
      (&DAT_01c50950)[*(int *)&this_ptr->field_0x6c]) {
    *(uint *)(player_control + 0x1c) = 0;
  }
  else {
    *(uint *)(player_control + 0x1c) = (uint)(byte)(&DAT_01c50950)[*(int *)&this_ptr->field_0x6c];
  }
  iVar3 = *(int *)&this_ptr->field_0x70;
  if ((&DAT_01ccff98)[iVar3] == (&DAT_01c50950)[iVar3]) {
    *(uint *)(player_control + 0x20) = 0;
  }
  else {
    *(uint *)(player_control + 0x20) = (uint)(byte)(&DAT_01c50950)[iVar3];
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,*(uint *)&this_ptr->field_0x90);
  if (iVar3 != 0) {
    core_inv_cpp_FUN_004f8dc0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),(CDemonActor *)0x0,
               5,1);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,*(uint *)&this_ptr->field_0x94);
  if (iVar3 != 0) {
    core_inv_cpp_FUN_004f8dc0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),(CDemonActor *)0x0,
               5,-1);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,*(uint *)&this_ptr->field_0x98);
  if (iVar3 != 0) {
    core_inv_cpp_FUN_004f8ec0((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),1);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,*(uint *)&this_ptr->field_0x9c);
  if (iVar3 != 0) {
    core_inv_cpp_FUN_004f8ec0((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),-1);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,*(uint *)&this_ptr->field_0xa4);
  if (iVar3 != 0) {
    core_inv_cpp_FUN_004f8fe0((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),1);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,*(uint *)&this_ptr->field_0xa0);
  if (iVar3 != 0) {
    core_inv_cpp_FUN_004fc370((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8));
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,*(uint *)&this_ptr->field_0x7c);
  if (iVar3 != 0) {
    core_inv_cpp_FUN_004f8dc0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),(CDemonActor *)0x0,
               0,1);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,*(uint *)&this_ptr->field_0x80);
  if (iVar3 != 0) {
    core_inv_cpp_FUN_004f8dc0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),(CDemonActor *)0x0,
               1,1);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,*(uint *)&this_ptr->field_0x84);
  if (iVar3 != 0) {
    core_inv_cpp_FUN_004f8dc0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),(CDemonActor *)0x0,
               2,1);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,*(uint *)&this_ptr->field_0x88);
  if (iVar3 != 0) {
    core_inv_cpp_FUN_004f8dc0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),(CDemonActor *)0x0,
               4,1);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,*(uint *)&this_ptr->field_0x8c);
  if (iVar3 != 0) {
    core_inv_cpp_FUN_004f8dc0
              ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),(CDemonActor *)0x0,
               3,1);
  }
  iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,*(uint *)&this_ptr->field_0x54);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  (**(code **)(*(int *)(iVar3 + 0x154) + 0x150))(iVar3);
  return;
}
