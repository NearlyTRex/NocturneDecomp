// Name: core_fldnotes.cpp_FUN_004a3e40
// Address: 004a3e40
// Address Range: [[004a3e40, 004a3fb3]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004a3e40(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fldnotes_cpp_FUN_004a3e40(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  CAlphaBitmap *this_ptr;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  if (*(int *)(param_1 + 0x96c) != 0) {
    core_fldnotes_cpp_FUN_004a3fc0(param_1);
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900
            ((CAlphaBitmap *)(param_1 + 0x70),param_2,param_3,0xffff);
  if (*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) != 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,"?HeroIsLost" + 1);
    if (iVar1 == 0) {
      iVar1 = core_fldnotes_cpp_FUN_004a3d00
                        (param_1,*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x20,&iStack_1c,
                         &iStack_18);
      if (iVar1 < 0) goto LAB_004a3ed3;
      iVar1 = (param_3 + iStack_18) - _DAT_0061603c;
      iVar2 = (iStack_1c + param_2) - _DAT_00616038;
      this_ptr = &CAlphaBitmap_01caf1c8;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x6c) / 2 + param_3;
      iVar2 = *(int *)(param_1 + 0x68) / 2 + param_2;
      this_ptr = &CAlphaBitmap_01caf1dc;
    }
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900(this_ptr,iVar2,iVar1,0xffff);
  }
LAB_004a3ed3:
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x2c0)) {
    iStack_14 = param_1 + 0x2c4;
    iVar2 = param_1;
    do {
      if (*(int *)(iVar2 + 0x394) != 0) {
        engine_font_cpp_FUN_004a8df0
                  (_DAT_01511ccc,iStack_14 + iVar1 * 0xd4 + 100,*(int *)(iVar2 + 0x38c) + param_2,
                   param_3 + *(int *)(iVar2 + 0x390),1,0xffffffff);
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0xd4;
    } while (iVar1 < *(int *)(param_1 + 0x2c0));
  }
  return;
}
