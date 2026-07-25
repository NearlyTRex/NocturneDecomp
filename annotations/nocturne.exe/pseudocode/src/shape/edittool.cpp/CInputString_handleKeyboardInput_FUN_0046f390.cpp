// Name: shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0046f390
// Address: 0046f390
// Address Range: [[0046f390, 0046f5bf]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_0046f390(int param_1)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_0046f390(int param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  iVar2 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x4b);
  if (iVar2 != 0) {
    bVar1 = true;
    if (0 < *(int *)(param_1 + 0x134)) {
      *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + -1;
    }
  }
  iVar2 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x4d);
  if (iVar2 != 0) {
    bVar1 = true;
    if (*(int *)(param_1 + 0x134) < *(int *)(param_1 + 0x130)) {
      *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + 1;
    }
  }
  iVar2 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x47);
  if (iVar2 != 0) {
    bVar1 = true;
    *(uint *)(param_1 + 0x134) = 0;
  }
  iVar2 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x4f);
  if (iVar2 != 0) {
    bVar1 = true;
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x130);
  }
  iVar2 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x1d);
  if (iVar2 == 0) {
    iVar2 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x2a);
    if (iVar2 == 0) {
      if (bVar1) {
        shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0046f130(param_1);
      }
      iVar2 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x53);
      if (iVar2 != 0) {
        iVar2 = *(int *)(param_1 + 0x134);
        if (iVar2 != *(int *)(param_1 + 0x138)) {
          shape_edittool_cpp_CInputString_deleteSelection_FUN_0046f250(param_1);
          return;
        }
        shape_edittool_cpp_CInputString_deleteRange_FUN_0046f1e0(param_1,iVar2,iVar2 + 1);
        return;
      }
    }
    else {
      iVar2 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x52);
      if (iVar2 != 0) {
        shape_edittool_cpp_CInputString_deleteSelection_FUN_0046f250(param_1);
        shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_0046f330(param_1);
      }
      iVar2 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x53);
      if (iVar2 != 0) {
        shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0046f2e0(param_1);
        shape_edittool_cpp_CInputString_deleteSelection_FUN_0046f250(param_1);
        return;
      }
    }
  }
  else {
    iVar2 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x2d);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0046f2e0(param_1);
      shape_edittool_cpp_CInputString_deleteSelection_FUN_0046f250(param_1);
    }
    iVar2 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x52);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0046f2e0(param_1);
    }
    iVar2 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x2e);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0046f2e0(param_1);
    }
    iVar2 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x2f);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_deleteSelection_FUN_0046f250(param_1);
      shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_0046f330(param_1);
    }
    iVar2 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x53);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_deleteSelection_FUN_0046f250(param_1);
    }
    wincore_winrun_cpp_clearKeypresses_FUN_00558ae0();
  }
  return;
}
