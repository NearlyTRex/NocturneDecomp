// Name: unkafter_winrun.cpp_FUN_005823a0
// Address: 005823a0
// Address Range: [[005823a0, 005824a8]]
// Convention: unknown
// Signature: void unkafter_winrun_cpp_FUN_005823a0(int param_1,int param_2,UINT_PTR param_3)

#include "nocturne.h"

void unkafter_winrun_cpp_FUN_005823a0(int param_1,int param_2,UINT_PTR param_3)

{
  MMRESULT MVar1;
  int iVar2;
  tagJOYCAPSA tStack_1a0;
  
  iVar2 = param_1 * 0xac;
  unkafter_winrun_cpp_FUN_005824b0(param_1);
  *(int *)(iVar2 + 0x2d22c24) = param_2;
  *(UINT_PTR *)(param_1 * 4 + 0x2d22ed4) = param_3;
  *(uint *)(iVar2 + 0x2d22c28) = 1;
  *(uint *)(iVar2 + 0x2d22c2c) = 0;
  memset((void *)(iVar2 + 0x2d22c30),0,0x10);
  *(uint *)(iVar2 + 0x2d22c40) = 0;
  if ((param_2 != 0) && (param_2 != 4)) {
    memset(&tStack_1a0,0,4);
    MVar1 = joyGetDevCapsA(param_3,&tStack_1a0,0x194);
    if (MVar1 == 0) {
      *(uint *)(iVar2 + 0x2d22c30) = 1;
      *(uint *)(iVar2 + 0x2d22c34) = 1;
      *(UINT *)(iVar2 + 0x2d22c2c) = tStack_1a0.wNumButtons;
      *(uint *)(iVar2 + 0x2d22c38) = (uint)(((byte)tStack_1a0.wCaps & 1) != 0);
      *(uint *)(iVar2 + 0x2d22c3c) = (uint)(((byte)tStack_1a0.wCaps & 2) != 0);
      *(uint *)(iVar2 + 0x2d22c40) = (uint)(((byte)tStack_1a0.wCaps & 0x10) != 0);
      return;
    }
    *(uint *)(param_1 * 0xac + 0x2d22c28) = 0;
    return;
  }
  return;
}
